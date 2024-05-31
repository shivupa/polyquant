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
void _elecpot_P_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp58;
fp58 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp58);
LIBINT2_REALTYPE fp112;
fp112 = inteval->PC_y[vi] * fp57;
LIBINT2_REALTYPE fp94;
fp94 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp94);
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_minus(inteval->PB_y[vi], fp93, fp112);
LIBINT2_REALTYPE fp106;
fp106 = inteval->PC_z[vi] * fp111;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PC_y[vi] * fp93;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp103);
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_minus(inteval->PB_y[vi], fp102, fp115);
LIBINT2_REALTYPE fp2;
fp2 = fp114;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_minus(inteval->PB_z[vi], fp2, fp106);
LIBINT2_REALTYPE fp4;
fp4 = fp105;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp62;
fp62 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp32);
LIBINT2_REALTYPE fp36;
fp36 = inteval->PC_z[vi] * fp31;
LIBINT2_REALTYPE fp88;
fp88 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp88);
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_minus(inteval->PB_z[vi], fp87, fp36);
LIBINT2_REALTYPE fp34;
fp34 = fp35 + fp61;
LIBINT2_REALTYPE fp109;
fp109 = inteval->PC_y[vi] * fp34;
LIBINT2_REALTYPE fp83;
fp83 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PC_z[vi] * fp87;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp97);
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_minus(inteval->PB_z[vi], fp96, fp75);
LIBINT2_REALTYPE fp73;
fp73 = fp74 + fp82;
LIBINT2_REALTYPE fp7;
fp7 = fp73;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_minus(inteval->PB_y[vi], fp7, fp109);
LIBINT2_REALTYPE fp3;
fp3 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp17;
fp17 = inteval->PC_x[vi] * fp34;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_minus(inteval->PB_x[vi], fp7, fp17);
LIBINT2_REALTYPE fp15;
fp15 = fp16;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp45;
fp45 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp45);
LIBINT2_REALTYPE fp49;
fp49 = inteval->PC_y[vi] * fp44;
LIBINT2_REALTYPE fp91;
fp91 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp91);
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_minus(inteval->PB_y[vi], fp90, fp49);
LIBINT2_REALTYPE fp47;
fp47 = fp48 + fp61;
LIBINT2_REALTYPE fp20;
fp20 = inteval->PC_z[vi] * fp47;
LIBINT2_REALTYPE fp79;
fp79 = inteval->PC_y[vi] * fp90;
LIBINT2_REALTYPE fp100;
fp100 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp100);
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_minus(inteval->PB_y[vi], fp99, fp79);
LIBINT2_REALTYPE fp77;
fp77 = fp78 + fp82;
LIBINT2_REALTYPE fp6;
fp6 = fp77;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_minus(inteval->PB_z[vi], fp6, fp20);
LIBINT2_REALTYPE fp14;
fp14 = fp19;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp23;
fp23 = inteval->PC_x[vi] * fp47;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_minus(inteval->PB_x[vi], fp6, fp23);
LIBINT2_REALTYPE fp13;
fp13 = fp22;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp64;
fp64 = inteval->PC_x[vi] * fp57;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_minus(inteval->PB_x[vi], fp93, fp64);
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
LIBINT2_REALTYPE fp26;
fp26 = inteval->PC_z[vi] * fp60;
LIBINT2_REALTYPE fp85;
fp85 = inteval->PC_x[vi] * fp93;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_minus(inteval->PB_x[vi], fp102, fp85);
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
LIBINT2_REALTYPE fp5;
fp5 = fp81;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->PB_z[vi], fp5, fp26);
LIBINT2_REALTYPE fp12;
fp12 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp29;
fp29 = inteval->PC_y[vi] * fp60;
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->PB_y[vi], fp5, fp29);
LIBINT2_REALTYPE fp11;
fp11 = fp28;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp69;
fp69 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp96 - fp87;
LIBINT2_REALTYPE fp39;
fp39 = fp69 * fp40;
LIBINT2_REALTYPE fp42;
fp42 = inteval->PC_z[vi] * fp34;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_minus(inteval->PB_z[vi], fp7, fp42);
LIBINT2_REALTYPE fp38;
fp38 = fp41 + fp39;
LIBINT2_REALTYPE fp10;
fp10 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp53;
fp53 = fp99 - fp90;
LIBINT2_REALTYPE fp52;
fp52 = fp69 * fp53;
LIBINT2_REALTYPE fp55;
fp55 = inteval->PC_y[vi] * fp47;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_minus(inteval->PB_y[vi], fp6, fp55);
LIBINT2_REALTYPE fp51;
fp51 = fp54 + fp52;
LIBINT2_REALTYPE fp9;
fp9 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp68;
fp68 = fp102 - fp93;
LIBINT2_REALTYPE fp67;
fp67 = fp69 * fp68;
LIBINT2_REALTYPE fp71;
fp71 = inteval->PC_x[vi] * fp60;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_minus(inteval->PB_x[vi], fp5, fp71);
LIBINT2_REALTYPE fp66;
fp66 = fp70 + fp67;
LIBINT2_REALTYPE fp8;
fp8 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp118;
fp118 = inteval->PC_z[vi] * fp90;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_minus(inteval->PB_z[vi], fp99, fp118);
LIBINT2_REALTYPE fp1;
fp1 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp121;
fp121 = inteval->PC_z[vi] * fp93;
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_minus(inteval->PB_z[vi], fp102, fp121);
LIBINT2_REALTYPE fp0;
fp0 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp0),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp2),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp7),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp6),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp5),1);
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
