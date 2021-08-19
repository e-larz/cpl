// SPDX-License-Identifier: 0BSD
/*!
 * @file
 * @licence{
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
#include "test_cpl_util.h"
// The API to test
#include "cpl_util.h"
// C Standard Library
#include <assert.h>
#include <string.h> // strcmp()
#include <stdio.h>
// Misc
#include "test_util.h"
/*==============================================================================
    FUNCTION DECLARATION
==============================================================================*/
void TEST_CPL_DEFER(void);
/*==============================================================================
    FUNCTION DEFINITION
==============================================================================*/
/*------------------------------------------------------------------------------
    TEST_cpl_util()
------------------------------------------------------------------------------*/
void TEST_cpl_util(void)
{
    TEST_CPL_DEFER();
}
/*------------------------------------------------------------------------------
    TEST_CPL_DEFER()
------------------------------------------------------------------------------*/
void TEST_CPL_DEFER(void)
{
    #define A foo, bar
    #define B baz
    #define C A, B

    assert(strcmp(STRINGIFY(CPL_DEFER(M, foo, bar)), "M(foo, bar)") == 0);
    assert(strcmp(STRINGIFY(CPL_DEFER(M, A, B)), "M(foo, bar, baz)") == 0);
    assert(strcmp(STRINGIFY(CPL_DEFER(M, A, A)), "M(foo, bar, foo, bar)") == 0);
    assert(strcmp(STRINGIFY(CPL_DEFER(M, A, C)), "M(foo, bar, foo, bar, baz)") == 0);

    #define M(...) __VA_ARGS__

    assert(strcmp(STRINGIFY(CPL_DEFER(M, foo, bar)), "foo, bar") == 0);
    assert(strcmp(STRINGIFY(CPL_DEFER(M, A, B)), "foo, bar, baz") == 0);
    assert(strcmp(STRINGIFY(CPL_DEFER(M, A, A)), "foo, bar, foo, bar") == 0);
    assert(strcmp(STRINGIFY(CPL_DEFER(M, A, C)), "foo, bar, foo, bar, baz") == 0);
}
