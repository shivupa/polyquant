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
void CR_DerivGaussP0InBra_aB_n001__0___ElecPot_s100__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp96;
fp96 = 1.0000000000000000e+00 * src1[((hsi*55+18)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+49)*1+lsi)*1], fp96);
target[((hsi*66+32)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp99;
fp99 = 4.0000000000000000e+00 * src1[((hsi*55+19)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+46)*1+lsi)*1], fp99);
target[((hsi*66+31)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = inteval->two_alpha0_bra[vi] * src0[((hsi*78+47)*1+lsi)*1];
target[((hsi*66+30)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp103;
fp103 = 7.0000000000000000e+00 * src1[((hsi*55+29)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+29)*1+lsi)*1], fp103);
target[((hsi*66+29)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp106;
fp106 = 7.0000000000000000e+00 * src1[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+28)*1+lsi)*1], fp106);
target[((hsi*66+28)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp109;
fp109 = 7.0000000000000000e+00 * src1[((hsi*55+27)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+27)*1+lsi)*1], fp109);
target[((hsi*66+27)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp112;
fp112 = 7.0000000000000000e+00 * src1[((hsi*55+26)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+26)*1+lsi)*1], fp112);
target[((hsi*66+26)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp115;
fp115 = 2.0000000000000000e+00 * src1[((hsi*55+14)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+38)*1+lsi)*1], fp115);
target[((hsi*66+25)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp118;
fp118 = 1.0000000000000000e+00 * src1[((hsi*55+12)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+39)*1+lsi)*1], fp118);
target[((hsi*66+24)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp121;
fp121 = 3.0000000000000000e+00 * src1[((hsi*55+13)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+36)*1+lsi)*1], fp121);
target[((hsi*66+23)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = inteval->two_alpha0_bra[vi] * src0[((hsi*78+37)*1+lsi)*1];
target[((hsi*66+22)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp125;
fp125 = 2.0000000000000000e+00 * src1[((hsi*55+11)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+33)*1+lsi)*1], fp125);
target[((hsi*66+21)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp128;
fp128 = 1.0000000000000000e+00 * src1[((hsi*55+9)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+34)*1+lsi)*1], fp128);
target[((hsi*66+20)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp131;
fp131 = 3.0000000000000000e+00 * src1[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+31)*1+lsi)*1], fp131);
target[((hsi*66+19)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = inteval->two_alpha0_bra[vi] * src0[((hsi*78+32)*1+lsi)*1];
target[((hsi*66+18)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp175;
fp175 = inteval->two_alpha0_bra[vi] * src0[((hsi*78+4)*1+lsi)*1];
target[((hsi*66+0)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp174;
fp174 = inteval->two_alpha0_bra[vi] * src0[((hsi*78+6)*1+lsi)*1];
target[((hsi*66+1)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp172;
fp172 = 1.0000000000000000e+01 * src1[((hsi*55+2)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+2)*1+lsi)*1], fp172);
target[((hsi*66+2)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp170;
fp170 = inteval->two_alpha0_bra[vi] * src0[((hsi*78+11)*1+lsi)*1];
target[((hsi*66+3)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp168;
fp168 = 1.0000000000000000e+00 * src1[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+10)*1+lsi)*1], fp168);
target[((hsi*66+4)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp166;
fp166 = inteval->two_alpha0_bra[vi] * src0[((hsi*78+14)*1+lsi)*1];
target[((hsi*66+5)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp164;
fp164 = 1.0000000000000000e+00 * src1[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+13)*1+lsi)*1], fp164);
target[((hsi*66+6)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp161;
fp161 = 9.0000000000000000e+00 * src1[((hsi*55+7)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+7)*1+lsi)*1], fp161);
target[((hsi*66+7)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp135;
fp135 = 8.0000000000000000e+00 * src1[((hsi*55+17)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+17)*1+lsi)*1], fp135);
target[((hsi*66+17)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp156;
fp156 = inteval->two_alpha0_bra[vi] * src0[((hsi*78+20)*1+lsi)*1];
target[((hsi*66+9)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp154;
fp154 = 2.0000000000000000e+00 * src1[((hsi*55+4)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+19)*1+lsi)*1], fp154);
target[((hsi*66+10)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp151;
fp151 = 1.0000000000000000e+00 * src1[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+21)*1+lsi)*1], fp151);
target[((hsi*66+11)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp149;
fp149 = inteval->two_alpha0_bra[vi] * src0[((hsi*78+24)*1+lsi)*1];
target[((hsi*66+12)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp147;
fp147 = 2.0000000000000000e+00 * src1[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+23)*1+lsi)*1], fp147);
target[((hsi*66+13)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp144;
fp144 = 1.0000000000000000e+00 * src1[((hsi*55+5)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+25)*1+lsi)*1], fp144);
target[((hsi*66+14)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp141;
fp141 = 8.0000000000000000e+00 * src1[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+15)*1+lsi)*1], fp141);
target[((hsi*66+15)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp138;
fp138 = 8.0000000000000000e+00 * src1[((hsi*55+16)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+16)*1+lsi)*1], fp138);
target[((hsi*66+16)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp158;
fp158 = 9.0000000000000000e+00 * src1[((hsi*55+8)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+8)*1+lsi)*1], fp158);
target[((hsi*66+8)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp1;
fp1 = 4.0000000000000000e+00 * src1[((hsi*55+54)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+74)*1+lsi)*1], fp1);
target[((hsi*66+65)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp4;
fp4 = 3.0000000000000000e+00 * src1[((hsi*55+50)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+77)*1+lsi)*1], fp4);
target[((hsi*66+64)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp7;
fp7 = 4.0000000000000000e+00 * src1[((hsi*55+51)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+73)*1+lsi)*1], fp7);
target[((hsi*66+63)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp10;
fp10 = 3.0000000000000000e+00 * src1[((hsi*55+47)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+76)*1+lsi)*1], fp10);
target[((hsi*66+62)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp13;
fp13 = 4.0000000000000000e+00 * src1[((hsi*55+48)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+72)*1+lsi)*1], fp13);
target[((hsi*66+61)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp16;
fp16 = 2.0000000000000000e+00 * src1[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+75)*1+lsi)*1], fp16);
target[((hsi*66+60)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp19;
fp19 = 5.0000000000000000e+00 * src1[((hsi*55+53)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+62)*1+lsi)*1], fp19);
target[((hsi*66+59)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp22;
fp22 = 5.0000000000000000e+00 * src1[((hsi*55+52)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+61)*1+lsi)*1], fp22);
target[((hsi*66+58)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp25;
fp25 = 5.0000000000000000e+00 * src1[((hsi*55+49)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+60)*1+lsi)*1], fp25);
target[((hsi*66+57)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp28;
fp28 = 5.0000000000000000e+00 * src1[((hsi*55+46)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+59)*1+lsi)*1], fp28);
target[((hsi*66+56)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp31;
fp31 = 3.0000000000000000e+00 * src1[((hsi*55+39)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+70)*1+lsi)*1], fp31);
target[((hsi*66+55)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp34;
fp34 = 2.0000000000000000e+00 * src1[((hsi*55+37)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+71)*1+lsi)*1], fp34);
target[((hsi*66+54)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp37;
fp37 = 4.0000000000000000e+00 * src1[((hsi*55+38)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+68)*1+lsi)*1], fp37);
target[((hsi*66+53)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp40;
fp40 = 1.0000000000000000e+00 * src1[((hsi*55+35)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+69)*1+lsi)*1], fp40);
target[((hsi*66+52)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp43;
fp43 = 5.0000000000000000e+00 * src1[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+58)*1+lsi)*1], fp43);
target[((hsi*66+51)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp93;
fp93 = 3.0000000000000000e+00 * src1[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+48)*1+lsi)*1], fp93);
target[((hsi*66+33)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp90;
fp90 = 2.0000000000000000e+00 * src1[((hsi*55+20)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+50)*1+lsi)*1], fp90);
target[((hsi*66+34)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp88;
fp88 = inteval->two_alpha0_bra[vi] * src0[((hsi*78+53)*1+lsi)*1];
target[((hsi*66+35)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp86;
fp86 = 4.0000000000000000e+00 * src1[((hsi*55+23)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+52)*1+lsi)*1], fp86);
target[((hsi*66+36)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * src1[((hsi*55+22)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+55)*1+lsi)*1], fp83);
target[((hsi*66+37)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp80;
fp80 = 3.0000000000000000e+00 * src1[((hsi*55+25)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+54)*1+lsi)*1], fp80);
target[((hsi*66+38)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp77;
fp77 = 2.0000000000000000e+00 * src1[((hsi*55+24)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+56)*1+lsi)*1], fp77);
target[((hsi*66+39)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp74;
fp74 = 6.0000000000000000e+00 * src1[((hsi*55+40)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+40)*1+lsi)*1], fp74);
target[((hsi*66+40)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp46;
fp46 = 3.0000000000000000e+00 * src1[((hsi*55+34)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+66)*1+lsi)*1], fp46);
target[((hsi*66+50)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp68;
fp68 = 6.0000000000000000e+00 * src1[((hsi*55+42)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+42)*1+lsi)*1], fp68);
target[((hsi*66+42)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp65;
fp65 = 6.0000000000000000e+00 * src1[((hsi*55+43)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+43)*1+lsi)*1], fp65);
target[((hsi*66+43)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp62;
fp62 = 6.0000000000000000e+00 * src1[((hsi*55+44)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+44)*1+lsi)*1], fp62);
target[((hsi*66+44)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp60;
fp60 = inteval->two_alpha0_bra[vi] * src0[((hsi*78+63)*1+lsi)*1];
target[((hsi*66+45)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp58;
fp58 = 5.0000000000000000e+00 * src1[((hsi*55+31)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+57)*1+lsi)*1], fp58);
target[((hsi*66+46)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * src1[((hsi*55+30)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+65)*1+lsi)*1], fp55);
target[((hsi*66+47)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp52;
fp52 = 4.0000000000000000e+00 * src1[((hsi*55+33)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+64)*1+lsi)*1], fp52);
target[((hsi*66+48)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp49;
fp49 = 2.0000000000000000e+00 * src1[((hsi*55+32)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+67)*1+lsi)*1], fp49);
target[((hsi*66+49)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp71;
fp71 = 6.0000000000000000e+00 * src1[((hsi*55+41)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*78+41)*1+lsi)*1], fp71);
target[((hsi*66+41)*1+lsi)*1] = fp70;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 176 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
