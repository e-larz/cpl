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
// The API to test
#include "test_cpl_arg.h"
#include "test_cpl_concat.h"
#include "test_cpl_generic.h"
#include "test_cpl_logic.h"
#include "test_cpl_map.h"
#include "test_cpl_type.h"
#include "test_cpl_util.h"
// C Standard Library
#include <stdio.h>  // printf()
#include <stdlib.h> // EXIT_SUCCESS
/*==============================================================================
    MAIN
==============================================================================*/
int main(void)
{
    TEST_cpl_arg();
    TEST_cpl_concat();
    TEST_cpl_generic();
    TEST_cpl_logic();
    TEST_cpl_map();
    TEST_cpl_type();
    TEST_cpl_util();

    printf("TEST: OK!\n");
    return EXIT_SUCCESS;
}
