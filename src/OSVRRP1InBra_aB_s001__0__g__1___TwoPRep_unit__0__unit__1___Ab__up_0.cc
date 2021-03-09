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
void OSVRRP1InBra_aB_s001__0__g__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src3[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->roe[vi] * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = src1[((hsi*6+3)*1+lsi)*1] - fp6;
LIBINT2_REALTYPE fp7;
fp7 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp7 * fp5;
LIBINT2_REALTYPE fp8;
fp8 = inteval->WQ_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp8 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp11;
fp11 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp11 * src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->WQ_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp12 + fp10;
target[((hsi*15+13)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp15;
fp15 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp14;
fp14 = fp15 * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->WQ_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp16 + fp14;
target[((hsi*15+12)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp19;
fp19 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->roe[vi] * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src1[((hsi*6+1)*1+lsi)*1] - fp23;
LIBINT2_REALTYPE fp24;
fp24 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp21;
fp21 = fp24 * fp22;
LIBINT2_REALTYPE fp25;
fp25 = inteval->WQ_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp25 + fp21;
LIBINT2_REALTYPE fp17;
fp17 = fp20 + fp18;
target[((hsi*15+11)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp28;
fp28 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp27;
fp27 = fp28 * src3[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->roe[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = src1[((hsi*6+0)*1+lsi)*1] - fp32;
LIBINT2_REALTYPE fp33;
fp33 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp30;
fp30 = fp33 * fp31;
LIBINT2_REALTYPE fp34;
fp34 = inteval->WQ_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp34 + fp30;
LIBINT2_REALTYPE fp26;
fp26 = fp29 + fp27;
target[((hsi*15+10)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp38;
fp38 = inteval->roe[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = src1[((hsi*6+0)*1+lsi)*1] - fp38;
LIBINT2_REALTYPE fp39;
fp39 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp39 * fp37;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WQ_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp40 + fp36;
target[((hsi*15+9)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp43 * src3[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->roe[vi] * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src1[((hsi*6+5)*1+lsi)*1] - fp47;
LIBINT2_REALTYPE fp48;
fp48 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp45;
fp45 = fp48 * fp46;
LIBINT2_REALTYPE fp49;
fp49 = inteval->WQ_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp49 + fp45;
LIBINT2_REALTYPE fp41;
fp41 = fp44 + fp42;
target[((hsi*15+8)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp52;
fp52 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp51;
fp51 = fp52 * src3[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->roe[vi] * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = src1[((hsi*6+4)*1+lsi)*1] - fp56;
LIBINT2_REALTYPE fp57;
fp57 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp54;
fp54 = fp57 * fp55;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WQ_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp58 + fp54;
LIBINT2_REALTYPE fp50;
fp50 = fp53 + fp51;
target[((hsi*15+7)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp61 * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->WQ_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp62 + fp60;
target[((hsi*15+6)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp66;
fp66 = inteval->roe[vi] * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = src1[((hsi*6+3)*1+lsi)*1] - fp66;
LIBINT2_REALTYPE fp67;
fp67 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp67 * fp65;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WQ_y[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp68 + fp64;
target[((hsi*15+5)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp71;
fp71 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp71 * src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->WQ_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp72 + fp70;
target[((hsi*15+4)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WQ_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*15+3)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * src3[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->roe[vi] * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = src1[((hsi*6+2)*1+lsi)*1] - fp80;
LIBINT2_REALTYPE fp81;
fp81 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp81 * fp79;
LIBINT2_REALTYPE fp82;
fp82 = inteval->WQ_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp82 + fp78;
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
target[((hsi*15+2)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp86;
fp86 = inteval->roe[vi] * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = src1[((hsi*6+1)*1+lsi)*1] - fp86;
LIBINT2_REALTYPE fp87;
fp87 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp84;
fp84 = fp87 * fp85;
LIBINT2_REALTYPE fp88;
fp88 = inteval->WQ_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp88 + fp84;
target[((hsi*15+1)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp92;
fp92 = inteval->roe[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = src1[((hsi*6+0)*1+lsi)*1] - fp92;
LIBINT2_REALTYPE fp93;
fp93 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp90;
fp90 = fp93 * fp91;
LIBINT2_REALTYPE fp94;
fp94 = inteval->WQ_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp94 + fp90;
target[((hsi*15+0)*1+lsi)*1] = fp89;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 95 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
