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
void OSVRRP1InBra_aB_s__0__h__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+1)*1+lsi)*1], src2[((hsi*10+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp126;
fp126 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp123;
fp123 = fp126 * fp124;
LIBINT2_REALTYPE fp128;
fp128 = inteval->WQ_y[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+1)*1+lsi)*1], fp128);
LIBINT2_REALTYPE fp122;
fp122 = fp127 - fp123;
target[((hsi*21+1)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+2)*1+lsi)*1], src2[((hsi*10+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp118;
fp118 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp115;
fp115 = fp118 * fp116;
LIBINT2_REALTYPE fp120;
fp120 = inteval->WQ_z[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+2)*1+lsi)*1], fp120);
LIBINT2_REALTYPE fp114;
fp114 = fp119 - fp115;
target[((hsi*21+2)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp112;
fp112 = inteval->WQ_y[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+0)*1+lsi)*1], fp112);
target[((hsi*21+3)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp109;
fp109 = inteval->WQ_z[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+0)*1+lsi)*1], fp109);
target[((hsi*21+4)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+5)*1+lsi)*1], src2[((hsi*10+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp104;
fp104 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp101;
fp101 = fp104 * fp102;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WQ_y[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+5)*1+lsi)*1], fp106);
LIBINT2_REALTYPE fp100;
fp100 = fp105 - fp101;
target[((hsi*21+5)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp98;
fp98 = inteval->WQ_z[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+1)*1+lsi)*1], fp98);
target[((hsi*21+6)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+7)*1+lsi)*1], src2[((hsi*10+7)*1+lsi)*1]);
LIBINT2_REALTYPE fp93;
fp93 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp90;
fp90 = fp93 * fp91;
LIBINT2_REALTYPE fp95;
fp95 = inteval->WQ_z[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+7)*1+lsi)*1], fp95);
LIBINT2_REALTYPE fp89;
fp89 = fp94 - fp90;
target[((hsi*21+7)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+8)*1+lsi)*1], src2[((hsi*10+8)*1+lsi)*1]);
LIBINT2_REALTYPE fp85;
fp85 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp85 * fp83;
LIBINT2_REALTYPE fp87;
fp87 = inteval->WQ_z[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+8)*1+lsi)*1], fp87);
LIBINT2_REALTYPE fp81;
fp81 = fp86 - fp82;
target[((hsi*21+8)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+0)*1+lsi)*1], src2[((hsi*10+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp77;
fp77 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp74;
fp74 = fp77 * fp75;
LIBINT2_REALTYPE fp79;
fp79 = inteval->WQ_y[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+3)*1+lsi)*1], fp79);
LIBINT2_REALTYPE fp73;
fp73 = fp78 - fp74;
target[((hsi*21+9)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+0)*1+lsi)*1], src2[((hsi*10+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp134;
fp134 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp131;
fp131 = fp134 * fp132;
LIBINT2_REALTYPE fp136;
fp136 = inteval->WQ_x[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*15+0)*1+lsi)*1], fp136);
LIBINT2_REALTYPE fp130;
fp130 = fp135 - fp131;
target[((hsi*21+0)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp63;
fp63 = inteval->WQ_z[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+3)*1+lsi)*1], fp63);
target[((hsi*21+11)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+3)*1+lsi)*1], src2[((hsi*10+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp58;
fp58 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp58 * fp56;
LIBINT2_REALTYPE fp60;
fp60 = inteval->WQ_y[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*15+9)*1+lsi)*1], fp60);
LIBINT2_REALTYPE fp54;
fp54 = fp59 - fp55;
target[((hsi*21+12)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+1)*1+lsi)*1], src2[((hsi*10+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp50;
fp50 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp50 * fp48;
LIBINT2_REALTYPE fp52;
fp52 = inteval->WQ_z[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+6)*1+lsi)*1], fp52);
LIBINT2_REALTYPE fp46;
fp46 = fp51 - fp47;
target[((hsi*21+13)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp44;
fp44 = inteval->WQ_z[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+5)*1+lsi)*1], fp44);
target[((hsi*21+14)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+4)*1+lsi)*1], src2[((hsi*10+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp39;
fp39 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp39 * fp37;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WQ_z[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+10)*1+lsi)*1], fp41);
LIBINT2_REALTYPE fp35;
fp35 = fp40 - fp36;
target[((hsi*21+15)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+6)*1+lsi)*1], src2[((hsi*10+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp31;
fp31 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp31 * fp29;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WQ_z[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+11)*1+lsi)*1], fp33);
LIBINT2_REALTYPE fp27;
fp27 = fp32 - fp28;
target[((hsi*21+16)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+9)*1+lsi)*1], src2[((hsi*10+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp23;
fp23 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp20;
fp20 = fp23 * fp21;
LIBINT2_REALTYPE fp25;
fp25 = inteval->WQ_z[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+14)*1+lsi)*1], fp25);
LIBINT2_REALTYPE fp19;
fp19 = fp24 - fp20;
target[((hsi*21+17)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WQ_z[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+9)*1+lsi)*1], fp17);
target[((hsi*21+18)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+3)*1+lsi)*1], src2[((hsi*10+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp12;
fp12 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp12 * fp10;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WQ_z[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+12)*1+lsi)*1], fp14);
LIBINT2_REALTYPE fp8;
fp8 = fp13 - fp9;
target[((hsi*21+19)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+5)*1+lsi)*1], src2[((hsi*10+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp4;
fp4 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WQ_z[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+13)*1+lsi)*1], fp6);
LIBINT2_REALTYPE fp0;
fp0 = fp5 - fp1;
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*10+0)*1+lsi)*1], src2[((hsi*10+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp69;
fp69 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp66;
fp66 = fp69 * fp67;
LIBINT2_REALTYPE fp71;
fp71 = inteval->WQ_z[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*15+4)*1+lsi)*1], fp71);
LIBINT2_REALTYPE fp65;
fp65 = fp70 - fp66;
target[((hsi*21+10)*1+lsi)*1] = fp65;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 138 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
