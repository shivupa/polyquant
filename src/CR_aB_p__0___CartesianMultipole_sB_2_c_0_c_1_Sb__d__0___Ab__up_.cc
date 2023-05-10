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
void CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_1_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp16);
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->BO_x[vi], fp47, fp57);
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src0[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_x[vi], fp48, fp47);
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_x[vi], fp51, fp49);
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp53 * fp24;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp18;
target[((hsi*18+1)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp12 + fp15;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp53 * fp25;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp14;
target[((hsi*18+2)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_x[vi], fp57, fp56);
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_x[vi], fp49, fp60);
LIBINT2_REALTYPE fp93;
fp93 = fp45 * fp23;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp18;
target[((hsi*18+3)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp13);
LIBINT2_REALTYPE fp91;
fp91 = fp45 * fp25;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp10;
target[((hsi*18+4)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp89;
fp89 = fp53 * fp23;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp10;
target[((hsi*18+5)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->BO_x[vi], fp38, fp37);
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_x[vi] * fp41;
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_x[vi] * fp37;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp36 + fp40;
LIBINT2_REALTYPE fp43;
fp43 = fp39 + fp44;
LIBINT2_REALTYPE fp87;
fp87 = fp43 * fp22;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp18;
target[((hsi*18+6)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_x[vi], fp28, fp38);
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_x[vi], fp29, fp28);
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_x[vi], fp32, fp30);
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp34 * fp21;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp18;
target[((hsi*18+7)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp83;
fp83 = fp34 * fp22;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp14;
target[((hsi*18+8)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_x[vi] * fp60;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_x[vi] * fp56;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src0[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp55 + fp59;
LIBINT2_REALTYPE fp62;
fp62 = fp58 + fp63;
LIBINT2_REALTYPE fp99;
fp99 = fp62 * fp25;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp18;
target[((hsi*18+0)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_x[vi], fp30, fp41);
LIBINT2_REALTYPE fp79;
fp79 = fp26 * fp22;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp10;
target[((hsi*18+10)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp34 * fp20;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp10;
target[((hsi*18+11)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp6);
LIBINT2_REALTYPE fp75;
fp75 = fp43 * fp25;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp8;
target[((hsi*18+12)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp73;
fp73 = fp34 * fp24;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp8;
target[((hsi*18+13)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp2 + fp5;
LIBINT2_REALTYPE fp71;
fp71 = fp34 * fp25;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp4;
target[((hsi*18+14)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp69;
fp69 = fp26 * fp23;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp8;
target[((hsi*18+15)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp3);
LIBINT2_REALTYPE fp67;
fp67 = fp26 * fp25;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp0;
target[((hsi*18+16)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp65;
fp65 = fp34 * fp23;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp0;
target[((hsi*18+17)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp81;
fp81 = fp26 * fp20;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp18;
target[((hsi*18+9)*1+lsi)*1] = fp80;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 100 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
