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
void CR_aB_s__0___CartesianMultipole_sB_0_c_3_c_0_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*11+5)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*11+4)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*11+3)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_y[vi], fp57, fp34);
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*11+2)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->BO_y[vi], fp60, fp57);
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->BO_y[vi], fp58, fp35);
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*11+1)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_y[vi], fp61, fp60);
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->BO_y[vi], fp63, fp58);
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->BO_y[vi], fp67, fp37);
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*11+1)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp77 * fp39;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp2;
target[((hsi*36+17)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*11+0)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*11+5)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->BO_y[vi], fp34, fp20);
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_y[vi], fp35, fp21);
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->BO_y[vi], fp37, fp23);
LIBINT2_REALTYPE fp120;
fp120 = fp79 * fp25;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp2;
target[((hsi*36+16)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*11+0)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->BO_y[vi], fp62, fp61);
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->BO_y[vi], fp65, fp63);
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->BO_y[vi], fp69, fp67);
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*11+2)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp75 * fp71;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp2;
target[((hsi*36+15)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*11+1)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*11+8)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*11+7)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->BO_y[vi], fp46, fp45);
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*11+6)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_y[vi], fp27, fp46);
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_y[vi], fp28, fp49);
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_y[vi], fp20, fp27);
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_y[vi], fp14, fp28);
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_y[vi], fp16, fp30);
LIBINT2_REALTYPE fp124;
fp124 = fp77 * fp18;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp5;
target[((hsi*36+14)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*11+2)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp79 * fp18;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp3;
target[((hsi*36+13)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*11+0)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp75 * fp18;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp7;
target[((hsi*36+12)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src0[((hsi*11+5)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp76 * fp39;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp5;
target[((hsi*36+11)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp132;
fp132 = fp76 * fp71;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp3;
target[((hsi*36+10)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*11+7)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp80 * fp71;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp7;
target[((hsi*36+0)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*11+6)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp79 * fp39;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp4;
target[((hsi*36+8)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp138;
fp138 = fp77 * fp71;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp4;
target[((hsi*36+7)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*11+9)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_y[vi], fp45, fp44);
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_y[vi], fp49, fp47);
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_y[vi], fp30, fp53);
LIBINT2_REALTYPE fp140;
fp140 = fp79 * fp32;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp5;
target[((hsi*36+6)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp142;
fp142 = fp77 * fp32;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp7;
target[((hsi*36+5)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*11+6)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp78 * fp71;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp5;
target[((hsi*36+4)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp146;
fp146 = fp78 * fp39;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp7;
target[((hsi*36+3)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*11+7)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp79 * fp71;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp6;
target[((hsi*36+2)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp56;
fp56 = inteval->BO_y[vi] * fp53;
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_y[vi] * fp47;
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_y[vi] * fp44;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*11+10)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp41 + fp43;
LIBINT2_REALTYPE fp51;
fp51 = fp42 + fp52;
LIBINT2_REALTYPE fp55;
fp55 = fp51 + fp56;
LIBINT2_REALTYPE fp150;
fp150 = fp79 * fp55;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp7;
target[((hsi*36+1)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp134;
fp134 = fp76 * fp25;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp7;
target[((hsi*36+9)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*11+3)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp75 * fp25;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp1;
target[((hsi*36+35)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_y[vi], fp21, fp14);
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_y[vi], fp23, fp10);
LIBINT2_REALTYPE fp84;
fp84 = fp75 * fp12;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp3;
target[((hsi*36+34)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp86;
fp86 = fp77 * fp12;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp1;
target[((hsi*36+33)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*11+3)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp73 * fp25;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp3;
target[((hsi*36+32)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp90;
fp90 = fp73 * fp39;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp1;
target[((hsi*36+31)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp92;
fp92 = fp73 * fp12;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp5;
target[((hsi*36+30)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*11+4)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp77 * fp25;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp0;
target[((hsi*36+29)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp96;
fp96 = fp75 * fp39;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp0;
target[((hsi*36+28)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*11+4)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp74 * fp12;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp7;
target[((hsi*36+18)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp100;
fp100 = fp73 * fp71;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp0;
target[((hsi*36+26)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_y[vi], fp10, fp16);
LIBINT2_REALTYPE fp102;
fp102 = fp77 * fp8;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp3;
target[((hsi*36+25)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp104;
fp104 = fp75 * fp8;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp5;
target[((hsi*36+24)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp106;
fp106 = fp79 * fp8;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp1;
target[((hsi*36+23)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp108;
fp108 = fp73 * fp8;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp7;
target[((hsi*36+22)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp110;
fp110 = fp74 * fp39;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp3;
target[((hsi*36+21)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp112;
fp112 = fp74 * fp25;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp5;
target[((hsi*36+20)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp114;
fp114 = fp74 * fp71;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp1;
target[((hsi*36+19)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp98;
fp98 = fp79 * fp12;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp0;
target[((hsi*36+27)*1+lsi)*1] = fp97;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 153 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
