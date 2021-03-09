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
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <_sphemultipole_D_D_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_D_D(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,775)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_D_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+1675)*1+lsi)*1]), &(inteval->stack[((hsi*10+759)*1+lsi)*1]), &(inteval->stack[((hsi*6+769)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1693)*1+lsi)*1]), &(inteval->stack[((hsi*15+744)*1+lsi)*1]), &(inteval->stack[((hsi*10+759)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1639)*1+lsi)*1]), &(inteval->stack[((hsi*30+1693)*1+lsi)*1]), &(inteval->stack[((hsi*18+1675)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+744)*1+lsi)*1]), &(inteval->stack[((hsi*10+728)*1+lsi)*1]), &(inteval->stack[((hsi*6+738)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1723)*1+lsi)*1]), &(inteval->stack[((hsi*15+713)*1+lsi)*1]), &(inteval->stack[((hsi*10+728)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1603)*1+lsi)*1]), &(inteval->stack[((hsi*30+1723)*1+lsi)*1]), &(inteval->stack[((hsi*18+744)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+713)*1+lsi)*1]), &(inteval->stack[((hsi*10+697)*1+lsi)*1]), &(inteval->stack[((hsi*6+707)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1753)*1+lsi)*1]), &(inteval->stack[((hsi*15+682)*1+lsi)*1]), &(inteval->stack[((hsi*10+697)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1567)*1+lsi)*1]), &(inteval->stack[((hsi*30+1753)*1+lsi)*1]), &(inteval->stack[((hsi*18+713)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+682)*1+lsi)*1]), &(inteval->stack[((hsi*10+666)*1+lsi)*1]), &(inteval->stack[((hsi*6+676)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1783)*1+lsi)*1]), &(inteval->stack[((hsi*15+651)*1+lsi)*1]), &(inteval->stack[((hsi*10+666)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1531)*1+lsi)*1]), &(inteval->stack[((hsi*30+1783)*1+lsi)*1]), &(inteval->stack[((hsi*18+682)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+651)*1+lsi)*1]), &(inteval->stack[((hsi*10+635)*1+lsi)*1]), &(inteval->stack[((hsi*6+645)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1813)*1+lsi)*1]), &(inteval->stack[((hsi*15+620)*1+lsi)*1]), &(inteval->stack[((hsi*10+635)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1495)*1+lsi)*1]), &(inteval->stack[((hsi*30+1813)*1+lsi)*1]), &(inteval->stack[((hsi*18+651)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+620)*1+lsi)*1]), &(inteval->stack[((hsi*10+604)*1+lsi)*1]), &(inteval->stack[((hsi*6+614)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1843)*1+lsi)*1]), &(inteval->stack[((hsi*15+589)*1+lsi)*1]), &(inteval->stack[((hsi*10+604)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1459)*1+lsi)*1]), &(inteval->stack[((hsi*30+1843)*1+lsi)*1]), &(inteval->stack[((hsi*18+620)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+589)*1+lsi)*1]), &(inteval->stack[((hsi*10+573)*1+lsi)*1]), &(inteval->stack[((hsi*6+583)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1873)*1+lsi)*1]), &(inteval->stack[((hsi*15+558)*1+lsi)*1]), &(inteval->stack[((hsi*10+573)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1423)*1+lsi)*1]), &(inteval->stack[((hsi*30+1873)*1+lsi)*1]), &(inteval->stack[((hsi*18+589)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+558)*1+lsi)*1]), &(inteval->stack[((hsi*10+542)*1+lsi)*1]), &(inteval->stack[((hsi*6+552)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1903)*1+lsi)*1]), &(inteval->stack[((hsi*15+527)*1+lsi)*1]), &(inteval->stack[((hsi*10+542)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1387)*1+lsi)*1]), &(inteval->stack[((hsi*30+1903)*1+lsi)*1]), &(inteval->stack[((hsi*18+558)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+527)*1+lsi)*1]), &(inteval->stack[((hsi*10+511)*1+lsi)*1]), &(inteval->stack[((hsi*6+521)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1933)*1+lsi)*1]), &(inteval->stack[((hsi*15+496)*1+lsi)*1]), &(inteval->stack[((hsi*10+511)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1351)*1+lsi)*1]), &(inteval->stack[((hsi*30+1933)*1+lsi)*1]), &(inteval->stack[((hsi*18+527)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+496)*1+lsi)*1]), &(inteval->stack[((hsi*10+480)*1+lsi)*1]), &(inteval->stack[((hsi*6+490)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1963)*1+lsi)*1]), &(inteval->stack[((hsi*15+465)*1+lsi)*1]), &(inteval->stack[((hsi*10+480)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1315)*1+lsi)*1]), &(inteval->stack[((hsi*30+1963)*1+lsi)*1]), &(inteval->stack[((hsi*18+496)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+465)*1+lsi)*1]), &(inteval->stack[((hsi*10+449)*1+lsi)*1]), &(inteval->stack[((hsi*6+459)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1993)*1+lsi)*1]), &(inteval->stack[((hsi*15+434)*1+lsi)*1]), &(inteval->stack[((hsi*10+449)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1279)*1+lsi)*1]), &(inteval->stack[((hsi*30+1993)*1+lsi)*1]), &(inteval->stack[((hsi*18+465)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+434)*1+lsi)*1]), &(inteval->stack[((hsi*10+418)*1+lsi)*1]), &(inteval->stack[((hsi*6+428)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2023)*1+lsi)*1]), &(inteval->stack[((hsi*15+403)*1+lsi)*1]), &(inteval->stack[((hsi*10+418)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1243)*1+lsi)*1]), &(inteval->stack[((hsi*30+2023)*1+lsi)*1]), &(inteval->stack[((hsi*18+434)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+403)*1+lsi)*1]), &(inteval->stack[((hsi*10+387)*1+lsi)*1]), &(inteval->stack[((hsi*6+397)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2053)*1+lsi)*1]), &(inteval->stack[((hsi*15+372)*1+lsi)*1]), &(inteval->stack[((hsi*10+387)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1207)*1+lsi)*1]), &(inteval->stack[((hsi*30+2053)*1+lsi)*1]), &(inteval->stack[((hsi*18+403)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+372)*1+lsi)*1]), &(inteval->stack[((hsi*10+356)*1+lsi)*1]), &(inteval->stack[((hsi*6+366)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2083)*1+lsi)*1]), &(inteval->stack[((hsi*15+341)*1+lsi)*1]), &(inteval->stack[((hsi*10+356)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1171)*1+lsi)*1]), &(inteval->stack[((hsi*30+2083)*1+lsi)*1]), &(inteval->stack[((hsi*18+372)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+341)*1+lsi)*1]), &(inteval->stack[((hsi*10+325)*1+lsi)*1]), &(inteval->stack[((hsi*6+335)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2113)*1+lsi)*1]), &(inteval->stack[((hsi*15+310)*1+lsi)*1]), &(inteval->stack[((hsi*10+325)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1135)*1+lsi)*1]), &(inteval->stack[((hsi*30+2113)*1+lsi)*1]), &(inteval->stack[((hsi*18+341)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+310)*1+lsi)*1]), &(inteval->stack[((hsi*10+294)*1+lsi)*1]), &(inteval->stack[((hsi*6+304)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2143)*1+lsi)*1]), &(inteval->stack[((hsi*15+279)*1+lsi)*1]), &(inteval->stack[((hsi*10+294)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1099)*1+lsi)*1]), &(inteval->stack[((hsi*30+2143)*1+lsi)*1]), &(inteval->stack[((hsi*18+310)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+279)*1+lsi)*1]), &(inteval->stack[((hsi*10+263)*1+lsi)*1]), &(inteval->stack[((hsi*6+273)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2173)*1+lsi)*1]), &(inteval->stack[((hsi*15+248)*1+lsi)*1]), &(inteval->stack[((hsi*10+263)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1063)*1+lsi)*1]), &(inteval->stack[((hsi*30+2173)*1+lsi)*1]), &(inteval->stack[((hsi*18+279)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+248)*1+lsi)*1]), &(inteval->stack[((hsi*10+232)*1+lsi)*1]), &(inteval->stack[((hsi*6+242)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2203)*1+lsi)*1]), &(inteval->stack[((hsi*15+217)*1+lsi)*1]), &(inteval->stack[((hsi*10+232)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+1027)*1+lsi)*1]), &(inteval->stack[((hsi*30+2203)*1+lsi)*1]), &(inteval->stack[((hsi*18+248)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+217)*1+lsi)*1]), &(inteval->stack[((hsi*10+201)*1+lsi)*1]), &(inteval->stack[((hsi*6+211)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2233)*1+lsi)*1]), &(inteval->stack[((hsi*15+186)*1+lsi)*1]), &(inteval->stack[((hsi*10+201)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+991)*1+lsi)*1]), &(inteval->stack[((hsi*30+2233)*1+lsi)*1]), &(inteval->stack[((hsi*18+217)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+186)*1+lsi)*1]), &(inteval->stack[((hsi*10+170)*1+lsi)*1]), &(inteval->stack[((hsi*6+180)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2263)*1+lsi)*1]), &(inteval->stack[((hsi*15+155)*1+lsi)*1]), &(inteval->stack[((hsi*10+170)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+955)*1+lsi)*1]), &(inteval->stack[((hsi*30+2263)*1+lsi)*1]), &(inteval->stack[((hsi*18+186)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+155)*1+lsi)*1]), &(inteval->stack[((hsi*10+139)*1+lsi)*1]), &(inteval->stack[((hsi*6+149)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2293)*1+lsi)*1]), &(inteval->stack[((hsi*15+124)*1+lsi)*1]), &(inteval->stack[((hsi*10+139)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+919)*1+lsi)*1]), &(inteval->stack[((hsi*30+2293)*1+lsi)*1]), &(inteval->stack[((hsi*18+155)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+124)*1+lsi)*1]), &(inteval->stack[((hsi*10+108)*1+lsi)*1]), &(inteval->stack[((hsi*6+118)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2323)*1+lsi)*1]), &(inteval->stack[((hsi*15+93)*1+lsi)*1]), &(inteval->stack[((hsi*10+108)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+883)*1+lsi)*1]), &(inteval->stack[((hsi*30+2323)*1+lsi)*1]), &(inteval->stack[((hsi*18+124)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+93)*1+lsi)*1]), &(inteval->stack[((hsi*10+77)*1+lsi)*1]), &(inteval->stack[((hsi*6+87)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2353)*1+lsi)*1]), &(inteval->stack[((hsi*15+62)*1+lsi)*1]), &(inteval->stack[((hsi*10+77)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+847)*1+lsi)*1]), &(inteval->stack[((hsi*30+2353)*1+lsi)*1]), &(inteval->stack[((hsi*18+93)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+62)*1+lsi)*1]), &(inteval->stack[((hsi*10+46)*1+lsi)*1]), &(inteval->stack[((hsi*6+56)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2383)*1+lsi)*1]), &(inteval->stack[((hsi*15+31)*1+lsi)*1]), &(inteval->stack[((hsi*10+46)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+811)*1+lsi)*1]), &(inteval->stack[((hsi*30+2383)*1+lsi)*1]), &(inteval->stack[((hsi*18+62)*1+lsi)*1]),1);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*18+31)*1+lsi)*1]), &(inteval->stack[((hsi*10+15)*1+lsi)*1]), &(inteval->stack[((hsi*6+25)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2413)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]), &(inteval->stack[((hsi*10+15)*1+lsi)*1]),1);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*36+775)*1+lsi)*1]), &(inteval->stack[((hsi*30+2413)*1+lsi)*1]), &(inteval->stack[((hsi*18+31)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*36+775)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*36+811)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*36+847)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*36+883)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*36+919)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*36+955)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*36+991)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*36+1027)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*36+1063)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*36+1099)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*36+1135)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*36+1171)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*36+1207)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*36+1243)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*36+1279)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*36+1315)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*36+1351)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*36+1387)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*36+1423)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*36+1459)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*36+1495)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*36+1531)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*36+1567)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*36+1603)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*36+1639)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
