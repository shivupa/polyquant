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
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_K__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,48276)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+197964)*1+lsi)*1]), &(inteval->stack[((hsi*3276+39816)*1+lsi)*1]), &(inteval->stack[((hsi*2808+43092)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+206388)*1+lsi)*1]), &(inteval->stack[((hsi*3780+36036)*1+lsi)*1]), &(inteval->stack[((hsi*3276+39816)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+216216)*1+lsi)*1]), &(inteval->stack[((hsi*9828+206388)*1+lsi)*1]), &(inteval->stack[((hsi*8424+197964)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+233064)*1+lsi)*1]), &(inteval->stack[((hsi*4320+31716)*1+lsi)*1]), &(inteval->stack[((hsi*3780+36036)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+244404)*1+lsi)*1]), &(inteval->stack[((hsi*11340+233064)*1+lsi)*1]), &(inteval->stack[((hsi*9828+206388)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+264060)*1+lsi)*1]), &(inteval->stack[((hsi*19656+244404)*1+lsi)*1]), &(inteval->stack[((hsi*16848+216216)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+206388)*1+lsi)*1]), &(inteval->stack[((hsi*2808+43092)*1+lsi)*1]), &(inteval->stack[((hsi*2376+45900)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+292140)*1+lsi)*1]), &(inteval->stack[((hsi*8424+197964)*1+lsi)*1]), &(inteval->stack[((hsi*7128+206388)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+306396)*1+lsi)*1]), &(inteval->stack[((hsi*16848+216216)*1+lsi)*1]), &(inteval->stack[((hsi*14256+292140)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+330156)*1+lsi)*1]), &(inteval->stack[((hsi*28080+264060)*1+lsi)*1]), &(inteval->stack[((hsi*23760+306396)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+292140)*1+lsi)*1]), &(inteval->stack[((hsi*4896+26820)*1+lsi)*1]), &(inteval->stack[((hsi*4320+31716)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+197964)*1+lsi)*1]), &(inteval->stack[((hsi*12960+292140)*1+lsi)*1]), &(inteval->stack[((hsi*11340+233064)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+292140)*1+lsi)*1]), &(inteval->stack[((hsi*22680+197964)*1+lsi)*1]), &(inteval->stack[((hsi*19656+244404)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+197964)*1+lsi)*1]), &(inteval->stack[((hsi*32760+292140)*1+lsi)*1]), &(inteval->stack[((hsi*28080+264060)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+240084)*1+lsi)*1]), &(inteval->stack[((hsi*42120+197964)*1+lsi)*1]), &(inteval->stack[((hsi*35640+330156)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+197964)*1+lsi)*1]), &(inteval->stack[((hsi*4095+16245)*1+lsi)*1]), &(inteval->stack[((hsi*3510+20340)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+208494)*1+lsi)*1]), &(inteval->stack[((hsi*4725+11520)*1+lsi)*1]), &(inteval->stack[((hsi*4095+16245)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+26820)*1+lsi)*1]), &(inteval->stack[((hsi*12285+208494)*1+lsi)*1]), &(inteval->stack[((hsi*10530+197964)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+220779)*1+lsi)*1]), &(inteval->stack[((hsi*5400+6120)*1+lsi)*1]), &(inteval->stack[((hsi*4725+11520)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+289980)*1+lsi)*1]), &(inteval->stack[((hsi*14175+220779)*1+lsi)*1]), &(inteval->stack[((hsi*12285+208494)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+314550)*1+lsi)*1]), &(inteval->stack[((hsi*24570+289980)*1+lsi)*1]), &(inteval->stack[((hsi*21060+26820)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+208494)*1+lsi)*1]), &(inteval->stack[((hsi*3510+20340)*1+lsi)*1]), &(inteval->stack[((hsi*2970+23850)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+349650)*1+lsi)*1]), &(inteval->stack[((hsi*10530+197964)*1+lsi)*1]), &(inteval->stack[((hsi*8910+208494)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+367470)*1+lsi)*1]), &(inteval->stack[((hsi*21060+26820)*1+lsi)*1]), &(inteval->stack[((hsi*17820+349650)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+397170)*1+lsi)*1]), &(inteval->stack[((hsi*35100+314550)*1+lsi)*1]), &(inteval->stack[((hsi*29700+367470)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+349650)*1+lsi)*1]), &(inteval->stack[((hsi*6120+0)*1+lsi)*1]), &(inteval->stack[((hsi*5400+6120)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+0)*1+lsi)*1]), &(inteval->stack[((hsi*16200+349650)*1+lsi)*1]), &(inteval->stack[((hsi*14175+220779)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+349650)*1+lsi)*1]), &(inteval->stack[((hsi*28350+0)*1+lsi)*1]), &(inteval->stack[((hsi*24570+289980)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+441720)*1+lsi)*1]), &(inteval->stack[((hsi*40950+349650)*1+lsi)*1]), &(inteval->stack[((hsi*35100+314550)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+289980)*1+lsi)*1]), &(inteval->stack[((hsi*52650+441720)*1+lsi)*1]), &(inteval->stack[((hsi*44550+397170)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*149688+48276)*1+lsi)*1]), &(inteval->stack[((hsi*62370+289980)*1+lsi)*1]), &(inteval->stack[((hsi*49896+240084)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*149688+48276)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
