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
void CR_aB_h__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_x[vi] * fp77;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src0[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp76 + fp79;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_y[vi], fp44, fp43);
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_y[vi] * fp47;
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp42 + fp46;
LIBINT2_REALTYPE fp49;
fp49 = fp45 + fp50;
LIBINT2_REALTYPE fp123;
fp123 = fp78 * fp49;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp5;
target[((hsi*21+1)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_y[vi], fp53, fp52);
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_y[vi] * fp56;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_y[vi] * fp52;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src1[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp51 + fp55;
LIBINT2_REALTYPE fp58;
fp58 = fp54 + fp59;
LIBINT2_REALTYPE fp121;
fp121 = fp78 * fp58;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp4;
target[((hsi*21+2)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_y[vi], fp35, fp34);
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_y[vi] * fp38;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_y[vi] * fp34;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp33 + fp37;
LIBINT2_REALTYPE fp40;
fp40 = fp36 + fp41;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_x[vi] * fp73;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src0[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp72 + fp75;
LIBINT2_REALTYPE fp119;
fp119 = fp74 * fp40;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp5;
target[((hsi*21+3)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp74 * fp58;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp3;
target[((hsi*21+4)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_x[vi] * fp69;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp68 + fp71;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_y[vi], fp26, fp25);
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_y[vi] * fp29;
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_y[vi] * fp25;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp24 + fp28;
LIBINT2_REALTYPE fp31;
fp31 = fp27 + fp32;
LIBINT2_REALTYPE fp115;
fp115 = fp70 * fp31;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp5;
target[((hsi*21+5)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp113;
fp113 = fp78 * fp31;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp3;
target[((hsi*21+6)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp70 * fp58;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp2;
target[((hsi*21+7)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp109;
fp109 = fp78 * fp40;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp2;
target[((hsi*21+8)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_y[vi], fp17, fp16);
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_y[vi] * fp20;
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_y[vi] * fp16;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp15 + fp19;
LIBINT2_REALTYPE fp22;
fp22 = fp18 + fp23;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_x[vi] * fp65;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src0[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp64 + fp67;
LIBINT2_REALTYPE fp107;
fp107 = fp66 * fp22;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp5;
target[((hsi*21+9)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src0[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_x[vi] * fp81;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp80 + fp83;
LIBINT2_REALTYPE fp125;
fp125 = fp82 * fp58;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp5;
target[((hsi*21+0)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp103;
fp103 = fp66 * fp40;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp3;
target[((hsi*21+11)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_x[vi] * fp61;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp60 + fp63;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->BO_y[vi], fp8, fp7);
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_y[vi] * fp11;
LIBINT2_REALTYPE fp10;
fp10 = inteval->BO_y[vi] * fp7;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp6 + fp10;
LIBINT2_REALTYPE fp13;
fp13 = fp9 + fp14;
LIBINT2_REALTYPE fp101;
fp101 = fp62 * fp13;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp5;
target[((hsi*21+12)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp78 * fp13;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp1;
target[((hsi*21+13)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp97;
fp97 = fp70 * fp13;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp3;
target[((hsi*21+14)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp62 * fp58;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp0;
target[((hsi*21+15)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp93;
fp93 = fp78 * fp22;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp0;
target[((hsi*21+16)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp91;
fp91 = fp70 * fp40;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp0;
target[((hsi*21+17)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp89;
fp89 = fp62 * fp22;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp3;
target[((hsi*21+18)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp87;
fp87 = fp62 * fp40;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp1;
target[((hsi*21+19)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp85;
fp85 = fp70 * fp22;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp1;
target[((hsi*21+20)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp105;
fp105 = fp66 * fp58;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp1;
target[((hsi*21+10)*1+lsi)*1] = fp104;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 126 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
