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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__i__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*15+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp136;
fp136 = inteval->oo2z[vi] * fp137;
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*21+1)*1+lsi)*1], fp136);
target[((hsi*28+1)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*15+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp131;
fp131 = fp132 + src2[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->oo2z[vi] * fp131;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+2)*1+lsi)*1], fp130);
target[((hsi*28+2)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp128;
fp128 = inteval->PB_y[vi] * src0[((hsi*21+0)*1+lsi)*1];
target[((hsi*28+3)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->oo2z[vi] * fp126;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+0)*1+lsi)*1], fp125);
target[((hsi*28+4)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*15+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp120;
fp120 = inteval->oo2z[vi] * fp121;
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*21+5)*1+lsi)*1], fp120);
target[((hsi*28+5)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src2[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->oo2z[vi] * fp117;
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+1)*1+lsi)*1], fp116);
target[((hsi*28+6)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*15+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp111;
fp111 = fp112 + src2[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->oo2z[vi] * fp111;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+7)*1+lsi)*1], fp110);
target[((hsi*28+7)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*15+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp105;
fp105 = fp106 + src2[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2z[vi] * fp105;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+8)*1+lsi)*1], fp104);
target[((hsi*28+8)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp99;
fp99 = inteval->oo2z[vi] * fp100;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*21+3)*1+lsi)*1], fp99);
target[((hsi*28+9)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp94;
fp94 = fp95 + src2[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2z[vi] * fp94;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+4)*1+lsi)*1], fp93);
target[((hsi*28+10)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+3)*1+lsi)*1], fp89);
target[((hsi*28+11)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*15+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*21+12)*1+lsi)*1], fp84);
target[((hsi*28+12)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp79;
fp79 = fp80 + src2[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->oo2z[vi] * fp79;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+6)*1+lsi)*1], fp78);
target[((hsi*28+13)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*15+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp141;
fp141 = inteval->oo2z[vi] * fp142;
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*21+0)*1+lsi)*1], fp141);
target[((hsi*28+0)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*15+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp69;
fp69 = fp70 + src2[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->oo2z[vi] * fp69;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+15)*1+lsi)*1], fp68);
target[((hsi*28+15)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*15+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp63;
fp63 = fp64 + src2[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+16)*1+lsi)*1], fp62);
target[((hsi*28+16)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*15+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp57;
fp57 = fp58 + src2[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+17)*1+lsi)*1], fp56);
target[((hsi*28+17)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp51;
fp51 = inteval->oo2z[vi] * fp52;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*21+9)*1+lsi)*1], fp51);
target[((hsi*28+18)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp46;
fp46 = fp47 + src2[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->oo2z[vi] * fp46;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+10)*1+lsi)*1], fp45);
target[((hsi*28+19)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+9)*1+lsi)*1], fp41);
target[((hsi*28+20)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp36;
fp36 = fp37 + src2[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->oo2z[vi] * fp36;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+11)*1+lsi)*1], fp35);
target[((hsi*28+21)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp30;
fp30 = fp31 + src2[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp30;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+13)*1+lsi)*1], fp29);
target[((hsi*28+22)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+12)*1+lsi)*1], fp25);
target[((hsi*28+23)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src2[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+14)*1+lsi)*1], fp19);
target[((hsi*28+24)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src2[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+19)*1+lsi)*1], fp13);
target[((hsi*28+25)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src2[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+20)*1+lsi)*1], fp7);
target[((hsi*28+26)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src2[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+18)*1+lsi)*1], fp1);
target[((hsi*28+27)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src2[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*21+5)*1+lsi)*1], fp74);
target[((hsi*28+14)*1+lsi)*1] = fp73;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 145 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
