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
void CR_aB_g__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_y[vi], fp41, fp40);
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_y[vi], fp42, fp41);
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->BO_y[vi], fp45, fp43);
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_y[vi] * fp49;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_y[vi] * fp40;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp37 + fp39;
LIBINT2_REALTYPE fp47;
fp47 = fp38 + fp48;
LIBINT2_REALTYPE fp51;
fp51 = fp47 + fp52;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src0[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp86 * fp51;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp0;
target[((hsi*15+14)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->BO_y[vi], fp9, fp8);
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_y[vi], fp10, fp9);
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_y[vi], fp13, fp11);
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_y[vi] * fp17;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_y[vi] * fp11;
LIBINT2_REALTYPE fp7;
fp7 = inteval->BO_y[vi] * fp8;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp5 + fp7;
LIBINT2_REALTYPE fp15;
fp15 = fp6 + fp16;
LIBINT2_REALTYPE fp19;
fp19 = fp15 + fp20;
LIBINT2_REALTYPE fp93;
fp93 = fp86 * fp19;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp2;
target[((hsi*15+13)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src0[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp85 * fp51;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp2;
target[((hsi*15+12)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src0[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp88 * fp19;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp0;
target[((hsi*15+11)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->BO_y[vi], fp73, fp72);
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src1[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->BO_y[vi], fp74, fp73);
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->BO_y[vi], fp77, fp75);
LIBINT2_REALTYPE fp84;
fp84 = inteval->BO_y[vi] * fp81;
LIBINT2_REALTYPE fp80;
fp80 = inteval->BO_y[vi] * fp75;
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_y[vi] * fp72;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src1[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp69 + fp71;
LIBINT2_REALTYPE fp79;
fp79 = fp70 + fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp79 + fp84;
LIBINT2_REALTYPE fp99;
fp99 = fp85 * fp83;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp0;
target[((hsi*15+10)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp85 * fp19;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp4;
target[((hsi*15+9)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp88 * fp51;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp1;
target[((hsi*15+8)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = fp86 * fp83;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp1;
target[((hsi*15+7)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_y[vi], fp25, fp24);
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_y[vi], fp26, fp25);
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_y[vi], fp29, fp27);
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_y[vi] * fp33;
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_y[vi] * fp27;
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_y[vi] * fp24;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp31;
fp31 = fp22 + fp32;
LIBINT2_REALTYPE fp35;
fp35 = fp31 + fp36;
LIBINT2_REALTYPE fp107;
fp107 = fp88 * fp35;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp2;
target[((hsi*15+6)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp86 * fp35;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp4;
target[((hsi*15+5)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp87 * fp83;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp2;
target[((hsi*15+4)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp87 * fp51;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp4;
target[((hsi*15+3)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp88 * fp83;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp3;
target[((hsi*15+2)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*20+18)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_y[vi], fp57, fp56);
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_y[vi], fp58, fp57);
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->BO_y[vi], fp61, fp59);
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_y[vi] * fp65;
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_y[vi] * fp59;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_y[vi] * fp56;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*20+19)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp53 + fp55;
LIBINT2_REALTYPE fp63;
fp63 = fp54 + fp64;
LIBINT2_REALTYPE fp67;
fp67 = fp63 + fp68;
LIBINT2_REALTYPE fp117;
fp117 = fp88 * fp67;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp4;
target[((hsi*15+1)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src0[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp89 * fp83;
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
