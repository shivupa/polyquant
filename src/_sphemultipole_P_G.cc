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
#include <HRRPart0ket0bra0gp.h>
#include <_sphemultipole_P_G_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_P_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,900)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_P_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1980)*1+lsi)*1]), &(inteval->stack[((hsi*21+504)*1+lsi)*1]), &(inteval->stack[((hsi*15+885)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1935)*1+lsi)*1]), &(inteval->stack[((hsi*21+483)*1+lsi)*1]), &(inteval->stack[((hsi*15+870)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1890)*1+lsi)*1]), &(inteval->stack[((hsi*21+462)*1+lsi)*1]), &(inteval->stack[((hsi*15+855)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1845)*1+lsi)*1]), &(inteval->stack[((hsi*21+441)*1+lsi)*1]), &(inteval->stack[((hsi*15+840)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1800)*1+lsi)*1]), &(inteval->stack[((hsi*21+420)*1+lsi)*1]), &(inteval->stack[((hsi*15+825)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1755)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]), &(inteval->stack[((hsi*15+810)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1710)*1+lsi)*1]), &(inteval->stack[((hsi*21+378)*1+lsi)*1]), &(inteval->stack[((hsi*15+795)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1665)*1+lsi)*1]), &(inteval->stack[((hsi*21+357)*1+lsi)*1]), &(inteval->stack[((hsi*15+780)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1620)*1+lsi)*1]), &(inteval->stack[((hsi*21+336)*1+lsi)*1]), &(inteval->stack[((hsi*15+765)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1575)*1+lsi)*1]), &(inteval->stack[((hsi*21+315)*1+lsi)*1]), &(inteval->stack[((hsi*15+750)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1530)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]), &(inteval->stack[((hsi*15+735)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1485)*1+lsi)*1]), &(inteval->stack[((hsi*21+273)*1+lsi)*1]), &(inteval->stack[((hsi*15+720)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1440)*1+lsi)*1]), &(inteval->stack[((hsi*21+252)*1+lsi)*1]), &(inteval->stack[((hsi*15+705)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1395)*1+lsi)*1]), &(inteval->stack[((hsi*21+231)*1+lsi)*1]), &(inteval->stack[((hsi*15+690)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1350)*1+lsi)*1]), &(inteval->stack[((hsi*21+210)*1+lsi)*1]), &(inteval->stack[((hsi*15+675)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1305)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]), &(inteval->stack[((hsi*15+660)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1260)*1+lsi)*1]), &(inteval->stack[((hsi*21+168)*1+lsi)*1]), &(inteval->stack[((hsi*15+645)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1215)*1+lsi)*1]), &(inteval->stack[((hsi*21+147)*1+lsi)*1]), &(inteval->stack[((hsi*15+630)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1170)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]), &(inteval->stack[((hsi*15+615)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1125)*1+lsi)*1]), &(inteval->stack[((hsi*21+105)*1+lsi)*1]), &(inteval->stack[((hsi*15+600)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1080)*1+lsi)*1]), &(inteval->stack[((hsi*21+84)*1+lsi)*1]), &(inteval->stack[((hsi*15+585)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1035)*1+lsi)*1]), &(inteval->stack[((hsi*21+63)*1+lsi)*1]), &(inteval->stack[((hsi*15+570)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+990)*1+lsi)*1]), &(inteval->stack[((hsi*21+42)*1+lsi)*1]), &(inteval->stack[((hsi*15+555)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+945)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]), &(inteval->stack[((hsi*15+540)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+900)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]), &(inteval->stack[((hsi*15+525)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*45+900)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*45+945)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*45+990)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*45+1035)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*45+1080)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*45+1125)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*45+1170)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*45+1215)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*45+1260)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*45+1305)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*45+1350)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*45+1395)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*45+1440)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*45+1485)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*45+1530)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*45+1575)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*45+1620)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*45+1665)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*45+1710)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*45+1755)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*45+1800)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*45+1845)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*45+1890)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*45+1935)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*45+1980)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
