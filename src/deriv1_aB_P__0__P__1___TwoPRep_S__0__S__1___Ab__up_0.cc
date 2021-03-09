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
#include <deriv1_aB_P__0__P__1___TwoPRep_S__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_P__0__P__1___TwoPRep_S__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,81)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__P__1___TwoPRep_S__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+26)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp2 - inteval->stack[((hsi*9+53)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp1 - inteval->stack[((hsi*9+80)*1+lsi)*1];
inteval->stack[((hsi*9+107)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp5;
fp5 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+25)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp5 - inteval->stack[((hsi*9+52)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp4 - inteval->stack[((hsi*9+79)*1+lsi)*1];
inteval->stack[((hsi*9+106)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp8;
fp8 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+24)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp8 - inteval->stack[((hsi*9+51)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp7 - inteval->stack[((hsi*9+78)*1+lsi)*1];
inteval->stack[((hsi*9+105)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp11;
fp11 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+23)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp11 - inteval->stack[((hsi*9+50)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp10 - inteval->stack[((hsi*9+77)*1+lsi)*1];
inteval->stack[((hsi*9+104)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp14;
fp14 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+22)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp14 - inteval->stack[((hsi*9+49)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp13 - inteval->stack[((hsi*9+76)*1+lsi)*1];
inteval->stack[((hsi*9+103)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp17;
fp17 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+21)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp17 - inteval->stack[((hsi*9+48)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp16 - inteval->stack[((hsi*9+75)*1+lsi)*1];
inteval->stack[((hsi*9+102)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp20;
fp20 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+20)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp20 - inteval->stack[((hsi*9+47)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp19 - inteval->stack[((hsi*9+74)*1+lsi)*1];
inteval->stack[((hsi*9+101)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp23;
fp23 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+19)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp23 - inteval->stack[((hsi*9+46)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp22 - inteval->stack[((hsi*9+73)*1+lsi)*1];
inteval->stack[((hsi*9+100)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp26;
fp26 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+18)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp26 - inteval->stack[((hsi*9+45)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp25 - inteval->stack[((hsi*9+72)*1+lsi)*1];
inteval->stack[((hsi*9+99)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp29;
fp29 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+17)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp29 - inteval->stack[((hsi*9+44)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp28 - inteval->stack[((hsi*9+71)*1+lsi)*1];
inteval->stack[((hsi*9+98)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp32;
fp32 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+16)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp32 - inteval->stack[((hsi*9+43)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp31 - inteval->stack[((hsi*9+70)*1+lsi)*1];
inteval->stack[((hsi*9+97)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp35;
fp35 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+15)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp35 - inteval->stack[((hsi*9+42)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp34 - inteval->stack[((hsi*9+69)*1+lsi)*1];
inteval->stack[((hsi*9+96)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp38;
fp38 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+14)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp38 - inteval->stack[((hsi*9+41)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp37 - inteval->stack[((hsi*9+68)*1+lsi)*1];
inteval->stack[((hsi*9+95)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp41;
fp41 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+13)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp41 - inteval->stack[((hsi*9+40)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp40 - inteval->stack[((hsi*9+67)*1+lsi)*1];
inteval->stack[((hsi*9+94)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp44;
fp44 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+12)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp44 - inteval->stack[((hsi*9+39)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp43 - inteval->stack[((hsi*9+66)*1+lsi)*1];
inteval->stack[((hsi*9+93)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp47;
fp47 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+11)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp47 - inteval->stack[((hsi*9+38)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp46 - inteval->stack[((hsi*9+65)*1+lsi)*1];
inteval->stack[((hsi*9+92)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp50;
fp50 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+10)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp50 - inteval->stack[((hsi*9+37)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp49 - inteval->stack[((hsi*9+64)*1+lsi)*1];
inteval->stack[((hsi*9+91)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp53;
fp53 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+9)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp53 - inteval->stack[((hsi*9+36)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp52 - inteval->stack[((hsi*9+63)*1+lsi)*1];
inteval->stack[((hsi*9+90)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp56;
fp56 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp56 - inteval->stack[((hsi*9+35)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp55 - inteval->stack[((hsi*9+62)*1+lsi)*1];
inteval->stack[((hsi*9+89)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp59;
fp59 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp59 - inteval->stack[((hsi*9+34)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp58 - inteval->stack[((hsi*9+61)*1+lsi)*1];
inteval->stack[((hsi*9+88)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp62;
fp62 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp62 - inteval->stack[((hsi*9+33)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp61 - inteval->stack[((hsi*9+60)*1+lsi)*1];
inteval->stack[((hsi*9+87)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp65;
fp65 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp65 - inteval->stack[((hsi*9+32)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp64 - inteval->stack[((hsi*9+59)*1+lsi)*1];
inteval->stack[((hsi*9+86)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp68;
fp68 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp68 - inteval->stack[((hsi*9+31)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp67 - inteval->stack[((hsi*9+58)*1+lsi)*1];
inteval->stack[((hsi*9+85)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp71;
fp71 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp71 - inteval->stack[((hsi*9+30)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp70 - inteval->stack[((hsi*9+57)*1+lsi)*1];
inteval->stack[((hsi*9+84)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp74;
fp74 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp74 - inteval->stack[((hsi*9+29)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp73 - inteval->stack[((hsi*9+56)*1+lsi)*1];
inteval->stack[((hsi*9+83)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp77;
fp77 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp77 - inteval->stack[((hsi*9+28)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp76 - inteval->stack[((hsi*9+55)*1+lsi)*1];
inteval->stack[((hsi*9+82)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp80;
fp80 = -1.0000000000000000e+00 * inteval->stack[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp80 - inteval->stack[((hsi*9+27)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp79 - inteval->stack[((hsi*9+54)*1+lsi)*1];
inteval->stack[((hsi*9+81)*1+lsi)*1] = fp78;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*9+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*9+9)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*9+18)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*9+27)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*9+36)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*9+45)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*9+81)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*9+90)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*9+99)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*9+54)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*9+63)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*9+72)*1+lsi)*1]);
/** Number of flops = 81 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
