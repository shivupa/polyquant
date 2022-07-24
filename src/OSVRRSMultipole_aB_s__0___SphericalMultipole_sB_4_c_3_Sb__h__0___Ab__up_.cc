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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp109;
fp109 = 5.0000000000000000e-01 * src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = 4.0000000000000000e+00 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + fp111;
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
LIBINT2_REALTYPE fp107;
fp107 = inteval->oo2z[vi] * fp108;
LIBINT2_REALTYPE fp112;
fp112 = inteval->PB_y[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp112 + fp107;
target[((hsi*21+1)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp104;
fp104 = 4.0000000000000000e+00 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + fp104;
LIBINT2_REALTYPE fp102;
fp102 = fp103 + src4[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->oo2z[vi] * fp102;
LIBINT2_REALTYPE fp105;
fp105 = inteval->PB_z[vi] * src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp105 + fp101;
target[((hsi*21+2)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp98;
fp98 = 5.0000000000000000e-01 * src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + fp98;
LIBINT2_REALTYPE fp96;
fp96 = inteval->oo2z[vi] * fp97;
LIBINT2_REALTYPE fp99;
fp99 = inteval->PB_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp99 + fp96;
target[((hsi*21+3)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src4[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp94;
fp94 = inteval->PB_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp94 + fp92;
target[((hsi*21+4)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp87;
fp87 = 5.0000000000000000e-01 * src3[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 3.0000000000000000e+00 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + fp89;
LIBINT2_REALTYPE fp86;
fp86 = fp88 + fp87;
LIBINT2_REALTYPE fp85;
fp85 = inteval->oo2z[vi] * fp86;
LIBINT2_REALTYPE fp90;
fp90 = inteval->PB_y[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp90 + fp85;
target[((hsi*21+5)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src4[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->oo2z[vi] * fp82;
LIBINT2_REALTYPE fp83;
fp83 = inteval->PB_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp83 + fp81;
target[((hsi*21+6)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp78;
fp78 = 3.0000000000000000e+00 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + fp78;
LIBINT2_REALTYPE fp76;
fp76 = fp77 + src4[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->oo2z[vi] * fp76;
LIBINT2_REALTYPE fp79;
fp79 = inteval->PB_z[vi] * src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp79 + fp75;
target[((hsi*21+7)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp72;
fp72 = 3.0000000000000000e+00 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + fp72;
LIBINT2_REALTYPE fp70;
fp70 = fp71 + src4[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp73;
fp73 = inteval->PB_z[vi] * src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp73 + fp69;
target[((hsi*21+8)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp64;
fp64 = 5.0000000000000000e-01 * src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 1.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + fp66;
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PB_y[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp67 + fp62;
target[((hsi*21+9)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp116;
fp116 = 5.0000000000000000e-01 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 4.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + fp118;
LIBINT2_REALTYPE fp115;
fp115 = fp117 - fp116;
LIBINT2_REALTYPE fp114;
fp114 = inteval->oo2z[vi] * fp115;
LIBINT2_REALTYPE fp119;
fp119 = inteval->PB_x[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp119 + fp114;
target[((hsi*21+0)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src4[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PB_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp54 + fp52;
target[((hsi*21+11)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp47;
fp47 = 5.0000000000000000e-01 * src3[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 2.0000000000000000e+00 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + fp49;
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
LIBINT2_REALTYPE fp45;
fp45 = inteval->oo2z[vi] * fp46;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PB_y[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp50 + fp45;
target[((hsi*21+12)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp42;
fp42 = 1.0000000000000000e+00 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + fp42;
LIBINT2_REALTYPE fp40;
fp40 = fp41 + src4[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->oo2z[vi] * fp40;
LIBINT2_REALTYPE fp43;
fp43 = inteval->PB_z[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp43 + fp39;
target[((hsi*21+13)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src4[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->oo2z[vi] * fp36;
LIBINT2_REALTYPE fp37;
fp37 = inteval->PB_z[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp37 + fp35;
target[((hsi*21+14)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp32;
fp32 = 2.0000000000000000e+00 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + fp32;
LIBINT2_REALTYPE fp30;
fp30 = fp31 + src4[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->PB_z[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp33 + fp29;
target[((hsi*21+15)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp26;
fp26 = 2.0000000000000000e+00 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + fp26;
LIBINT2_REALTYPE fp24;
fp24 = fp25 + src4[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->oo2z[vi] * fp24;
LIBINT2_REALTYPE fp27;
fp27 = inteval->PB_z[vi] * src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp27 + fp23;
target[((hsi*21+16)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp20;
fp20 = 2.0000000000000000e+00 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + fp20;
LIBINT2_REALTYPE fp18;
fp18 = fp19 + src4[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->oo2z[vi] * fp18;
LIBINT2_REALTYPE fp21;
fp21 = inteval->PB_z[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp21 + fp17;
target[((hsi*21+17)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src4[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp15;
fp15 = inteval->PB_z[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp15 + fp13;
target[((hsi*21+18)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = 1.0000000000000000e+00 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src4[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PB_z[vi] * src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*21+19)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp4;
fp4 = 1.0000000000000000e+00 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src4[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PB_z[vi] * src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp59;
fp59 = 1.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + fp59;
LIBINT2_REALTYPE fp57;
fp57 = fp58 + src4[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PB_z[vi] * src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp60 + fp56;
target[((hsi*21+10)*1+lsi)*1] = fp55;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 120 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
