/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
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
void CR_aB_d__0___CartesianMultipole_sB_0_c_2_c_1_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_z[vi], fp18, fp17);
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_y[vi], fp55, fp54);
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_y[vi] * fp57;
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_y[vi] * fp54;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp49 + fp51;
LIBINT2_REALTYPE fp52;
fp52 = fp50 + fp53;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp67 * fp52;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp19;
target[((hsi*18+1)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_y[vi], fp56, fp55);
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_y[vi], fp59, fp57);
LIBINT2_REALTYPE fp100;
fp100 = fp67 * fp61;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp15;
target[((hsi*18+2)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_y[vi], fp41, fp40);
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_y[vi], fp42, fp41);
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_y[vi], fp45, fp43);
LIBINT2_REALTYPE fp98;
fp98 = fp66 * fp47;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp19;
target[((hsi*18+3)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_y[vi] * fp40;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp35 + fp37;
LIBINT2_REALTYPE fp38;
fp38 = fp36 + fp39;
LIBINT2_REALTYPE fp96;
fp96 = fp65 * fp38;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp19;
target[((hsi*18+4)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp94;
fp94 = fp65 * fp47;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp15;
target[((hsi*18+5)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp10);
LIBINT2_REALTYPE fp92;
fp92 = fp66 * fp61;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp12;
target[((hsi*18+6)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp90;
fp90 = fp65 * fp52;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp12;
target[((hsi*18+7)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp88;
fp88 = fp65 * fp61;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp8;
target[((hsi*18+8)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp68 * fp61;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp19;
target[((hsi*18+0)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_y[vi], fp27, fp26);
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_y[vi] * fp29;
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_y[vi] * fp26;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp24;
fp24 = fp22 + fp25;
LIBINT2_REALTYPE fp84;
fp84 = fp63 * fp24;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp19;
target[((hsi*18+10)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_y[vi], fp28, fp27);
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_y[vi], fp31, fp29);
LIBINT2_REALTYPE fp82;
fp82 = fp63 * fp33;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp15;
target[((hsi*18+11)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->BO_z[vi], fp4, fp3);
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp64 * fp61;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp5;
target[((hsi*18+12)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp78;
fp78 = fp63 * fp52;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp5;
target[((hsi*18+13)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp76;
fp76 = fp63 * fp61;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp1;
target[((hsi*18+14)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp74;
fp74 = fp66 * fp33;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp5;
target[((hsi*18+15)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp72;
fp72 = fp65 * fp24;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp5;
target[((hsi*18+16)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp70;
fp70 = fp65 * fp33;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp1;
target[((hsi*18+17)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp86;
fp86 = fp64 * fp33;
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
