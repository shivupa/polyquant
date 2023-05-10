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
#include <HRRPart0ket0bra0psp.h>
#include <_sphemultipole_P_PS_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_P_PS(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_P_PS_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+8352)*1+lsi)*1]), &(inteval->stack[((hsi*78+3456)*1+lsi)*1]), &(inteval->stack[((hsi*66+3534)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+8154)*1+lsi)*1]), &(inteval->stack[((hsi*78+3312)*1+lsi)*1]), &(inteval->stack[((hsi*66+3390)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+7956)*1+lsi)*1]), &(inteval->stack[((hsi*78+3168)*1+lsi)*1]), &(inteval->stack[((hsi*66+3246)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+7758)*1+lsi)*1]), &(inteval->stack[((hsi*78+3024)*1+lsi)*1]), &(inteval->stack[((hsi*66+3102)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+7560)*1+lsi)*1]), &(inteval->stack[((hsi*78+2880)*1+lsi)*1]), &(inteval->stack[((hsi*66+2958)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+7362)*1+lsi)*1]), &(inteval->stack[((hsi*78+2736)*1+lsi)*1]), &(inteval->stack[((hsi*66+2814)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+7164)*1+lsi)*1]), &(inteval->stack[((hsi*78+2592)*1+lsi)*1]), &(inteval->stack[((hsi*66+2670)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+6966)*1+lsi)*1]), &(inteval->stack[((hsi*78+2448)*1+lsi)*1]), &(inteval->stack[((hsi*66+2526)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+6768)*1+lsi)*1]), &(inteval->stack[((hsi*78+2304)*1+lsi)*1]), &(inteval->stack[((hsi*66+2382)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+6570)*1+lsi)*1]), &(inteval->stack[((hsi*78+2160)*1+lsi)*1]), &(inteval->stack[((hsi*66+2238)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+6372)*1+lsi)*1]), &(inteval->stack[((hsi*78+2016)*1+lsi)*1]), &(inteval->stack[((hsi*66+2094)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+6174)*1+lsi)*1]), &(inteval->stack[((hsi*78+1872)*1+lsi)*1]), &(inteval->stack[((hsi*66+1950)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+5976)*1+lsi)*1]), &(inteval->stack[((hsi*78+1728)*1+lsi)*1]), &(inteval->stack[((hsi*66+1806)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+5778)*1+lsi)*1]), &(inteval->stack[((hsi*78+1584)*1+lsi)*1]), &(inteval->stack[((hsi*66+1662)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+5580)*1+lsi)*1]), &(inteval->stack[((hsi*78+1440)*1+lsi)*1]), &(inteval->stack[((hsi*66+1518)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+5382)*1+lsi)*1]), &(inteval->stack[((hsi*78+1296)*1+lsi)*1]), &(inteval->stack[((hsi*66+1374)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+5184)*1+lsi)*1]), &(inteval->stack[((hsi*78+1152)*1+lsi)*1]), &(inteval->stack[((hsi*66+1230)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+4986)*1+lsi)*1]), &(inteval->stack[((hsi*78+1008)*1+lsi)*1]), &(inteval->stack[((hsi*66+1086)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+4788)*1+lsi)*1]), &(inteval->stack[((hsi*78+864)*1+lsi)*1]), &(inteval->stack[((hsi*66+942)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+4590)*1+lsi)*1]), &(inteval->stack[((hsi*78+720)*1+lsi)*1]), &(inteval->stack[((hsi*66+798)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+4392)*1+lsi)*1]), &(inteval->stack[((hsi*78+576)*1+lsi)*1]), &(inteval->stack[((hsi*66+654)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+4194)*1+lsi)*1]), &(inteval->stack[((hsi*78+432)*1+lsi)*1]), &(inteval->stack[((hsi*66+510)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+3996)*1+lsi)*1]), &(inteval->stack[((hsi*78+288)*1+lsi)*1]), &(inteval->stack[((hsi*66+366)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+3798)*1+lsi)*1]), &(inteval->stack[((hsi*78+144)*1+lsi)*1]), &(inteval->stack[((hsi*66+222)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+3600)*1+lsi)*1]), &(inteval->stack[((hsi*78+0)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*198+3600)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*198+3798)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*198+3996)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*198+4194)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*198+4392)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*198+4590)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*198+4788)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*198+4986)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*198+5184)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*198+5382)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*198+5580)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*198+5778)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*198+5976)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*198+6174)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*198+6372)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*198+6570)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*198+6768)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*198+6966)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*198+7164)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*198+7362)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*198+7560)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*198+7758)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*198+7956)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*198+8154)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*198+8352)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
