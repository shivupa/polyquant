/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void HRRPart0ket0bra0h010p100(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, int lowdim) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int lsi = 0; lsi<lowdim; lsi++) {
{
const int vi = 0;
LIBINT2_REALTYPE fp87;
fp87 = 1.0000000000000000e+00 * src3[((hsi*21+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+9)*lowdim+lsi)*1], src0[((hsi*28+18)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp86;
fp86 = fp88 + fp87;
target[((hsi*63+30)*lowdim+lsi)*1] = fp86;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * src3[((hsi*21+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+8)*lowdim+lsi)*1], src0[((hsi*28+16)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
target[((hsi*63+29)*lowdim+lsi)*1] = fp90;
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * src3[((hsi*21+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+7)*lowdim+lsi)*1], src0[((hsi*28+17)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
target[((hsi*63+28)*lowdim+lsi)*1] = fp94;
LIBINT2_REALTYPE fp99;
fp99 = 1.0000000000000000e+00 * src3[((hsi*21+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+6)*lowdim+lsi)*1], src0[((hsi*28+6)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp98;
fp98 = fp100 + fp99;
target[((hsi*63+27)*lowdim+lsi)*1] = fp98;
LIBINT2_REALTYPE fp103;
fp103 = 1.0000000000000000e+00 * src3[((hsi*21+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+5)*lowdim+lsi)*1], src0[((hsi*28+5)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
target[((hsi*63+26)*lowdim+lsi)*1] = fp102;
LIBINT2_REALTYPE fp107;
fp107 = 1.0000000000000000e+00 * src3[((hsi*21+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+4)*lowdim+lsi)*1], src0[((hsi*28+11)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
target[((hsi*63+25)*lowdim+lsi)*1] = fp106;
LIBINT2_REALTYPE fp111;
fp111 = 1.0000000000000000e+00 * src3[((hsi*21+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+3)*lowdim+lsi)*1], src0[((hsi*28+9)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp110;
fp110 = fp112 + fp111;
target[((hsi*63+24)*lowdim+lsi)*1] = fp110;
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * src3[((hsi*21+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+2)*lowdim+lsi)*1], src0[((hsi*28+8)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
target[((hsi*63+23)*lowdim+lsi)*1] = fp114;
LIBINT2_REALTYPE fp119;
fp119 = 1.0000000000000000e+00 * src3[((hsi*21+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+1)*lowdim+lsi)*1], src0[((hsi*28+1)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
target[((hsi*63+22)*lowdim+lsi)*1] = fp118;
LIBINT2_REALTYPE fp123;
fp123 = 1.0000000000000000e+00 * src3[((hsi*21+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+0)*lowdim+lsi)*1], src0[((hsi*28+3)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
target[((hsi*63+21)*lowdim+lsi)*1] = fp122;
LIBINT2_REALTYPE fp127;
fp127 = 1.0000000000000000e+00 * src2[((hsi*21+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+20)*lowdim+lsi)*1], src0[((hsi*28+27)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp126;
fp126 = fp128 - fp127;
target[((hsi*63+20)*lowdim+lsi)*1] = fp126;
LIBINT2_REALTYPE fp131;
fp131 = 1.0000000000000000e+00 * src2[((hsi*21+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+19)*lowdim+lsi)*1], src0[((hsi*28+21)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp130;
fp130 = fp132 - fp131;
target[((hsi*63+19)*lowdim+lsi)*1] = fp130;
LIBINT2_REALTYPE fp135;
fp135 = 1.0000000000000000e+00 * src2[((hsi*21+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+18)*lowdim+lsi)*1], src0[((hsi*28+20)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp134;
fp134 = fp136 - fp135;
target[((hsi*63+18)*lowdim+lsi)*1] = fp134;
LIBINT2_REALTYPE fp139;
fp139 = 1.0000000000000000e+00 * src2[((hsi*21+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+17)*lowdim+lsi)*1], src0[((hsi*28+25)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp138;
fp138 = fp140 - fp139;
target[((hsi*63+17)*lowdim+lsi)*1] = fp138;
LIBINT2_REALTYPE fp207;
fp207 = 1.0000000000000000e+00 * src2[((hsi*21+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp209;
LIBINT2_REALTYPE fp208;
fp208 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+0)*lowdim+lsi)*1], src0[((hsi*28+0)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp206;
fp206 = fp208 - fp207;
target[((hsi*63+0)*lowdim+lsi)*1] = fp206;
LIBINT2_REALTYPE fp147;
fp147 = 1.0000000000000000e+00 * src2[((hsi*21+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+15)*lowdim+lsi)*1], src0[((hsi*28+19)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp146;
fp146 = fp148 - fp147;
target[((hsi*63+15)*lowdim+lsi)*1] = fp146;
LIBINT2_REALTYPE fp151;
fp151 = 1.0000000000000000e+00 * src2[((hsi*21+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+14)*lowdim+lsi)*1], src0[((hsi*28+23)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp150;
fp150 = fp152 - fp151;
target[((hsi*63+14)*lowdim+lsi)*1] = fp150;
LIBINT2_REALTYPE fp155;
fp155 = 1.0000000000000000e+00 * src2[((hsi*21+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+13)*lowdim+lsi)*1], src0[((hsi*28+24)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp154;
fp154 = fp156 - fp155;
target[((hsi*63+13)*lowdim+lsi)*1] = fp154;
LIBINT2_REALTYPE fp159;
fp159 = 1.0000000000000000e+00 * src2[((hsi*21+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+12)*lowdim+lsi)*1], src0[((hsi*28+18)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp158;
fp158 = fp160 - fp159;
target[((hsi*63+12)*lowdim+lsi)*1] = fp158;
LIBINT2_REALTYPE fp163;
fp163 = 1.0000000000000000e+00 * src2[((hsi*21+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+11)*lowdim+lsi)*1], src0[((hsi*28+11)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp162;
fp162 = fp164 - fp163;
target[((hsi*63+11)*lowdim+lsi)*1] = fp162;
LIBINT2_REALTYPE fp167;
fp167 = 1.0000000000000000e+00 * src2[((hsi*21+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+10)*lowdim+lsi)*1], src0[((hsi*28+10)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp166;
fp166 = fp168 - fp167;
target[((hsi*63+10)*lowdim+lsi)*1] = fp166;
LIBINT2_REALTYPE fp171;
fp171 = 1.0000000000000000e+00 * src2[((hsi*21+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+9)*lowdim+lsi)*1], src0[((hsi*28+9)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp170;
fp170 = fp172 - fp171;
target[((hsi*63+9)*lowdim+lsi)*1] = fp170;
LIBINT2_REALTYPE fp175;
fp175 = 1.0000000000000000e+00 * src2[((hsi*21+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+8)*lowdim+lsi)*1], src0[((hsi*28+17)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp174;
fp174 = fp176 - fp175;
target[((hsi*63+8)*lowdim+lsi)*1] = fp174;
LIBINT2_REALTYPE fp179;
fp179 = 1.0000000000000000e+00 * src2[((hsi*21+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+7)*lowdim+lsi)*1], src0[((hsi*28+15)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp178;
fp178 = fp180 - fp179;
target[((hsi*63+7)*lowdim+lsi)*1] = fp178;
LIBINT2_REALTYPE fp183;
fp183 = 1.0000000000000000e+00 * src2[((hsi*21+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+6)*lowdim+lsi)*1], src0[((hsi*28+14)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp182;
fp182 = fp184 - fp183;
target[((hsi*63+6)*lowdim+lsi)*1] = fp182;
LIBINT2_REALTYPE fp187;
fp187 = 1.0000000000000000e+00 * src2[((hsi*21+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+5)*lowdim+lsi)*1], src0[((hsi*28+12)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp186;
fp186 = fp188 - fp187;
target[((hsi*63+5)*lowdim+lsi)*1] = fp186;
LIBINT2_REALTYPE fp191;
fp191 = 1.0000000000000000e+00 * src2[((hsi*21+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+4)*lowdim+lsi)*1], src0[((hsi*28+4)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp190;
fp190 = fp192 - fp191;
target[((hsi*63+4)*lowdim+lsi)*1] = fp190;
LIBINT2_REALTYPE fp195;
fp195 = 1.0000000000000000e+00 * src2[((hsi*21+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp196;
fp196 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+3)*lowdim+lsi)*1], src0[((hsi*28+3)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp194;
fp194 = fp196 - fp195;
target[((hsi*63+3)*lowdim+lsi)*1] = fp194;
LIBINT2_REALTYPE fp199;
fp199 = 1.0000000000000000e+00 * src2[((hsi*21+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp200;
fp200 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+2)*lowdim+lsi)*1], src0[((hsi*28+7)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp198;
fp198 = fp200 - fp199;
target[((hsi*63+2)*lowdim+lsi)*1] = fp198;
LIBINT2_REALTYPE fp203;
fp203 = 1.0000000000000000e+00 * src2[((hsi*21+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+1)*lowdim+lsi)*1], src0[((hsi*28+5)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp202;
fp202 = fp204 - fp203;
target[((hsi*63+1)*lowdim+lsi)*1] = fp202;
LIBINT2_REALTYPE fp143;
fp143 = 1.0000000000000000e+00 * src2[((hsi*21+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->BA_x[vi], src1[((hsi*21+16)*lowdim+lsi)*1], src0[((hsi*28+26)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp142;
fp142 = fp144 - fp143;
target[((hsi*63+16)*lowdim+lsi)*1] = fp142;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+20)*lowdim+lsi)*1], src0[((hsi*28+26)*lowdim+lsi)*1]);
target[((hsi*63+62)*lowdim+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+19)*lowdim+lsi)*1], src0[((hsi*28+25)*lowdim+lsi)*1]);
target[((hsi*63+61)*lowdim+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+18)*lowdim+lsi)*1], src0[((hsi*28+27)*lowdim+lsi)*1]);
target[((hsi*63+60)*lowdim+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+17)*lowdim+lsi)*1], src0[((hsi*28+17)*lowdim+lsi)*1]);
target[((hsi*63+59)*lowdim+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+16)*lowdim+lsi)*1], src0[((hsi*28+16)*lowdim+lsi)*1]);
target[((hsi*63+58)*lowdim+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+15)*lowdim+lsi)*1], src0[((hsi*28+15)*lowdim+lsi)*1]);
target[((hsi*63+57)*lowdim+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+14)*lowdim+lsi)*1], src0[((hsi*28+24)*lowdim+lsi)*1]);
target[((hsi*63+56)*lowdim+lsi)*1] = fp12;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+13)*lowdim+lsi)*1], src0[((hsi*28+22)*lowdim+lsi)*1]);
target[((hsi*63+55)*lowdim+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+12)*lowdim+lsi)*1], src0[((hsi*28+23)*lowdim+lsi)*1]);
target[((hsi*63+54)*lowdim+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+11)*lowdim+lsi)*1], src0[((hsi*28+21)*lowdim+lsi)*1]);
target[((hsi*63+53)*lowdim+lsi)*1] = fp18;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+10)*lowdim+lsi)*1], src0[((hsi*28+19)*lowdim+lsi)*1]);
target[((hsi*63+52)*lowdim+lsi)*1] = fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+9)*lowdim+lsi)*1], src0[((hsi*28+20)*lowdim+lsi)*1]);
target[((hsi*63+51)*lowdim+lsi)*1] = fp22;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+8)*lowdim+lsi)*1], src0[((hsi*28+8)*lowdim+lsi)*1]);
target[((hsi*63+50)*lowdim+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+7)*lowdim+lsi)*1], src0[((hsi*28+7)*lowdim+lsi)*1]);
target[((hsi*63+49)*lowdim+lsi)*1] = fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+6)*lowdim+lsi)*1], src0[((hsi*28+13)*lowdim+lsi)*1]);
target[((hsi*63+48)*lowdim+lsi)*1] = fp28;
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * src3[((hsi*21+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+10)*lowdim+lsi)*1], src0[((hsi*28+21)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
target[((hsi*63+31)*lowdim+lsi)*1] = fp82;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+4)*lowdim+lsi)*1], src0[((hsi*28+10)*lowdim+lsi)*1]);
target[((hsi*63+46)*lowdim+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+3)*lowdim+lsi)*1], src0[((hsi*28+11)*lowdim+lsi)*1]);
target[((hsi*63+45)*lowdim+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+2)*lowdim+lsi)*1], src0[((hsi*28+2)*lowdim+lsi)*1]);
target[((hsi*63+44)*lowdim+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+1)*lowdim+lsi)*1], src0[((hsi*28+6)*lowdim+lsi)*1]);
target[((hsi*63+43)*lowdim+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+0)*lowdim+lsi)*1], src0[((hsi*28+4)*lowdim+lsi)*1]);
target[((hsi*63+42)*lowdim+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * src3[((hsi*21+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+20)*lowdim+lsi)*1], src0[((hsi*28+24)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
target[((hsi*63+41)*lowdim+lsi)*1] = fp42;
LIBINT2_REALTYPE fp47;
fp47 = 1.0000000000000000e+00 * src3[((hsi*21+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+19)*lowdim+lsi)*1], src0[((hsi*28+27)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
target[((hsi*63+40)*lowdim+lsi)*1] = fp46;
LIBINT2_REALTYPE fp51;
fp51 = 1.0000000000000000e+00 * src3[((hsi*21+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+18)*lowdim+lsi)*1], src0[((hsi*28+23)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
target[((hsi*63+39)*lowdim+lsi)*1] = fp50;
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * src3[((hsi*21+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+17)*lowdim+lsi)*1], src0[((hsi*28+26)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
target[((hsi*63+38)*lowdim+lsi)*1] = fp54;
LIBINT2_REALTYPE fp59;
fp59 = 1.0000000000000000e+00 * src3[((hsi*21+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+16)*lowdim+lsi)*1], src0[((hsi*28+22)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
target[((hsi*63+37)*lowdim+lsi)*1] = fp58;
LIBINT2_REALTYPE fp63;
fp63 = 1.0000000000000000e+00 * src3[((hsi*21+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+15)*lowdim+lsi)*1], src0[((hsi*28+25)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
target[((hsi*63+36)*lowdim+lsi)*1] = fp62;
LIBINT2_REALTYPE fp67;
fp67 = 1.0000000000000000e+00 * src3[((hsi*21+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+14)*lowdim+lsi)*1], src0[((hsi*28+14)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
target[((hsi*63+35)*lowdim+lsi)*1] = fp66;
LIBINT2_REALTYPE fp71;
fp71 = 1.0000000000000000e+00 * src3[((hsi*21+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+13)*lowdim+lsi)*1], src0[((hsi*28+13)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp70;
fp70 = fp72 + fp71;
target[((hsi*63+34)*lowdim+lsi)*1] = fp70;
LIBINT2_REALTYPE fp75;
fp75 = 1.0000000000000000e+00 * src3[((hsi*21+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+12)*lowdim+lsi)*1], src0[((hsi*28+12)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
target[((hsi*63+33)*lowdim+lsi)*1] = fp74;
LIBINT2_REALTYPE fp79;
fp79 = 1.0000000000000000e+00 * src3[((hsi*21+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BA_y[vi], src1[((hsi*21+11)*lowdim+lsi)*1], src0[((hsi*28+20)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp78;
fp78 = fp80 + fp79;
target[((hsi*63+32)*lowdim+lsi)*1] = fp78;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BA_z[vi], src1[((hsi*21+5)*lowdim+lsi)*1], src0[((hsi*28+14)*lowdim+lsi)*1]);
target[((hsi*63+47)*lowdim+lsi)*1] = fp30;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 210 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
