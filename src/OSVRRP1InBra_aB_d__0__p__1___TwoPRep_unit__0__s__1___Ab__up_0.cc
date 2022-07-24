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

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void OSVRRP1InBra_aB_d__0__p__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WQ_y[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->QC_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
target[((hsi*18+1)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WQ_z[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->QC_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
target[((hsi*18+2)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_x[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->QC_x[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
target[((hsi*18+3)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp66;
fp66 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp51;
fp51 = fp66 * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->WQ_y[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->QC_y[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp54 + fp53;
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
target[((hsi*18+4)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WQ_z[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->QC_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp49 + fp48;
target[((hsi*18+5)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_x[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->QC_x[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
target[((hsi*18+6)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp42;
fp42 = inteval->WQ_y[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->QC_y[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp43 + fp42;
target[((hsi*18+7)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp37;
fp37 = fp66 * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->WQ_z[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->QC_z[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp40 + fp39;
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
target[((hsi*18+8)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->WQ_x[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->QC_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
LIBINT2_REALTYPE fp64;
fp64 = fp67 + fp65;
target[((hsi*18+0)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp27;
fp27 = inteval->oo2ze[vi] * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->WQ_y[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->QC_y[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp30 + fp29;
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*18+10)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WQ_z[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->QC_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
target[((hsi*18+11)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2ze[vi] * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->WQ_x[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->QC_x[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp22 + fp21;
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
target[((hsi*18+12)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp16;
fp16 = inteval->WQ_y[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->QC_y[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp17 + fp16;
target[((hsi*18+13)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp13;
fp13 = inteval->WQ_z[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->QC_z[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp14 + fp13;
LIBINT2_REALTYPE fp11;
fp11 = fp12 + fp27;
target[((hsi*18+14)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp9;
fp9 = inteval->WQ_x[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->QC_x[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
target[((hsi*18+15)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WQ_y[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->QC_y[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
LIBINT2_REALTYPE fp4;
fp4 = fp5 + fp19;
target[((hsi*18+16)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp32;
fp32 = inteval->oo2ze[vi] * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->WQ_z[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->QC_z[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp3 + fp2;
LIBINT2_REALTYPE fp0;
fp0 = fp1 + fp32;
target[((hsi*18+17)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp34;
fp34 = inteval->WQ_x[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->QC_x[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
LIBINT2_REALTYPE fp31;
fp31 = fp33 + fp32;
target[((hsi*18+9)*1+lsi)*1] = fp31;
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
