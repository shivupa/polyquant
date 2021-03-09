/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
void OSVRRP0InBra_aB_g__0__s__1___TwoPRep_s__0__s001__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src4[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->roz[vi] * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = src2[((hsi*6+3)*1+lsi)*1] - fp6;
LIBINT2_REALTYPE fp7;
fp7 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp7 * fp5;
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->PA_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
LIBINT2_REALTYPE fp3;
fp3 = fp8 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp13;
fp13 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp12;
fp12 = fp13 * src4[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->WP_z[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->PA_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
LIBINT2_REALTYPE fp11;
fp11 = fp14 + fp12;
target[((hsi*15+13)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp19;
fp19 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * src4[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->WP_z[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->PA_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp22 + fp21;
LIBINT2_REALTYPE fp17;
fp17 = fp20 + fp18;
target[((hsi*15+12)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp24;
fp24 = fp25 * src4[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->roz[vi] * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src2[((hsi*6+1)*1+lsi)*1] - fp29;
LIBINT2_REALTYPE fp30;
fp30 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp27;
fp27 = fp30 * fp28;
LIBINT2_REALTYPE fp32;
fp32 = inteval->WP_z[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->PA_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp33 + fp32;
LIBINT2_REALTYPE fp26;
fp26 = fp31 + fp27;
LIBINT2_REALTYPE fp23;
fp23 = fp26 + fp24;
target[((hsi*15+11)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp36;
fp36 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp35;
fp35 = fp36 * src4[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->roz[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = src2[((hsi*6+0)*1+lsi)*1] - fp40;
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp38;
fp38 = fp41 * fp39;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_z[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->PA_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
LIBINT2_REALTYPE fp37;
fp37 = fp42 + fp38;
LIBINT2_REALTYPE fp34;
fp34 = fp37 + fp35;
target[((hsi*15+10)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp48;
fp48 = inteval->roz[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = src2[((hsi*6+0)*1+lsi)*1] - fp48;
LIBINT2_REALTYPE fp49;
fp49 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp49 * fp47;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_y[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->PA_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp45;
fp45 = fp50 + fp46;
target[((hsi*15+9)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp54;
fp54 = fp55 * src4[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->roz[vi] * src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = src2[((hsi*6+5)*1+lsi)*1] - fp59;
LIBINT2_REALTYPE fp60;
fp60 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp60 * fp58;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WP_z[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->PA_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
LIBINT2_REALTYPE fp56;
fp56 = fp61 + fp57;
LIBINT2_REALTYPE fp53;
fp53 = fp56 + fp54;
target[((hsi*15+8)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp66;
fp66 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp66 * src4[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->roz[vi] * src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = src2[((hsi*6+4)*1+lsi)*1] - fp70;
LIBINT2_REALTYPE fp71;
fp71 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp71 * fp69;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_z[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->PA_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
LIBINT2_REALTYPE fp67;
fp67 = fp72 + fp68;
LIBINT2_REALTYPE fp64;
fp64 = fp67 + fp65;
target[((hsi*15+7)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp77;
fp77 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp77 * src4[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->WP_z[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->PA_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp80 + fp79;
LIBINT2_REALTYPE fp75;
fp75 = fp78 + fp76;
target[((hsi*15+6)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp84;
fp84 = inteval->roz[vi] * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = src2[((hsi*6+3)*1+lsi)*1] - fp84;
LIBINT2_REALTYPE fp85;
fp85 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp85 * fp83;
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_y[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->PA_y[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp88 + fp87;
LIBINT2_REALTYPE fp81;
fp81 = fp86 + fp82;
target[((hsi*15+5)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp90;
fp90 = fp91 * src4[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_z[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->PA_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp94 + fp93;
LIBINT2_REALTYPE fp89;
fp89 = fp92 + fp90;
target[((hsi*15+4)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp96;
fp96 = inteval->WP_y[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->PA_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp97 + fp96;
target[((hsi*15+3)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp100;
fp100 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp100 * src4[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->roz[vi] * src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = src2[((hsi*6+2)*1+lsi)*1] - fp104;
LIBINT2_REALTYPE fp105;
fp105 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp102;
fp102 = fp105 * fp103;
LIBINT2_REALTYPE fp107;
fp107 = inteval->WP_z[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = inteval->PA_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
LIBINT2_REALTYPE fp101;
fp101 = fp106 + fp102;
LIBINT2_REALTYPE fp98;
fp98 = fp101 + fp99;
target[((hsi*15+2)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp112;
fp112 = inteval->roz[vi] * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = src2[((hsi*6+1)*1+lsi)*1] - fp112;
LIBINT2_REALTYPE fp113;
fp113 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp113 * fp111;
LIBINT2_REALTYPE fp115;
fp115 = inteval->WP_y[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->PA_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
LIBINT2_REALTYPE fp109;
fp109 = fp114 + fp110;
target[((hsi*15+1)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp120;
fp120 = inteval->roz[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = src2[((hsi*6+0)*1+lsi)*1] - fp120;
LIBINT2_REALTYPE fp121;
fp121 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp118;
fp118 = fp121 * fp119;
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_x[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = inteval->PA_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
LIBINT2_REALTYPE fp117;
fp117 = fp122 + fp118;
target[((hsi*15+0)*1+lsi)*1] = fp117;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 125 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
