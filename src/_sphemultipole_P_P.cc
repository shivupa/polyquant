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
#include <HRRPart0bra0ket0pp.h>
#include <_sphemultipole_P_P_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_P_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,225)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_P_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+441)*1+lsi)*1]), &(inteval->stack[((hsi*6+216)*1+lsi)*1]), &(inteval->stack[((hsi*3+222)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+432)*1+lsi)*1]), &(inteval->stack[((hsi*6+207)*1+lsi)*1]), &(inteval->stack[((hsi*3+213)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+423)*1+lsi)*1]), &(inteval->stack[((hsi*6+198)*1+lsi)*1]), &(inteval->stack[((hsi*3+204)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+414)*1+lsi)*1]), &(inteval->stack[((hsi*6+189)*1+lsi)*1]), &(inteval->stack[((hsi*3+195)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+405)*1+lsi)*1]), &(inteval->stack[((hsi*6+180)*1+lsi)*1]), &(inteval->stack[((hsi*3+186)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+396)*1+lsi)*1]), &(inteval->stack[((hsi*6+171)*1+lsi)*1]), &(inteval->stack[((hsi*3+177)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+387)*1+lsi)*1]), &(inteval->stack[((hsi*6+162)*1+lsi)*1]), &(inteval->stack[((hsi*3+168)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+378)*1+lsi)*1]), &(inteval->stack[((hsi*6+153)*1+lsi)*1]), &(inteval->stack[((hsi*3+159)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+369)*1+lsi)*1]), &(inteval->stack[((hsi*6+144)*1+lsi)*1]), &(inteval->stack[((hsi*3+150)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+360)*1+lsi)*1]), &(inteval->stack[((hsi*6+135)*1+lsi)*1]), &(inteval->stack[((hsi*3+141)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+351)*1+lsi)*1]), &(inteval->stack[((hsi*6+126)*1+lsi)*1]), &(inteval->stack[((hsi*3+132)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+342)*1+lsi)*1]), &(inteval->stack[((hsi*6+117)*1+lsi)*1]), &(inteval->stack[((hsi*3+123)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+333)*1+lsi)*1]), &(inteval->stack[((hsi*6+108)*1+lsi)*1]), &(inteval->stack[((hsi*3+114)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+324)*1+lsi)*1]), &(inteval->stack[((hsi*6+99)*1+lsi)*1]), &(inteval->stack[((hsi*3+105)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+315)*1+lsi)*1]), &(inteval->stack[((hsi*6+90)*1+lsi)*1]), &(inteval->stack[((hsi*3+96)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+306)*1+lsi)*1]), &(inteval->stack[((hsi*6+81)*1+lsi)*1]), &(inteval->stack[((hsi*3+87)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+297)*1+lsi)*1]), &(inteval->stack[((hsi*6+72)*1+lsi)*1]), &(inteval->stack[((hsi*3+78)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+288)*1+lsi)*1]), &(inteval->stack[((hsi*6+63)*1+lsi)*1]), &(inteval->stack[((hsi*3+69)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+279)*1+lsi)*1]), &(inteval->stack[((hsi*6+54)*1+lsi)*1]), &(inteval->stack[((hsi*3+60)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+270)*1+lsi)*1]), &(inteval->stack[((hsi*6+45)*1+lsi)*1]), &(inteval->stack[((hsi*3+51)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+261)*1+lsi)*1]), &(inteval->stack[((hsi*6+36)*1+lsi)*1]), &(inteval->stack[((hsi*3+42)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+252)*1+lsi)*1]), &(inteval->stack[((hsi*6+27)*1+lsi)*1]), &(inteval->stack[((hsi*3+33)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+243)*1+lsi)*1]), &(inteval->stack[((hsi*6+18)*1+lsi)*1]), &(inteval->stack[((hsi*3+24)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+234)*1+lsi)*1]), &(inteval->stack[((hsi*6+9)*1+lsi)*1]), &(inteval->stack[((hsi*3+15)*1+lsi)*1]),1);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*9+225)*1+lsi)*1]), &(inteval->stack[((hsi*6+0)*1+lsi)*1]), &(inteval->stack[((hsi*3+6)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*9+225)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*9+234)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*9+243)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*9+252)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*9+261)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*9+270)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*9+279)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*9+288)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*9+297)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*9+306)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*9+315)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*9+324)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*9+333)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*9+342)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*9+351)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*9+360)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*9+369)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*9+378)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*9+387)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*9+396)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*9+405)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*9+414)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*9+423)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*9+432)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*9+441)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
