# CPL - C Preprocessor Library

[![pipeline status](https://gitlab.com/callback/cpl/badges/master/pipeline.svg)](https://gitlab.com/callback/cpl/-/commits/master)
[![license](https://img.shields.io/badge/license-0BSD-blue)](LICENSE)
[![doxygen](https://img.shields.io/badge/doc-doxygen-blue)](https://callback.gitlab.io/cpl)

A C11 preprocessor library providing useful macros.

## Table of Contents

- [Quick overview](#quick-overview)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Usage](#usage)
- [Versioning](#versioning)
- [Changelog](#changelog)
- [Contributing](#contributing)
- [Interesting links](#interesting-links)
- [License](#license)

## Quick overview

```c
#include <cpl/cpl.h>

int main(void)
{
    // Count number of arguments
    int cnt = CPL_ARG_COUNT(a, b, c, d, e); // cnt = 5

    // Map list of arguments to a function
    CPL_MAP(puts, CPL_SEMICOLON, "foo", "bar", "baz");
    // puts("foo");
    // puts("bar");
    // puts("baz");

    // Map list of arguments to a function taking a fixed first argument
    CPL_MAP_FIXED(printf, CPL_SEMICOLON, ("%s\n"), "foo", "bar", "baz");
    // printf("%s\n", "foo");
    // printf("%s\n", "bar");
    // printf("%s\n", "baz");

    // Boolean evaluation
    #define HAS_A 1
    #define HAS_B 1
    #if CPL_AND(HAS_A, HAS_B)
    // ...
    #endif

    // _Generic() selection
    int x = CPL_GENERIC_FUNC(x, 0, foo, bar, char, int)(a, b);
    /* x = _Generic((x),
              default : 0,
              foo_char: foo_char_bar,
              foo_int : foo_int_bar
          )(a, b);
        => x = foo_int_bar(a, b);
    */
}
```

## Getting Started

### Prerequisites

Although `cpl` is a header/macro only library, a `C11` compliant compiler is
needed to use it in your project and to compile the tests.

### Installation

[Download](https://gitlab.com/callback/cpl/-/archive/develop/cpl-develop.zip) or
clone the repository:

```
git clone https://gitlab.com/callback/cpl.git
```

Optionally run the tests:

```
cd cpl
make all
make check
```

Install the headers globally to the standard default location `/usr/local/include/cpl`:

```
make install
```

Or install them to a different path `/my/custom/path/include/cpl`:

```
make install prefix=/my/custom/path
```

Finally you can also just take the content of the `include` directory and
manually put it wherever you want.

### Usage

Add `/usr/local/include/cpl` or `/my/custom/path/include/cpl` to your include
paths.

Include the main header:

```c
#include <cpl/cpl.h>
```

## Versioning

This project follows [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## Changelog

See the [CHANGELOG.md](CHANGELOG.md) file.

## Contributing

See the [CONTRIBUTING.md](CONTRIBUTING.md) file.

## Interesting links

Here are a few interesting projects using the C preprocessor.

- [P99](https://gitlab.inria.fr/gustedt/p99): _P99 is a suite of macro and function definitions that ease the programming in C99 [...]_.
  - The author also has an interesting [blog](https://gustedt.wordpress.com/).
- [pfultz2/Cloak](https://github.com/pfultz2/Cloak/wiki/C-Preprocessor-tricks,-tips,-and-idioms): _A mini-preprocessor library to demostrate the recursive capabilities of the preprocessor_.
- [mcinglis/libpp](https://github.com/mcinglis/libpp): _Functional-programming macros for the C preprocessor_.
- [18sg/uSHET](https://github.com/18sg/uSHET): _A Malloc-Free SHET Client Library for Microcontrollers_.
  - In particular the very well documented [cpp_magic.h](https://github.com/18sg/uSHET/blob/master/lib/cpp_magic.h) and its accompanying [article](http://jhnet.co.uk/articles/cpp_magic).
- [Hirrolot/metalang99](https://github.com/Hirrolot/metalang99): _Full-blown preprocessor metaprogramming_.
  - The author also has a way more complete list of interesting links [here](https://github.com/Hirrolot/awesome-c-preprocessor).

## License

This project is licensed under the _very_ permissive [BSD Zero Clause License](LICENSE).

More information on the 0BSD license:

- [The 0BSD's creator website](https://landley.net/toybox/license.html)
- [BSD Zero Clause License | Software Package Data Exchange (SPDX)](https://spdx.org/licenses/0BSD.html)
- [Zero-Clause BSD (0BSD) | Open Source Initiative](https://opensource.org/licenses/0BSD)
- [BSD Zero Clause License | Choose a License](https://choosealicense.com/licenses/0bsd/)
