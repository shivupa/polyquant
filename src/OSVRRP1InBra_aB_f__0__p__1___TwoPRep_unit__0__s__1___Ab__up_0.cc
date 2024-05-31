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
void OSVRRP1InBra_aB_f__0__p__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp114;
fp114 = inteval->WQ_y[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*10+0)*1+lsi)*1], fp114);
target[((hsi*30+1)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp111;
fp111 = inteval->WQ_z[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*10+0)*1+lsi)*1], fp111);
target[((hsi*30+2)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp108;
fp108 = inteval->WQ_x[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*10+1)*1+lsi)*1], fp108);
target[((hsi*30+3)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp118;
fp118 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp118 * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->WQ_y[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*10+1)*1+lsi)*1], fp105);
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
target[((hsi*30+4)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp100;
fp100 = inteval->WQ_z[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*10+1)*1+lsi)*1], fp100);
target[((hsi*30+5)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WQ_x[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*10+2)*1+lsi)*1], fp97);
target[((hsi*30+6)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp94;
fp94 = inteval->WQ_y[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*10+2)*1+lsi)*1], fp94);
target[((hsi*30+7)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp89;
fp89 = fp118 * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->WQ_z[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*10+2)*1+lsi)*1], fp91);
LIBINT2_REALTYPE fp88;
fp88 = fp90 + fp89;
target[((hsi*30+8)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp84;
fp84 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp84 * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->WQ_x[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*10+3)*1+lsi)*1], fp86);
LIBINT2_REALTYPE fp82;
fp82 = fp85 + fp83;
target[((hsi*30+9)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp78;
fp78 = inteval->oo2ze[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->WQ_y[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*10+3)*1+lsi)*1], fp80);
LIBINT2_REALTYPE fp77;
fp77 = fp79 + fp78;
target[((hsi*30+10)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp75;
fp75 = inteval->WQ_z[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*10+3)*1+lsi)*1], fp75);
target[((hsi*30+11)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp70;
fp70 = fp84 * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->WQ_x[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*10+4)*1+lsi)*1], fp72);
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
target[((hsi*30+12)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp67;
fp67 = inteval->WQ_y[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*10+4)*1+lsi)*1], fp67);
target[((hsi*30+13)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp64;
fp64 = inteval->WQ_z[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*10+4)*1+lsi)*1], fp64);
LIBINT2_REALTYPE fp62;
fp62 = fp63 + fp78;
target[((hsi*30+14)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->WQ_x[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*10+0)*1+lsi)*1], fp120);
LIBINT2_REALTYPE fp116;
fp116 = fp119 + fp117;
target[((hsi*30+0)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WQ_y[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*10+5)*1+lsi)*1], fp55);
LIBINT2_REALTYPE fp53;
fp53 = fp54 + fp83;
target[((hsi*30+16)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WQ_z[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*10+5)*1+lsi)*1], fp51);
target[((hsi*30+17)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WQ_x[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*10+6)*1+lsi)*1], fp48);
target[((hsi*30+18)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp43;
fp43 = fp84 * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_y[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*10+6)*1+lsi)*1], fp45);
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
target[((hsi*30+19)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2ze[vi] * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->WQ_z[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*10+6)*1+lsi)*1], fp40);
LIBINT2_REALTYPE fp38;
fp38 = fp39 + fp58;
target[((hsi*30+20)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp34;
fp34 = inteval->oo2ze[vi] * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->WQ_x[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*10+7)*1+lsi)*1], fp36);
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
target[((hsi*30+21)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WQ_y[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*10+7)*1+lsi)*1], fp31);
target[((hsi*30+22)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp28;
fp28 = inteval->WQ_z[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*10+7)*1+lsi)*1], fp28);
LIBINT2_REALTYPE fp26;
fp26 = fp27 + fp70;
target[((hsi*30+23)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WQ_x[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*10+8)*1+lsi)*1], fp24);
target[((hsi*30+24)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WQ_y[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*10+8)*1+lsi)*1], fp21);
LIBINT2_REALTYPE fp19;
fp19 = fp20 + fp34;
target[((hsi*30+25)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WQ_z[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*10+8)*1+lsi)*1], fp17);
LIBINT2_REALTYPE fp15;
fp15 = fp16 + fp43;
target[((hsi*30+26)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2ze[vi] * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->WQ_x[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*10+9)*1+lsi)*1], fp13);
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*30+27)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2ze[vi] * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->WQ_y[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*10+9)*1+lsi)*1], fp8);
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
target[((hsi*30+28)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2ze[vi] * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->WQ_z[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*10+9)*1+lsi)*1], fp3);
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*30+29)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp60;
fp60 = inteval->WQ_x[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*10+5)*1+lsi)*1], fp60);
LIBINT2_REALTYPE fp57;
fp57 = fp59 + fp58;
target[((hsi*30+15)*1+lsi)*1] = fp57;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 122 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
