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
#include <HRRPart0bra0ket0dp.h>
#include <_sphemultipole_D_P_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_D_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,400)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+832)*1+lsi)*1]), &(inteval->stack[((hsi*10+384)*1+lsi)*1]), &(inteval->stack[((hsi*6+394)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+814)*1+lsi)*1]), &(inteval->stack[((hsi*10+368)*1+lsi)*1]), &(inteval->stack[((hsi*6+378)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+796)*1+lsi)*1]), &(inteval->stack[((hsi*10+352)*1+lsi)*1]), &(inteval->stack[((hsi*6+362)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+778)*1+lsi)*1]), &(inteval->stack[((hsi*10+336)*1+lsi)*1]), &(inteval->stack[((hsi*6+346)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+760)*1+lsi)*1]), &(inteval->stack[((hsi*10+320)*1+lsi)*1]), &(inteval->stack[((hsi*6+330)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+742)*1+lsi)*1]), &(inteval->stack[((hsi*10+304)*1+lsi)*1]), &(inteval->stack[((hsi*6+314)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+724)*1+lsi)*1]), &(inteval->stack[((hsi*10+288)*1+lsi)*1]), &(inteval->stack[((hsi*6+298)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+706)*1+lsi)*1]), &(inteval->stack[((hsi*10+272)*1+lsi)*1]), &(inteval->stack[((hsi*6+282)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+688)*1+lsi)*1]), &(inteval->stack[((hsi*10+256)*1+lsi)*1]), &(inteval->stack[((hsi*6+266)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+670)*1+lsi)*1]), &(inteval->stack[((hsi*10+240)*1+lsi)*1]), &(inteval->stack[((hsi*6+250)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+652)*1+lsi)*1]), &(inteval->stack[((hsi*10+224)*1+lsi)*1]), &(inteval->stack[((hsi*6+234)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+634)*1+lsi)*1]), &(inteval->stack[((hsi*10+208)*1+lsi)*1]), &(inteval->stack[((hsi*6+218)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+616)*1+lsi)*1]), &(inteval->stack[((hsi*10+192)*1+lsi)*1]), &(inteval->stack[((hsi*6+202)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+598)*1+lsi)*1]), &(inteval->stack[((hsi*10+176)*1+lsi)*1]), &(inteval->stack[((hsi*6+186)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+580)*1+lsi)*1]), &(inteval->stack[((hsi*10+160)*1+lsi)*1]), &(inteval->stack[((hsi*6+170)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+562)*1+lsi)*1]), &(inteval->stack[((hsi*10+144)*1+lsi)*1]), &(inteval->stack[((hsi*6+154)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+544)*1+lsi)*1]), &(inteval->stack[((hsi*10+128)*1+lsi)*1]), &(inteval->stack[((hsi*6+138)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+526)*1+lsi)*1]), &(inteval->stack[((hsi*10+112)*1+lsi)*1]), &(inteval->stack[((hsi*6+122)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+508)*1+lsi)*1]), &(inteval->stack[((hsi*10+96)*1+lsi)*1]), &(inteval->stack[((hsi*6+106)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+490)*1+lsi)*1]), &(inteval->stack[((hsi*10+80)*1+lsi)*1]), &(inteval->stack[((hsi*6+90)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+472)*1+lsi)*1]), &(inteval->stack[((hsi*10+64)*1+lsi)*1]), &(inteval->stack[((hsi*6+74)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+454)*1+lsi)*1]), &(inteval->stack[((hsi*10+48)*1+lsi)*1]), &(inteval->stack[((hsi*6+58)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+436)*1+lsi)*1]), &(inteval->stack[((hsi*10+32)*1+lsi)*1]), &(inteval->stack[((hsi*6+42)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+418)*1+lsi)*1]), &(inteval->stack[((hsi*10+16)*1+lsi)*1]), &(inteval->stack[((hsi*6+26)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+400)*1+lsi)*1]), &(inteval->stack[((hsi*10+0)*1+lsi)*1]), &(inteval->stack[((hsi*6+10)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*18+400)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*18+418)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*18+436)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*18+454)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*18+472)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*18+490)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*18+508)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*18+526)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*18+544)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*18+562)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*18+580)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*18+598)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*18+616)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*18+634)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*18+652)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*18+670)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*18+688)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*18+706)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*18+724)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*18+742)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*18+760)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*18+778)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*18+796)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*18+814)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*18+832)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
