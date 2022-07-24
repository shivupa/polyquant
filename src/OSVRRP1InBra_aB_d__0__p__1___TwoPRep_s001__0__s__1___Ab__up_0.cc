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
void OSVRRP1InBra_aB_d__0__p__1___TwoPRep_s001__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WQ_y[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->QC_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp77 + fp76;
target[((hsi*18+1)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp71;
fp71 = 1.0000000000000000e+00 * inteval->alpha2_over_zetapluseta[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp71 * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->WQ_z[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->QC_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
LIBINT2_REALTYPE fp69;
fp69 = fp72 + fp70;
target[((hsi*18+2)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp67;
fp67 = inteval->WQ_x[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->QC_x[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
target[((hsi*18+3)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp80;
fp80 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp62;
fp62 = fp80 * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->WQ_y[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->QC_y[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
target[((hsi*18+4)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp57;
fp57 = fp71 * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->WQ_z[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->QC_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
target[((hsi*18+5)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WQ_x[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->QC_x[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp55 + fp54;
target[((hsi*18+6)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WQ_y[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->QC_y[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
target[((hsi*18+7)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp44;
fp44 = fp71 * src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp80 * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->WQ_z[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->QC_z[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp49 + fp48;
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
LIBINT2_REALTYPE fp43;
fp43 = fp45 + fp44;
target[((hsi*18+8)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->WQ_x[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->QC_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp83 + fp82;
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
target[((hsi*18+0)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp39;
fp39 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp39 * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->WQ_y[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->QC_y[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
target[((hsi*18+10)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp28;
fp28 = fp71 * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_z[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->QC_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp31 + fp30;
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
target[((hsi*18+11)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp23;
fp23 = fp39 * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->WQ_x[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->QC_x[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp26 + fp25;
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
target[((hsi*18+12)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WQ_y[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->QC_y[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
target[((hsi*18+13)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp14;
fp14 = fp71 * src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->WQ_z[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->QC_z[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
LIBINT2_REALTYPE fp15;
fp15 = fp16 + fp33;
LIBINT2_REALTYPE fp13;
fp13 = fp15 + fp14;
target[((hsi*18+14)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp11;
fp11 = inteval->WQ_x[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->QC_x[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*18+15)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp8;
fp8 = inteval->WQ_y[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->QC_y[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 + fp8;
LIBINT2_REALTYPE fp6;
fp6 = fp7 + fp23;
target[((hsi*18+16)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp1;
fp1 = fp71 * src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp39 * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->WQ_z[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->QC_z[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + fp38;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*18+17)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WQ_x[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->QC_x[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp42 + fp41;
LIBINT2_REALTYPE fp37;
fp37 = fp40 + fp38;
target[((hsi*18+9)*1+lsi)*1] = fp37;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 84 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
