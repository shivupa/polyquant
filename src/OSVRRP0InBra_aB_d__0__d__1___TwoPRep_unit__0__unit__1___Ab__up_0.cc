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
void OSVRRP0InBra_aB_d__0__d__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp82;
fp82 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp82 * src3[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+5)*1+lsi)*1], src1[((hsi*6+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp69;
fp69 = fp105 * fp70;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*18+17)*1+lsi)*1], fp69);
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
target[((hsi*36+17)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp37;
fp37 = fp82 * src3[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+4)*1+lsi)*1], src1[((hsi*6+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp76;
fp76 = fp105 * fp77;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*18+16)*1+lsi)*1], fp76);
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
target[((hsi*36+16)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+3)*1+lsi)*1], src1[((hsi*6+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp84;
fp84 = fp105 * fp85;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*18+15)*1+lsi)*1], fp84);
target[((hsi*36+15)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp100;
fp100 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp100 * src3[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+2)*1+lsi)*1], src1[((hsi*6+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp89;
fp89 = fp105 * fp90;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*18+14)*1+lsi)*1], fp89);
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
target[((hsi*36+14)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+1)*1+lsi)*1], src1[((hsi*6+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp94;
fp94 = fp105 * fp95;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*18+13)*1+lsi)*1], fp94);
target[((hsi*36+13)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+0)*1+lsi)*1], src1[((hsi*6+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp102;
fp102 = fp105 * fp103;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*18+12)*1+lsi)*1], fp102);
target[((hsi*36+12)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
fp51 = fp82 * src3[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*18+11)*1+lsi)*1], fp69);
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
target[((hsi*36+11)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*18+10)*1+lsi)*1], fp76);
target[((hsi*36+10)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * src3[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*18+0)*1+lsi)*1], fp102);
LIBINT2_REALTYPE fp98;
fp98 = fp101 + fp99;
target[((hsi*36+0)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*18+8)*1+lsi)*1], fp89);
target[((hsi*36+8)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
fp63 = fp100 * src3[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*18+7)*1+lsi)*1], fp94);
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
target[((hsi*36+7)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*18+6)*1+lsi)*1], fp102);
target[((hsi*36+6)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*18+5)*1+lsi)*1], fp69);
target[((hsi*36+5)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp74;
fp74 = fp82 * src3[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*18+4)*1+lsi)*1], fp76);
LIBINT2_REALTYPE fp73;
fp73 = fp75 + fp74;
target[((hsi*36+4)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * src3[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*18+3)*1+lsi)*1], fp84);
LIBINT2_REALTYPE fp80;
fp80 = fp83 + fp81;
target[((hsi*36+3)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*18+2)*1+lsi)*1], fp89);
target[((hsi*36+2)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*18+1)*1+lsi)*1], fp94);
target[((hsi*36+1)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp57;
fp57 = fp82 * src3[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*18+9)*1+lsi)*1], fp84);
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
target[((hsi*36+9)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp1;
fp1 = fp82 * src3[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+11)*1+lsi)*1], fp1);
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+10)*1+lsi)*1], fp57);
target[((hsi*36+34)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp5;
fp5 = inteval->WP_z[vi] * src0[((hsi*18+9)*1+lsi)*1];
target[((hsi*36+33)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp7;
fp7 = fp100 * src3[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+8)*1+lsi)*1], fp7);
target[((hsi*36+32)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src0[((hsi*18+7)*1+lsi)*1];
target[((hsi*36+31)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp10;
fp10 = inteval->WP_z[vi] * src0[((hsi*18+6)*1+lsi)*1];
target[((hsi*36+30)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+5)*1+lsi)*1], fp81);
target[((hsi*36+29)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp25;
fp25 = fp82 * src3[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+4)*1+lsi)*1], fp25);
target[((hsi*36+28)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_y[vi] * src0[((hsi*18+0)*1+lsi)*1];
target[((hsi*36+18)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp17;
fp17 = fp100 * src3[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*18+2)*1+lsi)*1], fp17);
target[((hsi*36+26)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->WP_z[vi] * src0[((hsi*18+1)*1+lsi)*1];
target[((hsi*36+25)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_z[vi] * src0[((hsi*18+0)*1+lsi)*1];
target[((hsi*36+24)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*18+5)*1+lsi)*1], fp74);
target[((hsi*36+23)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_y[vi] * src0[((hsi*18+4)*1+lsi)*1];
target[((hsi*36+22)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*18+3)*1+lsi)*1], fp25);
target[((hsi*36+21)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_y[vi] * src0[((hsi*18+2)*1+lsi)*1];
target[((hsi*36+20)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp29;
fp29 = fp100 * src3[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*18+1)*1+lsi)*1], fp29);
target[((hsi*36+19)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp15;
fp15 = inteval->WP_z[vi] * src0[((hsi*18+3)*1+lsi)*1];
target[((hsi*36+27)*1+lsi)*1] = fp15;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 107 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif