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
void CR_aB_i__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->BO_x[vi] * fp91;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp90 + fp93;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_y[vi], fp54, fp53);
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_y[vi] * fp57;
LIBINT2_REALTYPE fp56;
fp56 = inteval->BO_y[vi] * fp53;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp52 + fp56;
LIBINT2_REALTYPE fp59;
fp59 = fp55 + fp60;
LIBINT2_REALTYPE fp151;
fp151 = fp92 * fp59;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp6;
target[((hsi*28+1)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_y[vi], fp63, fp62);
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_y[vi] * fp66;
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_y[vi] * fp62;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp61 + fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp64 + fp69;
LIBINT2_REALTYPE fp149;
fp149 = fp92 * fp68;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp5;
target[((hsi*28+2)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_y[vi], fp45, fp44);
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_y[vi] * fp48;
LIBINT2_REALTYPE fp47;
fp47 = inteval->BO_y[vi] * fp44;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp43 + fp47;
LIBINT2_REALTYPE fp50;
fp50 = fp46 + fp51;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_x[vi] * fp87;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp86 + fp89;
LIBINT2_REALTYPE fp147;
fp147 = fp88 * fp50;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp6;
target[((hsi*28+3)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp88 * fp68;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp4;
target[((hsi*28+4)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_x[vi] * fp83;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp82 + fp85;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->BO_y[vi], fp36, fp35);
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_y[vi] * fp39;
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_y[vi] * fp35;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp34 + fp38;
LIBINT2_REALTYPE fp41;
fp41 = fp37 + fp42;
LIBINT2_REALTYPE fp143;
fp143 = fp84 * fp41;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp6;
target[((hsi*28+5)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp141;
fp141 = fp92 * fp41;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp4;
target[((hsi*28+6)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp84 * fp68;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp3;
target[((hsi*28+7)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp137;
fp137 = fp92 * fp50;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp3;
target[((hsi*28+8)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_y[vi], fp27, fp26);
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_y[vi] * fp30;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_y[vi] * fp26;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp25 + fp29;
LIBINT2_REALTYPE fp32;
fp32 = fp28 + fp33;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_x[vi] * fp79;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp78 + fp81;
LIBINT2_REALTYPE fp135;
fp135 = fp80 * fp32;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp6;
target[((hsi*28+9)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp80 * fp68;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp2;
target[((hsi*28+10)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp131;
fp131 = fp80 * fp50;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp4;
target[((hsi*28+11)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_x[vi] * fp75;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp74 + fp77;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->BO_y[vi], fp18, fp17);
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp21;
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_y[vi] * fp17;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp16 + fp20;
LIBINT2_REALTYPE fp23;
fp23 = fp19 + fp24;
LIBINT2_REALTYPE fp129;
fp129 = fp76 * fp23;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp6;
target[((hsi*28+12)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp127;
fp127 = fp92 * fp23;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp2;
target[((hsi*28+13)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_x[vi] * fp95;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp94 + fp97;
LIBINT2_REALTYPE fp153;
fp153 = fp96 * fp68;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp6;
target[((hsi*28+0)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp76 * fp68;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp1;
target[((hsi*28+15)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp121;
fp121 = fp92 * fp32;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp1;
target[((hsi*28+16)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp119;
fp119 = fp84 * fp50;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp1;
target[((hsi*28+17)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_y[vi], fp9, fp8);
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_y[vi] * fp12;
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_y[vi] * fp8;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp7 + fp11;
LIBINT2_REALTYPE fp14;
fp14 = fp10 + fp15;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->BO_x[vi] * fp71;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp70 + fp73;
LIBINT2_REALTYPE fp117;
fp117 = fp72 * fp14;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp6;
target[((hsi*28+18)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp72 * fp68;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp0;
target[((hsi*28+19)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp113;
fp113 = fp72 * fp32;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp4;
target[((hsi*28+20)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp111;
fp111 = fp72 * fp50;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp2;
target[((hsi*28+21)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp109;
fp109 = fp92 * fp14;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp0;
target[((hsi*28+22)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp107;
fp107 = fp76 * fp14;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp4;
target[((hsi*28+23)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp105;
fp105 = fp84 * fp14;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp2;
target[((hsi*28+24)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp103;
fp103 = fp76 * fp50;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp0;
target[((hsi*28+25)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp101;
fp101 = fp84 * fp32;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp0;
target[((hsi*28+26)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp99;
fp99 = fp76 * fp32;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp2;
target[((hsi*28+27)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp125;
fp125 = fp84 * fp23;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp4;
target[((hsi*28+14)*1+lsi)*1] = fp124;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 154 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
