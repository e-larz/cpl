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
#include "test_cpl_type.h"
// The API to test
#include "cpl_type.h"
// C Standard Library
#include <assert.h>
#include <string.h> // strcmp()
// Misc
#include "test_util.h"
/*==============================================================================
    FUNCTION DECLARATION
==============================================================================*/
void TEST_CPL_TYPE_STD_SIGNED_INTEGER(void);
void TEST_CPL_TYPE_SIGNED_INTEGER(void);
void TEST_CPL_TYPE_STD_UNSIGNED_INTEGER(void);
void TEST_CPL_TYPE_UNSIGNED_INTEGER(void);
void TEST_CPL_TYPE_STD_INTEGER(void);
void TEST_CPL_TYPE_REAL_FLOATING(void);
void TEST_CPL_TYPE_COMPLEX(void);
void TEST_CPL_TYPE_FLOATING(void);
void TEST_CPL_TYPE_BASIC(void);
void TEST_CPL_TYPE_CHARACTER(void);
void TEST_CPL_TYPE_INTEGER(void);
void TEST_CPL_TYPE_REAL(void);
void TEST_CPL_TYPE_ARITHMETIC(void);
void TEST_CPL_TYPE_STD_SIGNED_INTEGER_PTR(void);
void TEST_CPL_TYPE_SIGNED_INTEGER_PTR(void);
void TEST_CPL_TYPE_STD_UNSIGNED_INTEGER_PTR(void);
void TEST_CPL_TYPE_UNSIGNED_INTEGER_PTR(void);
void TEST_CPL_TYPE_STD_INTEGER_PTR(void);
void TEST_CPL_TYPE_REAL_FLOATING_PTR(void);
void TEST_CPL_TYPE_COMPLEX_PTR(void);
void TEST_CPL_TYPE_FLOATING_PTR(void);
void TEST_CPL_TYPE_BASIC_PTR(void);
void TEST_CPL_TYPE_CHARACTER_PTR(void);
void TEST_CPL_TYPE_INTEGER_PTR(void);
void TEST_CPL_TYPE_REAL_PTR(void);
void TEST_CPL_TYPE_ARITHMETIC_PTR(void);
void TEST_CPL_TYPE_POINTER(void);
void TEST_CPL_TYPE_SCALAR(void);
void TEST_CPL_TYPE_STD_SIGNED_INTEGER_ABBR(void);
void TEST_CPL_TYPE_SIGNED_INTEGER_ABBR(void);
void TEST_CPL_TYPE_STD_UNSIGNED_INTEGER_ABBR(void);
void TEST_CPL_TYPE_UNSIGNED_INTEGER_ABBR(void);
void TEST_CPL_TYPE_STD_INTEGER_ABBR(void);
void TEST_CPL_TYPE_REAL_FLOATING_ABBR(void);
void TEST_CPL_TYPE_COMPLEX_ABBR(void);
void TEST_CPL_TYPE_FLOATING_ABBR(void);
void TEST_CPL_TYPE_BASIC_ABBR(void);
void TEST_CPL_TYPE_CHARACTER_ABBR(void);
void TEST_CPL_TYPE_INTEGER_ABBR(void);
void TEST_CPL_TYPE_REAL_ABBR(void);
void TEST_CPL_TYPE_ARITHMETIC_ABBR(void);
void TEST_CPL_TYPE_STD_SIGNED_INTEGER_PTR_ABBR(void);
void TEST_CPL_TYPE_SIGNED_INTEGER_PTR_ABBR(void);
void TEST_CPL_TYPE_STD_UNSIGNED_INTEGER_PTR_ABBR(void);
void TEST_CPL_TYPE_UNSIGNED_INTEGER_PTR_ABBR(void);
void TEST_CPL_TYPE_STD_INTEGER_PTR_ABBR(void);
void TEST_CPL_TYPE_REAL_FLOATING_PTR_ABBR(void);
void TEST_CPL_TYPE_COMPLEX_PTR_ABBR(void);
void TEST_CPL_TYPE_FLOATING_PTR_ABBR(void);
void TEST_CPL_TYPE_BASIC_PTR_ABBR(void);
void TEST_CPL_TYPE_CHARACTER_PTR_ABBR(void);
void TEST_CPL_TYPE_INTEGER_PTR_ABBR(void);
void TEST_CPL_TYPE_REAL_PTR_ABBR(void);
void TEST_CPL_TYPE_ARITHMETIC_PTR_ABBR(void);
void TEST_CPL_TYPE_POINTER_ABBR(void);
void TEST_CPL_TYPE_SCALAR_ABBR(void);
/*==============================================================================
    FUNCTION DEFINITION
==============================================================================*/
/*------------------------------------------------------------------------------
    TEST_cpl_type()
------------------------------------------------------------------------------*/
void TEST_cpl_type(void)
{
    TEST_CPL_TYPE_STD_SIGNED_INTEGER();
    TEST_CPL_TYPE_SIGNED_INTEGER();
    TEST_CPL_TYPE_STD_UNSIGNED_INTEGER();
    TEST_CPL_TYPE_UNSIGNED_INTEGER();
    TEST_CPL_TYPE_STD_INTEGER();
    TEST_CPL_TYPE_REAL_FLOATING();
    TEST_CPL_TYPE_COMPLEX();
    TEST_CPL_TYPE_FLOATING();
    TEST_CPL_TYPE_BASIC();
    TEST_CPL_TYPE_CHARACTER();
    TEST_CPL_TYPE_INTEGER();
    TEST_CPL_TYPE_REAL();
    TEST_CPL_TYPE_ARITHMETIC();
    TEST_CPL_TYPE_STD_SIGNED_INTEGER_PTR();
    TEST_CPL_TYPE_SIGNED_INTEGER_PTR();
    TEST_CPL_TYPE_STD_UNSIGNED_INTEGER_PTR();
    TEST_CPL_TYPE_UNSIGNED_INTEGER_PTR();
    TEST_CPL_TYPE_STD_INTEGER_PTR();
    TEST_CPL_TYPE_REAL_FLOATING_PTR();
    TEST_CPL_TYPE_COMPLEX_PTR();
    TEST_CPL_TYPE_FLOATING_PTR();
    TEST_CPL_TYPE_BASIC_PTR();
    TEST_CPL_TYPE_CHARACTER_PTR();
    TEST_CPL_TYPE_INTEGER_PTR();
    TEST_CPL_TYPE_REAL_PTR();
    TEST_CPL_TYPE_ARITHMETIC_PTR();
    TEST_CPL_TYPE_POINTER();
    TEST_CPL_TYPE_SCALAR();
    TEST_CPL_TYPE_STD_SIGNED_INTEGER_ABBR();
    TEST_CPL_TYPE_SIGNED_INTEGER_ABBR();
    TEST_CPL_TYPE_STD_UNSIGNED_INTEGER_ABBR();
    TEST_CPL_TYPE_UNSIGNED_INTEGER_ABBR();
    TEST_CPL_TYPE_STD_INTEGER_ABBR();
    TEST_CPL_TYPE_REAL_FLOATING_ABBR();
    TEST_CPL_TYPE_COMPLEX_ABBR();
    TEST_CPL_TYPE_FLOATING_ABBR();
    TEST_CPL_TYPE_BASIC_ABBR();
    TEST_CPL_TYPE_CHARACTER_ABBR();
    TEST_CPL_TYPE_INTEGER_ABBR();
    TEST_CPL_TYPE_REAL_ABBR();
    TEST_CPL_TYPE_ARITHMETIC_ABBR();
    TEST_CPL_TYPE_STD_SIGNED_INTEGER_PTR_ABBR();
    TEST_CPL_TYPE_SIGNED_INTEGER_PTR_ABBR();
    TEST_CPL_TYPE_STD_UNSIGNED_INTEGER_PTR_ABBR();
    TEST_CPL_TYPE_UNSIGNED_INTEGER_PTR_ABBR();
    TEST_CPL_TYPE_STD_INTEGER_PTR_ABBR();
    TEST_CPL_TYPE_REAL_FLOATING_PTR_ABBR();
    TEST_CPL_TYPE_COMPLEX_PTR_ABBR();
    TEST_CPL_TYPE_FLOATING_PTR_ABBR();
    TEST_CPL_TYPE_BASIC_PTR_ABBR();
    TEST_CPL_TYPE_CHARACTER_PTR_ABBR();
    TEST_CPL_TYPE_INTEGER_PTR_ABBR();
    TEST_CPL_TYPE_REAL_PTR_ABBR();
    TEST_CPL_TYPE_ARITHMETIC_PTR_ABBR();
    TEST_CPL_TYPE_POINTER_ABBR();
    TEST_CPL_TYPE_SCALAR_ABBR();
}
/*==============================================================================
    FUNCTION DEFINITION
==============================================================================*/
void TEST_CPL_TYPE_STD_SIGNED_INTEGER(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_STD_SIGNED_INTEGER),
        "signed char, short int, int, long int, long long int") == 0);
}
void TEST_CPL_TYPE_SIGNED_INTEGER(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_SIGNED_INTEGER),
        "signed char, short int, int, long int, long long int") == 0);
}
void TEST_CPL_TYPE_STD_UNSIGNED_INTEGER(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_UNSIGNED_INTEGER),
        "_Bool, unsigned char, unsigned short int, unsigned int, "
        "unsigned long int, unsigned long long int") == 0);
}
void TEST_CPL_TYPE_UNSIGNED_INTEGER(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_UNSIGNED_INTEGER),
        "_Bool, unsigned char, unsigned short int, unsigned int, "
        "unsigned long int, unsigned long long int") == 0);
}
void TEST_CPL_TYPE_STD_INTEGER(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_STD_INTEGER),
        "signed char, short int, int, long int, long long int, _Bool, "
        "unsigned char, unsigned short int, unsigned int, "
        "unsigned long int, unsigned long long int") == 0);
}
void TEST_CPL_TYPE_REAL_FLOATING(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_REAL_FLOATING),
        "float, double, long double") == 0);
}
void TEST_CPL_TYPE_COMPLEX(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_COMPLEX),
        "float _Complex, double _Complex, long double _Complex") == 0);
}
void TEST_CPL_TYPE_FLOATING(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_FLOATING),
        "float, double, long double, float _Complex, double _Complex, "
        "long double _Complex") == 0);
}
void TEST_CPL_TYPE_BASIC(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_BASIC),
        "char, signed char, short int, int, long int, long long int, "
        "_Bool, unsigned char, unsigned short int, unsigned int, "
        "unsigned long int, unsigned long long int, float, double, "
        "long double, float _Complex, double _Complex, "
        "long double _Complex") == 0);
}
void TEST_CPL_TYPE_CHARACTER(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_CHARACTER),
        "char, signed char, unsigned char") == 0);
}
void TEST_CPL_TYPE_INTEGER(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_INTEGER),
        "char, signed char, short int, int, long int, long long int, "
        "_Bool, unsigned char, unsigned short int, unsigned int, "
        "unsigned long int, unsigned long long int") == 0);
}
void TEST_CPL_TYPE_REAL(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_REAL),
        "char, signed char, short int, int, long int, long long int, "
        "_Bool, unsigned char, unsigned short int, unsigned int, "
        "unsigned long int, unsigned long long int, float, double, "
        "long double") == 0);
}
void TEST_CPL_TYPE_ARITHMETIC(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_ARITHMETIC),
        "char, signed char, short int, int, long int, long long int, "
        "_Bool, unsigned char, unsigned short int, unsigned int, "
        "unsigned long int, unsigned long long int, float, double, "
        "long double, float _Complex, double _Complex, "
        "long double _Complex") == 0);
}
void TEST_CPL_TYPE_STD_SIGNED_INTEGER_PTR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_STD_SIGNED_INTEGER_PTR),
        "signed char *, short int *, int *, long int *, long long int *") == 0);
}
void TEST_CPL_TYPE_SIGNED_INTEGER_PTR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_SIGNED_INTEGER_PTR),
        "signed char *, short int *, int *, long int *, long long int *") == 0);
}
void TEST_CPL_TYPE_STD_UNSIGNED_INTEGER_PTR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_STD_UNSIGNED_INTEGER_PTR),
        "_Bool *, unsigned char *, unsigned short int *, unsigned int *, "
        "unsigned long int *, unsigned long long int *") == 0);
}
void TEST_CPL_TYPE_UNSIGNED_INTEGER_PTR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_UNSIGNED_INTEGER_PTR),
        "_Bool *, unsigned char *, unsigned short int *, unsigned int *, "
        "unsigned long int *, unsigned long long int *") == 0);
}
void TEST_CPL_TYPE_STD_INTEGER_PTR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_STD_INTEGER_PTR),
        "signed char *, short int *, int *, long int *, long long int *, "
        "_Bool *, unsigned char *, unsigned short int *, unsigned int *, "
        "unsigned long int *, unsigned long long int *") == 0);
}
void TEST_CPL_TYPE_REAL_FLOATING_PTR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_REAL_FLOATING_PTR),
        "float *, double *, long double *") == 0);
}
void TEST_CPL_TYPE_COMPLEX_PTR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_COMPLEX_PTR),
        "float _Complex *, double _Complex *, long double _Complex *") == 0);
}
void TEST_CPL_TYPE_FLOATING_PTR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_FLOATING_PTR),
        "float *, double *, long double *, float _Complex *, "
        "double _Complex *, long double _Complex *") == 0);
}
void TEST_CPL_TYPE_BASIC_PTR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_BASIC_PTR),
        "char *, signed char *, short int *, int *, long int *, "
        "long long int *, _Bool *, unsigned char *, unsigned short int *, "
        "unsigned int *, unsigned long int *, unsigned long long int *, "
        "float *, double *, long double *, float _Complex *, "
        "double _Complex *, long double _Complex *") == 0);
}
void TEST_CPL_TYPE_CHARACTER_PTR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_CHARACTER_PTR),
        "char *, signed char *, unsigned char *") == 0);
}
void TEST_CPL_TYPE_INTEGER_PTR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_INTEGER_PTR),
        "char *, signed char *, short int *, int *, long int *, "
        "long long int *, _Bool *, unsigned char *, unsigned short int *, "
        "unsigned int *, unsigned long int *, unsigned long long int *") == 0);
}
void TEST_CPL_TYPE_REAL_PTR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_REAL_PTR),
        "char *, signed char *, short int *, int *, long int *, "
        "long long int *, _Bool *, unsigned char *, unsigned short int *, "
        "unsigned int *, unsigned long int *, unsigned long long int *, "
        "float *, double *, long double *") == 0);
}
void TEST_CPL_TYPE_ARITHMETIC_PTR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_ARITHMETIC_PTR),
        "char *, signed char *, short int *, int *, long int *, "
        "long long int *, _Bool *, unsigned char *, unsigned short int *, "
        "unsigned int *, unsigned long int *, unsigned long long int *, "
        "float *, double *, long double *, float _Complex *, "
        "double _Complex *, long double _Complex *") == 0);
}
void TEST_CPL_TYPE_POINTER(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_POINTER),
        "char *, signed char *, short int *, int *, long int *, "
        "long long int *, _Bool *, unsigned char *, unsigned short int *, "
        "unsigned int *, unsigned long int *, unsigned long long int *, "
        "float *, double *, long double *, float _Complex *, "
        "double _Complex *, long double _Complex *") == 0);
}
void TEST_CPL_TYPE_SCALAR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_SCALAR),
        "char, signed char, short int, int, long int, long long int, "
        "_Bool, unsigned char, unsigned short int, unsigned int, "
        "unsigned long int, unsigned long long int, float, double, "
        "long double, float _Complex, double _Complex, "
        "long double _Complex, char *, signed char *, short int *, int *, "
        "long int *, long long int *, _Bool *, unsigned char *, "
        "unsigned short int *, unsigned int *, unsigned long int *, "
        "unsigned long long int *, float *, double *, long double *, "
        "float _Complex *, double _Complex *, long double _Complex *") == 0);
}
void TEST_CPL_TYPE_STD_SIGNED_INTEGER_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_STD_SIGNED_INTEGER_ABBR),
        "schar, short, int, long, llong") == 0);
}
void TEST_CPL_TYPE_SIGNED_INTEGER_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_SIGNED_INTEGER_ABBR),
        "schar, short, int, long, llong") == 0);
}
void TEST_CPL_TYPE_STD_UNSIGNED_INTEGER_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_STD_UNSIGNED_INTEGER_ABBR),
        "_Bool, uchar, ushort, uint, ulong, ullong") == 0);
}
void TEST_CPL_TYPE_UNSIGNED_INTEGER_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_UNSIGNED_INTEGER_ABBR),
        "_Bool, uchar, ushort, uint, ulong, ullong") == 0);
}
void TEST_CPL_TYPE_STD_INTEGER_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_STD_INTEGER_ABBR),
        "schar, short, int, long, llong, _Bool, uchar, ushort, uint, "
        "ulong, ullong") == 0);
}
void TEST_CPL_TYPE_REAL_FLOATING_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_REAL_FLOATING_ABBR),
        "float, double, ldouble") == 0);
}
void TEST_CPL_TYPE_COMPLEX_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_COMPLEX_ABBR),
        "floatcx, doublecx, ldoublecx") == 0);
}
void TEST_CPL_TYPE_FLOATING_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_FLOATING_ABBR),
        "float, double, ldouble, floatcx, doublecx, ldoublecx") == 0);
}
void TEST_CPL_TYPE_BASIC_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_BASIC_ABBR),
        "char, schar, short, int, long, llong, _Bool, uchar, ushort, "
        "uint, ulong, ullong, float, double, ldouble, floatcx, "
        "doublecx, ldoublecx") == 0);
}
void TEST_CPL_TYPE_CHARACTER_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_CHARACTER_ABBR),
        "char, schar, uchar") == 0);
}
void TEST_CPL_TYPE_INTEGER_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_INTEGER_ABBR),
        "char, schar, short, int, long, llong, _Bool, uchar, ushort, "
        "uint, ulong, ullong") == 0);
}
void TEST_CPL_TYPE_REAL_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_REAL_ABBR),
        "char, schar, short, int, long, llong, _Bool, uchar, ushort, "
        "uint, ulong, ullong, float, double, ldouble") == 0);
}
void TEST_CPL_TYPE_ARITHMETIC_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_ARITHMETIC_ABBR),
        "char, schar, short, int, long, llong, _Bool, uchar, ushort, "
        "uint, ulong, ullong, float, double, ldouble, floatcx, "
        "doublecx, ldoublecx") == 0);
}
void TEST_CPL_TYPE_STD_SIGNED_INTEGER_PTR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_STD_SIGNED_INTEGER_PTR_ABBR),
        "schar_ptr, short_ptr, int_ptr, long_ptr, llong_ptr") == 0);
}
void TEST_CPL_TYPE_SIGNED_INTEGER_PTR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_SIGNED_INTEGER_PTR_ABBR),
        "schar_ptr, short_ptr, int_ptr, long_ptr, llong_ptr") == 0);
}
void TEST_CPL_TYPE_STD_UNSIGNED_INTEGER_PTR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_STD_UNSIGNED_INTEGER_PTR_ABBR),
        "_Bool_ptr, uchar_ptr, ushort_ptr, uint_ptr, ulong_ptr, "
        "ullong_ptr") == 0);
}
void TEST_CPL_TYPE_UNSIGNED_INTEGER_PTR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_UNSIGNED_INTEGER_PTR_ABBR),
        "_Bool_ptr, uchar_ptr, ushort_ptr, uint_ptr, ulong_ptr, "
        "ullong_ptr") == 0);
}
void TEST_CPL_TYPE_STD_INTEGER_PTR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_STD_INTEGER_PTR_ABBR),
        "schar_ptr, short_ptr, int_ptr, long_ptr, llong_ptr, _Bool_ptr, "
        "uchar_ptr, ushort_ptr, uint_ptr, ulong_ptr, ullong_ptr") == 0);
}
void TEST_CPL_TYPE_REAL_FLOATING_PTR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_REAL_FLOATING_PTR_ABBR),
        "float_ptr, double_ptr, ldouble_ptr") == 0);
}
void TEST_CPL_TYPE_COMPLEX_PTR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_COMPLEX_PTR_ABBR),
        "floatcx_ptr, doublecx_ptr, ldoublecx_ptr") == 0);
}
void TEST_CPL_TYPE_FLOATING_PTR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_FLOATING_PTR_ABBR),
        "float_ptr, double_ptr, ldouble_ptr, floatcx_ptr, doublecx_ptr, "
        "ldoublecx_ptr") == 0);
}
void TEST_CPL_TYPE_BASIC_PTR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_BASIC_PTR_ABBR),
        "char_ptr, schar_ptr, short_ptr, int_ptr, long_ptr, llong_ptr, "
        "_Bool_ptr, uchar_ptr, ushort_ptr, uint_ptr, ulong_ptr, "
        "ullong_ptr, float_ptr, double_ptr, ldouble_ptr, floatcx_ptr, "
        "doublecx_ptr, ldoublecx_ptr") == 0);
}
void TEST_CPL_TYPE_CHARACTER_PTR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_CHARACTER_PTR_ABBR),
        "char_ptr, schar_ptr, uchar_ptr") == 0);
}
void TEST_CPL_TYPE_INTEGER_PTR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_INTEGER_PTR_ABBR),
        "char_ptr, schar_ptr, short_ptr, int_ptr, long_ptr, llong_ptr, "
        "_Bool_ptr, uchar_ptr, ushort_ptr, uint_ptr, ulong_ptr, "
        "ullong_ptr") == 0);
}
void TEST_CPL_TYPE_REAL_PTR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_REAL_PTR_ABBR),
        "char_ptr, schar_ptr, short_ptr, int_ptr, long_ptr, llong_ptr, "
        "_Bool_ptr, uchar_ptr, ushort_ptr, uint_ptr, ulong_ptr, "
        "ullong_ptr, float_ptr, double_ptr, ldouble_ptr") == 0);
}
void TEST_CPL_TYPE_ARITHMETIC_PTR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_ARITHMETIC_PTR_ABBR),
        "char_ptr, schar_ptr, short_ptr, int_ptr, long_ptr, llong_ptr, "
        "_Bool_ptr, uchar_ptr, ushort_ptr, uint_ptr, ulong_ptr, "
        "ullong_ptr, float_ptr, double_ptr, ldouble_ptr, floatcx_ptr, "
        "doublecx_ptr, ldoublecx_ptr") == 0);
}
void TEST_CPL_TYPE_POINTER_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_POINTER_ABBR),
        "char_ptr, schar_ptr, short_ptr, int_ptr, long_ptr, llong_ptr, "
        "_Bool_ptr, uchar_ptr, ushort_ptr, uint_ptr, ulong_ptr, "
        "ullong_ptr, float_ptr, double_ptr, ldouble_ptr, floatcx_ptr, "
        "doublecx_ptr, ldoublecx_ptr")== 0);
}
void TEST_CPL_TYPE_SCALAR_ABBR(void)
{
    assert(strcmp(STRINGIFY(CPL_TYPE_SCALAR_ABBR),
        "char, schar, short, int, long, llong, _Bool, uchar, ushort, "
        "uint, ulong, ullong, float, double, ldouble, floatcx, "
        "doublecx, ldoublecx, char_ptr, schar_ptr, short_ptr, int_ptr, "
        "long_ptr, llong_ptr, _Bool_ptr, uchar_ptr, ushort_ptr, "
        "uint_ptr, ulong_ptr, ullong_ptr, float_ptr, double_ptr, "
        "ldouble_ptr, floatcx_ptr, doublecx_ptr, ldoublecx_ptr") == 0);
}
