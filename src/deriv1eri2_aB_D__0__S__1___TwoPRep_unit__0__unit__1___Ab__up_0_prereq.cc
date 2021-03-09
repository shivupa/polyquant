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
void deriv1eri2_aB_D__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp57;
fp57 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp56;
fp56 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp57;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp58 * fp56;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp44;
fp44 = inteval->WP_z[vi] * fp40;
LIBINT2_REALTYPE fp43;
fp43 = fp44 + fp55;
LIBINT2_REALTYPE fp46;
fp46 = inteval->two_alpha0_bra[vi] * fp43;
LIBINT2_REALTYPE fp45;
fp45 = fp46 - fp61;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WP_y[vi] * fp45;
LIBINT2_REALTYPE fp17;
fp17 = fp18;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp19;
fp19 = inteval->WP_x[vi] * fp45;
LIBINT2_REALTYPE fp16;
fp16 = fp19;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp89;
fp89 = inteval->WP_y[vi] * fp42;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_z[vi] * fp89;
LIBINT2_REALTYPE fp32;
fp32 = inteval->two_alpha0_bra[vi] * fp66;
LIBINT2_REALTYPE fp15;
fp15 = fp32;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp63;
fp63 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp21;
fp21 = 2.0000000000000000e+00 * fp63;
LIBINT2_REALTYPE fp87;
fp87 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp76;
fp76 = inteval->roz[vi] * fp51;
LIBINT2_REALTYPE fp75;
fp75 = fp63 - fp76;
LIBINT2_REALTYPE fp74;
fp74 = fp87 * fp75;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_z[vi] * fp43;
LIBINT2_REALTYPE fp73;
fp73 = fp77 + fp74;
LIBINT2_REALTYPE fp22;
fp22 = inteval->two_alpha0_bra[vi] * fp73;
LIBINT2_REALTYPE fp20;
fp20 = fp22 - fp21;
LIBINT2_REALTYPE fp14;
fp14 = fp20;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_y[vi] * fp41;
LIBINT2_REALTYPE fp47;
fp47 = fp48 + fp55;
LIBINT2_REALTYPE fp69;
fp69 = inteval->WP_z[vi] * fp47;
LIBINT2_REALTYPE fp23;
fp23 = inteval->two_alpha0_bra[vi] * fp69;
LIBINT2_REALTYPE fp13;
fp13 = fp23;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_x[vi] * fp42;
LIBINT2_REALTYPE fp54;
fp54 = fp59 + fp55;
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_z[vi] * fp54;
LIBINT2_REALTYPE fp24;
fp24 = inteval->two_alpha0_bra[vi] * fp71;
LIBINT2_REALTYPE fp12;
fp12 = fp24;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp50;
fp50 = inteval->two_alpha0_bra[vi] * fp47;
LIBINT2_REALTYPE fp49;
fp49 = fp50 - fp61;
LIBINT2_REALTYPE fp25;
fp25 = inteval->WP_z[vi] * fp49;
LIBINT2_REALTYPE fp11;
fp11 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp10;
fp10 = fp32;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_x[vi] * fp49;
LIBINT2_REALTYPE fp9;
fp9 = fp26;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_y[vi] * fp43;
LIBINT2_REALTYPE fp27;
fp27 = inteval->two_alpha0_bra[vi] * fp67;
LIBINT2_REALTYPE fp8;
fp8 = fp27;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp64;
fp64 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp29;
fp29 = 2.0000000000000000e+00 * fp64;
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp81;
fp81 = inteval->roz[vi] * fp52;
LIBINT2_REALTYPE fp80;
fp80 = fp64 - fp81;
LIBINT2_REALTYPE fp79;
fp79 = fp87 * fp80;
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_y[vi] * fp47;
LIBINT2_REALTYPE fp78;
fp78 = fp82 + fp79;
LIBINT2_REALTYPE fp30;
fp30 = inteval->two_alpha0_bra[vi] * fp78;
LIBINT2_REALTYPE fp28;
fp28 = fp30 - fp29;
LIBINT2_REALTYPE fp7;
fp7 = fp28;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp72;
fp72 = inteval->WP_y[vi] * fp54;
LIBINT2_REALTYPE fp31;
fp31 = inteval->two_alpha0_bra[vi] * fp72;
LIBINT2_REALTYPE fp6;
fp6 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp5;
fp5 = fp32;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp62;
fp62 = inteval->two_alpha0_bra[vi] * fp54;
LIBINT2_REALTYPE fp60;
fp60 = fp62 - fp61;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_z[vi] * fp60;
LIBINT2_REALTYPE fp4;
fp4 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_y[vi] * fp60;
LIBINT2_REALTYPE fp3;
fp3 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_x[vi] * fp43;
LIBINT2_REALTYPE fp35;
fp35 = inteval->two_alpha0_bra[vi] * fp68;
LIBINT2_REALTYPE fp2;
fp2 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_x[vi] * fp47;
LIBINT2_REALTYPE fp36;
fp36 = inteval->two_alpha0_bra[vi] * fp70;
LIBINT2_REALTYPE fp1;
fp1 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp65;
fp65 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp38;
fp38 = 2.0000000000000000e+00 * fp65;
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp86;
fp86 = inteval->roz[vi] * fp53;
LIBINT2_REALTYPE fp85;
fp85 = fp65 - fp86;
LIBINT2_REALTYPE fp84;
fp84 = fp87 * fp85;
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_x[vi] * fp54;
LIBINT2_REALTYPE fp83;
fp83 = fp88 + fp84;
LIBINT2_REALTYPE fp39;
fp39 = inteval->two_alpha0_bra[vi] * fp83;
LIBINT2_REALTYPE fp37;
fp37 = fp39 - fp38;
LIBINT2_REALTYPE fp0;
fp0 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 90 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
