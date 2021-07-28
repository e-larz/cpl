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
    GUARD
==============================================================================*/
#ifndef CPL_CONCAT_H_20170807175029
#define CPL_CONCAT_H_20170807175029
/*==============================================================================
    PREPROCESSOR
==============================================================================*/
#define CPL_CONCAT_2(...)         CPL_CONCAT_RAW_2(__VA_ARGS__)
#define CPL_CONCAT_RAW_2(A, ...)  A##__VA_ARGS__
#define CPL_CONCAT_3(A, B, C)     CPL_CONCAT_RAW_3(A, B, C)
#define CPL_CONCAT_RAW_3(A, B, C) A##B##C
/*==============================================================================
    GUARD
==============================================================================*/
#endif // CPL_CONCAT_H_20170807175029
