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
void OSVRRSMultipole_aB_i__0___SphericalMultipole_sB_3_c_3_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp117;
fp117 = 5.0000000000000000e-01 * src3[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*15+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp116;
fp116 = fp118 + fp117;
LIBINT2_REALTYPE fp115;
fp115 = inteval->oo2z[vi] * fp116;
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*21+1)*1+lsi)*1], fp115);
target[((hsi*28+1)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*15+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp110;
fp110 = inteval->oo2z[vi] * fp111;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+2)*1+lsi)*1], fp110);
target[((hsi*28+2)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(5.0000000000000000e-01, src3[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp105;
fp105 = inteval->oo2z[vi] * fp106;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*21+0)*1+lsi)*1], fp105);
target[((hsi*28+3)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PA_z[vi] * src0[((hsi*21+0)*1+lsi)*1];
target[((hsi*28+4)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp99;
fp99 = 5.0000000000000000e-01 * src3[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*15+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp98;
fp98 = fp100 + fp99;
LIBINT2_REALTYPE fp97;
fp97 = inteval->oo2z[vi] * fp98;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*21+5)*1+lsi)*1], fp97);
target[((hsi*28+5)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp95;
fp95 = inteval->PA_z[vi] * src0[((hsi*21+1)*1+lsi)*1];
target[((hsi*28+6)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*15+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp91;
fp91 = inteval->oo2z[vi] * fp92;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+7)*1+lsi)*1], fp91);
target[((hsi*28+7)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*15+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp86;
fp86 = inteval->oo2z[vi] * fp87;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+8)*1+lsi)*1], fp86);
target[((hsi*28+8)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp81;
fp81 = 5.0000000000000000e-01 * src3[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*21+3)*1+lsi)*1], fp79);
target[((hsi*28+9)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+4)*1+lsi)*1], fp74);
target[((hsi*28+10)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PA_z[vi] * src0[((hsi*21+3)*1+lsi)*1];
target[((hsi*28+11)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp68;
fp68 = 5.0000000000000000e-01 * src3[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*15+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
LIBINT2_REALTYPE fp66;
fp66 = inteval->oo2z[vi] * fp67;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*21+12)*1+lsi)*1], fp66);
target[((hsi*28+12)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+6)*1+lsi)*1], fp61);
target[((hsi*28+13)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp124;
fp124 = 5.0000000000000000e-01 * src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*15+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp123;
fp123 = fp125 - fp124;
LIBINT2_REALTYPE fp122;
fp122 = inteval->oo2z[vi] * fp123;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*21+0)*1+lsi)*1], fp122);
target[((hsi*28+0)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*15+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp55;
fp55 = inteval->oo2z[vi] * fp56;
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+15)*1+lsi)*1], fp55);
target[((hsi*28+15)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*15+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp50;
fp50 = inteval->oo2z[vi] * fp51;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+16)*1+lsi)*1], fp50);
target[((hsi*28+16)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*15+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp45;
fp45 = inteval->oo2z[vi] * fp46;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+17)*1+lsi)*1], fp45);
target[((hsi*28+17)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp40;
fp40 = 5.0000000000000000e-01 * src3[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp39;
fp39 = fp41 + fp40;
LIBINT2_REALTYPE fp38;
fp38 = inteval->oo2z[vi] * fp39;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*21+9)*1+lsi)*1], fp38);
target[((hsi*28+18)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp33;
fp33 = inteval->oo2z[vi] * fp34;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+10)*1+lsi)*1], fp33);
target[((hsi*28+19)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp31;
fp31 = inteval->PA_z[vi] * src0[((hsi*21+9)*1+lsi)*1];
target[((hsi*28+20)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp27;
fp27 = inteval->oo2z[vi] * fp28;
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+11)*1+lsi)*1], fp27);
target[((hsi*28+21)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp22;
fp22 = inteval->oo2z[vi] * fp23;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+13)*1+lsi)*1], fp22);
target[((hsi*28+22)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp20;
fp20 = inteval->PA_z[vi] * src0[((hsi*21+12)*1+lsi)*1];
target[((hsi*28+23)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+14)*1+lsi)*1], fp16);
target[((hsi*28+24)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+19)*1+lsi)*1], fp11);
target[((hsi*28+25)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*15+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+20)*1+lsi)*1], fp6);
target[((hsi*28+26)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*15+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*21+18)*1+lsi)*1], fp1);
target[((hsi*28+27)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_z[vi] * src0[((hsi*21+5)*1+lsi)*1];
target[((hsi*28+14)*1+lsi)*1] = fp59;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 128 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
