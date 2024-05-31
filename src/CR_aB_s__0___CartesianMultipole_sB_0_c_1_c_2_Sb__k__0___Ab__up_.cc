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
void CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_2_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*11+7)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*11+6)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp28);
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*11+5)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp16);
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp17);
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*11+2)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src1[((hsi*11+1)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_y[vi], fp65, fp58);
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*11+1)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp73 * fp59;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp9;
target[((hsi*36+17)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*11+0)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*11+3)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_y[vi], fp58, fp52);
LIBINT2_REALTYPE fp116;
fp116 = fp75 * fp53;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp9;
target[((hsi*36+16)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*11+0)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->BO_y[vi], fp66, fp65);
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*11+2)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp71 * fp67;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp9;
target[((hsi*36+15)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*11+3)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*11+2)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_z[vi], fp35, fp21);
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src2[((hsi*11+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp36, fp35);
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp38, fp22);
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*11+6)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*11+5)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_y[vi], fp49, fp55);
LIBINT2_REALTYPE fp120;
fp120 = fp73 * fp50;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp24;
target[((hsi*36+14)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*11+4)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp21, fp11);
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_z[vi], fp22, fp12);
LIBINT2_REALTYPE fp122;
fp122 = fp75 * fp50;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp14;
target[((hsi*36+13)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*11+0)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_z[vi], fp37, fp36);
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_z[vi], fp40, fp38);
LIBINT2_REALTYPE fp124;
fp124 = fp71 * fp50;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp42;
target[((hsi*36+12)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src0[((hsi*11+5)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp72 * fp59;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp24;
target[((hsi*36+11)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp128;
fp128 = fp72 * fp67;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp14;
target[((hsi*36+10)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src0[((hsi*11+7)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp76 * fp67;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp42;
target[((hsi*36+0)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*11+8)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_z[vi], fp28, fp27);
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp31);
LIBINT2_REALTYPE fp132;
fp132 = fp75 * fp59;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp19;
target[((hsi*36+8)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp134;
fp134 = fp73 * fp67;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp19;
target[((hsi*36+7)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*11+7)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_y[vi], fp55, fp62);
LIBINT2_REALTYPE fp136;
fp136 = fp75 * fp56;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp24;
target[((hsi*36+6)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp138;
fp138 = fp73 * fp56;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp42;
target[((hsi*36+5)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*11+6)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp74 * fp67;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp24;
target[((hsi*36+4)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp142;
fp142 = fp74 * fp59;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp42;
target[((hsi*36+3)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_z[vi] * fp31;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp27;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*11+9)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp26 + fp30;
LIBINT2_REALTYPE fp33;
fp33 = fp29 + fp34;
LIBINT2_REALTYPE fp144;
fp144 = fp75 * fp67;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp33;
target[((hsi*36+2)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_y[vi] * fp62;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*11+8)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp61 + fp64;
LIBINT2_REALTYPE fp146;
fp146 = fp75 * fp63;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp42;
target[((hsi*36+1)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp130;
fp130 = fp72 * fp53;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp42;
target[((hsi*36+9)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp6);
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp12, fp2);
LIBINT2_REALTYPE fp78;
fp78 = fp71 * fp53;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp4;
target[((hsi*36+35)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*11+4)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_y[vi], fp52, fp46);
LIBINT2_REALTYPE fp80;
fp80 = fp71 * fp47;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp14;
target[((hsi*36+34)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp82;
fp82 = fp73 * fp47;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp4;
target[((hsi*36+33)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*11+3)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp69 * fp53;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp14;
target[((hsi*36+32)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp86;
fp86 = fp69 * fp59;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp4;
target[((hsi*36+31)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp88;
fp88 = fp69 * fp47;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp24;
target[((hsi*36+30)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->BO_z[vi], fp2, fp7);
LIBINT2_REALTYPE fp90;
fp90 = fp73 * fp53;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp0;
target[((hsi*36+29)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp92;
fp92 = fp71 * fp59;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp0;
target[((hsi*36+28)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*11+4)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp70 * fp47;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp42;
target[((hsi*36+18)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp96;
fp96 = fp69 * fp67;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp0;
target[((hsi*36+26)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_y[vi], fp46, fp49);
LIBINT2_REALTYPE fp98;
fp98 = fp73 * fp44;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp14;
target[((hsi*36+25)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp100;
fp100 = fp71 * fp44;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp24;
target[((hsi*36+24)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp102;
fp102 = fp75 * fp44;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp4;
target[((hsi*36+23)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp104;
fp104 = fp69 * fp44;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp42;
target[((hsi*36+22)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp106;
fp106 = fp70 * fp59;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp14;
target[((hsi*36+21)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp108;
fp108 = fp70 * fp53;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp24;
target[((hsi*36+20)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp110;
fp110 = fp70 * fp67;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp4;
target[((hsi*36+19)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp94;
fp94 = fp75 * fp47;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp0;
target[((hsi*36+27)*1+lsi)*1] = fp93;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 149 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
