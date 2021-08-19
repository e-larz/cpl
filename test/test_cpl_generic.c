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
#include "test_cpl_generic.h"
// The API to test
#include "cpl_generic.h"
// C Standard Library
#include <assert.h>
#include <string.h> // strcmp()
// Misc
#include "test_util.h"
/*==============================================================================
    FUNCTION DECLARATION
==============================================================================*/
void TEST_CPL_GENERIC_FUNC(void);
/*==============================================================================
    FUNCTION DEFINITION
==============================================================================*/
/*------------------------------------------------------------------------------
    TEST_cpl_generic()
------------------------------------------------------------------------------*/
void TEST_cpl_generic(void)
{
    TEST_CPL_GENERIC_FUNC();
}
/*------------------------------------------------------------------------------
    TEST_CPL_GENERIC_FUNC()
------------------------------------------------------------------------------*/
void TEST_CPL_GENERIC_FUNC(void)
{
    assert(strcmp(STRINGIFY(CPL_GENERIC_FUNC(x, 0, foo, bar, char, int)),
        "_Generic((x), default: 0, foo_char : foo_char_bar , foo_int : foo_int_bar)") == 0);
}
