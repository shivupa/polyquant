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
void CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp22 * fp15;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp3;
target[((hsi*36+17)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp21 * fp17;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp3;
target[((hsi*36+16)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp21 * fp15;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp5;
target[((hsi*36+15)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp22 * fp17;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp4;
target[((hsi*36+14)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp22 * fp16;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp5;
target[((hsi*36+13)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp23 * fp17;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp5;
target[((hsi*36+12)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp22 * fp12;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp6;
target[((hsi*36+11)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp21 * fp14;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp6;
target[((hsi*36+10)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp26 * fp17;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp8;
target[((hsi*36+0)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp22 * fp14;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp7;
target[((hsi*36+8)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp22 * fp13;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp8;
target[((hsi*36+7)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp86;
fp86 = fp23 * fp14;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp8;
target[((hsi*36+6)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp25 * fp15;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp6;
target[((hsi*36+5)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src0[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp24 * fp17;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp6;
target[((hsi*36+4)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp92;
fp92 = fp24 * fp15;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp8;
target[((hsi*36+3)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp94;
fp94 = fp25 * fp17;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp7;
target[((hsi*36+2)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp96;
fp96 = fp25 * fp16;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp8;
target[((hsi*36+1)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp80;
fp80 = fp21 * fp12;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp8;
target[((hsi*36+9)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp22 * fp9;
LIBINT2_REALTYPE fp27;
fp27 = fp28 * fp0;
target[((hsi*36+35)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp21 * fp11;
LIBINT2_REALTYPE fp29;
fp29 = fp30 * fp0;
target[((hsi*36+34)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp21 * fp9;
LIBINT2_REALTYPE fp31;
fp31 = fp32 * fp2;
target[((hsi*36+33)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp22 * fp11;
LIBINT2_REALTYPE fp33;
fp33 = fp34 * fp1;
target[((hsi*36+32)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp22 * fp10;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp2;
target[((hsi*36+31)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp38;
fp38 = fp23 * fp11;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * fp2;
target[((hsi*36+30)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp19 * fp15;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp0;
target[((hsi*36+29)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src0[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp18 * fp17;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp0;
target[((hsi*36+28)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp20 * fp11;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp8;
target[((hsi*36+18)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp46;
fp46 = fp19 * fp17;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp1;
target[((hsi*36+26)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp48;
fp48 = fp19 * fp16;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp2;
target[((hsi*36+25)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp50;
fp50 = fp20 * fp17;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp2;
target[((hsi*36+24)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp52;
fp52 = fp19 * fp9;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp6;
target[((hsi*36+23)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp54;
fp54 = fp18 * fp11;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp6;
target[((hsi*36+22)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp56;
fp56 = fp18 * fp9;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp8;
target[((hsi*36+21)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp58;
fp58 = fp19 * fp11;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp7;
target[((hsi*36+20)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp60;
fp60 = fp19 * fp10;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp8;
target[((hsi*36+19)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp44;
fp44 = fp18 * fp15;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp2;
target[((hsi*36+27)*1+lsi)*1] = fp43;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 99 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
