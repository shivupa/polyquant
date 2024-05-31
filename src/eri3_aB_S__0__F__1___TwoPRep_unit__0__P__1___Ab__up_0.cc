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
#include <eri3_aB_S__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_S__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,25)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_S__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+1)*1+lsi)*1], inteval->stack[((hsi*1+2)*1+lsi)*1]);
inteval->stack[((hsi*30+26)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+1)*1+lsi)*1], inteval->stack[((hsi*1+3)*1+lsi)*1]);
inteval->stack[((hsi*30+27)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+5)*1+lsi)*1], inteval->stack[((hsi*1+4)*1+lsi)*1]);
inteval->stack[((hsi*30+28)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+5)*1+lsi)*1], inteval->stack[((hsi*1+6)*1+lsi)*1]);
inteval->stack[((hsi*30+29)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+5)*1+lsi)*1], inteval->stack[((hsi*1+7)*1+lsi)*1]);
inteval->stack[((hsi*30+30)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+9)*1+lsi)*1], inteval->stack[((hsi*1+8)*1+lsi)*1]);
inteval->stack[((hsi*30+31)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+9)*1+lsi)*1], inteval->stack[((hsi*1+10)*1+lsi)*1]);
inteval->stack[((hsi*30+32)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+9)*1+lsi)*1], inteval->stack[((hsi*1+11)*1+lsi)*1]);
inteval->stack[((hsi*30+33)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+12)*1+lsi)*1], inteval->stack[((hsi*1+2)*1+lsi)*1]);
inteval->stack[((hsi*30+34)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+12)*1+lsi)*1], inteval->stack[((hsi*1+13)*1+lsi)*1]);
inteval->stack[((hsi*30+35)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+12)*1+lsi)*1], inteval->stack[((hsi*1+14)*1+lsi)*1]);
inteval->stack[((hsi*30+36)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+15)*1+lsi)*1], inteval->stack[((hsi*1+3)*1+lsi)*1]);
inteval->stack[((hsi*30+37)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+15)*1+lsi)*1], inteval->stack[((hsi*1+14)*1+lsi)*1]);
inteval->stack[((hsi*30+38)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+15)*1+lsi)*1], inteval->stack[((hsi*1+16)*1+lsi)*1]);
inteval->stack[((hsi*30+39)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+1)*1+lsi)*1], inteval->stack[((hsi*1+0)*1+lsi)*1]);
inteval->stack[((hsi*30+25)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+17)*1+lsi)*1], inteval->stack[((hsi*1+4)*1+lsi)*1]);
inteval->stack[((hsi*30+41)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+17)*1+lsi)*1], inteval->stack[((hsi*1+18)*1+lsi)*1]);
inteval->stack[((hsi*30+42)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+19)*1+lsi)*1], inteval->stack[((hsi*1+18)*1+lsi)*1]);
inteval->stack[((hsi*30+43)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+19)*1+lsi)*1], inteval->stack[((hsi*1+7)*1+lsi)*1]);
inteval->stack[((hsi*30+44)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+19)*1+lsi)*1], inteval->stack[((hsi*1+20)*1+lsi)*1]);
inteval->stack[((hsi*30+45)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+21)*1+lsi)*1], inteval->stack[((hsi*1+16)*1+lsi)*1]);
inteval->stack[((hsi*30+46)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+21)*1+lsi)*1], inteval->stack[((hsi*1+22)*1+lsi)*1]);
inteval->stack[((hsi*30+47)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+21)*1+lsi)*1], inteval->stack[((hsi*1+8)*1+lsi)*1]);
inteval->stack[((hsi*30+48)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+23)*1+lsi)*1], inteval->stack[((hsi*1+22)*1+lsi)*1]);
inteval->stack[((hsi*30+49)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+23)*1+lsi)*1], inteval->stack[((hsi*1+20)*1+lsi)*1]);
inteval->stack[((hsi*30+50)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+23)*1+lsi)*1], inteval->stack[((hsi*1+10)*1+lsi)*1]);
inteval->stack[((hsi*30+51)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+24)*1+lsi)*1], inteval->stack[((hsi*1+14)*1+lsi)*1]);
inteval->stack[((hsi*30+52)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->CD_y[vi], inteval->stack[((hsi*1+24)*1+lsi)*1], inteval->stack[((hsi*1+18)*1+lsi)*1]);
inteval->stack[((hsi*30+53)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->CD_z[vi], inteval->stack[((hsi*1+24)*1+lsi)*1], inteval->stack[((hsi*1+22)*1+lsi)*1]);
inteval->stack[((hsi*30+54)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->CD_x[vi], inteval->stack[((hsi*1+17)*1+lsi)*1], inteval->stack[((hsi*1+13)*1+lsi)*1]);
inteval->stack[((hsi*30+40)*1+lsi)*1] = fp26;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*30+25)*1+lsi)*1]);
/** Number of flops = 60 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
