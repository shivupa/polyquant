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
void _elecpot_D_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp121;
fp121 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp122;
fp122 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp122 - fp121;
LIBINT2_REALTYPE fp81;
fp81 = inteval->PC_y[vi] * fp120;
LIBINT2_REALTYPE fp90;
fp90 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp91;
fp91 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp91 - fp90;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PA_y[vi] * fp89;
LIBINT2_REALTYPE fp80;
fp80 = fp82 - fp81;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PC_z[vi] * fp80;
LIBINT2_REALTYPE fp84;
fp84 = inteval->PC_y[vi] * fp89;
LIBINT2_REALTYPE fp93;
fp93 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp94;
fp94 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp94 - fp93;
LIBINT2_REALTYPE fp85;
fp85 = inteval->PA_y[vi] * fp92;
LIBINT2_REALTYPE fp83;
fp83 = fp85 - fp84;
LIBINT2_REALTYPE fp3;
fp3 = fp83;
LIBINT2_REALTYPE fp18;
fp18 = inteval->PA_z[vi] * fp3;
LIBINT2_REALTYPE fp16;
fp16 = fp18 - fp17;
LIBINT2_REALTYPE fp15;
fp15 = fp16;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp110;
fp110 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp63;
fp63 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp64;
fp64 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp62;
fp62 = fp64 - fp63;
LIBINT2_REALTYPE fp66;
fp66 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp67;
fp67 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp67 - fp66;
LIBINT2_REALTYPE fp21;
fp21 = fp65 - fp62;
LIBINT2_REALTYPE fp20;
fp20 = fp110 * fp21;
LIBINT2_REALTYPE fp97;
fp97 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp96;
fp96 = inteval->oo2z[vi] * fp97;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp116;
fp116 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp114;
fp114 = fp116 - fp115;
LIBINT2_REALTYPE fp30;
fp30 = inteval->PC_z[vi] * fp114;
LIBINT2_REALTYPE fp31;
fp31 = inteval->PA_z[vi] * fp62;
LIBINT2_REALTYPE fp29;
fp29 = fp31 - fp30;
LIBINT2_REALTYPE fp28;
fp28 = fp29 + fp96;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PC_z[vi] * fp28;
LIBINT2_REALTYPE fp103;
fp103 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2z[vi] * fp103;
LIBINT2_REALTYPE fp34;
fp34 = inteval->PC_z[vi] * fp62;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_z[vi] * fp65;
LIBINT2_REALTYPE fp33;
fp33 = fp35 - fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp33 + fp102;
LIBINT2_REALTYPE fp12;
fp12 = fp32;
LIBINT2_REALTYPE fp24;
fp24 = inteval->PA_z[vi] * fp12;
LIBINT2_REALTYPE fp22;
fp22 = fp24 - fp23;
LIBINT2_REALTYPE fp19;
fp19 = fp22 + fp20;
LIBINT2_REALTYPE fp14;
fp14 = fp19;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp26;
fp26 = inteval->PC_y[vi] * fp28;
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_y[vi] * fp12;
LIBINT2_REALTYPE fp25;
fp25 = fp27 - fp26;
LIBINT2_REALTYPE fp13;
fp13 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp13),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp37;
fp37 = inteval->PC_x[vi] * fp28;
LIBINT2_REALTYPE fp38;
fp38 = inteval->PA_x[vi] * fp12;
LIBINT2_REALTYPE fp36;
fp36 = fp38 - fp37;
LIBINT2_REALTYPE fp11;
fp11 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp75;
fp75 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp76;
fp76 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp74;
fp74 = fp76 - fp75;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PC_z[vi] * fp74;
LIBINT2_REALTYPE fp78;
fp78 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp79;
fp79 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp77;
fp77 = fp79 - fp78;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_z[vi] * fp77;
LIBINT2_REALTYPE fp39;
fp39 = fp41 - fp40;
LIBINT2_REALTYPE fp10;
fp10 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp118;
fp118 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp119;
fp119 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp119 - fp118;
LIBINT2_REALTYPE fp53;
fp53 = inteval->PC_y[vi] * fp117;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PA_y[vi] * fp74;
LIBINT2_REALTYPE fp52;
fp52 = fp54 - fp53;
LIBINT2_REALTYPE fp51;
fp51 = fp52 + fp96;
LIBINT2_REALTYPE fp43;
fp43 = inteval->PC_z[vi] * fp51;
LIBINT2_REALTYPE fp57;
fp57 = inteval->PC_y[vi] * fp74;
LIBINT2_REALTYPE fp58;
fp58 = inteval->PA_y[vi] * fp77;
LIBINT2_REALTYPE fp56;
fp56 = fp58 - fp57;
LIBINT2_REALTYPE fp55;
fp55 = fp56 + fp102;
LIBINT2_REALTYPE fp7;
fp7 = fp55;
LIBINT2_REALTYPE fp44;
fp44 = inteval->PA_z[vi] * fp7;
LIBINT2_REALTYPE fp42;
fp42 = fp44 - fp43;
LIBINT2_REALTYPE fp9;
fp9 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp47;
fp47 = fp77 - fp74;
LIBINT2_REALTYPE fp46;
fp46 = fp110 * fp47;
LIBINT2_REALTYPE fp49;
fp49 = inteval->PC_y[vi] * fp51;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PA_y[vi] * fp7;
LIBINT2_REALTYPE fp48;
fp48 = fp50 - fp49;
LIBINT2_REALTYPE fp45;
fp45 = fp48 + fp46;
LIBINT2_REALTYPE fp8;
fp8 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp60;
fp60 = inteval->PC_x[vi] * fp51;
LIBINT2_REALTYPE fp61;
fp61 = inteval->PA_x[vi] * fp7;
LIBINT2_REALTYPE fp59;
fp59 = fp61 - fp60;
LIBINT2_REALTYPE fp6;
fp6 = fp59;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp69;
fp69 = inteval->PC_z[vi] * fp89;
LIBINT2_REALTYPE fp70;
fp70 = inteval->PA_z[vi] * fp92;
LIBINT2_REALTYPE fp68;
fp68 = fp70 - fp69;
LIBINT2_REALTYPE fp5;
fp5 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp99;
fp99 = inteval->PC_x[vi] * fp120;
LIBINT2_REALTYPE fp100;
fp100 = inteval->PA_x[vi] * fp89;
LIBINT2_REALTYPE fp98;
fp98 = fp100 - fp99;
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PC_z[vi] * fp95;
LIBINT2_REALTYPE fp105;
fp105 = inteval->PC_x[vi] * fp89;
LIBINT2_REALTYPE fp106;
fp106 = inteval->PA_x[vi] * fp92;
LIBINT2_REALTYPE fp104;
fp104 = fp106 - fp105;
LIBINT2_REALTYPE fp101;
fp101 = fp104 + fp102;
LIBINT2_REALTYPE fp1;
fp1 = fp101;
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_z[vi] * fp1;
LIBINT2_REALTYPE fp71;
fp71 = fp73 - fp72;
LIBINT2_REALTYPE fp4;
fp4 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp87;
fp87 = inteval->PC_y[vi] * fp95;
LIBINT2_REALTYPE fp88;
fp88 = inteval->PA_y[vi] * fp1;
LIBINT2_REALTYPE fp86;
fp86 = fp88 - fp87;
LIBINT2_REALTYPE fp2;
fp2 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp109;
fp109 = fp92 - fp89;
LIBINT2_REALTYPE fp108;
fp108 = fp110 * fp109;
LIBINT2_REALTYPE fp112;
fp112 = inteval->PC_x[vi] * fp95;
LIBINT2_REALTYPE fp113;
fp113 = inteval->PA_x[vi] * fp1;
LIBINT2_REALTYPE fp111;
fp111 = fp113 - fp112;
LIBINT2_REALTYPE fp107;
fp107 = fp111 + fp108;
LIBINT2_REALTYPE fp0;
fp0 = fp107;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 123 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
