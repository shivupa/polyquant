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
void OSVRRSMultipole_aB_k__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+17)*1+lsi)*1], fp79);
target[((hsi*36+17)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+16)*1+lsi)*1], fp84);
target[((hsi*36+16)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+15)*1+lsi)*1], fp89);
target[((hsi*36+15)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp93;
fp93 = inteval->PA_z[vi] * src0[((hsi*28+5)*1+lsi)*1];
target[((hsi*36+14)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp95;
fp95 = inteval->oo2z[vi] * fp96;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+6)*1+lsi)*1], fp95);
target[((hsi*36+13)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp100;
fp100 = inteval->oo2z[vi] * fp101;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*28+12)*1+lsi)*1], fp100);
target[((hsi*36+12)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp104;
fp104 = inteval->PA_z[vi] * src0[((hsi*28+3)*1+lsi)*1];
target[((hsi*36+11)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp106;
fp106 = inteval->oo2z[vi] * fp107;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+4)*1+lsi)*1], fp106);
target[((hsi*36+10)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp146;
fp146 = 5.0000000000000000e-01 * src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp145;
fp145 = fp147 - fp146;
LIBINT2_REALTYPE fp144;
fp144 = inteval->oo2z[vi] * fp145;
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*28+0)*1+lsi)*1], fp144);
target[((hsi*36+0)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp116;
fp116 = inteval->oo2z[vi] * fp117;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+8)*1+lsi)*1], fp116);
target[((hsi*36+8)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp121;
fp121 = inteval->oo2z[vi] * fp122;
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+7)*1+lsi)*1], fp121);
target[((hsi*36+7)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp125;
fp125 = inteval->PA_z[vi] * src0[((hsi*28+1)*1+lsi)*1];
target[((hsi*36+6)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp127;
fp127 = inteval->oo2z[vi] * fp128;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*28+5)*1+lsi)*1], fp127);
target[((hsi*36+5)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp131;
fp131 = inteval->PA_z[vi] * src0[((hsi*28+0)*1+lsi)*1];
target[((hsi*36+4)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp132;
fp132 = inteval->PA_y[vi] * src0[((hsi*28+0)*1+lsi)*1];
target[((hsi*36+3)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp134;
fp134 = inteval->oo2z[vi] * fp135;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+2)*1+lsi)*1], fp134);
target[((hsi*36+2)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp139;
fp139 = inteval->oo2z[vi] * fp140;
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*28+1)*1+lsi)*1], fp139);
target[((hsi*36+1)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp111;
fp111 = inteval->oo2z[vi] * fp112;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*28+3)*1+lsi)*1], fp111);
target[((hsi*36+9)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+27)*1+lsi)*1], fp1);
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+23)*1+lsi)*1], fp6);
target[((hsi*36+34)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+24)*1+lsi)*1], fp11);
target[((hsi*36+33)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+20)*1+lsi)*1], fp16);
target[((hsi*36+32)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+21)*1+lsi)*1], fp21);
target[((hsi*36+31)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_z[vi] * src0[((hsi*28+18)*1+lsi)*1];
target[((hsi*36+30)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp27;
fp27 = inteval->oo2z[vi] * fp28;
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+26)*1+lsi)*1], fp27);
target[((hsi*36+29)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp32;
fp32 = inteval->oo2z[vi] * fp33;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+25)*1+lsi)*1], fp32);
target[((hsi*36+28)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*28+9)*1+lsi)*1], fp74);
target[((hsi*36+18)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2z[vi] * fp43;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+19)*1+lsi)*1], fp42);
target[((hsi*36+26)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp48;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+14)*1+lsi)*1], fp47);
target[((hsi*36+25)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp51;
fp51 = inteval->PA_z[vi] * src0[((hsi*28+12)*1+lsi)*1];
target[((hsi*36+24)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp53;
fp53 = inteval->oo2z[vi] * fp54;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+13)*1+lsi)*1], fp53);
target[((hsi*36+23)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2z[vi] * fp59;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*28+18)*1+lsi)*1], fp58);
target[((hsi*36+22)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp63;
fp63 = inteval->oo2z[vi] * fp64;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+11)*1+lsi)*1], fp63);
target[((hsi*36+21)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PA_z[vi] * src0[((hsi*28+9)*1+lsi)*1];
target[((hsi*36+20)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+10)*1+lsi)*1], fp69);
target[((hsi*36+19)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*28+22)*1+lsi)*1], fp37);
target[((hsi*36+27)*1+lsi)*1] = fp36;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 150 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
