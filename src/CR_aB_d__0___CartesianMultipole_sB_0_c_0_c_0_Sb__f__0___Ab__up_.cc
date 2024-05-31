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
void CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp28 * fp21;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp5;
target[((hsi*60+29)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp30 * fp21;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp4;
target[((hsi*60+28)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp28 * fp23;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp4;
target[((hsi*60+27)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp30 * fp20;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp5;
target[((hsi*60+26)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp28 * fp20;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp7;
target[((hsi*60+25)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp29 * fp23;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp5;
target[((hsi*60+24)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp29 * fp21;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp7;
target[((hsi*60+23)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*12+11)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp30 * fp23;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp6;
target[((hsi*60+22)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp30 * fp22;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp7;
target[((hsi*60+21)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp31 * fp23;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp7;
target[((hsi*60+20)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp28 * fp17;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp9;
target[((hsi*60+19)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp30 * fp17;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp8;
target[((hsi*60+18)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp28 * fp19;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp8;
target[((hsi*60+17)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp30 * fp16;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp9;
target[((hsi*60+16)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*12+11)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp35 * fp23;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp11;
target[((hsi*60+0)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp127;
fp127 = fp29 * fp19;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp9;
target[((hsi*60+14)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp29 * fp17;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp11;
target[((hsi*60+13)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp30 * fp19;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp10;
target[((hsi*60+12)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*12+11)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp30 * fp18;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp11;
target[((hsi*60+11)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp135;
fp135 = fp31 * fp19;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp11;
target[((hsi*60+10)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp32 * fp21;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp9;
target[((hsi*60+9)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp34 * fp21;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp8;
target[((hsi*60+8)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp141;
fp141 = fp32 * fp23;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp8;
target[((hsi*60+7)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = fp34 * fp20;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp9;
target[((hsi*60+6)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp32 * fp20;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp11;
target[((hsi*60+5)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp33 * fp23;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp9;
target[((hsi*60+4)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp33 * fp21;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp11;
target[((hsi*60+3)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp34 * fp23;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp10;
target[((hsi*60+2)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp34 * fp22;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp11;
target[((hsi*60+1)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp125;
fp125 = fp28 * fp16;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp11;
target[((hsi*60+15)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp28 * fp13;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp1;
target[((hsi*60+59)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp30 * fp13;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp0;
target[((hsi*60+58)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp28 * fp15;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp0;
target[((hsi*60+57)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp30 * fp12;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp1;
target[((hsi*60+56)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp28 * fp12;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp3;
target[((hsi*60+55)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
fp47 = fp29 * fp15;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp1;
target[((hsi*60+54)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
fp49 = fp29 * fp13;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp3;
target[((hsi*60+53)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp30 * fp15;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp2;
target[((hsi*60+52)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp30 * fp14;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp3;
target[((hsi*60+51)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
fp55 = fp31 * fp15;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp3;
target[((hsi*60+50)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src0[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp24 * fp21;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp1;
target[((hsi*60+49)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp26 * fp21;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp0;
target[((hsi*60+48)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
fp61 = fp24 * fp23;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp0;
target[((hsi*60+47)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
fp63 = fp26 * fp20;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp1;
target[((hsi*60+46)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp27 * fp15;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp11;
target[((hsi*60+30)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp25 * fp23;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp1;
target[((hsi*60+44)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp25 * fp21;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp3;
target[((hsi*60+43)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp71;
fp71 = fp26 * fp23;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp2;
target[((hsi*60+42)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp73;
fp73 = fp26 * fp22;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp3;
target[((hsi*60+41)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
fp75 = fp27 * fp23;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp3;
target[((hsi*60+40)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
fp77 = fp24 * fp13;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp9;
target[((hsi*60+39)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp79;
fp79 = fp26 * fp13;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp8;
target[((hsi*60+38)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = fp24 * fp15;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp8;
target[((hsi*60+37)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp26 * fp12;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp9;
target[((hsi*60+36)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp24 * fp12;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp11;
target[((hsi*60+35)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
fp87 = fp25 * fp15;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp9;
target[((hsi*60+34)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = fp25 * fp13;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp11;
target[((hsi*60+33)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp26 * fp15;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp10;
target[((hsi*60+32)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
fp93 = fp26 * fp14;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp11;
target[((hsi*60+31)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp65;
fp65 = fp24 * fp20;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp3;
target[((hsi*60+45)*1+lsi)*1] = fp64;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 156 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
