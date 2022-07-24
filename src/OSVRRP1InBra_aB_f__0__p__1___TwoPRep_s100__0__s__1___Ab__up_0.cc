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
void OSVRRP1InBra_aB_f__0__p__1___TwoPRep_s100__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp133;
fp133 = inteval->WQ_y[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = inteval->QC_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp134 + fp133;
target[((hsi*30+1)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp130;
fp130 = inteval->WQ_z[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->QC_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp131 + fp130;
target[((hsi*30+2)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp137;
fp137 = 1.0000000000000000e+00 * inteval->alpha2_over_zetapluseta[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp137 * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->WQ_x[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = inteval->QC_x[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp128 + fp127;
LIBINT2_REALTYPE fp124;
fp124 = fp126 + fp125;
target[((hsi*30+3)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp140;
fp140 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp140 * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->WQ_y[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->QC_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp123 + fp122;
LIBINT2_REALTYPE fp119;
fp119 = fp121 + fp120;
target[((hsi*30+4)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp117;
fp117 = inteval->WQ_z[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = inteval->QC_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp118 + fp117;
target[((hsi*30+5)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp112;
fp112 = fp137 * src3[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = inteval->WQ_x[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->QC_x[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp115 + fp114;
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
target[((hsi*30+6)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp109;
fp109 = inteval->WQ_y[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->QC_y[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
target[((hsi*30+7)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp104;
fp104 = fp140 * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->WQ_z[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->QC_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
LIBINT2_REALTYPE fp103;
fp103 = fp105 + fp104;
target[((hsi*30+8)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp96;
fp96 = fp137 * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp98;
fp98 = fp99 * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->WQ_x[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->QC_x[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
LIBINT2_REALTYPE fp97;
fp97 = fp100 + fp98;
LIBINT2_REALTYPE fp95;
fp95 = fp97 + fp96;
target[((hsi*30+9)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp90;
fp90 = fp91 * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->WQ_y[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->QC_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp94 + fp93;
LIBINT2_REALTYPE fp89;
fp89 = fp92 + fp90;
target[((hsi*30+10)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp87;
fp87 = inteval->WQ_z[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->QC_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp88 + fp87;
target[((hsi*30+11)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp80;
fp80 = fp137 * src3[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp99 * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = inteval->WQ_x[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->QC_x[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp85 + fp84;
LIBINT2_REALTYPE fp81;
fp81 = fp83 + fp82;
LIBINT2_REALTYPE fp79;
fp79 = fp81 + fp80;
target[((hsi*30+12)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WQ_y[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->QC_y[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
target[((hsi*30+13)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp74;
fp74 = inteval->WQ_z[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->QC_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp75 + fp74;
LIBINT2_REALTYPE fp72;
fp72 = fp73 + fp90;
target[((hsi*30+14)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp140 * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = inteval->WQ_x[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->QC_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp143 + fp142;
LIBINT2_REALTYPE fp138;
fp138 = fp141 + fp139;
LIBINT2_REALTYPE fp135;
fp135 = fp138 + fp136;
target[((hsi*30+0)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp63;
fp63 = inteval->WQ_y[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->QC_y[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
LIBINT2_REALTYPE fp61;
fp61 = fp62 + fp98;
target[((hsi*30+16)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WQ_z[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->QC_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
target[((hsi*30+17)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp54;
fp54 = fp137 * src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_x[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->QC_x[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
LIBINT2_REALTYPE fp53;
fp53 = fp55 + fp54;
target[((hsi*30+18)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp49;
fp49 = fp99 * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->WQ_y[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->QC_y[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
target[((hsi*30+19)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp68;
fp68 = fp91 * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->WQ_z[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->QC_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
LIBINT2_REALTYPE fp44;
fp44 = fp45 + fp68;
target[((hsi*30+20)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp38;
fp38 = fp137 * src3[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp91 * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->WQ_x[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->QC_x[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp43 + fp42;
LIBINT2_REALTYPE fp39;
fp39 = fp41 + fp40;
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
target[((hsi*30+21)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp35;
fp35 = inteval->WQ_y[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->QC_y[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
target[((hsi*30+22)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp32;
fp32 = inteval->WQ_z[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->QC_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp33 + fp32;
LIBINT2_REALTYPE fp30;
fp30 = fp31 + fp82;
target[((hsi*30+23)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp26;
fp26 = fp137 * src3[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->WQ_x[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->QC_x[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
LIBINT2_REALTYPE fp25;
fp25 = fp27 + fp26;
target[((hsi*30+24)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WQ_y[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->QC_y[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
LIBINT2_REALTYPE fp21;
fp21 = fp22 + fp40;
target[((hsi*30+25)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp19;
fp19 = inteval->WQ_z[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->QC_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
LIBINT2_REALTYPE fp17;
fp17 = fp18 + fp49;
target[((hsi*30+26)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp11;
fp11 = fp137 * src3[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp91 * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->WQ_x[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->QC_x[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
LIBINT2_REALTYPE fp12;
fp12 = fp14 + fp13;
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*30+27)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp6;
fp6 = fp91 * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->WQ_y[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->QC_y[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 + fp8;
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
target[((hsi*30+28)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp1;
fp1 = fp91 * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->WQ_z[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->QC_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*30+29)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp66;
fp66 = fp137 * src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->WQ_x[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->QC_x[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
LIBINT2_REALTYPE fp65;
fp65 = fp67 + fp66;
target[((hsi*30+15)*1+lsi)*1] = fp65;
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
