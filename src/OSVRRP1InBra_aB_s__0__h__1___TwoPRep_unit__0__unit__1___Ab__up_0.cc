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
void OSVRRP1InBra_aB_s__0__h__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp87;
fp87 = inteval->roe[vi] * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src1[((hsi*10+1)*1+lsi)*1] - fp87;
LIBINT2_REALTYPE fp88;
fp88 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp88 * fp86;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WQ_y[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp89 + fp85;
target[((hsi*21+1)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp81;
fp81 = inteval->roe[vi] * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = src1[((hsi*10+2)*1+lsi)*1] - fp81;
LIBINT2_REALTYPE fp82;
fp82 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp82 * fp80;
LIBINT2_REALTYPE fp83;
fp83 = inteval->WQ_z[vi] * src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp83 + fp79;
target[((hsi*21+2)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WQ_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*21+3)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WQ_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*21+4)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp73;
fp73 = inteval->roe[vi] * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = src1[((hsi*10+5)*1+lsi)*1] - fp73;
LIBINT2_REALTYPE fp74;
fp74 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp74 * fp72;
LIBINT2_REALTYPE fp75;
fp75 = inteval->WQ_y[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp75 + fp71;
target[((hsi*21+5)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp69;
fp69 = inteval->WQ_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
target[((hsi*21+6)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp66;
fp66 = inteval->roe[vi] * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = src1[((hsi*10+7)*1+lsi)*1] - fp66;
LIBINT2_REALTYPE fp67;
fp67 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp67 * fp65;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WQ_z[vi] * src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp68 + fp64;
target[((hsi*21+7)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp60;
fp60 = inteval->roe[vi] * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = src1[((hsi*10+8)*1+lsi)*1] - fp60;
LIBINT2_REALTYPE fp61;
fp61 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp61 * fp59;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WQ_z[vi] * src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp62 + fp58;
target[((hsi*21+8)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp54;
fp54 = inteval->roe[vi] * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = src1[((hsi*10+0)*1+lsi)*1] - fp54;
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp55 * fp53;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_y[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp56 + fp52;
target[((hsi*21+9)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp93;
fp93 = inteval->roe[vi] * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src1[((hsi*10+0)*1+lsi)*1] - fp93;
LIBINT2_REALTYPE fp94;
fp94 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp94 * fp92;
LIBINT2_REALTYPE fp95;
fp95 = inteval->WQ_x[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp95 + fp91;
target[((hsi*21+0)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp44;
fp44 = inteval->WQ_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
target[((hsi*21+11)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp41;
fp41 = inteval->roe[vi] * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = src1[((hsi*10+3)*1+lsi)*1] - fp41;
LIBINT2_REALTYPE fp42;
fp42 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp42 * fp40;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WQ_y[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp43 + fp39;
target[((hsi*21+12)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp35;
fp35 = inteval->roe[vi] * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src1[((hsi*10+1)*1+lsi)*1] - fp35;
LIBINT2_REALTYPE fp36;
fp36 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp36 * fp34;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WQ_z[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp37 + fp33;
target[((hsi*21+13)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WQ_z[vi] * src0[((hsi*15+5)*1+lsi)*1];
target[((hsi*21+14)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp28;
fp28 = inteval->roe[vi] * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = src1[((hsi*10+4)*1+lsi)*1] - fp28;
LIBINT2_REALTYPE fp29;
fp29 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp29 * fp27;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_z[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp30 + fp26;
target[((hsi*21+15)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp22;
fp22 = inteval->roe[vi] * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = src1[((hsi*10+6)*1+lsi)*1] - fp22;
LIBINT2_REALTYPE fp23;
fp23 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp20;
fp20 = fp23 * fp21;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WQ_z[vi] * src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp24 + fp20;
target[((hsi*21+16)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp16;
fp16 = inteval->roe[vi] * src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = src1[((hsi*10+9)*1+lsi)*1] - fp16;
LIBINT2_REALTYPE fp17;
fp17 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp14;
fp14 = fp17 * fp15;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WQ_z[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp18 + fp14;
target[((hsi*21+17)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp12;
fp12 = inteval->WQ_z[vi] * src0[((hsi*15+9)*1+lsi)*1];
target[((hsi*21+18)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp9;
fp9 = inteval->roe[vi] * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src1[((hsi*10+3)*1+lsi)*1] - fp9;
LIBINT2_REALTYPE fp10;
fp10 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp10 * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->WQ_z[vi] * src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*21+19)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp3;
fp3 = inteval->roe[vi] * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src1[((hsi*10+5)*1+lsi)*1] - fp3;
LIBINT2_REALTYPE fp4;
fp4 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->WQ_z[vi] * src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp48;
fp48 = inteval->roe[vi] * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = src1[((hsi*10+0)*1+lsi)*1] - fp48;
LIBINT2_REALTYPE fp49;
fp49 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp49 * fp47;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WQ_z[vi] * src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp50 + fp46;
target[((hsi*21+10)*1+lsi)*1] = fp45;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 96 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
