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
void _overlap_P_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + fp45;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp62;
fp62 = inteval->PA_x[vi] * fp63;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + fp62;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp54;
fp54 = inteval->PB_y[vi] * fp61;
LIBINT2_REALTYPE fp74;
fp74 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp74 * fp54;
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp61;
LIBINT2_REALTYPE fp57;
fp57 = inteval->PB_y[vi] * fp54;
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PB_y[vi] * fp55;
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + fp58;
LIBINT2_REALTYPE fp161;
fp161 = fp102 * fp94;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp87;
LIBINT2_REALTYPE fp1;
fp1 = fp160;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp38;
fp38 = inteval->PB_z[vi] * fp45;
LIBINT2_REALTYPE fp43;
fp43 = fp74 * fp38;
LIBINT2_REALTYPE fp40;
fp40 = inteval->oo2z[vi] * fp45;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PB_z[vi] * fp38;
LIBINT2_REALTYPE fp39;
fp39 = fp41 + fp40;
LIBINT2_REALTYPE fp44;
fp44 = inteval->PB_z[vi] * fp39;
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + fp42;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + fp61;
LIBINT2_REALTYPE fp159;
fp159 = fp102 * fp95;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp86;
LIBINT2_REALTYPE fp2;
fp2 = fp158;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + fp54;
LIBINT2_REALTYPE fp64;
fp64 = inteval->PB_x[vi] * fp63;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp64;
LIBINT2_REALTYPE fp70;
fp70 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp71;
fp71 = inteval->PB_x[vi] * fp64;
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
LIBINT2_REALTYPE fp68;
fp68 = inteval->PA_x[vi] * fp69;
LIBINT2_REALTYPE fp67;
fp67 = fp68 + fp73;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + fp67;
LIBINT2_REALTYPE fp157;
fp157 = fp101 * fp93;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp87;
LIBINT2_REALTYPE fp3;
fp3 = fp156;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + fp38;
LIBINT2_REALTYPE fp155;
fp155 = fp101 * fp95;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp85;
LIBINT2_REALTYPE fp4;
fp4 = fp154;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + fp55;
LIBINT2_REALTYPE fp66;
fp66 = inteval->PA_x[vi] * fp64;
LIBINT2_REALTYPE fp65;
fp65 = fp66 + fp70;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + fp65;
LIBINT2_REALTYPE fp153;
fp153 = fp100 * fp92;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp87;
LIBINT2_REALTYPE fp5;
fp5 = fp152;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp151;
fp151 = fp102 * fp92;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp85;
LIBINT2_REALTYPE fp6;
fp6 = fp150;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + fp39;
LIBINT2_REALTYPE fp149;
fp149 = fp100 * fp95;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp84;
LIBINT2_REALTYPE fp7;
fp7 = fp148;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp147;
fp147 = fp102 * fp93;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp84;
LIBINT2_REALTYPE fp8;
fp8 = fp146;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp145;
fp145 = fp100 * fp93;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp85;
LIBINT2_REALTYPE fp9;
fp9 = fp144;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp53;
fp53 = inteval->PA_y[vi] * fp61;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + fp53;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PB_x[vi] * fp69;
LIBINT2_REALTYPE fp72;
fp72 = fp75 + fp73;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + fp72;
LIBINT2_REALTYPE fp143;
fp143 = fp99 * fp91;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp87;
LIBINT2_REALTYPE fp10;
fp10 = fp142;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + fp63;
LIBINT2_REALTYPE fp78;
fp78 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp51;
fp51 = fp78 * fp55;
LIBINT2_REALTYPE fp52;
fp52 = inteval->PA_y[vi] * fp58;
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + fp50;
LIBINT2_REALTYPE fp141;
fp141 = fp98 * fp90;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp87;
LIBINT2_REALTYPE fp11;
fp11 = fp140;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp139;
fp139 = fp98 * fp91;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp86;
LIBINT2_REALTYPE fp12;
fp12 = fp138;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + fp69;
LIBINT2_REALTYPE fp47;
fp47 = inteval->PA_y[vi] * fp54;
LIBINT2_REALTYPE fp46;
fp46 = fp47 + fp56;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + fp46;
LIBINT2_REALTYPE fp137;
fp137 = fp97 * fp89;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp87;
LIBINT2_REALTYPE fp13;
fp13 = fp136;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp135;
fp135 = fp97 * fp91;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp85;
LIBINT2_REALTYPE fp14;
fp14 = fp134;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp69;
LIBINT2_REALTYPE fp79;
fp79 = inteval->PA_x[vi] * fp72;
LIBINT2_REALTYPE fp76;
fp76 = fp79 + fp77;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + fp76;
LIBINT2_REALTYPE fp163;
fp163 = fp103 * fp95;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp87;
LIBINT2_REALTYPE fp0;
fp0 = fp162;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+0)*1+lsi)*1]),&(fp0),1);
LIBINT2_REALTYPE fp49;
fp49 = inteval->PA_y[vi] * fp55;
LIBINT2_REALTYPE fp48;
fp48 = fp49 + fp59;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + fp48;
LIBINT2_REALTYPE fp131;
fp131 = fp98 * fp88;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp85;
LIBINT2_REALTYPE fp16;
fp16 = fp130;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + fp64;
LIBINT2_REALTYPE fp129;
fp129 = fp96 * fp91;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp84;
LIBINT2_REALTYPE fp17;
fp17 = fp128;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp127;
fp127 = fp98 * fp89;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp84;
LIBINT2_REALTYPE fp18;
fp18 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp125;
fp125 = fp96 * fp89;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp85;
LIBINT2_REALTYPE fp19;
fp19 = fp124;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp37;
fp37 = inteval->PA_z[vi] * fp45;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + fp37;
LIBINT2_REALTYPE fp123;
fp123 = fp99 * fp95;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp83;
LIBINT2_REALTYPE fp20;
fp20 = fp122;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp121;
fp121 = fp98 * fp94;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp83;
LIBINT2_REALTYPE fp21;
fp21 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp35;
fp35 = fp78 * fp39;
LIBINT2_REALTYPE fp36;
fp36 = inteval->PA_z[vi] * fp42;
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + fp34;
LIBINT2_REALTYPE fp119;
fp119 = fp98 * fp95;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp82;
LIBINT2_REALTYPE fp22;
fp22 = fp118;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp117;
fp117 = fp97 * fp93;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp83;
LIBINT2_REALTYPE fp23;
fp23 = fp116;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp31;
fp31 = inteval->PA_z[vi] * fp38;
LIBINT2_REALTYPE fp30;
fp30 = fp31 + fp40;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + fp30;
LIBINT2_REALTYPE fp115;
fp115 = fp97 * fp95;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp81;
LIBINT2_REALTYPE fp24;
fp24 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp113;
fp113 = fp96 * fp92;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp83;
LIBINT2_REALTYPE fp25;
fp25 = fp112;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp111;
fp111 = fp98 * fp92;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp81;
LIBINT2_REALTYPE fp26;
fp26 = fp110;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp33;
fp33 = inteval->PA_z[vi] * fp39;
LIBINT2_REALTYPE fp32;
fp32 = fp33 + fp43;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + fp32;
LIBINT2_REALTYPE fp109;
fp109 = fp96 * fp95;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp80;
LIBINT2_REALTYPE fp27;
fp27 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp107;
fp107 = fp98 * fp93;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp80;
LIBINT2_REALTYPE fp28;
fp28 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp105;
fp105 = fp96 * fp93;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp81;
LIBINT2_REALTYPE fp29;
fp29 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp133;
fp133 = fp96 * fp88;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp87;
LIBINT2_REALTYPE fp15;
fp15 = fp132;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+15)*1+lsi)*1]),&(fp15),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 164 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
