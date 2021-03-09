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
void deriv1eri2_aB_P__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp28;
fp28 = 1.0000000000000000e+00 * fp55;
LIBINT2_REALTYPE fp105;
fp105 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp98;
fp98 = fp105 * fp46;
LIBINT2_REALTYPE fp85;
fp85 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp84;
fp84 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp85;
LIBINT2_REALTYPE fp86;
fp86 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp86 * fp84;
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp79;
fp79 = inteval->WP_z[vi] * fp75;
LIBINT2_REALTYPE fp78;
fp78 = fp79 + fp83;
LIBINT2_REALTYPE fp99;
fp99 = inteval->WQ_z[vi] * fp78;
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
LIBINT2_REALTYPE fp29;
fp29 = inteval->two_alpha0_bra[vi] * fp97;
LIBINT2_REALTYPE fp27;
fp27 = fp29 - fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp32;
fp32 = inteval->two_alpha0_bra[vi] * fp78;
LIBINT2_REALTYPE fp31;
fp31 = fp32 - fp61;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_y[vi] * fp31;
LIBINT2_REALTYPE fp25;
fp25 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp33;
fp33 = inteval->WQ_x[vi] * fp31;
LIBINT2_REALTYPE fp24;
fp24 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp73;
fp73 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp72;
fp72 = fp73 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp48;
fp48 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_z[vi] * fp48;
LIBINT2_REALTYPE fp67;
fp67 = fp68 + fp72;
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_y[vi] * fp67;
LIBINT2_REALTYPE fp34;
fp34 = inteval->two_alpha0_bra[vi] * fp88;
LIBINT2_REALTYPE fp23;
fp23 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp50;
fp50 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_y[vi] * fp50;
LIBINT2_REALTYPE fp69;
fp69 = fp70 + fp72;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WP_z[vi] * fp69;
LIBINT2_REALTYPE fp35;
fp35 = inteval->two_alpha0_bra[vi] * fp89;
LIBINT2_REALTYPE fp22;
fp22 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp52;
fp52 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp107;
fp107 = inteval->WP_y[vi] * fp52;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_z[vi] * fp107;
LIBINT2_REALTYPE fp36;
fp36 = inteval->two_alpha0_bra[vi] * fp90;
LIBINT2_REALTYPE fp21;
fp21 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_x[vi] * fp67;
LIBINT2_REALTYPE fp44;
fp44 = inteval->two_alpha0_bra[vi] * fp91;
LIBINT2_REALTYPE fp20;
fp20 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp109;
fp109 = inteval->WP_x[vi] * fp50;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_z[vi] * fp109;
LIBINT2_REALTYPE fp45;
fp45 = inteval->two_alpha0_bra[vi] * fp92;
LIBINT2_REALTYPE fp19;
fp19 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp74;
fp74 = inteval->WP_x[vi] * fp52;
LIBINT2_REALTYPE fp71;
fp71 = fp74 + fp72;
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_z[vi] * fp71;
LIBINT2_REALTYPE fp47;
fp47 = inteval->two_alpha0_bra[vi] * fp93;
LIBINT2_REALTYPE fp18;
fp18 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp17;
fp17 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp16;
fp16 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp15;
fp15 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_y[vi] * fp76;
LIBINT2_REALTYPE fp80;
fp80 = fp81 + fp83;
LIBINT2_REALTYPE fp42;
fp42 = inteval->two_alpha0_bra[vi] * fp80;
LIBINT2_REALTYPE fp41;
fp41 = fp42 - fp61;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WQ_z[vi] * fp41;
LIBINT2_REALTYPE fp14;
fp14 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp39;
fp39 = 1.0000000000000000e+00 * fp57;
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp101;
fp101 = fp105 * fp53;
LIBINT2_REALTYPE fp102;
fp102 = inteval->WQ_y[vi] * fp80;
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
LIBINT2_REALTYPE fp40;
fp40 = inteval->two_alpha0_bra[vi] * fp100;
LIBINT2_REALTYPE fp38;
fp38 = fp40 - fp39;
LIBINT2_REALTYPE fp13;
fp13 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp43;
fp43 = inteval->WQ_x[vi] * fp41;
LIBINT2_REALTYPE fp12;
fp12 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp108;
fp108 = inteval->WP_x[vi] * fp48;
LIBINT2_REALTYPE fp94;
fp94 = inteval->WP_y[vi] * fp108;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha0_bra[vi] * fp94;
LIBINT2_REALTYPE fp11;
fp11 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_x[vi] * fp69;
LIBINT2_REALTYPE fp51;
fp51 = inteval->two_alpha0_bra[vi] * fp95;
LIBINT2_REALTYPE fp10;
fp10 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp96;
fp96 = inteval->WP_y[vi] * fp71;
LIBINT2_REALTYPE fp54;
fp54 = inteval->two_alpha0_bra[vi] * fp96;
LIBINT2_REALTYPE fp9;
fp9 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp8;
fp8 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp7;
fp7 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp6;
fp6 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp5;
fp5 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp4;
fp4 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp3;
fp3 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_x[vi] * fp77;
LIBINT2_REALTYPE fp82;
fp82 = fp87 + fp83;
LIBINT2_REALTYPE fp62;
fp62 = inteval->two_alpha0_bra[vi] * fp82;
LIBINT2_REALTYPE fp60;
fp60 = fp62 - fp61;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_z[vi] * fp60;
LIBINT2_REALTYPE fp2;
fp2 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp58;
fp58 = inteval->WQ_y[vi] * fp60;
LIBINT2_REALTYPE fp1;
fp1 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp63;
fp63 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * fp63;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp59;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WQ_x[vi] * fp82;
LIBINT2_REALTYPE fp103;
fp103 = fp106 + fp104;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha0_bra[vi] * fp103;
LIBINT2_REALTYPE fp64;
fp64 = fp66 - fp65;
LIBINT2_REALTYPE fp0;
fp0 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*9+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 110 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
