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
void CR_aB_s__0___CartesianMultipole_sB_3_c_0_c_0_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*11+5)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*11+1)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*11+4)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src0[((hsi*11+3)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_x[vi], fp49, fp35);
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*11+2)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_x[vi], fp52, fp49);
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_x[vi], fp50, fp36);
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*11+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->BO_x[vi], fp53, fp52);
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_x[vi], fp55, fp50);
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_x[vi], fp59, fp38);
LIBINT2_REALTYPE fp118;
fp118 = fp40 * fp13;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp2;
target[((hsi*36+17)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src0[((hsi*11+0)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_x[vi], fp54, fp53);
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_x[vi], fp57, fp55);
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_x[vi], fp61, fp59);
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*11+2)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp63 * fp11;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp2;
target[((hsi*36+16)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*11+0)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*11+5)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_x[vi], fp35, fp28);
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_x[vi], fp36, fp22);
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_x[vi], fp38, fp24);
LIBINT2_REALTYPE fp122;
fp122 = fp26 * fp15;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp2;
target[((hsi*36+15)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*11+1)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*11+5)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp40 * fp10;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp5;
target[((hsi*36+14)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*11+2)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp63 * fp10;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp3;
target[((hsi*36+13)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*11+0)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp26 * fp10;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp7;
target[((hsi*36+12)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*11+8)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*11+7)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->BO_x[vi], fp70, fp69);
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*11+6)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_x[vi], fp42, fp70);
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_x[vi], fp43, fp73);
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_x[vi], fp28, fp42);
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_x[vi], fp29, fp43);
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_x[vi], fp31, fp45);
LIBINT2_REALTYPE fp130;
fp130 = fp33 * fp13;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp5;
target[((hsi*36+11)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp132;
fp132 = fp33 * fp15;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp3;
target[((hsi*36+10)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*11+9)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->BO_x[vi], fp69, fp68);
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->BO_x[vi], fp73, fp71);
LIBINT2_REALTYPE fp80;
fp80 = inteval->BO_x[vi] * fp77;
LIBINT2_REALTYPE fp76;
fp76 = inteval->BO_x[vi] * fp71;
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_x[vi] * fp68;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*11+10)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp65 + fp67;
LIBINT2_REALTYPE fp75;
fp75 = fp66 + fp76;
LIBINT2_REALTYPE fp79;
fp79 = fp75 + fp80;
LIBINT2_REALTYPE fp152;
fp152 = fp79 * fp15;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp7;
target[((hsi*36+0)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*11+6)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp63 * fp13;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp4;
target[((hsi*36+8)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp138;
fp138 = fp40 * fp15;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp4;
target[((hsi*36+7)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*11+6)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp63 * fp12;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp5;
target[((hsi*36+6)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp142;
fp142 = fp40 * fp12;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp7;
target[((hsi*36+5)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_x[vi], fp45, fp77);
LIBINT2_REALTYPE fp144;
fp144 = fp47 * fp15;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp5;
target[((hsi*36+4)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp146;
fp146 = fp47 * fp13;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp7;
target[((hsi*36+3)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*11+7)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp63 * fp15;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp6;
target[((hsi*36+2)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*11+7)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = fp63 * fp14;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp7;
target[((hsi*36+1)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp134;
fp134 = fp33 * fp11;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp7;
target[((hsi*36+9)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*11+3)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp26 * fp11;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp1;
target[((hsi*36+35)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*11+3)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp26 * fp9;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp3;
target[((hsi*36+34)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp86;
fp86 = fp40 * fp9;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp1;
target[((hsi*36+33)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_x[vi], fp22, fp29);
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_x[vi], fp24, fp18);
LIBINT2_REALTYPE fp88;
fp88 = fp16 * fp11;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp3;
target[((hsi*36+32)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp90;
fp90 = fp16 * fp13;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp1;
target[((hsi*36+31)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp92;
fp92 = fp16 * fp9;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp5;
target[((hsi*36+30)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*11+4)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp40 * fp11;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp0;
target[((hsi*36+29)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp96;
fp96 = fp26 * fp13;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp0;
target[((hsi*36+28)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_x[vi], fp18, fp31);
LIBINT2_REALTYPE fp116;
fp116 = fp20 * fp9;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp7;
target[((hsi*36+18)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp100;
fp100 = fp16 * fp15;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp0;
target[((hsi*36+26)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*11+4)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp40 * fp8;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp3;
target[((hsi*36+25)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp104;
fp104 = fp26 * fp8;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp5;
target[((hsi*36+24)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp106;
fp106 = fp63 * fp8;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp1;
target[((hsi*36+23)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp108;
fp108 = fp16 * fp8;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp7;
target[((hsi*36+22)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp110;
fp110 = fp20 * fp13;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp3;
target[((hsi*36+21)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp112;
fp112 = fp20 * fp11;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp5;
target[((hsi*36+20)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp114;
fp114 = fp20 * fp15;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp1;
target[((hsi*36+19)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp98;
fp98 = fp63 * fp9;
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