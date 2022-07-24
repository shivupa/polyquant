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
void OSVRRP0InBra_aB_g__0__s__1___TwoPRep_s__0__s010__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->roz[vi] * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src2[((hsi*6+3)*1+lsi)*1] - fp3;
LIBINT2_REALTYPE fp4;
fp4 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WP_z[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->PA_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->PA_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
target[((hsi*15+13)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp12;
fp12 = inteval->WP_z[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->PA_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp13 + fp12;
target[((hsi*15+12)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp17;
fp17 = inteval->roz[vi] * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src2[((hsi*6+1)*1+lsi)*1] - fp17;
LIBINT2_REALTYPE fp18;
fp18 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp18 * fp16;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_z[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->PA_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
LIBINT2_REALTYPE fp14;
fp14 = fp19 + fp15;
target[((hsi*15+11)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp25;
fp25 = inteval->roz[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = src2[((hsi*6+0)*1+lsi)*1] - fp25;
LIBINT2_REALTYPE fp26;
fp26 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp23;
fp23 = fp26 * fp24;
LIBINT2_REALTYPE fp28;
fp28 = inteval->WP_z[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->PA_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
LIBINT2_REALTYPE fp22;
fp22 = fp27 + fp23;
target[((hsi*15+10)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp32;
fp32 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * src4[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->roz[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = src2[((hsi*6+0)*1+lsi)*1] - fp36;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp34;
fp34 = fp37 * fp35;
LIBINT2_REALTYPE fp39;
fp39 = inteval->WP_y[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->PA_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp40 + fp39;
LIBINT2_REALTYPE fp33;
fp33 = fp38 + fp34;
LIBINT2_REALTYPE fp30;
fp30 = fp33 + fp31;
target[((hsi*15+9)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp44;
fp44 = inteval->roz[vi] * src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = src2[((hsi*6+5)*1+lsi)*1] - fp44;
LIBINT2_REALTYPE fp45;
fp45 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp45 * fp43;
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_z[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->PA_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
LIBINT2_REALTYPE fp41;
fp41 = fp46 + fp42;
target[((hsi*15+8)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp52;
fp52 = inteval->roz[vi] * src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = src2[((hsi*6+4)*1+lsi)*1] - fp52;
LIBINT2_REALTYPE fp53;
fp53 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp53 * fp51;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_z[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->PA_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp49;
fp49 = fp54 + fp50;
target[((hsi*15+7)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_z[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp59 + fp58;
target[((hsi*15+6)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp62;
fp62 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * src4[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->roz[vi] * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = src2[((hsi*6+3)*1+lsi)*1] - fp66;
LIBINT2_REALTYPE fp67;
fp67 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp67 * fp65;
LIBINT2_REALTYPE fp69;
fp69 = inteval->WP_y[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->PA_y[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp70 + fp69;
LIBINT2_REALTYPE fp63;
fp63 = fp68 + fp64;
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
target[((hsi*15+5)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp72;
fp72 = inteval->WP_z[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp73 + fp72;
target[((hsi*15+4)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * src4[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_y[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->PA_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp79 + fp78;
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
target[((hsi*15+3)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp83;
fp83 = inteval->roz[vi] * src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src2[((hsi*6+2)*1+lsi)*1] - fp83;
LIBINT2_REALTYPE fp84;
fp84 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp84 * fp82;
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_z[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->PA_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp87 + fp86;
LIBINT2_REALTYPE fp80;
fp80 = fp85 + fp81;
target[((hsi*15+2)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp90;
fp90 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * src4[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->roz[vi] * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = src2[((hsi*6+1)*1+lsi)*1] - fp94;
LIBINT2_REALTYPE fp95;
fp95 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp95 * fp93;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_y[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->PA_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp98 + fp97;
LIBINT2_REALTYPE fp91;
fp91 = fp96 + fp92;
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
target[((hsi*15+1)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp102;
fp102 = inteval->roz[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = src2[((hsi*6+0)*1+lsi)*1] - fp102;
LIBINT2_REALTYPE fp103;
fp103 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp103 * fp101;
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_x[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->PA_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp106 + fp105;
LIBINT2_REALTYPE fp99;
fp99 = fp104 + fp100;
target[((hsi*15+0)*1+lsi)*1] = fp99;
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
