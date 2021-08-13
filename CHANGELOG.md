# Changelog

This file is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/) but
doesn't follow it to the letter.

This project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html),
which says in its summary:

    Given a version number MAJOR.MINOR.PATCH, increment the:
      1. MAJOR version when you make incompatible API changes,
      2. MINOR version when you add functionality in a backwards compatible manner, and
      3. PATCH version when you make backwards compatible bug fixes.

## [Unreleased]

### Added

- `cpl_arg.h`:
  - `CPL_ARG_COUNT()` to count the number of arguments.
- `cpl_concat.h`:
  - `CPL_CONCAT_{2,3}()` to concatenate 2 or 3 arguments and evaluate the result.
  - `CPL_CONCAT_RAW_{2,3}()` to concatenate 2 or 3 arguments without evaluating the result.
- `cpl_generic.h`:
  - `CPL_GENERIC_FUNC()` to easily create `_Generic()` expressions.
- `cpl_logic.h`:
  - `CPL_BOOLEAN()` to convert any argument to a boolean value.
  - `CPL_NOT()`, `CPL_AND()`, `CPL_OR()`, `CPL_NAND()`, `CPL_NOR()`, `CPL_XOR()`
    and `CPL_XNOR()` to apply the respective boolean function to their argument(s).
- `cpl_map.h`:
  - `CPL_MAP()` to apply something to a list of arguments.
  - `CPL_MAP_FIXED()` to apply something to a list of arguments while having a fixed first argument.
- `cpl_token.h`:
  - `CPL_COMMA()` which expands to `,`.
  - `CPL_EMPTY()` which expands to nothing.
  - `CPL_SEMICOLON()` which expands to `;`.
- `cpl_type.h`:
  - 56 macros expanding to various list of C types and pointers to these types.
    - `CPL_TYPE_CHARACTER` which expands to `char, signed char, unsigned char`.
    - `CPL_TYPE_REAL_FLOATING` which expands to `float, double, long double`.
    - etc
- `cpl_util.h`:
  - `CPL_DEFER()` to delay the call to a macro.
