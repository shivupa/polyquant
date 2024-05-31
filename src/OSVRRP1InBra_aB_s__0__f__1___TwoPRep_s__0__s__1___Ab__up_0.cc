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
void OSVRRP1InBra_aB_s__0__f__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = inteval->WQ_z[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*6+3)*1+lsi)*1], fp1);
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*3+1)*1+lsi)*1], src2[((hsi*3+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp4;
fp4 = inteval->oo2e[vi] * fp35;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WQ_z[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*6+5)*1+lsi)*1], fp6);
LIBINT2_REALTYPE fp3;
fp3 = fp5 - fp4;
target[((hsi*10+8)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*3+0)*1+lsi)*1], src2[((hsi*3+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2e[vi] * fp42;
LIBINT2_REALTYPE fp10;
fp10 = inteval->WQ_z[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*6+4)*1+lsi)*1], fp10);
LIBINT2_REALTYPE fp8;
fp8 = fp9 - fp16;
target[((hsi*10+7)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp13;
fp13 = inteval->WQ_z[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*6+1)*1+lsi)*1], fp13);
target[((hsi*10+6)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WQ_y[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*6+3)*1+lsi)*1], fp18);
LIBINT2_REALTYPE fp15;
fp15 = fp17 - fp16;
target[((hsi*10+5)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WQ_z[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*6+0)*1+lsi)*1], fp21);
target[((hsi*10+4)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WQ_y[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*6+0)*1+lsi)*1], fp24);
target[((hsi*10+3)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp44;
fp44 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*3+2)*1+lsi)*1], src2[((hsi*3+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp27;
fp27 = fp44 * fp28;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WQ_z[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*6+2)*1+lsi)*1], fp31);
LIBINT2_REALTYPE fp26;
fp26 = fp30 - fp27;
target[((hsi*10+2)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp34;
fp34 = fp44 * fp35;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WQ_y[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*6+1)*1+lsi)*1], fp38);
LIBINT2_REALTYPE fp33;
fp33 = fp37 - fp34;
target[((hsi*10+1)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp41;
fp41 = fp44 * fp42;
LIBINT2_REALTYPE fp46;
fp46 = inteval->WQ_x[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*6+0)*1+lsi)*1], fp46);
LIBINT2_REALTYPE fp40;
fp40 = fp45 - fp41;
target[((hsi*10+0)*1+lsi)*1] = fp40;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 48 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
