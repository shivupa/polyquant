/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
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
void CR_aB_d__0___CartesianMultipole_sB_3_c_0_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->BO_x[vi], fp69, fp68);
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->BO_x[vi], fp70, fp69);
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->BO_x[vi], fp73, fp71);
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_x[vi], fp58, fp70);
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_x[vi], fp59, fp73);
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_x[vi], fp61, fp77);
LIBINT2_REALTYPE fp114;
fp114 = fp63 * fp10;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp5;
target[((hsi*18+1)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp63 * fp11;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp4;
target[((hsi*18+2)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_x[vi], fp46, fp45);
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*15+1)*1+lsi)*1];
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
fp42 = 0.0000000000000000e+00 + src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp52;
fp52 = fp43 + fp53;
LIBINT2_REALTYPE fp56;
fp56 = fp52 + fp57;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp56 * fp9;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp5;
target[((hsi*18+3)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_x[vi], fp35, fp47);
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_x[vi], fp36, fp50);
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_x[vi], fp38, fp54);
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp40 * fp8;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp5;
target[((hsi*18+4)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp106;
fp106 = fp40 * fp9;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp4;
target[((hsi*18+5)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp56 * fp11;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp3;
target[((hsi*18+6)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp102;
fp102 = fp40 * fp10;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp3;
target[((hsi*18+7)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp40 * fp11;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp2;
target[((hsi*18+8)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp80;
fp80 = inteval->BO_x[vi] * fp77;
LIBINT2_REALTYPE fp76;
fp76 = inteval->BO_x[vi] * fp71;
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_x[vi] * fp68;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp65 + fp67;
LIBINT2_REALTYPE fp75;
fp75 = fp66 + fp76;
LIBINT2_REALTYPE fp79;
fp79 = fp75 + fp80;
LIBINT2_REALTYPE fp116;
fp116 = fp79 * fp11;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp5;
target[((hsi*18+0)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->BO_x[vi], fp23, fp22);
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_x[vi], fp24, fp23);
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_x[vi], fp27, fp25);
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_x[vi], fp12, fp24);
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->BO_x[vi], fp13, fp27);
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_x[vi], fp15, fp31);
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp17 * fp6;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp5;
target[((hsi*18+10)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp17 * fp7;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp4;
target[((hsi*18+11)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_x[vi] * fp31;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_x[vi] * fp25;
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_x[vi] * fp22;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp19 + fp21;
LIBINT2_REALTYPE fp29;
fp29 = fp20 + fp30;
LIBINT2_REALTYPE fp33;
fp33 = fp29 + fp34;
LIBINT2_REALTYPE fp92;
fp92 = fp33 * fp11;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp1;
target[((hsi*18+12)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp90;
fp90 = fp17 * fp10;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp1;
target[((hsi*18+13)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp17 * fp11;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp0;
target[((hsi*18+14)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp86;
fp86 = fp56 * fp7;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp1;
target[((hsi*18+15)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp84;
fp84 = fp40 * fp6;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp1;
target[((hsi*18+16)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp82;
fp82 = fp40 * fp7;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp0;
target[((hsi*18+17)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp98;
fp98 = fp33 * fp7;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp5;
target[((hsi*18+9)*1+lsi)*1] = fp97;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 117 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
