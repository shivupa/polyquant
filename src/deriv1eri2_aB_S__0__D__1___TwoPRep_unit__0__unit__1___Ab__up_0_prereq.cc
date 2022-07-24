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
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri2_aB_S__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_z[vi] * fp45;
LIBINT2_REALTYPE fp77;
fp77 = fp78 + fp82;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WQ_y[vi] * fp77;
LIBINT2_REALTYPE fp18;
fp18 = inteval->two_alpha0_bra[vi] * fp68;
LIBINT2_REALTYPE fp17;
fp17 = fp18;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp69;
fp69 = inteval->WQ_x[vi] * fp77;
LIBINT2_REALTYPE fp19;
fp19 = inteval->two_alpha0_bra[vi] * fp69;
LIBINT2_REALTYPE fp16;
fp16 = fp19;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp55;
fp55 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp87;
fp87 = inteval->WQ_y[vi] * fp55;
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_z[vi] * fp87;
LIBINT2_REALTYPE fp20;
fp20 = inteval->two_alpha0_bra[vi] * fp70;
LIBINT2_REALTYPE fp15;
fp15 = fp20;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp65;
fp65 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp41;
fp41 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp65 * fp41;
LIBINT2_REALTYPE fp59;
fp59 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp58;
fp58 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp59;
LIBINT2_REALTYPE fp60;
fp60 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp60 * fp58;
LIBINT2_REALTYPE fp47;
fp47 = inteval->WQ_z[vi] * fp45;
LIBINT2_REALTYPE fp46;
fp46 = fp47 + fp57;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * fp46;
LIBINT2_REALTYPE fp21;
fp21 = fp23 + fp22;
LIBINT2_REALTYPE fp24;
fp24 = inteval->two_alpha0_bra[vi] * fp21;
LIBINT2_REALTYPE fp14;
fp14 = fp24;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp50;
fp50 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp52;
fp52 = inteval->WQ_y[vi] * fp50;
LIBINT2_REALTYPE fp51;
fp51 = fp52 + fp57;
LIBINT2_REALTYPE fp25;
fp25 = inteval->WP_z[vi] * fp51;
LIBINT2_REALTYPE fp26;
fp26 = inteval->two_alpha0_bra[vi] * fp25;
LIBINT2_REALTYPE fp13;
fp13 = fp26;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp61;
fp61 = inteval->WQ_x[vi] * fp55;
LIBINT2_REALTYPE fp56;
fp56 = fp61 + fp57;
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_z[vi] * fp56;
LIBINT2_REALTYPE fp28;
fp28 = inteval->two_alpha0_bra[vi] * fp27;
LIBINT2_REALTYPE fp12;
fp12 = fp28;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp80;
fp80 = inteval->WP_y[vi] * fp50;
LIBINT2_REALTYPE fp79;
fp79 = fp80 + fp82;
LIBINT2_REALTYPE fp71;
fp71 = inteval->WQ_z[vi] * fp79;
LIBINT2_REALTYPE fp29;
fp29 = inteval->two_alpha0_bra[vi] * fp71;
LIBINT2_REALTYPE fp11;
fp11 = fp29;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp86;
fp86 = inteval->WQ_z[vi] * fp55;
LIBINT2_REALTYPE fp72;
fp72 = inteval->WP_y[vi] * fp86;
LIBINT2_REALTYPE fp30;
fp30 = inteval->two_alpha0_bra[vi] * fp72;
LIBINT2_REALTYPE fp10;
fp10 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp73;
fp73 = inteval->WQ_x[vi] * fp79;
LIBINT2_REALTYPE fp31;
fp31 = inteval->two_alpha0_bra[vi] * fp73;
LIBINT2_REALTYPE fp9;
fp9 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp32;
fp32 = inteval->WP_y[vi] * fp46;
LIBINT2_REALTYPE fp33;
fp33 = inteval->two_alpha0_bra[vi] * fp32;
LIBINT2_REALTYPE fp8;
fp8 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp43;
fp43 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp35;
fp35 = fp65 * fp43;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_y[vi] * fp51;
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
LIBINT2_REALTYPE fp37;
fp37 = inteval->two_alpha0_bra[vi] * fp34;
LIBINT2_REALTYPE fp7;
fp7 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp38;
fp38 = inteval->WP_y[vi] * fp56;
LIBINT2_REALTYPE fp39;
fp39 = inteval->two_alpha0_bra[vi] * fp38;
LIBINT2_REALTYPE fp6;
fp6 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp85;
fp85 = inteval->WQ_z[vi] * fp50;
LIBINT2_REALTYPE fp74;
fp74 = inteval->WP_x[vi] * fp85;
LIBINT2_REALTYPE fp40;
fp40 = inteval->two_alpha0_bra[vi] * fp74;
LIBINT2_REALTYPE fp5;
fp5 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp84;
fp84 = inteval->WP_x[vi] * fp55;
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
LIBINT2_REALTYPE fp75;
fp75 = inteval->WQ_z[vi] * fp81;
LIBINT2_REALTYPE fp42;
fp42 = inteval->two_alpha0_bra[vi] * fp75;
LIBINT2_REALTYPE fp4;
fp4 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp76;
fp76 = inteval->WQ_y[vi] * fp81;
LIBINT2_REALTYPE fp44;
fp44 = inteval->two_alpha0_bra[vi] * fp76;
LIBINT2_REALTYPE fp3;
fp3 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_x[vi] * fp46;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha0_bra[vi] * fp48;
LIBINT2_REALTYPE fp2;
fp2 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_x[vi] * fp51;
LIBINT2_REALTYPE fp54;
fp54 = inteval->two_alpha0_bra[vi] * fp53;
LIBINT2_REALTYPE fp1;
fp1 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp62;
fp62 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp62;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_x[vi] * fp56;
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
LIBINT2_REALTYPE fp67;
fp67 = inteval->two_alpha0_bra[vi] * fp63;
LIBINT2_REALTYPE fp0;
fp0 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 88 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
