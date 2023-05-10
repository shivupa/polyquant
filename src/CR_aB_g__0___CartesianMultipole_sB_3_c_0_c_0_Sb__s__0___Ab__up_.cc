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
void CR_aB_g__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_x[vi], fp30, fp29);
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_x[vi], fp31, fp30);
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_x[vi], fp34, fp32);
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_x[vi] * fp38;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_x[vi] * fp32;
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_x[vi] * fp29;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp26 + fp28;
LIBINT2_REALTYPE fp36;
fp36 = fp27 + fp37;
LIBINT2_REALTYPE fp40;
fp40 = fp36 + fp41;
LIBINT2_REALTYPE fp91;
fp91 = fp40 * fp7;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp0;
target[((hsi*15+14)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp40 * fp5;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp2;
target[((hsi*15+13)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_x[vi], fp14, fp13);
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_x[vi], fp15, fp14);
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_x[vi], fp18, fp16);
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_x[vi] * fp22;
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_x[vi] * fp16;
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_x[vi] * fp13;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src0[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp20;
fp20 = fp11 + fp21;
LIBINT2_REALTYPE fp24;
fp24 = fp20 + fp25;
LIBINT2_REALTYPE fp95;
fp95 = fp24 * fp7;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp2;
target[((hsi*15+12)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_x[vi], fp62, fp61);
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_x[vi], fp63, fp62);
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_x[vi], fp66, fp64);
LIBINT2_REALTYPE fp73;
fp73 = inteval->BO_x[vi] * fp70;
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_x[vi] * fp64;
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_x[vi] * fp61;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src0[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp58 + fp60;
LIBINT2_REALTYPE fp68;
fp68 = fp59 + fp69;
LIBINT2_REALTYPE fp72;
fp72 = fp68 + fp73;
LIBINT2_REALTYPE fp97;
fp97 = fp72 * fp5;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp0;
target[((hsi*15+11)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp24 * fp9;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp0;
target[((hsi*15+10)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp24 * fp5;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp4;
target[((hsi*15+9)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp72 * fp7;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp1;
target[((hsi*15+8)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = fp40 * fp9;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp1;
target[((hsi*15+7)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp72 * fp6;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp2;
target[((hsi*15+6)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp40 * fp6;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp4;
target[((hsi*15+5)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src0[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src0[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_x[vi], fp46, fp45);
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_x[vi], fp47, fp46);
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_x[vi], fp50, fp48);
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_x[vi] * fp54;
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_x[vi] * fp48;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_x[vi] * fp45;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp52;
fp52 = fp43 + fp53;
LIBINT2_REALTYPE fp56;
fp56 = fp52 + fp57;
LIBINT2_REALTYPE fp111;
fp111 = fp56 * fp9;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp2;
target[((hsi*15+4)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp56 * fp7;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp4;
target[((hsi*15+3)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp72 * fp9;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp3;
target[((hsi*15+2)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp72 * fp8;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp4;
target[((hsi*15+1)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*20+18)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_x[vi], fp78, fp77);
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BO_x[vi], fp79, fp78);
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->BO_x[vi], fp82, fp80);
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_x[vi] * fp86;
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_x[vi] * fp80;
LIBINT2_REALTYPE fp76;
fp76 = inteval->BO_x[vi] * fp77;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*20+19)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp74 + fp76;
LIBINT2_REALTYPE fp84;
fp84 = fp75 + fp85;
LIBINT2_REALTYPE fp88;
fp88 = fp84 + fp89;
LIBINT2_REALTYPE fp119;
fp119 = fp88 * fp9;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp4;
target[((hsi*15+0)*1+lsi)*1] = fp118;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 120 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
