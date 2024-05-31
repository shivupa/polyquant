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
void OSVRRP1InBra_aB_s__0__k__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+17)*1+lsi)*1], src1[((hsi*21+17)*1+lsi)*1]);
LIBINT2_REALTYPE fp97;
fp97 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp97 * fp95;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+17)*1+lsi)*1], fp94);
target[((hsi*36+17)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+16)*1+lsi)*1], src1[((hsi*21+16)*1+lsi)*1]);
LIBINT2_REALTYPE fp103;
fp103 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp103 * fp101;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+16)*1+lsi)*1], fp100);
target[((hsi*36+16)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+15)*1+lsi)*1], src1[((hsi*21+15)*1+lsi)*1]);
LIBINT2_REALTYPE fp109;
fp109 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp109 * fp107;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+15)*1+lsi)*1], fp106);
target[((hsi*36+15)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp111;
fp111 = inteval->WQ_z[vi] * src0[((hsi*28+5)*1+lsi)*1];
target[((hsi*36+14)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+1)*1+lsi)*1], src1[((hsi*21+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp116;
fp116 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp116 * fp114;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+6)*1+lsi)*1], fp113);
target[((hsi*36+13)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+12)*1+lsi)*1], src1[((hsi*21+12)*1+lsi)*1]);
LIBINT2_REALTYPE fp122;
fp122 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp119;
fp119 = fp122 * fp120;
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*28+12)*1+lsi)*1], fp119);
target[((hsi*36+12)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp124;
fp124 = inteval->WQ_z[vi] * src0[((hsi*28+3)*1+lsi)*1];
target[((hsi*36+11)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+0)*1+lsi)*1], src1[((hsi*21+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp129;
fp129 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp126;
fp126 = fp129 * fp127;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+4)*1+lsi)*1], fp126);
target[((hsi*36+10)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+0)*1+lsi)*1], src1[((hsi*21+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp174;
fp174 = 6.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp171;
fp171 = fp174 * fp172;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_minus(inteval->WQ_x[vi], src0[((hsi*28+0)*1+lsi)*1], fp171);
target[((hsi*36+0)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+8)*1+lsi)*1], src1[((hsi*21+8)*1+lsi)*1]);
LIBINT2_REALTYPE fp141;
fp141 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp138;
fp138 = fp141 * fp139;
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+8)*1+lsi)*1], fp138);
target[((hsi*36+8)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+7)*1+lsi)*1], src1[((hsi*21+7)*1+lsi)*1]);
LIBINT2_REALTYPE fp147;
fp147 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp144;
fp144 = fp147 * fp145;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+7)*1+lsi)*1], fp144);
target[((hsi*36+7)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp149;
fp149 = inteval->WQ_z[vi] * src0[((hsi*28+1)*1+lsi)*1];
target[((hsi*36+6)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+5)*1+lsi)*1], src1[((hsi*21+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp154;
fp154 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp151;
fp151 = fp154 * fp152;
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*28+5)*1+lsi)*1], fp151);
target[((hsi*36+5)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp156;
fp156 = inteval->WQ_z[vi] * src0[((hsi*28+0)*1+lsi)*1];
target[((hsi*36+4)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp157;
fp157 = inteval->WQ_y[vi] * src0[((hsi*28+0)*1+lsi)*1];
target[((hsi*36+3)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+2)*1+lsi)*1], src1[((hsi*21+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp162;
fp162 = 6.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp159;
fp159 = fp162 * fp160;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+2)*1+lsi)*1], fp159);
target[((hsi*36+2)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+1)*1+lsi)*1], src1[((hsi*21+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp168;
fp168 = 6.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp165;
fp165 = fp168 * fp166;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*28+1)*1+lsi)*1], fp165);
target[((hsi*36+1)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+0)*1+lsi)*1], src1[((hsi*21+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp135;
fp135 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp135 * fp133;
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*28+3)*1+lsi)*1], fp132);
target[((hsi*36+9)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+18)*1+lsi)*1], src1[((hsi*21+18)*1+lsi)*1]);
LIBINT2_REALTYPE fp4;
fp4 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+27)*1+lsi)*1], fp1);
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+12)*1+lsi)*1], src1[((hsi*21+12)*1+lsi)*1]);
LIBINT2_REALTYPE fp10;
fp10 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp10 * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+23)*1+lsi)*1], fp7);
target[((hsi*36+34)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+14)*1+lsi)*1], src1[((hsi*21+14)*1+lsi)*1]);
LIBINT2_REALTYPE fp16;
fp16 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp16 * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+24)*1+lsi)*1], fp13);
target[((hsi*36+33)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+9)*1+lsi)*1], src1[((hsi*21+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp22;
fp22 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp22 * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+20)*1+lsi)*1], fp19);
target[((hsi*36+32)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+11)*1+lsi)*1], src1[((hsi*21+11)*1+lsi)*1]);
LIBINT2_REALTYPE fp28;
fp28 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp28 * fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+21)*1+lsi)*1], fp25);
target[((hsi*36+31)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_z[vi] * src0[((hsi*28+18)*1+lsi)*1];
target[((hsi*36+30)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+20)*1+lsi)*1], src1[((hsi*21+20)*1+lsi)*1]);
LIBINT2_REALTYPE fp35;
fp35 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp35 * fp33;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+26)*1+lsi)*1], fp32);
target[((hsi*36+29)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+19)*1+lsi)*1], src1[((hsi*21+19)*1+lsi)*1]);
LIBINT2_REALTYPE fp41;
fp41 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp38;
fp38 = fp41 * fp39;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+25)*1+lsi)*1], fp38);
target[((hsi*36+28)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+3)*1+lsi)*1], src1[((hsi*21+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp91;
fp91 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp88;
fp88 = fp91 * fp89;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*28+9)*1+lsi)*1], fp88);
target[((hsi*36+18)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+10)*1+lsi)*1], src1[((hsi*21+10)*1+lsi)*1]);
LIBINT2_REALTYPE fp53;
fp53 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp53 * fp51;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+19)*1+lsi)*1], fp50);
target[((hsi*36+26)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+5)*1+lsi)*1], src1[((hsi*21+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp59;
fp59 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp59 * fp57;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+14)*1+lsi)*1], fp56);
target[((hsi*36+25)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp61;
fp61 = inteval->WQ_z[vi] * src0[((hsi*28+12)*1+lsi)*1];
target[((hsi*36+24)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+6)*1+lsi)*1], src1[((hsi*21+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp66;
fp66 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp66 * fp64;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+13)*1+lsi)*1], fp63);
target[((hsi*36+23)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+9)*1+lsi)*1], src1[((hsi*21+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp72;
fp72 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp72 * fp70;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_minus(inteval->WQ_y[vi], src0[((hsi*28+18)*1+lsi)*1], fp69);
target[((hsi*36+22)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+3)*1+lsi)*1], src1[((hsi*21+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp78;
fp78 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp78 * fp76;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+11)*1+lsi)*1], fp75);
target[((hsi*36+21)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WQ_z[vi] * src0[((hsi*28+9)*1+lsi)*1];
target[((hsi*36+20)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+4)*1+lsi)*1], src1[((hsi*21+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp85;
fp85 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp85 * fp83;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+10)*1+lsi)*1], fp82);
target[((hsi*36+19)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_minus(inteval->roe[vi], src2[((hsi*21+13)*1+lsi)*1], src1[((hsi*21+13)*1+lsi)*1]);
LIBINT2_REALTYPE fp47;
fp47 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp47 * fp45;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_minus(inteval->WQ_z[vi], src0[((hsi*28+22)*1+lsi)*1], fp44);
target[((hsi*36+27)*1+lsi)*1] = fp43;
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
