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
void CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_2_Sb__l__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_z[vi], fp26, fp16);
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_z[vi], fp40, fp26);
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_z[vi], fp27, fp17);
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_x[vi], fp63, fp69);
LIBINT2_REALTYPE fp133;
fp133 = fp64 * fp55;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp19;
target[((hsi*45+21)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_z[vi], fp41, fp40);
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_z[vi], fp43, fp27);
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp64 * fp53;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp29;
target[((hsi*45+20)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp6);
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp7);
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp64 * fp57;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp9;
target[((hsi*45+19)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_z[vi], fp42, fp41);
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_z[vi], fp45, fp43);
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src1[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp64 * fp51;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp47;
target[((hsi*45+18)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_z[vi], fp21, fp33);
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp21);
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_z[vi], fp12, fp22);
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->BO_x[vi], fp78, fp72);
LIBINT2_REALTYPE fp141;
fp141 = fp73 * fp55;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp14;
target[((hsi*45+17)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_x[vi], fp79, fp78);
LIBINT2_REALTYPE fp143;
fp143 = fp80 * fp53;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp14;
target[((hsi*45+16)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->BO_x[vi], fp72, fp66);
LIBINT2_REALTYPE fp145;
fp145 = fp67 * fp57;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp14;
target[((hsi*45+15)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp73 * fp52;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp29;
target[((hsi*45+14)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp80 * fp52;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp19;
target[((hsi*45+13)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp67 * fp52;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp47;
target[((hsi*45+12)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_x[vi] * fp83;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src0[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp82 + fp85;
LIBINT2_REALTYPE fp175;
fp175 = fp84 * fp57;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp47;
target[((hsi*45+0)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_x[vi], fp69, fp75);
LIBINT2_REALTYPE fp155;
fp155 = fp70 * fp57;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp19;
target[((hsi*45+10)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp70 * fp53;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp47;
target[((hsi*45+9)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src2[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_z[vi], fp33, fp32);
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp22, fp36);
LIBINT2_REALTYPE fp159;
fp159 = fp80 * fp55;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp24;
target[((hsi*45+8)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp73 * fp57;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp24;
target[((hsi*45+7)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src1[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp80 * fp54;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp29;
target[((hsi*45+6)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp73 * fp54;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp47;
target[((hsi*45+5)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BO_x[vi], fp75, fp83);
LIBINT2_REALTYPE fp167;
fp167 = fp76 * fp57;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp29;
target[((hsi*45+4)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = fp76 * fp55;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp47;
target[((hsi*45+3)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_z[vi] * fp32;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp31 + fp35;
LIBINT2_REALTYPE fp38;
fp38 = fp34 + fp39;
LIBINT2_REALTYPE fp171;
fp171 = fp80 * fp57;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp38;
target[((hsi*45+2)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp80 * fp56;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp47;
target[((hsi*45+1)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp153;
fp153 = fp70 * fp55;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp29;
target[((hsi*45+11)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp87;
fp87 = fp67 * fp51;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp9;
target[((hsi*45+44)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_x[vi], fp66, fp60);
LIBINT2_REALTYPE fp89;
fp89 = fp61 * fp53;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp9;
target[((hsi*45+43)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp61 * fp51;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp19;
target[((hsi*45+42)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp11);
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp2);
LIBINT2_REALTYPE fp93;
fp93 = fp67 * fp53;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp0;
target[((hsi*45+41)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp73 * fp51;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp0;
target[((hsi*45+40)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = fp61 * fp55;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp0;
target[((hsi*45+39)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp67 * fp49;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp19;
target[((hsi*45+38)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp73 * fp49;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp9;
target[((hsi*45+37)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp103;
fp103 = fp61 * fp49;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp29;
target[((hsi*45+36)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = fp80 * fp49;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp0;
target[((hsi*45+35)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src1[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp61 * fp50;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp47;
target[((hsi*45+22)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->BO_x[vi], fp60, fp63);
LIBINT2_REALTYPE fp109;
fp109 = fp58 * fp55;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp9;
target[((hsi*45+33)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
fp111 = fp58 * fp51;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp29;
target[((hsi*45+32)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp58 * fp57;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp0;
target[((hsi*45+31)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = fp58 * fp49;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp47;
target[((hsi*45+30)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp2, fp12);
LIBINT2_REALTYPE fp117;
fp117 = fp73 * fp53;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp4;
target[((hsi*45+29)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp67 * fp55;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp4;
target[((hsi*45+28)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp80 * fp51;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp4;
target[((hsi*45+27)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp61 * fp57;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp4;
target[((hsi*45+26)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp73 * fp50;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp19;
target[((hsi*45+25)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp67 * fp50;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp29;
target[((hsi*45+24)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp80 * fp50;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp9;
target[((hsi*45+23)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp107;
fp107 = fp58 * fp53;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp19;
target[((hsi*45+34)*1+lsi)*1] = fp106;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 176 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif