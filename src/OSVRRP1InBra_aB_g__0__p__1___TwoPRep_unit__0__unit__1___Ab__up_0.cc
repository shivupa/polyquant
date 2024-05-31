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
void OSVRRP1InBra_aB_g__0__p__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2ze[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+7)*1+lsi)*1], fp58);
target[((hsi*45+21)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp71;
fp71 = inteval->oo2ze[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+6)*1+lsi)*1], fp71);
target[((hsi*45+20)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp85;
fp85 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp85 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+6)*1+lsi)*1], fp63);
target[((hsi*45+19)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WQ_x[vi] * src0[((hsi*15+6)*1+lsi)*1];
target[((hsi*45+18)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WQ_z[vi] * src0[((hsi*15+5)*1+lsi)*1];
target[((hsi*45+17)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp68;
fp68 = fp85 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+5)*1+lsi)*1], fp68);
target[((hsi*45+16)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+5)*1+lsi)*1], fp71);
target[((hsi*45+15)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp81;
fp81 = inteval->oo2ze[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+4)*1+lsi)*1], fp81);
target[((hsi*45+14)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp75;
fp75 = inteval->WQ_y[vi] * src0[((hsi*15+4)*1+lsi)*1];
target[((hsi*45+13)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp77;
fp77 = fp85 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+4)*1+lsi)*1], fp77);
target[((hsi*45+12)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp101;
fp101 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+0)*1+lsi)*1], fp100);
target[((hsi*45+0)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+3)*1+lsi)*1], fp81);
target[((hsi*45+10)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+3)*1+lsi)*1], fp84);
target[((hsi*45+9)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp88;
fp88 = fp101 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+2)*1+lsi)*1], fp88);
target[((hsi*45+8)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WQ_y[vi] * src0[((hsi*15+2)*1+lsi)*1];
target[((hsi*45+7)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp91;
fp91 = inteval->WQ_x[vi] * src0[((hsi*15+2)*1+lsi)*1];
target[((hsi*45+6)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WQ_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
target[((hsi*45+5)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp94;
fp94 = fp101 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+1)*1+lsi)*1], fp94);
target[((hsi*45+4)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp96;
fp96 = inteval->WQ_x[vi] * src0[((hsi*15+1)*1+lsi)*1];
target[((hsi*45+3)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WQ_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*45+2)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp98;
fp98 = inteval->WQ_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*45+1)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp79;
fp79 = inteval->WQ_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
target[((hsi*45+11)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp45;
fp45 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp23;
fp23 = fp45 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+14)*1+lsi)*1], fp23);
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->oo2ze[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+14)*1+lsi)*1], fp3);
target[((hsi*45+43)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2ze[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+14)*1+lsi)*1], fp6);
target[((hsi*45+42)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp9;
fp9 = inteval->oo2ze[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+13)*1+lsi)*1], fp9);
target[((hsi*45+41)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+13)*1+lsi)*1], fp23);
target[((hsi*45+40)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp14;
fp14 = inteval->oo2ze[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+13)*1+lsi)*1], fp14);
target[((hsi*45+39)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp17;
fp17 = inteval->oo2ze[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+12)*1+lsi)*1], fp17);
target[((hsi*45+38)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp20;
fp20 = inteval->oo2ze[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+12)*1+lsi)*1], fp20);
target[((hsi*45+37)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+12)*1+lsi)*1], fp23);
target[((hsi*45+36)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp26;
fp26 = fp45 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+11)*1+lsi)*1], fp26);
target[((hsi*45+35)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_y[vi] * src0[((hsi*15+7)*1+lsi)*1];
target[((hsi*45+22)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WQ_x[vi] * src0[((hsi*15+11)*1+lsi)*1];
target[((hsi*45+33)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp33;
fp33 = fp45 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+10)*1+lsi)*1], fp33);
target[((hsi*45+32)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->WQ_y[vi] * src0[((hsi*15+10)*1+lsi)*1];
target[((hsi*45+31)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp37;
fp37 = fp45 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+10)*1+lsi)*1], fp37);
target[((hsi*45+30)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
fp39 = inteval->WQ_z[vi] * src0[((hsi*15+9)*1+lsi)*1];
target[((hsi*45+29)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp41;
fp41 = fp45 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+9)*1+lsi)*1], fp41);
target[((hsi*45+28)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->WQ_x[vi], src0[((hsi*15+9)*1+lsi)*1], fp44);
target[((hsi*45+27)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp48;
fp48 = fp85 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+8)*1+lsi)*1], fp48);
target[((hsi*45+26)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+8)*1+lsi)*1], fp58);
target[((hsi*45+25)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp52;
fp52 = inteval->WQ_x[vi] * src0[((hsi*15+8)*1+lsi)*1];
target[((hsi*45+24)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp54;
fp54 = fp85 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->WQ_z[vi], src0[((hsi*15+7)*1+lsi)*1], fp54);
target[((hsi*45+23)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp29;
fp29 = fp45 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->WQ_y[vi], src0[((hsi*15+11)*1+lsi)*1], fp29);
target[((hsi*45+34)*1+lsi)*1] = fp28;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 103 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
