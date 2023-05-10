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
void CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_2_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_z[vi], fp26, fp25);
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_z[vi], fp27, fp26);
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_z[vi], fp30, fp28);
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_x[vi], fp52, fp51);
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp53 * fp38;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp32;
target[((hsi*21+1)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->BO_z[vi], fp18, fp17);
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp21;
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp16 + fp20;
LIBINT2_REALTYPE fp23;
fp23 = fp19 + fp24;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp53 * fp39;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp23;
target[((hsi*21+2)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src0[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->BO_x[vi], fp48, fp56);
LIBINT2_REALTYPE fp94;
fp94 = fp49 * fp37;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp32;
target[((hsi*21+3)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp25, fp11);
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_z[vi], fp28, fp12);
LIBINT2_REALTYPE fp92;
fp92 = fp49 * fp39;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp14;
target[((hsi*21+4)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_x[vi], fp51, fp45);
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp46 * fp36;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp32;
target[((hsi*21+5)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp88;
fp88 = fp53 * fp36;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp14;
target[((hsi*21+6)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp18);
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp21);
LIBINT2_REALTYPE fp86;
fp86 = fp46 * fp39;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp9;
target[((hsi*21+7)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp84;
fp84 = fp53 * fp37;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp9;
target[((hsi*21+8)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_x[vi], fp42, fp48);
LIBINT2_REALTYPE fp82;
fp82 = fp43 * fp35;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp32;
target[((hsi*21+9)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_x[vi] * fp56;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src0[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp55 + fp58;
LIBINT2_REALTYPE fp100;
fp100 = fp57 * fp39;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp32;
target[((hsi*21+0)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp78;
fp78 = fp43 * fp37;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp14;
target[((hsi*21+11)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_x[vi], fp45, fp42);
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp40 * fp34;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp32;
target[((hsi*21+12)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp6);
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp12, fp2);
LIBINT2_REALTYPE fp74;
fp74 = fp53 * fp34;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp4;
target[((hsi*21+13)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp72;
fp72 = fp46 * fp34;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp14;
target[((hsi*21+14)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->BO_z[vi], fp2, fp7);
LIBINT2_REALTYPE fp70;
fp70 = fp40 * fp39;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp0;
target[((hsi*21+15)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp68;
fp68 = fp53 * fp35;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp0;
target[((hsi*21+16)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp66;
fp66 = fp46 * fp37;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp0;
target[((hsi*21+17)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp64;
fp64 = fp40 * fp35;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp14;
target[((hsi*21+18)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp62;
fp62 = fp40 * fp37;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp4;
target[((hsi*21+19)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp60;
fp60 = fp46 * fp35;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp4;
target[((hsi*21+20)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp80;
fp80 = fp43 * fp39;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp4;
target[((hsi*21+10)*1+lsi)*1] = fp79;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 101 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
