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
void _overlap_S_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp10;
fp10 = inteval->PB_z[vi] * fp17;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp18;
fp18 = inteval->PB_y[vi] * fp25;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + fp18;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PB_x[vi] * fp26;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + fp27;
LIBINT2_REALTYPE fp48;
fp48 = fp43 * fp40;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp36;
LIBINT2_REALTYPE fp9;
fp9 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp12;
fp12 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->PB_z[vi], fp10, fp12);
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + fp11;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + fp26;
LIBINT2_REALTYPE fp50;
fp50 = fp45 * fp40;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp35;
LIBINT2_REALTYPE fp8;
fp8 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + fp25;
LIBINT2_REALTYPE fp52;
fp52 = fp43 * fp42;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp35;
LIBINT2_REALTYPE fp7;
fp7 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp20;
fp20 = inteval->oo2z[vi] * fp25;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->PB_y[vi], fp18, fp20);
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + fp19;
LIBINT2_REALTYPE fp54;
fp54 = fp45 * fp39;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp36;
LIBINT2_REALTYPE fp6;
fp6 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + fp17;
LIBINT2_REALTYPE fp56;
fp56 = fp43 * fp39;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp38;
LIBINT2_REALTYPE fp5;
fp5 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->PB_x[vi], fp27, fp29);
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp58;
fp58 = fp44 * fp42;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp36;
LIBINT2_REALTYPE fp4;
fp4 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp60;
fp60 = fp44 * fp40;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp38;
LIBINT2_REALTYPE fp3;
fp3 = fp59;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp33;
fp33 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp33 * fp10;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->PB_z[vi], fp11, fp15);
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + fp14;
LIBINT2_REALTYPE fp62;
fp62 = fp45 * fp42;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp37;
LIBINT2_REALTYPE fp2;
fp2 = fp61;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp23;
fp23 = fp33 * fp18;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->PB_y[vi], fp19, fp23);
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp64;
fp64 = fp45 * fp41;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp38;
LIBINT2_REALTYPE fp1;
fp1 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp27;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->PB_x[vi], fp28, fp32);
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + fp31;
LIBINT2_REALTYPE fp66;
fp66 = fp46 * fp42;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp38;
LIBINT2_REALTYPE fp0;
fp0 = fp65;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 67 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
