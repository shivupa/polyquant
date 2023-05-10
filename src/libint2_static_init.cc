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
void (*libint2_build_default[11][11][11][11])(const Libint_t*);
void (*libint2_build_overlap[11][11])(const Libint_t*);
void (*libint2_build_kinetic[11][11])(const Libint_t*);
void (*libint2_build_elecpot[11][11])(const Libint_t*);
void (*libint2_build_1emultipole[11][11])(const Libint_t*);
void (*libint2_build_2emultipole[11][11])(const Libint_t*);
void (*libint2_build_3emultipole[11][11])(const Libint_t*);
void (*libint2_build_sphemultipole[11][11])(const Libint_t*);
void (*libint2_build_eri[11][11][11][11])(const Libint_t*);
void (*libint2_build_3eri[11][11][11])(const Libint_t*);
void (*libint2_build_2eri[11][11])(const Libint_t*);
void libint2_static_init() {
libint2_build_overlap[0][1] = _overlap_S_P;

libint2_build_overlap[0][2] = _overlap_S_D;

libint2_build_overlap[0][3] = _overlap_S_F;

libint2_build_overlap[0][4] = _overlap_S_G;

libint2_build_overlap[0][5] = _overlap_S_H;

libint2_build_overlap[0][6] = _overlap_S_I;

libint2_build_overlap[0][7] = _overlap_S_K;

libint2_build_overlap[0][8] = _overlap_S_L;

libint2_build_overlap[0][9] = _overlap_S_M;

libint2_build_overlap[0][10] = _overlap_S_PS;

libint2_build_overlap[1][0] = _overlap_P_S;

libint2_build_overlap[1][1] = _overlap_P_P;

libint2_build_overlap[1][2] = _overlap_P_D;

libint2_build_overlap[1][3] = _overlap_P_F;

libint2_build_overlap[1][4] = _overlap_P_G;

libint2_build_overlap[1][5] = _overlap_P_H;

libint2_build_overlap[1][6] = _overlap_P_I;

libint2_build_overlap[1][7] = _overlap_P_K;

libint2_build_overlap[1][8] = _overlap_P_L;

libint2_build_overlap[1][9] = _overlap_P_M;

libint2_build_overlap[1][10] = _overlap_P_PS;

libint2_build_overlap[2][0] = _overlap_D_S;

libint2_build_overlap[2][1] = _overlap_D_P;

libint2_build_overlap[2][2] = _overlap_D_D;

libint2_build_overlap[2][3] = _overlap_D_F;

libint2_build_overlap[2][4] = _overlap_D_G;

libint2_build_overlap[2][5] = _overlap_D_H;

libint2_build_overlap[2][6] = _overlap_D_I;

libint2_build_overlap[2][7] = _overlap_D_K;

libint2_build_overlap[2][8] = _overlap_D_L;

libint2_build_overlap[2][9] = _overlap_D_M;

libint2_build_overlap[2][10] = _overlap_D_PS;

libint2_build_overlap[3][0] = _overlap_F_S;

libint2_build_overlap[3][1] = _overlap_F_P;

libint2_build_overlap[3][2] = _overlap_F_D;

libint2_build_overlap[3][3] = _overlap_F_F;

libint2_build_overlap[3][4] = _overlap_F_G;

libint2_build_overlap[3][5] = _overlap_F_H;

libint2_build_overlap[3][6] = _overlap_F_I;

libint2_build_overlap[3][7] = _overlap_F_K;

libint2_build_overlap[3][8] = _overlap_F_L;

libint2_build_overlap[3][9] = _overlap_F_M;

libint2_build_overlap[3][10] = _overlap_F_PS;

libint2_build_overlap[4][0] = _overlap_G_S;

libint2_build_overlap[4][1] = _overlap_G_P;

libint2_build_overlap[4][2] = _overlap_G_D;

libint2_build_overlap[4][3] = _overlap_G_F;

libint2_build_overlap[4][4] = _overlap_G_G;

libint2_build_overlap[4][5] = _overlap_G_H;

libint2_build_overlap[4][6] = _overlap_G_I;

libint2_build_overlap[4][7] = _overlap_G_K;

libint2_build_overlap[4][8] = _overlap_G_L;

libint2_build_overlap[4][9] = _overlap_G_M;

libint2_build_overlap[4][10] = _overlap_G_PS;

libint2_build_overlap[5][0] = _overlap_H_S;

libint2_build_overlap[5][1] = _overlap_H_P;

libint2_build_overlap[5][2] = _overlap_H_D;

libint2_build_overlap[5][3] = _overlap_H_F;

libint2_build_overlap[5][4] = _overlap_H_G;

libint2_build_overlap[5][5] = _overlap_H_H;

libint2_build_overlap[5][6] = _overlap_H_I;

libint2_build_overlap[5][7] = _overlap_H_K;

libint2_build_overlap[5][8] = _overlap_H_L;

libint2_build_overlap[5][9] = _overlap_H_M;

libint2_build_overlap[5][10] = _overlap_H_PS;

libint2_build_overlap[6][0] = _overlap_I_S;

libint2_build_overlap[6][1] = _overlap_I_P;

libint2_build_overlap[6][2] = _overlap_I_D;

libint2_build_overlap[6][3] = _overlap_I_F;

libint2_build_overlap[6][4] = _overlap_I_G;

libint2_build_overlap[6][5] = _overlap_I_H;

libint2_build_overlap[6][6] = _overlap_I_I;

libint2_build_overlap[6][7] = _overlap_I_K;

libint2_build_overlap[6][8] = _overlap_I_L;

libint2_build_overlap[6][9] = _overlap_I_M;

libint2_build_overlap[6][10] = _overlap_I_PS;

libint2_build_overlap[7][0] = _overlap_K_S;

libint2_build_overlap[7][1] = _overlap_K_P;

libint2_build_overlap[7][2] = _overlap_K_D;

libint2_build_overlap[7][3] = _overlap_K_F;

libint2_build_overlap[7][4] = _overlap_K_G;

libint2_build_overlap[7][5] = _overlap_K_H;

libint2_build_overlap[7][6] = _overlap_K_I;

libint2_build_overlap[7][7] = _overlap_K_K;

libint2_build_overlap[7][8] = _overlap_K_L;

libint2_build_overlap[7][9] = _overlap_K_M;

libint2_build_overlap[7][10] = _overlap_K_PS;

libint2_build_overlap[8][0] = _overlap_L_S;

libint2_build_overlap[8][1] = _overlap_L_P;

libint2_build_overlap[8][2] = _overlap_L_D;

libint2_build_overlap[8][3] = _overlap_L_F;

libint2_build_overlap[8][4] = _overlap_L_G;

libint2_build_overlap[8][5] = _overlap_L_H;

libint2_build_overlap[8][6] = _overlap_L_I;

libint2_build_overlap[8][7] = _overlap_L_K;

libint2_build_overlap[8][8] = _overlap_L_L;

libint2_build_overlap[8][9] = _overlap_L_M;

libint2_build_overlap[8][10] = _overlap_L_PS;

libint2_build_overlap[9][0] = _overlap_M_S;

libint2_build_overlap[9][1] = _overlap_M_P;

libint2_build_overlap[9][2] = _overlap_M_D;

libint2_build_overlap[9][3] = _overlap_M_F;

libint2_build_overlap[9][4] = _overlap_M_G;

libint2_build_overlap[9][5] = _overlap_M_H;

libint2_build_overlap[9][6] = _overlap_M_I;

libint2_build_overlap[9][7] = _overlap_M_K;

libint2_build_overlap[9][8] = _overlap_M_L;

libint2_build_overlap[9][9] = _overlap_M_M;

libint2_build_overlap[9][10] = _overlap_M_PS;

libint2_build_overlap[10][0] = _overlap_PS_S;

libint2_build_overlap[10][1] = _overlap_PS_P;

libint2_build_overlap[10][2] = _overlap_PS_D;

libint2_build_overlap[10][3] = _overlap_PS_F;

libint2_build_overlap[10][4] = _overlap_PS_G;

libint2_build_overlap[10][5] = _overlap_PS_H;

libint2_build_overlap[10][6] = _overlap_PS_I;

libint2_build_overlap[10][7] = _overlap_PS_K;

libint2_build_overlap[10][8] = _overlap_PS_L;

libint2_build_overlap[10][9] = _overlap_PS_M;

libint2_build_overlap[10][10] = _overlap_PS_PS;

libint2_build_kinetic[0][0] = _kinetic_S_S;

libint2_build_kinetic[0][1] = _kinetic_S_P;

libint2_build_kinetic[0][2] = _kinetic_S_D;

libint2_build_kinetic[0][3] = _kinetic_S_F;

libint2_build_kinetic[0][4] = _kinetic_S_G;

libint2_build_kinetic[0][5] = _kinetic_S_H;

libint2_build_kinetic[0][6] = _kinetic_S_I;

libint2_build_kinetic[0][7] = _kinetic_S_K;

libint2_build_kinetic[0][8] = _kinetic_S_L;

libint2_build_kinetic[0][9] = _kinetic_S_M;

libint2_build_kinetic[0][10] = _kinetic_S_PS;

libint2_build_kinetic[1][0] = _kinetic_P_S;

libint2_build_kinetic[1][1] = _kinetic_P_P;

libint2_build_kinetic[1][2] = _kinetic_P_D;

libint2_build_kinetic[1][3] = _kinetic_P_F;

libint2_build_kinetic[1][4] = _kinetic_P_G;

libint2_build_kinetic[1][5] = _kinetic_P_H;

libint2_build_kinetic[1][6] = _kinetic_P_I;

libint2_build_kinetic[1][7] = _kinetic_P_K;

libint2_build_kinetic[1][8] = _kinetic_P_L;

libint2_build_kinetic[1][9] = _kinetic_P_M;

libint2_build_kinetic[1][10] = _kinetic_P_PS;

libint2_build_kinetic[2][0] = _kinetic_D_S;

libint2_build_kinetic[2][1] = _kinetic_D_P;

libint2_build_kinetic[2][2] = _kinetic_D_D;

libint2_build_kinetic[2][3] = _kinetic_D_F;

libint2_build_kinetic[2][4] = _kinetic_D_G;

libint2_build_kinetic[2][5] = _kinetic_D_H;

libint2_build_kinetic[2][6] = _kinetic_D_I;

libint2_build_kinetic[2][7] = _kinetic_D_K;

libint2_build_kinetic[2][8] = _kinetic_D_L;

libint2_build_kinetic[2][9] = _kinetic_D_M;

libint2_build_kinetic[2][10] = _kinetic_D_PS;

libint2_build_kinetic[3][0] = _kinetic_F_S;

libint2_build_kinetic[3][1] = _kinetic_F_P;

libint2_build_kinetic[3][2] = _kinetic_F_D;

libint2_build_kinetic[3][3] = _kinetic_F_F;

libint2_build_kinetic[3][4] = _kinetic_F_G;

libint2_build_kinetic[3][5] = _kinetic_F_H;

libint2_build_kinetic[3][6] = _kinetic_F_I;

libint2_build_kinetic[3][7] = _kinetic_F_K;

libint2_build_kinetic[3][8] = _kinetic_F_L;

libint2_build_kinetic[3][9] = _kinetic_F_M;

libint2_build_kinetic[3][10] = _kinetic_F_PS;

libint2_build_kinetic[4][0] = _kinetic_G_S;

libint2_build_kinetic[4][1] = _kinetic_G_P;

libint2_build_kinetic[4][2] = _kinetic_G_D;

libint2_build_kinetic[4][3] = _kinetic_G_F;

libint2_build_kinetic[4][4] = _kinetic_G_G;

libint2_build_kinetic[4][5] = _kinetic_G_H;

libint2_build_kinetic[4][6] = _kinetic_G_I;

libint2_build_kinetic[4][7] = _kinetic_G_K;

libint2_build_kinetic[4][8] = _kinetic_G_L;

libint2_build_kinetic[4][9] = _kinetic_G_M;

libint2_build_kinetic[4][10] = _kinetic_G_PS;

libint2_build_kinetic[5][0] = _kinetic_H_S;

libint2_build_kinetic[5][1] = _kinetic_H_P;

libint2_build_kinetic[5][2] = _kinetic_H_D;

libint2_build_kinetic[5][3] = _kinetic_H_F;

libint2_build_kinetic[5][4] = _kinetic_H_G;

libint2_build_kinetic[5][5] = _kinetic_H_H;

libint2_build_kinetic[5][6] = _kinetic_H_I;

libint2_build_kinetic[5][7] = _kinetic_H_K;

libint2_build_kinetic[5][8] = _kinetic_H_L;

libint2_build_kinetic[5][9] = _kinetic_H_M;

libint2_build_kinetic[5][10] = _kinetic_H_PS;

libint2_build_kinetic[6][0] = _kinetic_I_S;

libint2_build_kinetic[6][1] = _kinetic_I_P;

libint2_build_kinetic[6][2] = _kinetic_I_D;

libint2_build_kinetic[6][3] = _kinetic_I_F;

libint2_build_kinetic[6][4] = _kinetic_I_G;

libint2_build_kinetic[6][5] = _kinetic_I_H;

libint2_build_kinetic[6][6] = _kinetic_I_I;

libint2_build_kinetic[6][7] = _kinetic_I_K;

libint2_build_kinetic[6][8] = _kinetic_I_L;

libint2_build_kinetic[6][9] = _kinetic_I_M;

libint2_build_kinetic[6][10] = _kinetic_I_PS;

libint2_build_kinetic[7][0] = _kinetic_K_S;

libint2_build_kinetic[7][1] = _kinetic_K_P;

libint2_build_kinetic[7][2] = _kinetic_K_D;

libint2_build_kinetic[7][3] = _kinetic_K_F;

libint2_build_kinetic[7][4] = _kinetic_K_G;

libint2_build_kinetic[7][5] = _kinetic_K_H;

libint2_build_kinetic[7][6] = _kinetic_K_I;

libint2_build_kinetic[7][7] = _kinetic_K_K;

libint2_build_kinetic[7][8] = _kinetic_K_L;

libint2_build_kinetic[7][9] = _kinetic_K_M;

libint2_build_kinetic[7][10] = _kinetic_K_PS;

libint2_build_kinetic[8][0] = _kinetic_L_S;

libint2_build_kinetic[8][1] = _kinetic_L_P;

libint2_build_kinetic[8][2] = _kinetic_L_D;

libint2_build_kinetic[8][3] = _kinetic_L_F;

libint2_build_kinetic[8][4] = _kinetic_L_G;

libint2_build_kinetic[8][5] = _kinetic_L_H;

libint2_build_kinetic[8][6] = _kinetic_L_I;

libint2_build_kinetic[8][7] = _kinetic_L_K;

libint2_build_kinetic[8][8] = _kinetic_L_L;

libint2_build_kinetic[8][9] = _kinetic_L_M;

libint2_build_kinetic[8][10] = _kinetic_L_PS;

libint2_build_kinetic[9][0] = _kinetic_M_S;

libint2_build_kinetic[9][1] = _kinetic_M_P;

libint2_build_kinetic[9][2] = _kinetic_M_D;

libint2_build_kinetic[9][3] = _kinetic_M_F;

libint2_build_kinetic[9][4] = _kinetic_M_G;

libint2_build_kinetic[9][5] = _kinetic_M_H;

libint2_build_kinetic[9][6] = _kinetic_M_I;

libint2_build_kinetic[9][7] = _kinetic_M_K;

libint2_build_kinetic[9][8] = _kinetic_M_L;

libint2_build_kinetic[9][9] = _kinetic_M_M;

libint2_build_kinetic[9][10] = _kinetic_M_PS;

libint2_build_kinetic[10][0] = _kinetic_PS_S;

libint2_build_kinetic[10][1] = _kinetic_PS_P;

libint2_build_kinetic[10][2] = _kinetic_PS_D;

libint2_build_kinetic[10][3] = _kinetic_PS_F;

libint2_build_kinetic[10][4] = _kinetic_PS_G;

libint2_build_kinetic[10][5] = _kinetic_PS_H;

libint2_build_kinetic[10][6] = _kinetic_PS_I;

libint2_build_kinetic[10][7] = _kinetic_PS_K;

libint2_build_kinetic[10][8] = _kinetic_PS_L;

libint2_build_kinetic[10][9] = _kinetic_PS_M;

libint2_build_kinetic[10][10] = _kinetic_PS_PS;

libint2_build_elecpot[0][1] = _elecpot_S_P;

libint2_build_elecpot[0][2] = _elecpot_S_D;

libint2_build_elecpot[0][3] = _elecpot_S_F;

libint2_build_elecpot[0][4] = _elecpot_S_G;

libint2_build_elecpot[0][5] = _elecpot_S_H;

libint2_build_elecpot[0][6] = _elecpot_S_I;

libint2_build_elecpot[0][7] = _elecpot_S_K;

libint2_build_elecpot[0][8] = _elecpot_S_L;

libint2_build_elecpot[0][9] = _elecpot_S_M;

libint2_build_elecpot[0][10] = _elecpot_S_PS;

libint2_build_elecpot[1][0] = _elecpot_P_S;

libint2_build_elecpot[1][1] = _elecpot_P_P;

libint2_build_elecpot[1][2] = _elecpot_P_D;

libint2_build_elecpot[1][3] = _elecpot_P_F;

libint2_build_elecpot[1][4] = _elecpot_P_G;

libint2_build_elecpot[1][5] = _elecpot_P_H;

libint2_build_elecpot[1][6] = _elecpot_P_I;

libint2_build_elecpot[1][7] = _elecpot_P_K;

libint2_build_elecpot[1][8] = _elecpot_P_L;

libint2_build_elecpot[1][9] = _elecpot_P_M;

libint2_build_elecpot[1][10] = _elecpot_P_PS;

libint2_build_elecpot[2][0] = _elecpot_D_S;

libint2_build_elecpot[2][1] = _elecpot_D_P;

libint2_build_elecpot[2][2] = _elecpot_D_D;

libint2_build_elecpot[2][3] = _elecpot_D_F;

libint2_build_elecpot[2][4] = _elecpot_D_G;

libint2_build_elecpot[2][5] = _elecpot_D_H;

libint2_build_elecpot[2][6] = _elecpot_D_I;

libint2_build_elecpot[2][7] = _elecpot_D_K;

libint2_build_elecpot[2][8] = _elecpot_D_L;

libint2_build_elecpot[2][9] = _elecpot_D_M;

libint2_build_elecpot[2][10] = _elecpot_D_PS;

libint2_build_elecpot[3][0] = _elecpot_F_S;

libint2_build_elecpot[3][1] = _elecpot_F_P;

libint2_build_elecpot[3][2] = _elecpot_F_D;

libint2_build_elecpot[3][3] = _elecpot_F_F;

libint2_build_elecpot[3][4] = _elecpot_F_G;

libint2_build_elecpot[3][5] = _elecpot_F_H;

libint2_build_elecpot[3][6] = _elecpot_F_I;

libint2_build_elecpot[3][7] = _elecpot_F_K;

libint2_build_elecpot[3][8] = _elecpot_F_L;

libint2_build_elecpot[3][9] = _elecpot_F_M;

libint2_build_elecpot[3][10] = _elecpot_F_PS;

libint2_build_elecpot[4][0] = _elecpot_G_S;

libint2_build_elecpot[4][1] = _elecpot_G_P;

libint2_build_elecpot[4][2] = _elecpot_G_D;

libint2_build_elecpot[4][3] = _elecpot_G_F;

libint2_build_elecpot[4][4] = _elecpot_G_G;

libint2_build_elecpot[4][5] = _elecpot_G_H;

libint2_build_elecpot[4][6] = _elecpot_G_I;

libint2_build_elecpot[4][7] = _elecpot_G_K;

libint2_build_elecpot[4][8] = _elecpot_G_L;

libint2_build_elecpot[4][9] = _elecpot_G_M;

libint2_build_elecpot[4][10] = _elecpot_G_PS;

libint2_build_elecpot[5][0] = _elecpot_H_S;

libint2_build_elecpot[5][1] = _elecpot_H_P;

libint2_build_elecpot[5][2] = _elecpot_H_D;

libint2_build_elecpot[5][3] = _elecpot_H_F;

libint2_build_elecpot[5][4] = _elecpot_H_G;

libint2_build_elecpot[5][5] = _elecpot_H_H;

libint2_build_elecpot[5][6] = _elecpot_H_I;

libint2_build_elecpot[5][7] = _elecpot_H_K;

libint2_build_elecpot[5][8] = _elecpot_H_L;

libint2_build_elecpot[5][9] = _elecpot_H_M;

libint2_build_elecpot[5][10] = _elecpot_H_PS;

libint2_build_elecpot[6][0] = _elecpot_I_S;

libint2_build_elecpot[6][1] = _elecpot_I_P;

libint2_build_elecpot[6][2] = _elecpot_I_D;

libint2_build_elecpot[6][3] = _elecpot_I_F;

libint2_build_elecpot[6][4] = _elecpot_I_G;

libint2_build_elecpot[6][5] = _elecpot_I_H;

libint2_build_elecpot[6][6] = _elecpot_I_I;

libint2_build_elecpot[6][7] = _elecpot_I_K;

libint2_build_elecpot[6][8] = _elecpot_I_L;

libint2_build_elecpot[6][9] = _elecpot_I_M;

libint2_build_elecpot[6][10] = _elecpot_I_PS;

libint2_build_elecpot[7][0] = _elecpot_K_S;

libint2_build_elecpot[7][1] = _elecpot_K_P;

libint2_build_elecpot[7][2] = _elecpot_K_D;

libint2_build_elecpot[7][3] = _elecpot_K_F;

libint2_build_elecpot[7][4] = _elecpot_K_G;

libint2_build_elecpot[7][5] = _elecpot_K_H;

libint2_build_elecpot[7][6] = _elecpot_K_I;

libint2_build_elecpot[7][7] = _elecpot_K_K;

libint2_build_elecpot[7][8] = _elecpot_K_L;

libint2_build_elecpot[7][9] = _elecpot_K_M;

libint2_build_elecpot[7][10] = _elecpot_K_PS;

libint2_build_elecpot[8][0] = _elecpot_L_S;

libint2_build_elecpot[8][1] = _elecpot_L_P;

libint2_build_elecpot[8][2] = _elecpot_L_D;

libint2_build_elecpot[8][3] = _elecpot_L_F;

libint2_build_elecpot[8][4] = _elecpot_L_G;

libint2_build_elecpot[8][5] = _elecpot_L_H;

libint2_build_elecpot[8][6] = _elecpot_L_I;

libint2_build_elecpot[8][7] = _elecpot_L_K;

libint2_build_elecpot[8][8] = _elecpot_L_L;

libint2_build_elecpot[8][9] = _elecpot_L_M;

libint2_build_elecpot[8][10] = _elecpot_L_PS;

libint2_build_elecpot[9][0] = _elecpot_M_S;

libint2_build_elecpot[9][1] = _elecpot_M_P;

libint2_build_elecpot[9][2] = _elecpot_M_D;

libint2_build_elecpot[9][3] = _elecpot_M_F;

libint2_build_elecpot[9][4] = _elecpot_M_G;

libint2_build_elecpot[9][5] = _elecpot_M_H;

libint2_build_elecpot[9][6] = _elecpot_M_I;

libint2_build_elecpot[9][7] = _elecpot_M_K;

libint2_build_elecpot[9][8] = _elecpot_M_L;

libint2_build_elecpot[9][9] = _elecpot_M_M;

libint2_build_elecpot[9][10] = _elecpot_M_PS;

libint2_build_elecpot[10][0] = _elecpot_PS_S;

libint2_build_elecpot[10][1] = _elecpot_PS_P;

libint2_build_elecpot[10][2] = _elecpot_PS_D;

libint2_build_elecpot[10][3] = _elecpot_PS_F;

libint2_build_elecpot[10][4] = _elecpot_PS_G;

libint2_build_elecpot[10][5] = _elecpot_PS_H;

libint2_build_elecpot[10][6] = _elecpot_PS_I;

libint2_build_elecpot[10][7] = _elecpot_PS_K;

libint2_build_elecpot[10][8] = _elecpot_PS_L;

libint2_build_elecpot[10][9] = _elecpot_PS_M;

libint2_build_elecpot[10][10] = _elecpot_PS_PS;

libint2_build_1emultipole[0][0] = _1emultipole_S_S;

libint2_build_1emultipole[0][1] = _1emultipole_S_P;

libint2_build_1emultipole[0][2] = _1emultipole_S_D;

libint2_build_1emultipole[0][3] = _1emultipole_S_F;

libint2_build_1emultipole[0][4] = _1emultipole_S_G;

libint2_build_1emultipole[0][5] = _1emultipole_S_H;

libint2_build_1emultipole[0][6] = _1emultipole_S_I;

libint2_build_1emultipole[0][7] = _1emultipole_S_K;

libint2_build_1emultipole[0][8] = _1emultipole_S_L;

libint2_build_1emultipole[0][9] = _1emultipole_S_M;

libint2_build_1emultipole[0][10] = _1emultipole_S_PS;

libint2_build_1emultipole[1][0] = _1emultipole_P_S;

libint2_build_1emultipole[1][1] = _1emultipole_P_P;

libint2_build_1emultipole[1][2] = _1emultipole_P_D;

libint2_build_1emultipole[1][3] = _1emultipole_P_F;

libint2_build_1emultipole[1][4] = _1emultipole_P_G;

libint2_build_1emultipole[1][5] = _1emultipole_P_H;

libint2_build_1emultipole[1][6] = _1emultipole_P_I;

libint2_build_1emultipole[1][7] = _1emultipole_P_K;

libint2_build_1emultipole[1][8] = _1emultipole_P_L;

libint2_build_1emultipole[1][9] = _1emultipole_P_M;

libint2_build_1emultipole[1][10] = _1emultipole_P_PS;

libint2_build_1emultipole[2][0] = _1emultipole_D_S;

libint2_build_1emultipole[2][1] = _1emultipole_D_P;

libint2_build_1emultipole[2][2] = _1emultipole_D_D;

libint2_build_1emultipole[2][3] = _1emultipole_D_F;

libint2_build_1emultipole[2][4] = _1emultipole_D_G;

libint2_build_1emultipole[2][5] = _1emultipole_D_H;

libint2_build_1emultipole[2][6] = _1emultipole_D_I;

libint2_build_1emultipole[2][7] = _1emultipole_D_K;

libint2_build_1emultipole[2][8] = _1emultipole_D_L;

libint2_build_1emultipole[2][9] = _1emultipole_D_M;

libint2_build_1emultipole[2][10] = _1emultipole_D_PS;

libint2_build_1emultipole[3][0] = _1emultipole_F_S;

libint2_build_1emultipole[3][1] = _1emultipole_F_P;

libint2_build_1emultipole[3][2] = _1emultipole_F_D;

libint2_build_1emultipole[3][3] = _1emultipole_F_F;

libint2_build_1emultipole[3][4] = _1emultipole_F_G;

libint2_build_1emultipole[3][5] = _1emultipole_F_H;

libint2_build_1emultipole[3][6] = _1emultipole_F_I;

libint2_build_1emultipole[3][7] = _1emultipole_F_K;

libint2_build_1emultipole[3][8] = _1emultipole_F_L;

libint2_build_1emultipole[3][9] = _1emultipole_F_M;

libint2_build_1emultipole[3][10] = _1emultipole_F_PS;

libint2_build_1emultipole[4][0] = _1emultipole_G_S;

libint2_build_1emultipole[4][1] = _1emultipole_G_P;

libint2_build_1emultipole[4][2] = _1emultipole_G_D;

libint2_build_1emultipole[4][3] = _1emultipole_G_F;

libint2_build_1emultipole[4][4] = _1emultipole_G_G;

libint2_build_1emultipole[4][5] = _1emultipole_G_H;

libint2_build_1emultipole[4][6] = _1emultipole_G_I;

libint2_build_1emultipole[4][7] = _1emultipole_G_K;

libint2_build_1emultipole[4][8] = _1emultipole_G_L;

libint2_build_1emultipole[4][9] = _1emultipole_G_M;

libint2_build_1emultipole[4][10] = _1emultipole_G_PS;

libint2_build_1emultipole[5][0] = _1emultipole_H_S;

libint2_build_1emultipole[5][1] = _1emultipole_H_P;

libint2_build_1emultipole[5][2] = _1emultipole_H_D;

libint2_build_1emultipole[5][3] = _1emultipole_H_F;

libint2_build_1emultipole[5][4] = _1emultipole_H_G;

libint2_build_1emultipole[5][5] = _1emultipole_H_H;

libint2_build_1emultipole[5][6] = _1emultipole_H_I;

libint2_build_1emultipole[5][7] = _1emultipole_H_K;

libint2_build_1emultipole[5][8] = _1emultipole_H_L;

libint2_build_1emultipole[5][9] = _1emultipole_H_M;

libint2_build_1emultipole[5][10] = _1emultipole_H_PS;

libint2_build_1emultipole[6][0] = _1emultipole_I_S;

libint2_build_1emultipole[6][1] = _1emultipole_I_P;

libint2_build_1emultipole[6][2] = _1emultipole_I_D;

libint2_build_1emultipole[6][3] = _1emultipole_I_F;

libint2_build_1emultipole[6][4] = _1emultipole_I_G;

libint2_build_1emultipole[6][5] = _1emultipole_I_H;

libint2_build_1emultipole[6][6] = _1emultipole_I_I;

libint2_build_1emultipole[6][7] = _1emultipole_I_K;

libint2_build_1emultipole[6][8] = _1emultipole_I_L;

libint2_build_1emultipole[6][9] = _1emultipole_I_M;

libint2_build_1emultipole[6][10] = _1emultipole_I_PS;

libint2_build_1emultipole[7][0] = _1emultipole_K_S;

libint2_build_1emultipole[7][1] = _1emultipole_K_P;

libint2_build_1emultipole[7][2] = _1emultipole_K_D;

libint2_build_1emultipole[7][3] = _1emultipole_K_F;

libint2_build_1emultipole[7][4] = _1emultipole_K_G;

libint2_build_1emultipole[7][5] = _1emultipole_K_H;

libint2_build_1emultipole[7][6] = _1emultipole_K_I;

libint2_build_1emultipole[7][7] = _1emultipole_K_K;

libint2_build_1emultipole[7][8] = _1emultipole_K_L;

libint2_build_1emultipole[7][9] = _1emultipole_K_M;

libint2_build_1emultipole[7][10] = _1emultipole_K_PS;

libint2_build_1emultipole[8][0] = _1emultipole_L_S;

libint2_build_1emultipole[8][1] = _1emultipole_L_P;

libint2_build_1emultipole[8][2] = _1emultipole_L_D;

libint2_build_1emultipole[8][3] = _1emultipole_L_F;

libint2_build_1emultipole[8][4] = _1emultipole_L_G;

libint2_build_1emultipole[8][5] = _1emultipole_L_H;

libint2_build_1emultipole[8][6] = _1emultipole_L_I;

libint2_build_1emultipole[8][7] = _1emultipole_L_K;

libint2_build_1emultipole[8][8] = _1emultipole_L_L;

libint2_build_1emultipole[8][9] = _1emultipole_L_M;

libint2_build_1emultipole[8][10] = _1emultipole_L_PS;

libint2_build_1emultipole[9][0] = _1emultipole_M_S;

libint2_build_1emultipole[9][1] = _1emultipole_M_P;

libint2_build_1emultipole[9][2] = _1emultipole_M_D;

libint2_build_1emultipole[9][3] = _1emultipole_M_F;

libint2_build_1emultipole[9][4] = _1emultipole_M_G;

libint2_build_1emultipole[9][5] = _1emultipole_M_H;

libint2_build_1emultipole[9][6] = _1emultipole_M_I;

libint2_build_1emultipole[9][7] = _1emultipole_M_K;

libint2_build_1emultipole[9][8] = _1emultipole_M_L;

libint2_build_1emultipole[9][9] = _1emultipole_M_M;

libint2_build_1emultipole[9][10] = _1emultipole_M_PS;

libint2_build_1emultipole[10][0] = _1emultipole_PS_S;

libint2_build_1emultipole[10][1] = _1emultipole_PS_P;

libint2_build_1emultipole[10][2] = _1emultipole_PS_D;

libint2_build_1emultipole[10][3] = _1emultipole_PS_F;

libint2_build_1emultipole[10][4] = _1emultipole_PS_G;

libint2_build_1emultipole[10][5] = _1emultipole_PS_H;

libint2_build_1emultipole[10][6] = _1emultipole_PS_I;

libint2_build_1emultipole[10][7] = _1emultipole_PS_K;

libint2_build_1emultipole[10][8] = _1emultipole_PS_L;

libint2_build_1emultipole[10][9] = _1emultipole_PS_M;

libint2_build_1emultipole[10][10] = _1emultipole_PS_PS;

libint2_build_2emultipole[0][0] = _2emultipole_S_S;

libint2_build_2emultipole[0][1] = _2emultipole_S_P;

libint2_build_2emultipole[0][2] = _2emultipole_S_D;

libint2_build_2emultipole[0][3] = _2emultipole_S_F;

libint2_build_2emultipole[0][4] = _2emultipole_S_G;

libint2_build_2emultipole[0][5] = _2emultipole_S_H;

libint2_build_2emultipole[0][6] = _2emultipole_S_I;

libint2_build_2emultipole[0][7] = _2emultipole_S_K;

libint2_build_2emultipole[0][8] = _2emultipole_S_L;

libint2_build_2emultipole[0][9] = _2emultipole_S_M;

libint2_build_2emultipole[0][10] = _2emultipole_S_PS;

libint2_build_2emultipole[1][0] = _2emultipole_P_S;

libint2_build_2emultipole[1][1] = _2emultipole_P_P;

libint2_build_2emultipole[1][2] = _2emultipole_P_D;

libint2_build_2emultipole[1][3] = _2emultipole_P_F;

libint2_build_2emultipole[1][4] = _2emultipole_P_G;

libint2_build_2emultipole[1][5] = _2emultipole_P_H;

libint2_build_2emultipole[1][6] = _2emultipole_P_I;

libint2_build_2emultipole[1][7] = _2emultipole_P_K;

libint2_build_2emultipole[1][8] = _2emultipole_P_L;

libint2_build_2emultipole[1][9] = _2emultipole_P_M;

libint2_build_2emultipole[1][10] = _2emultipole_P_PS;

libint2_build_2emultipole[2][0] = _2emultipole_D_S;

libint2_build_2emultipole[2][1] = _2emultipole_D_P;

libint2_build_2emultipole[2][2] = _2emultipole_D_D;

libint2_build_2emultipole[2][3] = _2emultipole_D_F;

libint2_build_2emultipole[2][4] = _2emultipole_D_G;

libint2_build_2emultipole[2][5] = _2emultipole_D_H;

libint2_build_2emultipole[2][6] = _2emultipole_D_I;

libint2_build_2emultipole[2][7] = _2emultipole_D_K;

libint2_build_2emultipole[2][8] = _2emultipole_D_L;

libint2_build_2emultipole[2][9] = _2emultipole_D_M;

libint2_build_2emultipole[2][10] = _2emultipole_D_PS;

libint2_build_2emultipole[3][0] = _2emultipole_F_S;

libint2_build_2emultipole[3][1] = _2emultipole_F_P;

libint2_build_2emultipole[3][2] = _2emultipole_F_D;

libint2_build_2emultipole[3][3] = _2emultipole_F_F;

libint2_build_2emultipole[3][4] = _2emultipole_F_G;

libint2_build_2emultipole[3][5] = _2emultipole_F_H;

libint2_build_2emultipole[3][6] = _2emultipole_F_I;

libint2_build_2emultipole[3][7] = _2emultipole_F_K;

libint2_build_2emultipole[3][8] = _2emultipole_F_L;

libint2_build_2emultipole[3][9] = _2emultipole_F_M;

libint2_build_2emultipole[3][10] = _2emultipole_F_PS;

libint2_build_2emultipole[4][0] = _2emultipole_G_S;

libint2_build_2emultipole[4][1] = _2emultipole_G_P;

libint2_build_2emultipole[4][2] = _2emultipole_G_D;

libint2_build_2emultipole[4][3] = _2emultipole_G_F;

libint2_build_2emultipole[4][4] = _2emultipole_G_G;

libint2_build_2emultipole[4][5] = _2emultipole_G_H;

libint2_build_2emultipole[4][6] = _2emultipole_G_I;

libint2_build_2emultipole[4][7] = _2emultipole_G_K;

libint2_build_2emultipole[4][8] = _2emultipole_G_L;

libint2_build_2emultipole[4][9] = _2emultipole_G_M;

libint2_build_2emultipole[4][10] = _2emultipole_G_PS;

libint2_build_2emultipole[5][0] = _2emultipole_H_S;

libint2_build_2emultipole[5][1] = _2emultipole_H_P;

libint2_build_2emultipole[5][2] = _2emultipole_H_D;

libint2_build_2emultipole[5][3] = _2emultipole_H_F;

libint2_build_2emultipole[5][4] = _2emultipole_H_G;

libint2_build_2emultipole[5][5] = _2emultipole_H_H;

libint2_build_2emultipole[5][6] = _2emultipole_H_I;

libint2_build_2emultipole[5][7] = _2emultipole_H_K;

libint2_build_2emultipole[5][8] = _2emultipole_H_L;

libint2_build_2emultipole[5][9] = _2emultipole_H_M;

libint2_build_2emultipole[5][10] = _2emultipole_H_PS;

libint2_build_2emultipole[6][0] = _2emultipole_I_S;

libint2_build_2emultipole[6][1] = _2emultipole_I_P;

libint2_build_2emultipole[6][2] = _2emultipole_I_D;

libint2_build_2emultipole[6][3] = _2emultipole_I_F;

libint2_build_2emultipole[6][4] = _2emultipole_I_G;

libint2_build_2emultipole[6][5] = _2emultipole_I_H;

libint2_build_2emultipole[6][6] = _2emultipole_I_I;

libint2_build_2emultipole[6][7] = _2emultipole_I_K;

libint2_build_2emultipole[6][8] = _2emultipole_I_L;

libint2_build_2emultipole[6][9] = _2emultipole_I_M;

libint2_build_2emultipole[6][10] = _2emultipole_I_PS;

libint2_build_2emultipole[7][0] = _2emultipole_K_S;

libint2_build_2emultipole[7][1] = _2emultipole_K_P;

libint2_build_2emultipole[7][2] = _2emultipole_K_D;

libint2_build_2emultipole[7][3] = _2emultipole_K_F;

libint2_build_2emultipole[7][4] = _2emultipole_K_G;

libint2_build_2emultipole[7][5] = _2emultipole_K_H;

libint2_build_2emultipole[7][6] = _2emultipole_K_I;

libint2_build_2emultipole[7][7] = _2emultipole_K_K;

libint2_build_2emultipole[7][8] = _2emultipole_K_L;

libint2_build_2emultipole[7][9] = _2emultipole_K_M;

libint2_build_2emultipole[7][10] = _2emultipole_K_PS;

libint2_build_2emultipole[8][0] = _2emultipole_L_S;

libint2_build_2emultipole[8][1] = _2emultipole_L_P;

libint2_build_2emultipole[8][2] = _2emultipole_L_D;

libint2_build_2emultipole[8][3] = _2emultipole_L_F;

libint2_build_2emultipole[8][4] = _2emultipole_L_G;

libint2_build_2emultipole[8][5] = _2emultipole_L_H;

libint2_build_2emultipole[8][6] = _2emultipole_L_I;

libint2_build_2emultipole[8][7] = _2emultipole_L_K;

libint2_build_2emultipole[8][8] = _2emultipole_L_L;

libint2_build_2emultipole[8][9] = _2emultipole_L_M;

libint2_build_2emultipole[8][10] = _2emultipole_L_PS;

libint2_build_2emultipole[9][0] = _2emultipole_M_S;

libint2_build_2emultipole[9][1] = _2emultipole_M_P;

libint2_build_2emultipole[9][2] = _2emultipole_M_D;

libint2_build_2emultipole[9][3] = _2emultipole_M_F;

libint2_build_2emultipole[9][4] = _2emultipole_M_G;

libint2_build_2emultipole[9][5] = _2emultipole_M_H;

libint2_build_2emultipole[9][6] = _2emultipole_M_I;

libint2_build_2emultipole[9][7] = _2emultipole_M_K;

libint2_build_2emultipole[9][8] = _2emultipole_M_L;

libint2_build_2emultipole[9][9] = _2emultipole_M_M;

libint2_build_2emultipole[9][10] = _2emultipole_M_PS;

libint2_build_2emultipole[10][0] = _2emultipole_PS_S;

libint2_build_2emultipole[10][1] = _2emultipole_PS_P;

libint2_build_2emultipole[10][2] = _2emultipole_PS_D;

libint2_build_2emultipole[10][3] = _2emultipole_PS_F;

libint2_build_2emultipole[10][4] = _2emultipole_PS_G;

libint2_build_2emultipole[10][5] = _2emultipole_PS_H;

libint2_build_2emultipole[10][6] = _2emultipole_PS_I;

libint2_build_2emultipole[10][7] = _2emultipole_PS_K;

libint2_build_2emultipole[10][8] = _2emultipole_PS_L;

libint2_build_2emultipole[10][9] = _2emultipole_PS_M;

libint2_build_2emultipole[10][10] = _2emultipole_PS_PS;

libint2_build_3emultipole[0][0] = _3emultipole_S_S;

libint2_build_3emultipole[0][1] = _3emultipole_S_P;

libint2_build_3emultipole[0][2] = _3emultipole_S_D;

libint2_build_3emultipole[0][3] = _3emultipole_S_F;

libint2_build_3emultipole[0][4] = _3emultipole_S_G;

libint2_build_3emultipole[0][5] = _3emultipole_S_H;

libint2_build_3emultipole[0][6] = _3emultipole_S_I;

libint2_build_3emultipole[0][7] = _3emultipole_S_K;

libint2_build_3emultipole[0][8] = _3emultipole_S_L;

libint2_build_3emultipole[0][9] = _3emultipole_S_M;

libint2_build_3emultipole[0][10] = _3emultipole_S_PS;

libint2_build_3emultipole[1][0] = _3emultipole_P_S;

libint2_build_3emultipole[1][1] = _3emultipole_P_P;

libint2_build_3emultipole[1][2] = _3emultipole_P_D;

libint2_build_3emultipole[1][3] = _3emultipole_P_F;

libint2_build_3emultipole[1][4] = _3emultipole_P_G;

libint2_build_3emultipole[1][5] = _3emultipole_P_H;

libint2_build_3emultipole[1][6] = _3emultipole_P_I;

libint2_build_3emultipole[1][7] = _3emultipole_P_K;

libint2_build_3emultipole[1][8] = _3emultipole_P_L;

libint2_build_3emultipole[1][9] = _3emultipole_P_M;

libint2_build_3emultipole[1][10] = _3emultipole_P_PS;

libint2_build_3emultipole[2][0] = _3emultipole_D_S;

libint2_build_3emultipole[2][1] = _3emultipole_D_P;

libint2_build_3emultipole[2][2] = _3emultipole_D_D;

libint2_build_3emultipole[2][3] = _3emultipole_D_F;

libint2_build_3emultipole[2][4] = _3emultipole_D_G;

libint2_build_3emultipole[2][5] = _3emultipole_D_H;

libint2_build_3emultipole[2][6] = _3emultipole_D_I;

libint2_build_3emultipole[2][7] = _3emultipole_D_K;

libint2_build_3emultipole[2][8] = _3emultipole_D_L;

libint2_build_3emultipole[2][9] = _3emultipole_D_M;

libint2_build_3emultipole[2][10] = _3emultipole_D_PS;

libint2_build_3emultipole[3][0] = _3emultipole_F_S;

libint2_build_3emultipole[3][1] = _3emultipole_F_P;

libint2_build_3emultipole[3][2] = _3emultipole_F_D;

libint2_build_3emultipole[3][3] = _3emultipole_F_F;

libint2_build_3emultipole[3][4] = _3emultipole_F_G;

libint2_build_3emultipole[3][5] = _3emultipole_F_H;

libint2_build_3emultipole[3][6] = _3emultipole_F_I;

libint2_build_3emultipole[3][7] = _3emultipole_F_K;

libint2_build_3emultipole[3][8] = _3emultipole_F_L;

libint2_build_3emultipole[3][9] = _3emultipole_F_M;

libint2_build_3emultipole[3][10] = _3emultipole_F_PS;

libint2_build_3emultipole[4][0] = _3emultipole_G_S;

libint2_build_3emultipole[4][1] = _3emultipole_G_P;

libint2_build_3emultipole[4][2] = _3emultipole_G_D;

libint2_build_3emultipole[4][3] = _3emultipole_G_F;

libint2_build_3emultipole[4][4] = _3emultipole_G_G;

libint2_build_3emultipole[4][5] = _3emultipole_G_H;

libint2_build_3emultipole[4][6] = _3emultipole_G_I;

libint2_build_3emultipole[4][7] = _3emultipole_G_K;

libint2_build_3emultipole[4][8] = _3emultipole_G_L;

libint2_build_3emultipole[4][9] = _3emultipole_G_M;

libint2_build_3emultipole[4][10] = _3emultipole_G_PS;

libint2_build_3emultipole[5][0] = _3emultipole_H_S;

libint2_build_3emultipole[5][1] = _3emultipole_H_P;

libint2_build_3emultipole[5][2] = _3emultipole_H_D;

libint2_build_3emultipole[5][3] = _3emultipole_H_F;

libint2_build_3emultipole[5][4] = _3emultipole_H_G;

libint2_build_3emultipole[5][5] = _3emultipole_H_H;

libint2_build_3emultipole[5][6] = _3emultipole_H_I;

libint2_build_3emultipole[5][7] = _3emultipole_H_K;

libint2_build_3emultipole[5][8] = _3emultipole_H_L;

libint2_build_3emultipole[5][9] = _3emultipole_H_M;

libint2_build_3emultipole[5][10] = _3emultipole_H_PS;

libint2_build_3emultipole[6][0] = _3emultipole_I_S;

libint2_build_3emultipole[6][1] = _3emultipole_I_P;

libint2_build_3emultipole[6][2] = _3emultipole_I_D;

libint2_build_3emultipole[6][3] = _3emultipole_I_F;

libint2_build_3emultipole[6][4] = _3emultipole_I_G;

libint2_build_3emultipole[6][5] = _3emultipole_I_H;

libint2_build_3emultipole[6][6] = _3emultipole_I_I;

libint2_build_3emultipole[6][7] = _3emultipole_I_K;

libint2_build_3emultipole[6][8] = _3emultipole_I_L;

libint2_build_3emultipole[6][9] = _3emultipole_I_M;

libint2_build_3emultipole[6][10] = _3emultipole_I_PS;

libint2_build_3emultipole[7][0] = _3emultipole_K_S;

libint2_build_3emultipole[7][1] = _3emultipole_K_P;

libint2_build_3emultipole[7][2] = _3emultipole_K_D;

libint2_build_3emultipole[7][3] = _3emultipole_K_F;

libint2_build_3emultipole[7][4] = _3emultipole_K_G;

libint2_build_3emultipole[7][5] = _3emultipole_K_H;

libint2_build_3emultipole[7][6] = _3emultipole_K_I;

libint2_build_3emultipole[7][7] = _3emultipole_K_K;

libint2_build_3emultipole[7][8] = _3emultipole_K_L;

libint2_build_3emultipole[7][9] = _3emultipole_K_M;

libint2_build_3emultipole[7][10] = _3emultipole_K_PS;

libint2_build_3emultipole[8][0] = _3emultipole_L_S;

libint2_build_3emultipole[8][1] = _3emultipole_L_P;

libint2_build_3emultipole[8][2] = _3emultipole_L_D;

libint2_build_3emultipole[8][3] = _3emultipole_L_F;

libint2_build_3emultipole[8][4] = _3emultipole_L_G;

libint2_build_3emultipole[8][5] = _3emultipole_L_H;

libint2_build_3emultipole[8][6] = _3emultipole_L_I;

libint2_build_3emultipole[8][7] = _3emultipole_L_K;

libint2_build_3emultipole[8][8] = _3emultipole_L_L;

libint2_build_3emultipole[8][9] = _3emultipole_L_M;

libint2_build_3emultipole[8][10] = _3emultipole_L_PS;

libint2_build_3emultipole[9][0] = _3emultipole_M_S;

libint2_build_3emultipole[9][1] = _3emultipole_M_P;

libint2_build_3emultipole[9][2] = _3emultipole_M_D;

libint2_build_3emultipole[9][3] = _3emultipole_M_F;

libint2_build_3emultipole[9][4] = _3emultipole_M_G;

libint2_build_3emultipole[9][5] = _3emultipole_M_H;

libint2_build_3emultipole[9][6] = _3emultipole_M_I;

libint2_build_3emultipole[9][7] = _3emultipole_M_K;

libint2_build_3emultipole[9][8] = _3emultipole_M_L;

libint2_build_3emultipole[9][9] = _3emultipole_M_M;

libint2_build_3emultipole[9][10] = _3emultipole_M_PS;

libint2_build_3emultipole[10][0] = _3emultipole_PS_S;

libint2_build_3emultipole[10][1] = _3emultipole_PS_P;

libint2_build_3emultipole[10][2] = _3emultipole_PS_D;

libint2_build_3emultipole[10][3] = _3emultipole_PS_F;

libint2_build_3emultipole[10][4] = _3emultipole_PS_G;

libint2_build_3emultipole[10][5] = _3emultipole_PS_H;

libint2_build_3emultipole[10][6] = _3emultipole_PS_I;

libint2_build_3emultipole[10][7] = _3emultipole_PS_K;

libint2_build_3emultipole[10][8] = _3emultipole_PS_L;

libint2_build_3emultipole[10][9] = _3emultipole_PS_M;

libint2_build_3emultipole[10][10] = _3emultipole_PS_PS;

libint2_build_sphemultipole[0][0] = _sphemultipole_S_S;

libint2_build_sphemultipole[0][1] = _sphemultipole_S_P;

libint2_build_sphemultipole[0][2] = _sphemultipole_S_D;

libint2_build_sphemultipole[0][3] = _sphemultipole_S_F;

libint2_build_sphemultipole[0][4] = _sphemultipole_S_G;

libint2_build_sphemultipole[0][5] = _sphemultipole_S_H;

libint2_build_sphemultipole[0][6] = _sphemultipole_S_I;

libint2_build_sphemultipole[0][7] = _sphemultipole_S_K;

libint2_build_sphemultipole[0][8] = _sphemultipole_S_L;

libint2_build_sphemultipole[0][9] = _sphemultipole_S_M;

libint2_build_sphemultipole[0][10] = _sphemultipole_S_PS;

libint2_build_sphemultipole[1][0] = _sphemultipole_P_S;

libint2_build_sphemultipole[1][1] = _sphemultipole_P_P;

libint2_build_sphemultipole[1][2] = _sphemultipole_P_D;

libint2_build_sphemultipole[1][3] = _sphemultipole_P_F;

libint2_build_sphemultipole[1][4] = _sphemultipole_P_G;

libint2_build_sphemultipole[1][5] = _sphemultipole_P_H;

libint2_build_sphemultipole[1][6] = _sphemultipole_P_I;

libint2_build_sphemultipole[1][7] = _sphemultipole_P_K;

libint2_build_sphemultipole[1][8] = _sphemultipole_P_L;

libint2_build_sphemultipole[1][9] = _sphemultipole_P_M;

libint2_build_sphemultipole[1][10] = _sphemultipole_P_PS;

libint2_build_sphemultipole[2][0] = _sphemultipole_D_S;

libint2_build_sphemultipole[2][1] = _sphemultipole_D_P;

libint2_build_sphemultipole[2][2] = _sphemultipole_D_D;

libint2_build_sphemultipole[2][3] = _sphemultipole_D_F;

libint2_build_sphemultipole[2][4] = _sphemultipole_D_G;

libint2_build_sphemultipole[2][5] = _sphemultipole_D_H;

libint2_build_sphemultipole[2][6] = _sphemultipole_D_I;

libint2_build_sphemultipole[2][7] = _sphemultipole_D_K;

libint2_build_sphemultipole[2][8] = _sphemultipole_D_L;

libint2_build_sphemultipole[2][9] = _sphemultipole_D_M;

libint2_build_sphemultipole[2][10] = _sphemultipole_D_PS;

libint2_build_sphemultipole[3][0] = _sphemultipole_F_S;

libint2_build_sphemultipole[3][1] = _sphemultipole_F_P;

libint2_build_sphemultipole[3][2] = _sphemultipole_F_D;

libint2_build_sphemultipole[3][3] = _sphemultipole_F_F;

libint2_build_sphemultipole[3][4] = _sphemultipole_F_G;

libint2_build_sphemultipole[3][5] = _sphemultipole_F_H;

libint2_build_sphemultipole[3][6] = _sphemultipole_F_I;

libint2_build_sphemultipole[3][7] = _sphemultipole_F_K;

libint2_build_sphemultipole[3][8] = _sphemultipole_F_L;

libint2_build_sphemultipole[3][9] = _sphemultipole_F_M;

libint2_build_sphemultipole[3][10] = _sphemultipole_F_PS;

libint2_build_sphemultipole[4][0] = _sphemultipole_G_S;

libint2_build_sphemultipole[4][1] = _sphemultipole_G_P;

libint2_build_sphemultipole[4][2] = _sphemultipole_G_D;

libint2_build_sphemultipole[4][3] = _sphemultipole_G_F;

libint2_build_sphemultipole[4][4] = _sphemultipole_G_G;

libint2_build_sphemultipole[4][5] = _sphemultipole_G_H;

libint2_build_sphemultipole[4][6] = _sphemultipole_G_I;

libint2_build_sphemultipole[4][7] = _sphemultipole_G_K;

libint2_build_sphemultipole[4][8] = _sphemultipole_G_L;

libint2_build_sphemultipole[4][9] = _sphemultipole_G_M;

libint2_build_sphemultipole[4][10] = _sphemultipole_G_PS;

libint2_build_sphemultipole[5][0] = _sphemultipole_H_S;

libint2_build_sphemultipole[5][1] = _sphemultipole_H_P;

libint2_build_sphemultipole[5][2] = _sphemultipole_H_D;

libint2_build_sphemultipole[5][3] = _sphemultipole_H_F;

libint2_build_sphemultipole[5][4] = _sphemultipole_H_G;

libint2_build_sphemultipole[5][5] = _sphemultipole_H_H;

libint2_build_sphemultipole[5][6] = _sphemultipole_H_I;

libint2_build_sphemultipole[5][7] = _sphemultipole_H_K;

libint2_build_sphemultipole[5][8] = _sphemultipole_H_L;

libint2_build_sphemultipole[5][9] = _sphemultipole_H_M;

libint2_build_sphemultipole[5][10] = _sphemultipole_H_PS;

libint2_build_sphemultipole[6][0] = _sphemultipole_I_S;

libint2_build_sphemultipole[6][1] = _sphemultipole_I_P;

libint2_build_sphemultipole[6][2] = _sphemultipole_I_D;

libint2_build_sphemultipole[6][3] = _sphemultipole_I_F;

libint2_build_sphemultipole[6][4] = _sphemultipole_I_G;

libint2_build_sphemultipole[6][5] = _sphemultipole_I_H;

libint2_build_sphemultipole[6][6] = _sphemultipole_I_I;

libint2_build_sphemultipole[6][7] = _sphemultipole_I_K;

libint2_build_sphemultipole[6][8] = _sphemultipole_I_L;

libint2_build_sphemultipole[6][9] = _sphemultipole_I_M;

libint2_build_sphemultipole[6][10] = _sphemultipole_I_PS;

libint2_build_sphemultipole[7][0] = _sphemultipole_K_S;

libint2_build_sphemultipole[7][1] = _sphemultipole_K_P;

libint2_build_sphemultipole[7][2] = _sphemultipole_K_D;

libint2_build_sphemultipole[7][3] = _sphemultipole_K_F;

libint2_build_sphemultipole[7][4] = _sphemultipole_K_G;

libint2_build_sphemultipole[7][5] = _sphemultipole_K_H;

libint2_build_sphemultipole[7][6] = _sphemultipole_K_I;

libint2_build_sphemultipole[7][7] = _sphemultipole_K_K;

libint2_build_sphemultipole[7][8] = _sphemultipole_K_L;

libint2_build_sphemultipole[7][9] = _sphemultipole_K_M;

libint2_build_sphemultipole[7][10] = _sphemultipole_K_PS;

libint2_build_sphemultipole[8][0] = _sphemultipole_L_S;

libint2_build_sphemultipole[8][1] = _sphemultipole_L_P;

libint2_build_sphemultipole[8][2] = _sphemultipole_L_D;

libint2_build_sphemultipole[8][3] = _sphemultipole_L_F;

libint2_build_sphemultipole[8][4] = _sphemultipole_L_G;

libint2_build_sphemultipole[8][5] = _sphemultipole_L_H;

libint2_build_sphemultipole[8][6] = _sphemultipole_L_I;

libint2_build_sphemultipole[8][7] = _sphemultipole_L_K;

libint2_build_sphemultipole[8][8] = _sphemultipole_L_L;

libint2_build_sphemultipole[8][9] = _sphemultipole_L_M;

libint2_build_sphemultipole[8][10] = _sphemultipole_L_PS;

libint2_build_sphemultipole[9][0] = _sphemultipole_M_S;

libint2_build_sphemultipole[9][1] = _sphemultipole_M_P;

libint2_build_sphemultipole[9][2] = _sphemultipole_M_D;

libint2_build_sphemultipole[9][3] = _sphemultipole_M_F;

libint2_build_sphemultipole[9][4] = _sphemultipole_M_G;

libint2_build_sphemultipole[9][5] = _sphemultipole_M_H;

libint2_build_sphemultipole[9][6] = _sphemultipole_M_I;

libint2_build_sphemultipole[9][7] = _sphemultipole_M_K;

libint2_build_sphemultipole[9][8] = _sphemultipole_M_L;

libint2_build_sphemultipole[9][9] = _sphemultipole_M_M;

libint2_build_sphemultipole[9][10] = _sphemultipole_M_PS;

libint2_build_sphemultipole[10][0] = _sphemultipole_PS_S;

libint2_build_sphemultipole[10][1] = _sphemultipole_PS_P;

libint2_build_sphemultipole[10][2] = _sphemultipole_PS_D;

libint2_build_sphemultipole[10][3] = _sphemultipole_PS_F;

libint2_build_sphemultipole[10][4] = _sphemultipole_PS_G;

libint2_build_sphemultipole[10][5] = _sphemultipole_PS_H;

libint2_build_sphemultipole[10][6] = _sphemultipole_PS_I;

libint2_build_sphemultipole[10][7] = _sphemultipole_PS_K;

libint2_build_sphemultipole[10][8] = _sphemultipole_PS_L;

libint2_build_sphemultipole[10][9] = _sphemultipole_PS_M;

libint2_build_sphemultipole[10][10] = _sphemultipole_PS_PS;

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

libint2_build_eri[0][0][6][0] = _aB_S__0__I__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][6][1] = _aB_S__0__I__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][6][2] = _aB_S__0__I__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[0][0][6][3] = _aB_S__0__I__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[0][0][6][4] = _aB_S__0__I__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[0][0][6][5] = _aB_S__0__I__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[0][0][6][6] = _aB_S__0__I__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[0][0][7][0] = _aB_S__0__K__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][7][1] = _aB_S__0__K__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][7][2] = _aB_S__0__K__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[0][0][7][3] = _aB_S__0__K__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[0][0][7][4] = _aB_S__0__K__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[0][0][7][5] = _aB_S__0__K__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[0][0][7][6] = _aB_S__0__K__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[0][0][7][7] = _aB_S__0__K__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[0][0][8][0] = _aB_S__0__L__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][8][1] = _aB_S__0__L__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][8][2] = _aB_S__0__L__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[0][0][8][3] = _aB_S__0__L__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[0][0][8][4] = _aB_S__0__L__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[0][0][8][5] = _aB_S__0__L__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[0][0][8][6] = _aB_S__0__L__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[0][0][8][7] = _aB_S__0__L__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[0][0][8][8] = _aB_S__0__L__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[0][0][9][0] = _aB_S__0__M__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][9][1] = _aB_S__0__M__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][9][2] = _aB_S__0__M__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[0][0][9][3] = _aB_S__0__M__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[0][0][9][4] = _aB_S__0__M__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[0][0][9][5] = _aB_S__0__M__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[0][0][9][6] = _aB_S__0__M__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[0][0][9][7] = _aB_S__0__M__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[0][0][9][8] = _aB_S__0__M__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[0][0][9][9] = _aB_S__0__M__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[0][0][10][0] = _aB_S__0__PS__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][10][1] = _aB_S__0__PS__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][10][2] = _aB_S__0__PS__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[0][0][10][3] = _aB_S__0__PS__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[0][0][10][4] = _aB_S__0__PS__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[0][0][10][5] = _aB_S__0__PS__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[0][0][10][6] = _aB_S__0__PS__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[0][0][10][7] = _aB_S__0__PS__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[0][0][10][8] = _aB_S__0__PS__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[0][0][10][9] = _aB_S__0__PS__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[0][0][10][10] = _aB_S__0__PS__1___TwoPRep_S__0__PS__1___Ab__up_0;

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

libint2_build_eri[1][0][6][0] = _aB_P__0__I__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][6][1] = _aB_P__0__I__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][6][2] = _aB_P__0__I__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[1][0][6][3] = _aB_P__0__I__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[1][0][6][4] = _aB_P__0__I__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[1][0][6][5] = _aB_P__0__I__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[1][0][6][6] = _aB_P__0__I__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[1][0][7][0] = _aB_P__0__K__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][7][1] = _aB_P__0__K__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][7][2] = _aB_P__0__K__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[1][0][7][3] = _aB_P__0__K__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[1][0][7][4] = _aB_P__0__K__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[1][0][7][5] = _aB_P__0__K__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[1][0][7][6] = _aB_P__0__K__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[1][0][7][7] = _aB_P__0__K__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[1][0][8][0] = _aB_P__0__L__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][8][1] = _aB_P__0__L__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][8][2] = _aB_P__0__L__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[1][0][8][3] = _aB_P__0__L__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[1][0][8][4] = _aB_P__0__L__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[1][0][8][5] = _aB_P__0__L__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[1][0][8][6] = _aB_P__0__L__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[1][0][8][7] = _aB_P__0__L__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[1][0][8][8] = _aB_P__0__L__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[1][0][9][0] = _aB_P__0__M__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][9][1] = _aB_P__0__M__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][9][2] = _aB_P__0__M__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[1][0][9][3] = _aB_P__0__M__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[1][0][9][4] = _aB_P__0__M__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[1][0][9][5] = _aB_P__0__M__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[1][0][9][6] = _aB_P__0__M__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[1][0][9][7] = _aB_P__0__M__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[1][0][9][8] = _aB_P__0__M__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[1][0][9][9] = _aB_P__0__M__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[1][0][10][0] = _aB_P__0__PS__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][10][1] = _aB_P__0__PS__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][10][2] = _aB_P__0__PS__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[1][0][10][3] = _aB_P__0__PS__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[1][0][10][4] = _aB_P__0__PS__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[1][0][10][5] = _aB_P__0__PS__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[1][0][10][6] = _aB_P__0__PS__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[1][0][10][7] = _aB_P__0__PS__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[1][0][10][8] = _aB_P__0__PS__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[1][0][10][9] = _aB_P__0__PS__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[1][0][10][10] = _aB_P__0__PS__1___TwoPRep_S__0__PS__1___Ab__up_0;

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

libint2_build_eri[1][1][6][0] = _aB_P__0__I__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[1][1][6][1] = _aB_P__0__I__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][6][2] = _aB_P__0__I__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[1][1][6][3] = _aB_P__0__I__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[1][1][6][4] = _aB_P__0__I__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[1][1][6][5] = _aB_P__0__I__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[1][1][6][6] = _aB_P__0__I__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[1][1][7][0] = _aB_P__0__K__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[1][1][7][1] = _aB_P__0__K__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][7][2] = _aB_P__0__K__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[1][1][7][3] = _aB_P__0__K__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[1][1][7][4] = _aB_P__0__K__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[1][1][7][5] = _aB_P__0__K__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[1][1][7][6] = _aB_P__0__K__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[1][1][7][7] = _aB_P__0__K__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[1][1][8][0] = _aB_P__0__L__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[1][1][8][1] = _aB_P__0__L__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][8][2] = _aB_P__0__L__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[1][1][8][3] = _aB_P__0__L__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[1][1][8][4] = _aB_P__0__L__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[1][1][8][5] = _aB_P__0__L__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[1][1][8][6] = _aB_P__0__L__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[1][1][8][7] = _aB_P__0__L__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[1][1][8][8] = _aB_P__0__L__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[1][1][9][0] = _aB_P__0__M__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[1][1][9][1] = _aB_P__0__M__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][9][2] = _aB_P__0__M__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[1][1][9][3] = _aB_P__0__M__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[1][1][9][4] = _aB_P__0__M__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[1][1][9][5] = _aB_P__0__M__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[1][1][9][6] = _aB_P__0__M__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[1][1][9][7] = _aB_P__0__M__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[1][1][9][8] = _aB_P__0__M__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[1][1][9][9] = _aB_P__0__M__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[1][1][10][0] = _aB_P__0__PS__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[1][1][10][1] = _aB_P__0__PS__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][10][2] = _aB_P__0__PS__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[1][1][10][3] = _aB_P__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[1][1][10][4] = _aB_P__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[1][1][10][5] = _aB_P__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[1][1][10][6] = _aB_P__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[1][1][10][7] = _aB_P__0__PS__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[1][1][10][8] = _aB_P__0__PS__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[1][1][10][9] = _aB_P__0__PS__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[1][1][10][10] = _aB_P__0__PS__1___TwoPRep_P__0__PS__1___Ab__up_0;

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

libint2_build_eri[2][0][6][0] = _aB_D__0__I__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[2][0][6][1] = _aB_D__0__I__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][6][2] = _aB_D__0__I__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[2][0][6][3] = _aB_D__0__I__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[2][0][6][4] = _aB_D__0__I__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[2][0][6][5] = _aB_D__0__I__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[2][0][6][6] = _aB_D__0__I__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[2][0][7][0] = _aB_D__0__K__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[2][0][7][1] = _aB_D__0__K__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][7][2] = _aB_D__0__K__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[2][0][7][3] = _aB_D__0__K__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[2][0][7][4] = _aB_D__0__K__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[2][0][7][5] = _aB_D__0__K__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[2][0][7][6] = _aB_D__0__K__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[2][0][7][7] = _aB_D__0__K__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[2][0][8][0] = _aB_D__0__L__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[2][0][8][1] = _aB_D__0__L__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][8][2] = _aB_D__0__L__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[2][0][8][3] = _aB_D__0__L__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[2][0][8][4] = _aB_D__0__L__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[2][0][8][5] = _aB_D__0__L__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[2][0][8][6] = _aB_D__0__L__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[2][0][8][7] = _aB_D__0__L__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[2][0][8][8] = _aB_D__0__L__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[2][0][9][0] = _aB_D__0__M__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[2][0][9][1] = _aB_D__0__M__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][9][2] = _aB_D__0__M__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[2][0][9][3] = _aB_D__0__M__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[2][0][9][4] = _aB_D__0__M__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[2][0][9][5] = _aB_D__0__M__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[2][0][9][6] = _aB_D__0__M__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[2][0][9][7] = _aB_D__0__M__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[2][0][9][8] = _aB_D__0__M__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[2][0][9][9] = _aB_D__0__M__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[2][0][10][0] = _aB_D__0__PS__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[2][0][10][1] = _aB_D__0__PS__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][10][2] = _aB_D__0__PS__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[2][0][10][3] = _aB_D__0__PS__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[2][0][10][4] = _aB_D__0__PS__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[2][0][10][5] = _aB_D__0__PS__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[2][0][10][6] = _aB_D__0__PS__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[2][0][10][7] = _aB_D__0__PS__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[2][0][10][8] = _aB_D__0__PS__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[2][0][10][9] = _aB_D__0__PS__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[2][0][10][10] = _aB_D__0__PS__1___TwoPRep_S__0__PS__1___Ab__up_0;

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

libint2_build_eri[2][1][6][0] = _aB_D__0__I__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[2][1][6][1] = _aB_D__0__I__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[2][1][6][2] = _aB_D__0__I__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[2][1][6][3] = _aB_D__0__I__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[2][1][6][4] = _aB_D__0__I__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[2][1][6][5] = _aB_D__0__I__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[2][1][6][6] = _aB_D__0__I__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[2][1][7][0] = _aB_D__0__K__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[2][1][7][1] = _aB_D__0__K__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[2][1][7][2] = _aB_D__0__K__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[2][1][7][3] = _aB_D__0__K__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[2][1][7][4] = _aB_D__0__K__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[2][1][7][5] = _aB_D__0__K__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[2][1][7][6] = _aB_D__0__K__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[2][1][7][7] = _aB_D__0__K__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[2][1][8][0] = _aB_D__0__L__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[2][1][8][1] = _aB_D__0__L__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[2][1][8][2] = _aB_D__0__L__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[2][1][8][3] = _aB_D__0__L__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[2][1][8][4] = _aB_D__0__L__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[2][1][8][5] = _aB_D__0__L__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[2][1][8][6] = _aB_D__0__L__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[2][1][8][7] = _aB_D__0__L__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[2][1][8][8] = _aB_D__0__L__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[2][1][9][0] = _aB_D__0__M__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[2][1][9][1] = _aB_D__0__M__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[2][1][9][2] = _aB_D__0__M__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[2][1][9][3] = _aB_D__0__M__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[2][1][9][4] = _aB_D__0__M__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[2][1][9][5] = _aB_D__0__M__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[2][1][9][6] = _aB_D__0__M__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[2][1][9][7] = _aB_D__0__M__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[2][1][9][8] = _aB_D__0__M__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[2][1][9][9] = _aB_D__0__M__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[2][1][10][0] = _aB_D__0__PS__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[2][1][10][1] = _aB_D__0__PS__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[2][1][10][2] = _aB_D__0__PS__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[2][1][10][3] = _aB_D__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[2][1][10][4] = _aB_D__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[2][1][10][5] = _aB_D__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[2][1][10][6] = _aB_D__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[2][1][10][7] = _aB_D__0__PS__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[2][1][10][8] = _aB_D__0__PS__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[2][1][10][9] = _aB_D__0__PS__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[2][1][10][10] = _aB_D__0__PS__1___TwoPRep_P__0__PS__1___Ab__up_0;

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

libint2_build_eri[2][2][6][0] = _aB_D__0__I__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[2][2][6][1] = _aB_D__0__I__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[2][2][6][2] = _aB_D__0__I__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[2][2][6][3] = _aB_D__0__I__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[2][2][6][4] = _aB_D__0__I__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[2][2][6][5] = _aB_D__0__I__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[2][2][6][6] = _aB_D__0__I__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[2][2][7][0] = _aB_D__0__K__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[2][2][7][1] = _aB_D__0__K__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[2][2][7][2] = _aB_D__0__K__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[2][2][7][3] = _aB_D__0__K__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[2][2][7][4] = _aB_D__0__K__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[2][2][7][5] = _aB_D__0__K__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[2][2][7][6] = _aB_D__0__K__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[2][2][7][7] = _aB_D__0__K__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[2][2][8][0] = _aB_D__0__L__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[2][2][8][1] = _aB_D__0__L__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[2][2][8][2] = _aB_D__0__L__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[2][2][8][3] = _aB_D__0__L__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[2][2][8][4] = _aB_D__0__L__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[2][2][8][5] = _aB_D__0__L__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[2][2][8][6] = _aB_D__0__L__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[2][2][8][7] = _aB_D__0__L__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[2][2][8][8] = _aB_D__0__L__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[2][2][9][0] = _aB_D__0__M__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[2][2][9][1] = _aB_D__0__M__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[2][2][9][2] = _aB_D__0__M__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[2][2][9][3] = _aB_D__0__M__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[2][2][9][4] = _aB_D__0__M__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[2][2][9][5] = _aB_D__0__M__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[2][2][9][6] = _aB_D__0__M__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[2][2][9][7] = _aB_D__0__M__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[2][2][9][8] = _aB_D__0__M__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[2][2][9][9] = _aB_D__0__M__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[2][2][10][0] = _aB_D__0__PS__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[2][2][10][1] = _aB_D__0__PS__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[2][2][10][2] = _aB_D__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[2][2][10][3] = _aB_D__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[2][2][10][4] = _aB_D__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[2][2][10][5] = _aB_D__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[2][2][10][6] = _aB_D__0__PS__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[2][2][10][7] = _aB_D__0__PS__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[2][2][10][8] = _aB_D__0__PS__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[2][2][10][9] = _aB_D__0__PS__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[2][2][10][10] = _aB_D__0__PS__1___TwoPRep_D__0__PS__1___Ab__up_0;

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

libint2_build_eri[3][0][6][0] = _aB_F__0__I__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[3][0][6][1] = _aB_F__0__I__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[3][0][6][2] = _aB_F__0__I__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[3][0][6][3] = _aB_F__0__I__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[3][0][6][4] = _aB_F__0__I__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[3][0][6][5] = _aB_F__0__I__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[3][0][6][6] = _aB_F__0__I__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[3][0][7][0] = _aB_F__0__K__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[3][0][7][1] = _aB_F__0__K__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[3][0][7][2] = _aB_F__0__K__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[3][0][7][3] = _aB_F__0__K__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[3][0][7][4] = _aB_F__0__K__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[3][0][7][5] = _aB_F__0__K__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[3][0][7][6] = _aB_F__0__K__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[3][0][7][7] = _aB_F__0__K__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[3][0][8][0] = _aB_F__0__L__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[3][0][8][1] = _aB_F__0__L__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[3][0][8][2] = _aB_F__0__L__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[3][0][8][3] = _aB_F__0__L__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[3][0][8][4] = _aB_F__0__L__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[3][0][8][5] = _aB_F__0__L__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[3][0][8][6] = _aB_F__0__L__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[3][0][8][7] = _aB_F__0__L__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[3][0][8][8] = _aB_F__0__L__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[3][0][9][0] = _aB_F__0__M__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[3][0][9][1] = _aB_F__0__M__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[3][0][9][2] = _aB_F__0__M__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[3][0][9][3] = _aB_F__0__M__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[3][0][9][4] = _aB_F__0__M__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[3][0][9][5] = _aB_F__0__M__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[3][0][9][6] = _aB_F__0__M__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[3][0][9][7] = _aB_F__0__M__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[3][0][9][8] = _aB_F__0__M__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[3][0][9][9] = _aB_F__0__M__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[3][0][10][0] = _aB_F__0__PS__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[3][0][10][1] = _aB_F__0__PS__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[3][0][10][2] = _aB_F__0__PS__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[3][0][10][3] = _aB_F__0__PS__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[3][0][10][4] = _aB_F__0__PS__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[3][0][10][5] = _aB_F__0__PS__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[3][0][10][6] = _aB_F__0__PS__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[3][0][10][7] = _aB_F__0__PS__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[3][0][10][8] = _aB_F__0__PS__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[3][0][10][9] = _aB_F__0__PS__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[3][0][10][10] = _aB_F__0__PS__1___TwoPRep_S__0__PS__1___Ab__up_0;

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

libint2_build_eri[3][1][6][0] = _aB_F__0__I__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[3][1][6][1] = _aB_F__0__I__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[3][1][6][2] = _aB_F__0__I__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[3][1][6][3] = _aB_F__0__I__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[3][1][6][4] = _aB_F__0__I__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[3][1][6][5] = _aB_F__0__I__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[3][1][6][6] = _aB_F__0__I__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[3][1][7][0] = _aB_F__0__K__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[3][1][7][1] = _aB_F__0__K__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[3][1][7][2] = _aB_F__0__K__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[3][1][7][3] = _aB_F__0__K__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[3][1][7][4] = _aB_F__0__K__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[3][1][7][5] = _aB_F__0__K__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[3][1][7][6] = _aB_F__0__K__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[3][1][7][7] = _aB_F__0__K__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[3][1][8][0] = _aB_F__0__L__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[3][1][8][1] = _aB_F__0__L__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[3][1][8][2] = _aB_F__0__L__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[3][1][8][3] = _aB_F__0__L__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[3][1][8][4] = _aB_F__0__L__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[3][1][8][5] = _aB_F__0__L__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[3][1][8][6] = _aB_F__0__L__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[3][1][8][7] = _aB_F__0__L__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[3][1][8][8] = _aB_F__0__L__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[3][1][9][0] = _aB_F__0__M__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[3][1][9][1] = _aB_F__0__M__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[3][1][9][2] = _aB_F__0__M__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[3][1][9][3] = _aB_F__0__M__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[3][1][9][4] = _aB_F__0__M__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[3][1][9][5] = _aB_F__0__M__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[3][1][9][6] = _aB_F__0__M__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[3][1][9][7] = _aB_F__0__M__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[3][1][9][8] = _aB_F__0__M__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[3][1][9][9] = _aB_F__0__M__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[3][1][10][0] = _aB_F__0__PS__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[3][1][10][1] = _aB_F__0__PS__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[3][1][10][2] = _aB_F__0__PS__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[3][1][10][3] = _aB_F__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[3][1][10][4] = _aB_F__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[3][1][10][5] = _aB_F__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[3][1][10][6] = _aB_F__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[3][1][10][7] = _aB_F__0__PS__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[3][1][10][8] = _aB_F__0__PS__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[3][1][10][9] = _aB_F__0__PS__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[3][1][10][10] = _aB_F__0__PS__1___TwoPRep_P__0__PS__1___Ab__up_0;

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

libint2_build_eri[3][2][6][0] = _aB_F__0__I__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[3][2][6][1] = _aB_F__0__I__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[3][2][6][2] = _aB_F__0__I__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[3][2][6][3] = _aB_F__0__I__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[3][2][6][4] = _aB_F__0__I__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[3][2][6][5] = _aB_F__0__I__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[3][2][6][6] = _aB_F__0__I__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[3][2][7][0] = _aB_F__0__K__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[3][2][7][1] = _aB_F__0__K__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[3][2][7][2] = _aB_F__0__K__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[3][2][7][3] = _aB_F__0__K__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[3][2][7][4] = _aB_F__0__K__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[3][2][7][5] = _aB_F__0__K__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[3][2][7][6] = _aB_F__0__K__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[3][2][7][7] = _aB_F__0__K__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[3][2][8][0] = _aB_F__0__L__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[3][2][8][1] = _aB_F__0__L__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[3][2][8][2] = _aB_F__0__L__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[3][2][8][3] = _aB_F__0__L__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[3][2][8][4] = _aB_F__0__L__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[3][2][8][5] = _aB_F__0__L__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[3][2][8][6] = _aB_F__0__L__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[3][2][8][7] = _aB_F__0__L__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[3][2][8][8] = _aB_F__0__L__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[3][2][9][0] = _aB_F__0__M__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[3][2][9][1] = _aB_F__0__M__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[3][2][9][2] = _aB_F__0__M__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[3][2][9][3] = _aB_F__0__M__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[3][2][9][4] = _aB_F__0__M__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[3][2][9][5] = _aB_F__0__M__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[3][2][9][6] = _aB_F__0__M__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[3][2][9][7] = _aB_F__0__M__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[3][2][9][8] = _aB_F__0__M__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[3][2][9][9] = _aB_F__0__M__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[3][2][10][0] = _aB_F__0__PS__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[3][2][10][1] = _aB_F__0__PS__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[3][2][10][2] = _aB_F__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[3][2][10][3] = _aB_F__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[3][2][10][4] = _aB_F__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[3][2][10][5] = _aB_F__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[3][2][10][6] = _aB_F__0__PS__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[3][2][10][7] = _aB_F__0__PS__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[3][2][10][8] = _aB_F__0__PS__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[3][2][10][9] = _aB_F__0__PS__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[3][2][10][10] = _aB_F__0__PS__1___TwoPRep_D__0__PS__1___Ab__up_0;

libint2_build_eri[3][3][3][3] = _aB_F__0__F__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][4][2] = _aB_F__0__G__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[3][3][4][3] = _aB_F__0__G__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][4][4] = _aB_F__0__G__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[3][3][5][1] = _aB_F__0__H__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[3][3][5][2] = _aB_F__0__H__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[3][3][5][3] = _aB_F__0__H__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][5][4] = _aB_F__0__H__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[3][3][5][5] = _aB_F__0__H__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[3][3][6][0] = _aB_F__0__I__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[3][3][6][1] = _aB_F__0__I__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[3][3][6][2] = _aB_F__0__I__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[3][3][6][3] = _aB_F__0__I__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][6][4] = _aB_F__0__I__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[3][3][6][5] = _aB_F__0__I__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[3][3][6][6] = _aB_F__0__I__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[3][3][7][0] = _aB_F__0__K__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[3][3][7][1] = _aB_F__0__K__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[3][3][7][2] = _aB_F__0__K__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[3][3][7][3] = _aB_F__0__K__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][7][4] = _aB_F__0__K__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[3][3][7][5] = _aB_F__0__K__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[3][3][7][6] = _aB_F__0__K__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[3][3][7][7] = _aB_F__0__K__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[3][3][8][0] = _aB_F__0__L__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[3][3][8][1] = _aB_F__0__L__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[3][3][8][2] = _aB_F__0__L__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[3][3][8][3] = _aB_F__0__L__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][8][4] = _aB_F__0__L__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[3][3][8][5] = _aB_F__0__L__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[3][3][8][6] = _aB_F__0__L__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[3][3][8][7] = _aB_F__0__L__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[3][3][8][8] = _aB_F__0__L__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[3][3][9][0] = _aB_F__0__M__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[3][3][9][1] = _aB_F__0__M__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[3][3][9][2] = _aB_F__0__M__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[3][3][9][3] = _aB_F__0__M__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][9][4] = _aB_F__0__M__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[3][3][9][5] = _aB_F__0__M__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[3][3][9][6] = _aB_F__0__M__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[3][3][9][7] = _aB_F__0__M__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[3][3][9][8] = _aB_F__0__M__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[3][3][9][9] = _aB_F__0__M__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[3][3][10][0] = _aB_F__0__PS__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[3][3][10][1] = _aB_F__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[3][3][10][2] = _aB_F__0__PS__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[3][3][10][3] = _aB_F__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][10][4] = _aB_F__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[3][3][10][5] = _aB_F__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[3][3][10][6] = _aB_F__0__PS__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[3][3][10][7] = _aB_F__0__PS__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[3][3][10][8] = _aB_F__0__PS__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[3][3][10][9] = _aB_F__0__PS__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[3][3][10][10] = _aB_F__0__PS__1___TwoPRep_F__0__PS__1___Ab__up_0;

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

libint2_build_eri[4][0][6][0] = _aB_G__0__I__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[4][0][6][1] = _aB_G__0__I__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[4][0][6][2] = _aB_G__0__I__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[4][0][6][3] = _aB_G__0__I__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[4][0][6][4] = _aB_G__0__I__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[4][0][6][5] = _aB_G__0__I__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[4][0][6][6] = _aB_G__0__I__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[4][0][7][0] = _aB_G__0__K__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[4][0][7][1] = _aB_G__0__K__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[4][0][7][2] = _aB_G__0__K__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[4][0][7][3] = _aB_G__0__K__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[4][0][7][4] = _aB_G__0__K__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[4][0][7][5] = _aB_G__0__K__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[4][0][7][6] = _aB_G__0__K__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[4][0][7][7] = _aB_G__0__K__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[4][0][8][0] = _aB_G__0__L__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[4][0][8][1] = _aB_G__0__L__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[4][0][8][2] = _aB_G__0__L__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[4][0][8][3] = _aB_G__0__L__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[4][0][8][4] = _aB_G__0__L__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[4][0][8][5] = _aB_G__0__L__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[4][0][8][6] = _aB_G__0__L__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[4][0][8][7] = _aB_G__0__L__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[4][0][8][8] = _aB_G__0__L__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[4][0][9][0] = _aB_G__0__M__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[4][0][9][1] = _aB_G__0__M__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[4][0][9][2] = _aB_G__0__M__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[4][0][9][3] = _aB_G__0__M__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[4][0][9][4] = _aB_G__0__M__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[4][0][9][5] = _aB_G__0__M__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[4][0][9][6] = _aB_G__0__M__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[4][0][9][7] = _aB_G__0__M__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[4][0][9][8] = _aB_G__0__M__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[4][0][9][9] = _aB_G__0__M__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[4][0][10][0] = _aB_G__0__PS__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[4][0][10][1] = _aB_G__0__PS__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[4][0][10][2] = _aB_G__0__PS__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[4][0][10][3] = _aB_G__0__PS__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[4][0][10][4] = _aB_G__0__PS__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[4][0][10][5] = _aB_G__0__PS__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[4][0][10][6] = _aB_G__0__PS__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[4][0][10][7] = _aB_G__0__PS__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[4][0][10][8] = _aB_G__0__PS__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[4][0][10][9] = _aB_G__0__PS__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[4][0][10][10] = _aB_G__0__PS__1___TwoPRep_S__0__PS__1___Ab__up_0;

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

libint2_build_eri[4][1][6][0] = _aB_G__0__I__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[4][1][6][1] = _aB_G__0__I__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[4][1][6][2] = _aB_G__0__I__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[4][1][6][3] = _aB_G__0__I__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[4][1][6][4] = _aB_G__0__I__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[4][1][6][5] = _aB_G__0__I__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[4][1][6][6] = _aB_G__0__I__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[4][1][7][0] = _aB_G__0__K__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[4][1][7][1] = _aB_G__0__K__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[4][1][7][2] = _aB_G__0__K__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[4][1][7][3] = _aB_G__0__K__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[4][1][7][4] = _aB_G__0__K__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[4][1][7][5] = _aB_G__0__K__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[4][1][7][6] = _aB_G__0__K__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[4][1][7][7] = _aB_G__0__K__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[4][1][8][0] = _aB_G__0__L__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[4][1][8][1] = _aB_G__0__L__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[4][1][8][2] = _aB_G__0__L__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[4][1][8][3] = _aB_G__0__L__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[4][1][8][4] = _aB_G__0__L__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[4][1][8][5] = _aB_G__0__L__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[4][1][8][6] = _aB_G__0__L__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[4][1][8][7] = _aB_G__0__L__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[4][1][8][8] = _aB_G__0__L__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[4][1][9][0] = _aB_G__0__M__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[4][1][9][1] = _aB_G__0__M__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[4][1][9][2] = _aB_G__0__M__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[4][1][9][3] = _aB_G__0__M__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[4][1][9][4] = _aB_G__0__M__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[4][1][9][5] = _aB_G__0__M__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[4][1][9][6] = _aB_G__0__M__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[4][1][9][7] = _aB_G__0__M__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[4][1][9][8] = _aB_G__0__M__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[4][1][9][9] = _aB_G__0__M__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[4][1][10][0] = _aB_G__0__PS__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[4][1][10][1] = _aB_G__0__PS__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[4][1][10][2] = _aB_G__0__PS__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[4][1][10][3] = _aB_G__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[4][1][10][4] = _aB_G__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[4][1][10][5] = _aB_G__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[4][1][10][6] = _aB_G__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[4][1][10][7] = _aB_G__0__PS__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[4][1][10][8] = _aB_G__0__PS__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[4][1][10][9] = _aB_G__0__PS__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[4][1][10][10] = _aB_G__0__PS__1___TwoPRep_P__0__PS__1___Ab__up_0;

libint2_build_eri[4][2][3][3] = _aB_G__0__F__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][4][2] = _aB_G__0__G__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[4][2][4][3] = _aB_G__0__G__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][4][4] = _aB_G__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[4][2][5][1] = _aB_G__0__H__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[4][2][5][2] = _aB_G__0__H__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[4][2][5][3] = _aB_G__0__H__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][5][4] = _aB_G__0__H__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[4][2][5][5] = _aB_G__0__H__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[4][2][6][0] = _aB_G__0__I__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[4][2][6][1] = _aB_G__0__I__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[4][2][6][2] = _aB_G__0__I__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[4][2][6][3] = _aB_G__0__I__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][6][4] = _aB_G__0__I__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[4][2][6][5] = _aB_G__0__I__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[4][2][6][6] = _aB_G__0__I__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[4][2][7][0] = _aB_G__0__K__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[4][2][7][1] = _aB_G__0__K__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[4][2][7][2] = _aB_G__0__K__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[4][2][7][3] = _aB_G__0__K__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][7][4] = _aB_G__0__K__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[4][2][7][5] = _aB_G__0__K__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[4][2][7][6] = _aB_G__0__K__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[4][2][7][7] = _aB_G__0__K__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[4][2][8][0] = _aB_G__0__L__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[4][2][8][1] = _aB_G__0__L__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[4][2][8][2] = _aB_G__0__L__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[4][2][8][3] = _aB_G__0__L__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][8][4] = _aB_G__0__L__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[4][2][8][5] = _aB_G__0__L__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[4][2][8][6] = _aB_G__0__L__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[4][2][8][7] = _aB_G__0__L__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[4][2][8][8] = _aB_G__0__L__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[4][2][9][0] = _aB_G__0__M__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[4][2][9][1] = _aB_G__0__M__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[4][2][9][2] = _aB_G__0__M__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[4][2][9][3] = _aB_G__0__M__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][9][4] = _aB_G__0__M__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[4][2][9][5] = _aB_G__0__M__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[4][2][9][6] = _aB_G__0__M__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[4][2][9][7] = _aB_G__0__M__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[4][2][9][8] = _aB_G__0__M__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[4][2][9][9] = _aB_G__0__M__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[4][2][10][0] = _aB_G__0__PS__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[4][2][10][1] = _aB_G__0__PS__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[4][2][10][2] = _aB_G__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[4][2][10][3] = _aB_G__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][10][4] = _aB_G__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[4][2][10][5] = _aB_G__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[4][2][10][6] = _aB_G__0__PS__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[4][2][10][7] = _aB_G__0__PS__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[4][2][10][8] = _aB_G__0__PS__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[4][2][10][9] = _aB_G__0__PS__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[4][2][10][10] = _aB_G__0__PS__1___TwoPRep_D__0__PS__1___Ab__up_0;

libint2_build_eri[4][3][4][3] = _aB_G__0__G__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[4][3][4][4] = _aB_G__0__G__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[4][3][5][2] = _aB_G__0__H__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[4][3][5][3] = _aB_G__0__H__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[4][3][5][4] = _aB_G__0__H__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[4][3][5][5] = _aB_G__0__H__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[4][3][6][1] = _aB_G__0__I__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[4][3][6][2] = _aB_G__0__I__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[4][3][6][3] = _aB_G__0__I__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[4][3][6][4] = _aB_G__0__I__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[4][3][6][5] = _aB_G__0__I__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[4][3][6][6] = _aB_G__0__I__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[4][3][7][0] = _aB_G__0__K__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[4][3][7][1] = _aB_G__0__K__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[4][3][7][2] = _aB_G__0__K__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[4][3][7][3] = _aB_G__0__K__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[4][3][7][4] = _aB_G__0__K__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[4][3][7][5] = _aB_G__0__K__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[4][3][7][6] = _aB_G__0__K__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[4][3][7][7] = _aB_G__0__K__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[4][3][8][0] = _aB_G__0__L__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[4][3][8][1] = _aB_G__0__L__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[4][3][8][2] = _aB_G__0__L__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[4][3][8][3] = _aB_G__0__L__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[4][3][8][4] = _aB_G__0__L__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[4][3][8][5] = _aB_G__0__L__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[4][3][8][6] = _aB_G__0__L__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[4][3][8][7] = _aB_G__0__L__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[4][3][8][8] = _aB_G__0__L__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[4][3][9][0] = _aB_G__0__M__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[4][3][9][1] = _aB_G__0__M__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[4][3][9][2] = _aB_G__0__M__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[4][3][9][3] = _aB_G__0__M__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[4][3][9][4] = _aB_G__0__M__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[4][3][9][5] = _aB_G__0__M__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[4][3][9][6] = _aB_G__0__M__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[4][3][9][7] = _aB_G__0__M__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[4][3][9][8] = _aB_G__0__M__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[4][3][9][9] = _aB_G__0__M__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[4][3][10][0] = _aB_G__0__PS__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[4][3][10][1] = _aB_G__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[4][3][10][2] = _aB_G__0__PS__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[4][3][10][3] = _aB_G__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[4][3][10][4] = _aB_G__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[4][3][10][5] = _aB_G__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[4][3][10][6] = _aB_G__0__PS__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[4][3][10][7] = _aB_G__0__PS__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[4][3][10][8] = _aB_G__0__PS__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[4][3][10][9] = _aB_G__0__PS__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[4][3][10][10] = _aB_G__0__PS__1___TwoPRep_F__0__PS__1___Ab__up_0;

libint2_build_eri[4][4][4][4] = _aB_G__0__G__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[4][4][5][3] = _aB_G__0__H__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[4][4][5][4] = _aB_G__0__H__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[4][4][5][5] = _aB_G__0__H__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[4][4][6][2] = _aB_G__0__I__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[4][4][6][3] = _aB_G__0__I__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[4][4][6][4] = _aB_G__0__I__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[4][4][6][5] = _aB_G__0__I__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[4][4][6][6] = _aB_G__0__I__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[4][4][7][1] = _aB_G__0__K__1___TwoPRep_G__0__P__1___Ab__up_0;

libint2_build_eri[4][4][7][2] = _aB_G__0__K__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[4][4][7][3] = _aB_G__0__K__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[4][4][7][4] = _aB_G__0__K__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[4][4][7][5] = _aB_G__0__K__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[4][4][7][6] = _aB_G__0__K__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[4][4][7][7] = _aB_G__0__K__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[4][4][8][0] = _aB_G__0__L__1___TwoPRep_G__0__S__1___Ab__up_0;

libint2_build_eri[4][4][8][1] = _aB_G__0__L__1___TwoPRep_G__0__P__1___Ab__up_0;

libint2_build_eri[4][4][8][2] = _aB_G__0__L__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[4][4][8][3] = _aB_G__0__L__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[4][4][8][4] = _aB_G__0__L__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[4][4][8][5] = _aB_G__0__L__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[4][4][8][6] = _aB_G__0__L__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[4][4][8][7] = _aB_G__0__L__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[4][4][8][8] = _aB_G__0__L__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[4][4][9][0] = _aB_G__0__M__1___TwoPRep_G__0__S__1___Ab__up_0;

libint2_build_eri[4][4][9][1] = _aB_G__0__M__1___TwoPRep_G__0__P__1___Ab__up_0;

libint2_build_eri[4][4][9][2] = _aB_G__0__M__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[4][4][9][3] = _aB_G__0__M__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[4][4][9][4] = _aB_G__0__M__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[4][4][9][5] = _aB_G__0__M__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[4][4][9][6] = _aB_G__0__M__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[4][4][9][7] = _aB_G__0__M__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[4][4][9][8] = _aB_G__0__M__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[4][4][9][9] = _aB_G__0__M__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[4][4][10][0] = _aB_G__0__PS__1___TwoPRep_G__0__S__1___Ab__up_0;

libint2_build_eri[4][4][10][1] = _aB_G__0__PS__1___TwoPRep_G__0__P__1___Ab__up_0;

libint2_build_eri[4][4][10][2] = _aB_G__0__PS__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[4][4][10][3] = _aB_G__0__PS__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[4][4][10][4] = _aB_G__0__PS__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[4][4][10][5] = _aB_G__0__PS__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[4][4][10][6] = _aB_G__0__PS__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[4][4][10][7] = _aB_G__0__PS__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[4][4][10][8] = _aB_G__0__PS__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[4][4][10][9] = _aB_G__0__PS__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[4][4][10][10] = _aB_G__0__PS__1___TwoPRep_G__0__PS__1___Ab__up_0;

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

libint2_build_eri[5][0][6][0] = _aB_H__0__I__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[5][0][6][1] = _aB_H__0__I__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[5][0][6][2] = _aB_H__0__I__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[5][0][6][3] = _aB_H__0__I__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[5][0][6][4] = _aB_H__0__I__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[5][0][6][5] = _aB_H__0__I__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[5][0][6][6] = _aB_H__0__I__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[5][0][7][0] = _aB_H__0__K__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[5][0][7][1] = _aB_H__0__K__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[5][0][7][2] = _aB_H__0__K__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[5][0][7][3] = _aB_H__0__K__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[5][0][7][4] = _aB_H__0__K__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[5][0][7][5] = _aB_H__0__K__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[5][0][7][6] = _aB_H__0__K__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[5][0][7][7] = _aB_H__0__K__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[5][0][8][0] = _aB_H__0__L__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[5][0][8][1] = _aB_H__0__L__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[5][0][8][2] = _aB_H__0__L__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[5][0][8][3] = _aB_H__0__L__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[5][0][8][4] = _aB_H__0__L__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[5][0][8][5] = _aB_H__0__L__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[5][0][8][6] = _aB_H__0__L__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[5][0][8][7] = _aB_H__0__L__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[5][0][8][8] = _aB_H__0__L__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[5][0][9][0] = _aB_H__0__M__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[5][0][9][1] = _aB_H__0__M__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[5][0][9][2] = _aB_H__0__M__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[5][0][9][3] = _aB_H__0__M__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[5][0][9][4] = _aB_H__0__M__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[5][0][9][5] = _aB_H__0__M__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[5][0][9][6] = _aB_H__0__M__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[5][0][9][7] = _aB_H__0__M__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[5][0][9][8] = _aB_H__0__M__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[5][0][9][9] = _aB_H__0__M__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[5][0][10][0] = _aB_H__0__PS__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[5][0][10][1] = _aB_H__0__PS__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[5][0][10][2] = _aB_H__0__PS__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[5][0][10][3] = _aB_H__0__PS__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[5][0][10][4] = _aB_H__0__PS__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[5][0][10][5] = _aB_H__0__PS__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[5][0][10][6] = _aB_H__0__PS__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[5][0][10][7] = _aB_H__0__PS__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[5][0][10][8] = _aB_H__0__PS__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[5][0][10][9] = _aB_H__0__PS__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[5][0][10][10] = _aB_H__0__PS__1___TwoPRep_S__0__PS__1___Ab__up_0;

libint2_build_eri[5][1][3][3] = _aB_H__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][4][2] = _aB_H__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[5][1][4][3] = _aB_H__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][4][4] = _aB_H__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[5][1][5][1] = _aB_H__0__H__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[5][1][5][2] = _aB_H__0__H__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[5][1][5][3] = _aB_H__0__H__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][5][4] = _aB_H__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[5][1][5][5] = _aB_H__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[5][1][6][0] = _aB_H__0__I__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[5][1][6][1] = _aB_H__0__I__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[5][1][6][2] = _aB_H__0__I__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[5][1][6][3] = _aB_H__0__I__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][6][4] = _aB_H__0__I__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[5][1][6][5] = _aB_H__0__I__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[5][1][6][6] = _aB_H__0__I__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[5][1][7][0] = _aB_H__0__K__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[5][1][7][1] = _aB_H__0__K__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[5][1][7][2] = _aB_H__0__K__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[5][1][7][3] = _aB_H__0__K__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][7][4] = _aB_H__0__K__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[5][1][7][5] = _aB_H__0__K__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[5][1][7][6] = _aB_H__0__K__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[5][1][7][7] = _aB_H__0__K__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[5][1][8][0] = _aB_H__0__L__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[5][1][8][1] = _aB_H__0__L__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[5][1][8][2] = _aB_H__0__L__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[5][1][8][3] = _aB_H__0__L__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][8][4] = _aB_H__0__L__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[5][1][8][5] = _aB_H__0__L__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[5][1][8][6] = _aB_H__0__L__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[5][1][8][7] = _aB_H__0__L__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[5][1][8][8] = _aB_H__0__L__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[5][1][9][0] = _aB_H__0__M__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[5][1][9][1] = _aB_H__0__M__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[5][1][9][2] = _aB_H__0__M__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[5][1][9][3] = _aB_H__0__M__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][9][4] = _aB_H__0__M__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[5][1][9][5] = _aB_H__0__M__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[5][1][9][6] = _aB_H__0__M__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[5][1][9][7] = _aB_H__0__M__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[5][1][9][8] = _aB_H__0__M__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[5][1][9][9] = _aB_H__0__M__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[5][1][10][0] = _aB_H__0__PS__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[5][1][10][1] = _aB_H__0__PS__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[5][1][10][2] = _aB_H__0__PS__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[5][1][10][3] = _aB_H__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][10][4] = _aB_H__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[5][1][10][5] = _aB_H__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[5][1][10][6] = _aB_H__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[5][1][10][7] = _aB_H__0__PS__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[5][1][10][8] = _aB_H__0__PS__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[5][1][10][9] = _aB_H__0__PS__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[5][1][10][10] = _aB_H__0__PS__1___TwoPRep_P__0__PS__1___Ab__up_0;

libint2_build_eri[5][2][4][3] = _aB_H__0__G__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[5][2][4][4] = _aB_H__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[5][2][5][2] = _aB_H__0__H__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[5][2][5][3] = _aB_H__0__H__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[5][2][5][4] = _aB_H__0__H__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[5][2][5][5] = _aB_H__0__H__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[5][2][6][1] = _aB_H__0__I__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[5][2][6][2] = _aB_H__0__I__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[5][2][6][3] = _aB_H__0__I__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[5][2][6][4] = _aB_H__0__I__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[5][2][6][5] = _aB_H__0__I__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[5][2][6][6] = _aB_H__0__I__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[5][2][7][0] = _aB_H__0__K__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[5][2][7][1] = _aB_H__0__K__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[5][2][7][2] = _aB_H__0__K__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[5][2][7][3] = _aB_H__0__K__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[5][2][7][4] = _aB_H__0__K__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[5][2][7][5] = _aB_H__0__K__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[5][2][7][6] = _aB_H__0__K__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[5][2][7][7] = _aB_H__0__K__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[5][2][8][0] = _aB_H__0__L__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[5][2][8][1] = _aB_H__0__L__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[5][2][8][2] = _aB_H__0__L__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[5][2][8][3] = _aB_H__0__L__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[5][2][8][4] = _aB_H__0__L__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[5][2][8][5] = _aB_H__0__L__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[5][2][8][6] = _aB_H__0__L__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[5][2][8][7] = _aB_H__0__L__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[5][2][8][8] = _aB_H__0__L__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[5][2][9][0] = _aB_H__0__M__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[5][2][9][1] = _aB_H__0__M__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[5][2][9][2] = _aB_H__0__M__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[5][2][9][3] = _aB_H__0__M__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[5][2][9][4] = _aB_H__0__M__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[5][2][9][5] = _aB_H__0__M__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[5][2][9][6] = _aB_H__0__M__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[5][2][9][7] = _aB_H__0__M__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[5][2][9][8] = _aB_H__0__M__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[5][2][9][9] = _aB_H__0__M__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[5][2][10][0] = _aB_H__0__PS__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[5][2][10][1] = _aB_H__0__PS__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[5][2][10][2] = _aB_H__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[5][2][10][3] = _aB_H__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[5][2][10][4] = _aB_H__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[5][2][10][5] = _aB_H__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[5][2][10][6] = _aB_H__0__PS__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[5][2][10][7] = _aB_H__0__PS__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[5][2][10][8] = _aB_H__0__PS__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[5][2][10][9] = _aB_H__0__PS__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[5][2][10][10] = _aB_H__0__PS__1___TwoPRep_D__0__PS__1___Ab__up_0;

libint2_build_eri[5][3][4][4] = _aB_H__0__G__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[5][3][5][3] = _aB_H__0__H__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[5][3][5][4] = _aB_H__0__H__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[5][3][5][5] = _aB_H__0__H__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[5][3][6][2] = _aB_H__0__I__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[5][3][6][3] = _aB_H__0__I__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[5][3][6][4] = _aB_H__0__I__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[5][3][6][5] = _aB_H__0__I__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[5][3][6][6] = _aB_H__0__I__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[5][3][7][1] = _aB_H__0__K__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[5][3][7][2] = _aB_H__0__K__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[5][3][7][3] = _aB_H__0__K__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[5][3][7][4] = _aB_H__0__K__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[5][3][7][5] = _aB_H__0__K__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[5][3][7][6] = _aB_H__0__K__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[5][3][7][7] = _aB_H__0__K__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[5][3][8][0] = _aB_H__0__L__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[5][3][8][1] = _aB_H__0__L__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[5][3][8][2] = _aB_H__0__L__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[5][3][8][3] = _aB_H__0__L__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[5][3][8][4] = _aB_H__0__L__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[5][3][8][5] = _aB_H__0__L__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[5][3][8][6] = _aB_H__0__L__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[5][3][8][7] = _aB_H__0__L__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[5][3][8][8] = _aB_H__0__L__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[5][3][9][0] = _aB_H__0__M__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[5][3][9][1] = _aB_H__0__M__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[5][3][9][2] = _aB_H__0__M__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[5][3][9][3] = _aB_H__0__M__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[5][3][9][4] = _aB_H__0__M__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[5][3][9][5] = _aB_H__0__M__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[5][3][9][6] = _aB_H__0__M__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[5][3][9][7] = _aB_H__0__M__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[5][3][9][8] = _aB_H__0__M__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[5][3][9][9] = _aB_H__0__M__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[5][3][10][0] = _aB_H__0__PS__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[5][3][10][1] = _aB_H__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[5][3][10][2] = _aB_H__0__PS__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[5][3][10][3] = _aB_H__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[5][3][10][4] = _aB_H__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[5][3][10][5] = _aB_H__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[5][3][10][6] = _aB_H__0__PS__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[5][3][10][7] = _aB_H__0__PS__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[5][3][10][8] = _aB_H__0__PS__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[5][3][10][9] = _aB_H__0__PS__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[5][3][10][10] = _aB_H__0__PS__1___TwoPRep_F__0__PS__1___Ab__up_0;

libint2_build_eri[5][4][5][4] = _aB_H__0__H__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[5][4][5][5] = _aB_H__0__H__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[5][4][6][3] = _aB_H__0__I__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[5][4][6][4] = _aB_H__0__I__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[5][4][6][5] = _aB_H__0__I__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[5][4][6][6] = _aB_H__0__I__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[5][4][7][2] = _aB_H__0__K__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[5][4][7][3] = _aB_H__0__K__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[5][4][7][4] = _aB_H__0__K__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[5][4][7][5] = _aB_H__0__K__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[5][4][7][6] = _aB_H__0__K__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[5][4][7][7] = _aB_H__0__K__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[5][4][8][1] = _aB_H__0__L__1___TwoPRep_G__0__P__1___Ab__up_0;

libint2_build_eri[5][4][8][2] = _aB_H__0__L__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[5][4][8][3] = _aB_H__0__L__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[5][4][8][4] = _aB_H__0__L__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[5][4][8][5] = _aB_H__0__L__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[5][4][8][6] = _aB_H__0__L__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[5][4][8][7] = _aB_H__0__L__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[5][4][8][8] = _aB_H__0__L__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[5][4][9][0] = _aB_H__0__M__1___TwoPRep_G__0__S__1___Ab__up_0;

libint2_build_eri[5][4][9][1] = _aB_H__0__M__1___TwoPRep_G__0__P__1___Ab__up_0;

libint2_build_eri[5][4][9][2] = _aB_H__0__M__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[5][4][9][3] = _aB_H__0__M__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[5][4][9][4] = _aB_H__0__M__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[5][4][9][5] = _aB_H__0__M__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[5][4][9][6] = _aB_H__0__M__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[5][4][9][7] = _aB_H__0__M__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[5][4][9][8] = _aB_H__0__M__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[5][4][9][9] = _aB_H__0__M__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[5][4][10][0] = _aB_H__0__PS__1___TwoPRep_G__0__S__1___Ab__up_0;

libint2_build_eri[5][4][10][1] = _aB_H__0__PS__1___TwoPRep_G__0__P__1___Ab__up_0;

libint2_build_eri[5][4][10][2] = _aB_H__0__PS__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[5][4][10][3] = _aB_H__0__PS__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[5][4][10][4] = _aB_H__0__PS__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[5][4][10][5] = _aB_H__0__PS__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[5][4][10][6] = _aB_H__0__PS__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[5][4][10][7] = _aB_H__0__PS__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[5][4][10][8] = _aB_H__0__PS__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[5][4][10][9] = _aB_H__0__PS__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[5][4][10][10] = _aB_H__0__PS__1___TwoPRep_G__0__PS__1___Ab__up_0;

libint2_build_eri[5][5][5][5] = _aB_H__0__H__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[5][5][6][4] = _aB_H__0__I__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[5][5][6][5] = _aB_H__0__I__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[5][5][6][6] = _aB_H__0__I__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[5][5][7][3] = _aB_H__0__K__1___TwoPRep_H__0__F__1___Ab__up_0;

libint2_build_eri[5][5][7][4] = _aB_H__0__K__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[5][5][7][5] = _aB_H__0__K__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[5][5][7][6] = _aB_H__0__K__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[5][5][7][7] = _aB_H__0__K__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[5][5][8][2] = _aB_H__0__L__1___TwoPRep_H__0__D__1___Ab__up_0;

libint2_build_eri[5][5][8][3] = _aB_H__0__L__1___TwoPRep_H__0__F__1___Ab__up_0;

libint2_build_eri[5][5][8][4] = _aB_H__0__L__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[5][5][8][5] = _aB_H__0__L__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[5][5][8][6] = _aB_H__0__L__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[5][5][8][7] = _aB_H__0__L__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[5][5][8][8] = _aB_H__0__L__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[5][5][9][1] = _aB_H__0__M__1___TwoPRep_H__0__P__1___Ab__up_0;

libint2_build_eri[5][5][9][2] = _aB_H__0__M__1___TwoPRep_H__0__D__1___Ab__up_0;

libint2_build_eri[5][5][9][3] = _aB_H__0__M__1___TwoPRep_H__0__F__1___Ab__up_0;

libint2_build_eri[5][5][9][4] = _aB_H__0__M__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[5][5][9][5] = _aB_H__0__M__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[5][5][9][6] = _aB_H__0__M__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[5][5][9][7] = _aB_H__0__M__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[5][5][9][8] = _aB_H__0__M__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[5][5][9][9] = _aB_H__0__M__1___TwoPRep_H__0__M__1___Ab__up_0;

libint2_build_eri[5][5][10][0] = _aB_H__0__PS__1___TwoPRep_H__0__S__1___Ab__up_0;

libint2_build_eri[5][5][10][1] = _aB_H__0__PS__1___TwoPRep_H__0__P__1___Ab__up_0;

libint2_build_eri[5][5][10][2] = _aB_H__0__PS__1___TwoPRep_H__0__D__1___Ab__up_0;

libint2_build_eri[5][5][10][3] = _aB_H__0__PS__1___TwoPRep_H__0__F__1___Ab__up_0;

libint2_build_eri[5][5][10][4] = _aB_H__0__PS__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[5][5][10][5] = _aB_H__0__PS__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[5][5][10][6] = _aB_H__0__PS__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[5][5][10][7] = _aB_H__0__PS__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[5][5][10][8] = _aB_H__0__PS__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[5][5][10][9] = _aB_H__0__PS__1___TwoPRep_H__0__M__1___Ab__up_0;

libint2_build_eri[5][5][10][10] = _aB_H__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0;

libint2_build_eri[6][0][3][3] = _aB_I__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[6][0][4][2] = _aB_I__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[6][0][4][3] = _aB_I__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[6][0][4][4] = _aB_I__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[6][0][5][1] = _aB_I__0__H__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[6][0][5][2] = _aB_I__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[6][0][5][3] = _aB_I__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[6][0][5][4] = _aB_I__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[6][0][5][5] = _aB_I__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[6][0][6][0] = _aB_I__0__I__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[6][0][6][1] = _aB_I__0__I__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[6][0][6][2] = _aB_I__0__I__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[6][0][6][3] = _aB_I__0__I__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[6][0][6][4] = _aB_I__0__I__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[6][0][6][5] = _aB_I__0__I__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[6][0][6][6] = _aB_I__0__I__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[6][0][7][0] = _aB_I__0__K__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[6][0][7][1] = _aB_I__0__K__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[6][0][7][2] = _aB_I__0__K__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[6][0][7][3] = _aB_I__0__K__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[6][0][7][4] = _aB_I__0__K__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[6][0][7][5] = _aB_I__0__K__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[6][0][7][6] = _aB_I__0__K__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[6][0][7][7] = _aB_I__0__K__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[6][0][8][0] = _aB_I__0__L__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[6][0][8][1] = _aB_I__0__L__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[6][0][8][2] = _aB_I__0__L__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[6][0][8][3] = _aB_I__0__L__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[6][0][8][4] = _aB_I__0__L__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[6][0][8][5] = _aB_I__0__L__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[6][0][8][6] = _aB_I__0__L__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[6][0][8][7] = _aB_I__0__L__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[6][0][8][8] = _aB_I__0__L__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[6][0][9][0] = _aB_I__0__M__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[6][0][9][1] = _aB_I__0__M__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[6][0][9][2] = _aB_I__0__M__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[6][0][9][3] = _aB_I__0__M__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[6][0][9][4] = _aB_I__0__M__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[6][0][9][5] = _aB_I__0__M__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[6][0][9][6] = _aB_I__0__M__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[6][0][9][7] = _aB_I__0__M__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[6][0][9][8] = _aB_I__0__M__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[6][0][9][9] = _aB_I__0__M__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[6][0][10][0] = _aB_I__0__PS__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[6][0][10][1] = _aB_I__0__PS__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[6][0][10][2] = _aB_I__0__PS__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[6][0][10][3] = _aB_I__0__PS__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[6][0][10][4] = _aB_I__0__PS__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[6][0][10][5] = _aB_I__0__PS__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[6][0][10][6] = _aB_I__0__PS__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[6][0][10][7] = _aB_I__0__PS__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[6][0][10][8] = _aB_I__0__PS__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[6][0][10][9] = _aB_I__0__PS__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[6][0][10][10] = _aB_I__0__PS__1___TwoPRep_S__0__PS__1___Ab__up_0;

libint2_build_eri[6][1][4][3] = _aB_I__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[6][1][4][4] = _aB_I__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[6][1][5][2] = _aB_I__0__H__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[6][1][5][3] = _aB_I__0__H__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[6][1][5][4] = _aB_I__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[6][1][5][5] = _aB_I__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[6][1][6][1] = _aB_I__0__I__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[6][1][6][2] = _aB_I__0__I__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[6][1][6][3] = _aB_I__0__I__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[6][1][6][4] = _aB_I__0__I__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[6][1][6][5] = _aB_I__0__I__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[6][1][6][6] = _aB_I__0__I__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[6][1][7][0] = _aB_I__0__K__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[6][1][7][1] = _aB_I__0__K__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[6][1][7][2] = _aB_I__0__K__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[6][1][7][3] = _aB_I__0__K__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[6][1][7][4] = _aB_I__0__K__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[6][1][7][5] = _aB_I__0__K__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[6][1][7][6] = _aB_I__0__K__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[6][1][7][7] = _aB_I__0__K__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[6][1][8][0] = _aB_I__0__L__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[6][1][8][1] = _aB_I__0__L__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[6][1][8][2] = _aB_I__0__L__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[6][1][8][3] = _aB_I__0__L__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[6][1][8][4] = _aB_I__0__L__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[6][1][8][5] = _aB_I__0__L__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[6][1][8][6] = _aB_I__0__L__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[6][1][8][7] = _aB_I__0__L__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[6][1][8][8] = _aB_I__0__L__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[6][1][9][0] = _aB_I__0__M__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[6][1][9][1] = _aB_I__0__M__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[6][1][9][2] = _aB_I__0__M__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[6][1][9][3] = _aB_I__0__M__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[6][1][9][4] = _aB_I__0__M__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[6][1][9][5] = _aB_I__0__M__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[6][1][9][6] = _aB_I__0__M__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[6][1][9][7] = _aB_I__0__M__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[6][1][9][8] = _aB_I__0__M__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[6][1][9][9] = _aB_I__0__M__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[6][1][10][0] = _aB_I__0__PS__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[6][1][10][1] = _aB_I__0__PS__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[6][1][10][2] = _aB_I__0__PS__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[6][1][10][3] = _aB_I__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[6][1][10][4] = _aB_I__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[6][1][10][5] = _aB_I__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[6][1][10][6] = _aB_I__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[6][1][10][7] = _aB_I__0__PS__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[6][1][10][8] = _aB_I__0__PS__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[6][1][10][9] = _aB_I__0__PS__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[6][1][10][10] = _aB_I__0__PS__1___TwoPRep_P__0__PS__1___Ab__up_0;

libint2_build_eri[6][2][4][4] = _aB_I__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[6][2][5][3] = _aB_I__0__H__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[6][2][5][4] = _aB_I__0__H__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[6][2][5][5] = _aB_I__0__H__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[6][2][6][2] = _aB_I__0__I__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[6][2][6][3] = _aB_I__0__I__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[6][2][6][4] = _aB_I__0__I__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[6][2][6][5] = _aB_I__0__I__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[6][2][6][6] = _aB_I__0__I__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[6][2][7][1] = _aB_I__0__K__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[6][2][7][2] = _aB_I__0__K__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[6][2][7][3] = _aB_I__0__K__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[6][2][7][4] = _aB_I__0__K__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[6][2][7][5] = _aB_I__0__K__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[6][2][7][6] = _aB_I__0__K__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[6][2][7][7] = _aB_I__0__K__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[6][2][8][0] = _aB_I__0__L__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[6][2][8][1] = _aB_I__0__L__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[6][2][8][2] = _aB_I__0__L__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[6][2][8][3] = _aB_I__0__L__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[6][2][8][4] = _aB_I__0__L__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[6][2][8][5] = _aB_I__0__L__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[6][2][8][6] = _aB_I__0__L__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[6][2][8][7] = _aB_I__0__L__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[6][2][8][8] = _aB_I__0__L__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[6][2][9][0] = _aB_I__0__M__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[6][2][9][1] = _aB_I__0__M__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[6][2][9][2] = _aB_I__0__M__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[6][2][9][3] = _aB_I__0__M__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[6][2][9][4] = _aB_I__0__M__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[6][2][9][5] = _aB_I__0__M__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[6][2][9][6] = _aB_I__0__M__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[6][2][9][7] = _aB_I__0__M__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[6][2][9][8] = _aB_I__0__M__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[6][2][9][9] = _aB_I__0__M__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[6][2][10][0] = _aB_I__0__PS__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[6][2][10][1] = _aB_I__0__PS__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[6][2][10][2] = _aB_I__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[6][2][10][3] = _aB_I__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[6][2][10][4] = _aB_I__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[6][2][10][5] = _aB_I__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[6][2][10][6] = _aB_I__0__PS__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[6][2][10][7] = _aB_I__0__PS__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[6][2][10][8] = _aB_I__0__PS__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[6][2][10][9] = _aB_I__0__PS__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[6][2][10][10] = _aB_I__0__PS__1___TwoPRep_D__0__PS__1___Ab__up_0;

libint2_build_eri[6][3][5][4] = _aB_I__0__H__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[6][3][5][5] = _aB_I__0__H__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[6][3][6][3] = _aB_I__0__I__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[6][3][6][4] = _aB_I__0__I__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[6][3][6][5] = _aB_I__0__I__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[6][3][6][6] = _aB_I__0__I__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[6][3][7][2] = _aB_I__0__K__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[6][3][7][3] = _aB_I__0__K__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[6][3][7][4] = _aB_I__0__K__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[6][3][7][5] = _aB_I__0__K__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[6][3][7][6] = _aB_I__0__K__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[6][3][7][7] = _aB_I__0__K__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[6][3][8][1] = _aB_I__0__L__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[6][3][8][2] = _aB_I__0__L__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[6][3][8][3] = _aB_I__0__L__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[6][3][8][4] = _aB_I__0__L__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[6][3][8][5] = _aB_I__0__L__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[6][3][8][6] = _aB_I__0__L__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[6][3][8][7] = _aB_I__0__L__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[6][3][8][8] = _aB_I__0__L__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[6][3][9][0] = _aB_I__0__M__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[6][3][9][1] = _aB_I__0__M__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[6][3][9][2] = _aB_I__0__M__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[6][3][9][3] = _aB_I__0__M__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[6][3][9][4] = _aB_I__0__M__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[6][3][9][5] = _aB_I__0__M__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[6][3][9][6] = _aB_I__0__M__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[6][3][9][7] = _aB_I__0__M__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[6][3][9][8] = _aB_I__0__M__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[6][3][9][9] = _aB_I__0__M__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[6][3][10][0] = _aB_I__0__PS__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[6][3][10][1] = _aB_I__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[6][3][10][2] = _aB_I__0__PS__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[6][3][10][3] = _aB_I__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[6][3][10][4] = _aB_I__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[6][3][10][5] = _aB_I__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[6][3][10][6] = _aB_I__0__PS__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[6][3][10][7] = _aB_I__0__PS__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[6][3][10][8] = _aB_I__0__PS__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[6][3][10][9] = _aB_I__0__PS__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[6][3][10][10] = _aB_I__0__PS__1___TwoPRep_F__0__PS__1___Ab__up_0;

libint2_build_eri[6][4][5][5] = _aB_I__0__H__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[6][4][6][4] = _aB_I__0__I__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[6][4][6][5] = _aB_I__0__I__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[6][4][6][6] = _aB_I__0__I__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[6][4][7][3] = _aB_I__0__K__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[6][4][7][4] = _aB_I__0__K__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[6][4][7][5] = _aB_I__0__K__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[6][4][7][6] = _aB_I__0__K__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[6][4][7][7] = _aB_I__0__K__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[6][4][8][2] = _aB_I__0__L__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[6][4][8][3] = _aB_I__0__L__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[6][4][8][4] = _aB_I__0__L__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[6][4][8][5] = _aB_I__0__L__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[6][4][8][6] = _aB_I__0__L__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[6][4][8][7] = _aB_I__0__L__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[6][4][8][8] = _aB_I__0__L__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[6][4][9][1] = _aB_I__0__M__1___TwoPRep_G__0__P__1___Ab__up_0;

libint2_build_eri[6][4][9][2] = _aB_I__0__M__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[6][4][9][3] = _aB_I__0__M__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[6][4][9][4] = _aB_I__0__M__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[6][4][9][5] = _aB_I__0__M__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[6][4][9][6] = _aB_I__0__M__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[6][4][9][7] = _aB_I__0__M__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[6][4][9][8] = _aB_I__0__M__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[6][4][9][9] = _aB_I__0__M__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[6][4][10][0] = _aB_I__0__PS__1___TwoPRep_G__0__S__1___Ab__up_0;

libint2_build_eri[6][4][10][1] = _aB_I__0__PS__1___TwoPRep_G__0__P__1___Ab__up_0;

libint2_build_eri[6][4][10][2] = _aB_I__0__PS__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[6][4][10][3] = _aB_I__0__PS__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[6][4][10][4] = _aB_I__0__PS__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[6][4][10][5] = _aB_I__0__PS__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[6][4][10][6] = _aB_I__0__PS__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[6][4][10][7] = _aB_I__0__PS__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[6][4][10][8] = _aB_I__0__PS__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[6][4][10][9] = _aB_I__0__PS__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[6][4][10][10] = _aB_I__0__PS__1___TwoPRep_G__0__PS__1___Ab__up_0;

libint2_build_eri[6][5][6][5] = _aB_I__0__I__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[6][5][6][6] = _aB_I__0__I__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[6][5][7][4] = _aB_I__0__K__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[6][5][7][5] = _aB_I__0__K__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[6][5][7][6] = _aB_I__0__K__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[6][5][7][7] = _aB_I__0__K__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[6][5][8][3] = _aB_I__0__L__1___TwoPRep_H__0__F__1___Ab__up_0;

libint2_build_eri[6][5][8][4] = _aB_I__0__L__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[6][5][8][5] = _aB_I__0__L__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[6][5][8][6] = _aB_I__0__L__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[6][5][8][7] = _aB_I__0__L__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[6][5][8][8] = _aB_I__0__L__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[6][5][9][2] = _aB_I__0__M__1___TwoPRep_H__0__D__1___Ab__up_0;

libint2_build_eri[6][5][9][3] = _aB_I__0__M__1___TwoPRep_H__0__F__1___Ab__up_0;

libint2_build_eri[6][5][9][4] = _aB_I__0__M__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[6][5][9][5] = _aB_I__0__M__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[6][5][9][6] = _aB_I__0__M__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[6][5][9][7] = _aB_I__0__M__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[6][5][9][8] = _aB_I__0__M__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[6][5][9][9] = _aB_I__0__M__1___TwoPRep_H__0__M__1___Ab__up_0;

libint2_build_eri[6][5][10][1] = _aB_I__0__PS__1___TwoPRep_H__0__P__1___Ab__up_0;

libint2_build_eri[6][5][10][2] = _aB_I__0__PS__1___TwoPRep_H__0__D__1___Ab__up_0;

libint2_build_eri[6][5][10][3] = _aB_I__0__PS__1___TwoPRep_H__0__F__1___Ab__up_0;

libint2_build_eri[6][5][10][4] = _aB_I__0__PS__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[6][5][10][5] = _aB_I__0__PS__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[6][5][10][6] = _aB_I__0__PS__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[6][5][10][7] = _aB_I__0__PS__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[6][5][10][8] = _aB_I__0__PS__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[6][5][10][9] = _aB_I__0__PS__1___TwoPRep_H__0__M__1___Ab__up_0;

libint2_build_eri[6][5][10][10] = _aB_I__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0;

libint2_build_eri[6][6][6][6] = _aB_I__0__I__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[6][6][7][5] = _aB_I__0__K__1___TwoPRep_I__0__H__1___Ab__up_0;

libint2_build_eri[6][6][7][6] = _aB_I__0__K__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[6][6][7][7] = _aB_I__0__K__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[6][6][8][4] = _aB_I__0__L__1___TwoPRep_I__0__G__1___Ab__up_0;

libint2_build_eri[6][6][8][5] = _aB_I__0__L__1___TwoPRep_I__0__H__1___Ab__up_0;

libint2_build_eri[6][6][8][6] = _aB_I__0__L__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[6][6][8][7] = _aB_I__0__L__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[6][6][8][8] = _aB_I__0__L__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[6][6][9][3] = _aB_I__0__M__1___TwoPRep_I__0__F__1___Ab__up_0;

libint2_build_eri[6][6][9][4] = _aB_I__0__M__1___TwoPRep_I__0__G__1___Ab__up_0;

libint2_build_eri[6][6][9][5] = _aB_I__0__M__1___TwoPRep_I__0__H__1___Ab__up_0;

libint2_build_eri[6][6][9][6] = _aB_I__0__M__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[6][6][9][7] = _aB_I__0__M__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[6][6][9][8] = _aB_I__0__M__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[6][6][9][9] = _aB_I__0__M__1___TwoPRep_I__0__M__1___Ab__up_0;

libint2_build_eri[6][6][10][2] = _aB_I__0__PS__1___TwoPRep_I__0__D__1___Ab__up_0;

libint2_build_eri[6][6][10][3] = _aB_I__0__PS__1___TwoPRep_I__0__F__1___Ab__up_0;

libint2_build_eri[6][6][10][4] = _aB_I__0__PS__1___TwoPRep_I__0__G__1___Ab__up_0;

libint2_build_eri[6][6][10][5] = _aB_I__0__PS__1___TwoPRep_I__0__H__1___Ab__up_0;

libint2_build_eri[6][6][10][6] = _aB_I__0__PS__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[6][6][10][7] = _aB_I__0__PS__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[6][6][10][8] = _aB_I__0__PS__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[6][6][10][9] = _aB_I__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0;

libint2_build_eri[6][6][10][10] = _aB_I__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0;

libint2_build_eri[7][0][4][3] = _aB_K__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[7][0][4][4] = _aB_K__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[7][0][5][2] = _aB_K__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[7][0][5][3] = _aB_K__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[7][0][5][4] = _aB_K__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[7][0][5][5] = _aB_K__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[7][0][6][1] = _aB_K__0__I__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[7][0][6][2] = _aB_K__0__I__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[7][0][6][3] = _aB_K__0__I__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[7][0][6][4] = _aB_K__0__I__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[7][0][6][5] = _aB_K__0__I__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[7][0][6][6] = _aB_K__0__I__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[7][0][7][0] = _aB_K__0__K__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[7][0][7][1] = _aB_K__0__K__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[7][0][7][2] = _aB_K__0__K__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[7][0][7][3] = _aB_K__0__K__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[7][0][7][4] = _aB_K__0__K__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[7][0][7][5] = _aB_K__0__K__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[7][0][7][6] = _aB_K__0__K__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[7][0][7][7] = _aB_K__0__K__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[7][0][8][0] = _aB_K__0__L__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[7][0][8][1] = _aB_K__0__L__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[7][0][8][2] = _aB_K__0__L__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[7][0][8][3] = _aB_K__0__L__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[7][0][8][4] = _aB_K__0__L__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[7][0][8][5] = _aB_K__0__L__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[7][0][8][6] = _aB_K__0__L__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[7][0][8][7] = _aB_K__0__L__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[7][0][8][8] = _aB_K__0__L__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[7][0][9][0] = _aB_K__0__M__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[7][0][9][1] = _aB_K__0__M__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[7][0][9][2] = _aB_K__0__M__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[7][0][9][3] = _aB_K__0__M__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[7][0][9][4] = _aB_K__0__M__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[7][0][9][5] = _aB_K__0__M__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[7][0][9][6] = _aB_K__0__M__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[7][0][9][7] = _aB_K__0__M__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[7][0][9][8] = _aB_K__0__M__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[7][0][9][9] = _aB_K__0__M__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[7][0][10][0] = _aB_K__0__PS__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[7][0][10][1] = _aB_K__0__PS__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[7][0][10][2] = _aB_K__0__PS__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[7][0][10][3] = _aB_K__0__PS__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[7][0][10][4] = _aB_K__0__PS__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[7][0][10][5] = _aB_K__0__PS__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[7][0][10][6] = _aB_K__0__PS__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[7][0][10][7] = _aB_K__0__PS__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[7][0][10][8] = _aB_K__0__PS__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[7][0][10][9] = _aB_K__0__PS__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[7][0][10][10] = _aB_K__0__PS__1___TwoPRep_S__0__PS__1___Ab__up_0;

libint2_build_eri[7][1][4][4] = _aB_K__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[7][1][5][3] = _aB_K__0__H__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[7][1][5][4] = _aB_K__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[7][1][5][5] = _aB_K__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[7][1][6][2] = _aB_K__0__I__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[7][1][6][3] = _aB_K__0__I__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[7][1][6][4] = _aB_K__0__I__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[7][1][6][5] = _aB_K__0__I__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[7][1][6][6] = _aB_K__0__I__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[7][1][7][1] = _aB_K__0__K__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[7][1][7][2] = _aB_K__0__K__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[7][1][7][3] = _aB_K__0__K__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[7][1][7][4] = _aB_K__0__K__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[7][1][7][5] = _aB_K__0__K__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[7][1][7][6] = _aB_K__0__K__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[7][1][7][7] = _aB_K__0__K__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[7][1][8][0] = _aB_K__0__L__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[7][1][8][1] = _aB_K__0__L__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[7][1][8][2] = _aB_K__0__L__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[7][1][8][3] = _aB_K__0__L__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[7][1][8][4] = _aB_K__0__L__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[7][1][8][5] = _aB_K__0__L__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[7][1][8][6] = _aB_K__0__L__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[7][1][8][7] = _aB_K__0__L__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[7][1][8][8] = _aB_K__0__L__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[7][1][9][0] = _aB_K__0__M__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[7][1][9][1] = _aB_K__0__M__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[7][1][9][2] = _aB_K__0__M__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[7][1][9][3] = _aB_K__0__M__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[7][1][9][4] = _aB_K__0__M__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[7][1][9][5] = _aB_K__0__M__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[7][1][9][6] = _aB_K__0__M__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[7][1][9][7] = _aB_K__0__M__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[7][1][9][8] = _aB_K__0__M__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[7][1][9][9] = _aB_K__0__M__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[7][1][10][0] = _aB_K__0__PS__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[7][1][10][1] = _aB_K__0__PS__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[7][1][10][2] = _aB_K__0__PS__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[7][1][10][3] = _aB_K__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[7][1][10][4] = _aB_K__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[7][1][10][5] = _aB_K__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[7][1][10][6] = _aB_K__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[7][1][10][7] = _aB_K__0__PS__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[7][1][10][8] = _aB_K__0__PS__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[7][1][10][9] = _aB_K__0__PS__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[7][1][10][10] = _aB_K__0__PS__1___TwoPRep_P__0__PS__1___Ab__up_0;

libint2_build_eri[7][2][5][4] = _aB_K__0__H__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[7][2][5][5] = _aB_K__0__H__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[7][2][6][3] = _aB_K__0__I__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[7][2][6][4] = _aB_K__0__I__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[7][2][6][5] = _aB_K__0__I__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[7][2][6][6] = _aB_K__0__I__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[7][2][7][2] = _aB_K__0__K__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[7][2][7][3] = _aB_K__0__K__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[7][2][7][4] = _aB_K__0__K__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[7][2][7][5] = _aB_K__0__K__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[7][2][7][6] = _aB_K__0__K__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[7][2][7][7] = _aB_K__0__K__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[7][2][8][1] = _aB_K__0__L__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[7][2][8][2] = _aB_K__0__L__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[7][2][8][3] = _aB_K__0__L__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[7][2][8][4] = _aB_K__0__L__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[7][2][8][5] = _aB_K__0__L__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[7][2][8][6] = _aB_K__0__L__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[7][2][8][7] = _aB_K__0__L__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[7][2][8][8] = _aB_K__0__L__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[7][2][9][0] = _aB_K__0__M__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[7][2][9][1] = _aB_K__0__M__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[7][2][9][2] = _aB_K__0__M__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[7][2][9][3] = _aB_K__0__M__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[7][2][9][4] = _aB_K__0__M__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[7][2][9][5] = _aB_K__0__M__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[7][2][9][6] = _aB_K__0__M__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[7][2][9][7] = _aB_K__0__M__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[7][2][9][8] = _aB_K__0__M__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[7][2][9][9] = _aB_K__0__M__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[7][2][10][0] = _aB_K__0__PS__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[7][2][10][1] = _aB_K__0__PS__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[7][2][10][2] = _aB_K__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[7][2][10][3] = _aB_K__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[7][2][10][4] = _aB_K__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[7][2][10][5] = _aB_K__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[7][2][10][6] = _aB_K__0__PS__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[7][2][10][7] = _aB_K__0__PS__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[7][2][10][8] = _aB_K__0__PS__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[7][2][10][9] = _aB_K__0__PS__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[7][2][10][10] = _aB_K__0__PS__1___TwoPRep_D__0__PS__1___Ab__up_0;

libint2_build_eri[7][3][5][5] = _aB_K__0__H__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[7][3][6][4] = _aB_K__0__I__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[7][3][6][5] = _aB_K__0__I__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[7][3][6][6] = _aB_K__0__I__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[7][3][7][3] = _aB_K__0__K__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[7][3][7][4] = _aB_K__0__K__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[7][3][7][5] = _aB_K__0__K__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[7][3][7][6] = _aB_K__0__K__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[7][3][7][7] = _aB_K__0__K__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[7][3][8][2] = _aB_K__0__L__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[7][3][8][3] = _aB_K__0__L__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[7][3][8][4] = _aB_K__0__L__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[7][3][8][5] = _aB_K__0__L__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[7][3][8][6] = _aB_K__0__L__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[7][3][8][7] = _aB_K__0__L__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[7][3][8][8] = _aB_K__0__L__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[7][3][9][1] = _aB_K__0__M__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[7][3][9][2] = _aB_K__0__M__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[7][3][9][3] = _aB_K__0__M__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[7][3][9][4] = _aB_K__0__M__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[7][3][9][5] = _aB_K__0__M__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[7][3][9][6] = _aB_K__0__M__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[7][3][9][7] = _aB_K__0__M__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[7][3][9][8] = _aB_K__0__M__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[7][3][9][9] = _aB_K__0__M__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[7][3][10][0] = _aB_K__0__PS__1___TwoPRep_F__0__S__1___Ab__up_0;

libint2_build_eri[7][3][10][1] = _aB_K__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[7][3][10][2] = _aB_K__0__PS__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[7][3][10][3] = _aB_K__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[7][3][10][4] = _aB_K__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[7][3][10][5] = _aB_K__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[7][3][10][6] = _aB_K__0__PS__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[7][3][10][7] = _aB_K__0__PS__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[7][3][10][8] = _aB_K__0__PS__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[7][3][10][9] = _aB_K__0__PS__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[7][3][10][10] = _aB_K__0__PS__1___TwoPRep_F__0__PS__1___Ab__up_0;

libint2_build_eri[7][4][6][5] = _aB_K__0__I__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[7][4][6][6] = _aB_K__0__I__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[7][4][7][4] = _aB_K__0__K__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[7][4][7][5] = _aB_K__0__K__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[7][4][7][6] = _aB_K__0__K__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[7][4][7][7] = _aB_K__0__K__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[7][4][8][3] = _aB_K__0__L__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[7][4][8][4] = _aB_K__0__L__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[7][4][8][5] = _aB_K__0__L__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[7][4][8][6] = _aB_K__0__L__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[7][4][8][7] = _aB_K__0__L__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[7][4][8][8] = _aB_K__0__L__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[7][4][9][2] = _aB_K__0__M__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[7][4][9][3] = _aB_K__0__M__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[7][4][9][4] = _aB_K__0__M__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[7][4][9][5] = _aB_K__0__M__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[7][4][9][6] = _aB_K__0__M__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[7][4][9][7] = _aB_K__0__M__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[7][4][9][8] = _aB_K__0__M__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[7][4][9][9] = _aB_K__0__M__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[7][4][10][1] = _aB_K__0__PS__1___TwoPRep_G__0__P__1___Ab__up_0;

libint2_build_eri[7][4][10][2] = _aB_K__0__PS__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[7][4][10][3] = _aB_K__0__PS__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[7][4][10][4] = _aB_K__0__PS__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[7][4][10][5] = _aB_K__0__PS__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[7][4][10][6] = _aB_K__0__PS__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[7][4][10][7] = _aB_K__0__PS__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[7][4][10][8] = _aB_K__0__PS__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[7][4][10][9] = _aB_K__0__PS__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[7][4][10][10] = _aB_K__0__PS__1___TwoPRep_G__0__PS__1___Ab__up_0;

libint2_build_eri[7][5][6][6] = _aB_K__0__I__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[7][5][7][5] = _aB_K__0__K__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[7][5][7][6] = _aB_K__0__K__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[7][5][7][7] = _aB_K__0__K__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[7][5][8][4] = _aB_K__0__L__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[7][5][8][5] = _aB_K__0__L__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[7][5][8][6] = _aB_K__0__L__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[7][5][8][7] = _aB_K__0__L__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[7][5][8][8] = _aB_K__0__L__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[7][5][9][3] = _aB_K__0__M__1___TwoPRep_H__0__F__1___Ab__up_0;

libint2_build_eri[7][5][9][4] = _aB_K__0__M__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[7][5][9][5] = _aB_K__0__M__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[7][5][9][6] = _aB_K__0__M__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[7][5][9][7] = _aB_K__0__M__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[7][5][9][8] = _aB_K__0__M__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[7][5][9][9] = _aB_K__0__M__1___TwoPRep_H__0__M__1___Ab__up_0;

libint2_build_eri[7][5][10][2] = _aB_K__0__PS__1___TwoPRep_H__0__D__1___Ab__up_0;

libint2_build_eri[7][5][10][3] = _aB_K__0__PS__1___TwoPRep_H__0__F__1___Ab__up_0;

libint2_build_eri[7][5][10][4] = _aB_K__0__PS__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[7][5][10][5] = _aB_K__0__PS__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[7][5][10][6] = _aB_K__0__PS__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[7][5][10][7] = _aB_K__0__PS__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[7][5][10][8] = _aB_K__0__PS__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[7][5][10][9] = _aB_K__0__PS__1___TwoPRep_H__0__M__1___Ab__up_0;

libint2_build_eri[7][5][10][10] = _aB_K__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0;

libint2_build_eri[7][6][7][6] = _aB_K__0__K__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[7][6][7][7] = _aB_K__0__K__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[7][6][8][5] = _aB_K__0__L__1___TwoPRep_I__0__H__1___Ab__up_0;

libint2_build_eri[7][6][8][6] = _aB_K__0__L__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[7][6][8][7] = _aB_K__0__L__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[7][6][8][8] = _aB_K__0__L__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[7][6][9][4] = _aB_K__0__M__1___TwoPRep_I__0__G__1___Ab__up_0;

libint2_build_eri[7][6][9][5] = _aB_K__0__M__1___TwoPRep_I__0__H__1___Ab__up_0;

libint2_build_eri[7][6][9][6] = _aB_K__0__M__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[7][6][9][7] = _aB_K__0__M__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[7][6][9][8] = _aB_K__0__M__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[7][6][9][9] = _aB_K__0__M__1___TwoPRep_I__0__M__1___Ab__up_0;

libint2_build_eri[7][6][10][3] = _aB_K__0__PS__1___TwoPRep_I__0__F__1___Ab__up_0;

libint2_build_eri[7][6][10][4] = _aB_K__0__PS__1___TwoPRep_I__0__G__1___Ab__up_0;

libint2_build_eri[7][6][10][5] = _aB_K__0__PS__1___TwoPRep_I__0__H__1___Ab__up_0;

libint2_build_eri[7][6][10][6] = _aB_K__0__PS__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[7][6][10][7] = _aB_K__0__PS__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[7][6][10][8] = _aB_K__0__PS__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[7][6][10][9] = _aB_K__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0;

libint2_build_eri[7][6][10][10] = _aB_K__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0;

libint2_build_eri[7][7][7][7] = _aB_K__0__K__1___TwoPRep_K__0__K__1___Ab__up_0;

libint2_build_eri[7][7][8][6] = _aB_K__0__L__1___TwoPRep_K__0__I__1___Ab__up_0;

libint2_build_eri[7][7][8][7] = _aB_K__0__L__1___TwoPRep_K__0__K__1___Ab__up_0;

libint2_build_eri[7][7][8][8] = _aB_K__0__L__1___TwoPRep_K__0__L__1___Ab__up_0;

libint2_build_eri[7][7][9][5] = _aB_K__0__M__1___TwoPRep_K__0__H__1___Ab__up_0;

libint2_build_eri[7][7][9][6] = _aB_K__0__M__1___TwoPRep_K__0__I__1___Ab__up_0;

libint2_build_eri[7][7][9][7] = _aB_K__0__M__1___TwoPRep_K__0__K__1___Ab__up_0;

libint2_build_eri[7][7][9][8] = _aB_K__0__M__1___TwoPRep_K__0__L__1___Ab__up_0;

libint2_build_eri[7][7][9][9] = _aB_K__0__M__1___TwoPRep_K__0__M__1___Ab__up_0;

libint2_build_eri[7][7][10][4] = _aB_K__0__PS__1___TwoPRep_K__0__G__1___Ab__up_0;

libint2_build_eri[7][7][10][5] = _aB_K__0__PS__1___TwoPRep_K__0__H__1___Ab__up_0;

libint2_build_eri[7][7][10][6] = _aB_K__0__PS__1___TwoPRep_K__0__I__1___Ab__up_0;

libint2_build_eri[7][7][10][7] = _aB_K__0__PS__1___TwoPRep_K__0__K__1___Ab__up_0;

libint2_build_eri[7][7][10][8] = _aB_K__0__PS__1___TwoPRep_K__0__L__1___Ab__up_0;

libint2_build_eri[7][7][10][9] = _aB_K__0__PS__1___TwoPRep_K__0__M__1___Ab__up_0;

libint2_build_eri[7][7][10][10] = _aB_K__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0;

libint2_build_eri[8][0][4][4] = _aB_L__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[8][0][5][3] = _aB_L__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[8][0][5][4] = _aB_L__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[8][0][5][5] = _aB_L__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[8][0][6][2] = _aB_L__0__I__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[8][0][6][3] = _aB_L__0__I__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[8][0][6][4] = _aB_L__0__I__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[8][0][6][5] = _aB_L__0__I__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[8][0][6][6] = _aB_L__0__I__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[8][0][7][1] = _aB_L__0__K__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[8][0][7][2] = _aB_L__0__K__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[8][0][7][3] = _aB_L__0__K__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[8][0][7][4] = _aB_L__0__K__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[8][0][7][5] = _aB_L__0__K__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[8][0][7][6] = _aB_L__0__K__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[8][0][7][7] = _aB_L__0__K__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[8][0][8][0] = _aB_L__0__L__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[8][0][8][1] = _aB_L__0__L__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[8][0][8][2] = _aB_L__0__L__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[8][0][8][3] = _aB_L__0__L__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[8][0][8][4] = _aB_L__0__L__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[8][0][8][5] = _aB_L__0__L__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[8][0][8][6] = _aB_L__0__L__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[8][0][8][7] = _aB_L__0__L__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[8][0][8][8] = _aB_L__0__L__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[8][0][9][0] = _aB_L__0__M__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[8][0][9][1] = _aB_L__0__M__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[8][0][9][2] = _aB_L__0__M__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[8][0][9][3] = _aB_L__0__M__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[8][0][9][4] = _aB_L__0__M__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[8][0][9][5] = _aB_L__0__M__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[8][0][9][6] = _aB_L__0__M__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[8][0][9][7] = _aB_L__0__M__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[8][0][9][8] = _aB_L__0__M__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[8][0][9][9] = _aB_L__0__M__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[8][0][10][0] = _aB_L__0__PS__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[8][0][10][1] = _aB_L__0__PS__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[8][0][10][2] = _aB_L__0__PS__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[8][0][10][3] = _aB_L__0__PS__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[8][0][10][4] = _aB_L__0__PS__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[8][0][10][5] = _aB_L__0__PS__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[8][0][10][6] = _aB_L__0__PS__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[8][0][10][7] = _aB_L__0__PS__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[8][0][10][8] = _aB_L__0__PS__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[8][0][10][9] = _aB_L__0__PS__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[8][0][10][10] = _aB_L__0__PS__1___TwoPRep_S__0__PS__1___Ab__up_0;

libint2_build_eri[8][1][5][4] = _aB_L__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[8][1][5][5] = _aB_L__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[8][1][6][3] = _aB_L__0__I__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[8][1][6][4] = _aB_L__0__I__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[8][1][6][5] = _aB_L__0__I__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[8][1][6][6] = _aB_L__0__I__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[8][1][7][2] = _aB_L__0__K__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[8][1][7][3] = _aB_L__0__K__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[8][1][7][4] = _aB_L__0__K__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[8][1][7][5] = _aB_L__0__K__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[8][1][7][6] = _aB_L__0__K__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[8][1][7][7] = _aB_L__0__K__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[8][1][8][1] = _aB_L__0__L__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[8][1][8][2] = _aB_L__0__L__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[8][1][8][3] = _aB_L__0__L__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[8][1][8][4] = _aB_L__0__L__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[8][1][8][5] = _aB_L__0__L__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[8][1][8][6] = _aB_L__0__L__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[8][1][8][7] = _aB_L__0__L__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[8][1][8][8] = _aB_L__0__L__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[8][1][9][0] = _aB_L__0__M__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[8][1][9][1] = _aB_L__0__M__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[8][1][9][2] = _aB_L__0__M__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[8][1][9][3] = _aB_L__0__M__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[8][1][9][4] = _aB_L__0__M__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[8][1][9][5] = _aB_L__0__M__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[8][1][9][6] = _aB_L__0__M__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[8][1][9][7] = _aB_L__0__M__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[8][1][9][8] = _aB_L__0__M__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[8][1][9][9] = _aB_L__0__M__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[8][1][10][0] = _aB_L__0__PS__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[8][1][10][1] = _aB_L__0__PS__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[8][1][10][2] = _aB_L__0__PS__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[8][1][10][3] = _aB_L__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[8][1][10][4] = _aB_L__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[8][1][10][5] = _aB_L__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[8][1][10][6] = _aB_L__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[8][1][10][7] = _aB_L__0__PS__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[8][1][10][8] = _aB_L__0__PS__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[8][1][10][9] = _aB_L__0__PS__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[8][1][10][10] = _aB_L__0__PS__1___TwoPRep_P__0__PS__1___Ab__up_0;

libint2_build_eri[8][2][5][5] = _aB_L__0__H__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[8][2][6][4] = _aB_L__0__I__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[8][2][6][5] = _aB_L__0__I__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[8][2][6][6] = _aB_L__0__I__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[8][2][7][3] = _aB_L__0__K__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[8][2][7][4] = _aB_L__0__K__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[8][2][7][5] = _aB_L__0__K__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[8][2][7][6] = _aB_L__0__K__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[8][2][7][7] = _aB_L__0__K__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[8][2][8][2] = _aB_L__0__L__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[8][2][8][3] = _aB_L__0__L__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[8][2][8][4] = _aB_L__0__L__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[8][2][8][5] = _aB_L__0__L__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[8][2][8][6] = _aB_L__0__L__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[8][2][8][7] = _aB_L__0__L__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[8][2][8][8] = _aB_L__0__L__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[8][2][9][1] = _aB_L__0__M__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[8][2][9][2] = _aB_L__0__M__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[8][2][9][3] = _aB_L__0__M__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[8][2][9][4] = _aB_L__0__M__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[8][2][9][5] = _aB_L__0__M__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[8][2][9][6] = _aB_L__0__M__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[8][2][9][7] = _aB_L__0__M__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[8][2][9][8] = _aB_L__0__M__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[8][2][9][9] = _aB_L__0__M__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[8][2][10][0] = _aB_L__0__PS__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[8][2][10][1] = _aB_L__0__PS__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[8][2][10][2] = _aB_L__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[8][2][10][3] = _aB_L__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[8][2][10][4] = _aB_L__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[8][2][10][5] = _aB_L__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[8][2][10][6] = _aB_L__0__PS__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[8][2][10][7] = _aB_L__0__PS__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[8][2][10][8] = _aB_L__0__PS__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[8][2][10][9] = _aB_L__0__PS__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[8][2][10][10] = _aB_L__0__PS__1___TwoPRep_D__0__PS__1___Ab__up_0;

libint2_build_eri[8][3][6][5] = _aB_L__0__I__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[8][3][6][6] = _aB_L__0__I__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[8][3][7][4] = _aB_L__0__K__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[8][3][7][5] = _aB_L__0__K__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[8][3][7][6] = _aB_L__0__K__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[8][3][7][7] = _aB_L__0__K__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[8][3][8][3] = _aB_L__0__L__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[8][3][8][4] = _aB_L__0__L__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[8][3][8][5] = _aB_L__0__L__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[8][3][8][6] = _aB_L__0__L__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[8][3][8][7] = _aB_L__0__L__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[8][3][8][8] = _aB_L__0__L__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[8][3][9][2] = _aB_L__0__M__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[8][3][9][3] = _aB_L__0__M__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[8][3][9][4] = _aB_L__0__M__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[8][3][9][5] = _aB_L__0__M__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[8][3][9][6] = _aB_L__0__M__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[8][3][9][7] = _aB_L__0__M__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[8][3][9][8] = _aB_L__0__M__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[8][3][9][9] = _aB_L__0__M__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[8][3][10][1] = _aB_L__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[8][3][10][2] = _aB_L__0__PS__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[8][3][10][3] = _aB_L__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[8][3][10][4] = _aB_L__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[8][3][10][5] = _aB_L__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[8][3][10][6] = _aB_L__0__PS__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[8][3][10][7] = _aB_L__0__PS__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[8][3][10][8] = _aB_L__0__PS__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[8][3][10][9] = _aB_L__0__PS__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[8][3][10][10] = _aB_L__0__PS__1___TwoPRep_F__0__PS__1___Ab__up_0;

libint2_build_eri[8][4][6][6] = _aB_L__0__I__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[8][4][7][5] = _aB_L__0__K__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[8][4][7][6] = _aB_L__0__K__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[8][4][7][7] = _aB_L__0__K__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[8][4][8][4] = _aB_L__0__L__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[8][4][8][5] = _aB_L__0__L__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[8][4][8][6] = _aB_L__0__L__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[8][4][8][7] = _aB_L__0__L__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[8][4][8][8] = _aB_L__0__L__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[8][4][9][3] = _aB_L__0__M__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[8][4][9][4] = _aB_L__0__M__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[8][4][9][5] = _aB_L__0__M__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[8][4][9][6] = _aB_L__0__M__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[8][4][9][7] = _aB_L__0__M__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[8][4][9][8] = _aB_L__0__M__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[8][4][9][9] = _aB_L__0__M__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[8][4][10][2] = _aB_L__0__PS__1___TwoPRep_G__0__D__1___Ab__up_0;

libint2_build_eri[8][4][10][3] = _aB_L__0__PS__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[8][4][10][4] = _aB_L__0__PS__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[8][4][10][5] = _aB_L__0__PS__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[8][4][10][6] = _aB_L__0__PS__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[8][4][10][7] = _aB_L__0__PS__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[8][4][10][8] = _aB_L__0__PS__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[8][4][10][9] = _aB_L__0__PS__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[8][4][10][10] = _aB_L__0__PS__1___TwoPRep_G__0__PS__1___Ab__up_0;

libint2_build_eri[8][5][7][6] = _aB_L__0__K__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[8][5][7][7] = _aB_L__0__K__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[8][5][8][5] = _aB_L__0__L__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[8][5][8][6] = _aB_L__0__L__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[8][5][8][7] = _aB_L__0__L__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[8][5][8][8] = _aB_L__0__L__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[8][5][9][4] = _aB_L__0__M__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[8][5][9][5] = _aB_L__0__M__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[8][5][9][6] = _aB_L__0__M__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[8][5][9][7] = _aB_L__0__M__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[8][5][9][8] = _aB_L__0__M__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[8][5][9][9] = _aB_L__0__M__1___TwoPRep_H__0__M__1___Ab__up_0;

libint2_build_eri[8][5][10][3] = _aB_L__0__PS__1___TwoPRep_H__0__F__1___Ab__up_0;

libint2_build_eri[8][5][10][4] = _aB_L__0__PS__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[8][5][10][5] = _aB_L__0__PS__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[8][5][10][6] = _aB_L__0__PS__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[8][5][10][7] = _aB_L__0__PS__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[8][5][10][8] = _aB_L__0__PS__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[8][5][10][9] = _aB_L__0__PS__1___TwoPRep_H__0__M__1___Ab__up_0;

libint2_build_eri[8][5][10][10] = _aB_L__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0;

libint2_build_eri[8][6][7][7] = _aB_L__0__K__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[8][6][8][6] = _aB_L__0__L__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[8][6][8][7] = _aB_L__0__L__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[8][6][8][8] = _aB_L__0__L__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[8][6][9][5] = _aB_L__0__M__1___TwoPRep_I__0__H__1___Ab__up_0;

libint2_build_eri[8][6][9][6] = _aB_L__0__M__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[8][6][9][7] = _aB_L__0__M__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[8][6][9][8] = _aB_L__0__M__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[8][6][9][9] = _aB_L__0__M__1___TwoPRep_I__0__M__1___Ab__up_0;

libint2_build_eri[8][6][10][4] = _aB_L__0__PS__1___TwoPRep_I__0__G__1___Ab__up_0;

libint2_build_eri[8][6][10][5] = _aB_L__0__PS__1___TwoPRep_I__0__H__1___Ab__up_0;

libint2_build_eri[8][6][10][6] = _aB_L__0__PS__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[8][6][10][7] = _aB_L__0__PS__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[8][6][10][8] = _aB_L__0__PS__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[8][6][10][9] = _aB_L__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0;

libint2_build_eri[8][6][10][10] = _aB_L__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0;

libint2_build_eri[8][7][8][7] = _aB_L__0__L__1___TwoPRep_K__0__K__1___Ab__up_0;

libint2_build_eri[8][7][8][8] = _aB_L__0__L__1___TwoPRep_K__0__L__1___Ab__up_0;

libint2_build_eri[8][7][9][6] = _aB_L__0__M__1___TwoPRep_K__0__I__1___Ab__up_0;

libint2_build_eri[8][7][9][7] = _aB_L__0__M__1___TwoPRep_K__0__K__1___Ab__up_0;

libint2_build_eri[8][7][9][8] = _aB_L__0__M__1___TwoPRep_K__0__L__1___Ab__up_0;

libint2_build_eri[8][7][9][9] = _aB_L__0__M__1___TwoPRep_K__0__M__1___Ab__up_0;

libint2_build_eri[8][7][10][5] = _aB_L__0__PS__1___TwoPRep_K__0__H__1___Ab__up_0;

libint2_build_eri[8][7][10][6] = _aB_L__0__PS__1___TwoPRep_K__0__I__1___Ab__up_0;

libint2_build_eri[8][7][10][7] = _aB_L__0__PS__1___TwoPRep_K__0__K__1___Ab__up_0;

libint2_build_eri[8][7][10][8] = _aB_L__0__PS__1___TwoPRep_K__0__L__1___Ab__up_0;

libint2_build_eri[8][7][10][9] = _aB_L__0__PS__1___TwoPRep_K__0__M__1___Ab__up_0;

libint2_build_eri[8][7][10][10] = _aB_L__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0;

libint2_build_eri[8][8][8][8] = _aB_L__0__L__1___TwoPRep_L__0__L__1___Ab__up_0;

libint2_build_eri[8][8][9][7] = _aB_L__0__M__1___TwoPRep_L__0__K__1___Ab__up_0;

libint2_build_eri[8][8][9][8] = _aB_L__0__M__1___TwoPRep_L__0__L__1___Ab__up_0;

libint2_build_eri[8][8][9][9] = _aB_L__0__M__1___TwoPRep_L__0__M__1___Ab__up_0;

libint2_build_eri[8][8][10][6] = _aB_L__0__PS__1___TwoPRep_L__0__I__1___Ab__up_0;

libint2_build_eri[8][8][10][7] = _aB_L__0__PS__1___TwoPRep_L__0__K__1___Ab__up_0;

libint2_build_eri[8][8][10][8] = _aB_L__0__PS__1___TwoPRep_L__0__L__1___Ab__up_0;

libint2_build_eri[8][8][10][9] = _aB_L__0__PS__1___TwoPRep_L__0__M__1___Ab__up_0;

libint2_build_eri[8][8][10][10] = _aB_L__0__PS__1___TwoPRep_L__0__PS__1___Ab__up_0;

libint2_build_eri[9][0][5][4] = _aB_M__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[9][0][5][5] = _aB_M__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[9][0][6][3] = _aB_M__0__I__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[9][0][6][4] = _aB_M__0__I__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[9][0][6][5] = _aB_M__0__I__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[9][0][6][6] = _aB_M__0__I__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[9][0][7][2] = _aB_M__0__K__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[9][0][7][3] = _aB_M__0__K__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[9][0][7][4] = _aB_M__0__K__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[9][0][7][5] = _aB_M__0__K__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[9][0][7][6] = _aB_M__0__K__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[9][0][7][7] = _aB_M__0__K__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[9][0][8][1] = _aB_M__0__L__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[9][0][8][2] = _aB_M__0__L__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[9][0][8][3] = _aB_M__0__L__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[9][0][8][4] = _aB_M__0__L__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[9][0][8][5] = _aB_M__0__L__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[9][0][8][6] = _aB_M__0__L__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[9][0][8][7] = _aB_M__0__L__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[9][0][8][8] = _aB_M__0__L__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[9][0][9][0] = _aB_M__0__M__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[9][0][9][1] = _aB_M__0__M__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[9][0][9][2] = _aB_M__0__M__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[9][0][9][3] = _aB_M__0__M__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[9][0][9][4] = _aB_M__0__M__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[9][0][9][5] = _aB_M__0__M__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[9][0][9][6] = _aB_M__0__M__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[9][0][9][7] = _aB_M__0__M__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[9][0][9][8] = _aB_M__0__M__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[9][0][9][9] = _aB_M__0__M__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[9][0][10][0] = _aB_M__0__PS__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[9][0][10][1] = _aB_M__0__PS__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[9][0][10][2] = _aB_M__0__PS__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[9][0][10][3] = _aB_M__0__PS__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[9][0][10][4] = _aB_M__0__PS__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[9][0][10][5] = _aB_M__0__PS__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[9][0][10][6] = _aB_M__0__PS__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[9][0][10][7] = _aB_M__0__PS__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[9][0][10][8] = _aB_M__0__PS__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[9][0][10][9] = _aB_M__0__PS__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[9][0][10][10] = _aB_M__0__PS__1___TwoPRep_S__0__PS__1___Ab__up_0;

libint2_build_eri[9][1][5][5] = _aB_M__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[9][1][6][4] = _aB_M__0__I__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[9][1][6][5] = _aB_M__0__I__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[9][1][6][6] = _aB_M__0__I__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[9][1][7][3] = _aB_M__0__K__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[9][1][7][4] = _aB_M__0__K__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[9][1][7][5] = _aB_M__0__K__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[9][1][7][6] = _aB_M__0__K__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[9][1][7][7] = _aB_M__0__K__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[9][1][8][2] = _aB_M__0__L__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[9][1][8][3] = _aB_M__0__L__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[9][1][8][4] = _aB_M__0__L__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[9][1][8][5] = _aB_M__0__L__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[9][1][8][6] = _aB_M__0__L__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[9][1][8][7] = _aB_M__0__L__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[9][1][8][8] = _aB_M__0__L__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[9][1][9][1] = _aB_M__0__M__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[9][1][9][2] = _aB_M__0__M__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[9][1][9][3] = _aB_M__0__M__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[9][1][9][4] = _aB_M__0__M__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[9][1][9][5] = _aB_M__0__M__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[9][1][9][6] = _aB_M__0__M__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[9][1][9][7] = _aB_M__0__M__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[9][1][9][8] = _aB_M__0__M__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[9][1][9][9] = _aB_M__0__M__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[9][1][10][0] = _aB_M__0__PS__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[9][1][10][1] = _aB_M__0__PS__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[9][1][10][2] = _aB_M__0__PS__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[9][1][10][3] = _aB_M__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[9][1][10][4] = _aB_M__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[9][1][10][5] = _aB_M__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[9][1][10][6] = _aB_M__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[9][1][10][7] = _aB_M__0__PS__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[9][1][10][8] = _aB_M__0__PS__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[9][1][10][9] = _aB_M__0__PS__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[9][1][10][10] = _aB_M__0__PS__1___TwoPRep_P__0__PS__1___Ab__up_0;

libint2_build_eri[9][2][6][5] = _aB_M__0__I__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[9][2][6][6] = _aB_M__0__I__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[9][2][7][4] = _aB_M__0__K__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[9][2][7][5] = _aB_M__0__K__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[9][2][7][6] = _aB_M__0__K__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[9][2][7][7] = _aB_M__0__K__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[9][2][8][3] = _aB_M__0__L__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[9][2][8][4] = _aB_M__0__L__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[9][2][8][5] = _aB_M__0__L__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[9][2][8][6] = _aB_M__0__L__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[9][2][8][7] = _aB_M__0__L__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[9][2][8][8] = _aB_M__0__L__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[9][2][9][2] = _aB_M__0__M__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[9][2][9][3] = _aB_M__0__M__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[9][2][9][4] = _aB_M__0__M__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[9][2][9][5] = _aB_M__0__M__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[9][2][9][6] = _aB_M__0__M__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[9][2][9][7] = _aB_M__0__M__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[9][2][9][8] = _aB_M__0__M__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[9][2][9][9] = _aB_M__0__M__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[9][2][10][1] = _aB_M__0__PS__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[9][2][10][2] = _aB_M__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[9][2][10][3] = _aB_M__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[9][2][10][4] = _aB_M__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[9][2][10][5] = _aB_M__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[9][2][10][6] = _aB_M__0__PS__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[9][2][10][7] = _aB_M__0__PS__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[9][2][10][8] = _aB_M__0__PS__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[9][2][10][9] = _aB_M__0__PS__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[9][2][10][10] = _aB_M__0__PS__1___TwoPRep_D__0__PS__1___Ab__up_0;

libint2_build_eri[9][3][6][6] = _aB_M__0__I__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[9][3][7][5] = _aB_M__0__K__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[9][3][7][6] = _aB_M__0__K__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[9][3][7][7] = _aB_M__0__K__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[9][3][8][4] = _aB_M__0__L__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[9][3][8][5] = _aB_M__0__L__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[9][3][8][6] = _aB_M__0__L__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[9][3][8][7] = _aB_M__0__L__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[9][3][8][8] = _aB_M__0__L__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[9][3][9][3] = _aB_M__0__M__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[9][3][9][4] = _aB_M__0__M__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[9][3][9][5] = _aB_M__0__M__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[9][3][9][6] = _aB_M__0__M__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[9][3][9][7] = _aB_M__0__M__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[9][3][9][8] = _aB_M__0__M__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[9][3][9][9] = _aB_M__0__M__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[9][3][10][2] = _aB_M__0__PS__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[9][3][10][3] = _aB_M__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[9][3][10][4] = _aB_M__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[9][3][10][5] = _aB_M__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[9][3][10][6] = _aB_M__0__PS__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[9][3][10][7] = _aB_M__0__PS__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[9][3][10][8] = _aB_M__0__PS__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[9][3][10][9] = _aB_M__0__PS__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[9][3][10][10] = _aB_M__0__PS__1___TwoPRep_F__0__PS__1___Ab__up_0;

libint2_build_eri[9][4][7][6] = _aB_M__0__K__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[9][4][7][7] = _aB_M__0__K__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[9][4][8][5] = _aB_M__0__L__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[9][4][8][6] = _aB_M__0__L__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[9][4][8][7] = _aB_M__0__L__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[9][4][8][8] = _aB_M__0__L__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[9][4][9][4] = _aB_M__0__M__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[9][4][9][5] = _aB_M__0__M__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[9][4][9][6] = _aB_M__0__M__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[9][4][9][7] = _aB_M__0__M__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[9][4][9][8] = _aB_M__0__M__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[9][4][9][9] = _aB_M__0__M__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[9][4][10][3] = _aB_M__0__PS__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[9][4][10][4] = _aB_M__0__PS__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[9][4][10][5] = _aB_M__0__PS__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[9][4][10][6] = _aB_M__0__PS__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[9][4][10][7] = _aB_M__0__PS__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[9][4][10][8] = _aB_M__0__PS__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[9][4][10][9] = _aB_M__0__PS__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[9][4][10][10] = _aB_M__0__PS__1___TwoPRep_G__0__PS__1___Ab__up_0;

libint2_build_eri[9][5][7][7] = _aB_M__0__K__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[9][5][8][6] = _aB_M__0__L__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[9][5][8][7] = _aB_M__0__L__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[9][5][8][8] = _aB_M__0__L__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[9][5][9][5] = _aB_M__0__M__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[9][5][9][6] = _aB_M__0__M__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[9][5][9][7] = _aB_M__0__M__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[9][5][9][8] = _aB_M__0__M__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[9][5][9][9] = _aB_M__0__M__1___TwoPRep_H__0__M__1___Ab__up_0;

libint2_build_eri[9][5][10][4] = _aB_M__0__PS__1___TwoPRep_H__0__G__1___Ab__up_0;

libint2_build_eri[9][5][10][5] = _aB_M__0__PS__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[9][5][10][6] = _aB_M__0__PS__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[9][5][10][7] = _aB_M__0__PS__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[9][5][10][8] = _aB_M__0__PS__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[9][5][10][9] = _aB_M__0__PS__1___TwoPRep_H__0__M__1___Ab__up_0;

libint2_build_eri[9][5][10][10] = _aB_M__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0;

libint2_build_eri[9][6][8][7] = _aB_M__0__L__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[9][6][8][8] = _aB_M__0__L__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[9][6][9][6] = _aB_M__0__M__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[9][6][9][7] = _aB_M__0__M__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[9][6][9][8] = _aB_M__0__M__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[9][6][9][9] = _aB_M__0__M__1___TwoPRep_I__0__M__1___Ab__up_0;

libint2_build_eri[9][6][10][5] = _aB_M__0__PS__1___TwoPRep_I__0__H__1___Ab__up_0;

libint2_build_eri[9][6][10][6] = _aB_M__0__PS__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[9][6][10][7] = _aB_M__0__PS__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[9][6][10][8] = _aB_M__0__PS__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[9][6][10][9] = _aB_M__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0;

libint2_build_eri[9][6][10][10] = _aB_M__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0;

libint2_build_eri[9][7][8][8] = _aB_M__0__L__1___TwoPRep_K__0__L__1___Ab__up_0;

libint2_build_eri[9][7][9][7] = _aB_M__0__M__1___TwoPRep_K__0__K__1___Ab__up_0;

libint2_build_eri[9][7][9][8] = _aB_M__0__M__1___TwoPRep_K__0__L__1___Ab__up_0;

libint2_build_eri[9][7][9][9] = _aB_M__0__M__1___TwoPRep_K__0__M__1___Ab__up_0;

libint2_build_eri[9][7][10][6] = _aB_M__0__PS__1___TwoPRep_K__0__I__1___Ab__up_0;

libint2_build_eri[9][7][10][7] = _aB_M__0__PS__1___TwoPRep_K__0__K__1___Ab__up_0;

libint2_build_eri[9][7][10][8] = _aB_M__0__PS__1___TwoPRep_K__0__L__1___Ab__up_0;

libint2_build_eri[9][7][10][9] = _aB_M__0__PS__1___TwoPRep_K__0__M__1___Ab__up_0;

libint2_build_eri[9][7][10][10] = _aB_M__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0;

libint2_build_eri[9][8][9][8] = _aB_M__0__M__1___TwoPRep_L__0__L__1___Ab__up_0;

libint2_build_eri[9][8][9][9] = _aB_M__0__M__1___TwoPRep_L__0__M__1___Ab__up_0;

libint2_build_eri[9][8][10][7] = _aB_M__0__PS__1___TwoPRep_L__0__K__1___Ab__up_0;

libint2_build_eri[9][8][10][8] = _aB_M__0__PS__1___TwoPRep_L__0__L__1___Ab__up_0;

libint2_build_eri[9][8][10][9] = _aB_M__0__PS__1___TwoPRep_L__0__M__1___Ab__up_0;

libint2_build_eri[9][8][10][10] = _aB_M__0__PS__1___TwoPRep_L__0__PS__1___Ab__up_0;

libint2_build_eri[9][9][9][9] = _aB_M__0__M__1___TwoPRep_M__0__M__1___Ab__up_0;

libint2_build_eri[9][9][10][8] = _aB_M__0__PS__1___TwoPRep_M__0__L__1___Ab__up_0;

libint2_build_eri[9][9][10][9] = _aB_M__0__PS__1___TwoPRep_M__0__M__1___Ab__up_0;

libint2_build_eri[9][9][10][10] = _aB_M__0__PS__1___TwoPRep_M__0__PS__1___Ab__up_0;

libint2_build_eri[10][0][5][5] = _aB_PS__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[10][0][6][4] = _aB_PS__0__I__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[10][0][6][5] = _aB_PS__0__I__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[10][0][6][6] = _aB_PS__0__I__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[10][0][7][3] = _aB_PS__0__K__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[10][0][7][4] = _aB_PS__0__K__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[10][0][7][5] = _aB_PS__0__K__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[10][0][7][6] = _aB_PS__0__K__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[10][0][7][7] = _aB_PS__0__K__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[10][0][8][2] = _aB_PS__0__L__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[10][0][8][3] = _aB_PS__0__L__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[10][0][8][4] = _aB_PS__0__L__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[10][0][8][5] = _aB_PS__0__L__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[10][0][8][6] = _aB_PS__0__L__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[10][0][8][7] = _aB_PS__0__L__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[10][0][8][8] = _aB_PS__0__L__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[10][0][9][1] = _aB_PS__0__M__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[10][0][9][2] = _aB_PS__0__M__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[10][0][9][3] = _aB_PS__0__M__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[10][0][9][4] = _aB_PS__0__M__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[10][0][9][5] = _aB_PS__0__M__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[10][0][9][6] = _aB_PS__0__M__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[10][0][9][7] = _aB_PS__0__M__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[10][0][9][8] = _aB_PS__0__M__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[10][0][9][9] = _aB_PS__0__M__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[10][0][10][0] = _aB_PS__0__PS__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[10][0][10][1] = _aB_PS__0__PS__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[10][0][10][2] = _aB_PS__0__PS__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[10][0][10][3] = _aB_PS__0__PS__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[10][0][10][4] = _aB_PS__0__PS__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[10][0][10][5] = _aB_PS__0__PS__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[10][0][10][6] = _aB_PS__0__PS__1___TwoPRep_S__0__I__1___Ab__up_0;

libint2_build_eri[10][0][10][7] = _aB_PS__0__PS__1___TwoPRep_S__0__K__1___Ab__up_0;

libint2_build_eri[10][0][10][8] = _aB_PS__0__PS__1___TwoPRep_S__0__L__1___Ab__up_0;

libint2_build_eri[10][0][10][9] = _aB_PS__0__PS__1___TwoPRep_S__0__M__1___Ab__up_0;

libint2_build_eri[10][0][10][10] = _aB_PS__0__PS__1___TwoPRep_S__0__PS__1___Ab__up_0;

libint2_build_eri[10][1][6][5] = _aB_PS__0__I__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[10][1][6][6] = _aB_PS__0__I__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[10][1][7][4] = _aB_PS__0__K__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[10][1][7][5] = _aB_PS__0__K__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[10][1][7][6] = _aB_PS__0__K__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[10][1][7][7] = _aB_PS__0__K__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[10][1][8][3] = _aB_PS__0__L__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[10][1][8][4] = _aB_PS__0__L__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[10][1][8][5] = _aB_PS__0__L__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[10][1][8][6] = _aB_PS__0__L__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[10][1][8][7] = _aB_PS__0__L__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[10][1][8][8] = _aB_PS__0__L__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[10][1][9][2] = _aB_PS__0__M__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[10][1][9][3] = _aB_PS__0__M__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[10][1][9][4] = _aB_PS__0__M__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[10][1][9][5] = _aB_PS__0__M__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[10][1][9][6] = _aB_PS__0__M__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[10][1][9][7] = _aB_PS__0__M__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[10][1][9][8] = _aB_PS__0__M__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[10][1][9][9] = _aB_PS__0__M__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[10][1][10][1] = _aB_PS__0__PS__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[10][1][10][2] = _aB_PS__0__PS__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[10][1][10][3] = _aB_PS__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[10][1][10][4] = _aB_PS__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[10][1][10][5] = _aB_PS__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[10][1][10][6] = _aB_PS__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0;

libint2_build_eri[10][1][10][7] = _aB_PS__0__PS__1___TwoPRep_P__0__K__1___Ab__up_0;

libint2_build_eri[10][1][10][8] = _aB_PS__0__PS__1___TwoPRep_P__0__L__1___Ab__up_0;

libint2_build_eri[10][1][10][9] = _aB_PS__0__PS__1___TwoPRep_P__0__M__1___Ab__up_0;

libint2_build_eri[10][1][10][10] = _aB_PS__0__PS__1___TwoPRep_P__0__PS__1___Ab__up_0;

libint2_build_eri[10][2][6][6] = _aB_PS__0__I__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[10][2][7][5] = _aB_PS__0__K__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[10][2][7][6] = _aB_PS__0__K__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[10][2][7][7] = _aB_PS__0__K__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[10][2][8][4] = _aB_PS__0__L__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[10][2][8][5] = _aB_PS__0__L__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[10][2][8][6] = _aB_PS__0__L__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[10][2][8][7] = _aB_PS__0__L__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[10][2][8][8] = _aB_PS__0__L__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[10][2][9][3] = _aB_PS__0__M__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[10][2][9][4] = _aB_PS__0__M__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[10][2][9][5] = _aB_PS__0__M__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[10][2][9][6] = _aB_PS__0__M__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[10][2][9][7] = _aB_PS__0__M__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[10][2][9][8] = _aB_PS__0__M__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[10][2][9][9] = _aB_PS__0__M__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[10][2][10][2] = _aB_PS__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[10][2][10][3] = _aB_PS__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[10][2][10][4] = _aB_PS__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[10][2][10][5] = _aB_PS__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[10][2][10][6] = _aB_PS__0__PS__1___TwoPRep_D__0__I__1___Ab__up_0;

libint2_build_eri[10][2][10][7] = _aB_PS__0__PS__1___TwoPRep_D__0__K__1___Ab__up_0;

libint2_build_eri[10][2][10][8] = _aB_PS__0__PS__1___TwoPRep_D__0__L__1___Ab__up_0;

libint2_build_eri[10][2][10][9] = _aB_PS__0__PS__1___TwoPRep_D__0__M__1___Ab__up_0;

libint2_build_eri[10][2][10][10] = _aB_PS__0__PS__1___TwoPRep_D__0__PS__1___Ab__up_0;

libint2_build_eri[10][3][7][6] = _aB_PS__0__K__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[10][3][7][7] = _aB_PS__0__K__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[10][3][8][5] = _aB_PS__0__L__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[10][3][8][6] = _aB_PS__0__L__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[10][3][8][7] = _aB_PS__0__L__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[10][3][8][8] = _aB_PS__0__L__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[10][3][9][4] = _aB_PS__0__M__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[10][3][9][5] = _aB_PS__0__M__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[10][3][9][6] = _aB_PS__0__M__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[10][3][9][7] = _aB_PS__0__M__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[10][3][9][8] = _aB_PS__0__M__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[10][3][9][9] = _aB_PS__0__M__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[10][3][10][3] = _aB_PS__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[10][3][10][4] = _aB_PS__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[10][3][10][5] = _aB_PS__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[10][3][10][6] = _aB_PS__0__PS__1___TwoPRep_F__0__I__1___Ab__up_0;

libint2_build_eri[10][3][10][7] = _aB_PS__0__PS__1___TwoPRep_F__0__K__1___Ab__up_0;

libint2_build_eri[10][3][10][8] = _aB_PS__0__PS__1___TwoPRep_F__0__L__1___Ab__up_0;

libint2_build_eri[10][3][10][9] = _aB_PS__0__PS__1___TwoPRep_F__0__M__1___Ab__up_0;

libint2_build_eri[10][3][10][10] = _aB_PS__0__PS__1___TwoPRep_F__0__PS__1___Ab__up_0;

libint2_build_eri[10][4][7][7] = _aB_PS__0__K__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[10][4][8][6] = _aB_PS__0__L__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[10][4][8][7] = _aB_PS__0__L__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[10][4][8][8] = _aB_PS__0__L__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[10][4][9][5] = _aB_PS__0__M__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[10][4][9][6] = _aB_PS__0__M__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[10][4][9][7] = _aB_PS__0__M__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[10][4][9][8] = _aB_PS__0__M__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[10][4][9][9] = _aB_PS__0__M__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[10][4][10][4] = _aB_PS__0__PS__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[10][4][10][5] = _aB_PS__0__PS__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[10][4][10][6] = _aB_PS__0__PS__1___TwoPRep_G__0__I__1___Ab__up_0;

libint2_build_eri[10][4][10][7] = _aB_PS__0__PS__1___TwoPRep_G__0__K__1___Ab__up_0;

libint2_build_eri[10][4][10][8] = _aB_PS__0__PS__1___TwoPRep_G__0__L__1___Ab__up_0;

libint2_build_eri[10][4][10][9] = _aB_PS__0__PS__1___TwoPRep_G__0__M__1___Ab__up_0;

libint2_build_eri[10][4][10][10] = _aB_PS__0__PS__1___TwoPRep_G__0__PS__1___Ab__up_0;

libint2_build_eri[10][5][8][7] = _aB_PS__0__L__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[10][5][8][8] = _aB_PS__0__L__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[10][5][9][6] = _aB_PS__0__M__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[10][5][9][7] = _aB_PS__0__M__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[10][5][9][8] = _aB_PS__0__M__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[10][5][9][9] = _aB_PS__0__M__1___TwoPRep_H__0__M__1___Ab__up_0;

libint2_build_eri[10][5][10][5] = _aB_PS__0__PS__1___TwoPRep_H__0__H__1___Ab__up_0;

libint2_build_eri[10][5][10][6] = _aB_PS__0__PS__1___TwoPRep_H__0__I__1___Ab__up_0;

libint2_build_eri[10][5][10][7] = _aB_PS__0__PS__1___TwoPRep_H__0__K__1___Ab__up_0;

libint2_build_eri[10][5][10][8] = _aB_PS__0__PS__1___TwoPRep_H__0__L__1___Ab__up_0;

libint2_build_eri[10][5][10][9] = _aB_PS__0__PS__1___TwoPRep_H__0__M__1___Ab__up_0;

libint2_build_eri[10][5][10][10] = _aB_PS__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0;

libint2_build_eri[10][6][8][8] = _aB_PS__0__L__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[10][6][9][7] = _aB_PS__0__M__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[10][6][9][8] = _aB_PS__0__M__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[10][6][9][9] = _aB_PS__0__M__1___TwoPRep_I__0__M__1___Ab__up_0;

libint2_build_eri[10][6][10][6] = _aB_PS__0__PS__1___TwoPRep_I__0__I__1___Ab__up_0;

libint2_build_eri[10][6][10][7] = _aB_PS__0__PS__1___TwoPRep_I__0__K__1___Ab__up_0;

libint2_build_eri[10][6][10][8] = _aB_PS__0__PS__1___TwoPRep_I__0__L__1___Ab__up_0;

libint2_build_eri[10][6][10][9] = _aB_PS__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0;

libint2_build_eri[10][6][10][10] = _aB_PS__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0;

libint2_build_eri[10][7][9][8] = _aB_PS__0__M__1___TwoPRep_K__0__L__1___Ab__up_0;

libint2_build_eri[10][7][9][9] = _aB_PS__0__M__1___TwoPRep_K__0__M__1___Ab__up_0;

libint2_build_eri[10][7][10][7] = _aB_PS__0__PS__1___TwoPRep_K__0__K__1___Ab__up_0;

libint2_build_eri[10][7][10][8] = _aB_PS__0__PS__1___TwoPRep_K__0__L__1___Ab__up_0;

libint2_build_eri[10][7][10][9] = _aB_PS__0__PS__1___TwoPRep_K__0__M__1___Ab__up_0;

libint2_build_eri[10][7][10][10] = _aB_PS__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0;

libint2_build_eri[10][8][9][9] = _aB_PS__0__M__1___TwoPRep_L__0__M__1___Ab__up_0;

libint2_build_eri[10][8][10][8] = _aB_PS__0__PS__1___TwoPRep_L__0__L__1___Ab__up_0;

libint2_build_eri[10][8][10][9] = _aB_PS__0__PS__1___TwoPRep_L__0__M__1___Ab__up_0;

libint2_build_eri[10][8][10][10] = _aB_PS__0__PS__1___TwoPRep_L__0__PS__1___Ab__up_0;

libint2_build_eri[10][9][10][9] = _aB_PS__0__PS__1___TwoPRep_M__0__M__1___Ab__up_0;

libint2_build_eri[10][9][10][10] = _aB_PS__0__PS__1___TwoPRep_M__0__PS__1___Ab__up_0;

libint2_build_eri[10][10][10][10] = _aB_PS__0__PS__1___TwoPRep_PS__0__PS__1___Ab__up_0;

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

libint2_build_3eri[0][6][0] = eri3_aB_S__0__I__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[0][6][1] = eri3_aB_S__0__I__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[0][6][2] = eri3_aB_S__0__I__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[0][6][3] = eri3_aB_S__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[0][6][4] = eri3_aB_S__0__I__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[0][6][5] = eri3_aB_S__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[0][6][6] = eri3_aB_S__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[0][7][0] = eri3_aB_S__0__K__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[0][7][1] = eri3_aB_S__0__K__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[0][7][2] = eri3_aB_S__0__K__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[0][7][3] = eri3_aB_S__0__K__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[0][7][4] = eri3_aB_S__0__K__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[0][7][5] = eri3_aB_S__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[0][7][6] = eri3_aB_S__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[0][7][7] = eri3_aB_S__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[0][8][0] = eri3_aB_S__0__L__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[0][8][1] = eri3_aB_S__0__L__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[0][8][2] = eri3_aB_S__0__L__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[0][8][3] = eri3_aB_S__0__L__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[0][8][4] = eri3_aB_S__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[0][8][5] = eri3_aB_S__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[0][8][6] = eri3_aB_S__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[0][8][7] = eri3_aB_S__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[0][8][8] = eri3_aB_S__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[0][9][0] = eri3_aB_S__0__M__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[0][9][1] = eri3_aB_S__0__M__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[0][9][2] = eri3_aB_S__0__M__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[0][9][3] = eri3_aB_S__0__M__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[0][9][4] = eri3_aB_S__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[0][9][5] = eri3_aB_S__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[0][9][6] = eri3_aB_S__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[0][9][7] = eri3_aB_S__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[0][9][8] = eri3_aB_S__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[0][9][9] = eri3_aB_S__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[0][10][0] = eri3_aB_S__0__PS__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[0][10][1] = eri3_aB_S__0__PS__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[0][10][2] = eri3_aB_S__0__PS__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[0][10][3] = eri3_aB_S__0__PS__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[0][10][4] = eri3_aB_S__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[0][10][5] = eri3_aB_S__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[0][10][6] = eri3_aB_S__0__PS__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[0][10][7] = eri3_aB_S__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[0][10][8] = eri3_aB_S__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[0][10][9] = eri3_aB_S__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[0][10][10] = eri3_aB_S__0__PS__1___TwoPRep_unit__0__PS__1___Ab__up_0;

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

libint2_build_3eri[1][6][0] = eri3_aB_P__0__I__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[1][6][1] = eri3_aB_P__0__I__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[1][6][2] = eri3_aB_P__0__I__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[1][6][3] = eri3_aB_P__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[1][6][4] = eri3_aB_P__0__I__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[1][6][5] = eri3_aB_P__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[1][6][6] = eri3_aB_P__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[1][7][0] = eri3_aB_P__0__K__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[1][7][1] = eri3_aB_P__0__K__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[1][7][2] = eri3_aB_P__0__K__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[1][7][3] = eri3_aB_P__0__K__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[1][7][4] = eri3_aB_P__0__K__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[1][7][5] = eri3_aB_P__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[1][7][6] = eri3_aB_P__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[1][7][7] = eri3_aB_P__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[1][8][0] = eri3_aB_P__0__L__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[1][8][1] = eri3_aB_P__0__L__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[1][8][2] = eri3_aB_P__0__L__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[1][8][3] = eri3_aB_P__0__L__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[1][8][4] = eri3_aB_P__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[1][8][5] = eri3_aB_P__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[1][8][6] = eri3_aB_P__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[1][8][7] = eri3_aB_P__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[1][8][8] = eri3_aB_P__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[1][9][0] = eri3_aB_P__0__M__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[1][9][1] = eri3_aB_P__0__M__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[1][9][2] = eri3_aB_P__0__M__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[1][9][3] = eri3_aB_P__0__M__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[1][9][4] = eri3_aB_P__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[1][9][5] = eri3_aB_P__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[1][9][6] = eri3_aB_P__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[1][9][7] = eri3_aB_P__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[1][9][8] = eri3_aB_P__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[1][9][9] = eri3_aB_P__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[1][10][0] = eri3_aB_P__0__PS__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[1][10][1] = eri3_aB_P__0__PS__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[1][10][2] = eri3_aB_P__0__PS__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[1][10][3] = eri3_aB_P__0__PS__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[1][10][4] = eri3_aB_P__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[1][10][5] = eri3_aB_P__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[1][10][6] = eri3_aB_P__0__PS__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[1][10][7] = eri3_aB_P__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[1][10][8] = eri3_aB_P__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[1][10][9] = eri3_aB_P__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[1][10][10] = eri3_aB_P__0__PS__1___TwoPRep_unit__0__PS__1___Ab__up_0;

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

libint2_build_3eri[2][6][0] = eri3_aB_D__0__I__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[2][6][1] = eri3_aB_D__0__I__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[2][6][2] = eri3_aB_D__0__I__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[2][6][3] = eri3_aB_D__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[2][6][4] = eri3_aB_D__0__I__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[2][6][5] = eri3_aB_D__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[2][6][6] = eri3_aB_D__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[2][7][0] = eri3_aB_D__0__K__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[2][7][1] = eri3_aB_D__0__K__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[2][7][2] = eri3_aB_D__0__K__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[2][7][3] = eri3_aB_D__0__K__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[2][7][4] = eri3_aB_D__0__K__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[2][7][5] = eri3_aB_D__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[2][7][6] = eri3_aB_D__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[2][7][7] = eri3_aB_D__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[2][8][0] = eri3_aB_D__0__L__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[2][8][1] = eri3_aB_D__0__L__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[2][8][2] = eri3_aB_D__0__L__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[2][8][3] = eri3_aB_D__0__L__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[2][8][4] = eri3_aB_D__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[2][8][5] = eri3_aB_D__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[2][8][6] = eri3_aB_D__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[2][8][7] = eri3_aB_D__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[2][8][8] = eri3_aB_D__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[2][9][0] = eri3_aB_D__0__M__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[2][9][1] = eri3_aB_D__0__M__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[2][9][2] = eri3_aB_D__0__M__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[2][9][3] = eri3_aB_D__0__M__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[2][9][4] = eri3_aB_D__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[2][9][5] = eri3_aB_D__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[2][9][6] = eri3_aB_D__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[2][9][7] = eri3_aB_D__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[2][9][8] = eri3_aB_D__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[2][9][9] = eri3_aB_D__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[2][10][0] = eri3_aB_D__0__PS__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[2][10][1] = eri3_aB_D__0__PS__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[2][10][2] = eri3_aB_D__0__PS__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[2][10][3] = eri3_aB_D__0__PS__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[2][10][4] = eri3_aB_D__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[2][10][5] = eri3_aB_D__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[2][10][6] = eri3_aB_D__0__PS__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[2][10][7] = eri3_aB_D__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[2][10][8] = eri3_aB_D__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[2][10][9] = eri3_aB_D__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[2][10][10] = eri3_aB_D__0__PS__1___TwoPRep_unit__0__PS__1___Ab__up_0;

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

libint2_build_3eri[3][6][0] = eri3_aB_F__0__I__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[3][6][1] = eri3_aB_F__0__I__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[3][6][2] = eri3_aB_F__0__I__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[3][6][3] = eri3_aB_F__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[3][6][4] = eri3_aB_F__0__I__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[3][6][5] = eri3_aB_F__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[3][6][6] = eri3_aB_F__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[3][7][0] = eri3_aB_F__0__K__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[3][7][1] = eri3_aB_F__0__K__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[3][7][2] = eri3_aB_F__0__K__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[3][7][3] = eri3_aB_F__0__K__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[3][7][4] = eri3_aB_F__0__K__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[3][7][5] = eri3_aB_F__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[3][7][6] = eri3_aB_F__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[3][7][7] = eri3_aB_F__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[3][8][0] = eri3_aB_F__0__L__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[3][8][1] = eri3_aB_F__0__L__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[3][8][2] = eri3_aB_F__0__L__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[3][8][3] = eri3_aB_F__0__L__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[3][8][4] = eri3_aB_F__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[3][8][5] = eri3_aB_F__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[3][8][6] = eri3_aB_F__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[3][8][7] = eri3_aB_F__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[3][8][8] = eri3_aB_F__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[3][9][0] = eri3_aB_F__0__M__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[3][9][1] = eri3_aB_F__0__M__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[3][9][2] = eri3_aB_F__0__M__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[3][9][3] = eri3_aB_F__0__M__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[3][9][4] = eri3_aB_F__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[3][9][5] = eri3_aB_F__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[3][9][6] = eri3_aB_F__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[3][9][7] = eri3_aB_F__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[3][9][8] = eri3_aB_F__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[3][9][9] = eri3_aB_F__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[3][10][0] = eri3_aB_F__0__PS__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[3][10][1] = eri3_aB_F__0__PS__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[3][10][2] = eri3_aB_F__0__PS__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[3][10][3] = eri3_aB_F__0__PS__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[3][10][4] = eri3_aB_F__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[3][10][5] = eri3_aB_F__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[3][10][6] = eri3_aB_F__0__PS__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[3][10][7] = eri3_aB_F__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[3][10][8] = eri3_aB_F__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[3][10][9] = eri3_aB_F__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[3][10][10] = eri3_aB_F__0__PS__1___TwoPRep_unit__0__PS__1___Ab__up_0;

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

libint2_build_3eri[4][6][0] = eri3_aB_G__0__I__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[4][6][1] = eri3_aB_G__0__I__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[4][6][2] = eri3_aB_G__0__I__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[4][6][3] = eri3_aB_G__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[4][6][4] = eri3_aB_G__0__I__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[4][6][5] = eri3_aB_G__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[4][6][6] = eri3_aB_G__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[4][7][0] = eri3_aB_G__0__K__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[4][7][1] = eri3_aB_G__0__K__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[4][7][2] = eri3_aB_G__0__K__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[4][7][3] = eri3_aB_G__0__K__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[4][7][4] = eri3_aB_G__0__K__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[4][7][5] = eri3_aB_G__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[4][7][6] = eri3_aB_G__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[4][7][7] = eri3_aB_G__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[4][8][0] = eri3_aB_G__0__L__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[4][8][1] = eri3_aB_G__0__L__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[4][8][2] = eri3_aB_G__0__L__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[4][8][3] = eri3_aB_G__0__L__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[4][8][4] = eri3_aB_G__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[4][8][5] = eri3_aB_G__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[4][8][6] = eri3_aB_G__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[4][8][7] = eri3_aB_G__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[4][8][8] = eri3_aB_G__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[4][9][0] = eri3_aB_G__0__M__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[4][9][1] = eri3_aB_G__0__M__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[4][9][2] = eri3_aB_G__0__M__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[4][9][3] = eri3_aB_G__0__M__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[4][9][4] = eri3_aB_G__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[4][9][5] = eri3_aB_G__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[4][9][6] = eri3_aB_G__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[4][9][7] = eri3_aB_G__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[4][9][8] = eri3_aB_G__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[4][9][9] = eri3_aB_G__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[4][10][0] = eri3_aB_G__0__PS__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[4][10][1] = eri3_aB_G__0__PS__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[4][10][2] = eri3_aB_G__0__PS__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[4][10][3] = eri3_aB_G__0__PS__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[4][10][4] = eri3_aB_G__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[4][10][5] = eri3_aB_G__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[4][10][6] = eri3_aB_G__0__PS__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[4][10][7] = eri3_aB_G__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[4][10][8] = eri3_aB_G__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[4][10][9] = eri3_aB_G__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[4][10][10] = eri3_aB_G__0__PS__1___TwoPRep_unit__0__PS__1___Ab__up_0;

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

libint2_build_3eri[5][6][0] = eri3_aB_H__0__I__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[5][6][1] = eri3_aB_H__0__I__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[5][6][2] = eri3_aB_H__0__I__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[5][6][3] = eri3_aB_H__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[5][6][4] = eri3_aB_H__0__I__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[5][6][5] = eri3_aB_H__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[5][6][6] = eri3_aB_H__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[5][7][0] = eri3_aB_H__0__K__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[5][7][1] = eri3_aB_H__0__K__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[5][7][2] = eri3_aB_H__0__K__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[5][7][3] = eri3_aB_H__0__K__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[5][7][4] = eri3_aB_H__0__K__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[5][7][5] = eri3_aB_H__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[5][7][6] = eri3_aB_H__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[5][7][7] = eri3_aB_H__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[5][8][0] = eri3_aB_H__0__L__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[5][8][1] = eri3_aB_H__0__L__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[5][8][2] = eri3_aB_H__0__L__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[5][8][3] = eri3_aB_H__0__L__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[5][8][4] = eri3_aB_H__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[5][8][5] = eri3_aB_H__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[5][8][6] = eri3_aB_H__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[5][8][7] = eri3_aB_H__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[5][8][8] = eri3_aB_H__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[5][9][0] = eri3_aB_H__0__M__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[5][9][1] = eri3_aB_H__0__M__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[5][9][2] = eri3_aB_H__0__M__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[5][9][3] = eri3_aB_H__0__M__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[5][9][4] = eri3_aB_H__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[5][9][5] = eri3_aB_H__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[5][9][6] = eri3_aB_H__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[5][9][7] = eri3_aB_H__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[5][9][8] = eri3_aB_H__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[5][9][9] = eri3_aB_H__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[5][10][0] = eri3_aB_H__0__PS__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[5][10][1] = eri3_aB_H__0__PS__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[5][10][2] = eri3_aB_H__0__PS__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[5][10][3] = eri3_aB_H__0__PS__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[5][10][4] = eri3_aB_H__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[5][10][5] = eri3_aB_H__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[5][10][6] = eri3_aB_H__0__PS__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[5][10][7] = eri3_aB_H__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[5][10][8] = eri3_aB_H__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[5][10][9] = eri3_aB_H__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[5][10][10] = eri3_aB_H__0__PS__1___TwoPRep_unit__0__PS__1___Ab__up_0;

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

libint2_build_3eri[6][6][0] = eri3_aB_I__0__I__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[6][6][1] = eri3_aB_I__0__I__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[6][6][2] = eri3_aB_I__0__I__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[6][6][3] = eri3_aB_I__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[6][6][4] = eri3_aB_I__0__I__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[6][6][5] = eri3_aB_I__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[6][6][6] = eri3_aB_I__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[6][7][0] = eri3_aB_I__0__K__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[6][7][1] = eri3_aB_I__0__K__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[6][7][2] = eri3_aB_I__0__K__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[6][7][3] = eri3_aB_I__0__K__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[6][7][4] = eri3_aB_I__0__K__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[6][7][5] = eri3_aB_I__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[6][7][6] = eri3_aB_I__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[6][7][7] = eri3_aB_I__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[6][8][0] = eri3_aB_I__0__L__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[6][8][1] = eri3_aB_I__0__L__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[6][8][2] = eri3_aB_I__0__L__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[6][8][3] = eri3_aB_I__0__L__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[6][8][4] = eri3_aB_I__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[6][8][5] = eri3_aB_I__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[6][8][6] = eri3_aB_I__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[6][8][7] = eri3_aB_I__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[6][8][8] = eri3_aB_I__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[6][9][0] = eri3_aB_I__0__M__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[6][9][1] = eri3_aB_I__0__M__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[6][9][2] = eri3_aB_I__0__M__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[6][9][3] = eri3_aB_I__0__M__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[6][9][4] = eri3_aB_I__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[6][9][5] = eri3_aB_I__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[6][9][6] = eri3_aB_I__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[6][9][7] = eri3_aB_I__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[6][9][8] = eri3_aB_I__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[6][9][9] = eri3_aB_I__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[6][10][0] = eri3_aB_I__0__PS__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[6][10][1] = eri3_aB_I__0__PS__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[6][10][2] = eri3_aB_I__0__PS__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[6][10][3] = eri3_aB_I__0__PS__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[6][10][4] = eri3_aB_I__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[6][10][5] = eri3_aB_I__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[6][10][6] = eri3_aB_I__0__PS__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[6][10][7] = eri3_aB_I__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[6][10][8] = eri3_aB_I__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[6][10][9] = eri3_aB_I__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[6][10][10] = eri3_aB_I__0__PS__1___TwoPRep_unit__0__PS__1___Ab__up_0;

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

libint2_build_3eri[7][6][0] = eri3_aB_K__0__I__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[7][6][1] = eri3_aB_K__0__I__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[7][6][2] = eri3_aB_K__0__I__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[7][6][3] = eri3_aB_K__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[7][6][4] = eri3_aB_K__0__I__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[7][6][5] = eri3_aB_K__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[7][6][6] = eri3_aB_K__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[7][7][0] = eri3_aB_K__0__K__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[7][7][1] = eri3_aB_K__0__K__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[7][7][2] = eri3_aB_K__0__K__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[7][7][3] = eri3_aB_K__0__K__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[7][7][4] = eri3_aB_K__0__K__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[7][7][5] = eri3_aB_K__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[7][7][6] = eri3_aB_K__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[7][7][7] = eri3_aB_K__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[7][8][0] = eri3_aB_K__0__L__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[7][8][1] = eri3_aB_K__0__L__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[7][8][2] = eri3_aB_K__0__L__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[7][8][3] = eri3_aB_K__0__L__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[7][8][4] = eri3_aB_K__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[7][8][5] = eri3_aB_K__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[7][8][6] = eri3_aB_K__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[7][8][7] = eri3_aB_K__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[7][8][8] = eri3_aB_K__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[7][9][0] = eri3_aB_K__0__M__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[7][9][1] = eri3_aB_K__0__M__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[7][9][2] = eri3_aB_K__0__M__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[7][9][3] = eri3_aB_K__0__M__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[7][9][4] = eri3_aB_K__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[7][9][5] = eri3_aB_K__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[7][9][6] = eri3_aB_K__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[7][9][7] = eri3_aB_K__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[7][9][8] = eri3_aB_K__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[7][9][9] = eri3_aB_K__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[7][10][0] = eri3_aB_K__0__PS__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[7][10][1] = eri3_aB_K__0__PS__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[7][10][2] = eri3_aB_K__0__PS__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[7][10][3] = eri3_aB_K__0__PS__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[7][10][4] = eri3_aB_K__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[7][10][5] = eri3_aB_K__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[7][10][6] = eri3_aB_K__0__PS__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[7][10][7] = eri3_aB_K__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[7][10][8] = eri3_aB_K__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[7][10][9] = eri3_aB_K__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[7][10][10] = eri3_aB_K__0__PS__1___TwoPRep_unit__0__PS__1___Ab__up_0;

libint2_build_3eri[8][0][0] = eri3_aB_L__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[8][1][0] = eri3_aB_L__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[8][1][1] = eri3_aB_L__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[8][2][0] = eri3_aB_L__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[8][2][1] = eri3_aB_L__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[8][2][2] = eri3_aB_L__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[8][3][0] = eri3_aB_L__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[8][3][1] = eri3_aB_L__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[8][3][2] = eri3_aB_L__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[8][3][3] = eri3_aB_L__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[8][4][0] = eri3_aB_L__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[8][4][1] = eri3_aB_L__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[8][4][2] = eri3_aB_L__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[8][4][3] = eri3_aB_L__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[8][4][4] = eri3_aB_L__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[8][5][0] = eri3_aB_L__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[8][5][1] = eri3_aB_L__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[8][5][2] = eri3_aB_L__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[8][5][3] = eri3_aB_L__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[8][5][4] = eri3_aB_L__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[8][5][5] = eri3_aB_L__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[8][6][0] = eri3_aB_L__0__I__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[8][6][1] = eri3_aB_L__0__I__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[8][6][2] = eri3_aB_L__0__I__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[8][6][3] = eri3_aB_L__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[8][6][4] = eri3_aB_L__0__I__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[8][6][5] = eri3_aB_L__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[8][6][6] = eri3_aB_L__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[8][7][0] = eri3_aB_L__0__K__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[8][7][1] = eri3_aB_L__0__K__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[8][7][2] = eri3_aB_L__0__K__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[8][7][3] = eri3_aB_L__0__K__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[8][7][4] = eri3_aB_L__0__K__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[8][7][5] = eri3_aB_L__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[8][7][6] = eri3_aB_L__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[8][7][7] = eri3_aB_L__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[8][8][0] = eri3_aB_L__0__L__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[8][8][1] = eri3_aB_L__0__L__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[8][8][2] = eri3_aB_L__0__L__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[8][8][3] = eri3_aB_L__0__L__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[8][8][4] = eri3_aB_L__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[8][8][5] = eri3_aB_L__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[8][8][6] = eri3_aB_L__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[8][8][7] = eri3_aB_L__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[8][8][8] = eri3_aB_L__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[8][9][0] = eri3_aB_L__0__M__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[8][9][1] = eri3_aB_L__0__M__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[8][9][2] = eri3_aB_L__0__M__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[8][9][3] = eri3_aB_L__0__M__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[8][9][4] = eri3_aB_L__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[8][9][5] = eri3_aB_L__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[8][9][6] = eri3_aB_L__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[8][9][7] = eri3_aB_L__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[8][9][8] = eri3_aB_L__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[8][9][9] = eri3_aB_L__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[8][10][0] = eri3_aB_L__0__PS__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[8][10][1] = eri3_aB_L__0__PS__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[8][10][2] = eri3_aB_L__0__PS__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[8][10][3] = eri3_aB_L__0__PS__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[8][10][4] = eri3_aB_L__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[8][10][5] = eri3_aB_L__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[8][10][6] = eri3_aB_L__0__PS__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[8][10][7] = eri3_aB_L__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[8][10][8] = eri3_aB_L__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[8][10][9] = eri3_aB_L__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[8][10][10] = eri3_aB_L__0__PS__1___TwoPRep_unit__0__PS__1___Ab__up_0;

libint2_build_3eri[9][0][0] = eri3_aB_M__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[9][1][0] = eri3_aB_M__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[9][1][1] = eri3_aB_M__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[9][2][0] = eri3_aB_M__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[9][2][1] = eri3_aB_M__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[9][2][2] = eri3_aB_M__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[9][3][0] = eri3_aB_M__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[9][3][1] = eri3_aB_M__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[9][3][2] = eri3_aB_M__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[9][3][3] = eri3_aB_M__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[9][4][0] = eri3_aB_M__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[9][4][1] = eri3_aB_M__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[9][4][2] = eri3_aB_M__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[9][4][3] = eri3_aB_M__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[9][4][4] = eri3_aB_M__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[9][5][0] = eri3_aB_M__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[9][5][1] = eri3_aB_M__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[9][5][2] = eri3_aB_M__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[9][5][3] = eri3_aB_M__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[9][5][4] = eri3_aB_M__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[9][5][5] = eri3_aB_M__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[9][6][0] = eri3_aB_M__0__I__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[9][6][1] = eri3_aB_M__0__I__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[9][6][2] = eri3_aB_M__0__I__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[9][6][3] = eri3_aB_M__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[9][6][4] = eri3_aB_M__0__I__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[9][6][5] = eri3_aB_M__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[9][6][6] = eri3_aB_M__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[9][7][0] = eri3_aB_M__0__K__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[9][7][1] = eri3_aB_M__0__K__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[9][7][2] = eri3_aB_M__0__K__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[9][7][3] = eri3_aB_M__0__K__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[9][7][4] = eri3_aB_M__0__K__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[9][7][5] = eri3_aB_M__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[9][7][6] = eri3_aB_M__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[9][7][7] = eri3_aB_M__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[9][8][0] = eri3_aB_M__0__L__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[9][8][1] = eri3_aB_M__0__L__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[9][8][2] = eri3_aB_M__0__L__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[9][8][3] = eri3_aB_M__0__L__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[9][8][4] = eri3_aB_M__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[9][8][5] = eri3_aB_M__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[9][8][6] = eri3_aB_M__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[9][8][7] = eri3_aB_M__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[9][8][8] = eri3_aB_M__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[9][9][0] = eri3_aB_M__0__M__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[9][9][1] = eri3_aB_M__0__M__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[9][9][2] = eri3_aB_M__0__M__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[9][9][3] = eri3_aB_M__0__M__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[9][9][4] = eri3_aB_M__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[9][9][5] = eri3_aB_M__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[9][9][6] = eri3_aB_M__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[9][9][7] = eri3_aB_M__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[9][9][8] = eri3_aB_M__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[9][9][9] = eri3_aB_M__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[9][10][0] = eri3_aB_M__0__PS__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[9][10][1] = eri3_aB_M__0__PS__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[9][10][2] = eri3_aB_M__0__PS__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[9][10][3] = eri3_aB_M__0__PS__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[9][10][4] = eri3_aB_M__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[9][10][5] = eri3_aB_M__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[9][10][6] = eri3_aB_M__0__PS__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[9][10][7] = eri3_aB_M__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[9][10][8] = eri3_aB_M__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[9][10][9] = eri3_aB_M__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[9][10][10] = eri3_aB_M__0__PS__1___TwoPRep_unit__0__PS__1___Ab__up_0;

libint2_build_3eri[10][0][0] = eri3_aB_PS__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[10][1][0] = eri3_aB_PS__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[10][1][1] = eri3_aB_PS__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[10][2][0] = eri3_aB_PS__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[10][2][1] = eri3_aB_PS__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[10][2][2] = eri3_aB_PS__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[10][3][0] = eri3_aB_PS__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[10][3][1] = eri3_aB_PS__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[10][3][2] = eri3_aB_PS__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[10][3][3] = eri3_aB_PS__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[10][4][0] = eri3_aB_PS__0__G__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[10][4][1] = eri3_aB_PS__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[10][4][2] = eri3_aB_PS__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[10][4][3] = eri3_aB_PS__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[10][4][4] = eri3_aB_PS__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[10][5][0] = eri3_aB_PS__0__H__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[10][5][1] = eri3_aB_PS__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[10][5][2] = eri3_aB_PS__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[10][5][3] = eri3_aB_PS__0__H__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[10][5][4] = eri3_aB_PS__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[10][5][5] = eri3_aB_PS__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[10][6][0] = eri3_aB_PS__0__I__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[10][6][1] = eri3_aB_PS__0__I__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[10][6][2] = eri3_aB_PS__0__I__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[10][6][3] = eri3_aB_PS__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[10][6][4] = eri3_aB_PS__0__I__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[10][6][5] = eri3_aB_PS__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[10][6][6] = eri3_aB_PS__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[10][7][0] = eri3_aB_PS__0__K__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[10][7][1] = eri3_aB_PS__0__K__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[10][7][2] = eri3_aB_PS__0__K__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[10][7][3] = eri3_aB_PS__0__K__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[10][7][4] = eri3_aB_PS__0__K__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[10][7][5] = eri3_aB_PS__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[10][7][6] = eri3_aB_PS__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[10][7][7] = eri3_aB_PS__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[10][8][0] = eri3_aB_PS__0__L__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[10][8][1] = eri3_aB_PS__0__L__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[10][8][2] = eri3_aB_PS__0__L__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[10][8][3] = eri3_aB_PS__0__L__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[10][8][4] = eri3_aB_PS__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[10][8][5] = eri3_aB_PS__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[10][8][6] = eri3_aB_PS__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[10][8][7] = eri3_aB_PS__0__L__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[10][8][8] = eri3_aB_PS__0__L__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[10][9][0] = eri3_aB_PS__0__M__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[10][9][1] = eri3_aB_PS__0__M__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[10][9][2] = eri3_aB_PS__0__M__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[10][9][3] = eri3_aB_PS__0__M__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[10][9][4] = eri3_aB_PS__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[10][9][5] = eri3_aB_PS__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[10][9][6] = eri3_aB_PS__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[10][9][7] = eri3_aB_PS__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[10][9][8] = eri3_aB_PS__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[10][9][9] = eri3_aB_PS__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[10][10][0] = eri3_aB_PS__0__PS__1___TwoPRep_unit__0__S__1___Ab__up_0;

libint2_build_3eri[10][10][1] = eri3_aB_PS__0__PS__1___TwoPRep_unit__0__P__1___Ab__up_0;

libint2_build_3eri[10][10][2] = eri3_aB_PS__0__PS__1___TwoPRep_unit__0__D__1___Ab__up_0;

libint2_build_3eri[10][10][3] = eri3_aB_PS__0__PS__1___TwoPRep_unit__0__F__1___Ab__up_0;

libint2_build_3eri[10][10][4] = eri3_aB_PS__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0;

libint2_build_3eri[10][10][5] = eri3_aB_PS__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0;

libint2_build_3eri[10][10][6] = eri3_aB_PS__0__PS__1___TwoPRep_unit__0__I__1___Ab__up_0;

libint2_build_3eri[10][10][7] = eri3_aB_PS__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0;

libint2_build_3eri[10][10][8] = eri3_aB_PS__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0;

libint2_build_3eri[10][10][9] = eri3_aB_PS__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0;

libint2_build_3eri[10][10][10] = eri3_aB_PS__0__PS__1___TwoPRep_unit__0__PS__1___Ab__up_0;

libint2_build_2eri[0][0] = eri2_aB_S__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][1] = eri2_aB_S__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][2] = eri2_aB_S__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][3] = eri2_aB_S__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][4] = eri2_aB_S__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][5] = eri2_aB_S__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][6] = eri2_aB_S__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][7] = eri2_aB_S__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][8] = eri2_aB_S__0__L__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][9] = eri2_aB_S__0__M__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[0][10] = eri2_aB_S__0__PS__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][0] = eri2_aB_P__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][1] = eri2_aB_P__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][2] = eri2_aB_P__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][3] = eri2_aB_P__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][4] = eri2_aB_P__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][5] = eri2_aB_P__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][6] = eri2_aB_P__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][7] = eri2_aB_P__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][8] = eri2_aB_P__0__L__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][9] = eri2_aB_P__0__M__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[1][10] = eri2_aB_P__0__PS__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][0] = eri2_aB_D__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][1] = eri2_aB_D__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][2] = eri2_aB_D__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][3] = eri2_aB_D__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][4] = eri2_aB_D__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][5] = eri2_aB_D__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][6] = eri2_aB_D__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][7] = eri2_aB_D__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][8] = eri2_aB_D__0__L__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][9] = eri2_aB_D__0__M__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[2][10] = eri2_aB_D__0__PS__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][0] = eri2_aB_F__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][1] = eri2_aB_F__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][2] = eri2_aB_F__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][3] = eri2_aB_F__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][4] = eri2_aB_F__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][5] = eri2_aB_F__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][6] = eri2_aB_F__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][7] = eri2_aB_F__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][8] = eri2_aB_F__0__L__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][9] = eri2_aB_F__0__M__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[3][10] = eri2_aB_F__0__PS__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][0] = eri2_aB_G__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][1] = eri2_aB_G__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][2] = eri2_aB_G__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][3] = eri2_aB_G__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][4] = eri2_aB_G__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][5] = eri2_aB_G__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][6] = eri2_aB_G__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][7] = eri2_aB_G__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][8] = eri2_aB_G__0__L__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][9] = eri2_aB_G__0__M__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[4][10] = eri2_aB_G__0__PS__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][0] = eri2_aB_H__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][1] = eri2_aB_H__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][2] = eri2_aB_H__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][3] = eri2_aB_H__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][4] = eri2_aB_H__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][5] = eri2_aB_H__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][6] = eri2_aB_H__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][7] = eri2_aB_H__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][8] = eri2_aB_H__0__L__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][9] = eri2_aB_H__0__M__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[5][10] = eri2_aB_H__0__PS__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][0] = eri2_aB_I__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][1] = eri2_aB_I__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][2] = eri2_aB_I__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][3] = eri2_aB_I__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][4] = eri2_aB_I__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][5] = eri2_aB_I__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][6] = eri2_aB_I__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][7] = eri2_aB_I__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][8] = eri2_aB_I__0__L__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][9] = eri2_aB_I__0__M__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[6][10] = eri2_aB_I__0__PS__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][0] = eri2_aB_K__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][1] = eri2_aB_K__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][2] = eri2_aB_K__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][3] = eri2_aB_K__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][4] = eri2_aB_K__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][5] = eri2_aB_K__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][6] = eri2_aB_K__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][7] = eri2_aB_K__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][8] = eri2_aB_K__0__L__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][9] = eri2_aB_K__0__M__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[7][10] = eri2_aB_K__0__PS__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[8][0] = eri2_aB_L__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[8][1] = eri2_aB_L__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[8][2] = eri2_aB_L__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[8][3] = eri2_aB_L__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[8][4] = eri2_aB_L__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[8][5] = eri2_aB_L__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[8][6] = eri2_aB_L__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[8][7] = eri2_aB_L__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[8][8] = eri2_aB_L__0__L__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[8][9] = eri2_aB_L__0__M__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[8][10] = eri2_aB_L__0__PS__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[9][0] = eri2_aB_M__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[9][1] = eri2_aB_M__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[9][2] = eri2_aB_M__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[9][3] = eri2_aB_M__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[9][4] = eri2_aB_M__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[9][5] = eri2_aB_M__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[9][6] = eri2_aB_M__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[9][7] = eri2_aB_M__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[9][8] = eri2_aB_M__0__L__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[9][9] = eri2_aB_M__0__M__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[9][10] = eri2_aB_M__0__PS__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[10][0] = eri2_aB_PS__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[10][1] = eri2_aB_PS__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[10][2] = eri2_aB_PS__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[10][3] = eri2_aB_PS__0__F__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[10][4] = eri2_aB_PS__0__G__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[10][5] = eri2_aB_PS__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[10][6] = eri2_aB_PS__0__I__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[10][7] = eri2_aB_PS__0__K__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[10][8] = eri2_aB_PS__0__L__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[10][9] = eri2_aB_PS__0__M__1___TwoPRep_unit__0__unit__1___Ab__up_0;

libint2_build_2eri[10][10] = eri2_aB_PS__0__PS__1___TwoPRep_unit__0__unit__1___Ab__up_0;

}
#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif


