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
void OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = src2[((hsi*6+3)*1+lsi)*1] - src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp3 * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PC_z[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PA_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp6 - fp5;
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
fp8 = inteval->PC_z[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->PA_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 - fp8;
target[((hsi*15+13)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PC_z[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->PA_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp12 - fp11;
target[((hsi*15+12)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp15;
fp15 = src2[((hsi*6+1)*1+lsi)*1] - src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp14;
fp14 = fp16 * fp15;
LIBINT2_REALTYPE fp18;
fp18 = inteval->PC_z[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->PA_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp19 - fp18;
LIBINT2_REALTYPE fp13;
fp13 = fp17 + fp14;
target[((hsi*15+11)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp22;
fp22 = src2[((hsi*6+0)*1+lsi)*1] - src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp21;
fp21 = fp23 * fp22;
LIBINT2_REALTYPE fp25;
fp25 = inteval->PC_z[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->PA_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp26 - fp25;
LIBINT2_REALTYPE fp20;
fp20 = fp24 + fp21;
target[((hsi*15+10)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp29;
fp29 = src2[((hsi*6+0)*1+lsi)*1] - src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp30 * fp29;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PC_y[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->PA_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp33 - fp32;
LIBINT2_REALTYPE fp27;
fp27 = fp31 + fp28;
target[((hsi*15+9)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp36;
fp36 = src2[((hsi*6+5)*1+lsi)*1] - src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp35;
fp35 = fp37 * fp36;
LIBINT2_REALTYPE fp39;
fp39 = inteval->PC_z[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->PA_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp40 - fp39;
LIBINT2_REALTYPE fp34;
fp34 = fp38 + fp35;
target[((hsi*15+8)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp43;
fp43 = src2[((hsi*6+4)*1+lsi)*1] - src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp44 * fp43;
LIBINT2_REALTYPE fp46;
fp46 = inteval->PC_z[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->PA_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 - fp46;
LIBINT2_REALTYPE fp41;
fp41 = fp45 + fp42;
target[((hsi*15+7)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp49;
fp49 = inteval->PC_z[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->PA_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp50 - fp49;
target[((hsi*15+6)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp53;
fp53 = src2[((hsi*6+3)*1+lsi)*1] - src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp54 * fp53;
LIBINT2_REALTYPE fp56;
fp56 = inteval->PC_y[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->PA_y[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp57 - fp56;
LIBINT2_REALTYPE fp51;
fp51 = fp55 + fp52;
target[((hsi*15+5)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp59;
fp59 = inteval->PC_z[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->PA_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp60 - fp59;
target[((hsi*15+4)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp62;
fp62 = inteval->PC_y[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->PA_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp63 - fp62;
target[((hsi*15+3)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp66;
fp66 = src2[((hsi*6+2)*1+lsi)*1] - src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp67 * fp66;
LIBINT2_REALTYPE fp69;
fp69 = inteval->PC_z[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->PA_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp70 - fp69;
LIBINT2_REALTYPE fp64;
fp64 = fp68 + fp65;
target[((hsi*15+2)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp73;
fp73 = src2[((hsi*6+1)*1+lsi)*1] - src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp72;
fp72 = fp74 * fp73;
LIBINT2_REALTYPE fp76;
fp76 = inteval->PC_y[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->PA_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp77 - fp76;
LIBINT2_REALTYPE fp71;
fp71 = fp75 + fp72;
target[((hsi*15+1)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp80;
fp80 = src2[((hsi*6+0)*1+lsi)*1] - src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp81 * fp80;
LIBINT2_REALTYPE fp83;
fp83 = inteval->PC_x[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = inteval->PA_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp84 - fp83;
LIBINT2_REALTYPE fp78;
fp78 = fp82 + fp79;
target[((hsi*15+0)*1+lsi)*1] = fp78;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 85 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
