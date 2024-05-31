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
void CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_1_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->BO_z[vi], fp5, fp11);
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_y[vi], fp46, fp39);
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp54 * fp40;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp6;
target[((hsi*36+17)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_y[vi], fp39, fp33);
LIBINT2_REALTYPE fp97;
fp97 = fp56 * fp34;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp6;
target[((hsi*36+16)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_y[vi], fp47, fp46);
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp52 * fp48;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp6;
target[((hsi*36+15)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->BO_z[vi], fp21, fp14);
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_y[vi], fp30, fp36);
LIBINT2_REALTYPE fp101;
fp101 = fp54 * fp31;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp15;
target[((hsi*36+14)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->BO_z[vi], fp14, fp8);
LIBINT2_REALTYPE fp103;
fp103 = fp56 * fp31;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp9;
target[((hsi*36+13)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_z[vi], fp22, fp21);
LIBINT2_REALTYPE fp105;
fp105 = fp52 * fp31;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp23;
target[((hsi*36+12)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp53 * fp40;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp15;
target[((hsi*36+11)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp53 * fp48;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp9;
target[((hsi*36+10)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp57 * fp48;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp23;
target[((hsi*36+0)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp18);
LIBINT2_REALTYPE fp113;
fp113 = fp56 * fp40;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp12;
target[((hsi*36+8)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = fp54 * fp48;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp12;
target[((hsi*36+7)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->BO_y[vi], fp36, fp43);
LIBINT2_REALTYPE fp117;
fp117 = fp56 * fp37;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp15;
target[((hsi*36+6)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp54 * fp37;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp23;
target[((hsi*36+5)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp55 * fp48;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp15;
target[((hsi*36+4)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp55 * fp40;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp23;
target[((hsi*36+3)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp18;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp17 + fp20;
LIBINT2_REALTYPE fp125;
fp125 = fp56 * fp48;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp19;
target[((hsi*36+2)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp42 + fp45;
LIBINT2_REALTYPE fp127;
fp127 = fp56 * fp44;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp23;
target[((hsi*36+1)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp111;
fp111 = fp53 * fp34;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp23;
target[((hsi*36+9)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->BO_z[vi], fp8, fp2);
LIBINT2_REALTYPE fp59;
fp59 = fp52 * fp34;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp3;
target[((hsi*36+35)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_y[vi], fp33, fp27);
LIBINT2_REALTYPE fp61;
fp61 = fp52 * fp28;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp9;
target[((hsi*36+34)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
fp63 = fp54 * fp28;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp3;
target[((hsi*36+33)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp50 * fp34;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp9;
target[((hsi*36+32)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
fp67 = fp50 * fp40;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp3;
target[((hsi*36+31)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp50 * fp28;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp15;
target[((hsi*36+30)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->BO_z[vi], fp2, fp5);
LIBINT2_REALTYPE fp71;
fp71 = fp54 * fp34;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp0;
target[((hsi*36+29)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp73;
fp73 = fp52 * fp40;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp0;
target[((hsi*36+28)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp51 * fp28;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp23;
target[((hsi*36+18)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp77;
fp77 = fp50 * fp48;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp0;
target[((hsi*36+26)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->BO_y[vi], fp27, fp30);
LIBINT2_REALTYPE fp79;
fp79 = fp54 * fp25;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp9;
target[((hsi*36+25)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = fp52 * fp25;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp15;
target[((hsi*36+24)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp56 * fp25;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp3;
target[((hsi*36+23)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp50 * fp25;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp23;
target[((hsi*36+22)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
fp87 = fp51 * fp40;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp9;
target[((hsi*36+21)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = fp51 * fp34;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp15;
target[((hsi*36+20)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp51 * fp48;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp3;
target[((hsi*36+19)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp75;
fp75 = fp56 * fp28;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp0;
target[((hsi*36+27)*1+lsi)*1] = fp74;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 130 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
