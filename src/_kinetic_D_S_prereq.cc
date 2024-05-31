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
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kinetic_D_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp22;
fp22 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp90;
fp90 = inteval->PB_z[vi] * fp94;
LIBINT2_REALTYPE fp7;
fp7 = fp22 * fp90;
LIBINT2_REALTYPE fp30;
fp30 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp89;
fp89 = inteval->PA_z[vi] * fp94;
LIBINT2_REALTYPE fp116;
fp116 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp116 * fp89;
LIBINT2_REALTYPE fp128;
fp128 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp128 * fp94;
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->PA_z[vi], fp89, fp92);
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PB_z[vi], fp87, fp82);
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_minus(fp29, fp81, fp7);
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp105;
fp105 = inteval->PA_y[vi] * fp110;
LIBINT2_REALTYPE fp33;
fp33 = fp124 * fp105;
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp6;
LIBINT2_REALTYPE fp106;
fp106 = inteval->PB_y[vi] * fp110;
LIBINT2_REALTYPE fp14;
fp14 = fp22 * fp106;
LIBINT2_REALTYPE fp98;
fp98 = fp116 * fp105;
LIBINT2_REALTYPE fp108;
fp108 = fp128 * fp110;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->PA_y[vi], fp105, fp108);
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->PB_y[vi], fp103, fp98);
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_minus(fp29, fp97, fp14);
LIBINT2_REALTYPE fp36;
fp36 = fp124 * fp13;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp89;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp124;
LIBINT2_REALTYPE fp111;
fp111 = inteval->PB_x[vi] * fp124;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->PA_x[vi], fp111, fp127);
LIBINT2_REALTYPE fp24;
fp24 = fp29 * fp118;
LIBINT2_REALTYPE fp38;
fp38 = fp24 * fp105;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(fp38, fp89, fp35);
LIBINT2_REALTYPE fp31;
fp31 = fp34 + fp32;
LIBINT2_REALTYPE fp5;
fp5 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp125;
fp125 = inteval->PA_x[vi] * fp124;
LIBINT2_REALTYPE fp41;
fp41 = fp125 * fp110;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp6;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->PA_y[vi], fp106, fp108);
LIBINT2_REALTYPE fp19;
fp19 = fp29 * fp107;
LIBINT2_REALTYPE fp44;
fp44 = fp125 * fp19;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp89;
LIBINT2_REALTYPE fp21;
fp21 = fp22 * fp111;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp125;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->PA_x[vi], fp125, fp127);
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->PB_x[vi], fp126, fp115);
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_minus(fp29, fp114, fp21);
LIBINT2_REALTYPE fp46;
fp46 = fp20 * fp110;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(fp46, fp89, fp43);
LIBINT2_REALTYPE fp39;
fp39 = fp42 + fp40;
LIBINT2_REALTYPE fp4;
fp4 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PA_z[vi], fp90, fp92);
LIBINT2_REALTYPE fp12;
fp12 = fp29 * fp91;
LIBINT2_REALTYPE fp49;
fp49 = fp125 * fp105;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp12;
LIBINT2_REALTYPE fp52;
fp52 = fp125 * fp13;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp94;
LIBINT2_REALTYPE fp54;
fp54 = fp20 * fp105;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(fp54, fp94, fp51);
LIBINT2_REALTYPE fp47;
fp47 = fp50 + fp48;
LIBINT2_REALTYPE fp3;
fp3 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp27 * fp91;
LIBINT2_REALTYPE fp122;
fp122 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp122 * fp87;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->PA_z[vi], fp87, fp82);
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PB_z[vi], fp79, fp85);
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_minus(fp29, fp84, fp10);
LIBINT2_REALTYPE fp57;
fp57 = fp124 * fp110;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp9;
LIBINT2_REALTYPE fp60;
fp60 = fp124 * fp19;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp87;
LIBINT2_REALTYPE fp62;
fp62 = fp24 * fp110;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(fp62, fp87, fp59);
LIBINT2_REALTYPE fp55;
fp55 = fp58 + fp56;
LIBINT2_REALTYPE fp2;
fp2 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp65;
fp65 = fp124 * fp103;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp12;
LIBINT2_REALTYPE fp17;
fp17 = fp27 * fp107;
LIBINT2_REALTYPE fp101;
fp101 = fp122 * fp103;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->PA_y[vi], fp103, fp98);
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->PB_y[vi], fp95, fp101);
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_minus(fp29, fp100, fp17);
LIBINT2_REALTYPE fp68;
fp68 = fp124 * fp16;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp94;
LIBINT2_REALTYPE fp70;
fp70 = fp24 * fp103;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(fp70, fp94, fp67);
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
LIBINT2_REALTYPE fp1;
fp1 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp73;
fp73 = fp126 * fp110;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp12;
LIBINT2_REALTYPE fp76;
fp76 = fp126 * fp19;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp94;
LIBINT2_REALTYPE fp26;
fp26 = fp27 * fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp126;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->PA_x[vi], fp126, fp115);
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->PB_x[vi], fp112, fp121);
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(fp29, fp120, fp26);
LIBINT2_REALTYPE fp78;
fp78 = fp25 * fp110;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(fp78, fp94, fp75);
LIBINT2_REALTYPE fp71;
fp71 = fp74 + fp72;
LIBINT2_REALTYPE fp0;
fp0 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 130 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
