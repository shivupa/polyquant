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
void OSVRRP1InBra_aB_f001__0__p__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp79;
fp79 = inteval->WQ_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*30+1)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp77;
fp77 = 1.0000000000000000e+00 * inteval->alpha1_over_zetapluseta[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp77 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->WQ_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp78 + fp76;
target[((hsi*30+2)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp74;
fp74 = inteval->WQ_x[vi] * src0[((hsi*10+1)*1+lsi)*1];
target[((hsi*30+3)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp82;
fp82 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp72;
fp72 = fp82 * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->WQ_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp73 + fp72;
target[((hsi*30+4)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp69;
fp69 = fp77 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->WQ_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp70 + fp69;
target[((hsi*30+5)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp67;
fp67 = inteval->WQ_x[vi] * src0[((hsi*10+2)*1+lsi)*1];
target[((hsi*30+6)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WQ_y[vi] * src0[((hsi*10+2)*1+lsi)*1];
target[((hsi*30+7)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp62;
fp62 = fp77 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp82 * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->WQ_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
target[((hsi*30+8)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp59;
fp59 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->WQ_x[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp60 + fp58;
target[((hsi*30+9)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp54;
fp54 = fp55 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp56 + fp54;
target[((hsi*30+10)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp51;
fp51 = fp77 * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->WQ_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
target[((hsi*30+11)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp48;
fp48 = fp59 * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->WQ_x[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp49 + fp48;
target[((hsi*30+12)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp46;
fp46 = inteval->WQ_y[vi] * src0[((hsi*10+4)*1+lsi)*1];
target[((hsi*30+13)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp43;
fp43 = fp77 * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp45 + fp54;
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
target[((hsi*30+14)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->WQ_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp83 + fp81;
target[((hsi*30+0)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WQ_y[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp38 + fp58;
target[((hsi*30+16)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp35;
fp35 = fp77 * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->WQ_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
target[((hsi*30+17)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WQ_x[vi] * src0[((hsi*10+6)*1+lsi)*1];
target[((hsi*30+18)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp31;
fp31 = fp59 * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->WQ_y[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
target[((hsi*30+19)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp27;
fp27 = fp77 * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp55 * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->WQ_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp29 + fp40;
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*30+20)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp24;
fp24 = fp55 * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->WQ_x[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
target[((hsi*30+21)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WQ_y[vi] * src0[((hsi*10+7)*1+lsi)*1];
target[((hsi*30+22)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp19;
fp19 = fp77 * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->WQ_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp21 + fp48;
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
target[((hsi*30+23)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WQ_x[vi] * src0[((hsi*10+8)*1+lsi)*1];
target[((hsi*30+24)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp16;
fp16 = inteval->WQ_y[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp16 + fp24;
target[((hsi*30+25)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp12;
fp12 = fp77 * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->WQ_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp14 + fp31;
LIBINT2_REALTYPE fp11;
fp11 = fp13 + fp12;
target[((hsi*30+26)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp9;
fp9 = fp55 * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->WQ_x[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
target[((hsi*30+27)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp6;
fp6 = fp55 * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->WQ_y[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
target[((hsi*30+28)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp1;
fp1 = fp77 * src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp55 * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->WQ_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*30+29)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WQ_x[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp41 + fp40;
target[((hsi*30+15)*1+lsi)*1] = fp39;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 84 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
