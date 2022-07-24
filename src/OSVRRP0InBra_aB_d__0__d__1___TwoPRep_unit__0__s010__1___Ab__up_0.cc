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
void OSVRRP0InBra_aB_d__0__d__1___TwoPRep_unit__0__s010__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp107;
fp107 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp45;
fp45 = fp107 * src3[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp96;
fp96 = inteval->roz[vi] * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = src1[((hsi*6+5)*1+lsi)*1] - fp96;
LIBINT2_REALTYPE fp94;
fp94 = fp130 * fp95;
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_z[vi] * src0[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp47 + fp94;
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
target[((hsi*36+17)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp49;
fp49 = fp107 * src3[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->roz[vi] * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = src1[((hsi*6+4)*1+lsi)*1] - fp103;
LIBINT2_REALTYPE fp101;
fp101 = fp130 * fp102;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_z[vi] * src0[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp51 + fp101;
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
target[((hsi*36+16)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp111;
fp111 = inteval->roz[vi] * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src1[((hsi*6+3)*1+lsi)*1] - fp111;
LIBINT2_REALTYPE fp109;
fp109 = fp130 * fp110;
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_z[vi] * src0[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp53 + fp109;
target[((hsi*36+15)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp125;
fp125 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp125 * src3[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->roz[vi] * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = src1[((hsi*6+2)*1+lsi)*1] - fp116;
LIBINT2_REALTYPE fp114;
fp114 = fp130 * fp115;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_z[vi] * src0[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp57 + fp114;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
target[((hsi*36+14)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp121;
fp121 = inteval->roz[vi] * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = src1[((hsi*6+1)*1+lsi)*1] - fp121;
LIBINT2_REALTYPE fp119;
fp119 = fp130 * fp120;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_z[vi] * src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp59 + fp119;
target[((hsi*36+13)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp129;
fp129 = inteval->roz[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = src1[((hsi*6+0)*1+lsi)*1] - fp129;
LIBINT2_REALTYPE fp127;
fp127 = fp130 * fp128;
LIBINT2_REALTYPE fp61;
fp61 = inteval->WP_z[vi] * src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp61 + fp127;
target[((hsi*36+12)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp90;
fp90 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp90 * src4[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp107 * src3[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_y[vi] * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp67 + fp94;
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
target[((hsi*36+11)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp69;
fp69 = fp90 * src4[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_y[vi] * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp71 + fp101;
LIBINT2_REALTYPE fp68;
fp68 = fp70 + fp69;
target[((hsi*36+10)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * src3[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->WP_x[vi] * src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp131 + fp127;
LIBINT2_REALTYPE fp123;
fp123 = fp126 + fp124;
target[((hsi*36+0)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp79;
fp79 = fp90 * src4[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_y[vi] * src0[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp81 + fp114;
LIBINT2_REALTYPE fp78;
fp78 = fp80 + fp79;
target[((hsi*36+8)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp83;
fp83 = fp90 * src4[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp125 * src3[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_y[vi] * src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp87 + fp119;
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
target[((hsi*36+7)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * src4[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_y[vi] * src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp92 + fp127;
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
target[((hsi*36+6)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_x[vi] * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp97 + fp94;
target[((hsi*36+5)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp99;
fp99 = fp107 * src3[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_x[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp104 + fp101;
LIBINT2_REALTYPE fp98;
fp98 = fp100 + fp99;
target[((hsi*36+4)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * src3[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->WP_x[vi] * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp112 + fp109;
LIBINT2_REALTYPE fp105;
fp105 = fp108 + fp106;
target[((hsi*36+3)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp117;
fp117 = inteval->WP_x[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp117 + fp114;
target[((hsi*36+2)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp122;
fp122 = inteval->WP_x[vi] * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp122 + fp119;
target[((hsi*36+1)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp73;
fp73 = fp90 * src4[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp107 * src3[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_y[vi] * src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp77 + fp109;
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
target[((hsi*36+9)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp1;
fp1 = fp107 * src3[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->WP_z[vi] * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp4;
fp4 = inteval->WP_z[vi] * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp4 + fp75;
target[((hsi*36+34)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp5;
fp5 = inteval->WP_z[vi] * src0[((hsi*18+9)*1+lsi)*1];
target[((hsi*36+33)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp7;
fp7 = fp125 * src3[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->WP_z[vi] * src0[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp8 + fp7;
target[((hsi*36+32)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src0[((hsi*18+7)*1+lsi)*1];
target[((hsi*36+31)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp10;
fp10 = inteval->WP_z[vi] * src0[((hsi*18+6)*1+lsi)*1];
target[((hsi*36+30)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp12;
fp12 = inteval->WP_z[vi] * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp12 + fp106;
target[((hsi*36+29)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp31;
fp31 = fp107 * src3[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_z[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp14 + fp31;
target[((hsi*36+28)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp42;
fp42 = fp90 * src4[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_y[vi] * src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp43 + fp42;
target[((hsi*36+18)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp17;
fp17 = fp125 * src3[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->WP_z[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
target[((hsi*36+26)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->WP_z[vi] * src0[((hsi*18+1)*1+lsi)*1];
target[((hsi*36+25)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_z[vi] * src0[((hsi*18+0)*1+lsi)*1];
target[((hsi*36+24)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp22;
fp22 = fp90 * src4[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_y[vi] * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp24 + fp99;
LIBINT2_REALTYPE fp21;
fp21 = fp23 + fp22;
target[((hsi*36+23)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp26;
fp26 = fp90 * src4[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_y[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp27 + fp26;
target[((hsi*36+22)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp29;
fp29 = fp90 * src4[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->WP_y[vi] * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp28;
fp28 = fp30 + fp29;
target[((hsi*36+21)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp34;
fp34 = fp90 * src4[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_y[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
target[((hsi*36+20)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp37;
fp37 = fp90 * src4[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp125 * src3[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_y[vi] * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp40 + fp39;
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
target[((hsi*36+19)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp15;
fp15 = inteval->WP_z[vi] * src0[((hsi*18+3)*1+lsi)*1];
target[((hsi*36+27)*1+lsi)*1] = fp15;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 132 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
