/*
 *  Copyright (C) 2004-2021 Edward F. Valeev
 *
 *  This file is part of Libint.
 *
 *  Libint is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2/util/memory.h>
#include <libint2.h>
#include <libint2_iface.h>
#include <libint2_iface_internal.h>
#include <cstddef>
#include <cassert>
#include <cstdlib>
#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
size_t libint2_need_memory_default(int max_am) {
assert(max_am <= 0);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_default * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_default * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_default > LIBINT2_MAX_HRR_LSRANK_0_default ? LIBINT2_MAX_HRR_HSRANK_0_default : LIBINT2_MAX_HRR_LSRANK_0_default);
return 0; // unreachable
}
size_t libint2_need_memory_overlap(int max_am) {
assert(max_am <= 7);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_overlap * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_overlap * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_overlap > LIBINT2_MAX_HRR_LSRANK_0_overlap ? LIBINT2_MAX_HRR_HSRANK_0_overlap : LIBINT2_MAX_HRR_LSRANK_0_overlap);
assert(max_am <= 7);
if (max_am == 1) return LIBINT2_MAX_STACK_SIZE_1_overlap * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_1_overlap * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_1_overlap > LIBINT2_MAX_HRR_LSRANK_1_overlap ? LIBINT2_MAX_HRR_HSRANK_1_overlap : LIBINT2_MAX_HRR_LSRANK_1_overlap);
assert(max_am <= 7);
if (max_am == 2) return LIBINT2_MAX_STACK_SIZE_2_overlap * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_2_overlap * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_2_overlap > LIBINT2_MAX_HRR_LSRANK_2_overlap ? LIBINT2_MAX_HRR_HSRANK_2_overlap : LIBINT2_MAX_HRR_LSRANK_2_overlap);
assert(max_am <= 7);
if (max_am == 3) return LIBINT2_MAX_STACK_SIZE_3_overlap * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_3_overlap * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_3_overlap > LIBINT2_MAX_HRR_LSRANK_3_overlap ? LIBINT2_MAX_HRR_HSRANK_3_overlap : LIBINT2_MAX_HRR_LSRANK_3_overlap);
assert(max_am <= 7);
if (max_am == 4) return LIBINT2_MAX_STACK_SIZE_4_overlap * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_4_overlap * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_4_overlap > LIBINT2_MAX_HRR_LSRANK_4_overlap ? LIBINT2_MAX_HRR_HSRANK_4_overlap : LIBINT2_MAX_HRR_LSRANK_4_overlap);
assert(max_am <= 7);
if (max_am == 5) return LIBINT2_MAX_STACK_SIZE_5_overlap * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_5_overlap * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_5_overlap > LIBINT2_MAX_HRR_LSRANK_5_overlap ? LIBINT2_MAX_HRR_HSRANK_5_overlap : LIBINT2_MAX_HRR_LSRANK_5_overlap);
assert(max_am <= 7);
if (max_am == 6) return LIBINT2_MAX_STACK_SIZE_6_overlap * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_6_overlap * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_6_overlap > LIBINT2_MAX_HRR_LSRANK_6_overlap ? LIBINT2_MAX_HRR_HSRANK_6_overlap : LIBINT2_MAX_HRR_LSRANK_6_overlap);
assert(max_am <= 7);
if (max_am == 7) return LIBINT2_MAX_STACK_SIZE_7_overlap * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_7_overlap * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_7_overlap > LIBINT2_MAX_HRR_LSRANK_7_overlap ? LIBINT2_MAX_HRR_HSRANK_7_overlap : LIBINT2_MAX_HRR_LSRANK_7_overlap);
return 0; // unreachable
}
size_t libint2_need_memory_kinetic(int max_am) {
assert(max_am <= 7);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_kinetic * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_kinetic * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_kinetic > LIBINT2_MAX_HRR_LSRANK_0_kinetic ? LIBINT2_MAX_HRR_HSRANK_0_kinetic : LIBINT2_MAX_HRR_LSRANK_0_kinetic);
assert(max_am <= 7);
if (max_am == 1) return LIBINT2_MAX_STACK_SIZE_1_kinetic * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_1_kinetic * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_1_kinetic > LIBINT2_MAX_HRR_LSRANK_1_kinetic ? LIBINT2_MAX_HRR_HSRANK_1_kinetic : LIBINT2_MAX_HRR_LSRANK_1_kinetic);
assert(max_am <= 7);
if (max_am == 2) return LIBINT2_MAX_STACK_SIZE_2_kinetic * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_2_kinetic * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_2_kinetic > LIBINT2_MAX_HRR_LSRANK_2_kinetic ? LIBINT2_MAX_HRR_HSRANK_2_kinetic : LIBINT2_MAX_HRR_LSRANK_2_kinetic);
assert(max_am <= 7);
if (max_am == 3) return LIBINT2_MAX_STACK_SIZE_3_kinetic * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_3_kinetic * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_3_kinetic > LIBINT2_MAX_HRR_LSRANK_3_kinetic ? LIBINT2_MAX_HRR_HSRANK_3_kinetic : LIBINT2_MAX_HRR_LSRANK_3_kinetic);
assert(max_am <= 7);
if (max_am == 4) return LIBINT2_MAX_STACK_SIZE_4_kinetic * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_4_kinetic * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_4_kinetic > LIBINT2_MAX_HRR_LSRANK_4_kinetic ? LIBINT2_MAX_HRR_HSRANK_4_kinetic : LIBINT2_MAX_HRR_LSRANK_4_kinetic);
assert(max_am <= 7);
if (max_am == 5) return LIBINT2_MAX_STACK_SIZE_5_kinetic * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_5_kinetic * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_5_kinetic > LIBINT2_MAX_HRR_LSRANK_5_kinetic ? LIBINT2_MAX_HRR_HSRANK_5_kinetic : LIBINT2_MAX_HRR_LSRANK_5_kinetic);
assert(max_am <= 7);
if (max_am == 6) return LIBINT2_MAX_STACK_SIZE_6_kinetic * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_6_kinetic * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_6_kinetic > LIBINT2_MAX_HRR_LSRANK_6_kinetic ? LIBINT2_MAX_HRR_HSRANK_6_kinetic : LIBINT2_MAX_HRR_LSRANK_6_kinetic);
assert(max_am <= 7);
if (max_am == 7) return LIBINT2_MAX_STACK_SIZE_7_kinetic * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_7_kinetic * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_7_kinetic > LIBINT2_MAX_HRR_LSRANK_7_kinetic ? LIBINT2_MAX_HRR_HSRANK_7_kinetic : LIBINT2_MAX_HRR_LSRANK_7_kinetic);
return 0; // unreachable
}
size_t libint2_need_memory_elecpot(int max_am) {
assert(max_am <= 7);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_elecpot * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_elecpot * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_elecpot > LIBINT2_MAX_HRR_LSRANK_0_elecpot ? LIBINT2_MAX_HRR_HSRANK_0_elecpot : LIBINT2_MAX_HRR_LSRANK_0_elecpot);
assert(max_am <= 7);
if (max_am == 1) return LIBINT2_MAX_STACK_SIZE_1_elecpot * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_1_elecpot * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_1_elecpot > LIBINT2_MAX_HRR_LSRANK_1_elecpot ? LIBINT2_MAX_HRR_HSRANK_1_elecpot : LIBINT2_MAX_HRR_LSRANK_1_elecpot);
assert(max_am <= 7);
if (max_am == 2) return LIBINT2_MAX_STACK_SIZE_2_elecpot * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_2_elecpot * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_2_elecpot > LIBINT2_MAX_HRR_LSRANK_2_elecpot ? LIBINT2_MAX_HRR_HSRANK_2_elecpot : LIBINT2_MAX_HRR_LSRANK_2_elecpot);
assert(max_am <= 7);
if (max_am == 3) return LIBINT2_MAX_STACK_SIZE_3_elecpot * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_3_elecpot * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_3_elecpot > LIBINT2_MAX_HRR_LSRANK_3_elecpot ? LIBINT2_MAX_HRR_HSRANK_3_elecpot : LIBINT2_MAX_HRR_LSRANK_3_elecpot);
assert(max_am <= 7);
if (max_am == 4) return LIBINT2_MAX_STACK_SIZE_4_elecpot * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_4_elecpot * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_4_elecpot > LIBINT2_MAX_HRR_LSRANK_4_elecpot ? LIBINT2_MAX_HRR_HSRANK_4_elecpot : LIBINT2_MAX_HRR_LSRANK_4_elecpot);
assert(max_am <= 7);
if (max_am == 5) return LIBINT2_MAX_STACK_SIZE_5_elecpot * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_5_elecpot * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_5_elecpot > LIBINT2_MAX_HRR_LSRANK_5_elecpot ? LIBINT2_MAX_HRR_HSRANK_5_elecpot : LIBINT2_MAX_HRR_LSRANK_5_elecpot);
assert(max_am <= 7);
if (max_am == 6) return LIBINT2_MAX_STACK_SIZE_6_elecpot * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_6_elecpot * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_6_elecpot > LIBINT2_MAX_HRR_LSRANK_6_elecpot ? LIBINT2_MAX_HRR_HSRANK_6_elecpot : LIBINT2_MAX_HRR_LSRANK_6_elecpot);
assert(max_am <= 7);
if (max_am == 7) return LIBINT2_MAX_STACK_SIZE_7_elecpot * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_7_elecpot * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_7_elecpot > LIBINT2_MAX_HRR_LSRANK_7_elecpot ? LIBINT2_MAX_HRR_HSRANK_7_elecpot : LIBINT2_MAX_HRR_LSRANK_7_elecpot);
return 0; // unreachable
}
size_t libint2_need_memory_1emultipole(int max_am) {
assert(max_am <= 7);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_1emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_1emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_1emultipole > LIBINT2_MAX_HRR_LSRANK_0_1emultipole ? LIBINT2_MAX_HRR_HSRANK_0_1emultipole : LIBINT2_MAX_HRR_LSRANK_0_1emultipole);
assert(max_am <= 7);
if (max_am == 1) return LIBINT2_MAX_STACK_SIZE_1_1emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_1_1emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_1_1emultipole > LIBINT2_MAX_HRR_LSRANK_1_1emultipole ? LIBINT2_MAX_HRR_HSRANK_1_1emultipole : LIBINT2_MAX_HRR_LSRANK_1_1emultipole);
assert(max_am <= 7);
if (max_am == 2) return LIBINT2_MAX_STACK_SIZE_2_1emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_2_1emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_2_1emultipole > LIBINT2_MAX_HRR_LSRANK_2_1emultipole ? LIBINT2_MAX_HRR_HSRANK_2_1emultipole : LIBINT2_MAX_HRR_LSRANK_2_1emultipole);
assert(max_am <= 7);
if (max_am == 3) return LIBINT2_MAX_STACK_SIZE_3_1emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_3_1emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_3_1emultipole > LIBINT2_MAX_HRR_LSRANK_3_1emultipole ? LIBINT2_MAX_HRR_HSRANK_3_1emultipole : LIBINT2_MAX_HRR_LSRANK_3_1emultipole);
assert(max_am <= 7);
if (max_am == 4) return LIBINT2_MAX_STACK_SIZE_4_1emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_4_1emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_4_1emultipole > LIBINT2_MAX_HRR_LSRANK_4_1emultipole ? LIBINT2_MAX_HRR_HSRANK_4_1emultipole : LIBINT2_MAX_HRR_LSRANK_4_1emultipole);
assert(max_am <= 7);
if (max_am == 5) return LIBINT2_MAX_STACK_SIZE_5_1emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_5_1emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_5_1emultipole > LIBINT2_MAX_HRR_LSRANK_5_1emultipole ? LIBINT2_MAX_HRR_HSRANK_5_1emultipole : LIBINT2_MAX_HRR_LSRANK_5_1emultipole);
assert(max_am <= 7);
if (max_am == 6) return LIBINT2_MAX_STACK_SIZE_6_1emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_6_1emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_6_1emultipole > LIBINT2_MAX_HRR_LSRANK_6_1emultipole ? LIBINT2_MAX_HRR_HSRANK_6_1emultipole : LIBINT2_MAX_HRR_LSRANK_6_1emultipole);
assert(max_am <= 7);
if (max_am == 7) return LIBINT2_MAX_STACK_SIZE_7_1emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_7_1emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_7_1emultipole > LIBINT2_MAX_HRR_LSRANK_7_1emultipole ? LIBINT2_MAX_HRR_HSRANK_7_1emultipole : LIBINT2_MAX_HRR_LSRANK_7_1emultipole);
return 0; // unreachable
}
size_t libint2_need_memory_2emultipole(int max_am) {
assert(max_am <= 7);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_2emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_2emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_2emultipole > LIBINT2_MAX_HRR_LSRANK_0_2emultipole ? LIBINT2_MAX_HRR_HSRANK_0_2emultipole : LIBINT2_MAX_HRR_LSRANK_0_2emultipole);
assert(max_am <= 7);
if (max_am == 1) return LIBINT2_MAX_STACK_SIZE_1_2emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_1_2emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_1_2emultipole > LIBINT2_MAX_HRR_LSRANK_1_2emultipole ? LIBINT2_MAX_HRR_HSRANK_1_2emultipole : LIBINT2_MAX_HRR_LSRANK_1_2emultipole);
assert(max_am <= 7);
if (max_am == 2) return LIBINT2_MAX_STACK_SIZE_2_2emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_2_2emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_2_2emultipole > LIBINT2_MAX_HRR_LSRANK_2_2emultipole ? LIBINT2_MAX_HRR_HSRANK_2_2emultipole : LIBINT2_MAX_HRR_LSRANK_2_2emultipole);
assert(max_am <= 7);
if (max_am == 3) return LIBINT2_MAX_STACK_SIZE_3_2emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_3_2emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_3_2emultipole > LIBINT2_MAX_HRR_LSRANK_3_2emultipole ? LIBINT2_MAX_HRR_HSRANK_3_2emultipole : LIBINT2_MAX_HRR_LSRANK_3_2emultipole);
assert(max_am <= 7);
if (max_am == 4) return LIBINT2_MAX_STACK_SIZE_4_2emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_4_2emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_4_2emultipole > LIBINT2_MAX_HRR_LSRANK_4_2emultipole ? LIBINT2_MAX_HRR_HSRANK_4_2emultipole : LIBINT2_MAX_HRR_LSRANK_4_2emultipole);
assert(max_am <= 7);
if (max_am == 5) return LIBINT2_MAX_STACK_SIZE_5_2emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_5_2emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_5_2emultipole > LIBINT2_MAX_HRR_LSRANK_5_2emultipole ? LIBINT2_MAX_HRR_HSRANK_5_2emultipole : LIBINT2_MAX_HRR_LSRANK_5_2emultipole);
assert(max_am <= 7);
if (max_am == 6) return LIBINT2_MAX_STACK_SIZE_6_2emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_6_2emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_6_2emultipole > LIBINT2_MAX_HRR_LSRANK_6_2emultipole ? LIBINT2_MAX_HRR_HSRANK_6_2emultipole : LIBINT2_MAX_HRR_LSRANK_6_2emultipole);
assert(max_am <= 7);
if (max_am == 7) return LIBINT2_MAX_STACK_SIZE_7_2emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_7_2emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_7_2emultipole > LIBINT2_MAX_HRR_LSRANK_7_2emultipole ? LIBINT2_MAX_HRR_HSRANK_7_2emultipole : LIBINT2_MAX_HRR_LSRANK_7_2emultipole);
return 0; // unreachable
}
size_t libint2_need_memory_3emultipole(int max_am) {
assert(max_am <= 7);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_3emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_3emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_3emultipole > LIBINT2_MAX_HRR_LSRANK_0_3emultipole ? LIBINT2_MAX_HRR_HSRANK_0_3emultipole : LIBINT2_MAX_HRR_LSRANK_0_3emultipole);
assert(max_am <= 7);
if (max_am == 1) return LIBINT2_MAX_STACK_SIZE_1_3emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_1_3emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_1_3emultipole > LIBINT2_MAX_HRR_LSRANK_1_3emultipole ? LIBINT2_MAX_HRR_HSRANK_1_3emultipole : LIBINT2_MAX_HRR_LSRANK_1_3emultipole);
assert(max_am <= 7);
if (max_am == 2) return LIBINT2_MAX_STACK_SIZE_2_3emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_2_3emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_2_3emultipole > LIBINT2_MAX_HRR_LSRANK_2_3emultipole ? LIBINT2_MAX_HRR_HSRANK_2_3emultipole : LIBINT2_MAX_HRR_LSRANK_2_3emultipole);
assert(max_am <= 7);
if (max_am == 3) return LIBINT2_MAX_STACK_SIZE_3_3emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_3_3emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_3_3emultipole > LIBINT2_MAX_HRR_LSRANK_3_3emultipole ? LIBINT2_MAX_HRR_HSRANK_3_3emultipole : LIBINT2_MAX_HRR_LSRANK_3_3emultipole);
assert(max_am <= 7);
if (max_am == 4) return LIBINT2_MAX_STACK_SIZE_4_3emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_4_3emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_4_3emultipole > LIBINT2_MAX_HRR_LSRANK_4_3emultipole ? LIBINT2_MAX_HRR_HSRANK_4_3emultipole : LIBINT2_MAX_HRR_LSRANK_4_3emultipole);
assert(max_am <= 7);
if (max_am == 5) return LIBINT2_MAX_STACK_SIZE_5_3emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_5_3emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_5_3emultipole > LIBINT2_MAX_HRR_LSRANK_5_3emultipole ? LIBINT2_MAX_HRR_HSRANK_5_3emultipole : LIBINT2_MAX_HRR_LSRANK_5_3emultipole);
assert(max_am <= 7);
if (max_am == 6) return LIBINT2_MAX_STACK_SIZE_6_3emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_6_3emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_6_3emultipole > LIBINT2_MAX_HRR_LSRANK_6_3emultipole ? LIBINT2_MAX_HRR_HSRANK_6_3emultipole : LIBINT2_MAX_HRR_LSRANK_6_3emultipole);
assert(max_am <= 7);
if (max_am == 7) return LIBINT2_MAX_STACK_SIZE_7_3emultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_7_3emultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_7_3emultipole > LIBINT2_MAX_HRR_LSRANK_7_3emultipole ? LIBINT2_MAX_HRR_HSRANK_7_3emultipole : LIBINT2_MAX_HRR_LSRANK_7_3emultipole);
return 0; // unreachable
}
size_t libint2_need_memory_sphemultipole(int max_am) {
assert(max_am <= 7);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_sphemultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_sphemultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_sphemultipole > LIBINT2_MAX_HRR_LSRANK_0_sphemultipole ? LIBINT2_MAX_HRR_HSRANK_0_sphemultipole : LIBINT2_MAX_HRR_LSRANK_0_sphemultipole);
assert(max_am <= 7);
if (max_am == 1) return LIBINT2_MAX_STACK_SIZE_1_sphemultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_1_sphemultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_1_sphemultipole > LIBINT2_MAX_HRR_LSRANK_1_sphemultipole ? LIBINT2_MAX_HRR_HSRANK_1_sphemultipole : LIBINT2_MAX_HRR_LSRANK_1_sphemultipole);
assert(max_am <= 7);
if (max_am == 2) return LIBINT2_MAX_STACK_SIZE_2_sphemultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_2_sphemultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_2_sphemultipole > LIBINT2_MAX_HRR_LSRANK_2_sphemultipole ? LIBINT2_MAX_HRR_HSRANK_2_sphemultipole : LIBINT2_MAX_HRR_LSRANK_2_sphemultipole);
assert(max_am <= 7);
if (max_am == 3) return LIBINT2_MAX_STACK_SIZE_3_sphemultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_3_sphemultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_3_sphemultipole > LIBINT2_MAX_HRR_LSRANK_3_sphemultipole ? LIBINT2_MAX_HRR_HSRANK_3_sphemultipole : LIBINT2_MAX_HRR_LSRANK_3_sphemultipole);
assert(max_am <= 7);
if (max_am == 4) return LIBINT2_MAX_STACK_SIZE_4_sphemultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_4_sphemultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_4_sphemultipole > LIBINT2_MAX_HRR_LSRANK_4_sphemultipole ? LIBINT2_MAX_HRR_HSRANK_4_sphemultipole : LIBINT2_MAX_HRR_LSRANK_4_sphemultipole);
assert(max_am <= 7);
if (max_am == 5) return LIBINT2_MAX_STACK_SIZE_5_sphemultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_5_sphemultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_5_sphemultipole > LIBINT2_MAX_HRR_LSRANK_5_sphemultipole ? LIBINT2_MAX_HRR_HSRANK_5_sphemultipole : LIBINT2_MAX_HRR_LSRANK_5_sphemultipole);
assert(max_am <= 7);
if (max_am == 6) return LIBINT2_MAX_STACK_SIZE_6_sphemultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_6_sphemultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_6_sphemultipole > LIBINT2_MAX_HRR_LSRANK_6_sphemultipole ? LIBINT2_MAX_HRR_HSRANK_6_sphemultipole : LIBINT2_MAX_HRR_LSRANK_6_sphemultipole);
assert(max_am <= 7);
if (max_am == 7) return LIBINT2_MAX_STACK_SIZE_7_sphemultipole * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_7_sphemultipole * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_7_sphemultipole > LIBINT2_MAX_HRR_LSRANK_7_sphemultipole ? LIBINT2_MAX_HRR_HSRANK_7_sphemultipole : LIBINT2_MAX_HRR_LSRANK_7_sphemultipole);
return 0; // unreachable
}
size_t libint2_need_memory_eri(int max_am) {
assert(max_am <= 7);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_eri > LIBINT2_MAX_HRR_LSRANK_0_eri ? LIBINT2_MAX_HRR_HSRANK_0_eri : LIBINT2_MAX_HRR_LSRANK_0_eri);
assert(max_am <= 7);
if (max_am == 1) return LIBINT2_MAX_STACK_SIZE_1_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_1_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_1_eri > LIBINT2_MAX_HRR_LSRANK_1_eri ? LIBINT2_MAX_HRR_HSRANK_1_eri : LIBINT2_MAX_HRR_LSRANK_1_eri);
assert(max_am <= 7);
if (max_am == 2) return LIBINT2_MAX_STACK_SIZE_2_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_2_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_2_eri > LIBINT2_MAX_HRR_LSRANK_2_eri ? LIBINT2_MAX_HRR_HSRANK_2_eri : LIBINT2_MAX_HRR_LSRANK_2_eri);
assert(max_am <= 7);
if (max_am == 3) return LIBINT2_MAX_STACK_SIZE_3_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_3_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_3_eri > LIBINT2_MAX_HRR_LSRANK_3_eri ? LIBINT2_MAX_HRR_HSRANK_3_eri : LIBINT2_MAX_HRR_LSRANK_3_eri);
assert(max_am <= 7);
if (max_am == 4) return LIBINT2_MAX_STACK_SIZE_4_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_4_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_4_eri > LIBINT2_MAX_HRR_LSRANK_4_eri ? LIBINT2_MAX_HRR_HSRANK_4_eri : LIBINT2_MAX_HRR_LSRANK_4_eri);
assert(max_am <= 7);
if (max_am == 5) return LIBINT2_MAX_STACK_SIZE_5_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_5_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_5_eri > LIBINT2_MAX_HRR_LSRANK_5_eri ? LIBINT2_MAX_HRR_HSRANK_5_eri : LIBINT2_MAX_HRR_LSRANK_5_eri);
assert(max_am <= 7);
if (max_am == 6) return LIBINT2_MAX_STACK_SIZE_6_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_6_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_6_eri > LIBINT2_MAX_HRR_LSRANK_6_eri ? LIBINT2_MAX_HRR_HSRANK_6_eri : LIBINT2_MAX_HRR_LSRANK_6_eri);
assert(max_am <= 7);
if (max_am == 7) return LIBINT2_MAX_STACK_SIZE_7_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_7_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_7_eri > LIBINT2_MAX_HRR_LSRANK_7_eri ? LIBINT2_MAX_HRR_HSRANK_7_eri : LIBINT2_MAX_HRR_LSRANK_7_eri);
return 0; // unreachable
}
size_t libint2_need_memory_3eri(int max_am) {
assert(max_am <= 7);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_3eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_3eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_3eri > LIBINT2_MAX_HRR_LSRANK_0_3eri ? LIBINT2_MAX_HRR_HSRANK_0_3eri : LIBINT2_MAX_HRR_LSRANK_0_3eri);
assert(max_am <= 7);
if (max_am == 1) return LIBINT2_MAX_STACK_SIZE_1_3eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_1_3eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_1_3eri > LIBINT2_MAX_HRR_LSRANK_1_3eri ? LIBINT2_MAX_HRR_HSRANK_1_3eri : LIBINT2_MAX_HRR_LSRANK_1_3eri);
assert(max_am <= 7);
if (max_am == 2) return LIBINT2_MAX_STACK_SIZE_2_3eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_2_3eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_2_3eri > LIBINT2_MAX_HRR_LSRANK_2_3eri ? LIBINT2_MAX_HRR_HSRANK_2_3eri : LIBINT2_MAX_HRR_LSRANK_2_3eri);
assert(max_am <= 7);
if (max_am == 3) return LIBINT2_MAX_STACK_SIZE_3_3eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_3_3eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_3_3eri > LIBINT2_MAX_HRR_LSRANK_3_3eri ? LIBINT2_MAX_HRR_HSRANK_3_3eri : LIBINT2_MAX_HRR_LSRANK_3_3eri);
assert(max_am <= 7);
if (max_am == 4) return LIBINT2_MAX_STACK_SIZE_4_3eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_4_3eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_4_3eri > LIBINT2_MAX_HRR_LSRANK_4_3eri ? LIBINT2_MAX_HRR_HSRANK_4_3eri : LIBINT2_MAX_HRR_LSRANK_4_3eri);
assert(max_am <= 7);
if (max_am == 5) return LIBINT2_MAX_STACK_SIZE_5_3eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_5_3eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_5_3eri > LIBINT2_MAX_HRR_LSRANK_5_3eri ? LIBINT2_MAX_HRR_HSRANK_5_3eri : LIBINT2_MAX_HRR_LSRANK_5_3eri);
assert(max_am <= 7);
if (max_am == 6) return LIBINT2_MAX_STACK_SIZE_6_3eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_6_3eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_6_3eri > LIBINT2_MAX_HRR_LSRANK_6_3eri ? LIBINT2_MAX_HRR_HSRANK_6_3eri : LIBINT2_MAX_HRR_LSRANK_6_3eri);
assert(max_am <= 7);
if (max_am == 7) return LIBINT2_MAX_STACK_SIZE_7_3eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_7_3eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_7_3eri > LIBINT2_MAX_HRR_LSRANK_7_3eri ? LIBINT2_MAX_HRR_HSRANK_7_3eri : LIBINT2_MAX_HRR_LSRANK_7_3eri);
return 0; // unreachable
}
size_t libint2_need_memory_2eri(int max_am) {
assert(max_am <= 7);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_2eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_2eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_2eri > LIBINT2_MAX_HRR_LSRANK_0_2eri ? LIBINT2_MAX_HRR_HSRANK_0_2eri : LIBINT2_MAX_HRR_LSRANK_0_2eri);
assert(max_am <= 7);
if (max_am == 1) return LIBINT2_MAX_STACK_SIZE_1_2eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_1_2eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_1_2eri > LIBINT2_MAX_HRR_LSRANK_1_2eri ? LIBINT2_MAX_HRR_HSRANK_1_2eri : LIBINT2_MAX_HRR_LSRANK_1_2eri);
assert(max_am <= 7);
if (max_am == 2) return LIBINT2_MAX_STACK_SIZE_2_2eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_2_2eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_2_2eri > LIBINT2_MAX_HRR_LSRANK_2_2eri ? LIBINT2_MAX_HRR_HSRANK_2_2eri : LIBINT2_MAX_HRR_LSRANK_2_2eri);
assert(max_am <= 7);
if (max_am == 3) return LIBINT2_MAX_STACK_SIZE_3_2eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_3_2eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_3_2eri > LIBINT2_MAX_HRR_LSRANK_3_2eri ? LIBINT2_MAX_HRR_HSRANK_3_2eri : LIBINT2_MAX_HRR_LSRANK_3_2eri);
assert(max_am <= 7);
if (max_am == 4) return LIBINT2_MAX_STACK_SIZE_4_2eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_4_2eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_4_2eri > LIBINT2_MAX_HRR_LSRANK_4_2eri ? LIBINT2_MAX_HRR_HSRANK_4_2eri : LIBINT2_MAX_HRR_LSRANK_4_2eri);
assert(max_am <= 7);
if (max_am == 5) return LIBINT2_MAX_STACK_SIZE_5_2eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_5_2eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_5_2eri > LIBINT2_MAX_HRR_LSRANK_5_2eri ? LIBINT2_MAX_HRR_HSRANK_5_2eri : LIBINT2_MAX_HRR_LSRANK_5_2eri);
assert(max_am <= 7);
if (max_am == 6) return LIBINT2_MAX_STACK_SIZE_6_2eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_6_2eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_6_2eri > LIBINT2_MAX_HRR_LSRANK_6_2eri ? LIBINT2_MAX_HRR_HSRANK_6_2eri : LIBINT2_MAX_HRR_LSRANK_6_2eri);
assert(max_am <= 7);
if (max_am == 7) return LIBINT2_MAX_STACK_SIZE_7_2eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_7_2eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_7_2eri > LIBINT2_MAX_HRR_LSRANK_7_2eri ? LIBINT2_MAX_HRR_HSRANK_7_2eri : LIBINT2_MAX_HRR_LSRANK_7_2eri);
return 0; // unreachable
}
void libint2_init_default(Libint_t* inteval, int max_am, void* buf) {
if (buf != 0) inteval->stack = reinterpret_cast<LIBINT2_REALTYPE*>(buf);
else 
inteval->stack = libint2::malloc<LIBINT2_REALTYPE>(libint2_need_memory_default(max_am));
assert(max_am <= 0);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_default * LIBINT2_MAX_VECLEN;
}
void libint2_init_overlap(Libint_t* inteval, int max_am, void* buf) {
if (buf != 0) inteval->stack = reinterpret_cast<LIBINT2_REALTYPE*>(buf);
else 
inteval->stack = libint2::malloc<LIBINT2_REALTYPE>(libint2_need_memory_overlap(max_am));
assert(max_am <= 7);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_overlap * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 1)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_1_overlap * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 2)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_2_overlap * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 3)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_3_overlap * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 4)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_4_overlap * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 5)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_5_overlap * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 6)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_6_overlap * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 7)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_7_overlap * LIBINT2_MAX_VECLEN;
}
void libint2_init_kinetic(Libint_t* inteval, int max_am, void* buf) {
if (buf != 0) inteval->stack = reinterpret_cast<LIBINT2_REALTYPE*>(buf);
else 
inteval->stack = libint2::malloc<LIBINT2_REALTYPE>(libint2_need_memory_kinetic(max_am));
assert(max_am <= 7);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_kinetic * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 1)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_1_kinetic * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 2)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_2_kinetic * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 3)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_3_kinetic * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 4)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_4_kinetic * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 5)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_5_kinetic * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 6)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_6_kinetic * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 7)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_7_kinetic * LIBINT2_MAX_VECLEN;
}
void libint2_init_elecpot(Libint_t* inteval, int max_am, void* buf) {
if (buf != 0) inteval->stack = reinterpret_cast<LIBINT2_REALTYPE*>(buf);
else 
inteval->stack = libint2::malloc<LIBINT2_REALTYPE>(libint2_need_memory_elecpot(max_am));
assert(max_am <= 7);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_elecpot * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 1)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_1_elecpot * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 2)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_2_elecpot * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 3)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_3_elecpot * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 4)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_4_elecpot * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 5)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_5_elecpot * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 6)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_6_elecpot * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 7)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_7_elecpot * LIBINT2_MAX_VECLEN;
}
void libint2_init_1emultipole(Libint_t* inteval, int max_am, void* buf) {
if (buf != 0) inteval->stack = reinterpret_cast<LIBINT2_REALTYPE*>(buf);
else 
inteval->stack = libint2::malloc<LIBINT2_REALTYPE>(libint2_need_memory_1emultipole(max_am));
assert(max_am <= 7);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_1emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 1)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_1_1emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 2)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_2_1emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 3)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_3_1emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 4)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_4_1emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 5)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_5_1emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 6)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_6_1emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 7)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_7_1emultipole * LIBINT2_MAX_VECLEN;
}
void libint2_init_2emultipole(Libint_t* inteval, int max_am, void* buf) {
if (buf != 0) inteval->stack = reinterpret_cast<LIBINT2_REALTYPE*>(buf);
else 
inteval->stack = libint2::malloc<LIBINT2_REALTYPE>(libint2_need_memory_2emultipole(max_am));
assert(max_am <= 7);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_2emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 1)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_1_2emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 2)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_2_2emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 3)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_3_2emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 4)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_4_2emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 5)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_5_2emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 6)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_6_2emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 7)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_7_2emultipole * LIBINT2_MAX_VECLEN;
}
void libint2_init_3emultipole(Libint_t* inteval, int max_am, void* buf) {
if (buf != 0) inteval->stack = reinterpret_cast<LIBINT2_REALTYPE*>(buf);
else 
inteval->stack = libint2::malloc<LIBINT2_REALTYPE>(libint2_need_memory_3emultipole(max_am));
assert(max_am <= 7);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_3emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 1)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_1_3emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 2)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_2_3emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 3)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_3_3emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 4)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_4_3emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 5)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_5_3emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 6)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_6_3emultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 7)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_7_3emultipole * LIBINT2_MAX_VECLEN;
}
void libint2_init_sphemultipole(Libint_t* inteval, int max_am, void* buf) {
if (buf != 0) inteval->stack = reinterpret_cast<LIBINT2_REALTYPE*>(buf);
else 
inteval->stack = libint2::malloc<LIBINT2_REALTYPE>(libint2_need_memory_sphemultipole(max_am));
assert(max_am <= 7);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_sphemultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 1)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_1_sphemultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 2)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_2_sphemultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 3)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_3_sphemultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 4)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_4_sphemultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 5)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_5_sphemultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 6)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_6_sphemultipole * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 7)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_7_sphemultipole * LIBINT2_MAX_VECLEN;
}
void libint2_init_eri(Libint_t* inteval, int max_am, void* buf) {
if (buf != 0) inteval->stack = reinterpret_cast<LIBINT2_REALTYPE*>(buf);
else 
inteval->stack = libint2::malloc<LIBINT2_REALTYPE>(libint2_need_memory_eri(max_am));
assert(max_am <= 7);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 1)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_1_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 2)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_2_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 3)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_3_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 4)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_4_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 5)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_5_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 6)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_6_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 7)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_7_eri * LIBINT2_MAX_VECLEN;
}
void libint2_init_3eri(Libint_t* inteval, int max_am, void* buf) {
if (buf != 0) inteval->stack = reinterpret_cast<LIBINT2_REALTYPE*>(buf);
else 
inteval->stack = libint2::malloc<LIBINT2_REALTYPE>(libint2_need_memory_3eri(max_am));
assert(max_am <= 7);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_3eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 1)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_1_3eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 2)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_2_3eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 3)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_3_3eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 4)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_4_3eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 5)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_5_3eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 6)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_6_3eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 7)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_7_3eri * LIBINT2_MAX_VECLEN;
}
void libint2_init_2eri(Libint_t* inteval, int max_am, void* buf) {
if (buf != 0) inteval->stack = reinterpret_cast<LIBINT2_REALTYPE*>(buf);
else 
inteval->stack = libint2::malloc<LIBINT2_REALTYPE>(libint2_need_memory_2eri(max_am));
assert(max_am <= 7);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_2eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 1)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_1_2eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 2)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_2_2eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 3)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_3_2eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 4)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_4_2eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 5)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_5_2eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 6)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_6_2eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 7)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_7_2eri * LIBINT2_MAX_VECLEN;
}
void libint2_cleanup_default(Libint_t* inteval) {
free(inteval->stack);
inteval->stack = 0;
inteval->vstack = 0;
}
void libint2_cleanup_overlap(Libint_t* inteval) {
free(inteval->stack);
inteval->stack = 0;
inteval->vstack = 0;
}
void libint2_cleanup_kinetic(Libint_t* inteval) {
free(inteval->stack);
inteval->stack = 0;
inteval->vstack = 0;
}
void libint2_cleanup_elecpot(Libint_t* inteval) {
free(inteval->stack);
inteval->stack = 0;
inteval->vstack = 0;
}
void libint2_cleanup_1emultipole(Libint_t* inteval) {
free(inteval->stack);
inteval->stack = 0;
inteval->vstack = 0;
}
void libint2_cleanup_2emultipole(Libint_t* inteval) {
free(inteval->stack);
inteval->stack = 0;
inteval->vstack = 0;
}
void libint2_cleanup_3emultipole(Libint_t* inteval) {
free(inteval->stack);
inteval->stack = 0;
inteval->vstack = 0;
}
void libint2_cleanup_sphemultipole(Libint_t* inteval) {
free(inteval->stack);
inteval->stack = 0;
inteval->vstack = 0;
}
void libint2_cleanup_eri(Libint_t* inteval) {
free(inteval->stack);
inteval->stack = 0;
inteval->vstack = 0;
}
void libint2_cleanup_3eri(Libint_t* inteval) {
free(inteval->stack);
inteval->stack = 0;
inteval->vstack = 0;
}
void libint2_cleanup_2eri(Libint_t* inteval) {
free(inteval->stack);
inteval->stack = 0;
inteval->vstack = 0;
}
#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif


