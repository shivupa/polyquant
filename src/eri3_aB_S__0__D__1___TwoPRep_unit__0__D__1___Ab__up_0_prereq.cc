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
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_S__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp174;
fp174 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp174);
LIBINT2_REALTYPE fp120;
fp120 = inteval->WQ_z[vi] * fp173;
LIBINT2_REALTYPE fp177;
fp177 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp178;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp177);
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->QC_z[vi], fp176, fp120);
LIBINT2_REALTYPE fp17;
fp17 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+30)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp224;
fp224 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp225;
LIBINT2_REALTYPE fp223;
fp223 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp224);
LIBINT2_REALTYPE fp144;
fp144 = inteval->WQ_z[vi] * fp223;
LIBINT2_REALTYPE fp227;
fp227 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp228;
LIBINT2_REALTYPE fp226;
fp226 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp227);
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_plus(inteval->QC_z[vi], fp226, fp144);
LIBINT2_REALTYPE fp12;
fp12 = fp143;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+29)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp221;
fp221 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp222;
LIBINT2_REALTYPE fp220;
fp220 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp221);
LIBINT2_REALTYPE fp180;
fp180 = inteval->WQ_y[vi] * fp220;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->QC_y[vi], fp223, fp180);
LIBINT2_REALTYPE fp123;
fp123 = inteval->WQ_z[vi] * fp179;
LIBINT2_REALTYPE fp183;
fp183 = inteval->WQ_y[vi] * fp223;
LIBINT2_REALTYPE fp184;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->QC_y[vi], fp226, fp183);
LIBINT2_REALTYPE fp7;
fp7 = fp182;
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->QC_z[vi], fp7, fp123);
LIBINT2_REALTYPE fp16;
fp16 = fp122;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+28)*1+lsi)*1]),&(fp16),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+27)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp254;
fp254 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp138;
fp138 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp138);
LIBINT2_REALTYPE fp135;
fp135 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp135);
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_minus(inteval->roe[vi], fp134, fp137);
LIBINT2_REALTYPE fp48;
fp48 = fp254 * fp49;
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp214;
fp214 = inteval->oo2e[vi] * fp215;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp41);
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_z[vi] * fp40;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->QC_z[vi], fp134, fp45);
LIBINT2_REALTYPE fp43;
fp43 = fp44 - fp214;
LIBINT2_REALTYPE fp52;
fp52 = inteval->WQ_z[vi] * fp43;
LIBINT2_REALTYPE fp232;
LIBINT2_REALTYPE fp231;
fp231 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp230;
fp230 = inteval->oo2e[vi] * fp231;
LIBINT2_REALTYPE fp148;
fp148 = inteval->WQ_z[vi] * fp134;
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(inteval->QC_z[vi], fp137, fp148);
LIBINT2_REALTYPE fp146;
fp146 = fp147 - fp230;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->QC_z[vi], fp146, fp52);
LIBINT2_REALTYPE fp47;
fp47 = fp51 - fp48;
LIBINT2_REALTYPE fp32;
fp32 = inteval->WQ_y[vi] * fp47;
LIBINT2_REALTYPE fp141;
fp141 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp141);
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->roe[vi], fp137, fp140);
LIBINT2_REALTYPE fp55;
fp55 = fp254 * fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WQ_z[vi] * fp146;
LIBINT2_REALTYPE fp239;
LIBINT2_REALTYPE fp238;
fp238 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi]);
LIBINT2_REALTYPE fp237;
fp237 = inteval->oo2e[vi] * fp238;
LIBINT2_REALTYPE fp152;
fp152 = inteval->WQ_z[vi] * fp137;
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(inteval->QC_z[vi], fp140, fp152);
LIBINT2_REALTYPE fp150;
fp150 = fp151 - fp237;
LIBINT2_REALTYPE fp11;
fp11 = fp150;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->QC_z[vi], fp11, fp59);
LIBINT2_REALTYPE fp54;
fp54 = fp58 - fp55;
LIBINT2_REALTYPE fp27;
fp27 = fp54;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->QC_y[vi], fp27, fp32);
LIBINT2_REALTYPE fp30;
fp30 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+26)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp35;
fp35 = inteval->WQ_x[vi] * fp47;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->QC_x[vi], fp27, fp35);
LIBINT2_REALTYPE fp29;
fp29 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+25)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp155;
fp155 = inteval->WQ_x[vi] * fp43;
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->QC_x[vi], fp146, fp155);
LIBINT2_REALTYPE fp38;
fp38 = inteval->WQ_y[vi] * fp154;
LIBINT2_REALTYPE fp158;
fp158 = inteval->WQ_x[vi] * fp146;
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(inteval->QC_x[vi], fp11, fp158);
LIBINT2_REALTYPE fp10;
fp10 = fp157;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->QC_y[vi], fp10, fp38);
LIBINT2_REALTYPE fp28;
fp28 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+24)*1+lsi)*1]),&(fp28),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+23)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp262;
fp262 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_minus(inteval->roe[vi], fp146, fp11);
LIBINT2_REALTYPE fp62;
fp62 = fp262 * fp63;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WQ_z[vi] * fp47;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->QC_z[vi], fp27, fp66);
LIBINT2_REALTYPE fp61;
fp61 = fp65 - fp62;
LIBINT2_REALTYPE fp26;
fp26 = fp61;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+22)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp78;
fp78 = inteval->WQ_y[vi] * fp146;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->QC_y[vi], fp11, fp78);
LIBINT2_REALTYPE fp22;
fp22 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+21)*1+lsi)*1]),&(fp22),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp11),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp171;
fp171 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp171);
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_minus(inteval->roe[vi], fp170, fp173);
LIBINT2_REALTYPE fp99;
fp99 = fp254 * fp100;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp92);
LIBINT2_REALTYPE fp96;
fp96 = inteval->WQ_y[vi] * fp91;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->QC_y[vi], fp170, fp96);
LIBINT2_REALTYPE fp94;
fp94 = fp95 - fp214;
LIBINT2_REALTYPE fp103;
fp103 = inteval->WQ_y[vi] * fp94;
LIBINT2_REALTYPE fp187;
fp187 = inteval->WQ_y[vi] * fp170;
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(inteval->QC_y[vi], fp173, fp187);
LIBINT2_REALTYPE fp185;
fp185 = fp186 - fp230;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->QC_y[vi], fp185, fp103);
LIBINT2_REALTYPE fp98;
fp98 = fp102 - fp99;
LIBINT2_REALTYPE fp69;
fp69 = inteval->WQ_z[vi] * fp98;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_minus(inteval->roe[vi], fp173, fp176);
LIBINT2_REALTYPE fp106;
fp106 = fp254 * fp107;
LIBINT2_REALTYPE fp110;
fp110 = inteval->WQ_y[vi] * fp185;
LIBINT2_REALTYPE fp191;
fp191 = inteval->WQ_y[vi] * fp173;
LIBINT2_REALTYPE fp192;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_plus(inteval->QC_y[vi], fp176, fp191);
LIBINT2_REALTYPE fp189;
fp189 = fp190 - fp237;
LIBINT2_REALTYPE fp6;
fp6 = fp189;
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->QC_y[vi], fp6, fp110);
LIBINT2_REALTYPE fp105;
fp105 = fp109 - fp106;
LIBINT2_REALTYPE fp19;
fp19 = fp105;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->QC_z[vi], fp19, fp69);
LIBINT2_REALTYPE fp25;
fp25 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp194;
fp194 = inteval->WQ_x[vi] * fp94;
LIBINT2_REALTYPE fp195;
LIBINT2_REALTYPE fp193;
fp193 = libint2::fma_plus(inteval->QC_x[vi], fp185, fp194);
LIBINT2_REALTYPE fp72;
fp72 = inteval->WQ_z[vi] * fp193;
LIBINT2_REALTYPE fp197;
fp197 = inteval->WQ_x[vi] * fp185;
LIBINT2_REALTYPE fp198;
LIBINT2_REALTYPE fp196;
fp196 = libint2::fma_plus(inteval->QC_x[vi], fp6, fp197);
LIBINT2_REALTYPE fp5;
fp5 = fp196;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->QC_z[vi], fp5, fp72);
LIBINT2_REALTYPE fp24;
fp24 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp75;
fp75 = inteval->WQ_x[vi] * fp98;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->QC_x[vi], fp19, fp75);
LIBINT2_REALTYPE fp23;
fp23 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp84;
fp84 = inteval->WQ_z[vi] * fp185;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->QC_z[vi], fp6, fp84);
LIBINT2_REALTYPE fp21;
fp21 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_minus(inteval->roe[vi], fp185, fp6);
LIBINT2_REALTYPE fp87;
fp87 = inteval->oo2e[vi] * fp114;
LIBINT2_REALTYPE fp81;
fp81 = inteval->WQ_z[vi] * fp94;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->QC_z[vi], fp185, fp81);
LIBINT2_REALTYPE fp89;
fp89 = inteval->WQ_z[vi] * fp80;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->QC_z[vi], fp21, fp89);
LIBINT2_REALTYPE fp86;
fp86 = fp88 - fp87;
LIBINT2_REALTYPE fp20;
fp20 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp20),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp113;
fp113 = fp262 * fp114;
LIBINT2_REALTYPE fp117;
fp117 = inteval->WQ_y[vi] * fp98;
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->QC_y[vi], fp19, fp117);
LIBINT2_REALTYPE fp112;
fp112 = fp116 - fp113;
LIBINT2_REALTYPE fp18;
fp18 = fp112;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp18),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp6),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp211;
fp211 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp212;
LIBINT2_REALTYPE fp210;
fp210 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp211);
LIBINT2_REALTYPE fp218;
fp218 = inteval->WQ_x[vi] * fp210;
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp217;
fp217 = libint2::fma_plus(inteval->QC_x[vi], fp220, fp218);
LIBINT2_REALTYPE fp213;
fp213 = fp217 - fp214;
LIBINT2_REALTYPE fp200;
fp200 = inteval->WQ_y[vi] * fp213;
LIBINT2_REALTYPE fp234;
fp234 = inteval->WQ_x[vi] * fp220;
LIBINT2_REALTYPE fp235;
LIBINT2_REALTYPE fp233;
fp233 = libint2::fma_plus(inteval->QC_x[vi], fp223, fp234);
LIBINT2_REALTYPE fp229;
fp229 = fp233 - fp230;
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_plus(inteval->QC_y[vi], fp229, fp200);
LIBINT2_REALTYPE fp126;
fp126 = inteval->WQ_z[vi] * fp199;
LIBINT2_REALTYPE fp203;
fp203 = inteval->WQ_y[vi] * fp229;
LIBINT2_REALTYPE fp241;
fp241 = inteval->WQ_x[vi] * fp223;
LIBINT2_REALTYPE fp242;
LIBINT2_REALTYPE fp240;
fp240 = libint2::fma_plus(inteval->QC_x[vi], fp226, fp241);
LIBINT2_REALTYPE fp236;
fp236 = fp240 - fp237;
LIBINT2_REALTYPE fp2;
fp2 = fp236;
LIBINT2_REALTYPE fp204;
LIBINT2_REALTYPE fp202;
fp202 = libint2::fma_plus(inteval->QC_y[vi], fp2, fp203);
LIBINT2_REALTYPE fp4;
fp4 = fp202;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->QC_z[vi], fp4, fp126);
LIBINT2_REALTYPE fp15;
fp15 = fp125;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp246;
LIBINT2_REALTYPE fp245;
fp245 = libint2::fma_minus(inteval->roe[vi], fp220, fp223);
LIBINT2_REALTYPE fp244;
fp244 = fp254 * fp245;
LIBINT2_REALTYPE fp248;
fp248 = inteval->WQ_x[vi] * fp213;
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp247;
fp247 = libint2::fma_plus(inteval->QC_x[vi], fp229, fp248);
LIBINT2_REALTYPE fp243;
fp243 = fp247 - fp244;
LIBINT2_REALTYPE fp129;
fp129 = inteval->WQ_z[vi] * fp243;
LIBINT2_REALTYPE fp253;
LIBINT2_REALTYPE fp252;
fp252 = libint2::fma_minus(inteval->roe[vi], fp223, fp226);
LIBINT2_REALTYPE fp251;
fp251 = fp254 * fp252;
LIBINT2_REALTYPE fp256;
fp256 = inteval->WQ_x[vi] * fp229;
LIBINT2_REALTYPE fp257;
LIBINT2_REALTYPE fp255;
fp255 = libint2::fma_plus(inteval->QC_x[vi], fp2, fp256);
LIBINT2_REALTYPE fp250;
fp250 = fp255 - fp251;
LIBINT2_REALTYPE fp1;
fp1 = fp250;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->QC_z[vi], fp1, fp129);
LIBINT2_REALTYPE fp14;
fp14 = fp128;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp132;
fp132 = inteval->WQ_y[vi] * fp243;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->QC_y[vi], fp1, fp132);
LIBINT2_REALTYPE fp13;
fp13 = fp131;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp164;
fp164 = inteval->WQ_z[vi] * fp229;
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_plus(inteval->QC_z[vi], fp2, fp164);
LIBINT2_REALTYPE fp9;
fp9 = fp163;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp261;
LIBINT2_REALTYPE fp260;
fp260 = libint2::fma_minus(inteval->roe[vi], fp229, fp2);
LIBINT2_REALTYPE fp206;
fp206 = inteval->oo2e[vi] * fp260;
LIBINT2_REALTYPE fp161;
fp161 = inteval->WQ_z[vi] * fp213;
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->QC_z[vi], fp229, fp161);
LIBINT2_REALTYPE fp168;
fp168 = inteval->WQ_z[vi] * fp160;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_plus(inteval->QC_z[vi], fp9, fp168);
LIBINT2_REALTYPE fp166;
fp166 = fp167 - fp206;
LIBINT2_REALTYPE fp8;
fp8 = fp166;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp8),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp208;
fp208 = inteval->WQ_y[vi] * fp199;
LIBINT2_REALTYPE fp209;
LIBINT2_REALTYPE fp207;
fp207 = libint2::fma_plus(inteval->QC_y[vi], fp4, fp208);
LIBINT2_REALTYPE fp205;
fp205 = fp207 - fp206;
LIBINT2_REALTYPE fp3;
fp3 = fp205;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp259;
fp259 = fp262 * fp260;
LIBINT2_REALTYPE fp264;
fp264 = inteval->WQ_x[vi] * fp243;
LIBINT2_REALTYPE fp265;
LIBINT2_REALTYPE fp263;
fp263 = libint2::fma_plus(inteval->QC_x[vi], fp1, fp264);
LIBINT2_REALTYPE fp258;
fp258 = fp263 - fp259;
LIBINT2_REALTYPE fp0;
fp0 = fp258;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 266 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif