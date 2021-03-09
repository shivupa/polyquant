/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
void _kinetic_P_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp10;
fp10 = 5.0000000000000000e-01 * fp146;
LIBINT2_REALTYPE fp53;
fp53 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp144;
fp144 = inteval->oo2z[vi] * fp146;
LIBINT2_REALTYPE fp141;
fp141 = inteval->PA_z[vi] * fp146;
LIBINT2_REALTYPE fp132;
fp132 = inteval->PA_z[vi] * fp141;
LIBINT2_REALTYPE fp131;
fp131 = fp132 + fp144;
LIBINT2_REALTYPE fp12;
fp12 = fp53 * fp131;
LIBINT2_REALTYPE fp50;
fp50 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp142;
fp142 = inteval->PB_z[vi] * fp146;
LIBINT2_REALTYPE fp137;
fp137 = inteval->PB_z[vi] * fp142;
LIBINT2_REALTYPE fp136;
fp136 = fp137 + fp144;
LIBINT2_REALTYPE fp14;
fp14 = fp50 * fp136;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp180;
fp180 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp145;
fp145 = inteval->PA_z[vi] * fp142;
LIBINT2_REALTYPE fp143;
fp143 = fp145 + fp144;
LIBINT2_REALTYPE fp127;
fp127 = fp180 * fp143;
LIBINT2_REALTYPE fp129;
fp129 = inteval->oo2z[vi] * fp136;
LIBINT2_REALTYPE fp139;
fp139 = fp180 * fp142;
LIBINT2_REALTYPE fp140;
fp140 = inteval->PA_z[vi] * fp136;
LIBINT2_REALTYPE fp138;
fp138 = fp140 + fp139;
LIBINT2_REALTYPE fp130;
fp130 = inteval->PA_z[vi] * fp138;
LIBINT2_REALTYPE fp128;
fp128 = fp130 + fp129;
LIBINT2_REALTYPE fp126;
fp126 = fp128 + fp127;
LIBINT2_REALTYPE fp15;
fp15 = fp52 * fp126;
LIBINT2_REALTYPE fp13;
fp13 = fp15 - fp14;
LIBINT2_REALTYPE fp11;
fp11 = fp13 - fp12;
LIBINT2_REALTYPE fp9;
fp9 = fp11 + fp10;
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp185;
fp185 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp185 * fp167;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp9;
LIBINT2_REALTYPE fp165;
fp165 = inteval->oo2z[vi] * fp167;
LIBINT2_REALTYPE fp163;
fp163 = inteval->PB_y[vi] * fp167;
LIBINT2_REALTYPE fp166;
fp166 = inteval->PA_y[vi] * fp163;
LIBINT2_REALTYPE fp164;
fp164 = fp166 + fp165;
LIBINT2_REALTYPE fp36;
fp36 = fp52 * fp164;
LIBINT2_REALTYPE fp59;
fp59 = fp185 * fp36;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp143;
LIBINT2_REALTYPE fp188;
fp188 = inteval->oo2z[vi] * fp185;
LIBINT2_REALTYPE fp186;
fp186 = inteval->PB_x[vi] * fp185;
LIBINT2_REALTYPE fp189;
fp189 = inteval->PA_x[vi] * fp186;
LIBINT2_REALTYPE fp187;
fp187 = fp189 + fp188;
LIBINT2_REALTYPE fp37;
fp37 = fp52 * fp187;
LIBINT2_REALTYPE fp61;
fp61 = fp37 * fp167;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp143;
LIBINT2_REALTYPE fp57;
fp57 = fp60 + fp58;
LIBINT2_REALTYPE fp54;
fp54 = fp57 + fp55;
LIBINT2_REALTYPE fp8;
fp8 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp17;
fp17 = fp50 * fp142;
LIBINT2_REALTYPE fp134;
fp134 = fp180 * fp141;
LIBINT2_REALTYPE fp135;
fp135 = inteval->PB_z[vi] * fp131;
LIBINT2_REALTYPE fp133;
fp133 = fp135 + fp134;
LIBINT2_REALTYPE fp18;
fp18 = fp52 * fp133;
LIBINT2_REALTYPE fp16;
fp16 = fp18 - fp17;
LIBINT2_REALTYPE fp64;
fp64 = fp185 * fp163;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp16;
LIBINT2_REALTYPE fp162;
fp162 = inteval->PA_y[vi] * fp167;
LIBINT2_REALTYPE fp34;
fp34 = fp53 * fp162;
LIBINT2_REALTYPE fp160;
fp160 = fp180 * fp163;
LIBINT2_REALTYPE fp158;
fp158 = inteval->PB_y[vi] * fp163;
LIBINT2_REALTYPE fp157;
fp157 = fp158 + fp165;
LIBINT2_REALTYPE fp161;
fp161 = inteval->PA_y[vi] * fp157;
LIBINT2_REALTYPE fp159;
fp159 = fp161 + fp160;
LIBINT2_REALTYPE fp35;
fp35 = fp52 * fp159;
LIBINT2_REALTYPE fp33;
fp33 = fp35 - fp34;
LIBINT2_REALTYPE fp67;
fp67 = fp185 * fp33;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp141;
LIBINT2_REALTYPE fp69;
fp69 = fp37 * fp163;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp141;
LIBINT2_REALTYPE fp65;
fp65 = fp68 + fp66;
LIBINT2_REALTYPE fp62;
fp62 = fp65 + fp63;
LIBINT2_REALTYPE fp7;
fp7 = fp62;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp72;
fp72 = fp186 * fp167;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp16;
LIBINT2_REALTYPE fp75;
fp75 = fp186 * fp36;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp141;
LIBINT2_REALTYPE fp184;
fp184 = inteval->PA_x[vi] * fp185;
LIBINT2_REALTYPE fp39;
fp39 = fp53 * fp184;
LIBINT2_REALTYPE fp172;
fp172 = fp180 * fp186;
LIBINT2_REALTYPE fp177;
fp177 = inteval->PB_x[vi] * fp186;
LIBINT2_REALTYPE fp176;
fp176 = fp177 + fp188;
LIBINT2_REALTYPE fp173;
fp173 = inteval->PA_x[vi] * fp176;
LIBINT2_REALTYPE fp171;
fp171 = fp173 + fp172;
LIBINT2_REALTYPE fp40;
fp40 = fp52 * fp171;
LIBINT2_REALTYPE fp38;
fp38 = fp40 - fp39;
LIBINT2_REALTYPE fp77;
fp77 = fp38 * fp167;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp141;
LIBINT2_REALTYPE fp73;
fp73 = fp76 + fp74;
LIBINT2_REALTYPE fp70;
fp70 = fp73 + fp71;
LIBINT2_REALTYPE fp6;
fp6 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp20;
fp20 = fp53 * fp141;
LIBINT2_REALTYPE fp21;
fp21 = fp52 * fp138;
LIBINT2_REALTYPE fp19;
fp19 = fp21 - fp20;
LIBINT2_REALTYPE fp80;
fp80 = fp185 * fp162;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp19;
LIBINT2_REALTYPE fp31;
fp31 = fp50 * fp163;
LIBINT2_REALTYPE fp155;
fp155 = fp180 * fp162;
LIBINT2_REALTYPE fp153;
fp153 = inteval->PA_y[vi] * fp162;
LIBINT2_REALTYPE fp152;
fp152 = fp153 + fp165;
LIBINT2_REALTYPE fp156;
fp156 = inteval->PB_y[vi] * fp152;
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
LIBINT2_REALTYPE fp32;
fp32 = fp52 * fp154;
LIBINT2_REALTYPE fp30;
fp30 = fp32 - fp31;
LIBINT2_REALTYPE fp83;
fp83 = fp185 * fp30;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp142;
LIBINT2_REALTYPE fp85;
fp85 = fp37 * fp162;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp142;
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
LIBINT2_REALTYPE fp5;
fp5 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp22;
fp22 = fp52 * fp143;
LIBINT2_REALTYPE fp88;
fp88 = fp185 * fp164;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp22;
LIBINT2_REALTYPE fp24;
fp24 = 5.0000000000000000e-01 * fp167;
LIBINT2_REALTYPE fp26;
fp26 = fp53 * fp152;
LIBINT2_REALTYPE fp28;
fp28 = fp50 * fp157;
LIBINT2_REALTYPE fp148;
fp148 = fp180 * fp164;
LIBINT2_REALTYPE fp150;
fp150 = inteval->oo2z[vi] * fp157;
LIBINT2_REALTYPE fp151;
fp151 = inteval->PA_y[vi] * fp159;
LIBINT2_REALTYPE fp149;
fp149 = fp151 + fp150;
LIBINT2_REALTYPE fp147;
fp147 = fp149 + fp148;
LIBINT2_REALTYPE fp29;
fp29 = fp52 * fp147;
LIBINT2_REALTYPE fp27;
fp27 = fp29 - fp28;
LIBINT2_REALTYPE fp25;
fp25 = fp27 - fp26;
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
LIBINT2_REALTYPE fp91;
fp91 = fp185 * fp23;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp146;
LIBINT2_REALTYPE fp93;
fp93 = fp37 * fp164;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp146;
LIBINT2_REALTYPE fp89;
fp89 = fp92 + fp90;
LIBINT2_REALTYPE fp86;
fp86 = fp89 + fp87;
LIBINT2_REALTYPE fp4;
fp4 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp96;
fp96 = fp186 * fp162;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp22;
LIBINT2_REALTYPE fp99;
fp99 = fp186 * fp30;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp146;
LIBINT2_REALTYPE fp101;
fp101 = fp38 * fp162;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp146;
LIBINT2_REALTYPE fp97;
fp97 = fp100 + fp98;
LIBINT2_REALTYPE fp94;
fp94 = fp97 + fp95;
LIBINT2_REALTYPE fp3;
fp3 = fp94;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp104;
fp104 = fp184 * fp167;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp19;
LIBINT2_REALTYPE fp107;
fp107 = fp184 * fp36;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp142;
LIBINT2_REALTYPE fp42;
fp42 = fp50 * fp186;
LIBINT2_REALTYPE fp169;
fp169 = fp180 * fp184;
LIBINT2_REALTYPE fp175;
fp175 = inteval->PA_x[vi] * fp184;
LIBINT2_REALTYPE fp174;
fp174 = fp175 + fp188;
LIBINT2_REALTYPE fp170;
fp170 = inteval->PB_x[vi] * fp174;
LIBINT2_REALTYPE fp168;
fp168 = fp170 + fp169;
LIBINT2_REALTYPE fp43;
fp43 = fp52 * fp168;
LIBINT2_REALTYPE fp41;
fp41 = fp43 - fp42;
LIBINT2_REALTYPE fp109;
fp109 = fp41 * fp167;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp142;
LIBINT2_REALTYPE fp105;
fp105 = fp108 + fp106;
LIBINT2_REALTYPE fp102;
fp102 = fp105 + fp103;
LIBINT2_REALTYPE fp2;
fp2 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp112;
fp112 = fp184 * fp163;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp22;
LIBINT2_REALTYPE fp115;
fp115 = fp184 * fp33;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp146;
LIBINT2_REALTYPE fp117;
fp117 = fp41 * fp163;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp146;
LIBINT2_REALTYPE fp113;
fp113 = fp116 + fp114;
LIBINT2_REALTYPE fp110;
fp110 = fp113 + fp111;
LIBINT2_REALTYPE fp1;
fp1 = fp110;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp120;
fp120 = fp187 * fp167;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp22;
LIBINT2_REALTYPE fp123;
fp123 = fp187 * fp36;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp146;
LIBINT2_REALTYPE fp45;
fp45 = 5.0000000000000000e-01 * fp185;
LIBINT2_REALTYPE fp47;
fp47 = fp53 * fp174;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp187;
LIBINT2_REALTYPE fp182;
fp182 = inteval->oo2z[vi] * fp176;
LIBINT2_REALTYPE fp183;
fp183 = inteval->PA_x[vi] * fp171;
LIBINT2_REALTYPE fp181;
fp181 = fp183 + fp182;
LIBINT2_REALTYPE fp178;
fp178 = fp181 + fp179;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp178;
LIBINT2_REALTYPE fp48;
fp48 = fp51 - fp49;
LIBINT2_REALTYPE fp46;
fp46 = fp48 - fp47;
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp125;
fp125 = fp44 * fp167;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp146;
LIBINT2_REALTYPE fp121;
fp121 = fp124 + fp122;
LIBINT2_REALTYPE fp118;
fp118 = fp121 + fp119;
LIBINT2_REALTYPE fp0;
fp0 = fp118;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 190 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
