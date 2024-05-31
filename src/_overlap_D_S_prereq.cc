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
void _overlap_D_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PA_z[vi] * fp10;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp6;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_y[vi] * fp15;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + fp11;
LIBINT2_REALTYPE fp31;
fp31 = fp28 * fp24;
LIBINT2_REALTYPE fp30;
fp30 = fp31 * fp21;
LIBINT2_REALTYPE fp5;
fp5 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + fp15;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PA_x[vi] * fp16;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp17;
LIBINT2_REALTYPE fp33;
fp33 = fp27 * fp26;
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp21;
LIBINT2_REALTYPE fp4;
fp4 = fp32;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp35;
fp35 = fp27 * fp24;
LIBINT2_REALTYPE fp34;
fp34 = fp35 * fp23;
LIBINT2_REALTYPE fp3;
fp3 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp8;
fp8 = inteval->oo2z[vi] * fp10;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->PA_z[vi], fp6, fp8);
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + fp7;
LIBINT2_REALTYPE fp37;
fp37 = fp28 * fp26;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp22;
LIBINT2_REALTYPE fp2;
fp2 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp15;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PA_y[vi], fp11, fp13);
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + fp12;
LIBINT2_REALTYPE fp39;
fp39 = fp28 * fp25;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp23;
LIBINT2_REALTYPE fp1;
fp1 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp16;
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PA_x[vi], fp17, fp19);
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + fp18;
LIBINT2_REALTYPE fp41;
fp41 = fp29 * fp26;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp23;
LIBINT2_REALTYPE fp0;
fp0 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 42 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
