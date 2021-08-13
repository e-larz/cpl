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
#include "test_cpl_logic.h"
// The API to test
#include "cpl_logic.h"
/*==============================================================================
    FUNCTION DECLARATION
==============================================================================*/
void TEST_CPL_BOOLEAN(void);
void TEST_CPL_NOT(void);
void TEST_CPL_AND(void);
void TEST_CPL_OR(void);
void TEST_CPL_NAND(void);
void TEST_CPL_NOR(void);
void TEST_CPL_XOR(void);
void TEST_CPL_XNOR(void);
/*==============================================================================
    FUNCTION DEFINITION
==============================================================================*/
void TEST_cpl_logic(void)
{
    #define X
    #define Y 0
    #define Z 1

    TEST_CPL_BOOLEAN();
    TEST_CPL_NOT();
    TEST_CPL_AND();
    TEST_CPL_OR();
    TEST_CPL_NAND();
    TEST_CPL_NOR();
    TEST_CPL_XOR();
    TEST_CPL_XNOR();
}
void TEST_CPL_BOOLEAN(void)
{
    _Static_assert(CPL_BOOLEAN(0) == 0, "");
    _Static_assert(CPL_BOOLEAN(1) == 1, "");
    _Static_assert(CPL_BOOLEAN(X) == 0, "");
    _Static_assert(CPL_BOOLEAN(Y) == 0, "");
    _Static_assert(CPL_BOOLEAN(Z) == 1, "");
    _Static_assert(CPL_BOOLEAN(W) == 1, "");
}
void TEST_CPL_NOT(void)
{
    _Static_assert(CPL_NOT(0) == 1, "");
    _Static_assert(CPL_NOT(1) == 0, "");
    _Static_assert(CPL_NOT(X) == 1, "");
    _Static_assert(CPL_NOT(Y) == 1, "");
    _Static_assert(CPL_NOT(Z) == 0, "");
    _Static_assert(CPL_NOT(W) == 0, "");
}
void TEST_CPL_AND(void)
{
    _Static_assert(CPL_AND(0, 0) == 0, "");
    _Static_assert(CPL_AND(0, 1) == 0, "");
    _Static_assert(CPL_AND(0, X) == 0, "");
    _Static_assert(CPL_AND(0, Y) == 0, "");
    _Static_assert(CPL_AND(0, Z) == 0, "");
    _Static_assert(CPL_AND(0, W) == 0, "");

    _Static_assert(CPL_AND(1, 0) == 0, "");
    _Static_assert(CPL_AND(1, 1) == 1, "");
    _Static_assert(CPL_AND(1, X) == 0, "");
    _Static_assert(CPL_AND(1, Y) == 0, "");
    _Static_assert(CPL_AND(1, Z) == 1, "");
    _Static_assert(CPL_AND(1, W) == 1, "");

    _Static_assert(CPL_AND(X, 0) == 0, "");
    _Static_assert(CPL_AND(X, 1) == 0, "");
    _Static_assert(CPL_AND(X, X) == 0, "");
    _Static_assert(CPL_AND(X, Y) == 0, "");
    _Static_assert(CPL_AND(X, Z) == 0, "");
    _Static_assert(CPL_AND(X, W) == 0, "");

    _Static_assert(CPL_AND(Y, 0) == 0, "");
    _Static_assert(CPL_AND(Y, 1) == 0, "");
    _Static_assert(CPL_AND(Y, X) == 0, "");
    _Static_assert(CPL_AND(Y, Y) == 0, "");
    _Static_assert(CPL_AND(Y, Z) == 0, "");
    _Static_assert(CPL_AND(Y, W) == 0, "");

    _Static_assert(CPL_AND(Z, 0) == 0, "");
    _Static_assert(CPL_AND(Z, 1) == 1, "");
    _Static_assert(CPL_AND(Z, X) == 0, "");
    _Static_assert(CPL_AND(Z, Y) == 0, "");
    _Static_assert(CPL_AND(Z, Z) == 1, "");
    _Static_assert(CPL_AND(Z, W) == 1, "");

    _Static_assert(CPL_AND(W, 0) == 0, "");
    _Static_assert(CPL_AND(W, 1) == 1, "");
    _Static_assert(CPL_AND(W, X) == 0, "");
    _Static_assert(CPL_AND(W, Y) == 0, "");
    _Static_assert(CPL_AND(W, Z) == 1, "");
    _Static_assert(CPL_AND(W, W) == 1, "");
}
void TEST_CPL_OR(void)
{
    _Static_assert(CPL_OR(0, 0) == 0, "");
    _Static_assert(CPL_OR(0, 1) == 1, "");
    _Static_assert(CPL_OR(0, X) == 0, "");
    _Static_assert(CPL_OR(0, Y) == 0, "");
    _Static_assert(CPL_OR(0, Z) == 1, "");
    _Static_assert(CPL_OR(0, W) == 1, "");

    _Static_assert(CPL_OR(1, 0) == 1, "");
    _Static_assert(CPL_OR(1, 1) == 1, "");
    _Static_assert(CPL_OR(1, X) == 1, "");
    _Static_assert(CPL_OR(1, Y) == 1, "");
    _Static_assert(CPL_OR(1, Z) == 1, "");
    _Static_assert(CPL_OR(1, W) == 1, "");

    _Static_assert(CPL_OR(X, 0) == 0, "");
    _Static_assert(CPL_OR(X, 1) == 1, "");
    _Static_assert(CPL_OR(X, X) == 0, "");
    _Static_assert(CPL_OR(X, Y) == 0, "");
    _Static_assert(CPL_OR(X, Z) == 1, "");
    _Static_assert(CPL_OR(X, W) == 1, "");

    _Static_assert(CPL_OR(Y, 0) == 0, "");
    _Static_assert(CPL_OR(Y, 1) == 1, "");
    _Static_assert(CPL_OR(Y, X) == 0, "");
    _Static_assert(CPL_OR(Y, Y) == 0, "");
    _Static_assert(CPL_OR(Y, Z) == 1, "");
    _Static_assert(CPL_OR(Y, W) == 1, "");

    _Static_assert(CPL_OR(Z, 0) == 1, "");
    _Static_assert(CPL_OR(Z, 1) == 1, "");
    _Static_assert(CPL_OR(Z, X) == 1, "");
    _Static_assert(CPL_OR(Z, Y) == 1, "");
    _Static_assert(CPL_OR(Z, Z) == 1, "");
    _Static_assert(CPL_OR(Z, W) == 1, "");

    _Static_assert(CPL_OR(W, 0) == 1, "");
    _Static_assert(CPL_OR(W, 1) == 1, "");
    _Static_assert(CPL_OR(W, X) == 1, "");
    _Static_assert(CPL_OR(W, Y) == 1, "");
    _Static_assert(CPL_OR(W, Z) == 1, "");
    _Static_assert(CPL_OR(W, W) == 1, "");
}
void TEST_CPL_NAND(void)
{
    _Static_assert(CPL_NAND(0, 0) == 1, "");
    _Static_assert(CPL_NAND(0, 1) == 1, "");
    _Static_assert(CPL_NAND(0, X) == 1, "");
    _Static_assert(CPL_NAND(0, Y) == 1, "");
    _Static_assert(CPL_NAND(0, Z) == 1, "");
    _Static_assert(CPL_NAND(0, W) == 1, "");

    _Static_assert(CPL_NAND(1, 0) == 1, "");
    _Static_assert(CPL_NAND(1, 1) == 0, "");
    _Static_assert(CPL_NAND(1, X) == 1, "");
    _Static_assert(CPL_NAND(1, Y) == 1, "");
    _Static_assert(CPL_NAND(1, Z) == 0, "");
    _Static_assert(CPL_NAND(1, W) == 0, "");

    _Static_assert(CPL_NAND(X, 0) == 1, "");
    _Static_assert(CPL_NAND(X, 1) == 1, "");
    _Static_assert(CPL_NAND(X, X) == 1, "");
    _Static_assert(CPL_NAND(X, Y) == 1, "");
    _Static_assert(CPL_NAND(X, Z) == 1, "");
    _Static_assert(CPL_NAND(X, W) == 1, "");

    _Static_assert(CPL_NAND(Y, 0) == 1, "");
    _Static_assert(CPL_NAND(Y, 1) == 1, "");
    _Static_assert(CPL_NAND(Y, X) == 1, "");
    _Static_assert(CPL_NAND(Y, Y) == 1, "");
    _Static_assert(CPL_NAND(Y, Z) == 1, "");
    _Static_assert(CPL_NAND(Y, W) == 1, "");

    _Static_assert(CPL_NAND(Z, 0) == 1, "");
    _Static_assert(CPL_NAND(Z, 1) == 0, "");
    _Static_assert(CPL_NAND(Z, X) == 1, "");
    _Static_assert(CPL_NAND(Z, Y) == 1, "");
    _Static_assert(CPL_NAND(Z, Z) == 0, "");
    _Static_assert(CPL_NAND(Z, W) == 0, "");

    _Static_assert(CPL_NAND(W, 0) == 1, "");
    _Static_assert(CPL_NAND(W, 1) == 0, "");
    _Static_assert(CPL_NAND(W, X) == 1, "");
    _Static_assert(CPL_NAND(W, Y) == 1, "");
    _Static_assert(CPL_NAND(W, Z) == 0, "");
    _Static_assert(CPL_NAND(W, W) == 0, "");
}
void TEST_CPL_NOR(void)
{
    _Static_assert(CPL_NOR(0, 0) == 1, "");
    _Static_assert(CPL_NOR(0, 1) == 0, "");
    _Static_assert(CPL_NOR(0, X) == 1, "");
    _Static_assert(CPL_NOR(0, Y) == 1, "");
    _Static_assert(CPL_NOR(0, Z) == 0, "");
    _Static_assert(CPL_NOR(0, W) == 0, "");

    _Static_assert(CPL_NOR(1, 0) == 0, "");
    _Static_assert(CPL_NOR(1, 1) == 0, "");
    _Static_assert(CPL_NOR(1, X) == 0, "");
    _Static_assert(CPL_NOR(1, Y) == 0, "");
    _Static_assert(CPL_NOR(1, Z) == 0, "");
    _Static_assert(CPL_NOR(1, W) == 0, "");

    _Static_assert(CPL_NOR(X, 0) == 1, "");
    _Static_assert(CPL_NOR(X, 1) == 0, "");
    _Static_assert(CPL_NOR(X, X) == 1, "");
    _Static_assert(CPL_NOR(X, Y) == 1, "");
    _Static_assert(CPL_NOR(X, Z) == 0, "");
    _Static_assert(CPL_NOR(X, W) == 0, "");

    _Static_assert(CPL_NOR(Y, 0) == 1, "");
    _Static_assert(CPL_NOR(Y, 1) == 0, "");
    _Static_assert(CPL_NOR(Y, X) == 1, "");
    _Static_assert(CPL_NOR(Y, Y) == 1, "");
    _Static_assert(CPL_NOR(Y, Z) == 0, "");
    _Static_assert(CPL_NOR(Y, W) == 0, "");

    _Static_assert(CPL_NOR(Z, 0) == 0, "");
    _Static_assert(CPL_NOR(Z, 1) == 0, "");
    _Static_assert(CPL_NOR(Z, X) == 0, "");
    _Static_assert(CPL_NOR(Z, Y) == 0, "");
    _Static_assert(CPL_NOR(Z, Z) == 0, "");
    _Static_assert(CPL_NOR(Z, W) == 0, "");

    _Static_assert(CPL_NOR(W, 0) == 0, "");
    _Static_assert(CPL_NOR(W, 1) == 0, "");
    _Static_assert(CPL_NOR(W, X) == 0, "");
    _Static_assert(CPL_NOR(W, Y) == 0, "");
    _Static_assert(CPL_NOR(W, Z) == 0, "");
    _Static_assert(CPL_NOR(W, W) == 0, "");
}
void TEST_CPL_XOR(void)
{
    _Static_assert(CPL_XOR(0, 0) == 0, "");
    _Static_assert(CPL_XOR(0, 1) == 1, "");
    _Static_assert(CPL_XOR(0, X) == 0, "");
    _Static_assert(CPL_XOR(0, Y) == 0, "");
    _Static_assert(CPL_XOR(0, Z) == 1, "");
    _Static_assert(CPL_XOR(0, W) == 1, "");

    _Static_assert(CPL_XOR(1, 0) == 1, "");
    _Static_assert(CPL_XOR(1, 1) == 0, "");
    _Static_assert(CPL_XOR(1, X) == 1, "");
    _Static_assert(CPL_XOR(1, Y) == 1, "");
    _Static_assert(CPL_XOR(1, Z) == 0, "");
    _Static_assert(CPL_XOR(1, W) == 0, "");

    _Static_assert(CPL_XOR(X, 0) == 0, "");
    _Static_assert(CPL_XOR(X, 1) == 1, "");
    _Static_assert(CPL_XOR(X, X) == 0, "");
    _Static_assert(CPL_XOR(X, Y) == 0, "");
    _Static_assert(CPL_XOR(X, Z) == 1, "");
    _Static_assert(CPL_XOR(X, W) == 1, "");

    _Static_assert(CPL_XOR(Y, 0) == 0, "");
    _Static_assert(CPL_XOR(Y, 1) == 1, "");
    _Static_assert(CPL_XOR(Y, X) == 0, "");
    _Static_assert(CPL_XOR(Y, Y) == 0, "");
    _Static_assert(CPL_XOR(Y, Z) == 1, "");
    _Static_assert(CPL_XOR(Y, W) == 1, "");

    _Static_assert(CPL_XOR(Z, 0) == 1, "");
    _Static_assert(CPL_XOR(Z, 1) == 0, "");
    _Static_assert(CPL_XOR(Z, X) == 1, "");
    _Static_assert(CPL_XOR(Z, Y) == 1, "");
    _Static_assert(CPL_XOR(Z, Z) == 0, "");
    _Static_assert(CPL_XOR(Z, W) == 0, "");

    _Static_assert(CPL_XOR(W, 0) == 1, "");
    _Static_assert(CPL_XOR(W, 1) == 0, "");
    _Static_assert(CPL_XOR(W, X) == 1, "");
    _Static_assert(CPL_XOR(W, Y) == 1, "");
    _Static_assert(CPL_XOR(W, Z) == 0, "");
    _Static_assert(CPL_XOR(W, W) == 0, "");
}
void TEST_CPL_XNOR(void)
{
    _Static_assert(CPL_XNOR(0, 0) == 1, "");
    _Static_assert(CPL_XNOR(0, 1) == 0, "");
    _Static_assert(CPL_XNOR(0, X) == 1, "");
    _Static_assert(CPL_XNOR(0, Y) == 1, "");
    _Static_assert(CPL_XNOR(0, Z) == 0, "");
    _Static_assert(CPL_XNOR(0, W) == 0, "");

    _Static_assert(CPL_XNOR(1, 0) == 0, "");
    _Static_assert(CPL_XNOR(1, 1) == 1, "");
    _Static_assert(CPL_XNOR(1, X) == 0, "");
    _Static_assert(CPL_XNOR(1, Y) == 0, "");
    _Static_assert(CPL_XNOR(1, Z) == 1, "");
    _Static_assert(CPL_XNOR(1, W) == 1, "");

    _Static_assert(CPL_XNOR(X, 0) == 1, "");
    _Static_assert(CPL_XNOR(X, 1) == 0, "");
    _Static_assert(CPL_XNOR(X, X) == 1, "");
    _Static_assert(CPL_XNOR(X, Y) == 1, "");
    _Static_assert(CPL_XNOR(X, Z) == 0, "");
    _Static_assert(CPL_XNOR(X, W) == 0, "");

    _Static_assert(CPL_XNOR(Y, 0) == 1, "");
    _Static_assert(CPL_XNOR(Y, 1) == 0, "");
    _Static_assert(CPL_XNOR(Y, X) == 1, "");
    _Static_assert(CPL_XNOR(Y, Y) == 1, "");
    _Static_assert(CPL_XNOR(Y, Z) == 0, "");
    _Static_assert(CPL_XNOR(Y, W) == 0, "");

    _Static_assert(CPL_XNOR(Z, 0) == 0, "");
    _Static_assert(CPL_XNOR(Z, 1) == 1, "");
    _Static_assert(CPL_XNOR(Z, X) == 0, "");
    _Static_assert(CPL_XNOR(Z, Y) == 0, "");
    _Static_assert(CPL_XNOR(Z, Z) == 1, "");
    _Static_assert(CPL_XNOR(Z, W) == 1, "");

    _Static_assert(CPL_XNOR(W, 0) == 0, "");
    _Static_assert(CPL_XNOR(W, 1) == 1, "");
    _Static_assert(CPL_XNOR(W, X) == 0, "");
    _Static_assert(CPL_XNOR(W, Y) == 0, "");
    _Static_assert(CPL_XNOR(W, Z) == 1, "");
    _Static_assert(CPL_XNOR(W, W) == 1, "");
}
