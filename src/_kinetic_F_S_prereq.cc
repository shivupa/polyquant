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
void _kinetic_F_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp32;
fp32 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp141;
fp141 = inteval->PB_z[vi] * fp145;
LIBINT2_REALTYPE fp14;
fp14 = fp32 * fp141;
LIBINT2_REALTYPE fp44;
fp44 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp140;
fp140 = inteval->PA_z[vi] * fp145;
LIBINT2_REALTYPE fp190;
fp190 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp138;
fp138 = fp190 * fp140;
LIBINT2_REALTYPE fp186;
fp186 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp143;
fp143 = fp186 * fp145;
LIBINT2_REALTYPE fp136;
fp136 = inteval->PA_z[vi] * fp140;
LIBINT2_REALTYPE fp135;
fp135 = fp136 + fp143;
LIBINT2_REALTYPE fp131;
fp131 = inteval->PB_z[vi] * fp135;
LIBINT2_REALTYPE fp130;
fp130 = fp131 + fp138;
LIBINT2_REALTYPE fp15;
fp15 = fp43 * fp130;
LIBINT2_REALTYPE fp13;
fp13 = fp15 - fp14;
LIBINT2_REALTYPE fp166;
fp166 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp161;
fp161 = inteval->PA_y[vi] * fp166;
LIBINT2_REALTYPE fp182;
fp182 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp183;
fp183 = inteval->PA_x[vi] * fp182;
LIBINT2_REALTYPE fp47;
fp47 = fp183 * fp161;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp13;
LIBINT2_REALTYPE fp162;
fp162 = inteval->PB_y[vi] * fp166;
LIBINT2_REALTYPE fp24;
fp24 = fp32 * fp162;
LIBINT2_REALTYPE fp159;
fp159 = fp190 * fp161;
LIBINT2_REALTYPE fp164;
fp164 = fp186 * fp166;
LIBINT2_REALTYPE fp157;
fp157 = inteval->PA_y[vi] * fp161;
LIBINT2_REALTYPE fp156;
fp156 = fp157 + fp164;
LIBINT2_REALTYPE fp152;
fp152 = inteval->PB_y[vi] * fp156;
LIBINT2_REALTYPE fp151;
fp151 = fp152 + fp159;
LIBINT2_REALTYPE fp25;
fp25 = fp43 * fp151;
LIBINT2_REALTYPE fp23;
fp23 = fp25 - fp24;
LIBINT2_REALTYPE fp50;
fp50 = fp183 * fp23;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp140;
LIBINT2_REALTYPE fp167;
fp167 = inteval->PB_x[vi] * fp182;
LIBINT2_REALTYPE fp31;
fp31 = fp32 * fp167;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp183;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp182;
LIBINT2_REALTYPE fp187;
fp187 = inteval->PA_x[vi] * fp183;
LIBINT2_REALTYPE fp184;
fp184 = fp187 + fp185;
LIBINT2_REALTYPE fp177;
fp177 = inteval->PB_x[vi] * fp184;
LIBINT2_REALTYPE fp176;
fp176 = fp177 + fp189;
LIBINT2_REALTYPE fp33;
fp33 = fp43 * fp176;
LIBINT2_REALTYPE fp30;
fp30 = fp33 - fp31;
LIBINT2_REALTYPE fp52;
fp52 = fp30 * fp161;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp140;
LIBINT2_REALTYPE fp48;
fp48 = fp51 + fp49;
LIBINT2_REALTYPE fp45;
fp45 = fp48 + fp46;
LIBINT2_REALTYPE fp9;
fp9 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp36;
fp36 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp144;
fp144 = inteval->PA_z[vi] * fp141;
LIBINT2_REALTYPE fp142;
fp142 = fp144 + fp143;
LIBINT2_REALTYPE fp11;
fp11 = fp36 * fp142;
LIBINT2_REALTYPE fp174;
fp174 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp128;
fp128 = fp174 * fp135;
LIBINT2_REALTYPE fp139;
fp139 = inteval->PA_z[vi] * fp135;
LIBINT2_REALTYPE fp137;
fp137 = fp139 + fp138;
LIBINT2_REALTYPE fp129;
fp129 = inteval->PB_z[vi] * fp137;
LIBINT2_REALTYPE fp127;
fp127 = fp129 + fp128;
LIBINT2_REALTYPE fp12;
fp12 = fp43 * fp127;
LIBINT2_REALTYPE fp10;
fp10 = fp12 - fp11;
LIBINT2_REALTYPE fp55;
fp55 = fp182 * fp161;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp10;
LIBINT2_REALTYPE fp58;
fp58 = fp182 * fp23;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp135;
LIBINT2_REALTYPE fp169;
fp169 = inteval->PA_x[vi] * fp167;
LIBINT2_REALTYPE fp168;
fp168 = fp169 + fp185;
LIBINT2_REALTYPE fp38;
fp38 = fp43 * fp168;
LIBINT2_REALTYPE fp60;
fp60 = fp38 * fp161;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp135;
LIBINT2_REALTYPE fp56;
fp56 = fp59 + fp57;
LIBINT2_REALTYPE fp53;
fp53 = fp56 + fp54;
LIBINT2_REALTYPE fp8;
fp8 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp63;
fp63 = fp183 * fp166;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp10;
LIBINT2_REALTYPE fp165;
fp165 = inteval->PA_y[vi] * fp162;
LIBINT2_REALTYPE fp163;
fp163 = fp165 + fp164;
LIBINT2_REALTYPE fp29;
fp29 = fp43 * fp163;
LIBINT2_REALTYPE fp66;
fp66 = fp183 * fp29;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp135;
LIBINT2_REALTYPE fp68;
fp68 = fp30 * fp166;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp135;
LIBINT2_REALTYPE fp64;
fp64 = fp67 + fp65;
LIBINT2_REALTYPE fp61;
fp61 = fp64 + fp62;
LIBINT2_REALTYPE fp7;
fp7 = fp61;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp71;
fp71 = fp182 * fp156;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp13;
LIBINT2_REALTYPE fp21;
fp21 = fp36 * fp163;
LIBINT2_REALTYPE fp149;
fp149 = fp174 * fp156;
LIBINT2_REALTYPE fp160;
fp160 = inteval->PA_y[vi] * fp156;
LIBINT2_REALTYPE fp158;
fp158 = fp160 + fp159;
LIBINT2_REALTYPE fp150;
fp150 = inteval->PB_y[vi] * fp158;
LIBINT2_REALTYPE fp148;
fp148 = fp150 + fp149;
LIBINT2_REALTYPE fp22;
fp22 = fp43 * fp148;
LIBINT2_REALTYPE fp20;
fp20 = fp22 - fp21;
LIBINT2_REALTYPE fp74;
fp74 = fp182 * fp20;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp140;
LIBINT2_REALTYPE fp76;
fp76 = fp38 * fp156;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp140;
LIBINT2_REALTYPE fp72;
fp72 = fp75 + fp73;
LIBINT2_REALTYPE fp69;
fp69 = fp72 + fp70;
LIBINT2_REALTYPE fp6;
fp6 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp19;
fp19 = fp43 * fp142;
LIBINT2_REALTYPE fp79;
fp79 = fp183 * fp156;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp19;
LIBINT2_REALTYPE fp82;
fp82 = fp183 * fp20;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp145;
LIBINT2_REALTYPE fp84;
fp84 = fp30 * fp156;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp145;
LIBINT2_REALTYPE fp80;
fp80 = fp83 + fp81;
LIBINT2_REALTYPE fp77;
fp77 = fp80 + fp78;
LIBINT2_REALTYPE fp5;
fp5 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp87;
fp87 = fp184 * fp166;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp13;
LIBINT2_REALTYPE fp90;
fp90 = fp184 * fp29;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp140;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp168;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp184;
LIBINT2_REALTYPE fp191;
fp191 = inteval->PA_x[vi] * fp184;
LIBINT2_REALTYPE fp188;
fp188 = fp191 + fp189;
LIBINT2_REALTYPE fp175;
fp175 = inteval->PB_x[vi] * fp188;
LIBINT2_REALTYPE fp172;
fp172 = fp175 + fp173;
LIBINT2_REALTYPE fp37;
fp37 = fp43 * fp172;
LIBINT2_REALTYPE fp34;
fp34 = fp37 - fp35;
LIBINT2_REALTYPE fp92;
fp92 = fp34 * fp166;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp140;
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
LIBINT2_REALTYPE fp85;
fp85 = fp88 + fp86;
LIBINT2_REALTYPE fp4;
fp4 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp95;
fp95 = fp184 * fp161;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp19;
LIBINT2_REALTYPE fp98;
fp98 = fp184 * fp23;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp145;
LIBINT2_REALTYPE fp100;
fp100 = fp34 * fp161;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp145;
LIBINT2_REALTYPE fp96;
fp96 = fp99 + fp97;
LIBINT2_REALTYPE fp93;
fp93 = fp96 + fp94;
LIBINT2_REALTYPE fp3;
fp3 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp41;
fp41 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp41 * fp130;
LIBINT2_REALTYPE fp180;
fp180 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp133;
fp133 = fp180 * fp137;
LIBINT2_REALTYPE fp126;
fp126 = inteval->PA_z[vi] * fp137;
LIBINT2_REALTYPE fp125;
fp125 = fp126 + fp128;
LIBINT2_REALTYPE fp134;
fp134 = inteval->PB_z[vi] * fp125;
LIBINT2_REALTYPE fp132;
fp132 = fp134 + fp133;
LIBINT2_REALTYPE fp18;
fp18 = fp43 * fp132;
LIBINT2_REALTYPE fp16;
fp16 = fp18 - fp17;
LIBINT2_REALTYPE fp103;
fp103 = fp182 * fp166;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp16;
LIBINT2_REALTYPE fp106;
fp106 = fp182 * fp29;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp137;
LIBINT2_REALTYPE fp108;
fp108 = fp38 * fp166;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp137;
LIBINT2_REALTYPE fp104;
fp104 = fp107 + fp105;
LIBINT2_REALTYPE fp101;
fp101 = fp104 + fp102;
LIBINT2_REALTYPE fp2;
fp2 = fp101;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp111;
fp111 = fp182 * fp158;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp19;
LIBINT2_REALTYPE fp27;
fp27 = fp41 * fp151;
LIBINT2_REALTYPE fp154;
fp154 = fp180 * fp158;
LIBINT2_REALTYPE fp147;
fp147 = inteval->PA_y[vi] * fp158;
LIBINT2_REALTYPE fp146;
fp146 = fp147 + fp149;
LIBINT2_REALTYPE fp155;
fp155 = inteval->PB_y[vi] * fp146;
LIBINT2_REALTYPE fp153;
fp153 = fp155 + fp154;
LIBINT2_REALTYPE fp28;
fp28 = fp43 * fp153;
LIBINT2_REALTYPE fp26;
fp26 = fp28 - fp27;
LIBINT2_REALTYPE fp114;
fp114 = fp182 * fp26;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp145;
LIBINT2_REALTYPE fp116;
fp116 = fp38 * fp158;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp145;
LIBINT2_REALTYPE fp112;
fp112 = fp115 + fp113;
LIBINT2_REALTYPE fp109;
fp109 = fp112 + fp110;
LIBINT2_REALTYPE fp1;
fp1 = fp109;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp119;
fp119 = fp188 * fp166;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp19;
LIBINT2_REALTYPE fp122;
fp122 = fp188 * fp29;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp145;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp188;
LIBINT2_REALTYPE fp171;
fp171 = inteval->PA_x[vi] * fp188;
LIBINT2_REALTYPE fp170;
fp170 = fp171 + fp173;
LIBINT2_REALTYPE fp181;
fp181 = inteval->PB_x[vi] * fp170;
LIBINT2_REALTYPE fp178;
fp178 = fp181 + fp179;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp178;
LIBINT2_REALTYPE fp39;
fp39 = fp42 - fp40;
LIBINT2_REALTYPE fp124;
fp124 = fp39 * fp166;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp145;
LIBINT2_REALTYPE fp120;
fp120 = fp123 + fp121;
LIBINT2_REALTYPE fp117;
fp117 = fp120 + fp118;
LIBINT2_REALTYPE fp0;
fp0 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 192 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
