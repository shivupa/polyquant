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
void eri2_aB_D__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp189;
fp189 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp189 * fp75;
LIBINT2_REALTYPE fp165;
fp165 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_minus(inteval->roz[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp102;
fp102 = fp165 * fp103;
LIBINT2_REALTYPE fp191;
fp191 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_minus(inteval->WP_z[vi], fp191, fp102);
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->WQ_z[vi], fp61, fp65);
LIBINT2_REALTYPE fp59;
fp59 = inteval->WQ_y[vi] * fp64;
LIBINT2_REALTYPE fp17;
fp17 = fp59;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp60;
fp60 = inteval->WQ_x[vi] * fp64;
LIBINT2_REALTYPE fp16;
fp16 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp76;
fp76 = inteval->WQ_x[vi] * fp61;
LIBINT2_REALTYPE fp63;
fp63 = inteval->WQ_y[vi] * fp76;
LIBINT2_REALTYPE fp15;
fp15 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp184;
fp184 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp146;
fp146 = fp184 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp107;
fp107 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->WP_z[vi], fp107, fp146);
LIBINT2_REALTYPE fp70;
fp70 = fp189 * fp67;
LIBINT2_REALTYPE fp157;
fp157 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi]);
LIBINT2_REALTYPE fp154;
fp154 = fp157 * fp155;
LIBINT2_REALTYPE fp167;
fp167 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_minus(inteval->WQ_z[vi], fp167, fp154);
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp149;
fp149 = fp157 * fp150;
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_minus(inteval->WQ_z[vi], fp107, fp149);
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_minus(inteval->roz[vi], fp111, fp113);
LIBINT2_REALTYPE fp116;
fp116 = fp165 * fp117;
LIBINT2_REALTYPE fp174;
fp174 = fp189 * fp107;
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp138;
fp138 = fp157 * fp139;
LIBINT2_REALTYPE fp108;
fp108 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_minus(inteval->WQ_z[vi], fp108, fp138);
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(inteval->WP_z[vi], fp109, fp174);
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_minus(inteval->WP_z[vi], fp173, fp116);
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
LIBINT2_REALTYPE fp14;
fp14 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp168;
fp168 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_minus(inteval->WQ_y[vi], fp168, fp154);
LIBINT2_REALTYPE fp120;
fp120 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_minus(inteval->WQ_y[vi], fp120, fp149);
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_minus(inteval->roz[vi], fp125, fp127);
LIBINT2_REALTYPE fp130;
fp130 = fp165 * fp131;
LIBINT2_REALTYPE fp121;
fp121 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_minus(inteval->WQ_y[vi], fp121, fp138);
LIBINT2_REALTYPE fp193;
fp193 = inteval->WP_z[vi] * fp122;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_minus(inteval->WP_z[vi], fp193, fp130);
LIBINT2_REALTYPE fp13;
fp13 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp169;
fp169 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_minus(inteval->WQ_x[vi], fp169, fp154);
LIBINT2_REALTYPE fp136;
fp136 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_minus(inteval->WQ_x[vi], fp136, fp149);
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_minus(inteval->roz[vi], fp148, fp153);
LIBINT2_REALTYPE fp162;
fp162 = fp165 * fp163;
LIBINT2_REALTYPE fp134;
fp134 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_minus(inteval->WQ_x[vi], fp134, fp138);
LIBINT2_REALTYPE fp194;
fp194 = inteval->WP_z[vi] * fp137;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_minus(inteval->WP_z[vi], fp194, fp162);
LIBINT2_REALTYPE fp12;
fp12 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp189 * fp95;
LIBINT2_REALTYPE fp195;
fp195 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_minus(inteval->WP_y[vi], fp195, fp102);
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->WQ_y[vi], fp81, fp87);
LIBINT2_REALTYPE fp79;
fp79 = inteval->WQ_z[vi] * fp86;
LIBINT2_REALTYPE fp11;
fp11 = fp79;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp96;
fp96 = inteval->WQ_x[vi] * fp81;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WQ_z[vi] * fp96;
LIBINT2_REALTYPE fp10;
fp10 = fp80;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->WP_x[vi], fp136, fp146);
LIBINT2_REALTYPE fp160;
fp160 = fp189 * fp145;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp136;
LIBINT2_REALTYPE fp190;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(inteval->WP_x[vi], fp137, fp188);
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_minus(inteval->WP_x[vi], fp187, fp162);
LIBINT2_REALTYPE fp159;
fp159 = fp161 + fp160;
LIBINT2_REALTYPE fp0;
fp0 = fp159;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+0)*1+lsi)*1]),&(fp0),1);
LIBINT2_REALTYPE fp197;
fp197 = inteval->WP_y[vi] * fp109;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_minus(inteval->WP_y[vi], fp197, fp116);
LIBINT2_REALTYPE fp8;
fp8 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->WP_y[vi], fp120, fp146);
LIBINT2_REALTYPE fp92;
fp92 = fp189 * fp89;
LIBINT2_REALTYPE fp180;
fp180 = fp189 * fp120;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->WP_y[vi], fp122, fp180);
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_minus(inteval->WP_y[vi], fp179, fp130);
LIBINT2_REALTYPE fp91;
fp91 = fp93 + fp92;
LIBINT2_REALTYPE fp7;
fp7 = fp91;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp198;
fp198 = inteval->WP_y[vi] * fp137;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_minus(inteval->WP_y[vi], fp198, fp162);
LIBINT2_REALTYPE fp6;
fp6 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp199;
fp199 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_minus(inteval->WP_x[vi], fp199, fp102);
LIBINT2_REALTYPE fp124;
fp124 = inteval->WQ_y[vi] * fp101;
LIBINT2_REALTYPE fp99;
fp99 = inteval->WQ_z[vi] * fp124;
LIBINT2_REALTYPE fp5;
fp5 = fp99;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp135;
fp135 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp143;
fp143 = fp189 * fp135;
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->WQ_x[vi], fp101, fp143);
LIBINT2_REALTYPE fp100;
fp100 = inteval->WQ_z[vi] * fp142;
LIBINT2_REALTYPE fp4;
fp4 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp106;
fp106 = inteval->WQ_y[vi] * fp142;
LIBINT2_REALTYPE fp3;
fp3 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp201;
fp201 = inteval->WP_x[vi] * fp109;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_minus(inteval->WP_x[vi], fp201, fp116);
LIBINT2_REALTYPE fp2;
fp2 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp202;
fp202 = inteval->WP_x[vi] * fp122;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_minus(inteval->WP_x[vi], fp202, fp130);
LIBINT2_REALTYPE fp1;
fp1 = fp129;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp83;
fp83 = inteval->WQ_x[vi] * fp86;
LIBINT2_REALTYPE fp9;
fp9 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp37;
fp37 = fp184 * fp89;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(inteval->WP_y[vi], fp121, fp183);
LIBINT2_REALTYPE fp196;
fp196 = inteval->WQ_z[vi] * fp176;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->WP_z[vi], fp196, fp37);
LIBINT2_REALTYPE fp35;
fp35 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(inteval->WP_z[vi], fp108, fp183);
LIBINT2_REALTYPE fp172;
fp172 = inteval->WQ_x[vi] * fp170;
LIBINT2_REALTYPE fp39;
fp39 = inteval->WP_y[vi] * fp172;
LIBINT2_REALTYPE fp34;
fp34 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp178;
fp178 = inteval->WQ_x[vi] * fp176;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_z[vi] * fp178;
LIBINT2_REALTYPE fp33;
fp33 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_y[vi] * fp173;
LIBINT2_REALTYPE fp32;
fp32 = fp41;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_z[vi] * fp179;
LIBINT2_REALTYPE fp31;
fp31 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_z[vi] * fp198;
LIBINT2_REALTYPE fp30;
fp30 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp192;
fp192 = inteval->WQ_y[vi] * fp170;
LIBINT2_REALTYPE fp44;
fp44 = inteval->WP_x[vi] * fp192;
LIBINT2_REALTYPE fp29;
fp29 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp54;
fp54 = fp184 * fp145;
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->WP_x[vi], fp134, fp183);
LIBINT2_REALTYPE fp200;
fp200 = inteval->WQ_z[vi] * fp182;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->WP_z[vi], fp200, fp54);
LIBINT2_REALTYPE fp28;
fp28 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_y[vi] * fp187;
LIBINT2_REALTYPE fp18;
fp18 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_x[vi] * fp173;
LIBINT2_REALTYPE fp26;
fp26 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp49;
fp49 = inteval->WP_z[vi] * fp202;
LIBINT2_REALTYPE fp25;
fp25 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_z[vi] * fp187;
LIBINT2_REALTYPE fp24;
fp24 = fp50;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_x[vi] * fp196;
LIBINT2_REALTYPE fp23;
fp23 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_y[vi] * fp200;
LIBINT2_REALTYPE fp22;
fp22 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp186;
fp186 = inteval->WQ_y[vi] * fp182;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->WP_y[vi], fp186, fp54);
LIBINT2_REALTYPE fp21;
fp21 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_y[vi] * fp201;
LIBINT2_REALTYPE fp20;
fp20 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_x[vi] * fp179;
LIBINT2_REALTYPE fp19;
fp19 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_z[vi] * fp186;
LIBINT2_REALTYPE fp27;
fp27 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+27)*1+lsi)*1]),&(fp27),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 203 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
