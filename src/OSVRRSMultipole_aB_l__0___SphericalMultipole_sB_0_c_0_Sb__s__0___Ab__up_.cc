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
void OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2z[vi] * fp105;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+11)*1+lsi)*1], fp104);
target[((hsi*45+21)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp108;
fp108 = inteval->PA_z[vi] * src0[((hsi*36+9)*1+lsi)*1];
target[((hsi*45+20)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp110;
fp110 = inteval->oo2z[vi] * fp111;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+10)*1+lsi)*1], fp110);
target[((hsi*45+19)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp115;
fp115 = inteval->oo2z[vi] * fp116;
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+9)*1+lsi)*1], fp115);
target[((hsi*45+18)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp120;
fp120 = inteval->oo2z[vi] * fp121;
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+17)*1+lsi)*1], fp120);
target[((hsi*45+17)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp125;
fp125 = inteval->oo2z[vi] * fp126;
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+16)*1+lsi)*1], fp125);
target[((hsi*45+16)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp130;
fp130 = inteval->oo2z[vi] * fp131;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+15)*1+lsi)*1], fp130);
target[((hsi*45+15)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp134;
fp134 = inteval->PA_z[vi] * src0[((hsi*36+5)*1+lsi)*1];
target[((hsi*45+14)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp136;
fp136 = inteval->oo2z[vi] * fp137;
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+6)*1+lsi)*1], fp136);
target[((hsi*45+13)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp141;
fp141 = inteval->oo2z[vi] * fp142;
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+12)*1+lsi)*1], fp141);
target[((hsi*45+12)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp185;
fp185 = inteval->oo2z[vi] * fp186;
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*36+0)*1+lsi)*1], fp185);
target[((hsi*45+0)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp147;
fp147 = inteval->oo2z[vi] * fp148;
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+4)*1+lsi)*1], fp147);
target[((hsi*45+10)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp152;
fp152 = inteval->oo2z[vi] * fp153;
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+3)*1+lsi)*1], fp152);
target[((hsi*45+9)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*28+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp157;
fp157 = inteval->oo2z[vi] * fp158;
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+8)*1+lsi)*1], fp157);
target[((hsi*45+8)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*28+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp162;
fp162 = inteval->oo2z[vi] * fp163;
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+7)*1+lsi)*1], fp162);
target[((hsi*45+7)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp166;
fp166 = inteval->PA_z[vi] * src0[((hsi*36+1)*1+lsi)*1];
target[((hsi*45+6)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*28+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp168;
fp168 = inteval->oo2z[vi] * fp169;
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+5)*1+lsi)*1], fp168);
target[((hsi*45+5)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp172;
fp172 = inteval->PA_z[vi] * src0[((hsi*36+0)*1+lsi)*1];
target[((hsi*45+4)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp173;
fp173 = inteval->PA_y[vi] * src0[((hsi*36+0)*1+lsi)*1];
target[((hsi*45+3)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*28+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp175;
fp175 = inteval->oo2z[vi] * fp176;
LIBINT2_REALTYPE fp178;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+2)*1+lsi)*1], fp175);
target[((hsi*45+2)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp181;
fp181 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*28+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp180;
fp180 = inteval->oo2z[vi] * fp181;
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+1)*1+lsi)*1], fp180);
target[((hsi*45+1)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp145;
fp145 = inteval->PA_z[vi] * src0[((hsi*36+3)*1+lsi)*1];
target[((hsi*45+11)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+23)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+34)*1+lsi)*1], fp1);
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+32)*1+lsi)*1], fp6);
target[((hsi*45+43)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+30)*1+lsi)*1], fp11);
target[((hsi*45+42)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+27)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+35)*1+lsi)*1], fp16);
target[((hsi*45+41)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+24)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+33)*1+lsi)*1], fp21);
target[((hsi*45+40)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = inteval->oo2z[vi] * fp27;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+31)*1+lsi)*1], fp26);
target[((hsi*45+39)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+24)*1+lsi)*1], fp31);
target[((hsi*45+38)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+25)*1+lsi)*1], fp36);
target[((hsi*45+37)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PA_z[vi] * src0[((hsi*36+22)*1+lsi)*1];
target[((hsi*45+36)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2z[vi] * fp43;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+23)*1+lsi)*1], fp42);
target[((hsi*45+35)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp99;
fp99 = inteval->oo2z[vi] * fp100;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+22)*1+lsi)*1], fp99);
target[((hsi*45+22)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+21)*1+lsi)*1], fp52);
target[((hsi*45+33)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp56;
fp56 = inteval->PA_z[vi] * src0[((hsi*36+18)*1+lsi)*1];
target[((hsi*45+32)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2z[vi] * fp59;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+19)*1+lsi)*1], fp58);
target[((hsi*45+31)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp63;
fp63 = inteval->oo2z[vi] * fp64;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+18)*1+lsi)*1], fp63);
target[((hsi*45+30)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+26)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp68;
fp68 = inteval->oo2z[vi] * fp69;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+29)*1+lsi)*1], fp68);
target[((hsi*45+29)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+25)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp73;
fp73 = inteval->oo2z[vi] * fp74;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+28)*1+lsi)*1], fp73);
target[((hsi*45+28)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp78;
fp78 = inteval->oo2z[vi] * fp79;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+27)*1+lsi)*1], fp78);
target[((hsi*45+27)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp83;
fp83 = inteval->oo2z[vi] * fp84;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+26)*1+lsi)*1], fp83);
target[((hsi*45+26)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2z[vi] * fp89;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+14)*1+lsi)*1], fp88);
target[((hsi*45+25)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PA_z[vi] * src0[((hsi*36+12)*1+lsi)*1];
target[((hsi*45+24)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp94;
fp94 = inteval->oo2z[vi] * fp95;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+13)*1+lsi)*1], fp94);
target[((hsi*45+23)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp48;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+20)*1+lsi)*1], fp47);
target[((hsi*45+34)*1+lsi)*1] = fp46;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 189 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
