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
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_F__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp147;
fp147 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp136;
fp136 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp135;
fp135 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_minus(inteval->roz[vi], fp135, fp136);
LIBINT2_REALTYPE fp139;
fp139 = fp147 * fp140;
LIBINT2_REALTYPE fp180;
fp180 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp179;
LIBINT2_REALTYPE fp178;
fp178 = libint2::fma_minus(inteval->roz[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp177;
fp177 = fp180 * fp178;
LIBINT2_REALTYPE fp182;
fp182 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_minus(inteval->WP_x[vi], fp182, fp177);
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_minus(inteval->WP_x[vi], fp176, fp139);
LIBINT2_REALTYPE fp133;
fp133 = inteval->WQ_y[vi] * fp138;
LIBINT2_REALTYPE fp137;
fp137 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_minus(inteval->roz[vi], fp136, fp137);
LIBINT2_REALTYPE fp144;
fp144 = fp147 * fp145;
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_minus(inteval->roz[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp150;
fp150 = fp180 * fp151;
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_minus(inteval->WP_x[vi], fp135, fp150);
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_minus(inteval->WP_x[vi], fp149, fp144);
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->QC_y[vi], fp143, fp133);
LIBINT2_REALTYPE fp1;
fp1 = fp132;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp130;
fp130 = inteval->WQ_z[vi] * fp138;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->QC_z[vi], fp143, fp130);
LIBINT2_REALTYPE fp2;
fp2 = fp129;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp112;
fp112 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp111;
fp111 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_minus(inteval->roz[vi], fp111, fp112);
LIBINT2_REALTYPE fp117;
fp117 = fp147 * fp118;
LIBINT2_REALTYPE fp170;
fp170 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_minus(inteval->WP_y[vi], fp170, fp177);
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_minus(inteval->WP_y[vi], fp168, fp117);
LIBINT2_REALTYPE fp127;
fp127 = inteval->WQ_x[vi] * fp116;
LIBINT2_REALTYPE fp113;
fp113 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_minus(inteval->roz[vi], fp112, fp113);
LIBINT2_REALTYPE fp122;
fp122 = fp147 * fp123;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_minus(inteval->WP_y[vi], fp111, fp150);
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_minus(inteval->WP_y[vi], fp114, fp122);
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->QC_x[vi], fp121, fp127);
LIBINT2_REALTYPE fp3;
fp3 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp156;
fp156 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp107;
fp107 = fp156 * fp114;
LIBINT2_REALTYPE fp109;
fp109 = inteval->WQ_y[vi] * fp116;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->QC_y[vi], fp121, fp109);
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
LIBINT2_REALTYPE fp4;
fp4 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp104;
fp104 = inteval->WQ_z[vi] * fp116;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->QC_z[vi], fp121, fp104);
LIBINT2_REALTYPE fp5;
fp5 = fp103;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_minus(inteval->roz[vi], fp85, fp86);
LIBINT2_REALTYPE fp91;
fp91 = fp147 * fp92;
LIBINT2_REALTYPE fp162;
fp162 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_minus(inteval->WP_z[vi], fp162, fp177);
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_minus(inteval->WP_z[vi], fp160, fp91);
LIBINT2_REALTYPE fp101;
fp101 = inteval->WQ_x[vi] * fp90;
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_minus(inteval->roz[vi], fp86, fp87);
LIBINT2_REALTYPE fp96;
fp96 = fp147 * fp97;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_minus(inteval->WP_z[vi], fp85, fp150);
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_minus(inteval->WP_z[vi], fp88, fp96);
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->QC_x[vi], fp95, fp101);
LIBINT2_REALTYPE fp6;
fp6 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp83;
fp83 = inteval->WQ_y[vi] * fp90;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->QC_y[vi], fp95, fp83);
LIBINT2_REALTYPE fp7;
fp7 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp78;
fp78 = fp156 * fp88;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WQ_z[vi] * fp90;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->QC_z[vi], fp95, fp80);
LIBINT2_REALTYPE fp77;
fp77 = fp79 + fp78;
LIBINT2_REALTYPE fp8;
fp8 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp185;
fp185 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp135;
LIBINT2_REALTYPE fp187;
fp187 = inteval->WQ_x[vi] * fp176;
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(inteval->QC_x[vi], fp149, fp187);
LIBINT2_REALTYPE fp183;
fp183 = fp186 + fp184;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_y[vi] * fp183;
LIBINT2_REALTYPE fp9;
fp9 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp74;
fp74 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp74 * fp149;
LIBINT2_REALTYPE fp196;
fp196 = inteval->WQ_y[vi] * fp176;
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_plus(inteval->QC_y[vi], fp149, fp196);
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->WP_y[vi], fp195, fp70);
LIBINT2_REALTYPE fp10;
fp10 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp208;
fp208 = inteval->WQ_z[vi] * fp176;
LIBINT2_REALTYPE fp209;
LIBINT2_REALTYPE fp207;
fp207 = libint2::fma_plus(inteval->QC_z[vi], fp149, fp208);
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_y[vi] * fp207;
LIBINT2_REALTYPE fp11;
fp11 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_z[vi] * fp183;
LIBINT2_REALTYPE fp12;
fp12 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_z[vi] * fp195;
LIBINT2_REALTYPE fp13;
fp13 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->WP_z[vi], fp207, fp70);
LIBINT2_REALTYPE fp14;
fp14 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp149;
LIBINT2_REALTYPE fp158;
fp158 = inteval->WQ_x[vi] * fp138;
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(inteval->QC_x[vi], fp143, fp158);
LIBINT2_REALTYPE fp154;
fp154 = fp157 + fp155;
LIBINT2_REALTYPE fp0;
fp0 = fp154;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+0)*1+lsi)*1]),&(fp0),1);
LIBINT2_REALTYPE fp172;
fp172 = fp185 * fp111;
LIBINT2_REALTYPE fp174;
fp174 = inteval->WQ_y[vi] * fp168;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(inteval->QC_y[vi], fp114, fp174);
LIBINT2_REALTYPE fp171;
fp171 = fp173 + fp172;
LIBINT2_REALTYPE fp60;
fp60 = inteval->WP_x[vi] * fp171;
LIBINT2_REALTYPE fp16;
fp16 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp205;
fp205 = inteval->WQ_z[vi] * fp168;
LIBINT2_REALTYPE fp206;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(inteval->QC_z[vi], fp114, fp205);
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_x[vi] * fp204;
LIBINT2_REALTYPE fp17;
fp17 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp193;
fp193 = inteval->WQ_x[vi] * fp168;
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(inteval->QC_x[vi], fp114, fp193);
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_z[vi] * fp192;
LIBINT2_REALTYPE fp18;
fp18 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_z[vi] * fp171;
LIBINT2_REALTYPE fp19;
fp19 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp62;
fp62 = fp74 * fp114;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->WP_z[vi], fp204, fp62);
LIBINT2_REALTYPE fp20;
fp20 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp51;
fp51 = fp74 * fp88;
LIBINT2_REALTYPE fp190;
fp190 = inteval->WQ_x[vi] * fp160;
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(inteval->QC_x[vi], fp88, fp190);
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->WP_x[vi], fp189, fp51);
LIBINT2_REALTYPE fp21;
fp21 = fp50;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp202;
fp202 = inteval->WQ_y[vi] * fp160;
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp201;
fp201 = libint2::fma_plus(inteval->QC_y[vi], fp88, fp202);
LIBINT2_REALTYPE fp49;
fp49 = inteval->WP_x[vi] * fp201;
LIBINT2_REALTYPE fp22;
fp22 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp164;
fp164 = fp185 * fp85;
LIBINT2_REALTYPE fp166;
fp166 = inteval->WQ_z[vi] * fp160;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->QC_z[vi], fp88, fp166);
LIBINT2_REALTYPE fp163;
fp163 = fp165 + fp164;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_x[vi] * fp163;
LIBINT2_REALTYPE fp23;
fp23 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp45;
fp45 = inteval->WP_y[vi] * fp189;
LIBINT2_REALTYPE fp24;
fp24 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->WP_y[vi], fp201, fp51);
LIBINT2_REALTYPE fp25;
fp25 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_y[vi] * fp163;
LIBINT2_REALTYPE fp26;
fp26 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp73;
fp73 = fp74 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp39;
fp39 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp39);
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->WP_x[vi], fp38, fp73);
LIBINT2_REALTYPE fp200;
fp200 = inteval->WP_y[vi] * fp72;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_z[vi] * fp200;
LIBINT2_REALTYPE fp27;
fp27 = fp41;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp35;
fp35 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp35);
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->WP_y[vi], fp34, fp73);
LIBINT2_REALTYPE fp199;
fp199 = inteval->WP_x[vi] * fp58;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_z[vi] * fp199;
LIBINT2_REALTYPE fp28;
fp28 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp31;
fp31 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp31);
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->WP_z[vi], fp30, fp73);
LIBINT2_REALTYPE fp198;
fp198 = inteval->WP_x[vi] * fp46;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_y[vi] * fp198;
LIBINT2_REALTYPE fp29;
fp29 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->WP_x[vi], fp192, fp62);
LIBINT2_REALTYPE fp15;
fp15 = fp61;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+15)*1+lsi)*1]),&(fp15),1);
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
