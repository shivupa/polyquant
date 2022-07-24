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
void CR_aB_d__0___CartesianMultipole_sB_2_c_0_c_1_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp19;
fp19 = fp18 + fp20;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_x[vi] * fp60;
LIBINT2_REALTYPE fp63;
fp63 = fp61 + fp64;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_x[vi] * fp55;
LIBINT2_REALTYPE fp56;
fp56 = fp60 + fp57;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_x[vi] * fp56;
LIBINT2_REALTYPE fp58;
fp58 = fp63 + fp59;
LIBINT2_REALTYPE fp102;
fp102 = fp58 * fp25;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp19;
target[((hsi*18+1)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp18;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp58 * fp26;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp15;
target[((hsi*18+2)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_x[vi] * fp46;
LIBINT2_REALTYPE fp49;
fp49 = fp47 + fp50;
LIBINT2_REALTYPE fp54;
fp54 = inteval->BO_x[vi] * fp49;
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_x[vi] * fp47;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp48 + fp52;
LIBINT2_REALTYPE fp53;
fp53 = fp51 + fp54;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp53 * fp24;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp19;
target[((hsi*18+3)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_x[vi] * fp41;
LIBINT2_REALTYPE fp42;
fp42 = fp46 + fp43;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_x[vi] * fp42;
LIBINT2_REALTYPE fp44;
fp44 = fp49 + fp45;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp44 * fp23;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp19;
target[((hsi*18+4)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp94;
fp94 = fp44 * fp24;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp15;
target[((hsi*18+5)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp12;
fp12 = fp11 + fp13;
LIBINT2_REALTYPE fp92;
fp92 = fp53 * fp26;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp12;
target[((hsi*18+6)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp90;
fp90 = fp44 * fp25;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp12;
target[((hsi*18+7)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp88;
fp88 = fp44 * fp26;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp8;
target[((hsi*18+8)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_x[vi] * fp63;
LIBINT2_REALTYPE fp66;
fp66 = inteval->BO_x[vi] * fp61;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp62 + fp66;
LIBINT2_REALTYPE fp67;
fp67 = fp65 + fp68;
LIBINT2_REALTYPE fp104;
fp104 = fp67 * fp26;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp19;
target[((hsi*18+0)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_x[vi] * fp32;
LIBINT2_REALTYPE fp35;
fp35 = fp33 + fp36;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_x[vi] * fp27;
LIBINT2_REALTYPE fp28;
fp28 = fp32 + fp29;
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_x[vi] * fp28;
LIBINT2_REALTYPE fp30;
fp30 = fp35 + fp31;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp30 * fp21;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp19;
target[((hsi*18+10)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp30 * fp22;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp15;
target[((hsi*18+11)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp5;
fp5 = fp4 + fp6;
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_x[vi] * fp35;
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_x[vi] * fp33;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp34 + fp38;
LIBINT2_REALTYPE fp39;
fp39 = fp37 + fp40;
LIBINT2_REALTYPE fp80;
fp80 = fp39 * fp26;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp5;
target[((hsi*18+12)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp78;
fp78 = fp30 * fp25;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp5;
target[((hsi*18+13)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp76;
fp76 = fp30 * fp26;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp1;
target[((hsi*18+14)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp74;
fp74 = fp53 * fp22;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp5;
target[((hsi*18+15)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp72;
fp72 = fp44 * fp21;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp5;
target[((hsi*18+16)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp70;
fp70 = fp44 * fp22;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp1;
target[((hsi*18+17)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp86;
fp86 = fp39 * fp22;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp19;
target[((hsi*18+9)*1+lsi)*1] = fp85;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 105 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
