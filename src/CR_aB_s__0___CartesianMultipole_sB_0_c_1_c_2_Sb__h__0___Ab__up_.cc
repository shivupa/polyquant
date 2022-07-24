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
void CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_2_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_z[vi] * fp26;
LIBINT2_REALTYPE fp30;
fp30 = fp27 + fp31;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp28;
fp28 = fp26 + fp29;
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_z[vi] * fp28;
LIBINT2_REALTYPE fp32;
fp32 = fp30 + fp33;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp46 + fp48;
LIBINT2_REALTYPE fp98;
fp98 = fp57 * fp47;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp32;
target[((hsi*21+1)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp19;
fp19 = fp17 + fp20;
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp18 + fp22;
LIBINT2_REALTYPE fp23;
fp23 = fp21 + fp24;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src1[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_y[vi] * fp49;
LIBINT2_REALTYPE fp51;
fp51 = fp50 + fp52;
LIBINT2_REALTYPE fp96;
fp96 = fp57 * fp51;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp23;
target[((hsi*21+2)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_y[vi] * fp50;
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp56 * fp43;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp32;
target[((hsi*21+3)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp27;
LIBINT2_REALTYPE fp12;
fp12 = fp11 + fp13;
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp30;
LIBINT2_REALTYPE fp14;
fp14 = fp12 + fp15;
LIBINT2_REALTYPE fp92;
fp92 = fp56 * fp51;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp14;
target[((hsi*21+4)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_y[vi] * fp39;
LIBINT2_REALTYPE fp40;
fp40 = fp45 + fp41;
LIBINT2_REALTYPE fp90;
fp90 = fp55 * fp40;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp32;
target[((hsi*21+5)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp88;
fp88 = fp57 * fp40;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp14;
target[((hsi*21+6)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp7;
fp7 = fp16 + fp8;
LIBINT2_REALTYPE fp10;
fp10 = inteval->BO_z[vi] * fp7;
LIBINT2_REALTYPE fp9;
fp9 = fp19 + fp10;
LIBINT2_REALTYPE fp86;
fp86 = fp55 * fp51;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp9;
target[((hsi*21+7)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp84;
fp84 = fp57 * fp43;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp9;
target[((hsi*21+8)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_y[vi] * fp42;
LIBINT2_REALTYPE fp37;
fp37 = fp36 + fp38;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp54 * fp37;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp32;
target[((hsi*21+9)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp58 * fp51;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp32;
target[((hsi*21+0)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp78;
fp78 = fp54 * fp43;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp14;
target[((hsi*21+11)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_y[vi] * fp36;
LIBINT2_REALTYPE fp34;
fp34 = fp39 + fp35;
LIBINT2_REALTYPE fp76;
fp76 = fp53 * fp34;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp32;
target[((hsi*21+12)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp3;
fp3 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp2;
fp2 = fp6 + fp3;
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp4;
fp4 = fp2 + fp5;
LIBINT2_REALTYPE fp74;
fp74 = fp57 * fp34;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp4;
target[((hsi*21+13)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp72;
fp72 = fp55 * fp34;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp14;
target[((hsi*21+14)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp1;
fp1 = inteval->BO_z[vi] * fp2;
LIBINT2_REALTYPE fp0;
fp0 = fp7 + fp1;
LIBINT2_REALTYPE fp70;
fp70 = fp53 * fp51;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp0;
target[((hsi*21+15)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp68;
fp68 = fp57 * fp37;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp0;
target[((hsi*21+16)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp66;
fp66 = fp55 * fp43;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp0;
target[((hsi*21+17)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp64;
fp64 = fp53 * fp37;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp14;
target[((hsi*21+18)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp62;
fp62 = fp53 * fp43;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp4;
target[((hsi*21+19)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp60;
fp60 = fp55 * fp37;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp4;
target[((hsi*21+20)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp80;
fp80 = fp54 * fp51;
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
