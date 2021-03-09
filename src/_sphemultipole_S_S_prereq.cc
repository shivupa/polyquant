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
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_S_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + fp108;
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + fp109;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + fp110;
LIBINT2_REALTYPE fp115;
fp115 = fp113 * fp112;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp111;
LIBINT2_REALTYPE fp107;
fp107 = 1.0000000000000000e+00 * fp114;
LIBINT2_REALTYPE fp0;
fp0 = fp107;
LIBINT2_REALTYPE fp106;
fp106 = inteval->PO_y[vi] * fp0;
LIBINT2_REALTYPE fp105;
fp105 = -5.0000000000000000e-01 * fp106;
LIBINT2_REALTYPE fp1;
fp1 = fp105;
LIBINT2_REALTYPE fp98;
fp98 = inteval->PO_x[vi] * fp1;
LIBINT2_REALTYPE fp101;
fp101 = inteval->PO_x[vi] * fp0;
LIBINT2_REALTYPE fp100;
fp100 = -5.0000000000000000e-01 * fp101;
LIBINT2_REALTYPE fp3;
fp3 = fp100;
LIBINT2_REALTYPE fp99;
fp99 = inteval->PO_y[vi] * fp3;
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
LIBINT2_REALTYPE fp96;
fp96 = -2.5000000000000000e-01 * fp97;
LIBINT2_REALTYPE fp4;
fp4 = fp96;
LIBINT2_REALTYPE fp81;
fp81 = inteval->PO_x[vi] * fp4;
LIBINT2_REALTYPE fp85;
fp85 = inteval->PO_y[vi] * fp1;
LIBINT2_REALTYPE fp86;
fp86 = inteval->PO_x[vi] * fp3;
LIBINT2_REALTYPE fp84;
fp84 = fp86 - fp85;
LIBINT2_REALTYPE fp83;
fp83 = -2.5000000000000000e-01 * fp84;
LIBINT2_REALTYPE fp8;
fp8 = fp83;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PO_y[vi] * fp8;
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
LIBINT2_REALTYPE fp79;
fp79 = -1.6666666666666666e-01 * fp80;
LIBINT2_REALTYPE fp9;
fp9 = fp79;
LIBINT2_REALTYPE fp27;
fp27 = inteval->PO_y[vi] * fp9;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PO_y[vi] * fp4;
LIBINT2_REALTYPE fp61;
fp61 = inteval->PO_x[vi] * fp8;
LIBINT2_REALTYPE fp59;
fp59 = fp61 - fp60;
LIBINT2_REALTYPE fp58;
fp58 = -1.6666666666666666e-01 * fp59;
LIBINT2_REALTYPE fp15;
fp15 = fp58;
LIBINT2_REALTYPE fp28;
fp28 = inteval->PO_x[vi] * fp15;
LIBINT2_REALTYPE fp26;
fp26 = fp28 - fp27;
LIBINT2_REALTYPE fp25;
fp25 = -1.2500000000000000e-01 * fp26;
LIBINT2_REALTYPE fp24;
fp24 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp53;
fp53 = 7.0000000000000000e+00 * inteval->PO_z[vi];
LIBINT2_REALTYPE fp30;
fp30 = fp53 * fp15;
LIBINT2_REALTYPE fp29;
fp29 = 1.4285714285714285e-01 * fp30;
LIBINT2_REALTYPE fp23;
fp23 = fp29;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp33;
fp33 = inteval->PO2[vi] * fp8;
LIBINT2_REALTYPE fp78;
fp78 = 5.0000000000000000e+00 * inteval->PO_z[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp78 * fp8;
LIBINT2_REALTYPE fp62;
fp62 = 2.0000000000000001e-01 * fp63;
LIBINT2_REALTYPE fp14;
fp14 = fp62;
LIBINT2_REALTYPE fp34;
fp34 = fp53 * fp14;
LIBINT2_REALTYPE fp32;
fp32 = fp34 - fp33;
LIBINT2_REALTYPE fp31;
fp31 = 8.3333333333333329e-02 * fp32;
LIBINT2_REALTYPE fp22;
fp22 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp95;
fp95 = 3.0000000000000000e+00 * inteval->PO_z[vi];
LIBINT2_REALTYPE fp88;
fp88 = fp95 * fp3;
LIBINT2_REALTYPE fp87;
fp87 = 3.3333333333333331e-01 * fp88;
LIBINT2_REALTYPE fp7;
fp7 = fp87;
LIBINT2_REALTYPE fp37;
fp37 = inteval->PO2[vi] * fp7;
LIBINT2_REALTYPE fp66;
fp66 = inteval->PO2[vi] * fp3;
LIBINT2_REALTYPE fp67;
fp67 = fp78 * fp7;
LIBINT2_REALTYPE fp65;
fp65 = fp67 - fp66;
LIBINT2_REALTYPE fp64;
fp64 = 1.2500000000000000e-01 * fp65;
LIBINT2_REALTYPE fp13;
fp13 = fp64;
LIBINT2_REALTYPE fp38;
fp38 = fp53 * fp13;
LIBINT2_REALTYPE fp36;
fp36 = fp38 - fp37;
LIBINT2_REALTYPE fp35;
fp35 = 6.6666666666666666e-02 * fp36;
LIBINT2_REALTYPE fp21;
fp21 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp91;
fp91 = inteval->PO2[vi] * fp0;
LIBINT2_REALTYPE fp104;
fp104 = 1.0000000000000000e+00 * inteval->PO_z[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp0;
LIBINT2_REALTYPE fp102;
fp102 = 1.0000000000000000e+00 * fp103;
LIBINT2_REALTYPE fp2;
fp2 = fp102;
LIBINT2_REALTYPE fp92;
fp92 = fp95 * fp2;
LIBINT2_REALTYPE fp90;
fp90 = fp92 - fp91;
LIBINT2_REALTYPE fp89;
fp89 = 2.5000000000000000e-01 * fp90;
LIBINT2_REALTYPE fp6;
fp6 = fp89;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PO2[vi] * fp6;
LIBINT2_REALTYPE fp70;
fp70 = inteval->PO2[vi] * fp2;
LIBINT2_REALTYPE fp71;
fp71 = fp78 * fp6;
LIBINT2_REALTYPE fp69;
fp69 = fp71 - fp70;
LIBINT2_REALTYPE fp68;
fp68 = 1.1111111111111110e-01 * fp69;
LIBINT2_REALTYPE fp12;
fp12 = fp68;
LIBINT2_REALTYPE fp42;
fp42 = fp53 * fp12;
LIBINT2_REALTYPE fp40;
fp40 = fp42 - fp41;
LIBINT2_REALTYPE fp39;
fp39 = 6.2500000000000000e-02 * fp40;
LIBINT2_REALTYPE fp20;
fp20 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp1;
LIBINT2_REALTYPE fp93;
fp93 = 3.3333333333333331e-01 * fp94;
LIBINT2_REALTYPE fp5;
fp5 = fp93;
LIBINT2_REALTYPE fp45;
fp45 = inteval->PO2[vi] * fp5;
LIBINT2_REALTYPE fp74;
fp74 = inteval->PO2[vi] * fp1;
LIBINT2_REALTYPE fp75;
fp75 = fp78 * fp5;
LIBINT2_REALTYPE fp73;
fp73 = fp75 - fp74;
LIBINT2_REALTYPE fp72;
fp72 = 1.2500000000000000e-01 * fp73;
LIBINT2_REALTYPE fp11;
fp11 = fp72;
LIBINT2_REALTYPE fp46;
fp46 = fp53 * fp11;
LIBINT2_REALTYPE fp44;
fp44 = fp46 - fp45;
LIBINT2_REALTYPE fp43;
fp43 = 6.6666666666666666e-02 * fp44;
LIBINT2_REALTYPE fp19;
fp19 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp49;
fp49 = inteval->PO2[vi] * fp4;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp4;
LIBINT2_REALTYPE fp76;
fp76 = 2.0000000000000001e-01 * fp77;
LIBINT2_REALTYPE fp10;
fp10 = fp76;
LIBINT2_REALTYPE fp50;
fp50 = fp53 * fp10;
LIBINT2_REALTYPE fp48;
fp48 = fp50 - fp49;
LIBINT2_REALTYPE fp47;
fp47 = 8.3333333333333329e-02 * fp48;
LIBINT2_REALTYPE fp18;
fp18 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp9;
LIBINT2_REALTYPE fp51;
fp51 = 1.4285714285714285e-01 * fp52;
LIBINT2_REALTYPE fp17;
fp17 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp56;
fp56 = inteval->PO_x[vi] * fp9;
LIBINT2_REALTYPE fp57;
fp57 = inteval->PO_y[vi] * fp15;
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
LIBINT2_REALTYPE fp54;
fp54 = -1.2500000000000000e-01 * fp55;
LIBINT2_REALTYPE fp16;
fp16 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp16),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp15),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp14),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp13),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp12),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp11),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp10),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp9),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp7),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp6),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 116 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
