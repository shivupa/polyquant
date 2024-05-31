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
void _1emultipole_D_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp30;
fp30 = inteval->PA_z[vi] * fp34;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + fp30;
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_z[vi] * fp67;
LIBINT2_REALTYPE fp32;
fp32 = inteval->oo2z[vi] * fp34;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PB_z[vi] * fp34;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_z[vi], fp29, fp32);
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + fp24;
LIBINT2_REALTYPE fp59;
fp59 = fp58 + fp60;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + fp53;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_y[vi] * fp45;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + fp41;
LIBINT2_REALTYPE fp125;
fp125 = fp92 * fp79;
LIBINT2_REALTYPE fp94;
fp94 = fp125 * fp59;
LIBINT2_REALTYPE fp23;
fp23 = fp94;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + fp45;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PA_x[vi] * fp53;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + fp54;
LIBINT2_REALTYPE fp127;
fp127 = fp91 * fp81;
LIBINT2_REALTYPE fp95;
fp95 = fp127 * fp59;
LIBINT2_REALTYPE fp22;
fp22 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + fp34;
LIBINT2_REALTYPE fp66;
fp66 = inteval->BO_z[vi] * fp69;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + fp29;
LIBINT2_REALTYPE fp65;
fp65 = fp64 + fp66;
LIBINT2_REALTYPE fp129;
fp129 = fp91 * fp79;
LIBINT2_REALTYPE fp96;
fp96 = fp129 * fp65;
LIBINT2_REALTYPE fp21;
fp21 = fp96;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp131;
fp131 = fp92 * fp81;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->PA_z[vi], fp30, fp32);
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + fp31;
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_z[vi] * fp68;
LIBINT2_REALTYPE fp51;
fp51 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp27;
fp27 = fp51 * fp30;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->PB_z[vi], fp31, fp27);
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + fp26;
LIBINT2_REALTYPE fp62;
fp62 = fp61 + fp63;
LIBINT2_REALTYPE fp97;
fp97 = fp131 * fp62;
LIBINT2_REALTYPE fp20;
fp20 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp45;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PA_y[vi], fp41, fp43);
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + fp42;
LIBINT2_REALTYPE fp133;
fp133 = fp92 * fp80;
LIBINT2_REALTYPE fp98;
fp98 = fp133 * fp65;
LIBINT2_REALTYPE fp19;
fp19 = fp98;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->PA_x[vi], fp54, fp56);
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + fp55;
LIBINT2_REALTYPE fp135;
fp135 = fp93 * fp81;
LIBINT2_REALTYPE fp99;
fp99 = fp135 * fp65;
LIBINT2_REALTYPE fp18;
fp18 = fp99;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_y[vi] * fp79;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PB_y[vi] * fp45;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->PA_y[vi], fp40, fp43);
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + fp35;
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp101;
fp101 = fp92 * fp71;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp67;
LIBINT2_REALTYPE fp17;
fp17 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp78;
fp78 = inteval->BO_y[vi] * fp81;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + fp40;
LIBINT2_REALTYPE fp77;
fp77 = fp76 + fp78;
LIBINT2_REALTYPE fp103;
fp103 = fp91 * fp77;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp67;
LIBINT2_REALTYPE fp16;
fp16 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp105;
fp105 = fp91 * fp71;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp69;
LIBINT2_REALTYPE fp15;
fp15 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp107;
fp107 = fp92 * fp77;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp68;
LIBINT2_REALTYPE fp14;
fp14 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_y[vi] * fp80;
LIBINT2_REALTYPE fp38;
fp38 = fp51 * fp41;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->PB_y[vi], fp42, fp38);
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + fp37;
LIBINT2_REALTYPE fp74;
fp74 = fp73 + fp75;
LIBINT2_REALTYPE fp109;
fp109 = fp92 * fp74;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp69;
LIBINT2_REALTYPE fp13;
fp13 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp111;
fp111 = fp93 * fp77;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp69;
LIBINT2_REALTYPE fp12;
fp12 = fp110;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_x[vi] * fp92;
LIBINT2_REALTYPE fp46;
fp46 = inteval->PB_x[vi] * fp53;
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + fp46;
LIBINT2_REALTYPE fp86;
fp86 = fp85 + fp87;
LIBINT2_REALTYPE fp113;
fp113 = fp86 * fp79;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp67;
LIBINT2_REALTYPE fp11;
fp11 = fp112;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp84;
fp84 = inteval->BO_x[vi] * fp91;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->PA_x[vi], fp46, fp56);
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + fp47;
LIBINT2_REALTYPE fp83;
fp83 = fp82 + fp84;
LIBINT2_REALTYPE fp115;
fp115 = fp83 * fp81;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp67;
LIBINT2_REALTYPE fp10;
fp10 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp117;
fp117 = fp83 * fp79;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp69;
LIBINT2_REALTYPE fp9;
fp9 = fp116;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp119;
fp119 = fp86 * fp81;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp68;
LIBINT2_REALTYPE fp8;
fp8 = fp118;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp121;
fp121 = fp86 * fp80;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp69;
LIBINT2_REALTYPE fp7;
fp7 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp90;
fp90 = inteval->BO_x[vi] * fp93;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp54;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->PB_x[vi], fp55, fp50);
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + fp49;
LIBINT2_REALTYPE fp89;
fp89 = fp88 + fp90;
LIBINT2_REALTYPE fp123;
fp123 = fp89 * fp81;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp69;
LIBINT2_REALTYPE fp6;
fp6 = fp122;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp67;
LIBINT2_REALTYPE fp5;
fp5 = fp124;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp67;
LIBINT2_REALTYPE fp4;
fp4 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp69;
LIBINT2_REALTYPE fp3;
fp3 = fp128;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp68;
LIBINT2_REALTYPE fp2;
fp2 = fp130;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp69;
LIBINT2_REALTYPE fp1;
fp1 = fp132;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp69;
LIBINT2_REALTYPE fp0;
fp0 = fp134;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 136 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
