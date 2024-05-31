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
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4617)*1+lsi)*1]), &(inteval->stack[((hsi*45+1944)*1+lsi)*1]), &(inteval->stack[((hsi*36+1989)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4509)*1+lsi)*1]), &(inteval->stack[((hsi*45+1863)*1+lsi)*1]), &(inteval->stack[((hsi*36+1908)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4401)*1+lsi)*1]), &(inteval->stack[((hsi*45+1782)*1+lsi)*1]), &(inteval->stack[((hsi*36+1827)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4293)*1+lsi)*1]), &(inteval->stack[((hsi*45+1701)*1+lsi)*1]), &(inteval->stack[((hsi*36+1746)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4185)*1+lsi)*1]), &(inteval->stack[((hsi*45+1620)*1+lsi)*1]), &(inteval->stack[((hsi*36+1665)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4077)*1+lsi)*1]), &(inteval->stack[((hsi*45+1539)*1+lsi)*1]), &(inteval->stack[((hsi*36+1584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3969)*1+lsi)*1]), &(inteval->stack[((hsi*45+1458)*1+lsi)*1]), &(inteval->stack[((hsi*36+1503)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3861)*1+lsi)*1]), &(inteval->stack[((hsi*45+1377)*1+lsi)*1]), &(inteval->stack[((hsi*36+1422)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3753)*1+lsi)*1]), &(inteval->stack[((hsi*45+1296)*1+lsi)*1]), &(inteval->stack[((hsi*36+1341)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3645)*1+lsi)*1]), &(inteval->stack[((hsi*45+1215)*1+lsi)*1]), &(inteval->stack[((hsi*36+1260)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3537)*1+lsi)*1]), &(inteval->stack[((hsi*45+1134)*1+lsi)*1]), &(inteval->stack[((hsi*36+1179)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3429)*1+lsi)*1]), &(inteval->stack[((hsi*45+1053)*1+lsi)*1]), &(inteval->stack[((hsi*36+1098)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3321)*1+lsi)*1]), &(inteval->stack[((hsi*45+972)*1+lsi)*1]), &(inteval->stack[((hsi*36+1017)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3213)*1+lsi)*1]), &(inteval->stack[((hsi*45+891)*1+lsi)*1]), &(inteval->stack[((hsi*36+936)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3105)*1+lsi)*1]), &(inteval->stack[((hsi*45+810)*1+lsi)*1]), &(inteval->stack[((hsi*36+855)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2997)*1+lsi)*1]), &(inteval->stack[((hsi*45+729)*1+lsi)*1]), &(inteval->stack[((hsi*36+774)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2889)*1+lsi)*1]), &(inteval->stack[((hsi*45+648)*1+lsi)*1]), &(inteval->stack[((hsi*36+693)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2781)*1+lsi)*1]), &(inteval->stack[((hsi*45+567)*1+lsi)*1]), &(inteval->stack[((hsi*36+612)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2673)*1+lsi)*1]), &(inteval->stack[((hsi*45+486)*1+lsi)*1]), &(inteval->stack[((hsi*36+531)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2565)*1+lsi)*1]), &(inteval->stack[((hsi*45+405)*1+lsi)*1]), &(inteval->stack[((hsi*36+450)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2457)*1+lsi)*1]), &(inteval->stack[((hsi*45+324)*1+lsi)*1]), &(inteval->stack[((hsi*36+369)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2349)*1+lsi)*1]), &(inteval->stack[((hsi*45+243)*1+lsi)*1]), &(inteval->stack[((hsi*36+288)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2241)*1+lsi)*1]), &(inteval->stack[((hsi*45+162)*1+lsi)*1]), &(inteval->stack[((hsi*36+207)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2133)*1+lsi)*1]), &(inteval->stack[((hsi*45+81)*1+lsi)*1]), &(inteval->stack[((hsi*36+126)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2025)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]),1);
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
