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
#include <HRRPart0bra0ket0hp.h>
#include <_sphemultipole_H_P_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_H_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1225)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_H_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2737)*1+lsi)*1]), &(inteval->stack[((hsi*28+1176)*1+lsi)*1]), &(inteval->stack[((hsi*21+1204)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2674)*1+lsi)*1]), &(inteval->stack[((hsi*28+1127)*1+lsi)*1]), &(inteval->stack[((hsi*21+1155)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2611)*1+lsi)*1]), &(inteval->stack[((hsi*28+1078)*1+lsi)*1]), &(inteval->stack[((hsi*21+1106)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2548)*1+lsi)*1]), &(inteval->stack[((hsi*28+1029)*1+lsi)*1]), &(inteval->stack[((hsi*21+1057)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2485)*1+lsi)*1]), &(inteval->stack[((hsi*28+980)*1+lsi)*1]), &(inteval->stack[((hsi*21+1008)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2422)*1+lsi)*1]), &(inteval->stack[((hsi*28+931)*1+lsi)*1]), &(inteval->stack[((hsi*21+959)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2359)*1+lsi)*1]), &(inteval->stack[((hsi*28+882)*1+lsi)*1]), &(inteval->stack[((hsi*21+910)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2296)*1+lsi)*1]), &(inteval->stack[((hsi*28+833)*1+lsi)*1]), &(inteval->stack[((hsi*21+861)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2233)*1+lsi)*1]), &(inteval->stack[((hsi*28+784)*1+lsi)*1]), &(inteval->stack[((hsi*21+812)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2170)*1+lsi)*1]), &(inteval->stack[((hsi*28+735)*1+lsi)*1]), &(inteval->stack[((hsi*21+763)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2107)*1+lsi)*1]), &(inteval->stack[((hsi*28+686)*1+lsi)*1]), &(inteval->stack[((hsi*21+714)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2044)*1+lsi)*1]), &(inteval->stack[((hsi*28+637)*1+lsi)*1]), &(inteval->stack[((hsi*21+665)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1981)*1+lsi)*1]), &(inteval->stack[((hsi*28+588)*1+lsi)*1]), &(inteval->stack[((hsi*21+616)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1918)*1+lsi)*1]), &(inteval->stack[((hsi*28+539)*1+lsi)*1]), &(inteval->stack[((hsi*21+567)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1855)*1+lsi)*1]), &(inteval->stack[((hsi*28+490)*1+lsi)*1]), &(inteval->stack[((hsi*21+518)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1792)*1+lsi)*1]), &(inteval->stack[((hsi*28+441)*1+lsi)*1]), &(inteval->stack[((hsi*21+469)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1729)*1+lsi)*1]), &(inteval->stack[((hsi*28+392)*1+lsi)*1]), &(inteval->stack[((hsi*21+420)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1666)*1+lsi)*1]), &(inteval->stack[((hsi*28+343)*1+lsi)*1]), &(inteval->stack[((hsi*21+371)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1603)*1+lsi)*1]), &(inteval->stack[((hsi*28+294)*1+lsi)*1]), &(inteval->stack[((hsi*21+322)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1540)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]), &(inteval->stack[((hsi*21+273)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1477)*1+lsi)*1]), &(inteval->stack[((hsi*28+196)*1+lsi)*1]), &(inteval->stack[((hsi*21+224)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1414)*1+lsi)*1]), &(inteval->stack[((hsi*28+147)*1+lsi)*1]), &(inteval->stack[((hsi*21+175)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1351)*1+lsi)*1]), &(inteval->stack[((hsi*28+98)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1288)*1+lsi)*1]), &(inteval->stack[((hsi*28+49)*1+lsi)*1]), &(inteval->stack[((hsi*21+77)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1225)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*63+1225)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*63+1288)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*63+1351)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*63+1414)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*63+1477)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*63+1540)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*63+1603)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*63+1666)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*63+1729)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*63+1792)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*63+1855)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*63+1918)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*63+1981)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*63+2044)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*63+2107)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*63+2170)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*63+2233)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*63+2296)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*63+2359)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*63+2422)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*63+2485)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*63+2548)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*63+2611)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*63+2674)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*63+2737)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
