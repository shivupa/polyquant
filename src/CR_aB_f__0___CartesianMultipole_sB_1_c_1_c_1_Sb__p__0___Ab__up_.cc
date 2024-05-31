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
void CR_aB_f__0___CartesianMultipole_sB_1_c_1_c_1_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src2[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_z[vi], fp25, fp24);
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_y[vi] * fp52;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp49 + fp51;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src0[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_x[vi], fp77, fp81);
LIBINT2_REALTYPE fp141;
fp141 = fp78 * fp50;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp26;
target[((hsi*30+1)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_y[vi], fp53, fp52);
LIBINT2_REALTYPE fp139;
fp139 = fp78 * fp54;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp22;
target[((hsi*30+2)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->BO_x[vi] * fp74;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp73 + fp76;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_y[vi], fp46, fp45);
LIBINT2_REALTYPE fp137;
fp137 = fp75 * fp47;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp26;
target[((hsi*30+3)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->BO_x[vi], fp70, fp74);
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp135;
fp135 = fp71 * fp43;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp26;
target[((hsi*30+4)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp133;
fp133 = fp71 * fp47;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp22;
target[((hsi*30+5)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_z[vi], fp18, fp17);
LIBINT2_REALTYPE fp131;
fp131 = fp75 * fp54;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp19;
target[((hsi*30+6)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp129;
fp129 = fp71 * fp50;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp19;
target[((hsi*30+7)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp127;
fp127 = fp71 * fp54;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp15;
target[((hsi*30+8)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_y[vi], fp39, fp38);
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_x[vi] * fp67;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp66 + fp69;
LIBINT2_REALTYPE fp125;
fp125 = fp68 * fp40;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp26;
target[((hsi*30+9)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_x[vi], fp63, fp67);
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_y[vi] * fp38;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp35 + fp37;
LIBINT2_REALTYPE fp123;
fp123 = fp64 * fp36;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp26;
target[((hsi*30+10)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp121;
fp121 = fp64 * fp40;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp22;
target[((hsi*30+11)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp10);
LIBINT2_REALTYPE fp119;
fp119 = fp68 * fp54;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp12;
target[((hsi*30+12)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp117;
fp117 = fp64 * fp50;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp12;
target[((hsi*30+13)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp115;
fp115 = fp64 * fp54;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp8;
target[((hsi*30+14)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_x[vi] * fp81;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp80 + fp83;
LIBINT2_REALTYPE fp143;
fp143 = fp82 * fp54;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp26;
target[((hsi*30+0)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_x[vi], fp56, fp60);
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_y[vi] * fp31;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp111;
fp111 = fp57 * fp29;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp26;
target[((hsi*30+16)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_y[vi], fp32, fp31);
LIBINT2_REALTYPE fp109;
fp109 = fp57 * fp33;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp22;
target[((hsi*30+17)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp107;
fp107 = fp75 * fp33;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp12;
target[((hsi*30+18)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp105;
fp105 = fp71 * fp29;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp12;
target[((hsi*30+19)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp103;
fp103 = fp71 * fp33;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp8;
target[((hsi*30+20)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->BO_z[vi], fp4, fp3);
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_x[vi] * fp60;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src0[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp59 + fp62;
LIBINT2_REALTYPE fp101;
fp101 = fp61 * fp54;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp5;
target[((hsi*30+21)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp99;
fp99 = fp57 * fp50;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp5;
target[((hsi*30+22)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp97;
fp97 = fp57 * fp54;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp1;
target[((hsi*30+23)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp95;
fp95 = fp75 * fp40;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp5;
target[((hsi*30+24)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp93;
fp93 = fp71 * fp36;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp5;
target[((hsi*30+25)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp91;
fp91 = fp71 * fp40;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp1;
target[((hsi*30+26)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp89;
fp89 = fp61 * fp40;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp12;
target[((hsi*30+27)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp87;
fp87 = fp57 * fp36;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp12;
target[((hsi*30+28)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp85;
fp85 = fp57 * fp40;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp8;
target[((hsi*30+29)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp113;
fp113 = fp61 * fp33;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp26;
target[((hsi*30+15)*1+lsi)*1] = fp112;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 144 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
