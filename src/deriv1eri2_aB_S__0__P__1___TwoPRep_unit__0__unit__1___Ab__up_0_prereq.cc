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
void deriv1eri2_aB_S__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp32;
fp32 = inteval->oo2ze[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp15;
fp15 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp22;
fp22 = inteval->WP_z[vi] * fp15;
LIBINT2_REALTYPE fp21;
fp21 = fp22 + fp32;
LIBINT2_REALTYPE fp9;
fp9 = inteval->two_alpha0_bra[vi] * fp21;
LIBINT2_REALTYPE fp8;
fp8 = fp9;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp17;
fp17 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * fp17;
LIBINT2_REALTYPE fp10;
fp10 = inteval->two_alpha0_bra[vi] * fp23;
LIBINT2_REALTYPE fp7;
fp7 = fp10;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp19;
fp19 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_z[vi] * fp19;
LIBINT2_REALTYPE fp11;
fp11 = inteval->two_alpha0_bra[vi] * fp24;
LIBINT2_REALTYPE fp6;
fp6 = fp11;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp25;
fp25 = inteval->WP_y[vi] * fp15;
LIBINT2_REALTYPE fp12;
fp12 = inteval->two_alpha0_bra[vi] * fp25;
LIBINT2_REALTYPE fp5;
fp5 = fp12;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_y[vi] * fp17;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + fp32;
LIBINT2_REALTYPE fp13;
fp13 = inteval->two_alpha0_bra[vi] * fp26;
LIBINT2_REALTYPE fp4;
fp4 = fp13;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp28;
fp28 = inteval->WP_y[vi] * fp19;
LIBINT2_REALTYPE fp14;
fp14 = inteval->two_alpha0_bra[vi] * fp28;
LIBINT2_REALTYPE fp3;
fp3 = fp14;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp29;
fp29 = inteval->WP_x[vi] * fp15;
LIBINT2_REALTYPE fp16;
fp16 = inteval->two_alpha0_bra[vi] * fp29;
LIBINT2_REALTYPE fp2;
fp2 = fp16;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_x[vi] * fp17;
LIBINT2_REALTYPE fp18;
fp18 = inteval->two_alpha0_bra[vi] * fp30;
LIBINT2_REALTYPE fp1;
fp1 = fp18;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_x[vi] * fp19;
LIBINT2_REALTYPE fp31;
fp31 = fp33 + fp32;
LIBINT2_REALTYPE fp20;
fp20 = inteval->two_alpha0_bra[vi] * fp31;
LIBINT2_REALTYPE fp0;
fp0 = fp20;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 34 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
