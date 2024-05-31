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
void _elecpot_S_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp84;
fp84 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp84);
LIBINT2_REALTYPE fp29;
fp29 = inteval->PC_y[vi] * fp83;
LIBINT2_REALTYPE fp87;
fp87 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp87);
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->PB_y[vi], fp86, fp29);
LIBINT2_REALTYPE fp11;
fp11 = inteval->PC_z[vi] * fp28;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PC_y[vi] * fp86;
LIBINT2_REALTYPE fp90;
fp90 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp90);
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_minus(inteval->PB_y[vi], fp89, fp32);
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_minus(inteval->PB_z[vi], fp31, fp11);
LIBINT2_REALTYPE fp9;
fp9 = fp10;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp94;
fp94 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2z[vi] * fp94;
LIBINT2_REALTYPE fp38;
fp38 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp38);
LIBINT2_REALTYPE fp48;
fp48 = inteval->PC_z[vi] * fp37;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp41);
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_minus(inteval->PB_z[vi], fp40, fp48);
LIBINT2_REALTYPE fp46;
fp46 = fp47 + fp93;
LIBINT2_REALTYPE fp14;
fp14 = inteval->PC_y[vi] * fp46;
LIBINT2_REALTYPE fp100;
fp100 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp99;
fp99 = inteval->oo2z[vi] * fp100;
LIBINT2_REALTYPE fp52;
fp52 = inteval->PC_z[vi] * fp40;
LIBINT2_REALTYPE fp44;
fp44 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp44);
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_minus(inteval->PB_z[vi], fp43, fp52);
LIBINT2_REALTYPE fp50;
fp50 = fp51 + fp99;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_minus(inteval->PB_y[vi], fp50, fp14);
LIBINT2_REALTYPE fp8;
fp8 = fp13;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp17;
fp17 = inteval->PC_x[vi] * fp46;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_minus(inteval->PB_x[vi], fp50, fp17);
LIBINT2_REALTYPE fp7;
fp7 = fp16;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp61;
fp61 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp61);
LIBINT2_REALTYPE fp71;
fp71 = inteval->PC_y[vi] * fp60;
LIBINT2_REALTYPE fp64;
fp64 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp64);
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_minus(inteval->PB_y[vi], fp63, fp71);
LIBINT2_REALTYPE fp69;
fp69 = fp70 + fp93;
LIBINT2_REALTYPE fp20;
fp20 = inteval->PC_z[vi] * fp69;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PC_y[vi] * fp63;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp67);
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_minus(inteval->PB_y[vi], fp66, fp75);
LIBINT2_REALTYPE fp73;
fp73 = fp74 + fp99;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_minus(inteval->PB_z[vi], fp73, fp20);
LIBINT2_REALTYPE fp6;
fp6 = fp19;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp23;
fp23 = inteval->PC_x[vi] * fp69;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_minus(inteval->PB_x[vi], fp73, fp23);
LIBINT2_REALTYPE fp5;
fp5 = fp22;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp96;
fp96 = inteval->PC_x[vi] * fp83;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_minus(inteval->PB_x[vi], fp86, fp96);
LIBINT2_REALTYPE fp92;
fp92 = fp95 + fp93;
LIBINT2_REALTYPE fp26;
fp26 = inteval->PC_z[vi] * fp92;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PC_x[vi] * fp86;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_minus(inteval->PB_x[vi], fp89, fp102);
LIBINT2_REALTYPE fp98;
fp98 = fp101 + fp99;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->PB_z[vi], fp98, fp26);
LIBINT2_REALTYPE fp4;
fp4 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp35;
fp35 = inteval->PC_y[vi] * fp92;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_minus(inteval->PB_y[vi], fp98, fp35);
LIBINT2_REALTYPE fp3;
fp3 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp107;
fp107 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp43 - fp40;
LIBINT2_REALTYPE fp55;
fp55 = fp107 * fp56;
LIBINT2_REALTYPE fp58;
fp58 = inteval->PC_z[vi] * fp46;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_minus(inteval->PB_z[vi], fp50, fp58);
LIBINT2_REALTYPE fp54;
fp54 = fp57 + fp55;
LIBINT2_REALTYPE fp2;
fp2 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp79;
fp79 = fp66 - fp63;
LIBINT2_REALTYPE fp78;
fp78 = fp107 * fp79;
LIBINT2_REALTYPE fp81;
fp81 = inteval->PC_y[vi] * fp69;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_minus(inteval->PB_y[vi], fp73, fp81);
LIBINT2_REALTYPE fp77;
fp77 = fp80 + fp78;
LIBINT2_REALTYPE fp1;
fp1 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp106;
fp106 = fp89 - fp86;
LIBINT2_REALTYPE fp105;
fp105 = fp107 * fp106;
LIBINT2_REALTYPE fp109;
fp109 = inteval->PC_x[vi] * fp92;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_minus(inteval->PB_x[vi], fp98, fp109);
LIBINT2_REALTYPE fp104;
fp104 = fp108 + fp105;
LIBINT2_REALTYPE fp0;
fp0 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 111 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
