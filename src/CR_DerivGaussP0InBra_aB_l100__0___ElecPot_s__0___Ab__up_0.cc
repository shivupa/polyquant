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
void CR_DerivGaussP0InBra_aB_l100__0___ElecPot_s__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp64;
fp64 = 5.0000000000000000e+00 * src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+21)*1+lsi)*1], fp64);
target[((hsi*45+21)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp67;
fp67 = 5.0000000000000000e+00 * src1[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+20)*1+lsi)*1], fp67);
target[((hsi*45+20)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp70;
fp70 = 5.0000000000000000e+00 * src1[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+19)*1+lsi)*1], fp70);
target[((hsi*45+19)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp73;
fp73 = 5.0000000000000000e+00 * src1[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+18)*1+lsi)*1], fp73);
target[((hsi*45+18)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+00 * src1[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+28)*1+lsi)*1], fp76);
target[((hsi*45+17)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha0_bra[vi] * src0[((hsi*55+29)*1+lsi)*1];
target[((hsi*45+16)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp80;
fp80 = 2.0000000000000000e+00 * src1[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+26)*1+lsi)*1], fp80);
target[((hsi*45+15)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * src1[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+24)*1+lsi)*1], fp83);
target[((hsi*45+14)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = inteval->two_alpha0_bra[vi] * src0[((hsi*55+25)*1+lsi)*1];
target[((hsi*45+13)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp87;
fp87 = 2.0000000000000000e+00 * src1[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+22)*1+lsi)*1], fp87);
target[((hsi*45+12)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp115;
fp115 = 8.0000000000000000e+00 * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+0)*1+lsi)*1], fp115);
target[((hsi*45+0)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp93;
fp93 = 6.0000000000000000e+00 * src1[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+10)*1+lsi)*1], fp93);
target[((hsi*45+10)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp96;
fp96 = 6.0000000000000000e+00 * src1[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+9)*1+lsi)*1], fp96);
target[((hsi*45+9)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp98;
fp98 = inteval->two_alpha0_bra[vi] * src0[((hsi*55+17)*1+lsi)*1];
target[((hsi*45+8)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp100;
fp100 = 1.0000000000000000e+00 * src1[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+15)*1+lsi)*1], fp100);
target[((hsi*45+7)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp102;
fp102 = inteval->two_alpha0_bra[vi] * src0[((hsi*55+14)*1+lsi)*1];
target[((hsi*45+6)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp104;
fp104 = 1.0000000000000000e+00 * src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+12)*1+lsi)*1], fp104);
target[((hsi*45+5)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp107;
fp107 = 7.0000000000000000e+00 * src1[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+4)*1+lsi)*1], fp107);
target[((hsi*45+4)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp110;
fp110 = 7.0000000000000000e+00 * src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+3)*1+lsi)*1], fp110);
target[((hsi*45+3)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp112;
fp112 = inteval->two_alpha0_bra[vi] * src0[((hsi*55+7)*1+lsi)*1];
target[((hsi*45+2)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp113;
fp113 = inteval->two_alpha0_bra[vi] * src0[((hsi*55+5)*1+lsi)*1];
target[((hsi*45+1)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp90;
fp90 = 6.0000000000000000e+00 * src1[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+11)*1+lsi)*1], fp90);
target[((hsi*45+11)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp1;
fp1 = 2.0000000000000000e+00 * src1[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+54)*1+lsi)*1], fp1);
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp4;
fp4 = 3.0000000000000000e+00 * src1[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+48)*1+lsi)*1], fp4);
target[((hsi*45+43)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp7;
fp7 = 3.0000000000000000e+00 * src1[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+47)*1+lsi)*1], fp7);
target[((hsi*45+42)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp10;
fp10 = 2.0000000000000000e+00 * src1[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+52)*1+lsi)*1], fp10);
target[((hsi*45+41)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp13;
fp13 = 1.0000000000000000e+00 * src1[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+53)*1+lsi)*1], fp13);
target[((hsi*45+40)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp16;
fp16 = 3.0000000000000000e+00 * src1[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+46)*1+lsi)*1], fp16);
target[((hsi*45+39)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp19;
fp19 = 2.0000000000000000e+00 * src1[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+50)*1+lsi)*1], fp19);
target[((hsi*45+38)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp22;
fp22 = 1.0000000000000000e+00 * src1[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+51)*1+lsi)*1], fp22);
target[((hsi*45+37)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp25;
fp25 = 3.0000000000000000e+00 * src1[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+45)*1+lsi)*1], fp25);
target[((hsi*45+36)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
fp27 = inteval->two_alpha0_bra[vi] * src0[((hsi*55+49)*1+lsi)*1];
target[((hsi*45+35)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp61;
fp61 = 3.0000000000000000e+00 * src1[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+35)*1+lsi)*1], fp61);
target[((hsi*45+22)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp32;
fp32 = 4.0000000000000000e+00 * src1[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+33)*1+lsi)*1], fp32);
target[((hsi*45+33)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp35;
fp35 = 4.0000000000000000e+00 * src1[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+32)*1+lsi)*1], fp35);
target[((hsi*45+32)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp38;
fp38 = 4.0000000000000000e+00 * src1[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+31)*1+lsi)*1], fp38);
target[((hsi*45+31)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp41;
fp41 = 4.0000000000000000e+00 * src1[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+30)*1+lsi)*1], fp41);
target[((hsi*45+30)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp44;
fp44 = 1.0000000000000000e+00 * src1[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+44)*1+lsi)*1], fp44);
target[((hsi*45+29)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp47;
fp47 = 2.0000000000000000e+00 * src1[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+42)*1+lsi)*1], fp47);
target[((hsi*45+28)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha0_bra[vi] * src0[((hsi*55+43)*1+lsi)*1];
target[((hsi*45+27)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp51;
fp51 = 3.0000000000000000e+00 * src1[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+40)*1+lsi)*1], fp51);
target[((hsi*45+26)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp54;
fp54 = 1.0000000000000000e+00 * src1[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+39)*1+lsi)*1], fp54);
target[((hsi*45+25)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp57;
fp57 = 2.0000000000000000e+00 * src1[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+37)*1+lsi)*1], fp57);
target[((hsi*45+24)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->two_alpha0_bra[vi] * src0[((hsi*55+38)*1+lsi)*1];
target[((hsi*45+23)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp29;
fp29 = 4.0000000000000000e+00 * src1[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*55+34)*1+lsi)*1], fp29);
target[((hsi*45+34)*1+lsi)*1] = fp28;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 117 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
