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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_4_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 1.0000000000000000e+00 * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + fp3;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
fp4 = inteval->PB_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PB_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
target[((hsi*15+13)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp6;
fp6 = inteval->PB_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
target[((hsi*15+12)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp10;
fp10 = 1.0000000000000000e+00 * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = inteval->oo2z[vi] * fp9;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PB_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp11 + fp8;
target[((hsi*15+11)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp15;
fp15 = 1.0000000000000000e+00 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + fp15;
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp16;
fp16 = inteval->PB_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp16 + fp13;
target[((hsi*15+10)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp20;
fp20 = -5.0000000000000000e-01 * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 1.0000000000000000e+00 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
LIBINT2_REALTYPE fp18;
fp18 = inteval->oo2z[vi] * fp19;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PB_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp23 + fp18;
target[((hsi*15+9)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp27;
fp27 = 2.0000000000000000e+00 * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + fp27;
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp28;
fp28 = inteval->PB_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp28 + fp25;
target[((hsi*15+8)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp32;
fp32 = 2.0000000000000000e+00 * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + fp32;
LIBINT2_REALTYPE fp30;
fp30 = inteval->oo2z[vi] * fp31;
LIBINT2_REALTYPE fp33;
fp33 = inteval->PB_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp33 + fp30;
target[((hsi*15+7)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp34;
fp34 = inteval->PB_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
target[((hsi*15+6)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp38;
fp38 = -5.0000000000000000e-01 * src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 2.0000000000000000e+00 * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + fp40;
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PB_y[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp41 + fp36;
target[((hsi*15+5)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp42;
fp42 = inteval->PB_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*15+4)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp46;
fp46 = -5.0000000000000000e-01 * src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + fp46;
LIBINT2_REALTYPE fp44;
fp44 = inteval->oo2z[vi] * fp45;
LIBINT2_REALTYPE fp47;
fp47 = inteval->PB_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp47 + fp44;
target[((hsi*15+3)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp51;
fp51 = 3.0000000000000000e+00 * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + fp51;
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp52;
fp52 = inteval->PB_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp52 + fp49;
target[((hsi*15+2)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp56;
fp56 = -5.0000000000000000e-01 * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 3.0000000000000000e+00 * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + fp58;
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
LIBINT2_REALTYPE fp54;
fp54 = inteval->oo2z[vi] * fp55;
LIBINT2_REALTYPE fp59;
fp59 = inteval->PB_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp59 + fp54;
target[((hsi*15+1)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp63;
fp63 = 5.0000000000000000e-01 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 3.0000000000000000e+00 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + fp65;
LIBINT2_REALTYPE fp62;
fp62 = fp64 - fp63;
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp66;
fp66 = inteval->PB_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp66 + fp61;
target[((hsi*15+0)*1+lsi)*1] = fp60;
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
