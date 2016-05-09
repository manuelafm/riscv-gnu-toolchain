/* bits/typesizes.h -- underlying types for *_t.  Based on generic Linux
   ABI for Linux/RISC-V.

   Copyright (C) 2011-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_TYPES_H
# error "Never include <bits/typesizes.h> directly; use <sys/types.h> instead."
#endif

/* Include the header for linux/generic, to get the same values by default */
#include <sysdeps/unix/sysv/linux/generic/bits/typesizes.h>

/* Overrides -- RISC-V 32 and 64-bits to use the 64-bit ABI.  32-bit offsets and
   file (inode) serial numbers are deprecated for new 32-bit architectures */
#define __INO_T_TYPE		__UQUAD_TYPE
#define __OFF_T_TYPE		__SQUAD_TYPE
#define __INO_T_MATCHES_INO64_T	1
#define __OFF_T_MATCHES_OFF64_T	1
