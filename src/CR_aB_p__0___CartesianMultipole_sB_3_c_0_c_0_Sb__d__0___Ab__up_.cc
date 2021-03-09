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
void CR_aB_p__0___CartesianMultipole_sB_3_c_0_c_0_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src0[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_x[vi] * fp56;
LIBINT2_REALTYPE fp57;
fp57 = fp59 + fp58;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_x[vi] * fp47;
LIBINT2_REALTYPE fp48;
fp48 = fp56 + fp49;
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_x[vi] * fp48;
LIBINT2_REALTYPE fp52;
fp52 = fp57 + fp53;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src0[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_x[vi] * fp44;
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_x[vi] * fp45;
LIBINT2_REALTYPE fp50;
fp50 = fp48 + fp51;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_x[vi] * fp50;
LIBINT2_REALTYPE fp54;
fp54 = fp52 + fp55;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp54 * fp10;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp5;
target[((hsi*18+1)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp54 * fp11;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp4;
target[((hsi*18+2)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_x[vi] * fp59;
LIBINT2_REALTYPE fp62;
fp62 = fp60 + fp63;
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_x[vi] * fp57;
LIBINT2_REALTYPE fp66;
fp66 = fp62 + fp67;
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_x[vi] * fp52;
LIBINT2_REALTYPE fp42;
fp42 = fp66 + fp43;
LIBINT2_REALTYPE fp101;
fp101 = fp42 * fp9;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp5;
target[((hsi*18+3)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp42 * fp11;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp3;
target[((hsi*18+4)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp97;
fp97 = fp54 * fp9;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp3;
target[((hsi*18+5)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_x[vi] * fp29;
LIBINT2_REALTYPE fp32;
fp32 = fp30 + fp33;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_x[vi] * fp26;
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_x[vi] * fp27;
LIBINT2_REALTYPE fp36;
fp36 = fp32 + fp37;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_x[vi] * fp36;
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_x[vi] * fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_x[vi] * fp30;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp31 + fp35;
LIBINT2_REALTYPE fp38;
fp38 = fp34 + fp39;
LIBINT2_REALTYPE fp40;
fp40 = fp38 + fp41;
LIBINT2_REALTYPE fp95;
fp95 = fp40 * fp8;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp5;
target[((hsi*18+6)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_x[vi] * fp17;
LIBINT2_REALTYPE fp18;
fp18 = fp26 + fp19;
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_x[vi] * fp18;
LIBINT2_REALTYPE fp22;
fp22 = fp27 + fp23;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_x[vi] * fp14;
LIBINT2_REALTYPE fp15;
fp15 = fp17 + fp16;
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_x[vi] * fp15;
LIBINT2_REALTYPE fp20;
fp20 = fp18 + fp21;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_x[vi] * fp20;
LIBINT2_REALTYPE fp24;
fp24 = fp22 + fp25;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp24 * fp7;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp5;
target[((hsi*18+7)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp91;
fp91 = fp24 * fp8;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp4;
target[((hsi*18+8)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_x[vi] * fp66;
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_x[vi] * fp62;
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_x[vi] * fp60;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*12+11)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp61 + fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp64 + fp69;
LIBINT2_REALTYPE fp70;
fp70 = fp68 + fp71;
LIBINT2_REALTYPE fp107;
fp107 = fp70 * fp11;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp5;
target[((hsi*18+0)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_x[vi] * fp22;
LIBINT2_REALTYPE fp12;
fp12 = fp36 + fp13;
LIBINT2_REALTYPE fp87;
fp87 = fp12 * fp8;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp3;
target[((hsi*18+10)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp24 * fp6;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp3;
target[((hsi*18+11)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp40 * fp11;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp2;
target[((hsi*18+12)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp81;
fp81 = fp24 * fp10;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp2;
target[((hsi*18+13)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp24 * fp11;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp1;
target[((hsi*18+14)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp77;
fp77 = fp12 * fp9;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp2;
target[((hsi*18+15)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp12 * fp11;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp0;
target[((hsi*18+16)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp73;
fp73 = fp24 * fp9;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp0;
target[((hsi*18+17)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp89;
fp89 = fp12 * fp6;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp5;
target[((hsi*18+9)*1+lsi)*1] = fp88;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 108 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
