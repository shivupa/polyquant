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
void deriv1eri3_aB_S__0__P__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp46;
fp46 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp23;
fp23 = inteval->CD_z[vi] * fp44;
LIBINT2_REALTYPE fp62;
fp62 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp61;
fp61 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp62;
LIBINT2_REALTYPE fp63;
fp63 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp63 * fp61;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp78;
fp78 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WQ_z[vi] * fp76;
LIBINT2_REALTYPE fp21;
fp21 = inteval->QC_z[vi] * fp44;
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
LIBINT2_REALTYPE fp18;
fp18 = fp19 + fp60;
LIBINT2_REALTYPE fp22;
fp22 = fp18 + fp23;
LIBINT2_REALTYPE fp24;
fp24 = inteval->two_alpha1_ket[vi] * fp22;
LIBINT2_REALTYPE fp17;
fp17 = fp24;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp81;
fp81 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp82;
fp82 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WQ_z[vi] * fp80;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp52;
fp52 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp107;
fp107 = inteval->QC_z[vi] * fp50;
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
LIBINT2_REALTYPE fp26;
fp26 = inteval->CD_z[vi] * fp50;
LIBINT2_REALTYPE fp25;
fp25 = fp105 + fp26;
LIBINT2_REALTYPE fp27;
fp27 = inteval->two_alpha1_ket[vi] * fp25;
LIBINT2_REALTYPE fp16;
fp16 = fp27;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp85;
fp85 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp86;
fp86 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
LIBINT2_REALTYPE fp109;
fp109 = inteval->WQ_z[vi] * fp84;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp58;
fp58 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
LIBINT2_REALTYPE fp110;
fp110 = inteval->QC_z[vi] * fp56;
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
LIBINT2_REALTYPE fp29;
fp29 = inteval->CD_z[vi] * fp56;
LIBINT2_REALTYPE fp28;
fp28 = fp108 + fp29;
LIBINT2_REALTYPE fp30;
fp30 = inteval->two_alpha1_ket[vi] * fp28;
LIBINT2_REALTYPE fp15;
fp15 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp32;
fp32 = inteval->CD_y[vi] * fp44;
LIBINT2_REALTYPE fp31;
fp31 = fp105 + fp32;
LIBINT2_REALTYPE fp33;
fp33 = inteval->two_alpha1_ket[vi] * fp31;
LIBINT2_REALTYPE fp14;
fp14 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp39;
fp39 = inteval->CD_y[vi] * fp50;
LIBINT2_REALTYPE fp36;
fp36 = inteval->WQ_y[vi] * fp80;
LIBINT2_REALTYPE fp37;
fp37 = inteval->QC_y[vi] * fp50;
LIBINT2_REALTYPE fp35;
fp35 = fp37 + fp36;
LIBINT2_REALTYPE fp34;
fp34 = fp35 + fp60;
LIBINT2_REALTYPE fp38;
fp38 = fp34 + fp39;
LIBINT2_REALTYPE fp40;
fp40 = inteval->two_alpha1_ket[vi] * fp38;
LIBINT2_REALTYPE fp13;
fp13 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp89;
fp89 = inteval->WQ_y[vi] * fp84;
LIBINT2_REALTYPE fp90;
fp90 = inteval->QC_y[vi] * fp56;
LIBINT2_REALTYPE fp88;
fp88 = fp90 + fp89;
LIBINT2_REALTYPE fp42;
fp42 = inteval->CD_y[vi] * fp56;
LIBINT2_REALTYPE fp41;
fp41 = fp88 + fp42;
LIBINT2_REALTYPE fp43;
fp43 = inteval->two_alpha1_ket[vi] * fp41;
LIBINT2_REALTYPE fp12;
fp12 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->CD_x[vi] * fp44;
LIBINT2_REALTYPE fp47;
fp47 = fp108 + fp48;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha1_ket[vi] * fp47;
LIBINT2_REALTYPE fp11;
fp11 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp54;
fp54 = inteval->CD_x[vi] * fp50;
LIBINT2_REALTYPE fp53;
fp53 = fp88 + fp54;
LIBINT2_REALTYPE fp55;
fp55 = inteval->two_alpha1_ket[vi] * fp53;
LIBINT2_REALTYPE fp10;
fp10 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp68;
fp68 = inteval->CD_x[vi] * fp56;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WQ_x[vi] * fp84;
LIBINT2_REALTYPE fp66;
fp66 = inteval->QC_x[vi] * fp56;
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
LIBINT2_REALTYPE fp59;
fp59 = fp64 + fp60;
LIBINT2_REALTYPE fp67;
fp67 = fp59 + fp68;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha1_ket[vi] * fp67;
LIBINT2_REALTYPE fp9;
fp9 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp103;
fp103 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp102;
fp102 = fp103 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_z[vi] * fp76;
LIBINT2_REALTYPE fp91;
fp91 = fp92 + fp102;
LIBINT2_REALTYPE fp70;
fp70 = inteval->two_alpha0_bra[vi] * fp91;
LIBINT2_REALTYPE fp8;
fp8 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_z[vi] * fp80;
LIBINT2_REALTYPE fp71;
fp71 = inteval->two_alpha0_bra[vi] * fp93;
LIBINT2_REALTYPE fp7;
fp7 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp94;
fp94 = inteval->WP_z[vi] * fp84;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha0_bra[vi] * fp94;
LIBINT2_REALTYPE fp6;
fp6 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_y[vi] * fp76;
LIBINT2_REALTYPE fp73;
fp73 = inteval->two_alpha0_bra[vi] * fp95;
LIBINT2_REALTYPE fp5;
fp5 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_y[vi] * fp80;
LIBINT2_REALTYPE fp96;
fp96 = fp97 + fp102;
LIBINT2_REALTYPE fp74;
fp74 = inteval->two_alpha0_bra[vi] * fp96;
LIBINT2_REALTYPE fp4;
fp4 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_y[vi] * fp84;
LIBINT2_REALTYPE fp75;
fp75 = inteval->two_alpha0_bra[vi] * fp98;
LIBINT2_REALTYPE fp3;
fp3 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_x[vi] * fp76;
LIBINT2_REALTYPE fp79;
fp79 = inteval->two_alpha0_bra[vi] * fp99;
LIBINT2_REALTYPE fp2;
fp2 = fp79;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_x[vi] * fp80;
LIBINT2_REALTYPE fp83;
fp83 = inteval->two_alpha0_bra[vi] * fp100;
LIBINT2_REALTYPE fp1;
fp1 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_x[vi] * fp84;
LIBINT2_REALTYPE fp101;
fp101 = fp104 + fp102;
LIBINT2_REALTYPE fp87;
fp87 = inteval->two_alpha0_bra[vi] * fp101;
LIBINT2_REALTYPE fp0;
fp0 = fp87;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 111 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
