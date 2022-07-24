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
void CR_aB_h__0___CartesianMultipole_sB_0_c_2_c_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp20;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_y[vi] * fp60;
LIBINT2_REALTYPE fp63;
fp63 = fp61 + fp64;
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_y[vi] * fp63;
LIBINT2_REALTYPE fp66;
fp66 = inteval->BO_y[vi] * fp61;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp62 + fp66;
LIBINT2_REALTYPE fp67;
fp67 = fp65 + fp68;
LIBINT2_REALTYPE fp123;
fp123 = fp82 * fp67;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp22;
target[((hsi*21+1)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp17 + fp19;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->BO_y[vi] * fp69;
LIBINT2_REALTYPE fp72;
fp72 = fp70 + fp73;
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_y[vi] * fp72;
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_y[vi] * fp70;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src1[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp71 + fp75;
LIBINT2_REALTYPE fp76;
fp76 = fp74 + fp77;
LIBINT2_REALTYPE fp121;
fp121 = fp82 * fp76;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp18;
target[((hsi*21+2)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src1[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_y[vi] * fp51;
LIBINT2_REALTYPE fp54;
fp54 = fp52 + fp55;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_y[vi] * fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_y[vi] * fp52;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp53 + fp57;
LIBINT2_REALTYPE fp58;
fp58 = fp56 + fp59;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src0[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp81 * fp58;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp22;
target[((hsi*21+3)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp13 + fp15;
LIBINT2_REALTYPE fp117;
fp117 = fp81 * fp76;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp14;
target[((hsi*21+4)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_y[vi] * fp42;
LIBINT2_REALTYPE fp45;
fp45 = fp43 + fp46;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp44 + fp48;
LIBINT2_REALTYPE fp49;
fp49 = fp47 + fp50;
LIBINT2_REALTYPE fp115;
fp115 = fp80 * fp49;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp22;
target[((hsi*21+5)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp113;
fp113 = fp82 * fp49;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp14;
target[((hsi*21+6)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp9 + fp11;
LIBINT2_REALTYPE fp111;
fp111 = fp80 * fp76;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp10;
target[((hsi*21+7)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp109;
fp109 = fp82 * fp58;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp10;
target[((hsi*21+8)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_y[vi] * fp33;
LIBINT2_REALTYPE fp36;
fp36 = fp34 + fp37;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_y[vi] * fp36;
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_y[vi] * fp34;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp35 + fp39;
LIBINT2_REALTYPE fp40;
fp40 = fp38 + fp41;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp79 * fp40;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp22;
target[((hsi*21+9)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src0[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp83 * fp76;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp22;
target[((hsi*21+0)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp103;
fp103 = fp79 * fp58;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp14;
target[((hsi*21+11)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_y[vi] * fp24;
LIBINT2_REALTYPE fp27;
fp27 = fp25 + fp28;
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_y[vi] * fp27;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_y[vi] * fp25;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp26 + fp30;
LIBINT2_REALTYPE fp31;
fp31 = fp29 + fp32;
LIBINT2_REALTYPE fp101;
fp101 = fp78 * fp31;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp22;
target[((hsi*21+12)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp5 + fp7;
LIBINT2_REALTYPE fp99;
fp99 = fp82 * fp31;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp6;
target[((hsi*21+13)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp97;
fp97 = fp80 * fp31;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp14;
target[((hsi*21+14)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->BO_z[vi] * fp0;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp1 + fp3;
LIBINT2_REALTYPE fp95;
fp95 = fp78 * fp76;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp2;
target[((hsi*21+15)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp93;
fp93 = fp82 * fp40;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp2;
target[((hsi*21+16)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp91;
fp91 = fp80 * fp58;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp2;
target[((hsi*21+17)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp89;
fp89 = fp78 * fp40;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp14;
target[((hsi*21+18)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp87;
fp87 = fp78 * fp58;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp6;
target[((hsi*21+19)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp85;
fp85 = fp80 * fp40;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp6;
target[((hsi*21+20)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp105;
fp105 = fp79 * fp76;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp6;
target[((hsi*21+10)*1+lsi)*1] = fp104;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 126 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
