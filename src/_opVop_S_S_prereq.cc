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
void _opVop_S_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp40);
LIBINT2_REALTYPE fp61;
fp61 = inteval->PC_y[vi] * fp39;
LIBINT2_REALTYPE fp43;
fp43 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp43);
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_minus(inteval->PA_y[vi], fp42, fp61);
LIBINT2_REALTYPE fp9;
fp9 = inteval->two_alpha0_ket[vi] * fp60;
LIBINT2_REALTYPE fp11;
fp11 = inteval->two_alpha0_bra[vi] * fp9;
LIBINT2_REALTYPE fp34;
fp34 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp34);
LIBINT2_REALTYPE fp58;
fp58 = inteval->PC_x[vi] * fp33;
LIBINT2_REALTYPE fp37;
fp37 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp37);
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_minus(inteval->PA_x[vi], fp36, fp58);
LIBINT2_REALTYPE fp10;
fp10 = inteval->two_alpha0_ket[vi] * fp57;
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_minus(inteval->two_alpha0_bra[vi], fp10, fp11);
LIBINT2_REALTYPE fp3;
fp3 = fp4;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp28;
fp28 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp28);
LIBINT2_REALTYPE fp52;
fp52 = inteval->PC_x[vi] * fp27;
LIBINT2_REALTYPE fp31;
fp31 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp31);
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_minus(inteval->PA_x[vi], fp30, fp52);
LIBINT2_REALTYPE fp13;
fp13 = inteval->two_alpha0_ket[vi] * fp51;
LIBINT2_REALTYPE fp15;
fp15 = inteval->two_alpha0_bra[vi] * fp13;
LIBINT2_REALTYPE fp55;
fp55 = inteval->PC_z[vi] * fp39;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_minus(inteval->PA_z[vi], fp42, fp55);
LIBINT2_REALTYPE fp14;
fp14 = inteval->two_alpha0_ket[vi] * fp54;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_minus(inteval->two_alpha0_bra[vi], fp14, fp15);
LIBINT2_REALTYPE fp2;
fp2 = fp5;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp49;
fp49 = inteval->PC_z[vi] * fp33;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_minus(inteval->PA_z[vi], fp36, fp49);
LIBINT2_REALTYPE fp17;
fp17 = inteval->two_alpha0_ket[vi] * fp48;
LIBINT2_REALTYPE fp19;
fp19 = inteval->two_alpha0_bra[vi] * fp17;
LIBINT2_REALTYPE fp46;
fp46 = inteval->PC_y[vi] * fp27;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_minus(inteval->PA_y[vi], fp30, fp46);
LIBINT2_REALTYPE fp18;
fp18 = inteval->two_alpha0_ket[vi] * fp45;
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_minus(inteval->two_alpha0_bra[vi], fp18, fp19);
LIBINT2_REALTYPE fp1;
fp1 = fp6;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp73;
fp73 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp65;
fp65 = inteval->PC_z[vi] * fp27;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_minus(inteval->PA_z[vi], fp30, fp65);
LIBINT2_REALTYPE fp63;
fp63 = fp64 + fp72;
LIBINT2_REALTYPE fp21;
fp21 = inteval->two_alpha0_ket[vi] * fp63;
LIBINT2_REALTYPE fp24;
fp24 = inteval->two_alpha0_bra[vi] * fp21;
LIBINT2_REALTYPE fp69;
fp69 = inteval->PC_y[vi] * fp33;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_minus(inteval->PA_y[vi], fp36, fp69);
LIBINT2_REALTYPE fp67;
fp67 = fp68 + fp72;
LIBINT2_REALTYPE fp22;
fp22 = inteval->two_alpha0_ket[vi] * fp67;
LIBINT2_REALTYPE fp25;
fp25 = inteval->two_alpha0_bra[vi] * fp22;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PC_x[vi] * fp39;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_minus(inteval->PA_x[vi], fp42, fp75);
LIBINT2_REALTYPE fp71;
fp71 = fp74 + fp72;
LIBINT2_REALTYPE fp23;
fp23 = inteval->two_alpha0_ket[vi] * fp71;
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->two_alpha0_bra[vi], fp23, fp25);
LIBINT2_REALTYPE fp7;
fp7 = fp8 + fp24;
LIBINT2_REALTYPE fp0;
fp0 = fp7;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 77 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
