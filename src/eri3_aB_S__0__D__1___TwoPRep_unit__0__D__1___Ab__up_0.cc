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
#include <eri3_aB_S__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_S__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,31)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_S__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+20)*1+lsi)*1], inteval->stack[((hsi*1+21)*1+lsi)*1]);
LIBINT2_REALTYPE fp123;
fp123 = inteval->CD_z[vi] * fp40;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+23)*1+lsi)*1], inteval->stack[((hsi*1+26)*1+lsi)*1]);
LIBINT2_REALTYPE fp122;
fp122 = fp26 + fp123;
inteval->stack[((hsi*36+48)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+20)*1+lsi)*1], inteval->stack[((hsi*1+19)*1+lsi)*1]);
LIBINT2_REALTYPE fp125;
fp125 = inteval->CD_z[vi] * fp44;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+23)*1+lsi)*1], inteval->stack[((hsi*1+25)*1+lsi)*1]);
LIBINT2_REALTYPE fp124;
fp124 = fp30 + fp125;
inteval->stack[((hsi*36+47)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+21)*1+lsi)*1], inteval->stack[((hsi*1+24)*1+lsi)*1]);
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->CD_y[vi], fp44, fp34);
inteval->stack[((hsi*36+46)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+20)*1+lsi)*1], inteval->stack[((hsi*1+23)*1+lsi)*1]);
LIBINT2_REALTYPE fp129;
fp129 = inteval->CD_z[vi] * fp36;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+23)*1+lsi)*1], inteval->stack[((hsi*1+22)*1+lsi)*1]);
LIBINT2_REALTYPE fp128;
fp128 = fp38 + fp129;
inteval->stack[((hsi*36+45)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+21)*1+lsi)*1], inteval->stack[((hsi*1+14)*1+lsi)*1]);
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->CD_y[vi], fp40, fp42);
inteval->stack[((hsi*36+44)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+19)*1+lsi)*1], inteval->stack[((hsi*1+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->CD_x[vi], fp44, fp46);
inteval->stack[((hsi*36+43)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+15)*1+lsi)*1], inteval->stack[((hsi*1+18)*1+lsi)*1]);
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+11)*1+lsi)*1], inteval->stack[((hsi*1+13)*1+lsi)*1]);
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->CD_z[vi], fp60, fp48);
inteval->stack[((hsi*36+42)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+15)*1+lsi)*1], inteval->stack[((hsi*1+17)*1+lsi)*1]);
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+11)*1+lsi)*1], inteval->stack[((hsi*1+10)*1+lsi)*1]);
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->CD_z[vi], fp64, fp50);
inteval->stack[((hsi*36+41)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+2)*1+lsi)*1], inteval->stack[((hsi*1+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp157;
fp157 = inteval->CD_x[vi] * fp82;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+1)*1+lsi)*1], inteval->stack[((hsi*1+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp156;
fp156 = fp84 + fp157;
inteval->stack[((hsi*36+31)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+11)*1+lsi)*1], inteval->stack[((hsi*1+15)*1+lsi)*1]);
LIBINT2_REALTYPE fp141;
fp141 = inteval->CD_z[vi] * fp56;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+15)*1+lsi)*1], inteval->stack[((hsi*1+14)*1+lsi)*1]);
LIBINT2_REALTYPE fp140;
fp140 = fp58 + fp141;
inteval->stack[((hsi*36+39)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = inteval->CD_y[vi] * fp60;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+13)*1+lsi)*1], inteval->stack[((hsi*1+12)*1+lsi)*1]);
LIBINT2_REALTYPE fp142;
fp142 = fp62 + fp143;
inteval->stack[((hsi*36+38)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+10)*1+lsi)*1], inteval->stack[((hsi*1+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->CD_x[vi], fp64, fp66);
inteval->stack[((hsi*36+37)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+2)*1+lsi)*1], inteval->stack[((hsi*1+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp147;
fp147 = inteval->CD_z[vi] * fp78;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+6)*1+lsi)*1], inteval->stack[((hsi*1+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp146;
fp146 = fp68 + fp147;
inteval->stack[((hsi*36+36)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+6)*1+lsi)*1], inteval->stack[((hsi*1+8)*1+lsi)*1]);
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->CD_z[vi], fp82, fp70);
inteval->stack[((hsi*36+35)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+4)*1+lsi)*1], inteval->stack[((hsi*1+7)*1+lsi)*1]);
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->CD_y[vi], fp82, fp72);
inteval->stack[((hsi*36+34)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+2)*1+lsi)*1], inteval->stack[((hsi*1+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp153;
fp153 = inteval->CD_z[vi] * fp74;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+6)*1+lsi)*1], inteval->stack[((hsi*1+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp152;
fp152 = fp76 + fp153;
inteval->stack[((hsi*36+33)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = inteval->CD_y[vi] * fp78;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+4)*1+lsi)*1], inteval->stack[((hsi*1+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp154;
fp154 = fp80 + fp155;
inteval->stack[((hsi*36+32)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp139;
fp139 = inteval->CD_y[vi] * fp64;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+13)*1+lsi)*1], inteval->stack[((hsi*1+16)*1+lsi)*1]);
LIBINT2_REALTYPE fp138;
fp138 = fp54 + fp139;
inteval->stack[((hsi*36+40)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+30)*1+lsi)*1], inteval->stack[((hsi*1+15)*1+lsi)*1]);
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->CD_z[vi], fp2, fp42);
inteval->stack[((hsi*36+66)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+30)*1+lsi)*1], inteval->stack[((hsi*1+28)*1+lsi)*1]);
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->CD_z[vi], fp4, fp34);
inteval->stack[((hsi*36+65)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->CD_y[vi], fp4, fp50);
inteval->stack[((hsi*36+64)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+30)*1+lsi)*1], inteval->stack[((hsi*1+21)*1+lsi)*1]);
LIBINT2_REALTYPE fp93;
fp93 = inteval->CD_z[vi] * fp0;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+21)*1+lsi)*1], inteval->stack[((hsi*1+26)*1+lsi)*1]);
LIBINT2_REALTYPE fp92;
fp92 = fp24 + fp93;
inteval->stack[((hsi*36+63)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->CD_y[vi], fp2, fp48);
inteval->stack[((hsi*36+62)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+28)*1+lsi)*1], inteval->stack[((hsi*1+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->CD_x[vi], fp4, fp14);
inteval->stack[((hsi*36+61)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+29)*1+lsi)*1], inteval->stack[((hsi*1+28)*1+lsi)*1]);
LIBINT2_REALTYPE fp99;
fp99 = inteval->CD_z[vi] * fp8;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+19)*1+lsi)*1], inteval->stack[((hsi*1+24)*1+lsi)*1]);
LIBINT2_REALTYPE fp98;
fp98 = fp32 + fp99;
inteval->stack[((hsi*36+60)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+29)*1+lsi)*1], inteval->stack[((hsi*1+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->CD_z[vi], fp10, fp46);
inteval->stack[((hsi*36+59)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+27)*1+lsi)*1], inteval->stack[((hsi*1+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->CD_x[vi], fp22, fp72);
inteval->stack[((hsi*36+49)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+29)*1+lsi)*1], inteval->stack[((hsi*1+19)*1+lsi)*1]);
LIBINT2_REALTYPE fp105;
fp105 = inteval->CD_z[vi] * fp6;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+19)*1+lsi)*1], inteval->stack[((hsi*1+25)*1+lsi)*1]);
LIBINT2_REALTYPE fp104;
fp104 = fp28 + fp105;
inteval->stack[((hsi*36+57)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+28)*1+lsi)*1], inteval->stack[((hsi*1+17)*1+lsi)*1]);
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->CD_y[vi], fp8, fp12);
inteval->stack[((hsi*36+56)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->CD_x[vi], fp10, fp70);
inteval->stack[((hsi*36+55)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+27)*1+lsi)*1], inteval->stack[((hsi*1+10)*1+lsi)*1]);
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->CD_z[vi], fp20, fp12);
inteval->stack[((hsi*36+54)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->CD_z[vi], fp22, fp14);
inteval->stack[((hsi*36+53)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->CD_y[vi], fp22, fp66);
inteval->stack[((hsi*36+52)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+27)*1+lsi)*1], inteval->stack[((hsi*1+28)*1+lsi)*1]);
LIBINT2_REALTYPE fp117;
fp117 = inteval->CD_z[vi] * fp16;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+28)*1+lsi)*1], inteval->stack[((hsi*1+24)*1+lsi)*1]);
LIBINT2_REALTYPE fp116;
fp116 = fp18 + fp117;
inteval->stack[((hsi*36+51)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = inteval->CD_y[vi] * fp20;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+10)*1+lsi)*1], inteval->stack[((hsi*1+16)*1+lsi)*1]);
LIBINT2_REALTYPE fp118;
fp118 = fp52 + fp119;
inteval->stack[((hsi*36+50)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->CD_y[vi], fp10, fp14);
inteval->stack[((hsi*36+58)*1+lsi)*1] = fp102;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*36+31)*1+lsi)*1]);
/** Number of flops = 158 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
