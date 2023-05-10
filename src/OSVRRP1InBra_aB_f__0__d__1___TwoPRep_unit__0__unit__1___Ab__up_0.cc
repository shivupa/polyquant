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
void OSVRRP1InBra_aB_f__0__d__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp127;
fp127 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp126;
fp126 = fp127 * src3[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*30+13)*1+lsi)*1], fp126);
target[((hsi*60+29)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp121;
fp121 = fp127 * src3[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*30+12)*1+lsi)*1], fp121);
target[((hsi*60+28)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp104;
fp104 = inteval->WQ_y[vi] * src0[((hsi*30+12)*1+lsi)*1];
target[((hsi*60+27)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp106;
fp106 = fp127 * src3[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*10+4)*1+lsi)*1], src1[((hsi*10+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp114;
fp114 = fp186 * fp115;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*30+14)*1+lsi)*1], fp114);
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
target[((hsi*60+26)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*30+13)*1+lsi)*1], fp114);
target[((hsi*60+25)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp132;
fp132 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp112;
fp112 = fp132 * src3[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_minus(inteval->WQ_x[vi], src0[((hsi*30+12)*1+lsi)*1], fp114);
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
target[((hsi*60+24)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WQ_z[vi] * src0[((hsi*30+10)*1+lsi)*1];
target[((hsi*60+23)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp119;
fp119 = inteval->WQ_z[vi] * src0[((hsi*30+9)*1+lsi)*1];
target[((hsi*60+22)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*30+9)*1+lsi)*1], fp121);
target[((hsi*60+21)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*10+3)*1+lsi)*1], src1[((hsi*10+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp134;
fp134 = fp186 * fp135;
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*30+11)*1+lsi)*1], fp134);
target[((hsi*60+20)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*30+10)*1+lsi)*1], fp134);
LIBINT2_REALTYPE fp125;
fp125 = fp128 + fp126;
target[((hsi*60+19)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * src3[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_minus(inteval->WQ_x[vi], src0[((hsi*30+9)*1+lsi)*1], fp134);
LIBINT2_REALTYPE fp130;
fp130 = fp133 + fp131;
target[((hsi*60+18)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp181;
fp181 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp139;
fp139 = fp181 * src3[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*30+7)*1+lsi)*1], fp139);
target[((hsi*60+17)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp142;
fp142 = fp181 * src3[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*30+6)*1+lsi)*1], fp142);
target[((hsi*60+16)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * src3[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*10+0)*1+lsi)*1], src1[((hsi*10+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp183;
fp183 = fp186 * fp184;
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_minus(inteval->WQ_x[vi], src0[((hsi*30+0)*1+lsi)*1], fp183);
LIBINT2_REALTYPE fp179;
fp179 = fp182 + fp180;
target[((hsi*60+0)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp146;
fp146 = fp181 * src3[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*10+2)*1+lsi)*1], src1[((hsi*10+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp152;
fp152 = fp186 * fp153;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*30+8)*1+lsi)*1], fp152);
LIBINT2_REALTYPE fp145;
fp145 = fp147 + fp146;
target[((hsi*60+14)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*30+7)*1+lsi)*1], fp152);
target[((hsi*60+13)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_minus(inteval->WQ_x[vi], src0[((hsi*30+6)*1+lsi)*1], fp152);
target[((hsi*60+12)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp156;
fp156 = inteval->WQ_z[vi] * src0[((hsi*30+4)*1+lsi)*1];
target[((hsi*60+11)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp157;
fp157 = inteval->WQ_z[vi] * src0[((hsi*30+3)*1+lsi)*1];
target[((hsi*60+10)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp159;
fp159 = fp181 * src3[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*30+3)*1+lsi)*1], fp159);
target[((hsi*60+9)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*10+1)*1+lsi)*1], src1[((hsi*10+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp168;
fp168 = fp186 * fp169;
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*30+5)*1+lsi)*1], fp168);
target[((hsi*60+8)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp164;
fp164 = fp181 * src3[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*30+4)*1+lsi)*1], fp168);
LIBINT2_REALTYPE fp163;
fp163 = fp165 + fp164;
target[((hsi*60+7)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_minus(inteval->WQ_x[vi], src0[((hsi*30+3)*1+lsi)*1], fp168);
target[((hsi*60+6)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp172;
fp172 = inteval->WQ_z[vi] * src0[((hsi*30+1)*1+lsi)*1];
target[((hsi*60+5)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp173;
fp173 = inteval->WQ_z[vi] * src0[((hsi*30+0)*1+lsi)*1];
target[((hsi*60+4)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp174;
fp174 = inteval->WQ_y[vi] * src0[((hsi*30+0)*1+lsi)*1];
target[((hsi*60+3)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*30+2)*1+lsi)*1], fp183);
target[((hsi*60+2)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp178;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*30+1)*1+lsi)*1], fp183);
target[((hsi*60+1)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp144;
fp144 = inteval->WQ_y[vi] * src0[((hsi*30+6)*1+lsi)*1];
target[((hsi*60+15)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp1;
fp1 = fp127 * src3[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*30+28)*1+lsi)*1], fp1);
target[((hsi*60+59)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp4;
fp4 = fp127 * src3[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*30+27)*1+lsi)*1], fp4);
target[((hsi*60+58)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp7;
fp7 = fp127 * src3[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*30+27)*1+lsi)*1], fp7);
target[((hsi*60+57)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp10;
fp10 = fp127 * src3[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*10+9)*1+lsi)*1], src1[((hsi*10+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp20;
fp20 = fp186 * fp21;
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*30+29)*1+lsi)*1], fp20);
LIBINT2_REALTYPE fp9;
fp9 = fp11 + fp10;
target[((hsi*60+56)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp14;
fp14 = fp127 * src3[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*30+28)*1+lsi)*1], fp20);
LIBINT2_REALTYPE fp13;
fp13 = fp15 + fp14;
target[((hsi*60+55)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp18;
fp18 = fp127 * src3[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_minus(inteval->WQ_x[vi], src0[((hsi*30+27)*1+lsi)*1], fp20);
LIBINT2_REALTYPE fp17;
fp17 = fp19 + fp18;
target[((hsi*60+54)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp75;
fp75 = fp132 * src3[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*30+25)*1+lsi)*1], fp75);
target[((hsi*60+53)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp68;
fp68 = fp132 * src3[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*30+24)*1+lsi)*1], fp68);
target[((hsi*60+52)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp56;
fp56 = fp127 * src3[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*30+24)*1+lsi)*1], fp56);
target[((hsi*60+51)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
fp31 = fp132 * src3[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*10+8)*1+lsi)*1], src1[((hsi*10+8)*1+lsi)*1]);
LIBINT2_REALTYPE fp39;
fp39 = fp186 * fp40;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*30+26)*1+lsi)*1], fp39);
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
target[((hsi*60+50)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp35;
fp35 = fp127 * src3[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*30+25)*1+lsi)*1], fp39);
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
target[((hsi*60+49)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_minus(inteval->WQ_x[vi], src0[((hsi*30+24)*1+lsi)*1], fp39);
target[((hsi*60+48)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp44;
fp44 = fp132 * src3[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*30+22)*1+lsi)*1], fp44);
target[((hsi*60+47)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*30+21)*1+lsi)*1], fp112);
target[((hsi*60+46)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp94;
fp94 = fp127 * src3[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*10+5)*1+lsi)*1], src1[((hsi*10+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp96;
fp96 = fp186 * fp97;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_minus(inteval->WQ_x[vi], src0[((hsi*30+15)*1+lsi)*1], fp96);
LIBINT2_REALTYPE fp93;
fp93 = fp95 + fp94;
target[((hsi*60+30)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp50;
fp50 = fp132 * src3[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*10+7)*1+lsi)*1], src1[((hsi*10+7)*1+lsi)*1]);
LIBINT2_REALTYPE fp58;
fp58 = fp186 * fp59;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*30+23)*1+lsi)*1], fp58);
LIBINT2_REALTYPE fp49;
fp49 = fp51 + fp50;
target[((hsi*60+44)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*30+22)*1+lsi)*1], fp58);
target[((hsi*60+43)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_minus(inteval->WQ_x[vi], src0[((hsi*30+21)*1+lsi)*1], fp58);
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
target[((hsi*60+42)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp63;
fp63 = fp127 * src3[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*30+19)*1+lsi)*1], fp63);
target[((hsi*60+41)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*30+18)*1+lsi)*1], fp94);
target[((hsi*60+40)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*30+18)*1+lsi)*1], fp68);
target[((hsi*60+39)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp71;
fp71 = fp127 * src3[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*10+6)*1+lsi)*1], src1[((hsi*10+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp79;
fp79 = fp186 * fp80;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*30+20)*1+lsi)*1], fp79);
LIBINT2_REALTYPE fp70;
fp70 = fp72 + fp71;
target[((hsi*60+38)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*30+19)*1+lsi)*1], fp79);
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
target[((hsi*60+37)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_minus(inteval->WQ_x[vi], src0[((hsi*30+18)*1+lsi)*1], fp79);
target[((hsi*60+36)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp83;
fp83 = inteval->WQ_z[vi] * src0[((hsi*30+16)*1+lsi)*1];
target[((hsi*60+35)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp84;
fp84 = inteval->WQ_z[vi] * src0[((hsi*30+15)*1+lsi)*1];
target[((hsi*60+34)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*30+15)*1+lsi)*1], fp131);
target[((hsi*60+33)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*30+17)*1+lsi)*1], fp96);
target[((hsi*60+32)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp90;
fp90 = fp132 * src3[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*30+16)*1+lsi)*1], fp96);
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
target[((hsi*60+31)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WQ_y[vi] * src0[((hsi*30+21)*1+lsi)*1];
target[((hsi*60+45)*1+lsi)*1] = fp48;
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
