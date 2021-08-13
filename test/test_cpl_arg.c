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
#include "test_cpl_arg.h"
// The API to test
#include "cpl_arg.h"
// CPL
#include "generated/cpl_number_asc_gen.h"
/*==============================================================================
    FUNCTION DECLARATION
==============================================================================*/
void TEST_CPL_ARG_COUNT(void);
/*==============================================================================
    FUNCTION DEFINITION
==============================================================================*/
/*------------------------------------------------------------------------------
    TEST_cpl_arg()
------------------------------------------------------------------------------*/
void TEST_cpl_arg(void)
{
    TEST_CPL_ARG_COUNT();
}
/*------------------------------------------------------------------------------
    TEST_CPL_ARG_COUNT()
------------------------------------------------------------------------------*/
void TEST_CPL_ARG_COUNT(void)
{
    _Static_assert(CPL_ARG_COUNT() == 1, "");
    _Static_assert(CPL_ARG_COUNT(()) == 1, "");
    _Static_assert(CPL_ARG_COUNT(,) == 2, "");
    _Static_assert(CPL_ARG_COUNT(,,) == 3, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_1) == 1, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_2) == 2, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_3) == 3, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_4) == 4, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_5) == 5, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_6) == 6, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_7) == 7, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_8) == 8, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_9) == 9, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_10) == 10, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_11) == 11, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_12) == 12, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_13) == 13, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_14) == 14, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_15) == 15, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_16) == 16, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_17) == 17, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_18) == 18, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_19) == 19, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_20) == 20, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_21) == 21, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_22) == 22, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_23) == 23, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_24) == 24, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_25) == 25, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_26) == 26, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_27) == 27, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_28) == 28, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_29) == 29, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_30) == 30, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_31) == 31, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_32) == 32, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_33) == 33, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_34) == 34, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_35) == 35, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_36) == 36, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_37) == 37, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_38) == 38, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_39) == 39, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_40) == 40, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_41) == 41, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_42) == 42, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_43) == 43, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_44) == 44, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_45) == 45, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_46) == 46, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_47) == 47, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_48) == 48, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_49) == 49, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_50) == 50, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_51) == 51, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_52) == 52, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_53) == 53, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_54) == 54, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_55) == 55, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_56) == 56, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_57) == 57, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_58) == 58, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_59) == 59, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_60) == 60, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_61) == 61, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_62) == 62, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_63) == 63, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_64) == 64, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_65) == 65, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_66) == 66, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_67) == 67, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_68) == 68, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_69) == 69, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_70) == 70, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_71) == 71, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_72) == 72, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_73) == 73, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_74) == 74, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_75) == 75, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_76) == 76, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_77) == 77, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_78) == 78, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_79) == 79, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_80) == 80, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_81) == 81, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_82) == 82, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_83) == 83, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_84) == 84, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_85) == 85, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_86) == 86, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_87) == 87, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_88) == 88, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_89) == 89, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_90) == 90, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_91) == 91, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_92) == 92, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_93) == 93, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_94) == 94, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_95) == 95, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_96) == 96, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_97) == 97, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_98) == 98, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_99) == 99, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_100) == 100, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_101) == 101, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_102) == 102, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_103) == 103, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_104) == 104, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_105) == 105, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_106) == 106, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_107) == 107, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_108) == 108, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_109) == 109, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_110) == 110, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_111) == 111, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_112) == 112, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_113) == 113, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_114) == 114, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_115) == 115, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_116) == 116, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_117) == 117, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_118) == 118, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_119) == 119, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_120) == 120, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_121) == 121, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_122) == 122, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_123) == 123, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_124) == 124, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_125) == 125, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_126) == 126, "");
    _Static_assert(CPL_ARG_COUNT(CPL_NUMBER_ASC_127) == 127, "");
}
