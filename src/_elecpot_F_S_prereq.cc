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
void _elecpot_F_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_minus(inteval->PA_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp103);
LIBINT2_REALTYPE fp29;
fp29 = inteval->PC_y[vi] * fp102;
LIBINT2_REALTYPE fp106;
fp106 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_minus(inteval->PA_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp106);
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->PA_y[vi], fp105, fp29);
LIBINT2_REALTYPE fp11;
fp11 = inteval->PC_z[vi] * fp28;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PC_y[vi] * fp105;
LIBINT2_REALTYPE fp109;
fp109 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_minus(inteval->PA_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp109);
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_minus(inteval->PA_y[vi], fp108, fp32);
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_minus(inteval->PA_z[vi], fp31, fp11);
LIBINT2_REALTYPE fp9;
fp9 = fp10;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp67;
fp67 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp66;
fp66 = inteval->oo2z[vi] * fp67;
LIBINT2_REALTYPE fp85;
fp85 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_minus(inteval->PA_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp85);
LIBINT2_REALTYPE fp39;
fp39 = inteval->PC_z[vi] * fp84;
LIBINT2_REALTYPE fp88;
fp88 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_minus(inteval->PA_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp88);
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_minus(inteval->PA_z[vi], fp87, fp39);
LIBINT2_REALTYPE fp37;
fp37 = fp38 + fp66;
LIBINT2_REALTYPE fp14;
fp14 = inteval->PC_y[vi] * fp37;
LIBINT2_REALTYPE fp73;
fp73 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp43;
fp43 = inteval->PC_z[vi] * fp87;
LIBINT2_REALTYPE fp91;
fp91 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_minus(inteval->PA_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp91);
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_minus(inteval->PA_z[vi], fp90, fp43);
LIBINT2_REALTYPE fp41;
fp41 = fp42 + fp72;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_minus(inteval->PA_y[vi], fp41, fp14);
LIBINT2_REALTYPE fp8;
fp8 = fp13;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp17;
fp17 = inteval->PC_x[vi] * fp37;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_minus(inteval->PA_x[vi], fp41, fp17);
LIBINT2_REALTYPE fp7;
fp7 = fp16;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp94;
fp94 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_minus(inteval->PA_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp94);
LIBINT2_REALTYPE fp53;
fp53 = inteval->PC_y[vi] * fp93;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_minus(inteval->PA_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp97);
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_minus(inteval->PA_y[vi], fp96, fp53);
LIBINT2_REALTYPE fp51;
fp51 = fp52 + fp66;
LIBINT2_REALTYPE fp20;
fp20 = inteval->PC_z[vi] * fp51;
LIBINT2_REALTYPE fp57;
fp57 = inteval->PC_y[vi] * fp96;
LIBINT2_REALTYPE fp100;
fp100 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_minus(inteval->PA_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp100);
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->PA_y[vi], fp99, fp57);
LIBINT2_REALTYPE fp55;
fp55 = fp56 + fp72;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_minus(inteval->PA_z[vi], fp55, fp20);
LIBINT2_REALTYPE fp6;
fp6 = fp19;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp23;
fp23 = inteval->PC_x[vi] * fp51;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_minus(inteval->PA_x[vi], fp55, fp23);
LIBINT2_REALTYPE fp5;
fp5 = fp22;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp69;
fp69 = inteval->PC_x[vi] * fp102;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_minus(inteval->PA_x[vi], fp105, fp69);
LIBINT2_REALTYPE fp65;
fp65 = fp68 + fp66;
LIBINT2_REALTYPE fp26;
fp26 = inteval->PC_z[vi] * fp65;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PC_x[vi] * fp105;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_minus(inteval->PA_x[vi], fp108, fp75);
LIBINT2_REALTYPE fp71;
fp71 = fp74 + fp72;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->PA_z[vi], fp71, fp26);
LIBINT2_REALTYPE fp4;
fp4 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp35;
fp35 = inteval->PC_y[vi] * fp65;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_minus(inteval->PA_y[vi], fp71, fp35);
LIBINT2_REALTYPE fp3;
fp3 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp80;
fp80 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp90 - fp87;
LIBINT2_REALTYPE fp46;
fp46 = fp80 * fp47;
LIBINT2_REALTYPE fp49;
fp49 = inteval->PC_z[vi] * fp37;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_minus(inteval->PA_z[vi], fp41, fp49);
LIBINT2_REALTYPE fp45;
fp45 = fp48 + fp46;
LIBINT2_REALTYPE fp2;
fp2 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp61;
fp61 = fp99 - fp96;
LIBINT2_REALTYPE fp60;
fp60 = fp80 * fp61;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PC_y[vi] * fp51;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_minus(inteval->PA_y[vi], fp55, fp63);
LIBINT2_REALTYPE fp59;
fp59 = fp62 + fp60;
LIBINT2_REALTYPE fp1;
fp1 = fp59;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp79;
fp79 = fp108 - fp105;
LIBINT2_REALTYPE fp78;
fp78 = fp80 * fp79;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PC_x[vi] * fp65;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_minus(inteval->PA_x[vi], fp71, fp82);
LIBINT2_REALTYPE fp77;
fp77 = fp81 + fp78;
LIBINT2_REALTYPE fp0;
fp0 = fp77;
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
