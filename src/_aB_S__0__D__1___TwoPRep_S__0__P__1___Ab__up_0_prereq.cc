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
void _aB_S__0__D__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp83;
fp83 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp83);
LIBINT2_REALTYPE fp44;
fp44 = inteval->WQ_z[vi] * fp82;
LIBINT2_REALTYPE fp86;
fp86 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp86);
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->QC_z[vi], fp85, fp44);
LIBINT2_REALTYPE fp10;
fp10 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp101;
fp101 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp101);
LIBINT2_REALTYPE fp77;
fp77 = inteval->WQ_z[vi] * fp100;
LIBINT2_REALTYPE fp104;
fp104 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp104);
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->QC_z[vi], fp103, fp77);
LIBINT2_REALTYPE fp5;
fp5 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp98;
fp98 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp98);
LIBINT2_REALTYPE fp89;
fp89 = inteval->WQ_y[vi] * fp97;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->QC_y[vi], fp100, fp89);
LIBINT2_REALTYPE fp17;
fp17 = inteval->WQ_z[vi] * fp88;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WQ_y[vi] * fp100;
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->QC_y[vi], fp103, fp92);
LIBINT2_REALTYPE fp3;
fp3 = fp91;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->QC_z[vi], fp3, fp17);
LIBINT2_REALTYPE fp15;
fp15 = fp16;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp15),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp124;
fp124 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp74;
fp74 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp74);
LIBINT2_REALTYPE fp71;
fp71 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp71);
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_minus(inteval->roe[vi], fp70, fp73);
LIBINT2_REALTYPE fp20;
fp20 = fp124 * fp21;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp107;
fp107 = inteval->oo2e[vi] * fp108;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp30);
LIBINT2_REALTYPE fp34;
fp34 = inteval->WQ_z[vi] * fp29;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->QC_z[vi], fp70, fp34);
LIBINT2_REALTYPE fp32;
fp32 = fp33 - fp107;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WQ_z[vi] * fp32;
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi]);
LIBINT2_REALTYPE fp114;
fp114 = inteval->oo2e[vi] * fp115;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WQ_z[vi] * fp70;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->QC_z[vi], fp73, fp38);
LIBINT2_REALTYPE fp36;
fp36 = fp37 - fp114;
LIBINT2_REALTYPE fp12;
fp12 = fp36;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->QC_z[vi], fp12, fp24);
LIBINT2_REALTYPE fp19;
fp19 = fp23 - fp20;
LIBINT2_REALTYPE fp14;
fp14 = fp19;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp27;
fp27 = inteval->WQ_y[vi] * fp32;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->QC_y[vi], fp12, fp27);
LIBINT2_REALTYPE fp13;
fp13 = fp26;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp13),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp41;
fp41 = inteval->WQ_x[vi] * fp32;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->QC_x[vi], fp12, fp41);
LIBINT2_REALTYPE fp11;
fp11 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp57);
LIBINT2_REALTYPE fp61;
fp61 = inteval->WQ_y[vi] * fp56;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->QC_y[vi], fp82, fp61);
LIBINT2_REALTYPE fp59;
fp59 = fp60 - fp107;
LIBINT2_REALTYPE fp47;
fp47 = inteval->WQ_z[vi] * fp59;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WQ_y[vi] * fp82;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->QC_y[vi], fp85, fp65);
LIBINT2_REALTYPE fp63;
fp63 = fp64 - fp114;
LIBINT2_REALTYPE fp7;
fp7 = fp63;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->QC_z[vi], fp7, fp47);
LIBINT2_REALTYPE fp9;
fp9 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_minus(inteval->roe[vi], fp82, fp85);
LIBINT2_REALTYPE fp50;
fp50 = fp124 * fp51;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WQ_y[vi] * fp59;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->QC_y[vi], fp7, fp54);
LIBINT2_REALTYPE fp49;
fp49 = fp53 - fp50;
LIBINT2_REALTYPE fp8;
fp8 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp8),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp68;
fp68 = inteval->WQ_x[vi] * fp59;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->QC_x[vi], fp7, fp68);
LIBINT2_REALTYPE fp6;
fp6 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp111;
fp111 = inteval->WQ_x[vi] * fp97;
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->QC_x[vi], fp100, fp111);
LIBINT2_REALTYPE fp106;
fp106 = fp110 - fp107;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WQ_z[vi] * fp106;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WQ_x[vi] * fp100;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->QC_x[vi], fp103, fp118);
LIBINT2_REALTYPE fp113;
fp113 = fp117 - fp114;
LIBINT2_REALTYPE fp1;
fp1 = fp113;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->QC_z[vi], fp1, fp80);
LIBINT2_REALTYPE fp4;
fp4 = fp79;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp95;
fp95 = inteval->WQ_y[vi] * fp106;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->QC_y[vi], fp1, fp95);
LIBINT2_REALTYPE fp2;
fp2 = fp94;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_minus(inteval->roe[vi], fp100, fp103);
LIBINT2_REALTYPE fp121;
fp121 = fp124 * fp122;
LIBINT2_REALTYPE fp126;
fp126 = inteval->WQ_x[vi] * fp106;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->QC_x[vi], fp1, fp126);
LIBINT2_REALTYPE fp120;
fp120 = fp125 - fp121;
LIBINT2_REALTYPE fp0;
fp0 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 128 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
