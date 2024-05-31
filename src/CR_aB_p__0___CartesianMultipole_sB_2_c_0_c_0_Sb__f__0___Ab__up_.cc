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
void CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->BO_x[vi], fp47, fp46);
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src0[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_x[vi], fp48, fp47);
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_x[vi], fp51, fp49);
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp53 * fp14;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp7;
target[((hsi*30+1)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp53 * fp15;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp6;
target[((hsi*30+2)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src0[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_x[vi], fp57, fp56);
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_x[vi], fp46, fp57);
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_x[vi], fp42, fp60);
LIBINT2_REALTYPE fp117;
fp117 = fp44 * fp13;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp7;
target[((hsi*30+3)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp44 * fp15;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp5;
target[((hsi*30+4)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_x[vi], fp49, fp42);
LIBINT2_REALTYPE fp113;
fp113 = fp40 * fp12;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp7;
target[((hsi*30+5)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp111;
fp111 = fp53 * fp12;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp5;
target[((hsi*30+6)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp40 * fp15;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp4;
target[((hsi*30+7)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp107;
fp107 = fp53 * fp13;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp4;
target[((hsi*30+8)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp105;
fp105 = fp40 * fp13;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp5;
target[((hsi*30+9)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_x[vi], fp33, fp32);
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_x[vi] * fp36;
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_x[vi] * fp32;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp31 + fp35;
LIBINT2_REALTYPE fp38;
fp38 = fp34 + fp39;
LIBINT2_REALTYPE fp103;
fp103 = fp38 * fp11;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp7;
target[((hsi*30+10)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->BO_x[vi], fp23, fp22);
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_x[vi], fp24, fp23);
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_x[vi], fp27, fp25);
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp29 * fp10;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp7;
target[((hsi*30+11)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp99;
fp99 = fp29 * fp11;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp6;
target[((hsi*30+12)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_x[vi], fp22, fp33);
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_x[vi], fp18, fp36);
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp20 * fp9;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp7;
target[((hsi*30+13)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp95;
fp95 = fp20 * fp11;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp5;
target[((hsi*30+14)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_x[vi] * fp60;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_x[vi] * fp56;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src0[((hsi*12+11)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp55 + fp59;
LIBINT2_REALTYPE fp62;
fp62 = fp58 + fp63;
LIBINT2_REALTYPE fp123;
fp123 = fp62 * fp15;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp7;
target[((hsi*30+0)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp29 * fp8;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp5;
target[((hsi*30+16)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_x[vi], fp25, fp18);
LIBINT2_REALTYPE fp89;
fp89 = fp16 * fp11;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp4;
target[((hsi*30+17)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp87;
fp87 = fp29 * fp9;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp4;
target[((hsi*30+18)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp85;
fp85 = fp16 * fp9;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp5;
target[((hsi*30+19)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp38 * fp15;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp3;
target[((hsi*30+20)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp81;
fp81 = fp29 * fp14;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp3;
target[((hsi*30+21)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp29 * fp15;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp2;
target[((hsi*30+22)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp77;
fp77 = fp20 * fp13;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp3;
target[((hsi*30+23)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp20 * fp15;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp1;
target[((hsi*30+24)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp73;
fp73 = fp16 * fp12;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp3;
target[((hsi*30+25)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp71;
fp71 = fp29 * fp12;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp1;
target[((hsi*30+26)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp16 * fp15;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp0;
target[((hsi*30+27)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp67;
fp67 = fp29 * fp13;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp0;
target[((hsi*30+28)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp65;
fp65 = fp16 * fp13;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp1;
target[((hsi*30+29)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp93;
fp93 = fp16 * fp8;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp7;
target[((hsi*30+15)*1+lsi)*1] = fp92;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 124 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
