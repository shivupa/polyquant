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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_2_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp85;
fp85 = 4.0000000000000000e+00 * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + fp85;
LIBINT2_REALTYPE fp83;
fp83 = inteval->oo2z[vi] * fp84;
LIBINT2_REALTYPE fp86;
fp86 = inteval->PB_z[vi] * src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp86 + fp83;
target[((hsi*36+17)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp90;
fp90 = 4.0000000000000000e+00 * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + fp90;
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2z[vi] * fp89;
LIBINT2_REALTYPE fp91;
fp91 = inteval->PB_z[vi] * src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp91 + fp88;
target[((hsi*36+16)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp95;
fp95 = 4.0000000000000000e+00 * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + fp95;
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2z[vi] * fp94;
LIBINT2_REALTYPE fp96;
fp96 = inteval->PB_z[vi] * src0[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp96 + fp93;
target[((hsi*36+15)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PB_z[vi] * src0[((hsi*28+5)*1+lsi)*1];
target[((hsi*36+14)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + fp101;
LIBINT2_REALTYPE fp99;
fp99 = inteval->oo2z[vi] * fp100;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PB_z[vi] * src0[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp102 + fp99;
target[((hsi*36+13)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp106;
fp106 = -5.0000000000000000e-01 * src3[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 4.0000000000000000e+00 * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + fp108;
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2z[vi] * fp105;
LIBINT2_REALTYPE fp109;
fp109 = inteval->PB_y[vi] * src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp109 + fp104;
target[((hsi*36+12)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp110;
fp110 = inteval->PB_z[vi] * src0[((hsi*28+3)*1+lsi)*1];
target[((hsi*36+11)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp114;
fp114 = 1.0000000000000000e+00 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + fp114;
LIBINT2_REALTYPE fp112;
fp112 = inteval->oo2z[vi] * fp113;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PB_z[vi] * src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp115 + fp112;
target[((hsi*36+10)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp162;
fp162 = 5.0000000000000000e-01 * src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = 6.0000000000000000e+00 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + fp164;
LIBINT2_REALTYPE fp161;
fp161 = fp163 - fp162;
LIBINT2_REALTYPE fp160;
fp160 = inteval->oo2z[vi] * fp161;
LIBINT2_REALTYPE fp165;
fp165 = inteval->PB_x[vi] * src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp165 + fp160;
target[((hsi*36+0)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp126;
fp126 = 5.0000000000000000e+00 * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + fp126;
LIBINT2_REALTYPE fp124;
fp124 = inteval->oo2z[vi] * fp125;
LIBINT2_REALTYPE fp127;
fp127 = inteval->PB_z[vi] * src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp127 + fp124;
target[((hsi*36+8)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp131;
fp131 = 5.0000000000000000e+00 * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + fp131;
LIBINT2_REALTYPE fp129;
fp129 = inteval->oo2z[vi] * fp130;
LIBINT2_REALTYPE fp132;
fp132 = inteval->PB_z[vi] * src0[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp132 + fp129;
target[((hsi*36+7)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp133;
fp133 = inteval->PB_z[vi] * src0[((hsi*28+1)*1+lsi)*1];
target[((hsi*36+6)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp137;
fp137 = -5.0000000000000000e-01 * src3[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = 5.0000000000000000e+00 * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + fp139;
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
LIBINT2_REALTYPE fp135;
fp135 = inteval->oo2z[vi] * fp136;
LIBINT2_REALTYPE fp140;
fp140 = inteval->PB_y[vi] * src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp140 + fp135;
target[((hsi*36+5)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp141;
fp141 = inteval->PB_z[vi] * src0[((hsi*28+0)*1+lsi)*1];
target[((hsi*36+4)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp145;
fp145 = -5.0000000000000000e-01 * src3[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + fp145;
LIBINT2_REALTYPE fp143;
fp143 = inteval->oo2z[vi] * fp144;
LIBINT2_REALTYPE fp146;
fp146 = inteval->PB_y[vi] * src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp146 + fp143;
target[((hsi*36+3)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp150;
fp150 = 6.0000000000000000e+00 * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + fp150;
LIBINT2_REALTYPE fp148;
fp148 = inteval->oo2z[vi] * fp149;
LIBINT2_REALTYPE fp151;
fp151 = inteval->PB_z[vi] * src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp151 + fp148;
target[((hsi*36+2)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp155;
fp155 = -5.0000000000000000e-01 * src3[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = 6.0000000000000000e+00 * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + fp157;
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
LIBINT2_REALTYPE fp153;
fp153 = inteval->oo2z[vi] * fp154;
LIBINT2_REALTYPE fp158;
fp158 = inteval->PB_y[vi] * src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp158 + fp153;
target[((hsi*36+1)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp119;
fp119 = -5.0000000000000000e-01 * src3[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = 1.0000000000000000e+00 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + fp121;
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp122;
fp122 = inteval->PB_y[vi] * src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp122 + fp117;
target[((hsi*36+9)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp3;
fp3 = 2.0000000000000000e+00 * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + fp3;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
fp4 = inteval->PB_z[vi] * src0[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
fp8 = 1.0000000000000000e+00 * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + fp8;
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
fp9 = inteval->PB_z[vi] * src0[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp9 + fp6;
target[((hsi*36+34)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
fp13 = 2.0000000000000000e+00 * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + fp13;
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
fp14 = inteval->PB_z[vi] * src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp14 + fp11;
target[((hsi*36+33)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
fp18 = 1.0000000000000000e+00 * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + fp18;
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PB_z[vi] * src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp19 + fp16;
target[((hsi*36+32)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp23;
fp23 = 2.0000000000000000e+00 * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + fp23;
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
fp24 = inteval->PB_z[vi] * src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp24 + fp21;
target[((hsi*36+31)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp25;
fp25 = inteval->PB_z[vi] * src0[((hsi*28+18)*1+lsi)*1];
target[((hsi*36+30)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp29;
fp29 = 3.0000000000000000e+00 * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + fp29;
LIBINT2_REALTYPE fp27;
fp27 = inteval->oo2z[vi] * fp28;
LIBINT2_REALTYPE fp30;
fp30 = inteval->PB_z[vi] * src0[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp30 + fp27;
target[((hsi*36+29)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp34;
fp34 = 3.0000000000000000e+00 * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + fp34;
LIBINT2_REALTYPE fp32;
fp32 = inteval->oo2z[vi] * fp33;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PB_z[vi] * src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp35 + fp32;
target[((hsi*36+28)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp78;
fp78 = -5.0000000000000000e-01 * src3[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 2.0000000000000000e+00 * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + fp80;
LIBINT2_REALTYPE fp77;
fp77 = fp79 + fp78;
LIBINT2_REALTYPE fp76;
fp76 = inteval->oo2z[vi] * fp77;
LIBINT2_REALTYPE fp81;
fp81 = inteval->PB_y[vi] * src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp81 + fp76;
target[((hsi*36+18)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp44;
fp44 = 3.0000000000000000e+00 * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + fp44;
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2z[vi] * fp43;
LIBINT2_REALTYPE fp45;
fp45 = inteval->PB_z[vi] * src0[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp45 + fp42;
target[((hsi*36+26)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp49;
fp49 = 1.0000000000000000e+00 * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + fp49;
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp48;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PB_z[vi] * src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp50 + fp47;
target[((hsi*36+25)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp51;
fp51 = inteval->PB_z[vi] * src0[((hsi*28+12)*1+lsi)*1];
target[((hsi*36+24)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp55;
fp55 = 2.0000000000000000e+00 * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + fp55;
LIBINT2_REALTYPE fp53;
fp53 = inteval->oo2z[vi] * fp54;
LIBINT2_REALTYPE fp56;
fp56 = inteval->PB_z[vi] * src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp56 + fp53;
target[((hsi*36+23)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp60;
fp60 = -5.0000000000000000e-01 * src3[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 3.0000000000000000e+00 * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + fp62;
LIBINT2_REALTYPE fp59;
fp59 = fp61 + fp60;
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2z[vi] * fp59;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PB_y[vi] * src0[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp63 + fp58;
target[((hsi*36+22)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp67;
fp67 = 1.0000000000000000e+00 * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + fp67;
LIBINT2_REALTYPE fp65;
fp65 = inteval->oo2z[vi] * fp66;
LIBINT2_REALTYPE fp68;
fp68 = inteval->PB_z[vi] * src0[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp68 + fp65;
target[((hsi*36+21)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp69;
fp69 = inteval->PB_z[vi] * src0[((hsi*28+9)*1+lsi)*1];
target[((hsi*36+20)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp73;
fp73 = 2.0000000000000000e+00 * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + fp73;
LIBINT2_REALTYPE fp71;
fp71 = inteval->oo2z[vi] * fp72;
LIBINT2_REALTYPE fp74;
fp74 = inteval->PB_z[vi] * src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp74 + fp71;
target[((hsi*36+19)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp39;
fp39 = 3.0000000000000000e+00 * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + fp39;
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PB_z[vi] * src0[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp40 + fp37;
target[((hsi*36+27)*1+lsi)*1] = fp36;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 166 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
