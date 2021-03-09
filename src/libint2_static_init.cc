/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
void (*libint2_build_default[6][6][6][6])(const Libint_t*);
void (*libint2_build_overlap[6][6])(const Libint_t*);
void (*libint2_build_kinetic[6][6])(const Libint_t*);
void (*libint2_build_elecpot[6][6])(const Libint_t*);
void (*libint2_build_1emultipole[6][6])(const Libint_t*);
void (*libint2_build_2emultipole[6][6])(const Libint_t*);
void (*libint2_build_3emultipole[6][6])(const Libint_t*);
void (*libint2_build_sphemultipole[6][6])(const Libint_t*);
void (*libint2_build_eri[6][6][6][6])(const Libint_t*);
void (*libint2_build_eri1[5][5][5][5])(const Libint_t*);
void (*libint2_build_3eri[8][6][6])(const Libint_t*);
void (*libint2_build_3eri1[7][6][6])(const Libint_t*);
void (*libint2_build_2eri[8][8])(const Libint_t*);
void (*libint2_build_2eri1[7][7])(const Libint_t*);
void libint2_static_init() {
libint2_build_overlap[0][1] = _overlap_S_P;

libint2_build_overlap[0][2] = _overlap_S_D;

libint2_build_overlap[0][3] = _overlap_S_F;

libint2_build_overlap[0][4] = _overlap_S_G;

libint2_build_overlap[0][5] = _overlap_S_H;

libint2_build_overlap[1][0] = _overlap_P_S;

libint2_build_overlap[1][1] = _overlap_P_P;

libint2_build_overlap[1][2] = _overlap_P_D;

libint2_build_overlap[1][3] = _overlap_P_F;

libint2_build_overlap[1][4] = _overlap_P_G;

libint2_build_overlap[1][5] = _overlap_P_H;

libint2_build_overlap[2][0] = _overlap_D_S;

libint2_build_overlap[2][1] = _overlap_D_P;

libint2_build_overlap[2][2] = _overlap_D_D;

libint2_build_overlap[2][3] = _overlap_D_F;

libint2_build_overlap[2][4] = _overlap_D_G;

libint2_build_overlap[2][5] = _overlap_D_H;

libint2_build_overlap[3][0] = _overlap_F_S;

libint2_build_overlap[3][1] = _overlap_F_P;

libint2_build_overlap[3][2] = _overlap_F_D;

libint2_build_overlap[3][3] = _overlap_F_F;

libint2_build_overlap[3][4] = _overlap_F_G;

libint2_build_overlap[3][5] = _overlap_F_H;

libint2_build_overlap[4][0] = _overlap_G_S;

libint2_build_overlap[4][1] = _overlap_G_P;

libint2_build_overlap[4][2] = _overlap_G_D;

libint2_build_overlap[4][3] = _overlap_G_F;

libint2_build_overlap[4][4] = _overlap_G_G;

libint2_build_overlap[4][5] = _overlap_G_H;

libint2_build_overlap[5][0] = _overlap_H_S;

libint2_build_overlap[5][1] = _overlap_H_P;

libint2_build_overlap[5][2] = _overlap_H_D;

libint2_build_overlap[5][3] = _overlap_H_F;

libint2_build_overlap[5][4] = _overlap_H_G;

libint2_build_overlap[5][5] = _overlap_H_H;

libint2_build_kinetic[0][0] = _kinetic_S_S;

libint2_build_kinetic[0][1] = _kinetic_S_P;

libint2_build_kinetic[0][2] = _kinetic_S_D;

libint2_build_kinetic[0][3] = _kinetic_S_F;

libint2_build_kinetic[0][4] = _kinetic_S_G;

libint2_build_kinetic[0][5] = _kinetic_S_H;

libint2_build_kinetic[1][0] = _kinetic_P_S;

libint2_build_kinetic[1][1] = _kinetic_P_P;

libint2_build_kinetic[1][2] = _kinetic_P_D;

libint2_build_kinetic[1][3] = _kinetic_P_F;

libint2_build_kinetic[1][4] = _kinetic_P_G;

libint2_build_kinetic[1][5] = _kinetic_P_H;

libint2_build_kinetic[2][0] = _kinetic_D_S;

libint2_build_kinetic[2][1] = _kinetic_D_P;

libint2_build_kinetic[2][2] = _kinetic_D_D;

libint2_build_kinetic[2][3] = _kinetic_D_F;

libint2_build_kinetic[2][4] = _kinetic_D_G;

libint2_build_kinetic[2][5] = _kinetic_D_H;

libint2_build_kinetic[3][0] = _kinetic_F_S;

libint2_build_kinetic[3][1] = _kinetic_F_P;

libint2_build_kinetic[3][2] = _kinetic_F_D;

libint2_build_kinetic[3][3] = _kinetic_F_F;

libint2_build_kinetic[3][4] = _kinetic_F_G;

libint2_build_kinetic[3][5] = _kinetic_F_H;

libint2_build_kinetic[4][0] = _kinetic_G_S;

libint2_build_kinetic[4][1] = _kinetic_G_P;

libint2_build_kinetic[4][2] = _kinetic_G_D;

libint2_build_kinetic[4][3] = _kinetic_G_F;

libint2_build_kinetic[4][4] = _kinetic_G_G;

libint2_build_kinetic[4][5] = _kinetic_G_H;

libint2_build_kinetic[5][0] = _kinetic_H_S;

libint2_build_kinetic[5][1] = _kinetic_H_P;

libint2_build_kinetic[5][2] = _kinetic_H_D;

libint2_build_kinetic[5][3] = _kinetic_H_F;

libint2_build_kinetic[5][4] = _kinetic_H_G;

libint2_build_kinetic[5][5] = _kinetic_H_H;

libint2_build_elecpot[0][1] = _elecpot_S_P;

libint2_build_elecpot[0][2] = _elecpot_S_D;

libint2_build_elecpot[0][3] = _elecpot_S_F;

libint2_build_elecpot[0][4] = _elecpot_S_G;

libint2_build_elecpot[0][5] = _elecpot_S_H;

libint2_build_elecpot[1][0] = _elecpot_P_S;

libint2_build_elecpot[1][1] = _elecpot_P_P;

libint2_build_elecpot[1][2] = _elecpot_P_D;

libint2_build_elecpot[1][3] = _elecpot_P_F;

libint2_build_elecpot[1][4] = _elecpot_P_G;

libint2_build_elecpot[1][5] = _elecpot_P_H;

libint2_build_elecpot[2][0] = _elecpot_D_S;

libint2_build_elecpot[2][1] = _elecpot_D_P;

libint2_build_elecpot[2][2] = _elecpot_D_D;

libint2_build_elecpot[2][3] = _elecpot_D_F;

libint2_build_elecpot[2][4] = _elecpot_D_G;

libint2_build_elecpot[2][5] = _elecpot_D_H;

libint2_build_elecpot[3][0] = _elecpot_F_S;

libint2_build_elecpot[3][1] = _elecpot_F_P;

libint2_build_elecpot[3][2] = _elecpot_F_D;

libint2_build_elecpot[3][3] = _elecpot_F_F;

libint2_build_elecpot[3][4] = _elecpot_F_G;

libint2_build_elecpot[3][5] = _elecpot_F_H;

libint2_build_elecpot[4][0] = _elecpot_G_S;

libint2_build_elecpot[4][1] = _elecpot_G_P;

libint2_build_elecpot[4][2] = _elecpot_G_D;

libint2_build_elecpot[4][3] = _elecpot_G_F;

libint2_build_elecpot[4][4] = _elecpot_G_G;

libint2_build_elecpot[4][5] = _elecpot_G_H;

libint2_build_elecpot[5][0] = _elecpot_H_S;

libint2_build_elecpot[5][1] = _elecpot_H_P;

libint2_build_elecpot[5][2] = _elecpot_H_D;

libint2_build_elecpot[5][3] = _elecpot_H_F;

libint2_build_elecpot[5][4] = _elecpot_H_G;

libint2_build_elecpot[5][5] = _elecpot_H_H;

libint2_build_1emultipole[0][0] = _1emultipole_S_S;

libint2_build_1emultipole[0][1] = _1emultipole_S_P;

libint2_build_1emultipole[0][2] = _1emultipole_S_D;

libint2_build_1emultipole[0][3] = _1emultipole_S_F;

libint2_build_1emultipole[0][4] = _1emultipole_S_G;

libint2_build_1emultipole[0][5] = _1emultipole_S_H;

libint2_build_1emultipole[1][0] = _1emultipole_P_S;

libint2_build_1emultipole[1][1] = _1emultipole_P_P;

libint2_build_1emultipole[1][2] = _1emultipole_P_D;

libint2_build_1emultipole[1][3] = _1emultipole_P_F;

libint2_build_1emultipole[1][4] = _1emultipole_P_G;

libint2_build_1emultipole[1][5] = _1emultipole_P_H;

libint2_build_1emultipole[2][0] = _1emultipole_D_S;

libint2_build_1emultipole[2][1] = _1emultipole_D_P;

libint2_build_1emultipole[2][2] = _1emultipole_D_D;

libint2_build_1emultipole[2][3] = _1emultipole_D_F;

libint2_build_1emultipole[2][4] = _1emultipole_D_G;

libint2_build_1emultipole[2][5] = _1emultipole_D_H;

libint2_build_1emultipole[3][0] = _1emultipole_F_S;

libint2_build_1emultipole[3][1] = _1emultipole_F_P;

libint2_build_1emultipole[3][2] = _1emultipole_F_D;

libint2_build_1emultipole[3][3] = _1emultipole_F_F;

libint2_build_1emultipole[3][4] = _1emultipole_F_G;

libint2_build_1emultipole[3][5] = _1emultipole_F_H;

libint2_build_1emultipole[4][0] = _1emultipole_G_S;

libint2_build_1emultipole[4][1] = _1emultipole_G_P;

libint2_build_1emultipole[4][2] = _1emultipole_G_D;

libint2_build_1emultipole[4][3] = _1emultipole_G_F;

libint2_build_1emultipole[4][4] = _1emultipole_G_G;

libint2_build_1emultipole[4][5] = _1emultipole_G_H;

libint2_build_1emultipole[5][0] = _1emultipole_H_S;

libint2_build_1emultipole[5][1] = _1emultipole_H_P;

libint2_build_1emultipole[5][2] = _1emultipole_H_D;

libint2_build_1emultipole[5][3] = _1emultipole_H_F;

libint2_build_1emultipole[5][4] = _1emultipole_H_G;

libint2_build_1emultipole[5][5] = _1emultipole_H_H;

libint2_build_2emultipole[0][0] = _2emultipole_S_S;

libint2_build_2emultipole[0][1] = _2emultipole_S_P;

libint2_build_2emultipole[0][2] = _2emultipole_S_D;

libint2_build_2emultipole[0][3] = _2emultipole_S_F;

libint2_build_2emultipole[0][4] = _2emultipole_S_G;

libint2_build_2emultipole[0][5] = _2emultipole_S_H;

libint2_build_2emultipole[1][0] = _2emultipole_P_S;

libint2_build_2emultipole[1][1] = _2emultipole_P_P;

libint2_build_2emultipole[1][2] = _2emultipole_P_D;

libint2_build_2emultipole[1][3] = _2emultipole_P_F;

libint2_build_2emultipole[1][4] = _2emultipole_P_G;

libint2_build_2emultipole[1][5] = _2emultipole_P_H;

libint2_build_2emultipole[2][0] = _2emultipole_D_S;

libint2_build_2emultipole[2][1] = _2emultipole_D_P;

libint2_build_2emultipole[2][2] = _2emultipole_D_D;

libint2_build_2emultipole[2][3] = _2emultipole_D_F;

libint2_build_2emultipole[2][4] = _2emultipole_D_G;

libint2_build_2emultipole[2][5] = _2emultipole_D_H;

libint2_build_2emultipole[3][0] = _2emultipole_F_S;

libint2_build_2emultipole[3][1] = _2emultipole_F_P;

libint2_build_2emultipole[3][2] = _2emultipole_F_D;

libint2_build_2emultipole[3][3] = _2emultipole_F_F;

libint2_build_2emultipole[3][4] = _2emultipole_F_G;

libint2_build_2emultipole[3][5] = _2emultipole_F_H;

libint2_build_2emultipole[4][0] = _2emultipole_G_S;

libint2_build_2emultipole[4][1] = _2emultipole_G_P;

libint2_build_2emultipole[4][2] = _2emultipole_G_D;

libint2_build_2emultipole[4][3] = _2emultipole_G_F;

libint2_build_2emultipole[4][4] = _2emultipole_G_G;

libint2_build_2emultipole[4][5] = _2emultipole_G_H;

libint2_build_2emultipole[5][0] = _2emultipole_H_S;

libint2_build_2emultipole[5][1] = _2emultipole_H_P;

libint2_build_2emultipole[5][2] = _2emultipole_H_D;

libint2_build_2emultipole[5][3] = _2emultipole_H_F;

libint2_build_2emultipole[5][4] = _2emultipole_H_G;

libint2_build_2emultipole[5][5] = _2emultipole_H_H;

libint2_build_3emultipole[0][0] = _3emultipole_S_S;

libint2_build_3emultipole[0][1] = _3emultipole_S_P;

libint2_build_3emultipole[0][2] = _3emultipole_S_D;

libint2_build_3emultipole[0][3] = _3emultipole_S_F;

libint2_build_3emultipole[0][4] = _3emultipole_S_G;

libint2_build_3emultipole[0][5] = _3emultipole_S_H;

libint2_build_3emultipole[1][0] = _3emultipole_P_S;

libint2_build_3emultipole[1][1] = _3emultipole_P_P;

libint2_build_3emultipole[1][2] = _3emultipole_P_D;

libint2_build_3emultipole[1][3] = _3emultipole_P_F;

libint2_build_3emultipole[1][4] = _3emultipole_P_G;

libint2_build_3emultipole[1][5] = _3emultipole_P_H;

libint2_build_3emultipole[2][0] = _3emultipole_D_S;

libint2_build_3emultipole[2][1] = _3emultipole_D_P;

libint2_build_3emultipole[2][2] = _3emultipole_D_D;

libint2_build_3emultipole[2][3] = _3emultipole_D_F;

libint2_build_3emultipole[2][4] = _3emultipole_D_G;

libint2_build_3emultipole[2][5] = _3emultipole_D_H;

libint2_build_3emultipole[3][0] = _3emultipole_F_S;

libint2_build_3emultipole[3][1] = _3emultipole_F_P;

libint2_build_3emultipole[3][2] = _3emultipole_F_D;

libint2_build_3emultipole[3][3] = _3emultipole_F_F;

libint2_build_3emultipole[3][4] = _3emultipole_F_G;

libint2_build_3emultipole[3][5] = _3emultipole_F_H;

libint2_build_3emultipole[4][0] = _3emultipole_G_S;

libint2_build_3emultipole[4][1] = _3emultipole_G_P;

libint2_build_3emultipole[4][2] = _3emultipole_G_D;

libint2_build_3emultipole[4][3] = _3emultipole_G_F;

libint2_build_3emultipole[4][4] = _3emultipole_G_G;

libint2_build_3emultipole[4][5] = _3emultipole_G_H;

libint2_build_3emultipole[5][0] = _3emultipole_H_S;

libint2_build_3emultipole[5][1] = _3emultipole_H_P;

libint2_build_3emultipole[5][2] = _3emultipole_H_D;

libint2_build_3emultipole[5][3] = _3emultipole_H_F;

libint2_build_3emultipole[5][4] = _3emultipole_H_G;

libint2_build_3emultipole[5][5] = _3emultipole_H_H;

libint2_build_sphemultipole[0][0] = _sphemultipole_S_S;

libint2_build_sphemultipole[0][1] = _sphemultipole_S_P;

libint2_build_sphemultipole[0][2] = _sphemultipole_S_D;

libint2_build_sphemultipole[0][3] = _sphemultipole_S_F;

libint2_build_sphemultipole[0][4] = _sphemultipole_S_G;

libint2_build_sphemultipole[0][5] = _sphemultipole_S_H;

libint2_build_sphemultipole[1][0] = _sphemultipole_P_S;

libint2_build_sphemultipole[1][1] = _sphemultipole_P_P;

libint2_build_sphemultipole[1][2] = _sphemultipole_P_D;

libint2_build_sphemultipole[1][3] = _sphemultipole_P_F;

libint2_build_sphemultipole[1][4] = _sphemultipole_P_G;

libint2_build_sphemultipole[1][5] = _sphemultipole_P_H;

libint2_build_sphemultipole[2][0] = _sphemultipole_D_S;

libint2_build_sphemultipole[2][1] = _sphemultipole_D_P;

libint2_build_sphemultipole[2][2] = _sphemultipole_D_D;

libint2_build_sphemultipole[2][3] = _sphemultipole_D_F;

libint2_build_sphemultipole[2][4] = _sphemultipole_D_G;

libint2_build_sphemultipole[2][5] = _sphemultipole_D_H;

libint2_build_sphemultipole[3][0] = _sphemultipole_F_S;

libint2_build_sphemultipole[3][1] = _sphemultipole_F_P;

libint2_build_sphemultipole[3][2] = _sphemultipole_F_D;

libint2_build_sphemultipole[3][3] = _sphemultipole_F_F;

libint2_build_sphemultipole[3][4] = _sphemultipole_F_G;

libint2_build_sphemultipole[3][5] = _sphemultipole_F_H;

libint2_build_sphemultipole[4][0] = _sphemultipole_G_S;

libint2_build_sphemultipole[4][1] = _sphemultipole_G_P;

libint2_build_sphemultipole[4][2] = _sphemultipole_G_D;

libint2_build_sphemultipole[4][3] = _sphemultipole_G_F;

libint2_build_sphemultipole[4][4] = _sphemultipole_G_G;

libint2_build_sphemultipole[4][5] = _sphemultipole_G_H;

libint2_build_sphemultipole[5][0] = _sphemultipole_H_S;

libint2_build_sphemultipole[5][1] = _sphemultipole_H_P;

libint2_build_sphemultipole[5][2] = _sphemultipole_H_D;

libint2_build_sphemultipole[5][3] = _sphemultipole_H_F;

libint2_build_sphemultipole[5][4] = _sphemultipole_H_G;

libint2_build_sphemultipole[5][5] = _sphemultipole_H_H;

libint2_build_eri[0][0][0][0] = _aB_S__0__S__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][1][0] = _aB_S__0__P__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][1][1] = _aB_S__0__P__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][2][0] = _aB_S__0__D__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][2][1] = _aB_S__0__D__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][2][2] = _aB_S__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[0][0][3][0] = _aB_S__0__F__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][3][1] = _aB_S__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][3][2] = _aB_S__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[0][0][3][3] = _aB_S__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[0][0][4][0] = _aB_S__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][4][1] = _aB_S__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][4][2] = _aB_S__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[0][0][4][3] = _aB_S__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[0][0][4][4] = _aB_S__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[0][0][5][0] = _aB_S__0__H__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][5][1] = _aB_S__0__H__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][5][2] = _aB_S__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[0][0][5][3] = _aB_S__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[0][0][5][4] = _aB_S__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[0][0][5][5] = _aB_S__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[1][0][1][0] = _aB_P__0__P__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][1][1] = _aB_P__0__P__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][2][0] = _aB_P__0__D__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][2][1] = _aB_P__0__D__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][2][2] = _aB_P__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[1][0][3][0] = _aB_P__0__F__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][3][1] = _aB_P__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][3][2] = _aB_P__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[1][0][3][3] = _aB_P__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[1][0][4][0] = _aB_P__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][4][1] = _aB_P__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][4][2] = _aB_P__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[1][0][4][3] = _aB_P__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[1][0][4][4] = _aB_P__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[1][0][5][0] = _aB_P__0__H__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][5][1] = _aB_P__0__H__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][5][2] = _aB_P__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[1][0][5][3] = _aB_P__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[1][0][5][4] = _aB_P__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[1][0][5][5] = _aB_P__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[1][1][1][1] = _aB_P__0__P__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][2][0] = _aB_P__0__D__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[1][1][2][1] = _aB_P__0__D__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][2][2] = _aB_P__0__D__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[1][1][3][0] = _aB_P__0__F__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[1][1][3][1] = _aB_P__0__F__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][3][2] = _aB_P__0__F__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[1][1][3][3] = _aB_P__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[1][1][4][0] = _aB_P__0__G__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[1][1][4][1] = _aB_P__0__G__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][4][2] = _aB_P__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[1][1][4][3] = _aB_P__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[1][1][4][4] = _aB_P__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[1][1][5][0] = _aB_P__0__H__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[1][1][5][1] = _aB_P__0__H__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][5][2] = _aB_P__0__H__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[1][1][5][3] = _aB_P__0__H__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[1][1][5][4] = _aB_P__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[1][1][5][5] = _aB_P__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[2][0][1][1] = _aB_D__0__P__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][2][0] = _aB_D__0__D__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[2][0][2][1] = _aB_D__0__D__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][2][2] = _aB_D__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[2][0][3][0] = _aB_D__0__F__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[2][0][3][1] = _aB_D__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][3][2] = _aB_D__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[2][0][3][3] = _aB_D__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[2][0][4][0] = _aB_D__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[2][0][4][1] = _aB_D__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][4][2] = _aB_D__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[2][0][4][3] = _aB_D__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[2][0][4][4] = _aB_D__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[2][0][5][0] = _aB_D__0__H__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[2][0][5][1] = _aB_D__0__H__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][5][2] = _aB_D__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[2][0][5][3] = _aB_D__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[2][0][5][4] = _aB_D__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[2][0][5][5] = _aB_D__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[2][1][2][1] = _aB_D__0__D__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[2][1][2][2] = _aB_D__0__D__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[2][1][3][0] = _aB_D__0__F__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[2][1][3][1] = _aB_D__0__F__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[2][1][3][2] = _aB_D__0__F__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[2][1][3][3] = _aB_D__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[2][1][4][0] = _aB_D__0__G__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[2][1][4][1] = _aB_D__0__G__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[2][1][4][2] = _aB_D__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[2][1][4][3] = _aB_D__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[2][1][4][4] = _aB_D__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[2][1][5][0] = _aB_D__0__H__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[2][1][5][1] = _aB_D__0__H__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[2][1][5][2] = _aB_D__0__H__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[2][1][5][3] = _aB_D__0__H__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[2][1][5][4] = _aB_D__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[2][1][5][5] = _aB_D__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[2][2][2][2] = _aB_D__0__D__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[2][2][3][1] = _aB_D__0__F__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[2][2][3][2] = _aB_D__0__F__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[2][2][3][3] = _aB_D__0__F__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[2][2][4][0] = _aB_D__0__G__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[2][2][4][1] = _aB_D__0__G__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[2][2][4][2] = _aB_D__0__G__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[2][2][4][3] = _aB_D__0__G__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[2][2][4][4] = _aB_D__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[2][2][5][0] = _aB_D__0__H__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[2][2][5][1] = _aB_D__0__H__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[2][2][5][2] = _aB_D__0__H__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[2][2][5][3] = _aB_D__0__H__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[2][2][5][4] = _aB_D__0__H__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[2][2][5][5] = _aB_D__0__H__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[3][0][2][1] = _aB_F__0__D__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[3][0][2][2] = _aB_F__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[3][0][3][0] = _aB_F__0__F__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[3][0][3][1] = _aB_F__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[3][0][3][2] = _aB_F__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[3][0][3][3] = _aB_F__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[3][0][4][0] = _aB_F__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[3][0][4][1] = _aB_F__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[3][0][4][2] = _aB_F__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[3][0][4][3] = _aB_F__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[3][0][4][4] = _aB_F__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[3][0][5][0] = _aB_F__0__H__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[3][0][5][1] = _aB_F__0__H__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[3][0][5][2] = _aB_F__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[3][0][5][3] = _aB_F__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[3][0][5][4] = _aB_F__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[3][0][5][5] = _aB_F__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[3][1][2][2] = _aB_F__0__D__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[3][1][3][1] = _aB_F__0__F__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[3][1][3][2] = _aB_F__0__F__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[3][1][3][3] = _aB_F__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[3][1][4][0] = _aB_F__0__G__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[3][1][4][1] = _aB_F__0__G__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[3][1][4][2] = _aB_F__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[3][1][4][3] = _aB_F__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[3][1][4][4] = _aB_F__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[3][1][5][0] = _aB_F__0__H__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[3][1][5][1] = _aB_F__0__H__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[3][1][5][2] = _aB_F__0__H__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[3][1][5][3] = _aB_F__0__H__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[3][1][5][4] = _aB_F__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[3][1][5][5] = _aB_F__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[3][2][3][2] = _aB_F__0__F__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[3][2][3][3] = _aB_F__0__F__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[3][2][4][1] = _aB_F__0__G__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[3][2][4][2] = _aB_F__0__G__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[3][2][4][3] = _aB_F__0__G__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[3][2][4][4] = _aB_F__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[3][2][5][0] = _aB_F__0__H__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[3][2][5][1] = _aB_F__0__H__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[3][2][5][2] = _aB_F__0__H__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[3][2][5][3] = _aB_F__0__H__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[3][2][5][4] = _aB_F__0__H__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[3][2][5][5] = _aB_F__0__H__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[3][3][3][3] = _aB_F__0__F__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][4][2] = _aB_F__0__G__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[3][3][4][3] = _aB_F__0__G__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][4][4] = _aB_F__0__G__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[3][3][5][1] = _aB_F__0__H__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[3][3][5][2] = _aB_F__0__H__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[3][3][5][3] = _aB_F__0__H__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][5][4] = _aB_F__0__H__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[3][3][5][5] = _aB_F__0__H__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[4][0][2][2] = _aB_G__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[4][0][3][1] = _aB_G__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[4][0][3][2] = _aB_G__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[4][0][3][3] = _aB_G__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[4][0][4][0] = _aB_G__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[4][0][4][1] = _aB_G__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[4][0][4][2] = _aB_G__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[4][0][4][3] = _aB_G__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[4][0][4][4] = _aB_G__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[4][0][5][0] = _aB_G__0__H__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[4][0][5][1] = _aB_G__0__H__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[4][0][5][2] = _aB_G__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[4][0][5][3] = _aB_G__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[4][0][5][4] = _aB_G__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[4][0][5][5] = _aB_G__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[4][1][3][2] = _aB_G__0__F__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[4][1][3][3] = _aB_G__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[4][1][4][1] = _aB_G__0__G__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[4][1][4][2] = _aB_G__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[4][1][4][3] = _aB_G__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[4][1][4][4] = _aB_G__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[4][1][5][0] = _aB_G__0__H__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[4][1][5][1] = _aB_G__0__H__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[4][1][5][2] = _aB_G__0__H__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[4][1][5][3] = _aB_G__0__H__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[4][1][5][4] = _aB_G__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[4][1][5][5] = _aB_G__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[4][2][3][3] = _aB_G__0__F__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][4][2] = _aB_G__0__G__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[4][2][4][3] = _aB_G__0__G__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][4][4] = _aB_G__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[4][2][5][1] = _aB_G__0__H__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[4][2][5][2] = _aB_G__0__H__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[4][2][5][3] = _aB_G__0__H__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][5][4] = _aB_G__0__H__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[4][2][5][5] = _aB_G__0__H__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[4][3][4][3] = _aB_G__0__G__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[4][3][4][4] = _aB_G__0__G__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[4][3][5][2] = _aB_G__0__H__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[4][3][5][3] = _aB_G__0__H__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[4][3][5][4] = _aB_G__0__H__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[4][3][5][5] = _aB_G__0__H__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[4][4][4][4] = _aB_G__0__G__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[4][4][5][3] = _aB_G__0__H__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[4][4][5][4] = _aB_G__0__H__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[4][4][5][5] = _aB_G__0__H__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[5][0][3][2] = _aB_H__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[5][0][3][3] = _aB_H__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[5][0][4][1] = _aB_H__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[5][0][4][2] = _aB_H__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[5][0][4][3] = _aB_H__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[5][0][4][4] = _aB_H__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[5][0][5][0] = _aB_H__0__H__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[5][0][5][1] = _aB_H__0__H__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[5][0][5][2] = _aB_H__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[5][0][5][3] = _aB_H__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[5][0][5][4] = _aB_H__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[5][0][5][5] = _aB_H__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[5][1][3][3] = _aB_H__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][4][2] = _aB_H__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[5][1][4][3] = _aB_H__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][4][4] = _aB_H__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[5][1][5][1] = _aB_H__0__H__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[5][1][5][2] = _aB_H__0__H__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[5][1][5][3] = _aB_H__0__H__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][5][4] = _aB_H__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[5][1][5][5] = _aB_H__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[5][2][4][3] = _aB_H__0__G__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[5][2][4][4] = _aB_H__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[5][2][5][2] = _aB_H__0__H__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[5][2][5][3] = _aB_H__0__H__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[5][2][5][4] = _aB_H__0__H__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[5][2][5][5] = _aB_H__0__H__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[5][3][4][4] = _aB_H__0__G__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[5][3][5][3] = _aB_H__0__H__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[5][3][5][4] = _aB_H__0__H__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[5][3][5][5] = _aB_H__0__H__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[5][4][5][4] = _aB_H__0__H__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[5][4][5][5] = _aB_H__0__H__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[5][5][5][5] = _aB_H__0__H__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri1[0][0][0][0] = deriv1_aB_S__0__S__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[0][0][1][0] = deriv1_aB_S__0__P__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[0][0][1][1] = deriv1_aB_S__0__P__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[0][0][2][0] = deriv1_aB_S__0__D__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[0][0][2][1] = deriv1_aB_S__0__D__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[0][0][2][2] = deriv1_aB_S__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[0][0][3][0] = deriv1_aB_S__0__F__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[0][0][3][1] = deriv1_aB_S__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[0][0][3][2] = deriv1_aB_S__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[0][0][3][3] = deriv1_aB_S__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri1[0][0][4][0] = deriv1_aB_S__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[0][0][4][1] = deriv1_aB_S__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[0][0][4][2] = deriv1_aB_S__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[0][0][4][3] = deriv1_aB_S__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri1[0][0][4][4] = deriv1_aB_S__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri1[1][0][1][0] = deriv1_aB_P__0__P__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[1][0][1][1] = deriv1_aB_P__0__P__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[1][0][2][0] = deriv1_aB_P__0__D__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[1][0][2][1] = deriv1_aB_P__0__D__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[1][0][2][2] = deriv1_aB_P__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[1][0][3][0] = deriv1_aB_P__0__F__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[1][0][3][1] = deriv1_aB_P__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[1][0][3][2] = deriv1_aB_P__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[1][0][3][3] = deriv1_aB_P__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri1[1][0][4][0] = deriv1_aB_P__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[1][0][4][1] = deriv1_aB_P__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[1][0][4][2] = deriv1_aB_P__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[1][0][4][3] = deriv1_aB_P__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri1[1][0][4][4] = deriv1_aB_P__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri1[1][1][1][1] = deriv1_aB_P__0__P__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri1[1][1][2][0] = deriv1_aB_P__0__D__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri1[1][1][2][1] = deriv1_aB_P__0__D__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri1[1][1][2][2] = deriv1_aB_P__0__D__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri1[1][1][3][0] = deriv1_aB_P__0__F__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri1[1][1][3][1] = deriv1_aB_P__0__F__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri1[1][1][3][2] = deriv1_aB_P__0__F__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri1[1][1][3][3] = deriv1_aB_P__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri1[1][1][4][0] = deriv1_aB_P__0__G__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri1[1][1][4][1] = deriv1_aB_P__0__G__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri1[1][1][4][2] = deriv1_aB_P__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri1[1][1][4][3] = deriv1_aB_P__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri1[1][1][4][4] = deriv1_aB_P__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri1[2][0][1][1] = deriv1_aB_D__0__P__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[2][0][2][0] = deriv1_aB_D__0__D__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[2][0][2][1] = deriv1_aB_D__0__D__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[2][0][2][2] = deriv1_aB_D__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[2][0][3][0] = deriv1_aB_D__0__F__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[2][0][3][1] = deriv1_aB_D__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[2][0][3][2] = deriv1_aB_D__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[2][0][3][3] = deriv1_aB_D__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri1[2][0][4][0] = deriv1_aB_D__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[2][0][4][1] = deriv1_aB_D__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[2][0][4][2] = deriv1_aB_D__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[2][0][4][3] = deriv1_aB_D__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri1[2][0][4][4] = deriv1_aB_D__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri1[2][1][2][1] = deriv1_aB_D__0__D__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri1[2][1][2][2] = deriv1_aB_D__0__D__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri1[2][1][3][0] = deriv1_aB_D__0__F__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri1[2][1][3][1] = deriv1_aB_D__0__F__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri1[2][1][3][2] = deriv1_aB_D__0__F__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri1[2][1][3][3] = deriv1_aB_D__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri1[2][1][4][0] = deriv1_aB_D__0__G__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri1[2][1][4][1] = deriv1_aB_D__0__G__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri1[2][1][4][2] = deriv1_aB_D__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri1[2][1][4][3] = deriv1_aB_D__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri1[2][1][4][4] = deriv1_aB_D__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri1[2][2][2][2] = deriv1_aB_D__0__D__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri1[2][2][3][1] = deriv1_aB_D__0__F__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri1[2][2][3][2] = deriv1_aB_D__0__F__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri1[2][2][3][3] = deriv1_aB_D__0__F__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri1[2][2][4][0] = deriv1_aB_D__0__G__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri1[2][2][4][1] = deriv1_aB_D__0__G__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri1[2][2][4][2] = deriv1_aB_D__0__G__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri1[2][2][4][3] = deriv1_aB_D__0__G__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri1[2][2][4][4] = deriv1_aB_D__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri1[3][0][2][1] = deriv1_aB_F__0__D__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[3][0][2][2] = deriv1_aB_F__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[3][0][3][0] = deriv1_aB_F__0__F__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[3][0][3][1] = deriv1_aB_F__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[3][0][3][2] = deriv1_aB_F__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[3][0][3][3] = deriv1_aB_F__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri1[3][0][4][0] = deriv1_aB_F__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[3][0][4][1] = deriv1_aB_F__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[3][0][4][2] = deriv1_aB_F__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[3][0][4][3] = deriv1_aB_F__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri1[3][0][4][4] = deriv1_aB_F__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri1[3][1][2][2] = deriv1_aB_F__0__D__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri1[3][1][3][1] = deriv1_aB_F__0__F__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri1[3][1][3][2] = deriv1_aB_F__0__F__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri1[3][1][3][3] = deriv1_aB_F__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri1[3][1][4][0] = deriv1_aB_F__0__G__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri1[3][1][4][1] = deriv1_aB_F__0__G__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri1[3][1][4][2] = deriv1_aB_F__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri1[3][1][4][3] = deriv1_aB_F__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri1[3][1][4][4] = deriv1_aB_F__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri1[3][2][3][2] = deriv1_aB_F__0__F__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri1[3][2][3][3] = deriv1_aB_F__0__F__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri1[3][2][4][1] = deriv1_aB_F__0__G__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri1[3][2][4][2] = deriv1_aB_F__0__G__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri1[3][2][4][3] = deriv1_aB_F__0__G__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri1[3][2][4][4] = deriv1_aB_F__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri1[3][3][3][3] = deriv1_aB_F__0__F__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri1[3][3][4][2] = deriv1_aB_F__0__G__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri1[3][3][4][3] = deriv1_aB_F__0__G__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri1[3][3][4][4] = deriv1_aB_F__0__G__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri1[4][0][2][2] = deriv1_aB_G__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[4][0][3][1] = deriv1_aB_G__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[4][0][3][2] = deriv1_aB_G__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[4][0][3][3] = deriv1_aB_G__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri1[4][0][4][0] = deriv1_aB_G__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri1[4][0][4][1] = deriv1_aB_G__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri1[4][0][4][2] = deriv1_aB_G__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri1[4][0][4][3] = deriv1_aB_G__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri1[4][0][4][4] = deriv1_aB_G__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri1[4][1][3][2] = deriv1_aB_G__0__F__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri1[4][1][3][3] = deriv1_aB_G__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri1[4][1][4][1] = deriv1_aB_G__0__G__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri1[4][1][4][2] = deriv1_aB_G__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri1[4][1][4][3] = deriv1_aB_G__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri1[4][1][4][4] = deriv1_aB_G__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri1[4][2][3][3] = deriv1_aB_G__0__F__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri1[4][2][4][2] = deriv1_aB_G__0__G__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri1[4][2][4][3] = deriv1_aB_G__0__G__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri1[4][2][4][4] = deriv1_aB_G__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri1[4][3][4][3] = deriv1_aB_G__0__G__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri1[4][3][4][4] = deriv1_aB_G__0__G__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri1[4][4][4][4] = deriv1_aB_G__0__G__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_3eri[0][0][0] = eri3_aB_S__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[0][1][0] = eri3_aB_S__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[0][1][1] = eri3_aB_S__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[0][2][0] = eri3_aB_S__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[0][2][1] = eri3_aB_S__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[0][2][2] = eri3_aB_S__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[0][3][0] = eri3_aB_S__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[0][3][1] = eri3_aB_S__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[0][3][2] = eri3_aB_S__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[0][3][3] = eri3_aB_S__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[0][4][0] = eri3_aB_S__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[0][4][1] = eri3_aB_S__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[0][4][2] = eri3_aB_S__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[0][4][3] = eri3_aB_S__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[0][4][4] = eri3_aB_S__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[0][5][0] = eri3_aB_S__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[0][5][1] = eri3_aB_S__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[0][5][2] = eri3_aB_S__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[0][5][3] = eri3_aB_S__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[0][5][4] = eri3_aB_S__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[0][5][5] = eri3_aB_S__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[1][0][0] = eri3_aB_P__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[1][1][0] = eri3_aB_P__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[1][1][1] = eri3_aB_P__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[1][2][0] = eri3_aB_P__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[1][2][1] = eri3_aB_P__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[1][2][2] = eri3_aB_P__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[1][3][0] = eri3_aB_P__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[1][3][1] = eri3_aB_P__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[1][3][2] = eri3_aB_P__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[1][3][3] = eri3_aB_P__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[1][4][0] = eri3_aB_P__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[1][4][1] = eri3_aB_P__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[1][4][2] = eri3_aB_P__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[1][4][3] = eri3_aB_P__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[1][4][4] = eri3_aB_P__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[1][5][0] = eri3_aB_P__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[1][5][1] = eri3_aB_P__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[1][5][2] = eri3_aB_P__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[1][5][3] = eri3_aB_P__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[1][5][4] = eri3_aB_P__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[1][5][5] = eri3_aB_P__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[2][0][0] = eri3_aB_D__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[2][1][0] = eri3_aB_D__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[2][1][1] = eri3_aB_D__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[2][2][0] = eri3_aB_D__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[2][2][1] = eri3_aB_D__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[2][2][2] = eri3_aB_D__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[2][3][0] = eri3_aB_D__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[2][3][1] = eri3_aB_D__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[2][3][2] = eri3_aB_D__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[2][3][3] = eri3_aB_D__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[2][4][0] = eri3_aB_D__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[2][4][1] = eri3_aB_D__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[2][4][2] = eri3_aB_D__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[2][4][3] = eri3_aB_D__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[2][4][4] = eri3_aB_D__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[2][5][0] = eri3_aB_D__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[2][5][1] = eri3_aB_D__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[2][5][2] = eri3_aB_D__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[2][5][3] = eri3_aB_D__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[2][5][4] = eri3_aB_D__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[2][5][5] = eri3_aB_D__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[3][0][0] = eri3_aB_F__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[3][1][0] = eri3_aB_F__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[3][1][1] = eri3_aB_F__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[3][2][0] = eri3_aB_F__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[3][2][1] = eri3_aB_F__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[3][2][2] = eri3_aB_F__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[3][3][0] = eri3_aB_F__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[3][3][1] = eri3_aB_F__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[3][3][2] = eri3_aB_F__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[3][3][3] = eri3_aB_F__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[3][4][0] = eri3_aB_F__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[3][4][1] = eri3_aB_F__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[3][4][2] = eri3_aB_F__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[3][4][3] = eri3_aB_F__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[3][4][4] = eri3_aB_F__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[3][5][0] = eri3_aB_F__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[3][5][1] = eri3_aB_F__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[3][5][2] = eri3_aB_F__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[3][5][3] = eri3_aB_F__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[3][5][4] = eri3_aB_F__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[3][5][5] = eri3_aB_F__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[4][0][0] = eri3_aB_G__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[4][1][0] = eri3_aB_G__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[4][1][1] = eri3_aB_G__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[4][2][0] = eri3_aB_G__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[4][2][1] = eri3_aB_G__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[4][2][2] = eri3_aB_G__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[4][3][0] = eri3_aB_G__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[4][3][1] = eri3_aB_G__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[4][3][2] = eri3_aB_G__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[4][3][3] = eri3_aB_G__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[4][4][0] = eri3_aB_G__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[4][4][1] = eri3_aB_G__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[4][4][2] = eri3_aB_G__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[4][4][3] = eri3_aB_G__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[4][4][4] = eri3_aB_G__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[4][5][0] = eri3_aB_G__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[4][5][1] = eri3_aB_G__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[4][5][2] = eri3_aB_G__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[4][5][3] = eri3_aB_G__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[4][5][4] = eri3_aB_G__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[4][5][5] = eri3_aB_G__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[5][0][0] = eri3_aB_H__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[5][1][0] = eri3_aB_H__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[5][1][1] = eri3_aB_H__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[5][2][0] = eri3_aB_H__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[5][2][1] = eri3_aB_H__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[5][2][2] = eri3_aB_H__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[5][3][0] = eri3_aB_H__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[5][3][1] = eri3_aB_H__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[5][3][2] = eri3_aB_H__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[5][3][3] = eri3_aB_H__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[5][4][0] = eri3_aB_H__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[5][4][1] = eri3_aB_H__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[5][4][2] = eri3_aB_H__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[5][4][3] = eri3_aB_H__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[5][4][4] = eri3_aB_H__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[5][5][0] = eri3_aB_H__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[5][5][1] = eri3_aB_H__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[5][5][2] = eri3_aB_H__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[5][5][3] = eri3_aB_H__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[5][5][4] = eri3_aB_H__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[5][5][5] = eri3_aB_H__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[6][0][0] = eri3_aB_I__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[6][1][0] = eri3_aB_I__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[6][1][1] = eri3_aB_I__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[6][2][0] = eri3_aB_I__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[6][2][1] = eri3_aB_I__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[6][2][2] = eri3_aB_I__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[6][3][0] = eri3_aB_I__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[6][3][1] = eri3_aB_I__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[6][3][2] = eri3_aB_I__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[6][3][3] = eri3_aB_I__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[6][4][0] = eri3_aB_I__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[6][4][1] = eri3_aB_I__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[6][4][2] = eri3_aB_I__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[6][4][3] = eri3_aB_I__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[6][4][4] = eri3_aB_I__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[6][5][0] = eri3_aB_I__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[6][5][1] = eri3_aB_I__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[6][5][2] = eri3_aB_I__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[6][5][3] = eri3_aB_I__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[6][5][4] = eri3_aB_I__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[6][5][5] = eri3_aB_I__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[7][0][0] = eri3_aB_K__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[7][1][0] = eri3_aB_K__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[7][1][1] = eri3_aB_K__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[7][2][0] = eri3_aB_K__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[7][2][1] = eri3_aB_K__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[7][2][2] = eri3_aB_K__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[7][3][0] = eri3_aB_K__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[7][3][1] = eri3_aB_K__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[7][3][2] = eri3_aB_K__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[7][3][3] = eri3_aB_K__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[7][4][0] = eri3_aB_K__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[7][4][1] = eri3_aB_K__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[7][4][2] = eri3_aB_K__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[7][4][3] = eri3_aB_K__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[7][4][4] = eri3_aB_K__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[7][5][0] = eri3_aB_K__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[7][5][1] = eri3_aB_K__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[7][5][2] = eri3_aB_K__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[7][5][3] = eri3_aB_K__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[7][5][4] = eri3_aB_K__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[7][5][5] = eri3_aB_K__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri1[0][0][0] = deriv1eri3_aB_S__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[0][1][0] = deriv1eri3_aB_S__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[0][1][1] = deriv1eri3_aB_S__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[0][2][0] = deriv1eri3_aB_S__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[0][2][1] = deriv1eri3_aB_S__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[0][2][2] = deriv1eri3_aB_S__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[0][3][0] = deriv1eri3_aB_S__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[0][3][1] = deriv1eri3_aB_S__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[0][3][2] = deriv1eri3_aB_S__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[0][3][3] = deriv1eri3_aB_S__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[0][4][0] = deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[0][4][1] = deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[0][4][2] = deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[0][4][3] = deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[0][4][4] = deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[0][5][0] = deriv1eri3_aB_S__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[0][5][1] = deriv1eri3_aB_S__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[0][5][2] = deriv1eri3_aB_S__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[0][5][3] = deriv1eri3_aB_S__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[0][5][4] = deriv1eri3_aB_S__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[0][5][5] = deriv1eri3_aB_S__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri1[1][0][0] = deriv1eri3_aB_P__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[1][1][0] = deriv1eri3_aB_P__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[1][1][1] = deriv1eri3_aB_P__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[1][2][0] = deriv1eri3_aB_P__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[1][2][1] = deriv1eri3_aB_P__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[1][2][2] = deriv1eri3_aB_P__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[1][3][0] = deriv1eri3_aB_P__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[1][3][1] = deriv1eri3_aB_P__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[1][3][2] = deriv1eri3_aB_P__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[1][3][3] = deriv1eri3_aB_P__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[1][4][0] = deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[1][4][1] = deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[1][4][2] = deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[1][4][3] = deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[1][4][4] = deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[1][5][0] = deriv1eri3_aB_P__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[1][5][1] = deriv1eri3_aB_P__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[1][5][2] = deriv1eri3_aB_P__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[1][5][3] = deriv1eri3_aB_P__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[1][5][4] = deriv1eri3_aB_P__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[1][5][5] = deriv1eri3_aB_P__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri1[2][0][0] = deriv1eri3_aB_D__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[2][1][0] = deriv1eri3_aB_D__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[2][1][1] = deriv1eri3_aB_D__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[2][2][0] = deriv1eri3_aB_D__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[2][2][1] = deriv1eri3_aB_D__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[2][2][2] = deriv1eri3_aB_D__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[2][3][0] = deriv1eri3_aB_D__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[2][3][1] = deriv1eri3_aB_D__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[2][3][2] = deriv1eri3_aB_D__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[2][3][3] = deriv1eri3_aB_D__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[2][4][0] = deriv1eri3_aB_D__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[2][4][1] = deriv1eri3_aB_D__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[2][4][2] = deriv1eri3_aB_D__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[2][4][3] = deriv1eri3_aB_D__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[2][4][4] = deriv1eri3_aB_D__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[2][5][0] = deriv1eri3_aB_D__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[2][5][1] = deriv1eri3_aB_D__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[2][5][2] = deriv1eri3_aB_D__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[2][5][3] = deriv1eri3_aB_D__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[2][5][4] = deriv1eri3_aB_D__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[2][5][5] = deriv1eri3_aB_D__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri1[3][0][0] = deriv1eri3_aB_F__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[3][1][0] = deriv1eri3_aB_F__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[3][1][1] = deriv1eri3_aB_F__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[3][2][0] = deriv1eri3_aB_F__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[3][2][1] = deriv1eri3_aB_F__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[3][2][2] = deriv1eri3_aB_F__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[3][3][0] = deriv1eri3_aB_F__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[3][3][1] = deriv1eri3_aB_F__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[3][3][2] = deriv1eri3_aB_F__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[3][3][3] = deriv1eri3_aB_F__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[3][4][0] = deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[3][4][1] = deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[3][4][2] = deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[3][4][3] = deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[3][4][4] = deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[3][5][0] = deriv1eri3_aB_F__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[3][5][1] = deriv1eri3_aB_F__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[3][5][2] = deriv1eri3_aB_F__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[3][5][3] = deriv1eri3_aB_F__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[3][5][4] = deriv1eri3_aB_F__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[3][5][5] = deriv1eri3_aB_F__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri1[4][0][0] = deriv1eri3_aB_G__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[4][1][0] = deriv1eri3_aB_G__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[4][1][1] = deriv1eri3_aB_G__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[4][2][0] = deriv1eri3_aB_G__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[4][2][1] = deriv1eri3_aB_G__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[4][2][2] = deriv1eri3_aB_G__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[4][3][0] = deriv1eri3_aB_G__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[4][3][1] = deriv1eri3_aB_G__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[4][3][2] = deriv1eri3_aB_G__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[4][3][3] = deriv1eri3_aB_G__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[4][4][0] = deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[4][4][1] = deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[4][4][2] = deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[4][4][3] = deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[4][4][4] = deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[4][5][0] = deriv1eri3_aB_G__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[4][5][1] = deriv1eri3_aB_G__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[4][5][2] = deriv1eri3_aB_G__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[4][5][3] = deriv1eri3_aB_G__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[4][5][4] = deriv1eri3_aB_G__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[4][5][5] = deriv1eri3_aB_G__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri1[5][0][0] = deriv1eri3_aB_H__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[5][1][0] = deriv1eri3_aB_H__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[5][1][1] = deriv1eri3_aB_H__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[5][2][0] = deriv1eri3_aB_H__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[5][2][1] = deriv1eri3_aB_H__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[5][2][2] = deriv1eri3_aB_H__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[5][3][0] = deriv1eri3_aB_H__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[5][3][1] = deriv1eri3_aB_H__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[5][3][2] = deriv1eri3_aB_H__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[5][3][3] = deriv1eri3_aB_H__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[5][4][0] = deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[5][4][1] = deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[5][4][2] = deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[5][4][3] = deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[5][4][4] = deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[5][5][0] = deriv1eri3_aB_H__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[5][5][1] = deriv1eri3_aB_H__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[5][5][2] = deriv1eri3_aB_H__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[5][5][3] = deriv1eri3_aB_H__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[5][5][4] = deriv1eri3_aB_H__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[5][5][5] = deriv1eri3_aB_H__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri1[6][0][0] = deriv1eri3_aB_I__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[6][1][0] = deriv1eri3_aB_I__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[6][1][1] = deriv1eri3_aB_I__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[6][2][0] = deriv1eri3_aB_I__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[6][2][1] = deriv1eri3_aB_I__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[6][2][2] = deriv1eri3_aB_I__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[6][3][0] = deriv1eri3_aB_I__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[6][3][1] = deriv1eri3_aB_I__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[6][3][2] = deriv1eri3_aB_I__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[6][3][3] = deriv1eri3_aB_I__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[6][4][0] = deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[6][4][1] = deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[6][4][2] = deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[6][4][3] = deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[6][4][4] = deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[6][5][0] = deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri1[6][5][1] = deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri1[6][5][2] = deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri1[6][5][3] = deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri1[6][5][4] = deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri1[6][5][5] = deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_2eri[0][0] = eri2_aB_S__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][1] = eri2_aB_S__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][2] = eri2_aB_S__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][3] = eri2_aB_S__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][4] = eri2_aB_S__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][5] = eri2_aB_S__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][6] = eri2_aB_S__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][7] = eri2_aB_S__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][0] = eri2_aB_P__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][1] = eri2_aB_P__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][2] = eri2_aB_P__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][3] = eri2_aB_P__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][4] = eri2_aB_P__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][5] = eri2_aB_P__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][6] = eri2_aB_P__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][7] = eri2_aB_P__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][0] = eri2_aB_D__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][1] = eri2_aB_D__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][2] = eri2_aB_D__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][3] = eri2_aB_D__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][4] = eri2_aB_D__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][5] = eri2_aB_D__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][6] = eri2_aB_D__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][7] = eri2_aB_D__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][0] = eri2_aB_F__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][1] = eri2_aB_F__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][2] = eri2_aB_F__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][3] = eri2_aB_F__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][4] = eri2_aB_F__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][5] = eri2_aB_F__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][6] = eri2_aB_F__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][7] = eri2_aB_F__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][0] = eri2_aB_G__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][1] = eri2_aB_G__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][2] = eri2_aB_G__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][3] = eri2_aB_G__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][4] = eri2_aB_G__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][5] = eri2_aB_G__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][6] = eri2_aB_G__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][7] = eri2_aB_G__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][0] = eri2_aB_H__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][1] = eri2_aB_H__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][2] = eri2_aB_H__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][3] = eri2_aB_H__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][4] = eri2_aB_H__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][5] = eri2_aB_H__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][6] = eri2_aB_H__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][7] = eri2_aB_H__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][0] = eri2_aB_I__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][1] = eri2_aB_I__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][2] = eri2_aB_I__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][3] = eri2_aB_I__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][4] = eri2_aB_I__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][5] = eri2_aB_I__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][6] = eri2_aB_I__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][7] = eri2_aB_I__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][0] = eri2_aB_K__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][1] = eri2_aB_K__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][2] = eri2_aB_K__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][3] = eri2_aB_K__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][4] = eri2_aB_K__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][5] = eri2_aB_K__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][6] = eri2_aB_K__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][7] = eri2_aB_K__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[0][0] = deriv1eri2_aB_S__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[0][1] = deriv1eri2_aB_S__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[0][2] = deriv1eri2_aB_S__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[0][3] = deriv1eri2_aB_S__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[0][4] = deriv1eri2_aB_S__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[0][5] = deriv1eri2_aB_S__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[0][6] = deriv1eri2_aB_S__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[1][0] = deriv1eri2_aB_P__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[1][1] = deriv1eri2_aB_P__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[1][2] = deriv1eri2_aB_P__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[1][3] = deriv1eri2_aB_P__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[1][4] = deriv1eri2_aB_P__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[1][5] = deriv1eri2_aB_P__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[1][6] = deriv1eri2_aB_P__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[2][0] = deriv1eri2_aB_D__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[2][1] = deriv1eri2_aB_D__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[2][2] = deriv1eri2_aB_D__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[2][3] = deriv1eri2_aB_D__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[2][4] = deriv1eri2_aB_D__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[2][5] = deriv1eri2_aB_D__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[2][6] = deriv1eri2_aB_D__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[3][0] = deriv1eri2_aB_F__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[3][1] = deriv1eri2_aB_F__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[3][2] = deriv1eri2_aB_F__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[3][3] = deriv1eri2_aB_F__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[3][4] = deriv1eri2_aB_F__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[3][5] = deriv1eri2_aB_F__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[3][6] = deriv1eri2_aB_F__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[4][0] = deriv1eri2_aB_G__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[4][1] = deriv1eri2_aB_G__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[4][2] = deriv1eri2_aB_G__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[4][3] = deriv1eri2_aB_G__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[4][4] = deriv1eri2_aB_G__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[4][5] = deriv1eri2_aB_G__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[4][6] = deriv1eri2_aB_G__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[5][0] = deriv1eri2_aB_H__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[5][1] = deriv1eri2_aB_H__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[5][2] = deriv1eri2_aB_H__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[5][3] = deriv1eri2_aB_H__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[5][4] = deriv1eri2_aB_H__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[5][5] = deriv1eri2_aB_H__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[5][6] = deriv1eri2_aB_H__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[6][0] = deriv1eri2_aB_I__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[6][1] = deriv1eri2_aB_I__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[6][2] = deriv1eri2_aB_I__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[6][3] = deriv1eri2_aB_I__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[6][4] = deriv1eri2_aB_I__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[6][5] = deriv1eri2_aB_I__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri1[6][6] = deriv1eri2_aB_I__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

}
#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif


