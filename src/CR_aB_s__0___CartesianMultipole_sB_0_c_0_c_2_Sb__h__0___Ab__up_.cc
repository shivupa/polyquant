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
void CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_2_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_z[vi], fp26, fp25);
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_z[vi], fp27, fp26);
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_z[vi], fp30, fp28);
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src0[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp44 * fp38;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp32;
target[((hsi*21+1)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*8+6)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->BO_z[vi], fp18, fp17);
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp21;
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*8+7)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp16 + fp20;
LIBINT2_REALTYPE fp23;
fp23 = fp19 + fp24;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp44 * fp39;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp23;
target[((hsi*21+2)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp43 * fp37;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp32;
target[((hsi*21+3)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp25, fp11);
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_z[vi], fp28, fp12);
LIBINT2_REALTYPE fp79;
fp79 = fp43 * fp39;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp14;
target[((hsi*21+4)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp42 * fp36;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp32;
target[((hsi*21+5)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp75;
fp75 = fp44 * fp36;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp14;
target[((hsi*21+6)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp18);
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp21);
LIBINT2_REALTYPE fp73;
fp73 = fp42 * fp39;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp9;
target[((hsi*21+7)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp71;
fp71 = fp44 * fp37;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp9;
target[((hsi*21+8)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp41 * fp35;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp32;
target[((hsi*21+9)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src0[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp45 * fp39;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp32;
target[((hsi*21+0)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp65;
fp65 = fp41 * fp37;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp14;
target[((hsi*21+11)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp40 * fp34;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp32;
target[((hsi*21+12)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp6);
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp12, fp2);
LIBINT2_REALTYPE fp61;
fp61 = fp44 * fp34;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp4;
target[((hsi*21+13)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp59;
fp59 = fp42 * fp34;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp14;
target[((hsi*21+14)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->BO_z[vi], fp2, fp7);
LIBINT2_REALTYPE fp57;
fp57 = fp40 * fp39;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp0;
target[((hsi*21+15)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp55;
fp55 = fp44 * fp35;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp0;
target[((hsi*21+16)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp53;
fp53 = fp42 * fp37;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp0;
target[((hsi*21+17)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp51;
fp51 = fp40 * fp35;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp14;
target[((hsi*21+18)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp49;
fp49 = fp40 * fp37;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp4;
target[((hsi*21+19)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp47;
fp47 = fp42 * fp35;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp4;
target[((hsi*21+20)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp67;
fp67 = fp41 * fp39;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp4;
target[((hsi*21+10)*1+lsi)*1] = fp66;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 88 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif