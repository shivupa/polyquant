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
#include <HRRPart0ket0bra0kp.h>
#include <_sphemultipole_P_K_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_P_K(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2025)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_P_K_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4617)*1+lsi)*1]), &(inteval->stack[((hsi*45+1080)*1+lsi)*1]), &(inteval->stack[((hsi*36+1989)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4509)*1+lsi)*1]), &(inteval->stack[((hsi*45+1035)*1+lsi)*1]), &(inteval->stack[((hsi*36+1953)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4401)*1+lsi)*1]), &(inteval->stack[((hsi*45+990)*1+lsi)*1]), &(inteval->stack[((hsi*36+1917)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4293)*1+lsi)*1]), &(inteval->stack[((hsi*45+945)*1+lsi)*1]), &(inteval->stack[((hsi*36+1881)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4185)*1+lsi)*1]), &(inteval->stack[((hsi*45+900)*1+lsi)*1]), &(inteval->stack[((hsi*36+1845)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4077)*1+lsi)*1]), &(inteval->stack[((hsi*45+855)*1+lsi)*1]), &(inteval->stack[((hsi*36+1809)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3969)*1+lsi)*1]), &(inteval->stack[((hsi*45+810)*1+lsi)*1]), &(inteval->stack[((hsi*36+1773)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3861)*1+lsi)*1]), &(inteval->stack[((hsi*45+765)*1+lsi)*1]), &(inteval->stack[((hsi*36+1737)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3753)*1+lsi)*1]), &(inteval->stack[((hsi*45+720)*1+lsi)*1]), &(inteval->stack[((hsi*36+1701)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3645)*1+lsi)*1]), &(inteval->stack[((hsi*45+675)*1+lsi)*1]), &(inteval->stack[((hsi*36+1665)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3537)*1+lsi)*1]), &(inteval->stack[((hsi*45+630)*1+lsi)*1]), &(inteval->stack[((hsi*36+1629)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3429)*1+lsi)*1]), &(inteval->stack[((hsi*45+585)*1+lsi)*1]), &(inteval->stack[((hsi*36+1593)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3321)*1+lsi)*1]), &(inteval->stack[((hsi*45+540)*1+lsi)*1]), &(inteval->stack[((hsi*36+1557)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3213)*1+lsi)*1]), &(inteval->stack[((hsi*45+495)*1+lsi)*1]), &(inteval->stack[((hsi*36+1521)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3105)*1+lsi)*1]), &(inteval->stack[((hsi*45+450)*1+lsi)*1]), &(inteval->stack[((hsi*36+1485)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2997)*1+lsi)*1]), &(inteval->stack[((hsi*45+405)*1+lsi)*1]), &(inteval->stack[((hsi*36+1449)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2889)*1+lsi)*1]), &(inteval->stack[((hsi*45+360)*1+lsi)*1]), &(inteval->stack[((hsi*36+1413)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2781)*1+lsi)*1]), &(inteval->stack[((hsi*45+315)*1+lsi)*1]), &(inteval->stack[((hsi*36+1377)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2673)*1+lsi)*1]), &(inteval->stack[((hsi*45+270)*1+lsi)*1]), &(inteval->stack[((hsi*36+1341)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2565)*1+lsi)*1]), &(inteval->stack[((hsi*45+225)*1+lsi)*1]), &(inteval->stack[((hsi*36+1305)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2457)*1+lsi)*1]), &(inteval->stack[((hsi*45+180)*1+lsi)*1]), &(inteval->stack[((hsi*36+1269)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2349)*1+lsi)*1]), &(inteval->stack[((hsi*45+135)*1+lsi)*1]), &(inteval->stack[((hsi*36+1233)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2241)*1+lsi)*1]), &(inteval->stack[((hsi*45+90)*1+lsi)*1]), &(inteval->stack[((hsi*36+1197)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2133)*1+lsi)*1]), &(inteval->stack[((hsi*45+45)*1+lsi)*1]), &(inteval->stack[((hsi*36+1161)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2025)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+1125)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*108+2025)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*108+2133)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*108+2241)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*108+2349)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*108+2457)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*108+2565)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*108+2673)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*108+2781)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*108+2889)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*108+2997)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*108+3105)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*108+3213)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*108+3321)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*108+3429)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*108+3537)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*108+3645)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*108+3753)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*108+3861)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*108+3969)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*108+4077)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*108+4185)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*108+4293)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*108+4401)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*108+4509)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*108+4617)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
