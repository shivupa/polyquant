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
#include <HRRPart0bra0ket0gp.h>
#include <_sphemultipole_G_P_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_G_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,900)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_G_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1980)*1+lsi)*1]), &(inteval->stack[((hsi*21+864)*1+lsi)*1]), &(inteval->stack[((hsi*15+885)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1935)*1+lsi)*1]), &(inteval->stack[((hsi*21+828)*1+lsi)*1]), &(inteval->stack[((hsi*15+849)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1890)*1+lsi)*1]), &(inteval->stack[((hsi*21+792)*1+lsi)*1]), &(inteval->stack[((hsi*15+813)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1845)*1+lsi)*1]), &(inteval->stack[((hsi*21+756)*1+lsi)*1]), &(inteval->stack[((hsi*15+777)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1800)*1+lsi)*1]), &(inteval->stack[((hsi*21+720)*1+lsi)*1]), &(inteval->stack[((hsi*15+741)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1755)*1+lsi)*1]), &(inteval->stack[((hsi*21+684)*1+lsi)*1]), &(inteval->stack[((hsi*15+705)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1710)*1+lsi)*1]), &(inteval->stack[((hsi*21+648)*1+lsi)*1]), &(inteval->stack[((hsi*15+669)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1665)*1+lsi)*1]), &(inteval->stack[((hsi*21+612)*1+lsi)*1]), &(inteval->stack[((hsi*15+633)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1620)*1+lsi)*1]), &(inteval->stack[((hsi*21+576)*1+lsi)*1]), &(inteval->stack[((hsi*15+597)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1575)*1+lsi)*1]), &(inteval->stack[((hsi*21+540)*1+lsi)*1]), &(inteval->stack[((hsi*15+561)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1530)*1+lsi)*1]), &(inteval->stack[((hsi*21+504)*1+lsi)*1]), &(inteval->stack[((hsi*15+525)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1485)*1+lsi)*1]), &(inteval->stack[((hsi*21+468)*1+lsi)*1]), &(inteval->stack[((hsi*15+489)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1440)*1+lsi)*1]), &(inteval->stack[((hsi*21+432)*1+lsi)*1]), &(inteval->stack[((hsi*15+453)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1395)*1+lsi)*1]), &(inteval->stack[((hsi*21+396)*1+lsi)*1]), &(inteval->stack[((hsi*15+417)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1350)*1+lsi)*1]), &(inteval->stack[((hsi*21+360)*1+lsi)*1]), &(inteval->stack[((hsi*15+381)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1305)*1+lsi)*1]), &(inteval->stack[((hsi*21+324)*1+lsi)*1]), &(inteval->stack[((hsi*15+345)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1260)*1+lsi)*1]), &(inteval->stack[((hsi*21+288)*1+lsi)*1]), &(inteval->stack[((hsi*15+309)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1215)*1+lsi)*1]), &(inteval->stack[((hsi*21+252)*1+lsi)*1]), &(inteval->stack[((hsi*15+273)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1170)*1+lsi)*1]), &(inteval->stack[((hsi*21+216)*1+lsi)*1]), &(inteval->stack[((hsi*15+237)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1125)*1+lsi)*1]), &(inteval->stack[((hsi*21+180)*1+lsi)*1]), &(inteval->stack[((hsi*15+201)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1080)*1+lsi)*1]), &(inteval->stack[((hsi*21+144)*1+lsi)*1]), &(inteval->stack[((hsi*15+165)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1035)*1+lsi)*1]), &(inteval->stack[((hsi*21+108)*1+lsi)*1]), &(inteval->stack[((hsi*15+129)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+990)*1+lsi)*1]), &(inteval->stack[((hsi*21+72)*1+lsi)*1]), &(inteval->stack[((hsi*15+93)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+945)*1+lsi)*1]), &(inteval->stack[((hsi*21+36)*1+lsi)*1]), &(inteval->stack[((hsi*15+57)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+900)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]), &(inteval->stack[((hsi*15+21)*1+lsi)*1]),1);
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
