#!/usr/bin/env python
# SPDX-License-Identifier: 0BSD
##
# @file
# @licence{
# BSD Zero Clause License
#
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
# REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
# AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT,
# INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
# LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
# OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
# PERFORMANCE OF THIS SOFTWARE.
# }

licence_str = """\
// SPDX-License-Identifier: 0BSD// SPDX-License-Identifier: 0BSD
/*
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
"""
guard_block_start_str = """\
/*==============================================================================
    GUARD
==============================================================================*/
#ifndef {guard_name}
#define {guard_name}
/*==============================================================================
    PREPROCESSOR
==============================================================================*/
"""
guard_block_end_str = """\
/*==============================================================================
    GUARD
==============================================================================*/
#endif // {guard_name}
"""
macro_cnt = 127
macro_cnt_len = len(str(macro_cnt))
line_len_max = 79
tab  = ' ' * 4
varg_len = len('...')
output_path = './include/generated/'

##
# cpl_arg_gen.h
def cpl_arg():
    pp = ''
    macro = 'CPL_ARG_{:d}'
    for i in range(1, macro_cnt+1):
        pp += make_line('#define ' + macro.format(i) + '(')
        line = tab
        for j in range(1, i+1):
            arg = 'A{:d}'.format(j)
            arg += ' ' * (macro_cnt_len-len(arg)+1) + ', '
            if len(line) + len(arg) <= line_len_max:
                line += arg
            else:
                pp += make_line(line)
                line = tab + arg
        if len(line) + varg_len < line_len_max:
            pp += make_line(line + '...')
        else:
            pp += make_line(line)
            pp += make_line(tab + '...')
        pp += ') A{:d}'.format(i) + '\n'
    return pp

##
# cpl_number_asc_gen.h
def cpl_number_asc():
    pp = ''
    macro = 'CPL_NUMBER_ASC_{:d}'
    for i in range(1, macro_cnt+1):
        pp += make_line('#define ' + macro.format(i))
        line = tab
        for j in range(1, i+1):
            arg = '{:d}'.format(j)
            arg += ' ' * (macro_cnt_len-len(arg)) + ', '
            if len(line) + len(arg) <= line_len_max:
                line += arg
            else:
                pp += make_line(line)
                line = tab + arg
        line = make_line(line[:-2]).replace('\\', ' ').rstrip()  + '\n'
        pp += line
    return pp

##
# Given a string, add enough spaces to it to put a `\` at the `line_len_max`
# column(default = 79) and add an end of line.
def make_line(string):
    return string + ' ' * (line_len_max - len(string)) + '\\\n'

##
# Create a file and write generated code to it.
#
# @param generator : A function returning a string containing the generated
#                    code. Its name is used as a prefix for the file name.
def generate_file(generator):
    file_name = generator.__name__ + '_gen.h'
    guard_name = file_name.replace('.', '_').upper()
    f = open(output_path + file_name, 'w')
    f.write(licence_str)
    f.write(guard_block_start_str.replace('{guard_name}', guard_name))
    f.write(generator())
    f.write(guard_block_end_str.replace('{guard_name}', guard_name))

def main(args):
    generator_list = [cpl_arg, cpl_number_asc]
    for generator in generator_list:
        generate_file(generator)
    return 0

if __name__ == '__main__':
    import datetime
    import sys
    sys.exit(main(sys.argv))
