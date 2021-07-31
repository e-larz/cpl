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
#include "test_cpl_map.h"
// The API to test
#include "cpl_map.h"
// C Standard Library
#include <assert.h>
#include <string.h> // strcmp()
// Misc
#include "test_util.h"
/*==============================================================================
    FUNCTION DECLARATION
==============================================================================*/
void TEST_CPL_MAP_FIXED(void);
void TEST_CPL_MAP(void);
/*==============================================================================
    FUNCTION DEFINITION
==============================================================================*/
/*------------------------------------------------------------------------------
    TEST_cpl_map()
------------------------------------------------------------------------------*/
void TEST_cpl_map(void)
{
    TEST_CPL_MAP_FIXED();
    TEST_CPL_MAP();
}
/*------------------------------------------------------------------------------
    TEST_CPL_MAP_FIXED()
------------------------------------------------------------------------------*/
void TEST_CPL_MAP_FIXED(void)
{
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, (f),)), "M(f,)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, (f), a)), "M(f, a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, (f), a, b, c)), "M(f, a) S() M(f, b) S() M(f, c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, (f), ())), "M(f, ())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, (f), (a))), "M(f, (a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, (f), (a), (b), (c))), "M(f, (a)) S() M(f, (b)) S() M(f, (c))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, ((f)),)), "M((f),)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, ((f)), a)), "M((f), a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, ((f)), a, b, c)), "M((f), a) S() M((f), b) S() M((f), c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, ((f)), ())), "M((f), ())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, ((f)), (a))), "M((f), (a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, ((f)), (a), (b), (c))), "M((f), (a)) S() M((f), (b)) S() M((f), (c))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, (f, g),)), "M(f, g,)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, (f, g), a)), "M(f, g, a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, (f, g), a, b, c)), "M(f, g, a) S() M(f, g, b) S() M(f, g, c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, (f, g), ())), "M(f, g, ())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, (f, g), (a))), "M(f, g, (a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, S, (f, g), (a), (b), (c))), "M(f, g, (a)) S() M(f, g, (b)) S() M(f, g, (c))") == 0);

    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, (f),)), "M(f,)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, (f), a)), "M(f, a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, (f), a, b, c)), "M(f, a) , M(f, b) , M(f, c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, (f), ())), "M(f, ())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, (f), (a))), "M(f, (a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, (f), (a), (b), (c))), "M(f, (a)) , M(f, (b)) , M(f, (c))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, ((f)),)), "M((f),)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, ((f)), a)), "M((f), a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, ((f)), a, b, c)), "M((f), a) , M((f), b) , M((f), c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, ((f)), ())), "M((f), ())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, ((f)), (a))), "M((f), (a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, ((f)), (a), (b), (c))), "M((f), (a)) , M((f), (b)) , M((f), (c))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, (f, g),)), "M(f, g,)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, (f, g), a)), "M(f, g, a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, (f, g), a, b, c)), "M(f, g, a) , M(f, g, b) , M(f, g, c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, (f, g), ())), "M(f, g, ())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, (f, g), (a))), "M(f, g, (a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, COMMA, (f, g), (a), (b), (c))), "M(f, g, (a)) , M(f, g, (b)) , M(f, g, (c))") == 0);

    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, (f),)), "M(f,)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, (f), a)), "M(f, a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, (f), a, b, c)), "M(f, a) M(f, b) M(f, c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, (f), ())), "M(f, ())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, (f), (a))), "M(f, (a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, (f), (a), (b), (c))), "M(f, (a)) M(f, (b)) M(f, (c))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, ((f)),)), "M((f),)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, ((f)), a)), "M((f), a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, ((f)), a, b, c)), "M((f), a) M((f), b) M((f), c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, ((f)), ())), "M((f), ())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, ((f)), (a))), "M((f), (a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, ((f)), (a), (b), (c))), "M((f), (a)) M((f), (b)) M((f), (c))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, (f, g),)), "M(f, g,)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, (f, g), a)), "M(f, g, a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, (f, g), a, b, c)), "M(f, g, a) M(f, g, b) M(f, g, c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, (f, g), ())), "M(f, g, ())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, (f, g), (a))), "M(f, g, (a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, EMPTY, (f, g), (a), (b), (c))), "M(f, g, (a)) M(f, g, (b)) M(f, g, (c))") == 0);

    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , (f),)), "M(f,)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , (f), a)), "M(f, a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , (f), a, b, c)), "M(f, a) () M(f, b) () M(f, c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , (f), ())), "M(f, ())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , (f), (a))), "M(f, (a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , (f), (a), (b), (c))), "M(f, (a)) () M(f, (b)) () M(f, (c))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , ((f)),)), "M((f),)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , ((f)), a)), "M((f), a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , ((f)), a, b, c)), "M((f), a) () M((f), b) () M((f), c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , ((f)), ())), "M((f), ())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , ((f)), (a))), "M((f), (a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , ((f)), (a), (b), (c))), "M((f), (a)) () M((f), (b)) () M((f), (c))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , (f, g),)), "M(f, g,)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , (f, g), a)), "M(f, g, a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , (f, g), a, b, c)), "M(f, g, a) () M(f, g, b) () M(f, g, c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , (f, g), ())), "M(f, g, ())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , (f, g), (a))), "M(f, g, (a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(M, , (f, g), (a), (b), (c))), "M(f, g, (a)) () M(f, g, (b)) () M(f, g, (c))") == 0);

    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, (f),)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, (f), a)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, (f), a, b, c)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, (f), ())), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, (f), (a))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, (f), (a), (b), (c))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, ((f)),)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, ((f)), a)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, ((f)), a, b, c)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, ((f)), ())), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, ((f)), (a))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, ((f)), (a), (b), (c))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, (f, g),)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, (f, g), a)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, (f, g), a, b, c)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, (f, g), ())), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, (f, g), (a))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, EMPTY, (f, g), (a), (b), (c))), "") == 0);

    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , (f),)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , (f), a)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , (f), a, b, c)), "() ()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , (f), ())), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , (f), (a))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , (f), (a), (b), (c))), "() ()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , ((f)),)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , ((f)), a)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , ((f)), a, b, c)), "() ()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , ((f)), ())), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , ((f)), (a))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , ((f)), (a), (b), (c))), "() ()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , (f, g),)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , (f, g), a)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , (f, g), a, b, c)), "() ()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , (f, g), ())), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , (f, g), (a))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, , (f, g), (a), (b), (c))), "() ()") == 0);

    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), (f),)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), (f), a)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), (f), a, b, c)), "()() ()()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), (f), ())), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), (f), (a))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), (f), (a), (b), (c))), "()() ()()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), ((f)),)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), ((f)), a)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), ((f)), a, b, c)), "()() ()()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), ((f)), ())), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), ((f)), (a))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), ((f)), (a), (b), (c))), "()() ()()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), (f, g),)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), (f, g), a)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), (f, g), a, b, c)), "()() ()()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), (f, g), ())), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), (f, g), (a))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP_FIXED(EMPTY, (), (f, g), (a), (b), (c))), "()() ()()") == 0);
}
/*------------------------------------------------------------------------------
    TEST_CPL_MAP()
------------------------------------------------------------------------------*/
void TEST_CPL_MAP(void)
{
    assert(strcmp(STRINGIFY(CPL_MAP(M, S,)), "M()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, S, a)), "M(a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, S, a, b, c)), "M(a) S() M(b) S() M(c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, S, ())), "M(())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, S, (a))), "M((a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, S, (a), (b), (c))), "M((a)) S() M((b)) S() M((c))") == 0);

    assert(strcmp(STRINGIFY(CPL_MAP(M, COMMA,)), "M()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, COMMA, a)), "M(a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, COMMA, a, b, c)), "M(a) , M(b) , M(c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, COMMA, ())), "M(())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, COMMA, (a))), "M((a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, COMMA, (a), (b), (c))), "M((a)) , M((b)) , M((c))") == 0);

    assert(strcmp(STRINGIFY(CPL_MAP(M, EMPTY,)), "M()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, EMPTY, a)), "M(a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, EMPTY, a, b, c)), "M(a) M(b) M(c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, EMPTY, ())), "M(())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, EMPTY, (a))), "M((a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, EMPTY, (a), (b), (c))), "M((a)) M((b)) M((c))") == 0);

    assert(strcmp(STRINGIFY(CPL_MAP(M, ,)), "M()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, , a)), "M(a)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, , a, b, c)), "M(a) () M(b) () M(c)") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, , ())), "M(())") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, , (a))), "M((a))") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(M, , (a), (b), (c))), "M((a)) () M((b)) () M((c))") == 0);

    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, EMPTY,)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, EMPTY, a)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, EMPTY, a, b, c)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, EMPTY, ())), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, EMPTY, (a))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, EMPTY, (a), (b), (c))), "") == 0);

    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, ,)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, , a)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, , a, b, c)), "() ()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, , ())), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, , (a))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, , (a), (b), (c))), "() ()") == 0);

    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, (),)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, (), a)), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, (), a, b, c)), "()() ()()") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, (), ())), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, (), (a))), "") == 0);
    assert(strcmp(STRINGIFY(CPL_MAP(EMPTY, (), (a), (b), (c))), "()() ()()") == 0);
}
