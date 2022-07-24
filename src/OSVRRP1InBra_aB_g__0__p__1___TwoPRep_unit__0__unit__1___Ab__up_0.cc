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
void OSVRRP1InBra_aB_g__0__p__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp79;
fp79 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->WQ_x[vi] * src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp80 + fp78;
target[((hsi*45+21)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = inteval->WQ_z[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
target[((hsi*45+20)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp87;
fp87 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp86;
fp86 = fp87 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->WQ_y[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp88 + fp86;
target[((hsi*45+19)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WQ_x[vi] * src0[((hsi*15+6)*1+lsi)*1];
target[((hsi*45+18)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WQ_z[vi] * src0[((hsi*15+5)*1+lsi)*1];
target[((hsi*45+17)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
fp93 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp93 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->WQ_y[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp94 + fp92;
target[((hsi*45+16)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp97;
fp97 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->WQ_x[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
target[((hsi*45+15)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->WQ_z[vi] * src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp102 + fp100;
target[((hsi*45+14)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp103;
fp103 = inteval->WQ_y[vi] * src0[((hsi*15+4)*1+lsi)*1];
target[((hsi*45+13)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp106;
fp106 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp105;
fp105 = fp106 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->WQ_x[vi] * src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp107 + fp105;
target[((hsi*45+12)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp133;
fp133 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp133 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = inteval->WQ_x[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp134 + fp132;
target[((hsi*45+0)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp111;
fp111 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->WQ_y[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp112 + fp110;
target[((hsi*45+10)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp115;
fp115 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp114;
fp114 = fp115 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->WQ_x[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp116 + fp114;
target[((hsi*45+9)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp119;
fp119 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp118;
fp118 = fp119 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->WQ_z[vi] * src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp120 + fp118;
target[((hsi*45+8)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp121;
fp121 = inteval->WQ_y[vi] * src0[((hsi*15+2)*1+lsi)*1];
target[((hsi*45+7)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp122;
fp122 = inteval->WQ_x[vi] * src0[((hsi*15+2)*1+lsi)*1];
target[((hsi*45+6)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp123;
fp123 = inteval->WQ_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
target[((hsi*45+5)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp126;
fp126 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp126 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->WQ_y[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp127 + fp125;
target[((hsi*45+4)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp128;
fp128 = inteval->WQ_x[vi] * src0[((hsi*15+1)*1+lsi)*1];
target[((hsi*45+3)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp129;
fp129 = inteval->WQ_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*45+2)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp130;
fp130 = inteval->WQ_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*45+1)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp108;
fp108 = inteval->WQ_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
target[((hsi*45+11)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp2;
fp2 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->WQ_z[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp6;
fp6 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp5;
fp5 = fp6 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->WQ_y[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp7 + fp5;
target[((hsi*45+43)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp10;
fp10 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->WQ_x[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp11 + fp9;
target[((hsi*45+42)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp14;
fp14 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->WQ_z[vi] * src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp15 + fp13;
target[((hsi*45+41)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp18;
fp18 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp18 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->WQ_y[vi] * src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp19 + fp17;
target[((hsi*45+40)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp22;
fp22 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp21;
fp21 = fp22 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->WQ_x[vi] * src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp23 + fp21;
target[((hsi*45+39)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp26;
fp26 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->WQ_z[vi] * src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
target[((hsi*45+38)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp30;
fp30 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->WQ_y[vi] * src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*45+37)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp34;
fp34 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp34 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->WQ_x[vi] * src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp35 + fp33;
target[((hsi*45+36)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp38;
fp38 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->WQ_z[vi] * src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp39 + fp37;
target[((hsi*45+35)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WQ_y[vi] * src0[((hsi*15+7)*1+lsi)*1];
target[((hsi*45+22)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp44;
fp44 = inteval->WQ_x[vi] * src0[((hsi*15+11)*1+lsi)*1];
target[((hsi*45+33)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
fp47 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->WQ_z[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp48 + fp46;
target[((hsi*45+32)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp49;
fp49 = inteval->WQ_y[vi] * src0[((hsi*15+10)*1+lsi)*1];
target[((hsi*45+31)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp52;
fp52 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp51;
fp51 = fp52 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->WQ_x[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp53 + fp51;
target[((hsi*45+30)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WQ_z[vi] * src0[((hsi*15+9)*1+lsi)*1];
target[((hsi*45+29)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
fp57 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp57 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->WQ_y[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp58 + fp56;
target[((hsi*45+28)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp61;
fp61 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp61 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->WQ_x[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp62 + fp60;
target[((hsi*45+27)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp65;
fp65 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->WQ_z[vi] * src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
target[((hsi*45+26)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp69;
fp69 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp69 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->WQ_y[vi] * src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp70 + fp68;
target[((hsi*45+25)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp71;
fp71 = inteval->WQ_x[vi] * src0[((hsi*15+8)*1+lsi)*1];
target[((hsi*45+24)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp74;
fp74 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp74 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->WQ_z[vi] * src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp75 + fp73;
target[((hsi*45+23)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp42;
fp42 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp42 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->WQ_y[vi] * src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp43 + fp41;
target[((hsi*45+34)*1+lsi)*1] = fp40;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 135 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
