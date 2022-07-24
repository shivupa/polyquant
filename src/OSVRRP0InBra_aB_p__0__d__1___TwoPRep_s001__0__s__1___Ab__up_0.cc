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
void OSVRRP0InBra_aB_p__0__d__1___TwoPRep_s001__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_x[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->PA_x[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp94 + fp93;
target[((hsi*18+1)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_x[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->PA_x[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
target[((hsi*18+2)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp84;
fp84 = fp85 * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_x[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->PA_x[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp88 + fp87;
LIBINT2_REALTYPE fp83;
fp83 = fp86 + fp84;
target[((hsi*18+3)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp79;
fp79 = fp85 * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_x[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->PA_x[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
LIBINT2_REALTYPE fp78;
fp78 = fp80 + fp79;
target[((hsi*18+4)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_x[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->PA_x[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp77 + fp76;
target[((hsi*18+5)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_y[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->PA_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
target[((hsi*18+6)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp97;
fp97 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp97 * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_y[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->PA_y[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
target[((hsi*18+7)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WP_y[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->PA_y[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
target[((hsi*18+8)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_x[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->PA_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp100 + fp99;
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
target[((hsi*18+0)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_y[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->PA_y[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
target[((hsi*18+10)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WP_y[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->PA_y[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp55 + fp54;
LIBINT2_REALTYPE fp52;
fp52 = fp53 + fp79;
target[((hsi*18+11)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp47;
fp47 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp48 - fp47;
LIBINT2_REALTYPE fp45;
fp45 = 1.0000000000000000e+00 * fp46;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_z[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->PA_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp51 + fp50;
LIBINT2_REALTYPE fp44;
fp44 = fp49 + fp45;
target[((hsi*18+12)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp39;
fp39 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp40 - fp39;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * fp38;
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_z[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->PA_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp43 + fp42;
LIBINT2_REALTYPE fp36;
fp36 = fp41 + fp37;
target[((hsi*18+13)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp29;
fp29 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp30 - fp29;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * fp28;
LIBINT2_REALTYPE fp32;
fp32 = fp97 * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_z[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_z[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
LIBINT2_REALTYPE fp31;
fp31 = fp33 + fp32;
LIBINT2_REALTYPE fp26;
fp26 = fp31 + fp27;
target[((hsi*18+14)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp21;
fp21 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp22 - fp21;
LIBINT2_REALTYPE fp19;
fp19 = 1.0000000000000000e+00 * fp20;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_z[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*18+15)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp12;
fp12 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp13 - fp12;
LIBINT2_REALTYPE fp10;
fp10 = 1.0000000000000000e+00 * fp11;
LIBINT2_REALTYPE fp60;
fp60 = fp85 * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_z[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->PA_z[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp17 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + fp60;
LIBINT2_REALTYPE fp9;
fp9 = fp14 + fp10;
target[((hsi*18+16)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp3;
fp3 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->rho12_over_alpha1[vi] * src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp4 - fp3;
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * fp2;
LIBINT2_REALTYPE fp7;
fp7 = inteval->WP_z[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->PA_z[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp8 + fp7;
LIBINT2_REALTYPE fp5;
fp5 = fp6 + fp84;
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*18+17)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WP_y[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->PA_y[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
LIBINT2_REALTYPE fp59;
fp59 = fp61 + fp60;
target[((hsi*18+9)*1+lsi)*1] = fp59;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 101 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
