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
void CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_3_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_z[vi], fp56, fp53);
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_z[vi], fp57, fp56);
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_z[vi], fp59, fp54);
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_z[vi], fp58, fp57);
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->BO_z[vi], fp61, fp59);
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->BO_z[vi], fp65, fp63);
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp79 * fp73;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp67;
target[((hsi*18+1)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_z[vi] * fp54;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_z[vi] * fp53;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp46 + fp48;
LIBINT2_REALTYPE fp49;
fp49 = fp47 + fp50;
LIBINT2_REALTYPE fp51;
fp51 = fp49 + fp52;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp79 * fp74;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp51;
target[((hsi*18+2)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp78 * fp72;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp67;
target[((hsi*18+3)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp77 * fp71;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp67;
target[((hsi*18+4)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp106;
fp106 = fp77 * fp72;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp51;
target[((hsi*18+5)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src2[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_z[vi], fp33, fp30);
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_z[vi], fp34, fp33);
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_z[vi], fp36, fp31);
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp35, fp34);
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_z[vi], fp38, fp36);
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_z[vi], fp42, fp40);
LIBINT2_REALTYPE fp104;
fp104 = fp78 * fp74;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp44;
target[((hsi*18+6)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp102;
fp102 = fp77 * fp73;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp44;
target[((hsi*18+7)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_z[vi] * fp40;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp31;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp30;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp23 + fp25;
LIBINT2_REALTYPE fp26;
fp26 = fp24 + fp27;
LIBINT2_REALTYPE fp28;
fp28 = fp26 + fp29;
LIBINT2_REALTYPE fp100;
fp100 = fp77 * fp74;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp28;
target[((hsi*18+8)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp80 * fp74;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp67;
target[((hsi*18+0)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp75 * fp69;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp67;
target[((hsi*18+10)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp75 * fp70;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp51;
target[((hsi*18+11)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp10, fp7);
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp10);
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_z[vi], fp13, fp8);
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->BO_z[vi], fp12, fp11);
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_z[vi], fp15, fp13);
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->BO_z[vi], fp19, fp17);
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp76 * fp74;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp21;
target[((hsi*18+12)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp90;
fp90 = fp75 * fp73;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp21;
target[((hsi*18+13)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp7;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp5;
fp5 = fp3 + fp6;
LIBINT2_REALTYPE fp88;
fp88 = fp75 * fp74;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp5;
target[((hsi*18+14)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp86;
fp86 = fp78 * fp70;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp21;
target[((hsi*18+15)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp84;
fp84 = fp77 * fp69;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp21;
target[((hsi*18+16)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp82;
fp82 = fp77 * fp70;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp5;
target[((hsi*18+17)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp98;
fp98 = fp76 * fp70;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp67;
target[((hsi*18+9)*1+lsi)*1] = fp97;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 117 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
