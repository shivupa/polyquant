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
void CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_3_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src2[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src2[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_z[vi] * fp80;
LIBINT2_REALTYPE fp84;
fp84 = fp81 + fp85;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src2[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_z[vi] * fp79;
LIBINT2_REALTYPE fp82;
fp82 = fp80 + fp83;
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_z[vi] * fp82;
LIBINT2_REALTYPE fp88;
fp88 = fp84 + fp89;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src2[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->BO_z[vi] * fp76;
LIBINT2_REALTYPE fp77;
fp77 = fp79 + fp78;
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_z[vi] * fp77;
LIBINT2_REALTYPE fp86;
fp86 = fp82 + fp87;
LIBINT2_REALTYPE fp91;
fp91 = inteval->BO_z[vi] * fp86;
LIBINT2_REALTYPE fp90;
fp90 = fp88 + fp91;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src1[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src0[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp106 * fp98;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp90;
target[((hsi*30+1)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_z[vi] * fp88;
LIBINT2_REALTYPE fp73;
fp73 = inteval->BO_z[vi] * fp84;
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_z[vi] * fp81;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src2[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp69 + fp71;
LIBINT2_REALTYPE fp72;
fp72 = fp70 + fp73;
LIBINT2_REALTYPE fp74;
fp74 = fp72 + fp75;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src1[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp106 * fp99;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp74;
target[((hsi*30+2)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src0[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src1[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp105 * fp97;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp90;
target[((hsi*30+3)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src0[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src1[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp104 * fp96;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp90;
target[((hsi*30+4)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp157;
fp157 = fp104 * fp97;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp74;
target[((hsi*30+5)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src2[((hsi*20+18)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src2[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_z[vi] * fp57;
LIBINT2_REALTYPE fp61;
fp61 = fp58 + fp62;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_z[vi] * fp56;
LIBINT2_REALTYPE fp59;
fp59 = fp57 + fp60;
LIBINT2_REALTYPE fp66;
fp66 = inteval->BO_z[vi] * fp59;
LIBINT2_REALTYPE fp65;
fp65 = fp61 + fp66;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_z[vi] * fp53;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_z[vi] * fp54;
LIBINT2_REALTYPE fp63;
fp63 = fp59 + fp64;
LIBINT2_REALTYPE fp68;
fp68 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp67;
fp67 = fp65 + fp68;
LIBINT2_REALTYPE fp155;
fp155 = fp105 * fp99;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp67;
target[((hsi*30+6)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp153;
fp153 = fp104 * fp98;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp67;
target[((hsi*30+7)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_z[vi] * fp65;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_z[vi] * fp61;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_z[vi] * fp58;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*20+19)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp46 + fp48;
LIBINT2_REALTYPE fp49;
fp49 = fp47 + fp50;
LIBINT2_REALTYPE fp51;
fp51 = fp49 + fp52;
LIBINT2_REALTYPE fp151;
fp151 = fp104 * fp99;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp51;
target[((hsi*30+8)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src1[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src0[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp103 * fp95;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp90;
target[((hsi*30+9)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src0[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src1[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp102 * fp94;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp90;
target[((hsi*30+10)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp145;
fp145 = fp102 * fp95;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp74;
target[((hsi*30+11)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_z[vi] * fp34;
LIBINT2_REALTYPE fp38;
fp38 = fp35 + fp39;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_z[vi] * fp33;
LIBINT2_REALTYPE fp36;
fp36 = fp34 + fp37;
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp42;
fp42 = fp38 + fp43;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src2[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp30;
LIBINT2_REALTYPE fp31;
fp31 = fp33 + fp32;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp31;
LIBINT2_REALTYPE fp40;
fp40 = fp36 + fp41;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_z[vi] * fp40;
LIBINT2_REALTYPE fp44;
fp44 = fp42 + fp45;
LIBINT2_REALTYPE fp143;
fp143 = fp103 * fp99;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp44;
target[((hsi*30+12)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp141;
fp141 = fp102 * fp98;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp44;
target[((hsi*30+13)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_z[vi] * fp42;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp23 + fp25;
LIBINT2_REALTYPE fp26;
fp26 = fp24 + fp27;
LIBINT2_REALTYPE fp28;
fp28 = fp26 + fp29;
LIBINT2_REALTYPE fp139;
fp139 = fp102 * fp99;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp28;
target[((hsi*30+14)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src0[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp107 * fp99;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp90;
target[((hsi*30+0)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src0[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src1[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp100 * fp92;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp90;
target[((hsi*30+16)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src1[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp100 * fp93;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp74;
target[((hsi*30+17)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp131;
fp131 = fp105 * fp93;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp44;
target[((hsi*30+18)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp129;
fp129 = fp104 * fp92;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp44;
target[((hsi*30+19)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp127;
fp127 = fp104 * fp93;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp28;
target[((hsi*30+20)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp15;
fp15 = fp12 + fp16;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp13;
fp13 = fp11 + fp14;
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp19;
fp19 = fp15 + fp20;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp7;
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp17;
fp17 = fp13 + fp18;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp21;
fp21 = fp19 + fp22;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src0[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp101 * fp99;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp21;
target[((hsi*30+21)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp123;
fp123 = fp100 * fp98;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp21;
target[((hsi*30+22)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp15;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp5;
fp5 = fp3 + fp6;
LIBINT2_REALTYPE fp121;
fp121 = fp100 * fp99;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp5;
target[((hsi*30+23)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp119;
fp119 = fp105 * fp95;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp21;
target[((hsi*30+24)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp117;
fp117 = fp104 * fp94;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp21;
target[((hsi*30+25)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp115;
fp115 = fp104 * fp95;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp5;
target[((hsi*30+26)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp113;
fp113 = fp101 * fp95;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp44;
target[((hsi*30+27)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp111;
fp111 = fp100 * fp94;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp44;
target[((hsi*30+28)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp109;
fp109 = fp100 * fp95;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp28;
target[((hsi*30+29)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp137;
fp137 = fp101 * fp93;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp90;
target[((hsi*30+15)*1+lsi)*1] = fp136;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 168 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
