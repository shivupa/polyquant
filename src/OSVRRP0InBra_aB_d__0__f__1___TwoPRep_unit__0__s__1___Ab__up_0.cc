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
void OSVRRP0InBra_aB_d__0__f__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp148;
fp148 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp148 * src3[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+9)*1+lsi)*1], src1[((hsi*10+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp125;
fp125 = fp186 * fp126;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*30+29)*1+lsi)*1], fp125);
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
target[((hsi*60+29)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp163;
fp163 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp163 * src3[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+8)*1+lsi)*1], src1[((hsi*10+8)*1+lsi)*1]);
LIBINT2_REALTYPE fp130;
fp130 = fp186 * fp131;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*30+28)*1+lsi)*1], fp130);
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
target[((hsi*60+28)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp67;
fp67 = fp163 * src3[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+7)*1+lsi)*1], src1[((hsi*10+7)*1+lsi)*1]);
LIBINT2_REALTYPE fp137;
fp137 = fp186 * fp138;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*30+27)*1+lsi)*1], fp137);
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
target[((hsi*60+27)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp71;
fp71 = fp148 * src3[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+6)*1+lsi)*1], src1[((hsi*10+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp142;
fp142 = fp186 * fp143;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*30+26)*1+lsi)*1], fp142);
LIBINT2_REALTYPE fp70;
fp70 = fp72 + fp71;
target[((hsi*60+26)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+5)*1+lsi)*1], src1[((hsi*10+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp150;
fp150 = fp186 * fp151;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*30+25)*1+lsi)*1], fp150);
target[((hsi*60+25)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
fp77 = fp148 * src3[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+4)*1+lsi)*1], src1[((hsi*10+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp157;
fp157 = fp186 * fp158;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*30+24)*1+lsi)*1], fp157);
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
target[((hsi*60+24)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+3)*1+lsi)*1], src1[((hsi*10+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp165;
fp165 = fp186 * fp166;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*30+23)*1+lsi)*1], fp165);
target[((hsi*60+23)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp181;
fp181 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp181 * src3[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+2)*1+lsi)*1], src1[((hsi*10+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp170;
fp170 = fp186 * fp171;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*30+22)*1+lsi)*1], fp170);
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
target[((hsi*60+22)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+1)*1+lsi)*1], src1[((hsi*10+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp175;
fp175 = fp186 * fp176;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*30+21)*1+lsi)*1], fp175);
target[((hsi*60+21)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*10+0)*1+lsi)*1], src1[((hsi*10+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp183;
fp183 = fp186 * fp184;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*30+20)*1+lsi)*1], fp183);
target[((hsi*60+20)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp148 * src3[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*30+19)*1+lsi)*1], fp125);
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
target[((hsi*60+19)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp95;
fp95 = fp148 * src3[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*30+18)*1+lsi)*1], fp130);
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
target[((hsi*60+18)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*30+17)*1+lsi)*1], fp137);
target[((hsi*60+17)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp163 * src3[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*30+16)*1+lsi)*1], fp142);
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
target[((hsi*60+16)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * src3[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*30+0)*1+lsi)*1], fp183);
LIBINT2_REALTYPE fp179;
fp179 = fp182 + fp180;
target[((hsi*60+0)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*30+14)*1+lsi)*1], fp157);
target[((hsi*60+14)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
fp111 = fp148 * src3[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*30+13)*1+lsi)*1], fp165);
LIBINT2_REALTYPE fp110;
fp110 = fp112 + fp111;
target[((hsi*60+13)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*30+12)*1+lsi)*1], fp170);
target[((hsi*60+12)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp181 * src3[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*30+11)*1+lsi)*1], fp175);
LIBINT2_REALTYPE fp116;
fp116 = fp118 + fp117;
target[((hsi*60+11)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*30+10)*1+lsi)*1], fp183);
target[((hsi*60+10)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp148 * src3[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*30+9)*1+lsi)*1], fp125);
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
target[((hsi*60+9)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*30+8)*1+lsi)*1], fp130);
target[((hsi*60+8)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp135;
fp135 = fp148 * src3[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*30+7)*1+lsi)*1], fp137);
LIBINT2_REALTYPE fp134;
fp134 = fp136 + fp135;
target[((hsi*60+7)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*30+6)*1+lsi)*1], fp142);
target[((hsi*60+6)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * src3[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*30+5)*1+lsi)*1], fp150);
LIBINT2_REALTYPE fp146;
fp146 = fp149 + fp147;
target[((hsi*60+5)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp155;
fp155 = fp163 * src3[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*30+4)*1+lsi)*1], fp157);
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
target[((hsi*60+4)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * src3[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*30+3)*1+lsi)*1], fp165);
LIBINT2_REALTYPE fp161;
fp161 = fp164 + fp162;
target[((hsi*60+3)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*30+2)*1+lsi)*1], fp170);
target[((hsi*60+2)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp178;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*30+1)*1+lsi)*1], fp175);
target[((hsi*60+1)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp105;
fp105 = fp163 * src3[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*30+15)*1+lsi)*1], fp150);
LIBINT2_REALTYPE fp104;
fp104 = fp106 + fp105;
target[((hsi*60+15)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp1;
fp1 = fp148 * src3[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+19)*1+lsi)*1], fp1);
target[((hsi*60+59)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+18)*1+lsi)*1], fp101);
target[((hsi*60+58)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp6;
fp6 = fp163 * src3[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+17)*1+lsi)*1], fp6);
target[((hsi*60+57)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp9;
fp9 = fp148 * src3[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+16)*1+lsi)*1], fp9);
target[((hsi*60+56)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->WP_z[vi] * src0[((hsi*30+15)*1+lsi)*1];
target[((hsi*60+55)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+14)*1+lsi)*1], fp111);
target[((hsi*60+54)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_z[vi] * src0[((hsi*30+13)*1+lsi)*1];
target[((hsi*60+53)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp16;
fp16 = fp181 * src3[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+12)*1+lsi)*1], fp16);
target[((hsi*60+52)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WP_z[vi] * src0[((hsi*30+11)*1+lsi)*1];
target[((hsi*60+51)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp19;
fp19 = inteval->WP_z[vi] * src0[((hsi*30+10)*1+lsi)*1];
target[((hsi*60+50)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp21;
fp21 = fp148 * src3[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+9)*1+lsi)*1], fp21);
target[((hsi*60+49)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp45;
fp45 = fp163 * src3[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+8)*1+lsi)*1], fp45);
target[((hsi*60+48)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+7)*1+lsi)*1], fp155);
target[((hsi*60+47)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+6)*1+lsi)*1], fp147);
target[((hsi*60+46)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_y[vi] * src0[((hsi*30+0)*1+lsi)*1];
target[((hsi*60+30)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp51;
fp51 = fp148 * src3[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+4)*1+lsi)*1], fp51);
target[((hsi*60+44)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp32;
fp32 = inteval->WP_z[vi] * src0[((hsi*30+3)*1+lsi)*1];
target[((hsi*60+43)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp34;
fp34 = fp181 * src3[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*30+2)*1+lsi)*1], fp34);
target[((hsi*60+42)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_z[vi] * src0[((hsi*30+1)*1+lsi)*1];
target[((hsi*60+41)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_z[vi] * src0[((hsi*30+0)*1+lsi)*1];
target[((hsi*60+40)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp39;
fp39 = fp148 * src3[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+9)*1+lsi)*1], fp39);
target[((hsi*60+39)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+8)*1+lsi)*1], fp135);
target[((hsi*60+38)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_y[vi] * src0[((hsi*30+7)*1+lsi)*1];
target[((hsi*60+37)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+6)*1+lsi)*1], fp45);
target[((hsi*60+36)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+5)*1+lsi)*1], fp162);
target[((hsi*60+35)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp49;
fp49 = inteval->WP_y[vi] * src0[((hsi*30+4)*1+lsi)*1];
target[((hsi*60+34)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+3)*1+lsi)*1], fp51);
target[((hsi*60+33)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_y[vi] * src0[((hsi*30+2)*1+lsi)*1];
target[((hsi*60+32)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp55;
fp55 = fp181 * src3[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*30+1)*1+lsi)*1], fp55);
target[((hsi*60+31)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp29;
fp29 = inteval->WP_z[vi] * src0[((hsi*30+5)*1+lsi)*1];
target[((hsi*60+45)*1+lsi)*1] = fp29;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 188 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
