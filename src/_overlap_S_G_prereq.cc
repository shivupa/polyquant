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
void _overlap_S_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp17;
fp17 = inteval->oo2z[vi] * fp25;
LIBINT2_REALTYPE fp15;
fp15 = inteval->PB_z[vi] * fp25;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->PB_z[vi], fp15, fp17);
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp26;
fp26 = inteval->PB_y[vi] * fp36;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + fp26;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp38;
fp38 = inteval->PB_x[vi] * fp37;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + fp38;
LIBINT2_REALTYPE fp66;
fp66 = fp61 * fp57;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp50;
LIBINT2_REALTYPE fp14;
fp14 = fp65;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + fp15;
LIBINT2_REALTYPE fp28;
fp28 = inteval->oo2z[vi] * fp36;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->PB_y[vi], fp26, fp28);
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + fp27;
LIBINT2_REALTYPE fp68;
fp68 = fp61 * fp55;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp52;
LIBINT2_REALTYPE fp13;
fp13 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp40;
fp40 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->PB_x[vi], fp38, fp40);
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + fp39;
LIBINT2_REALTYPE fp70;
fp70 = fp60 * fp57;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp52;
LIBINT2_REALTYPE fp12;
fp12 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + fp37;
LIBINT2_REALTYPE fp72;
fp72 = fp63 * fp55;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp50;
LIBINT2_REALTYPE fp11;
fp11 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + fp36;
LIBINT2_REALTYPE fp74;
fp74 = fp60 * fp59;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp50;
LIBINT2_REALTYPE fp10;
fp10 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + fp25;
LIBINT2_REALTYPE fp76;
fp76 = fp60 * fp55;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp54;
LIBINT2_REALTYPE fp9;
fp9 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp44;
fp44 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp20;
fp20 = fp44 * fp15;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->PB_z[vi], fp16, fp20);
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + fp19;
LIBINT2_REALTYPE fp78;
fp78 = fp63 * fp57;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp51;
LIBINT2_REALTYPE fp8;
fp8 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp80;
fp80 = fp61 * fp59;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp51;
LIBINT2_REALTYPE fp7;
fp7 = fp79;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp31;
fp31 = fp44 * fp26;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PB_y[vi], fp27, fp31);
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + fp30;
LIBINT2_REALTYPE fp82;
fp82 = fp63 * fp56;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp52;
LIBINT2_REALTYPE fp6;
fp6 = fp81;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp84;
fp84 = fp61 * fp56;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp54;
LIBINT2_REALTYPE fp5;
fp5 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp38;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PB_x[vi], fp39, fp43);
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + fp42;
LIBINT2_REALTYPE fp86;
fp86 = fp62 * fp59;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp52;
LIBINT2_REALTYPE fp4;
fp4 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp88;
fp88 = fp62 * fp57;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp54;
LIBINT2_REALTYPE fp3;
fp3 = fp87;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp48;
fp48 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp23;
fp23 = fp48 * fp16;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->PB_z[vi], fp19, fp23);
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp90;
fp90 = fp63 * fp59;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp53;
LIBINT2_REALTYPE fp2;
fp2 = fp89;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp34;
fp34 = fp48 * fp27;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->PB_y[vi], fp30, fp34);
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + fp33;
LIBINT2_REALTYPE fp92;
fp92 = fp63 * fp58;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp54;
LIBINT2_REALTYPE fp1;
fp1 = fp91;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp39;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PB_x[vi], fp42, fp47);
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + fp46;
LIBINT2_REALTYPE fp94;
fp94 = fp64 * fp59;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp54;
LIBINT2_REALTYPE fp0;
fp0 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 95 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
