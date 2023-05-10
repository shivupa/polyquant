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

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void CR_aB_Y10__0___Overlap_Y1__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*22+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp103;
fp103 = inteval->PA_y[vi] * target[((hsi*22+0)*1+lsi)*1];
target[((hsi*22+2)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp97;
fp97 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * target[((hsi*22+0)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+2)*1+lsi)*1], fp96);
target[((hsi*22+4)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp75;
fp75 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp74;
fp74 = fp75 * target[((hsi*22+4)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * target[((hsi*22+2)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+4)*1+lsi)*1], fp85);
target[((hsi*22+6)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+6)*1+lsi)*1], fp74);
target[((hsi*22+8)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp53;
fp53 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp53 * target[((hsi*22+8)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp64 * target[((hsi*22+6)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+8)*1+lsi)*1], fp63);
target[((hsi*22+10)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+10)*1+lsi)*1], fp52);
target[((hsi*22+12)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp31;
fp31 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp30;
fp30 = fp31 * target[((hsi*22+12)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp42 * target[((hsi*22+10)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+12)*1+lsi)*1], fp41);
target[((hsi*22+14)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+14)*1+lsi)*1], fp30);
target[((hsi*22+16)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp104;
fp104 = inteval->PB_y[vi] * target[((hsi*22+0)*1+lsi)*1];
target[((hsi*22+1)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * target[((hsi*22+0)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+1)*1+lsi)*1], fp100);
target[((hsi*22+3)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp90;
fp90 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * target[((hsi*22+2)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp93 * target[((hsi*22+1)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+3)*1+lsi)*1], fp92);
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
target[((hsi*22+5)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp79;
fp79 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * target[((hsi*22+4)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp82 * target[((hsi*22+3)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+5)*1+lsi)*1], fp81);
LIBINT2_REALTYPE fp77;
fp77 = fp80 + fp78;
target[((hsi*22+7)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp68;
fp68 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * target[((hsi*22+6)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp71 * target[((hsi*22+5)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+7)*1+lsi)*1], fp70);
LIBINT2_REALTYPE fp66;
fp66 = fp69 + fp67;
target[((hsi*22+9)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp46;
fp46 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp45;
fp45 = fp46 * target[((hsi*22+10)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp48;
fp48 = fp49 * target[((hsi*22+9)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp57 * target[((hsi*22+8)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp60 * target[((hsi*22+7)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+9)*1+lsi)*1], fp59);
LIBINT2_REALTYPE fp55;
fp55 = fp58 + fp56;
target[((hsi*22+11)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+11)*1+lsi)*1], fp48);
LIBINT2_REALTYPE fp44;
fp44 = fp47 + fp45;
target[((hsi*22+13)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp35;
fp35 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp34;
fp34 = fp35 * target[((hsi*22+12)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * target[((hsi*22+11)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+13)*1+lsi)*1], fp37);
LIBINT2_REALTYPE fp33;
fp33 = fp36 + fp34;
target[((hsi*22+15)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp24;
fp24 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp23;
fp23 = fp24 * target[((hsi*22+14)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp27 * target[((hsi*22+13)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+15)*1+lsi)*1], fp26);
LIBINT2_REALTYPE fp22;
fp22 = fp25 + fp23;
target[((hsi*22+17)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp20;
fp20 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * target[((hsi*22+14)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+16)*1+lsi)*1], fp19);
target[((hsi*22+18)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp13;
fp13 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp12;
fp12 = fp13 * target[((hsi*22+16)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*22+15)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+17)*1+lsi)*1], fp15);
LIBINT2_REALTYPE fp11;
fp11 = fp14 + fp12;
target[((hsi*22+19)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp9;
fp9 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*22+16)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+18)*1+lsi)*1], fp8);
target[((hsi*22+20)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*22+18)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*22+17)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*22+19)*1+lsi)*1], fp4);
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*22+21)*1+lsi)*1] = fp0;
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
