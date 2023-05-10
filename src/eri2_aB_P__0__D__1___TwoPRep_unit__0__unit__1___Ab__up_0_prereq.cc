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
void eri2_aB_P__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp61 * fp59;
LIBINT2_REALTYPE fp47;
fp47 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_minus(inteval->WQ_y[vi], fp47, fp58);
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_x[vi] * fp48;
LIBINT2_REALTYPE fp1;
fp1 = fp50;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp43;
fp43 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_minus(inteval->WQ_z[vi], fp43, fp58);
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_x[vi] * fp44;
LIBINT2_REALTYPE fp2;
fp2 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp54;
fp54 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp51;
fp51 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->WP_x[vi], fp51, fp53);
LIBINT2_REALTYPE fp42;
fp42 = inteval->WQ_y[vi] * fp52;
LIBINT2_REALTYPE fp3;
fp3 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp40;
fp40 = inteval->WQ_z[vi] * fp52;
LIBINT2_REALTYPE fp4;
fp4 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp68;
fp68 = inteval->WQ_z[vi] * fp47;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WP_x[vi] * fp68;
LIBINT2_REALTYPE fp5;
fp5 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_minus(inteval->WQ_x[vi], fp51, fp58);
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_y[vi] * fp57;
LIBINT2_REALTYPE fp6;
fp6 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp65;
fp65 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp41;
fp41 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp35;
fp35 = fp65 * fp41;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->WP_y[vi], fp48, fp35);
LIBINT2_REALTYPE fp7;
fp7 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_y[vi] * fp44;
LIBINT2_REALTYPE fp8;
fp8 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp56;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->WP_x[vi], fp57, fp64);
LIBINT2_REALTYPE fp0;
fp0 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+0)*1+lsi)*1]),&(fp0),1);
LIBINT2_REALTYPE fp69;
fp69 = inteval->WQ_z[vi] * fp51;
LIBINT2_REALTYPE fp29;
fp29 = inteval->WP_y[vi] * fp69;
LIBINT2_REALTYPE fp10;
fp10 = fp29;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->WP_y[vi], fp47, fp53);
LIBINT2_REALTYPE fp28;
fp28 = inteval->WQ_z[vi] * fp32;
LIBINT2_REALTYPE fp11;
fp11 = fp28;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_z[vi] * fp57;
LIBINT2_REALTYPE fp12;
fp12 = fp27;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_z[vi] * fp48;
LIBINT2_REALTYPE fp13;
fp13 = fp26;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp39;
fp39 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp24;
fp24 = fp65 * fp39;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->WP_z[vi], fp44, fp24);
LIBINT2_REALTYPE fp14;
fp14 = fp23;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp67;
fp67 = inteval->WQ_y[vi] * fp51;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_z[vi] * fp67;
LIBINT2_REALTYPE fp15;
fp15 = fp20;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->WP_z[vi], fp43, fp53);
LIBINT2_REALTYPE fp19;
fp19 = inteval->WQ_x[vi] * fp21;
LIBINT2_REALTYPE fp16;
fp16 = fp19;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp18;
fp18 = inteval->WQ_y[vi] * fp21;
LIBINT2_REALTYPE fp17;
fp17 = fp18;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_x[vi] * fp32;
LIBINT2_REALTYPE fp9;
fp9 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+9)*1+lsi)*1]),&(fp9),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 70 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
