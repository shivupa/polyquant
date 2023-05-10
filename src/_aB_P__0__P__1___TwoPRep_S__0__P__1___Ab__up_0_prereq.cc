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
void _aB_P__0__P__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp136;
fp136 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp136);
LIBINT2_REALTYPE fp187;
fp187 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp187 * fp135;
LIBINT2_REALTYPE fp181;
fp181 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp171;
fp171 = fp181 * fp172;
LIBINT2_REALTYPE fp107;
fp107 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp107);
LIBINT2_REALTYPE fp97;
fp97 = inteval->WQ_z[vi] * fp106;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->QC_z[vi], fp135, fp97);
LIBINT2_REALTYPE fp95;
fp95 = fp96 - fp171;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_z[vi] * fp95;
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi]);
LIBINT2_REALTYPE fp178;
fp178 = fp181 * fp179;
LIBINT2_REALTYPE fp101;
fp101 = inteval->WQ_z[vi] * fp135;
LIBINT2_REALTYPE fp110;
fp110 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp110);
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->QC_z[vi], fp109, fp101);
LIBINT2_REALTYPE fp99;
fp99 = fp100 - fp178;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->PA_z[vi], fp99, fp30);
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp163;
fp163 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp162;
fp162 = fp163 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp44;
fp44 = inteval->WP_z[vi] * fp135;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->PA_z[vi], fp109, fp44);
LIBINT2_REALTYPE fp42;
fp42 = fp43 + fp162;
LIBINT2_REALTYPE fp23;
fp23 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+25)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp157;
fp157 = fp163 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_z[vi] * fp106;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->PA_z[vi], fp135, fp40);
LIBINT2_REALTYPE fp38;
fp38 = fp39 + fp157;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WQ_y[vi] * fp38;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->QC_y[vi], fp23, fp33);
LIBINT2_REALTYPE fp25;
fp25 = fp32;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+24)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp116;
fp116 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp116);
LIBINT2_REALTYPE fp120;
fp120 = inteval->WQ_y[vi] * fp115;
LIBINT2_REALTYPE fp145;
fp145 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp145);
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->QC_y[vi], fp144, fp120);
LIBINT2_REALTYPE fp118;
fp118 = fp119 - fp171;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_z[vi] * fp118;
LIBINT2_REALTYPE fp124;
fp124 = inteval->WQ_y[vi] * fp144;
LIBINT2_REALTYPE fp130;
fp130 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp130);
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->QC_y[vi], fp129, fp124);
LIBINT2_REALTYPE fp122;
fp122 = fp123 - fp178;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->PA_z[vi], fp122, fp36);
LIBINT2_REALTYPE fp24;
fp24 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+23)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_z[vi] * fp144;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->PA_z[vi], fp129, fp50);
LIBINT2_REALTYPE fp21;
fp21 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+22)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp47;
fp47 = inteval->WQ_x[vi] * fp38;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->QC_x[vi], fp23, fp47);
LIBINT2_REALTYPE fp22;
fp22 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+21)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp151;
fp151 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp151);
LIBINT2_REALTYPE fp192;
fp192 = inteval->WQ_y[vi] * fp150;
LIBINT2_REALTYPE fp168;
fp168 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp168);
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp191;
fp191 = libint2::fma_plus(inteval->QC_y[vi], fp167, fp192);
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_z[vi] * fp191;
LIBINT2_REALTYPE fp195;
fp195 = inteval->WQ_y[vi] * fp167;
LIBINT2_REALTYPE fp154;
fp154 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp154);
LIBINT2_REALTYPE fp196;
LIBINT2_REALTYPE fp194;
fp194 = libint2::fma_plus(inteval->QC_y[vi], fp153, fp195);
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->PA_z[vi], fp194, fp53);
LIBINT2_REALTYPE fp20;
fp20 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_z[vi] * fp167;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->PA_z[vi], fp153, fp56);
LIBINT2_REALTYPE fp19;
fp19 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp175;
fp175 = inteval->WQ_x[vi] * fp150;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(inteval->QC_x[vi], fp167, fp175);
LIBINT2_REALTYPE fp170;
fp170 = fp174 - fp171;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_z[vi] * fp170;
LIBINT2_REALTYPE fp183;
fp183 = inteval->WQ_x[vi] * fp167;
LIBINT2_REALTYPE fp184;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->QC_x[vi], fp153, fp183);
LIBINT2_REALTYPE fp177;
fp177 = fp182 - fp178;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->PA_z[vi], fp177, fp59);
LIBINT2_REALTYPE fp18;
fp18 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp62;
fp62 = inteval->WP_y[vi] * fp95;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->PA_y[vi], fp99, fp62);
LIBINT2_REALTYPE fp17;
fp17 = fp61;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_y[vi] * fp135;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->PA_y[vi], fp109, fp73);
LIBINT2_REALTYPE fp14;
fp14 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp80;
fp80 = inteval->WP_y[vi] * fp115;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->PA_y[vi], fp144, fp80);
LIBINT2_REALTYPE fp78;
fp78 = fp79 + fp157;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WQ_z[vi] * fp78;
LIBINT2_REALTYPE fp84;
fp84 = inteval->WP_y[vi] * fp144;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->PA_y[vi], fp129, fp84);
LIBINT2_REALTYPE fp82;
fp82 = fp83 + fp162;
LIBINT2_REALTYPE fp12;
fp12 = fp82;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->QC_z[vi], fp12, fp65);
LIBINT2_REALTYPE fp16;
fp16 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp68;
fp68 = fp187 * fp144;
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_y[vi] * fp118;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->PA_y[vi], fp122, fp70);
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
LIBINT2_REALTYPE fp15;
fp15 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp15),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp207;
fp207 = inteval->WQ_z[vi] * fp150;
LIBINT2_REALTYPE fp208;
LIBINT2_REALTYPE fp206;
fp206 = libint2::fma_plus(inteval->QC_z[vi], fp167, fp207);
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_y[vi] * fp206;
LIBINT2_REALTYPE fp201;
fp201 = inteval->WQ_z[vi] * fp167;
LIBINT2_REALTYPE fp202;
LIBINT2_REALTYPE fp200;
fp200 = libint2::fma_plus(inteval->QC_z[vi], fp153, fp201);
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->PA_y[vi], fp200, fp76);
LIBINT2_REALTYPE fp13;
fp13 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp87;
fp87 = inteval->WQ_x[vi] * fp78;
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->QC_x[vi], fp12, fp87);
LIBINT2_REALTYPE fp11;
fp11 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_y[vi] * fp167;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->PA_y[vi], fp153, fp90);
LIBINT2_REALTYPE fp10;
fp10 = fp89;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_y[vi] * fp170;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->PA_y[vi], fp177, fp93);
LIBINT2_REALTYPE fp9;
fp9 = fp92;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_x[vi] * fp95;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->PA_x[vi], fp99, fp104);
LIBINT2_REALTYPE fp8;
fp8 = fp103;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp133;
fp133 = inteval->WP_x[vi] * fp135;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->PA_x[vi], fp109, fp133);
LIBINT2_REALTYPE fp5;
fp5 = fp132;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp204;
fp204 = inteval->WQ_z[vi] * fp115;
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp203;
fp203 = libint2::fma_plus(inteval->QC_z[vi], fp144, fp204);
LIBINT2_REALTYPE fp113;
fp113 = inteval->WP_x[vi] * fp203;
LIBINT2_REALTYPE fp198;
fp198 = inteval->WQ_z[vi] * fp144;
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(inteval->QC_z[vi], fp129, fp198);
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->PA_x[vi], fp197, fp113);
LIBINT2_REALTYPE fp7;
fp7 = fp112;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp127;
fp127 = inteval->WP_x[vi] * fp118;
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->PA_x[vi], fp122, fp127);
LIBINT2_REALTYPE fp6;
fp6 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp142;
fp142 = inteval->WP_x[vi] * fp144;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->PA_x[vi], fp129, fp142);
LIBINT2_REALTYPE fp3;
fp3 = fp141;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp159;
fp159 = inteval->WP_x[vi] * fp150;
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->PA_x[vi], fp167, fp159);
LIBINT2_REALTYPE fp156;
fp156 = fp158 + fp157;
LIBINT2_REALTYPE fp139;
fp139 = inteval->WQ_z[vi] * fp156;
LIBINT2_REALTYPE fp165;
fp165 = inteval->WP_x[vi] * fp167;
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->PA_x[vi], fp153, fp165);
LIBINT2_REALTYPE fp161;
fp161 = fp164 + fp162;
LIBINT2_REALTYPE fp1;
fp1 = fp161;
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->QC_z[vi], fp1, fp139);
LIBINT2_REALTYPE fp4;
fp4 = fp138;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp148;
fp148 = inteval->WQ_y[vi] * fp156;
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(inteval->QC_y[vi], fp1, fp148);
LIBINT2_REALTYPE fp2;
fp2 = fp147;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp167;
LIBINT2_REALTYPE fp189;
fp189 = inteval->WP_x[vi] * fp170;
LIBINT2_REALTYPE fp190;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_plus(inteval->PA_x[vi], fp177, fp189);
LIBINT2_REALTYPE fp185;
fp185 = fp188 + fp186;
LIBINT2_REALTYPE fp0;
fp0 = fp185;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 209 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
