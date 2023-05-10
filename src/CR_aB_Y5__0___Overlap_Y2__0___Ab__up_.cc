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
void CR_aB_Y5__0___Overlap_Y2__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*18+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp85;
fp85 = inteval->PB_y[vi] * target[((hsi*18+0)*1+lsi)*1];
target[((hsi*18+1)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp80;
fp80 = inteval->PA_y[vi] * target[((hsi*18+0)*1+lsi)*1];
target[((hsi*18+3)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp78;
fp78 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp77;
fp77 = fp78 * target[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+1)*1+lsi)*1], fp77);
target[((hsi*18+4)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp70;
fp70 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp70 * target[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+3)*1+lsi)*1], fp69);
target[((hsi*18+6)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp63;
fp63 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp62;
fp62 = fp63 * target[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp66 * target[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+4)*1+lsi)*1], fp65);
LIBINT2_REALTYPE fp61;
fp61 = fp64 + fp62;
target[((hsi*18+7)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp45;
fp45 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp45 * target[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * target[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+7)*1+lsi)*1], fp47);
LIBINT2_REALTYPE fp43;
fp43 = fp46 + fp44;
target[((hsi*18+10)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp52;
fp52 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp51;
fp51 = fp52 * target[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+6)*1+lsi)*1], fp51);
target[((hsi*18+9)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp38;
fp38 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * target[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp74 * target[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * target[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*18+1)*1+lsi)*1], fp82);
target[((hsi*18+2)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+2)*1+lsi)*1], fp73);
target[((hsi*18+5)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp41;
fp41 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * target[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp56 * target[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * target[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+5)*1+lsi)*1], fp58);
LIBINT2_REALTYPE fp54;
fp54 = fp57 + fp55;
target[((hsi*18+8)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+8)*1+lsi)*1], fp40);
LIBINT2_REALTYPE fp36;
fp36 = fp39 + fp37;
target[((hsi*18+11)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp34;
fp34 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp34 * target[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+9)*1+lsi)*1], fp33);
target[((hsi*18+12)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp27 * target[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+10)*1+lsi)*1], fp29);
LIBINT2_REALTYPE fp25;
fp25 = fp28 + fp26;
target[((hsi*18+13)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp20;
fp20 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * target[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+11)*1+lsi)*1], fp22);
LIBINT2_REALTYPE fp18;
fp18 = fp21 + fp19;
target[((hsi*18+14)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp16;
fp16 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+12)*1+lsi)*1], fp15);
target[((hsi*18+15)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+13)*1+lsi)*1], fp11);
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*18+16)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*18+14)*1+lsi)*1], fp4);
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*18+17)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 86 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
