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
void CR_aB_Z2__0___Overlap_Z8__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*27+0)*1+lsi)*1] = inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp121;
fp121 = inteval->PB_z[vi] * target[((hsi*27+0)*1+lsi)*1];
target[((hsi*27+1)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp119;
fp119 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp118;
fp118 = fp119 * target[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->PB_z[vi] * target[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp120 + fp118;
target[((hsi*27+2)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp115;
fp115 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp114;
fp114 = fp115 * target[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->PB_z[vi] * target[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp116 + fp114;
target[((hsi*27+3)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp111;
fp111 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * target[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->PB_z[vi] * target[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp112 + fp110;
target[((hsi*27+4)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp107;
fp107 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp107 * target[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = inteval->PB_z[vi] * target[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp108 + fp106;
target[((hsi*27+5)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp103;
fp103 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp102;
fp102 = fp103 * target[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->PB_z[vi] * target[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp104 + fp102;
target[((hsi*27+6)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp99;
fp99 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp98;
fp98 = fp99 * target[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->PB_z[vi] * target[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp100 + fp98;
target[((hsi*27+7)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp95;
fp95 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp95 * target[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->PB_z[vi] * target[((hsi*27+7)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp96 + fp94;
target[((hsi*27+8)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PA_z[vi] * target[((hsi*27+0)*1+lsi)*1];
target[((hsi*27+9)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp90;
fp90 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * target[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->PA_z[vi] * target[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
target[((hsi*27+10)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp86;
fp86 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * target[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->PA_z[vi] * target[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp87 + fp85;
target[((hsi*27+11)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp82;
fp82 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp82 * target[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->PA_z[vi] * target[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp83 + fp81;
target[((hsi*27+12)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp74;
fp74 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp74 * target[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->PA_z[vi] * target[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp75 + fp73;
target[((hsi*27+14)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp70;
fp70 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp70 * target[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->PA_z[vi] * target[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp71 + fp69;
target[((hsi*27+15)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp66;
fp66 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp66 * target[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->PA_z[vi] * target[((hsi*27+7)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp67 + fp65;
target[((hsi*27+16)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp78;
fp78 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp77;
fp77 = fp78 * target[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->PA_z[vi] * target[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp79 + fp77;
target[((hsi*27+13)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp62;
fp62 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * target[((hsi*27+7)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->PA_z[vi] * target[((hsi*27+8)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
target[((hsi*27+17)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * target[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_z[vi] * target[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp59 + fp57;
target[((hsi*27+18)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp51;
fp51 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * target[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->PA_z[vi] * target[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp55 + fp53;
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
target[((hsi*27+19)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp44;
fp44 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * target[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * target[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->PA_z[vi] * target[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp48 + fp46;
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*27+20)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp37;
fp37 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * target[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * target[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_z[vi] * target[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp41 + fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp38 + fp36;
target[((hsi*27+21)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp30;
fp30 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * target[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_z[vi] * target[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp34 + fp32;
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*27+22)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp23;
fp23 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_z[vi] * target[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*27+23)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp16;
fp16 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->PA_z[vi] * target[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp20 + fp18;
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*27+24)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*27+7)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->PA_z[vi] * target[((hsi*27+16)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*27+25)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*27+16)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*27+8)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PA_z[vi] * target[((hsi*27+17)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp6 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*27+26)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 122 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
