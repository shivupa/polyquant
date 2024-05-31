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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp106;
fp106 = fp107 + src5[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->oo2z[vi] * fp106;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+17)*1+lsi)*1], fp105);
target[((hsi*36+17)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp112;
fp112 = fp113 + src5[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->oo2z[vi] * fp112;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+16)*1+lsi)*1], fp111);
target[((hsi*36+16)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp118;
fp118 = fp119 + src5[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+15)*1+lsi)*1], fp117);
target[((hsi*36+15)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src5[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->oo2z[vi] * fp124;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+5)*1+lsi)*1], fp123);
target[((hsi*36+14)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp128;
fp128 = fp129 + src5[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->oo2z[vi] * fp128;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+6)*1+lsi)*1], fp127);
target[((hsi*36+13)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp135;
fp135 = 5.0000000000000000e-01 * src4[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp134;
fp134 = fp136 + fp135;
LIBINT2_REALTYPE fp133;
fp133 = inteval->oo2z[vi] * fp134;
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+12)*1+lsi)*1], fp133);
target[((hsi*36+12)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + src5[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = inteval->oo2z[vi] * fp141;
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+3)*1+lsi)*1], fp140);
target[((hsi*36+11)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp145;
fp145 = fp146 + src5[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = inteval->oo2z[vi] * fp145;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+4)*1+lsi)*1], fp144);
target[((hsi*36+10)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp204;
fp204 = 5.0000000000000000e-01 * src3[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = 5.0000000000000000e-01 * src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
LIBINT2_REALTYPE fp207;
fp207 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp205;
fp205 = fp207 + fp206;
LIBINT2_REALTYPE fp203;
fp203 = fp205 - fp204;
LIBINT2_REALTYPE fp202;
fp202 = inteval->oo2z[vi] * fp203;
LIBINT2_REALTYPE fp209;
LIBINT2_REALTYPE fp201;
fp201 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*28+0)*1+lsi)*1], fp202);
target[((hsi*36+0)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp158;
fp158 = fp159 + src5[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->oo2z[vi] * fp158;
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+8)*1+lsi)*1], fp157);
target[((hsi*36+8)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp164;
fp164 = fp165 + src5[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->oo2z[vi] * fp164;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+7)*1+lsi)*1], fp163);
target[((hsi*36+7)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp170;
fp170 = 0.0000000000000000e+00 + src5[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = inteval->oo2z[vi] * fp170;
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+1)*1+lsi)*1], fp169);
target[((hsi*36+6)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp175;
fp175 = 5.0000000000000000e-01 * src4[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp174;
fp174 = fp176 + fp175;
LIBINT2_REALTYPE fp173;
fp173 = inteval->oo2z[vi] * fp174;
LIBINT2_REALTYPE fp178;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+5)*1+lsi)*1], fp173);
target[((hsi*36+5)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + src5[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = inteval->oo2z[vi] * fp181;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+0)*1+lsi)*1], fp180);
target[((hsi*36+4)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp185;
fp185 = libint2::fma_plus(5.0000000000000000e-01, src4[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp184;
fp184 = inteval->oo2z[vi] * fp185;
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+0)*1+lsi)*1], fp184);
target[((hsi*36+3)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp192;
LIBINT2_REALTYPE fp191;
fp191 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp190;
fp190 = fp191 + src5[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->oo2z[vi] * fp190;
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+2)*1+lsi)*1], fp189);
target[((hsi*36+2)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp197;
fp197 = 5.0000000000000000e-01 * src4[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp198;
fp198 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp196;
fp196 = fp198 + fp197;
LIBINT2_REALTYPE fp195;
fp195 = inteval->oo2z[vi] * fp196;
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp194;
fp194 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+1)*1+lsi)*1], fp195);
target[((hsi*36+1)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp152;
fp152 = 5.0000000000000000e-01 * src4[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp151;
fp151 = fp153 + fp152;
LIBINT2_REALTYPE fp150;
fp150 = inteval->oo2z[vi] * fp151;
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+3)*1+lsi)*1], fp150);
target[((hsi*36+9)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src5[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+27)*1+lsi)*1], fp1);
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src5[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+23)*1+lsi)*1], fp7);
target[((hsi*36+34)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src5[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+24)*1+lsi)*1], fp13);
target[((hsi*36+33)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src5[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+20)*1+lsi)*1], fp19);
target[((hsi*36+32)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src5[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+21)*1+lsi)*1], fp25);
target[((hsi*36+31)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src5[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+18)*1+lsi)*1], fp31);
target[((hsi*36+30)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp36;
fp36 = fp37 + src5[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->oo2z[vi] * fp36;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+26)*1+lsi)*1], fp35);
target[((hsi*36+29)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp42;
fp42 = fp43 + src5[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+25)*1+lsi)*1], fp41);
target[((hsi*36+28)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp100;
fp100 = 5.0000000000000000e-01 * src4[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp99;
fp99 = fp101 + fp100;
LIBINT2_REALTYPE fp98;
fp98 = inteval->oo2z[vi] * fp99;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+9)*1+lsi)*1], fp98);
target[((hsi*36+18)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp54;
fp54 = fp55 + src5[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->oo2z[vi] * fp54;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+19)*1+lsi)*1], fp53);
target[((hsi*36+26)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp60;
fp60 = fp61 + src5[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->oo2z[vi] * fp60;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+14)*1+lsi)*1], fp59);
target[((hsi*36+25)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src5[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->oo2z[vi] * fp66;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+12)*1+lsi)*1], fp65);
target[((hsi*36+24)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp70;
fp70 = fp71 + src5[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+13)*1+lsi)*1], fp69);
target[((hsi*36+23)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp77;
fp77 = 5.0000000000000000e-01 * src4[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
LIBINT2_REALTYPE fp75;
fp75 = inteval->oo2z[vi] * fp76;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+18)*1+lsi)*1], fp75);
target[((hsi*36+22)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp83;
fp83 = fp84 + src5[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+11)*1+lsi)*1], fp82);
target[((hsi*36+21)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src5[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2z[vi] * fp89;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+9)*1+lsi)*1], fp88);
target[((hsi*36+20)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp93;
fp93 = fp94 + src5[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+10)*1+lsi)*1], fp92);
target[((hsi*36+19)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp48;
fp48 = fp49 + src5[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp48;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+22)*1+lsi)*1], fp47);
target[((hsi*36+27)*1+lsi)*1] = fp46;
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
