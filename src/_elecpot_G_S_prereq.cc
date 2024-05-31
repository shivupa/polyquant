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
void _elecpot_G_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp175;
fp175 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp174;
fp174 = inteval->oo2z[vi] * fp175;
LIBINT2_REALTYPE fp87;
fp87 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi];
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_minus(inteval->PA_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi], fp87);
LIBINT2_REALTYPE fp91;
fp91 = inteval->PC_z[vi] * fp86;
LIBINT2_REALTYPE fp94;
fp94 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_minus(inteval->PA_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp94);
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_minus(inteval->PA_z[vi], fp93, fp91);
LIBINT2_REALTYPE fp89;
fp89 = fp90 + fp174;
LIBINT2_REALTYPE fp42;
fp42 = inteval->PC_x[vi] * fp89;
LIBINT2_REALTYPE fp190;
fp190 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp189;
fp189 = inteval->oo2z[vi] * fp190;
LIBINT2_REALTYPE fp104;
fp104 = inteval->PC_z[vi] * fp93;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_minus(inteval->PA_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp97);
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_minus(inteval->PA_z[vi], fp96, fp104);
LIBINT2_REALTYPE fp102;
fp102 = fp103 + fp189;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_minus(inteval->PA_x[vi], fp102, fp42);
LIBINT2_REALTYPE fp16;
fp16 = inteval->PC_y[vi] * fp41;
LIBINT2_REALTYPE fp45;
fp45 = inteval->PC_x[vi] * fp102;
LIBINT2_REALTYPE fp196;
fp196 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp195;
fp195 = inteval->oo2z[vi] * fp196;
LIBINT2_REALTYPE fp108;
fp108 = inteval->PC_z[vi] * fp96;
LIBINT2_REALTYPE fp100;
fp100 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_minus(inteval->PA_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp100);
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_minus(inteval->PA_z[vi], fp99, fp108);
LIBINT2_REALTYPE fp106;
fp106 = fp107 + fp195;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_minus(inteval->PA_x[vi], fp106, fp45);
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_minus(inteval->PA_y[vi], fp44, fp16);
LIBINT2_REALTYPE fp14;
fp14 = fp15;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp129;
fp129 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi];
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_minus(inteval->PA_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi], fp129);
LIBINT2_REALTYPE fp133;
fp133 = inteval->PC_y[vi] * fp128;
LIBINT2_REALTYPE fp136;
fp136 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_minus(inteval->PA_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp136);
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_minus(inteval->PA_y[vi], fp135, fp133);
LIBINT2_REALTYPE fp131;
fp131 = fp132 + fp174;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PC_x[vi] * fp131;
LIBINT2_REALTYPE fp146;
fp146 = inteval->PC_y[vi] * fp135;
LIBINT2_REALTYPE fp139;
fp139 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_minus(inteval->PA_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp139);
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_minus(inteval->PA_y[vi], fp138, fp146);
LIBINT2_REALTYPE fp144;
fp144 = fp145 + fp189;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_minus(inteval->PA_x[vi], fp144, fp60);
LIBINT2_REALTYPE fp19;
fp19 = inteval->PC_z[vi] * fp59;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PC_x[vi] * fp144;
LIBINT2_REALTYPE fp150;
fp150 = inteval->PC_y[vi] * fp138;
LIBINT2_REALTYPE fp142;
fp142 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_minus(inteval->PA_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp142);
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_minus(inteval->PA_y[vi], fp141, fp150);
LIBINT2_REALTYPE fp148;
fp148 = fp149 + fp195;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_minus(inteval->PA_x[vi], fp148, fp63);
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->PA_z[vi], fp62, fp19);
LIBINT2_REALTYPE fp13;
fp13 = fp18;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp171;
fp171 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi];
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_minus(inteval->PA_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi], fp171);
LIBINT2_REALTYPE fp177;
fp177 = inteval->PC_x[vi] * fp170;
LIBINT2_REALTYPE fp180;
fp180 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_minus(inteval->PA_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp180);
LIBINT2_REALTYPE fp178;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_minus(inteval->PA_x[vi], fp179, fp177);
LIBINT2_REALTYPE fp173;
fp173 = fp176 + fp174;
LIBINT2_REALTYPE fp78;
fp78 = inteval->PC_y[vi] * fp173;
LIBINT2_REALTYPE fp192;
fp192 = inteval->PC_x[vi] * fp179;
LIBINT2_REALTYPE fp183;
fp183 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp184;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_minus(inteval->PA_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp183);
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp191;
fp191 = libint2::fma_minus(inteval->PA_x[vi], fp182, fp192);
LIBINT2_REALTYPE fp188;
fp188 = fp191 + fp189;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_minus(inteval->PA_y[vi], fp188, fp78);
LIBINT2_REALTYPE fp22;
fp22 = inteval->PC_z[vi] * fp77;
LIBINT2_REALTYPE fp81;
fp81 = inteval->PC_y[vi] * fp188;
LIBINT2_REALTYPE fp198;
fp198 = inteval->PC_x[vi] * fp182;
LIBINT2_REALTYPE fp186;
fp186 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp185;
fp185 = libint2::fma_minus(inteval->PA_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp186);
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_minus(inteval->PA_x[vi], fp185, fp198);
LIBINT2_REALTYPE fp194;
fp194 = fp197 + fp195;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_minus(inteval->PA_y[vi], fp194, fp81);
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_minus(inteval->PA_z[vi], fp80, fp22);
LIBINT2_REALTYPE fp12;
fp12 = fp21;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp166;
fp166 = fp148 - fp144;
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp166;
LIBINT2_REALTYPE fp51;
fp51 = inteval->PC_z[vi] * fp131;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_minus(inteval->PA_z[vi], fp144, fp51);
LIBINT2_REALTYPE fp27;
fp27 = inteval->PC_z[vi] * fp50;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PC_z[vi] * fp144;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_minus(inteval->PA_z[vi], fp148, fp54);
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_minus(inteval->PA_z[vi], fp53, fp27);
LIBINT2_REALTYPE fp24;
fp24 = fp26 + fp25;
LIBINT2_REALTYPE fp11;
fp11 = fp24;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp215;
fp215 = fp194 - fp188;
LIBINT2_REALTYPE fp34;
fp34 = inteval->oo2z[vi] * fp215;
LIBINT2_REALTYPE fp69;
fp69 = inteval->PC_z[vi] * fp173;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_minus(inteval->PA_z[vi], fp188, fp69);
LIBINT2_REALTYPE fp31;
fp31 = inteval->PC_z[vi] * fp68;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PC_z[vi] * fp188;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_minus(inteval->PA_z[vi], fp194, fp72);
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_minus(inteval->PA_z[vi], fp71, fp31);
LIBINT2_REALTYPE fp29;
fp29 = fp30 + fp34;
LIBINT2_REALTYPE fp10;
fp10 = fp29;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp36;
fp36 = inteval->PC_y[vi] * fp77;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_minus(inteval->PA_y[vi], fp80, fp36);
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
LIBINT2_REALTYPE fp9;
fp9 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp209;
fp209 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp112;
fp112 = fp96 - fp93;
LIBINT2_REALTYPE fp111;
fp111 = fp209 * fp112;
LIBINT2_REALTYPE fp114;
fp114 = inteval->PC_z[vi] * fp89;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_minus(inteval->PA_z[vi], fp102, fp114);
LIBINT2_REALTYPE fp110;
fp110 = fp113 + fp111;
LIBINT2_REALTYPE fp39;
fp39 = inteval->PC_y[vi] * fp110;
LIBINT2_REALTYPE fp118;
fp118 = fp99 - fp96;
LIBINT2_REALTYPE fp117;
fp117 = fp209 * fp118;
LIBINT2_REALTYPE fp120;
fp120 = inteval->PC_z[vi] * fp102;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_minus(inteval->PA_z[vi], fp106, fp120);
LIBINT2_REALTYPE fp116;
fp116 = fp119 + fp117;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_minus(inteval->PA_y[vi], fp116, fp39);
LIBINT2_REALTYPE fp8;
fp8 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->PC_x[vi] * fp110;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_minus(inteval->PA_x[vi], fp116, fp48);
LIBINT2_REALTYPE fp7;
fp7 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp154;
fp154 = fp138 - fp135;
LIBINT2_REALTYPE fp153;
fp153 = fp209 * fp154;
LIBINT2_REALTYPE fp156;
fp156 = inteval->PC_y[vi] * fp131;
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_minus(inteval->PA_y[vi], fp144, fp156);
LIBINT2_REALTYPE fp152;
fp152 = fp155 + fp153;
LIBINT2_REALTYPE fp57;
fp57 = inteval->PC_z[vi] * fp152;
LIBINT2_REALTYPE fp160;
fp160 = fp141 - fp138;
LIBINT2_REALTYPE fp159;
fp159 = fp209 * fp160;
LIBINT2_REALTYPE fp162;
fp162 = inteval->PC_y[vi] * fp144;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_minus(inteval->PA_y[vi], fp148, fp162);
LIBINT2_REALTYPE fp158;
fp158 = fp161 + fp159;
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->PA_z[vi], fp158, fp57);
LIBINT2_REALTYPE fp6;
fp6 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp66;
fp66 = inteval->PC_x[vi] * fp152;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_minus(inteval->PA_x[vi], fp158, fp66);
LIBINT2_REALTYPE fp5;
fp5 = fp65;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp202;
fp202 = fp182 - fp179;
LIBINT2_REALTYPE fp201;
fp201 = fp209 * fp202;
LIBINT2_REALTYPE fp204;
fp204 = inteval->PC_x[vi] * fp173;
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp203;
fp203 = libint2::fma_minus(inteval->PA_x[vi], fp188, fp204);
LIBINT2_REALTYPE fp200;
fp200 = fp203 + fp201;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PC_z[vi] * fp200;
LIBINT2_REALTYPE fp208;
fp208 = fp185 - fp182;
LIBINT2_REALTYPE fp207;
fp207 = fp209 * fp208;
LIBINT2_REALTYPE fp211;
fp211 = inteval->PC_x[vi] * fp188;
LIBINT2_REALTYPE fp212;
LIBINT2_REALTYPE fp210;
fp210 = libint2::fma_minus(inteval->PA_x[vi], fp194, fp211);
LIBINT2_REALTYPE fp206;
fp206 = fp210 + fp207;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_minus(inteval->PA_z[vi], fp206, fp75);
LIBINT2_REALTYPE fp4;
fp4 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp84;
fp84 = inteval->PC_y[vi] * fp200;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_minus(inteval->PA_y[vi], fp206, fp84);
LIBINT2_REALTYPE fp3;
fp3 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp216;
fp216 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp124;
fp124 = fp106 - fp102;
LIBINT2_REALTYPE fp123;
fp123 = fp216 * fp124;
LIBINT2_REALTYPE fp126;
fp126 = inteval->PC_z[vi] * fp110;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_minus(inteval->PA_z[vi], fp116, fp126);
LIBINT2_REALTYPE fp122;
fp122 = fp125 + fp123;
LIBINT2_REALTYPE fp2;
fp2 = fp122;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp165;
fp165 = fp216 * fp166;
LIBINT2_REALTYPE fp168;
fp168 = inteval->PC_y[vi] * fp152;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_minus(inteval->PA_y[vi], fp158, fp168);
LIBINT2_REALTYPE fp164;
fp164 = fp167 + fp165;
LIBINT2_REALTYPE fp1;
fp1 = fp164;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp214;
fp214 = fp216 * fp215;
LIBINT2_REALTYPE fp218;
fp218 = inteval->PC_x[vi] * fp200;
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp217;
fp217 = libint2::fma_minus(inteval->PA_x[vi], fp206, fp218);
LIBINT2_REALTYPE fp213;
fp213 = fp217 + fp214;
LIBINT2_REALTYPE fp0;
fp0 = fp213;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 220 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
