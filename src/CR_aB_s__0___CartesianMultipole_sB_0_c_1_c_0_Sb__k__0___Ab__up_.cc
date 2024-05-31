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
void CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_y[vi], fp29, fp22);
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp37 * fp23;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp2;
target[((hsi*36+17)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_y[vi], fp22, fp16);
LIBINT2_REALTYPE fp80;
fp80 = fp39 * fp17;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp2;
target[((hsi*36+16)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_y[vi], fp30, fp29);
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp35 * fp31;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp2;
target[((hsi*36+15)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_y[vi], fp13, fp19);
LIBINT2_REALTYPE fp84;
fp84 = fp37 * fp14;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp5;
target[((hsi*36+14)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp39 * fp14;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp3;
target[((hsi*36+13)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp35 * fp14;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp7;
target[((hsi*36+12)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp36 * fp23;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp5;
target[((hsi*36+11)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp92;
fp92 = fp36 * fp31;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp3;
target[((hsi*36+10)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp40 * fp31;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp7;
target[((hsi*36+0)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp39 * fp23;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp4;
target[((hsi*36+8)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp98;
fp98 = fp37 * fp31;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp4;
target[((hsi*36+7)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_y[vi], fp19, fp26);
LIBINT2_REALTYPE fp100;
fp100 = fp39 * fp20;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp5;
target[((hsi*36+6)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp102;
fp102 = fp37 * fp20;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp7;
target[((hsi*36+5)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src0[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp38 * fp31;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp5;
target[((hsi*36+4)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp106;
fp106 = fp38 * fp23;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp7;
target[((hsi*36+3)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp39 * fp31;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp6;
target[((hsi*36+2)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_y[vi] * fp26;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp25 + fp28;
LIBINT2_REALTYPE fp110;
fp110 = fp39 * fp27;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp7;
target[((hsi*36+1)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp94;
fp94 = fp36 * fp17;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp7;
target[((hsi*36+9)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp35 * fp17;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp1;
target[((hsi*36+35)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->BO_y[vi], fp16, fp10);
LIBINT2_REALTYPE fp44;
fp44 = fp35 * fp11;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp3;
target[((hsi*36+34)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp46;
fp46 = fp37 * fp11;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp1;
target[((hsi*36+33)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp33 * fp17;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp3;
target[((hsi*36+32)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp50;
fp50 = fp33 * fp23;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp1;
target[((hsi*36+31)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp52;
fp52 = fp33 * fp11;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp5;
target[((hsi*36+30)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp37 * fp17;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp0;
target[((hsi*36+29)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp56;
fp56 = fp35 * fp23;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp0;
target[((hsi*36+28)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp34 * fp11;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp7;
target[((hsi*36+18)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp60;
fp60 = fp33 * fp31;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp0;
target[((hsi*36+26)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_y[vi], fp10, fp13);
LIBINT2_REALTYPE fp62;
fp62 = fp37 * fp8;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp3;
target[((hsi*36+25)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp64;
fp64 = fp35 * fp8;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp5;
target[((hsi*36+24)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp66;
fp66 = fp39 * fp8;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp1;
target[((hsi*36+23)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp33 * fp8;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp7;
target[((hsi*36+22)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp70;
fp70 = fp34 * fp23;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp3;
target[((hsi*36+21)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp72;
fp72 = fp34 * fp17;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp5;
target[((hsi*36+20)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp74;
fp74 = fp34 * fp31;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp1;
target[((hsi*36+19)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp58;
fp58 = fp39 * fp11;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp0;
target[((hsi*36+27)*1+lsi)*1] = fp57;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 113 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
