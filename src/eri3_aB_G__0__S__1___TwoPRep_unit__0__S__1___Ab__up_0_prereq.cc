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
void eri3_aB_G__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_minus(inteval->roz[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp70;
fp70 = inteval->oo2z[vi] * fp71;
LIBINT2_REALTYPE fp32;
fp32 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_minus(inteval->WP_z[vi], fp32, fp70);
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_x[vi] * fp35;
LIBINT2_REALTYPE fp15;
fp15 = inteval->WP_y[vi] * fp91;
LIBINT2_REALTYPE fp14;
fp14 = fp15;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp49;
fp49 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_minus(inteval->WP_y[vi], fp49, fp70);
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_x[vi] * fp52;
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_z[vi] * fp93;
LIBINT2_REALTYPE fp13;
fp13 = fp16;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_minus(inteval->WP_x[vi], fp66, fp70);
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_y[vi] * fp69;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * fp95;
LIBINT2_REALTYPE fp12;
fp12 = fp17;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_minus(inteval->roz[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi]);
LIBINT2_REALTYPE fp101;
fp101 = inteval->oo2z[vi] * fp102;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_minus(inteval->WP_y[vi], fp51, fp101);
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_minus(inteval->roz[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp75;
fp75 = inteval->oo2z[vi] * fp76;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_minus(inteval->WP_y[vi], fp50, fp75);
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_minus(inteval->roz[vi], fp54, fp98);
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_z[vi] * fp52;
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->WP_z[vi], fp92, fp19);
LIBINT2_REALTYPE fp11;
fp11 = fp18;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_minus(inteval->WP_x[vi], fp68, fp101);
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_minus(inteval->WP_x[vi], fp67, fp75);
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_minus(inteval->roz[vi], fp74, fp100);
LIBINT2_REALTYPE fp24;
fp24 = inteval->oo2z[vi] * fp87;
LIBINT2_REALTYPE fp94;
fp94 = inteval->WP_z[vi] * fp69;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_minus(inteval->WP_z[vi], fp94, fp24);
LIBINT2_REALTYPE fp10;
fp10 = fp21;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_minus(inteval->WP_y[vi], fp95, fp24);
LIBINT2_REALTYPE fp9;
fp9 = fp23;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp83;
fp83 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_minus(inteval->roz[vi], fp33, fp34);
LIBINT2_REALTYPE fp40;
fp40 = fp83 * fp41;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(inteval->WP_z[vi], fp35, fp40);
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_y[vi] * fp39;
LIBINT2_REALTYPE fp8;
fp8 = fp26;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_x[vi] * fp39;
LIBINT2_REALTYPE fp7;
fp7 = fp27;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_minus(inteval->roz[vi], fp50, fp51);
LIBINT2_REALTYPE fp57;
fp57 = fp83 * fp58;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->WP_y[vi], fp52, fp57);
LIBINT2_REALTYPE fp28;
fp28 = inteval->WP_z[vi] * fp56;
LIBINT2_REALTYPE fp6;
fp6 = fp28;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp29;
fp29 = inteval->WP_x[vi] * fp56;
LIBINT2_REALTYPE fp5;
fp5 = fp29;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_minus(inteval->roz[vi], fp67, fp68);
LIBINT2_REALTYPE fp80;
fp80 = fp83 * fp81;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_minus(inteval->WP_x[vi], fp69, fp80);
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_z[vi] * fp79;
LIBINT2_REALTYPE fp4;
fp4 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_y[vi] * fp79;
LIBINT2_REALTYPE fp3;
fp3 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp89;
fp89 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_minus(inteval->WP_z[vi], fp34, fp101);
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_minus(inteval->WP_z[vi], fp33, fp75);
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_minus(inteval->roz[vi], fp37, fp96);
LIBINT2_REALTYPE fp45;
fp45 = fp89 * fp46;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_minus(inteval->WP_z[vi], fp39, fp45);
LIBINT2_REALTYPE fp2;
fp2 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp62;
fp62 = fp89 * fp63;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_minus(inteval->WP_y[vi], fp56, fp62);
LIBINT2_REALTYPE fp1;
fp1 = fp61;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp86;
fp86 = fp89 * fp87;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_minus(inteval->WP_x[vi], fp79, fp86);
LIBINT2_REALTYPE fp0;
fp0 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*15+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 105 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
