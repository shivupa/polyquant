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
void _elecpot_S_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp26;
fp26 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp26);
LIBINT2_REALTYPE fp7;
fp7 = inteval->PC_z[vi] * fp25;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp29);
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_minus(inteval->PB_z[vi], fp28, fp7);
LIBINT2_REALTYPE fp5;
fp5 = fp6;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp36;
fp36 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp36);
LIBINT2_REALTYPE fp10;
fp10 = inteval->PC_z[vi] * fp35;
LIBINT2_REALTYPE fp39;
fp39 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp39);
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_minus(inteval->PB_z[vi], fp38, fp10);
LIBINT2_REALTYPE fp4;
fp4 = fp9;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp13;
fp13 = inteval->PC_y[vi] * fp35;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(inteval->PB_y[vi], fp38, fp13);
LIBINT2_REALTYPE fp3;
fp3 = fp12;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp43;
fp43 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2z[vi] * fp43;
LIBINT2_REALTYPE fp16;
fp16 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp16);
LIBINT2_REALTYPE fp23;
fp23 = inteval->PC_z[vi] * fp15;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp19);
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_minus(inteval->PB_z[vi], fp18, fp23);
LIBINT2_REALTYPE fp21;
fp21 = fp22 + fp42;
LIBINT2_REALTYPE fp2;
fp2 = fp21;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp33;
fp33 = inteval->PC_y[vi] * fp25;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_minus(inteval->PB_y[vi], fp28, fp33);
LIBINT2_REALTYPE fp31;
fp31 = fp32 + fp42;
LIBINT2_REALTYPE fp1;
fp1 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp45;
fp45 = inteval->PC_x[vi] * fp35;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_minus(inteval->PB_x[vi], fp38, fp45);
LIBINT2_REALTYPE fp41;
fp41 = fp44 + fp42;
LIBINT2_REALTYPE fp0;
fp0 = fp41;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 47 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif