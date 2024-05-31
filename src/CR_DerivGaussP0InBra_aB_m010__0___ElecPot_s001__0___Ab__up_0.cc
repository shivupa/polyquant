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
void CR_DerivGaussP0InBra_aB_m010__0___ElecPot_s001__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp80;
fp80 = inteval->two_alpha0_bra[vi] * src0[((hsi*66+42)*1+lsi)*1];
target[((hsi*55+26)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp82;
fp82 = 6.0000000000000000e+00 * src1[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+25)*1+lsi)*1], fp82);
target[((hsi*55+25)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp85;
fp85 = 6.0000000000000000e+00 * src1[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+24)*1+lsi)*1], fp85);
target[((hsi*55+24)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp88;
fp88 = 6.0000000000000000e+00 * src1[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+23)*1+lsi)*1], fp88);
target[((hsi*55+23)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp91;
fp91 = 6.0000000000000000e+00 * src1[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+22)*1+lsi)*1], fp91);
target[((hsi*55+22)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp94;
fp94 = 1.0000000000000000e+00 * src1[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+34)*1+lsi)*1], fp94);
target[((hsi*55+21)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp97;
fp97 = 2.0000000000000000e+00 * src1[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+32)*1+lsi)*1], fp97);
target[((hsi*55+20)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
fp99 = inteval->two_alpha0_bra[vi] * src0[((hsi*66+33)*1+lsi)*1];
target[((hsi*55+19)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp101;
fp101 = 3.0000000000000000e+00 * src1[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+30)*1+lsi)*1], fp101);
target[((hsi*55+18)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp104;
fp104 = 1.0000000000000000e+00 * src1[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+29)*1+lsi)*1], fp104);
target[((hsi*55+17)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp107;
fp107 = 2.0000000000000000e+00 * src1[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+27)*1+lsi)*1], fp107);
target[((hsi*55+16)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = inteval->two_alpha0_bra[vi] * src0[((hsi*66+28)*1+lsi)*1];
target[((hsi*55+15)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp144;
fp144 = inteval->two_alpha0_bra[vi] * src0[((hsi*66+3)*1+lsi)*1];
target[((hsi*55+0)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp114;
fp114 = 7.0000000000000000e+00 * src1[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+13)*1+lsi)*1], fp114);
target[((hsi*55+13)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp117;
fp117 = 7.0000000000000000e+00 * src1[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+12)*1+lsi)*1], fp117);
target[((hsi*55+12)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp120;
fp120 = 1.0000000000000000e+00 * src1[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+20)*1+lsi)*1], fp120);
target[((hsi*55+11)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp122;
fp122 = inteval->two_alpha0_bra[vi] * src0[((hsi*66+21)*1+lsi)*1];
target[((hsi*55+10)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp124;
fp124 = 2.0000000000000000e+00 * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+18)*1+lsi)*1], fp124);
target[((hsi*55+9)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp127;
fp127 = 1.0000000000000000e+00 * src1[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+16)*1+lsi)*1], fp127);
target[((hsi*55+8)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = inteval->two_alpha0_bra[vi] * src0[((hsi*66+17)*1+lsi)*1];
target[((hsi*55+7)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp131;
fp131 = 8.0000000000000000e+00 * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+6)*1+lsi)*1], fp131);
target[((hsi*55+6)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp134;
fp134 = 8.0000000000000000e+00 * src1[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+5)*1+lsi)*1], fp134);
target[((hsi*55+5)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp136;
fp136 = inteval->two_alpha0_bra[vi] * src0[((hsi*66+11)*1+lsi)*1];
target[((hsi*55+4)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp138;
fp138 = 1.0000000000000000e+00 * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+9)*1+lsi)*1], fp138);
target[((hsi*55+3)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp140;
fp140 = inteval->two_alpha0_bra[vi] * src0[((hsi*66+8)*1+lsi)*1];
target[((hsi*55+2)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp142;
fp142 = 9.0000000000000000e+00 * src1[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+1)*1+lsi)*1], fp142);
target[((hsi*55+1)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp111;
fp111 = 7.0000000000000000e+00 * src1[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+14)*1+lsi)*1], fp111);
target[((hsi*55+14)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp1;
fp1 = 3.0000000000000000e+00 * src1[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+64)*1+lsi)*1], fp1);
target[((hsi*55+54)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp4;
fp4 = 3.0000000000000000e+00 * src1[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+63)*1+lsi)*1], fp4);
target[((hsi*55+53)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp7;
fp7 = 2.0000000000000000e+00 * src1[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+65)*1+lsi)*1], fp7);
target[((hsi*55+52)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp10;
fp10 = 4.0000000000000000e+00 * src1[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+55)*1+lsi)*1], fp10);
target[((hsi*55+51)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp13;
fp13 = 4.0000000000000000e+00 * src1[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+54)*1+lsi)*1], fp13);
target[((hsi*55+50)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp16;
fp16 = 4.0000000000000000e+00 * src1[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+53)*1+lsi)*1], fp16);
target[((hsi*55+49)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp19;
fp19 = 2.0000000000000000e+00 * src1[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+62)*1+lsi)*1], fp19);
target[((hsi*55+48)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp22;
fp22 = 3.0000000000000000e+00 * src1[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+60)*1+lsi)*1], fp22);
target[((hsi*55+47)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * src1[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+61)*1+lsi)*1], fp25);
target[((hsi*55+46)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp28;
fp28 = 4.0000000000000000e+00 * src1[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+52)*1+lsi)*1], fp28);
target[((hsi*55+45)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp31;
fp31 = 2.0000000000000000e+00 * src1[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+59)*1+lsi)*1], fp31);
target[((hsi*55+44)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp34;
fp34 = 3.0000000000000000e+00 * src1[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+57)*1+lsi)*1], fp34);
target[((hsi*55+43)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * src1[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+58)*1+lsi)*1], fp37);
target[((hsi*55+42)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp78;
fp78 = 3.0000000000000000e+00 * src1[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+41)*1+lsi)*1], fp78);
target[((hsi*55+27)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp42;
fp42 = inteval->two_alpha0_bra[vi] * src0[((hsi*66+56)*1+lsi)*1];
target[((hsi*55+40)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp44;
fp44 = 5.0000000000000000e+00 * src1[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+39)*1+lsi)*1], fp44);
target[((hsi*55+39)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp47;
fp47 = 5.0000000000000000e+00 * src1[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+38)*1+lsi)*1], fp47);
target[((hsi*55+38)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp50;
fp50 = 5.0000000000000000e+00 * src1[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+37)*1+lsi)*1], fp50);
target[((hsi*55+37)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp53;
fp53 = 5.0000000000000000e+00 * src1[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+36)*1+lsi)*1], fp53);
target[((hsi*55+36)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp56;
fp56 = 5.0000000000000000e+00 * src1[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+35)*1+lsi)*1], fp56);
target[((hsi*55+35)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp59;
fp59 = 2.0000000000000000e+00 * src1[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+49)*1+lsi)*1], fp59);
target[((hsi*55+34)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp62;
fp62 = 1.0000000000000000e+00 * src1[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+50)*1+lsi)*1], fp62);
target[((hsi*55+33)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp65;
fp65 = 3.0000000000000000e+00 * src1[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+47)*1+lsi)*1], fp65);
target[((hsi*55+32)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
fp67 = inteval->two_alpha0_bra[vi] * src0[((hsi*66+48)*1+lsi)*1];
target[((hsi*55+31)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp69;
fp69 = 4.0000000000000000e+00 * src1[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+45)*1+lsi)*1], fp69);
target[((hsi*55+30)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp72;
fp72 = 2.0000000000000000e+00 * src1[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+43)*1+lsi)*1], fp72);
target[((hsi*55+29)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp75;
fp75 = 1.0000000000000000e+00 * src1[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+44)*1+lsi)*1], fp75);
target[((hsi*55+28)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp40;
fp40 = 4.0000000000000000e+00 * src1[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*66+51)*1+lsi)*1], fp40);
target[((hsi*55+41)*1+lsi)*1] = fp39;
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
