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
void CR_aB_p__0___CartesianMultipole_sB_0_c_3_c_0_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src0[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src1[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_y[vi] * fp53;
LIBINT2_REALTYPE fp56;
fp56 = fp54 + fp57;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_y[vi] * fp71;
LIBINT2_REALTYPE fp51;
fp51 = fp53 + fp52;
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_y[vi] * fp51;
LIBINT2_REALTYPE fp60;
fp60 = fp56 + fp61;
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_y[vi] * fp60;
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_y[vi] * fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_y[vi] * fp54;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp55 + fp59;
LIBINT2_REALTYPE fp62;
fp62 = fp58 + fp63;
LIBINT2_REALTYPE fp64;
fp64 = fp62 + fp65;
LIBINT2_REALTYPE fp147;
fp147 = fp88 * fp64;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp7;
target[((hsi*30+1)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_y[vi] * fp70;
LIBINT2_REALTYPE fp74;
fp74 = fp71 + fp75;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->BO_y[vi] * fp69;
LIBINT2_REALTYPE fp72;
fp72 = fp70 + fp73;
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_y[vi] * fp72;
LIBINT2_REALTYPE fp78;
fp78 = fp74 + fp79;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_y[vi] * fp66;
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_y[vi] * fp67;
LIBINT2_REALTYPE fp76;
fp76 = fp72 + fp77;
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_y[vi] * fp76;
LIBINT2_REALTYPE fp80;
fp80 = fp78 + fp81;
LIBINT2_REALTYPE fp145;
fp145 = fp88 * fp80;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp6;
target[((hsi*30+2)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_y[vi] * fp74;
LIBINT2_REALTYPE fp47;
fp47 = fp51 + fp48;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_y[vi] * fp78;
LIBINT2_REALTYPE fp49;
fp49 = fp47 + fp50;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp87 * fp49;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp7;
target[((hsi*30+3)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp87 * fp80;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp5;
target[((hsi*30+4)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_y[vi] * fp47;
LIBINT2_REALTYPE fp45;
fp45 = fp60 + fp46;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src0[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp86 * fp45;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp7;
target[((hsi*30+5)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp137;
fp137 = fp88 * fp45;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp5;
target[((hsi*30+6)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp86 * fp80;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp4;
target[((hsi*30+7)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp133;
fp133 = fp88 * fp49;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp4;
target[((hsi*30+8)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp131;
fp131 = fp86 * fp49;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp5;
target[((hsi*30+9)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_y[vi] * fp33;
LIBINT2_REALTYPE fp37;
fp37 = fp34 + fp38;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_y[vi] * fp32;
LIBINT2_REALTYPE fp35;
fp35 = fp33 + fp36;
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_y[vi] * fp35;
LIBINT2_REALTYPE fp41;
fp41 = fp37 + fp42;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_y[vi] * fp29;
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_y[vi] * fp30;
LIBINT2_REALTYPE fp39;
fp39 = fp35 + fp40;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_y[vi] * fp39;
LIBINT2_REALTYPE fp43;
fp43 = fp41 + fp44;
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src0[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp85 * fp43;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp7;
target[((hsi*30+10)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src0[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*14+12)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_y[vi] * fp16;
LIBINT2_REALTYPE fp19;
fp19 = fp17 + fp20;
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_y[vi] * fp34;
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp14;
LIBINT2_REALTYPE fp23;
fp23 = fp19 + fp24;
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_y[vi] * fp23;
LIBINT2_REALTYPE fp26;
fp26 = inteval->BO_y[vi] * fp19;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_y[vi] * fp17;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*14+13)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp18 + fp22;
LIBINT2_REALTYPE fp25;
fp25 = fp21 + fp26;
LIBINT2_REALTYPE fp27;
fp27 = fp25 + fp28;
LIBINT2_REALTYPE fp127;
fp127 = fp84 * fp27;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp7;
target[((hsi*30+11)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp125;
fp125 = fp84 * fp43;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp6;
target[((hsi*30+12)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src0[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_y[vi] * fp37;
LIBINT2_REALTYPE fp10;
fp10 = fp14 + fp11;
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_y[vi] * fp41;
LIBINT2_REALTYPE fp12;
fp12 = fp10 + fp13;
LIBINT2_REALTYPE fp123;
fp123 = fp83 * fp12;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp7;
target[((hsi*30+13)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp121;
fp121 = fp83 * fp43;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp5;
target[((hsi*30+14)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src0[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp89 * fp80;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp7;
target[((hsi*30+0)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_y[vi] * fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp23 + fp9;
LIBINT2_REALTYPE fp117;
fp117 = fp84 * fp8;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp5;
target[((hsi*30+16)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src0[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp82 * fp43;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp4;
target[((hsi*30+17)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp113;
fp113 = fp84 * fp12;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp4;
target[((hsi*30+18)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp111;
fp111 = fp82 * fp12;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp5;
target[((hsi*30+19)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp85 * fp80;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp3;
target[((hsi*30+20)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp107;
fp107 = fp84 * fp64;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp3;
target[((hsi*30+21)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp84 * fp80;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp2;
target[((hsi*30+22)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp103;
fp103 = fp83 * fp49;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp3;
target[((hsi*30+23)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp83 * fp80;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp1;
target[((hsi*30+24)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp99;
fp99 = fp82 * fp45;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp3;
target[((hsi*30+25)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp97;
fp97 = fp84 * fp45;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp1;
target[((hsi*30+26)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp82 * fp80;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp0;
target[((hsi*30+27)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp93;
fp93 = fp84 * fp49;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp0;
target[((hsi*30+28)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp91;
fp91 = fp82 * fp49;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp1;
target[((hsi*30+29)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp119;
fp119 = fp82 * fp8;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp7;
target[((hsi*30+15)*1+lsi)*1] = fp118;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 150 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
