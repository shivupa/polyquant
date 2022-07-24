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
void OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp160;
fp160 = 5.0000000000000000e-01 * src3[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = 5.0000000000000000e-01 * src3[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = 5.0000000000000000e+00 * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + fp164;
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
LIBINT2_REALTYPE fp159;
fp159 = fp161 + fp160;
LIBINT2_REALTYPE fp158;
fp158 = inteval->oo2z[vi] * fp159;
LIBINT2_REALTYPE fp165;
fp165 = inteval->PA_y[vi] * src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp165 + fp158;
target[((hsi*28+1)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp155;
fp155 = 5.0000000000000000e+00 * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + fp155;
LIBINT2_REALTYPE fp153;
fp153 = fp154 + src4[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = inteval->oo2z[vi] * fp153;
LIBINT2_REALTYPE fp156;
fp156 = inteval->PA_z[vi] * src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp156 + fp152;
target[((hsi*28+2)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp147;
fp147 = 5.0000000000000000e-01 * src3[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = 5.0000000000000000e-01 * src3[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + fp149;
LIBINT2_REALTYPE fp146;
fp146 = fp148 + fp147;
LIBINT2_REALTYPE fp145;
fp145 = inteval->oo2z[vi] * fp146;
LIBINT2_REALTYPE fp150;
fp150 = inteval->PA_y[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp150 + fp145;
target[((hsi*28+3)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + src4[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->oo2z[vi] * fp142;
LIBINT2_REALTYPE fp143;
fp143 = inteval->PA_z[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp143 + fp141;
target[((hsi*28+4)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp134;
fp134 = 5.0000000000000000e-01 * src3[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = 5.0000000000000000e-01 * src3[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = 4.0000000000000000e+00 * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + fp138;
LIBINT2_REALTYPE fp135;
fp135 = fp137 + fp136;
LIBINT2_REALTYPE fp133;
fp133 = fp135 + fp134;
LIBINT2_REALTYPE fp132;
fp132 = inteval->oo2z[vi] * fp133;
LIBINT2_REALTYPE fp139;
fp139 = inteval->PA_y[vi] * src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp139 + fp132;
target[((hsi*28+5)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src4[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = inteval->oo2z[vi] * fp129;
LIBINT2_REALTYPE fp130;
fp130 = inteval->PA_z[vi] * src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp130 + fp128;
target[((hsi*28+6)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp125;
fp125 = 4.0000000000000000e+00 * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + fp125;
LIBINT2_REALTYPE fp123;
fp123 = fp124 + src4[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->oo2z[vi] * fp123;
LIBINT2_REALTYPE fp126;
fp126 = inteval->PA_z[vi] * src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp126 + fp122;
target[((hsi*28+7)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp119;
fp119 = 4.0000000000000000e+00 * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + fp119;
LIBINT2_REALTYPE fp117;
fp117 = fp118 + src4[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->oo2z[vi] * fp117;
LIBINT2_REALTYPE fp120;
fp120 = inteval->PA_z[vi] * src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp120 + fp116;
target[((hsi*28+8)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp109;
fp109 = 5.0000000000000000e-01 * src3[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = 5.0000000000000000e-01 * src3[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 1.0000000000000000e+00 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + fp113;
LIBINT2_REALTYPE fp110;
fp110 = fp112 + fp111;
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
LIBINT2_REALTYPE fp107;
fp107 = inteval->oo2z[vi] * fp108;
LIBINT2_REALTYPE fp114;
fp114 = inteval->PA_y[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp114 + fp107;
target[((hsi*28+9)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp104;
fp104 = 1.0000000000000000e+00 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + fp104;
LIBINT2_REALTYPE fp102;
fp102 = fp103 + src4[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->oo2z[vi] * fp102;
LIBINT2_REALTYPE fp105;
fp105 = inteval->PA_z[vi] * src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp105 + fp101;
target[((hsi*28+10)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src4[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->oo2z[vi] * fp98;
LIBINT2_REALTYPE fp99;
fp99 = inteval->PA_z[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp99 + fp97;
target[((hsi*28+11)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp90;
fp90 = 5.0000000000000000e-01 * src3[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = 5.0000000000000000e-01 * src3[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = 3.0000000000000000e+00 * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + fp94;
LIBINT2_REALTYPE fp91;
fp91 = fp93 + fp92;
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2z[vi] * fp89;
LIBINT2_REALTYPE fp95;
fp95 = inteval->PA_y[vi] * src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp95 + fp88;
target[((hsi*28+12)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + fp85;
LIBINT2_REALTYPE fp83;
fp83 = fp84 + src4[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp86;
fp86 = inteval->PA_z[vi] * src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp86 + fp82;
target[((hsi*28+13)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp169;
fp169 = -5.0000000000000000e-01 * src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = 5.0000000000000000e-01 * src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = 5.0000000000000000e+00 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = 0.0000000000000000e+00 + fp173;
LIBINT2_REALTYPE fp170;
fp170 = fp172 + fp171;
LIBINT2_REALTYPE fp168;
fp168 = fp170 - fp169;
LIBINT2_REALTYPE fp167;
fp167 = inteval->oo2z[vi] * fp168;
LIBINT2_REALTYPE fp174;
fp174 = inteval->PA_x[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp174 + fp167;
target[((hsi*28+0)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp75;
fp75 = 3.0000000000000000e+00 * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + fp75;
LIBINT2_REALTYPE fp73;
fp73 = fp74 + src4[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp76;
fp76 = inteval->PA_z[vi] * src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp76 + fp72;
target[((hsi*28+15)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp69;
fp69 = 3.0000000000000000e+00 * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + fp69;
LIBINT2_REALTYPE fp67;
fp67 = fp68 + src4[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->oo2z[vi] * fp67;
LIBINT2_REALTYPE fp70;
fp70 = inteval->PA_z[vi] * src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp70 + fp66;
target[((hsi*28+16)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp63;
fp63 = 3.0000000000000000e+00 * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + fp63;
LIBINT2_REALTYPE fp61;
fp61 = fp62 + src4[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->oo2z[vi] * fp61;
LIBINT2_REALTYPE fp64;
fp64 = inteval->PA_z[vi] * src0[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp64 + fp60;
target[((hsi*28+17)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp53;
fp53 = 5.0000000000000000e-01 * src3[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = 5.0000000000000000e-01 * src3[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 2.0000000000000000e+00 * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + fp57;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp52;
fp52 = fp54 + fp53;
LIBINT2_REALTYPE fp51;
fp51 = inteval->oo2z[vi] * fp52;
LIBINT2_REALTYPE fp58;
fp58 = inteval->PA_y[vi] * src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp58 + fp51;
target[((hsi*28+18)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp48;
fp48 = 2.0000000000000000e+00 * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + fp48;
LIBINT2_REALTYPE fp46;
fp46 = fp47 + src4[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->oo2z[vi] * fp46;
LIBINT2_REALTYPE fp49;
fp49 = inteval->PA_z[vi] * src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp49 + fp45;
target[((hsi*28+19)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src4[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp43;
fp43 = inteval->PA_z[vi] * src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp43 + fp41;
target[((hsi*28+20)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp38;
fp38 = 1.0000000000000000e+00 * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + fp38;
LIBINT2_REALTYPE fp36;
fp36 = fp37 + src4[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->oo2z[vi] * fp36;
LIBINT2_REALTYPE fp39;
fp39 = inteval->PA_z[vi] * src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp39 + fp35;
target[((hsi*28+21)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp32;
fp32 = 2.0000000000000000e+00 * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + fp32;
LIBINT2_REALTYPE fp30;
fp30 = fp31 + src4[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->PA_z[vi] * src0[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp33 + fp29;
target[((hsi*28+22)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src4[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_z[vi] * src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
target[((hsi*28+23)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp22;
fp22 = 1.0000000000000000e+00 * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src4[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PA_z[vi] * src0[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*28+24)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp16;
fp16 = 2.0000000000000000e+00 * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src4[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PA_z[vi] * src0[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*28+25)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = 2.0000000000000000e+00 * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src4[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_z[vi] * src0[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*28+26)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp4;
fp4 = 1.0000000000000000e+00 * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src4[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*28+27)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src4[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->oo2z[vi] * fp79;
LIBINT2_REALTYPE fp80;
fp80 = inteval->PA_z[vi] * src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp80 + fp78;
target[((hsi*28+14)*1+lsi)*1] = fp77;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 175 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
