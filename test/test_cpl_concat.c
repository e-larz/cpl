// SPDX-License-Identifier: 0BSD
/*!
 * @file
 * @license{
 * BSD Zero Clause License
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 * }
 */
/*==============================================================================
    INCLUDE
==============================================================================*/
// Own header
#include "test_cpl_concat.h"
// The API to test
#include "cpl_concat.h"
// C Standard Library
#include <assert.h>
#include <string.h> // strcmp()
// Misc
#include "test_util.h"
/*==============================================================================
    FUNCTION DEFINITION
==============================================================================*/
void TEST_cpl_concat(void)
{
    #define A foo
    #define B bar
    #define UNDERSCORE _

    _Static_assert(CPL_CONCAT_RAW_2(0, 0) == 0, "");
    _Static_assert(CPL_CONCAT_RAW_2(1, 0) == 10, "");
    _Static_assert(CPL_CONCAT_RAW_2(-1, 0) == -10, "");
    assert(strcmp(STRINGIFY(CPL_CONCAT_RAW_2(foo, bar)), "foobar") == 0);
    assert(strcmp(STRINGIFY(CPL_CONCAT_RAW_2(A, B)), "AB") == 0);

    _Static_assert(CPL_CONCAT_2(0, 0) == 0, "");
    _Static_assert(CPL_CONCAT_2(1, 0) == 10, "");
    _Static_assert(CPL_CONCAT_2(-1, 0) == -10, "");
    assert(strcmp(STRINGIFY(CPL_CONCAT_2(foo, bar)), "foobar") == 0);
    assert(strcmp(STRINGIFY(CPL_CONCAT_2(A, B)), "foobar") == 0);

    _Static_assert(CPL_CONCAT_RAW_3(0, 0, 0) == 0, "");
    _Static_assert(CPL_CONCAT_RAW_3(1, 0, 1) == 101, "");
    _Static_assert(CPL_CONCAT_RAW_3(-1, 0, 1) == -101, "");
    assert(strcmp(STRINGIFY(CPL_CONCAT_RAW_3(foo, UNDERSCORE, bar)), "fooUNDERSCOREbar") == 0);
    assert(strcmp(STRINGIFY(CPL_CONCAT_RAW_3(A, UNDERSCORE, B)), "AUNDERSCOREB") == 0);

    _Static_assert(CPL_CONCAT_3(0, 0, 0) == 0, "");
    _Static_assert(CPL_CONCAT_3(1, 0, 1) == 101, "");
    _Static_assert(CPL_CONCAT_3(-1, 0, 1) == -101, "");
    assert(strcmp(STRINGIFY(CPL_CONCAT_3(foo, UNDERSCORE, bar)), "foo_bar") == 0);
    assert(strcmp(STRINGIFY(CPL_CONCAT_3(A, UNDERSCORE, B)), "foo_bar") == 0);
}
