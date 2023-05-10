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
void CR_aB_Z10__0___Overlap_Z2__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*33+0)*1+lsi)*1] = inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp175;
fp175 = inteval->PB_z[vi] * target[((hsi*33+0)*1+lsi)*1];
target[((hsi*33+1)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp170;
fp170 = inteval->PA_z[vi] * target[((hsi*33+0)*1+lsi)*1];
target[((hsi*33+3)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp168;
fp168 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp167;
fp167 = fp168 * target[((hsi*33+0)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+1)*1+lsi)*1], fp167);
target[((hsi*33+4)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp160;
fp160 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp159;
fp159 = fp160 * target[((hsi*33+0)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+3)*1+lsi)*1], fp159);
target[((hsi*33+6)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp153;
fp153 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp152;
fp152 = fp153 * target[((hsi*33+3)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp155;
fp155 = fp156 * target[((hsi*33+1)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+4)*1+lsi)*1], fp155);
LIBINT2_REALTYPE fp151;
fp151 = fp154 + fp152;
target[((hsi*33+7)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp142;
fp142 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp141;
fp141 = fp142 * target[((hsi*33+3)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+6)*1+lsi)*1], fp141);
target[((hsi*33+9)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp135;
fp135 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp134;
fp134 = fp135 * target[((hsi*33+6)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp137;
fp137 = fp138 * target[((hsi*33+4)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+7)*1+lsi)*1], fp137);
LIBINT2_REALTYPE fp133;
fp133 = fp136 + fp134;
target[((hsi*33+10)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp124;
fp124 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp123;
fp123 = fp124 * target[((hsi*33+6)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+9)*1+lsi)*1], fp123);
target[((hsi*33+12)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp117;
fp117 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * target[((hsi*33+9)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp119;
fp119 = fp120 * target[((hsi*33+7)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+10)*1+lsi)*1], fp119);
LIBINT2_REALTYPE fp115;
fp115 = fp118 + fp116;
target[((hsi*33+13)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp106;
fp106 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp105;
fp105 = fp106 * target[((hsi*33+9)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+12)*1+lsi)*1], fp105);
target[((hsi*33+15)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp88;
fp88 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp88 * target[((hsi*33+12)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+15)*1+lsi)*1], fp87);
target[((hsi*33+18)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp81;
fp81 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp80;
fp80 = fp81 * target[((hsi*33+15)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp84 * target[((hsi*33+13)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp98;
fp98 = fp99 * target[((hsi*33+12)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp101;
fp101 = fp102 * target[((hsi*33+10)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+13)*1+lsi)*1], fp101);
LIBINT2_REALTYPE fp97;
fp97 = fp100 + fp98;
target[((hsi*33+16)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+16)*1+lsi)*1], fp83);
LIBINT2_REALTYPE fp79;
fp79 = fp82 + fp80;
target[((hsi*33+19)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp70;
fp70 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp70 * target[((hsi*33+15)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+18)*1+lsi)*1], fp69);
target[((hsi*33+21)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp63;
fp63 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp62;
fp62 = fp63 * target[((hsi*33+18)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp66 * target[((hsi*33+16)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+19)*1+lsi)*1], fp65);
LIBINT2_REALTYPE fp61;
fp61 = fp64 + fp62;
target[((hsi*33+22)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp52;
fp52 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp51;
fp51 = fp52 * target[((hsi*33+18)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+21)*1+lsi)*1], fp51);
target[((hsi*33+24)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp45;
fp45 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp45 * target[((hsi*33+21)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * target[((hsi*33+19)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+22)*1+lsi)*1], fp47);
LIBINT2_REALTYPE fp43;
fp43 = fp46 + fp44;
target[((hsi*33+25)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp173;
fp173 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp172;
fp172 = fp173 * target[((hsi*33+0)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*33+1)*1+lsi)*1], fp172);
target[((hsi*33+2)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp164;
fp164 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp163;
fp163 = fp164 * target[((hsi*33+1)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+2)*1+lsi)*1], fp163);
target[((hsi*33+5)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp27 * target[((hsi*33+24)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*33+22)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+25)*1+lsi)*1], fp29);
LIBINT2_REALTYPE fp25;
fp25 = fp28 + fp26;
target[((hsi*33+28)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp146;
fp146 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp145;
fp145 = fp146 * target[((hsi*33+4)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp148;
fp148 = fp149 * target[((hsi*33+2)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+5)*1+lsi)*1], fp148);
LIBINT2_REALTYPE fp144;
fp144 = fp147 + fp145;
target[((hsi*33+8)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp34;
fp34 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp34 * target[((hsi*33+21)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+24)*1+lsi)*1], fp33);
target[((hsi*33+27)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp38;
fp38 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * target[((hsi*33+22)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp74 * target[((hsi*33+16)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp109;
fp109 = fp110 * target[((hsi*33+10)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp112;
fp112 = fp113 * target[((hsi*33+8)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp127;
fp127 = fp128 * target[((hsi*33+7)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp130;
fp130 = fp131 * target[((hsi*33+5)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+8)*1+lsi)*1], fp130);
LIBINT2_REALTYPE fp126;
fp126 = fp129 + fp127;
target[((hsi*33+11)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+11)*1+lsi)*1], fp112);
LIBINT2_REALTYPE fp108;
fp108 = fp111 + fp109;
target[((hsi*33+14)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp77;
fp77 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp77 * target[((hsi*33+14)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp92 * target[((hsi*33+13)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp95 * target[((hsi*33+11)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+14)*1+lsi)*1], fp94);
LIBINT2_REALTYPE fp90;
fp90 = fp93 + fp91;
target[((hsi*33+17)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+17)*1+lsi)*1], fp76);
LIBINT2_REALTYPE fp72;
fp72 = fp75 + fp73;
target[((hsi*33+20)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp41;
fp41 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * target[((hsi*33+20)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp56 * target[((hsi*33+19)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * target[((hsi*33+17)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+20)*1+lsi)*1], fp58);
LIBINT2_REALTYPE fp54;
fp54 = fp57 + fp55;
target[((hsi*33+23)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+23)*1+lsi)*1], fp40);
LIBINT2_REALTYPE fp36;
fp36 = fp39 + fp37;
target[((hsi*33+26)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp20;
fp20 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * target[((hsi*33+25)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*33+23)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+26)*1+lsi)*1], fp22);
LIBINT2_REALTYPE fp18;
fp18 = fp21 + fp19;
target[((hsi*33+29)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp16;
fp16 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*33+24)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+27)*1+lsi)*1], fp15);
target[((hsi*33+30)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*33+27)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*33+25)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+28)*1+lsi)*1], fp11);
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*33+31)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*33+28)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*33+26)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->PA_z[vi], target[((hsi*33+29)*1+lsi)*1], fp4);
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*33+32)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 176 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
