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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,82960)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+379960)*1+lsi)*1]), &(inteval->stack[((hsi*5148+53908)*1+lsi)*1]), &(inteval->stack[((hsi*4290+59056)*1+lsi)*1]),78);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+392830)*1+lsi)*1]), &(inteval->stack[((hsi*4290+59056)*1+lsi)*1]), &(inteval->stack[((hsi*3510+63346)*1+lsi)*1]),78);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+403360)*1+lsi)*1]), &(inteval->stack[((hsi*12870+379960)*1+lsi)*1]), &(inteval->stack[((hsi*10530+392830)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+424420)*1+lsi)*1]), &(inteval->stack[((hsi*6084+47824)*1+lsi)*1]), &(inteval->stack[((hsi*5148+53908)*1+lsi)*1]),78);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*25740+439864)*1+lsi)*1]), &(inteval->stack[((hsi*15444+424420)*1+lsi)*1]), &(inteval->stack[((hsi*12870+379960)*1+lsi)*1]),78);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+465604)*1+lsi)*1]), &(inteval->stack[((hsi*25740+439864)*1+lsi)*1]), &(inteval->stack[((hsi*21060+403360)*1+lsi)*1]),78);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+379960)*1+lsi)*1]), &(inteval->stack[((hsi*6006+32718)*1+lsi)*1]), &(inteval->stack[((hsi*5005+38724)*1+lsi)*1]),91);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+394975)*1+lsi)*1]), &(inteval->stack[((hsi*5005+38724)*1+lsi)*1]), &(inteval->stack[((hsi*4095+43729)*1+lsi)*1]),91);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+407260)*1+lsi)*1]), &(inteval->stack[((hsi*15015+379960)*1+lsi)*1]), &(inteval->stack[((hsi*12285+394975)*1+lsi)*1]),91);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+431830)*1+lsi)*1]), &(inteval->stack[((hsi*7098+25620)*1+lsi)*1]), &(inteval->stack[((hsi*6006+32718)*1+lsi)*1]),91);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*30030+25620)*1+lsi)*1]), &(inteval->stack[((hsi*18018+431830)*1+lsi)*1]), &(inteval->stack[((hsi*15015+379960)*1+lsi)*1]),91);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*40950+500704)*1+lsi)*1]), &(inteval->stack[((hsi*30030+25620)*1+lsi)*1]), &(inteval->stack[((hsi*24570+407260)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*105300+541654)*1+lsi)*1]), &(inteval->stack[((hsi*40950+500704)*1+lsi)*1]), &(inteval->stack[((hsi*35100+465604)*1+lsi)*1]),450);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+379960)*1+lsi)*1]), &(inteval->stack[((hsi*4356+72004)*1+lsi)*1]), &(inteval->stack[((hsi*3630+76360)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+390850)*1+lsi)*1]), &(inteval->stack[((hsi*3630+76360)*1+lsi)*1]), &(inteval->stack[((hsi*2970+79990)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+399760)*1+lsi)*1]), &(inteval->stack[((hsi*10890+379960)*1+lsi)*1]), &(inteval->stack[((hsi*8910+390850)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+417580)*1+lsi)*1]), &(inteval->stack[((hsi*5148+66856)*1+lsi)*1]), &(inteval->stack[((hsi*4356+72004)*1+lsi)*1]),66);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*21780+25620)*1+lsi)*1]), &(inteval->stack[((hsi*13068+417580)*1+lsi)*1]), &(inteval->stack[((hsi*10890+379960)*1+lsi)*1]),66);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+417580)*1+lsi)*1]), &(inteval->stack[((hsi*21780+25620)*1+lsi)*1]), &(inteval->stack[((hsi*17820+399760)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*89100+646954)*1+lsi)*1]), &(inteval->stack[((hsi*35100+465604)*1+lsi)*1]), &(inteval->stack[((hsi*29700+417580)*1+lsi)*1]),450);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*178200+736054)*1+lsi)*1]), &(inteval->stack[((hsi*105300+541654)*1+lsi)*1]), &(inteval->stack[((hsi*89100+646954)*1+lsi)*1]),450);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+379960)*1+lsi)*1]), &(inteval->stack[((hsi*6930+8190)*1+lsi)*1]), &(inteval->stack[((hsi*5775+15120)*1+lsi)*1]),105);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*14175+397285)*1+lsi)*1]), &(inteval->stack[((hsi*5775+15120)*1+lsi)*1]), &(inteval->stack[((hsi*4725+20895)*1+lsi)*1]),105);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*28350+411460)*1+lsi)*1]), &(inteval->stack[((hsi*17325+379960)*1+lsi)*1]), &(inteval->stack[((hsi*14175+397285)*1+lsi)*1]),105);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+646954)*1+lsi)*1]), &(inteval->stack[((hsi*8190+0)*1+lsi)*1]), &(inteval->stack[((hsi*6930+8190)*1+lsi)*1]),105);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*34650+0)*1+lsi)*1]), &(inteval->stack[((hsi*20790+646954)*1+lsi)*1]), &(inteval->stack[((hsi*17325+379960)*1+lsi)*1]),105);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*47250+646954)*1+lsi)*1]), &(inteval->stack[((hsi*34650+0)*1+lsi)*1]), &(inteval->stack[((hsi*28350+411460)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*122850+914254)*1+lsi)*1]), &(inteval->stack[((hsi*47250+646954)*1+lsi)*1]), &(inteval->stack[((hsi*40950+500704)*1+lsi)*1]),450);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*210600+1037104)*1+lsi)*1]), &(inteval->stack[((hsi*122850+914254)*1+lsi)*1]), &(inteval->stack[((hsi*105300+541654)*1+lsi)*1]),450);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*297000+82960)*1+lsi)*1]), &(inteval->stack[((hsi*210600+1037104)*1+lsi)*1]), &(inteval->stack[((hsi*178200+736054)*1+lsi)*1]),450);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*297000+82960)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
