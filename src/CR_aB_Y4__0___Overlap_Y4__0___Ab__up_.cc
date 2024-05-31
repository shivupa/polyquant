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

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void CR_aB_Y4__0___Overlap_Y4__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*25+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp88;
fp88 = inteval->PB_y[vi] * target[((hsi*25+0)*1+lsi)*1];
target[((hsi*25+1)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp86;
fp86 = inteval->oo2z[vi] * target[((hsi*25+0)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*25+1)*1+lsi)*1], fp86);
target[((hsi*25+2)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp83;
fp83 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * target[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*25+2)*1+lsi)*1], fp82);
target[((hsi*25+3)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp76;
fp76 = inteval->PA_y[vi] * target[((hsi*25+0)*1+lsi)*1];
target[((hsi*25+5)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+2)*1+lsi)*1], fp82);
target[((hsi*25+7)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp79;
fp79 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * target[((hsi*25+2)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+3)*1+lsi)*1], fp78);
target[((hsi*25+8)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+5)*1+lsi)*1], fp86);
target[((hsi*25+10)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp60;
fp60 = inteval->oo2z[vi] * target[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * target[((hsi*25+1)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+1)*1+lsi)*1], fp86);
target[((hsi*25+6)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+6)*1+lsi)*1], fp62);
LIBINT2_REALTYPE fp59;
fp59 = fp61 + fp60;
target[((hsi*25+11)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp50;
fp50 = fp79 * target[((hsi*25+7)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * target[((hsi*25+3)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+8)*1+lsi)*1], fp52);
LIBINT2_REALTYPE fp49;
fp49 = fp51 + fp50;
target[((hsi*25+13)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*25+3)*1+lsi)*1], fp78);
target[((hsi*25+4)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp68;
fp68 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * target[((hsi*25+3)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+4)*1+lsi)*1], fp67);
target[((hsi*25+9)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp45;
fp45 = fp68 * target[((hsi*25+8)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * target[((hsi*25+4)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+9)*1+lsi)*1], fp47);
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
target[((hsi*25+14)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp42;
fp42 = fp83 * target[((hsi*25+5)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+10)*1+lsi)*1], fp42);
target[((hsi*25+15)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp38;
fp38 = inteval->oo2z[vi] * target[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp83 * target[((hsi*25+6)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+11)*1+lsi)*1], fp55);
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
target[((hsi*25+16)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp33;
fp33 = fp83 * target[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp83 * target[((hsi*25+7)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->oo2z[vi] * target[((hsi*25+2)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+7)*1+lsi)*1], fp57);
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
target[((hsi*25+12)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+12)*1+lsi)*1], fp35);
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
target[((hsi*25+17)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp28;
fp28 = fp79 * target[((hsi*25+12)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp83 * target[((hsi*25+8)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+13)*1+lsi)*1], fp30);
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
target[((hsi*25+18)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp23;
fp23 = fp68 * target[((hsi*25+13)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp83 * target[((hsi*25+9)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+14)*1+lsi)*1], fp25);
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
target[((hsi*25+19)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp79 * target[((hsi*25+10)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+15)*1+lsi)*1], fp20);
target[((hsi*25+20)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp15;
fp15 = inteval->oo2z[vi] * target[((hsi*25+15)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp79 * target[((hsi*25+11)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+16)*1+lsi)*1], fp17);
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
target[((hsi*25+21)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp11;
fp11 = fp83 * target[((hsi*25+16)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+17)*1+lsi)*1], fp28);
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*25+22)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp6;
fp6 = fp79 * target[((hsi*25+17)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp79 * target[((hsi*25+13)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+18)*1+lsi)*1], fp8);
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
target[((hsi*25+23)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp1;
fp1 = fp68 * target[((hsi*25+18)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp79 * target[((hsi*25+14)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*25+19)*1+lsi)*1], fp3);
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*25+24)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 89 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
