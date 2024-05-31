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

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void OSVRRP1InBra_aB_g__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2ze[vi] * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->WQ_x[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+7)*1+lsi)*1], fp106);
LIBINT2_REALTYPE fp103;
fp103 = fp105 + fp104;
target[((hsi*45+21)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp129;
fp129 = inteval->oo2ze[vi] * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->WQ_z[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+6)*1+lsi)*1], fp110);
LIBINT2_REALTYPE fp108;
fp108 = fp109 + fp129;
target[((hsi*45+20)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp155;
fp155 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp155 * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->WQ_y[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+6)*1+lsi)*1], fp115);
LIBINT2_REALTYPE fp112;
fp112 = fp114 + fp113;
target[((hsi*45+19)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WQ_x[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+6)*1+lsi)*1], fp118);
target[((hsi*45+18)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp121;
fp121 = inteval->WQ_z[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+5)*1+lsi)*1], fp121);
target[((hsi*45+17)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp124;
fp124 = fp155 * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = inteval->WQ_y[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+5)*1+lsi)*1], fp126);
LIBINT2_REALTYPE fp123;
fp123 = fp125 + fp124;
target[((hsi*45+16)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp131;
fp131 = inteval->WQ_x[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+5)*1+lsi)*1], fp131);
LIBINT2_REALTYPE fp128;
fp128 = fp130 + fp129;
target[((hsi*45+15)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp149;
fp149 = inteval->oo2ze[vi] * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->WQ_z[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+4)*1+lsi)*1], fp135);
LIBINT2_REALTYPE fp133;
fp133 = fp134 + fp149;
target[((hsi*45+14)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp138;
fp138 = inteval->WQ_y[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+4)*1+lsi)*1], fp138);
target[((hsi*45+13)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp141;
fp141 = fp155 * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->WQ_x[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+4)*1+lsi)*1], fp143);
LIBINT2_REALTYPE fp140;
fp140 = fp142 + fp141;
target[((hsi*45+12)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp189;
fp189 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp188;
fp188 = fp189 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = inteval->WQ_x[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+0)*1+lsi)*1], fp191);
LIBINT2_REALTYPE fp187;
fp187 = fp190 + fp188;
target[((hsi*45+0)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp151;
fp151 = inteval->WQ_y[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+3)*1+lsi)*1], fp151);
LIBINT2_REALTYPE fp148;
fp148 = fp150 + fp149;
target[((hsi*45+10)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->WQ_x[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+3)*1+lsi)*1], fp157);
LIBINT2_REALTYPE fp153;
fp153 = fp156 + fp154;
target[((hsi*45+9)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp160;
fp160 = fp189 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = inteval->WQ_z[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+2)*1+lsi)*1], fp162);
LIBINT2_REALTYPE fp159;
fp159 = fp161 + fp160;
target[((hsi*45+8)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp165;
fp165 = inteval->WQ_y[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+2)*1+lsi)*1], fp165);
target[((hsi*45+7)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp168;
fp168 = inteval->WQ_x[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+2)*1+lsi)*1], fp168);
target[((hsi*45+6)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp171;
fp171 = inteval->WQ_z[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+1)*1+lsi)*1], fp171);
target[((hsi*45+5)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp174;
fp174 = fp189 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = inteval->WQ_y[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+1)*1+lsi)*1], fp176);
LIBINT2_REALTYPE fp173;
fp173 = fp175 + fp174;
target[((hsi*45+4)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp179;
fp179 = inteval->WQ_x[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp178;
fp178 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+1)*1+lsi)*1], fp179);
target[((hsi*45+3)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp182;
fp182 = inteval->WQ_z[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp181;
fp181 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+0)*1+lsi)*1], fp182);
target[((hsi*45+2)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp185;
fp185 = inteval->WQ_y[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+0)*1+lsi)*1], fp185);
target[((hsi*45+1)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp146;
fp146 = inteval->WQ_z[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+3)*1+lsi)*1], fp146);
target[((hsi*45+11)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp79;
fp79 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp79 * src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->WQ_z[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp1;
fp1 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+14)*1+lsi)*1], fp2);
LIBINT2_REALTYPE fp0;
fp0 = fp1 + fp39;
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp5;
fp5 = inteval->oo2ze[vi] * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->WQ_y[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+14)*1+lsi)*1], fp7);
LIBINT2_REALTYPE fp4;
fp4 = fp6 + fp5;
target[((hsi*45+43)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp10;
fp10 = inteval->oo2ze[vi] * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->WQ_x[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+14)*1+lsi)*1], fp12);
LIBINT2_REALTYPE fp9;
fp9 = fp11 + fp10;
target[((hsi*45+42)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp15;
fp15 = inteval->oo2ze[vi] * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->WQ_z[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+13)*1+lsi)*1], fp17);
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
target[((hsi*45+41)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WQ_y[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+13)*1+lsi)*1], fp21);
LIBINT2_REALTYPE fp19;
fp19 = fp20 + fp39;
target[((hsi*45+40)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp24;
fp24 = inteval->oo2ze[vi] * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->WQ_x[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+13)*1+lsi)*1], fp26);
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
target[((hsi*45+39)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2ze[vi] * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->WQ_z[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+12)*1+lsi)*1], fp31);
LIBINT2_REALTYPE fp28;
fp28 = fp30 + fp29;
target[((hsi*45+38)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp34;
fp34 = inteval->oo2ze[vi] * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->WQ_y[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+12)*1+lsi)*1], fp36);
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
target[((hsi*45+37)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WQ_x[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+12)*1+lsi)*1], fp41);
LIBINT2_REALTYPE fp38;
fp38 = fp40 + fp39;
target[((hsi*45+36)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp44;
fp44 = fp79 * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->WQ_z[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+11)*1+lsi)*1], fp46);
LIBINT2_REALTYPE fp43;
fp43 = fp45 + fp44;
target[((hsi*45+35)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp101;
fp101 = inteval->WQ_y[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+7)*1+lsi)*1], fp101);
target[((hsi*45+22)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WQ_x[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+11)*1+lsi)*1], fp54);
target[((hsi*45+33)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp57;
fp57 = fp79 * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->WQ_z[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+10)*1+lsi)*1], fp59);
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
target[((hsi*45+32)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WQ_y[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+10)*1+lsi)*1], fp62);
target[((hsi*45+31)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp65;
fp65 = fp79 * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->WQ_x[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+10)*1+lsi)*1], fp67);
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
target[((hsi*45+30)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp70;
fp70 = inteval->WQ_z[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+9)*1+lsi)*1], fp70);
target[((hsi*45+29)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp73;
fp73 = fp79 * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->WQ_y[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+9)*1+lsi)*1], fp75);
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
target[((hsi*45+28)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->WQ_x[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+9)*1+lsi)*1], fp81);
LIBINT2_REALTYPE fp77;
fp77 = fp80 + fp78;
target[((hsi*45+27)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp84;
fp84 = fp155 * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->WQ_z[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+8)*1+lsi)*1], fp86);
LIBINT2_REALTYPE fp83;
fp83 = fp85 + fp84;
target[((hsi*45+26)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WQ_y[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+8)*1+lsi)*1], fp90);
LIBINT2_REALTYPE fp88;
fp88 = fp89 + fp104;
target[((hsi*45+25)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp93;
fp93 = inteval->WQ_x[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+8)*1+lsi)*1], fp93);
target[((hsi*45+24)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp96;
fp96 = fp155 * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->WQ_z[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+7)*1+lsi)*1], fp98);
LIBINT2_REALTYPE fp95;
fp95 = fp97 + fp96;
target[((hsi*45+23)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp49;
fp49 = fp79 * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->WQ_y[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+11)*1+lsi)*1], fp51);
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
target[((hsi*45+34)*1+lsi)*1] = fp48;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 193 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
