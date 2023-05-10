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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_I__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__M__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,56135)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+250175)*1+lsi)*1]), &(inteval->stack[((hsi*2808+34551)*1+lsi)*1]), &(inteval->stack[((hsi*2376+37359)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+257303)*1+lsi)*1]), &(inteval->stack[((hsi*3276+31275)*1+lsi)*1]), &(inteval->stack[((hsi*2808+34551)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+265727)*1+lsi)*1]), &(inteval->stack[((hsi*8424+257303)*1+lsi)*1]), &(inteval->stack[((hsi*7128+250175)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+279983)*1+lsi)*1]), &(inteval->stack[((hsi*3780+27495)*1+lsi)*1]), &(inteval->stack[((hsi*3276+31275)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+289811)*1+lsi)*1]), &(inteval->stack[((hsi*9828+279983)*1+lsi)*1]), &(inteval->stack[((hsi*8424+257303)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+306659)*1+lsi)*1]), &(inteval->stack[((hsi*16848+289811)*1+lsi)*1]), &(inteval->stack[((hsi*14256+265727)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+257303)*1+lsi)*1]), &(inteval->stack[((hsi*2376+37359)*1+lsi)*1]), &(inteval->stack[((hsi*1980+39735)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+330419)*1+lsi)*1]), &(inteval->stack[((hsi*7128+250175)*1+lsi)*1]), &(inteval->stack[((hsi*5940+257303)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+342299)*1+lsi)*1]), &(inteval->stack[((hsi*14256+265727)*1+lsi)*1]), &(inteval->stack[((hsi*11880+330419)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+250175)*1+lsi)*1]), &(inteval->stack[((hsi*23760+306659)*1+lsi)*1]), &(inteval->stack[((hsi*19800+342299)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+330419)*1+lsi)*1]), &(inteval->stack[((hsi*4320+23175)*1+lsi)*1]), &(inteval->stack[((hsi*3780+27495)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+341759)*1+lsi)*1]), &(inteval->stack[((hsi*11340+330419)*1+lsi)*1]), &(inteval->stack[((hsi*9828+279983)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+361415)*1+lsi)*1]), &(inteval->stack[((hsi*19656+341759)*1+lsi)*1]), &(inteval->stack[((hsi*16848+289811)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+389495)*1+lsi)*1]), &(inteval->stack[((hsi*28080+361415)*1+lsi)*1]), &(inteval->stack[((hsi*23760+306659)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+279875)*1+lsi)*1]), &(inteval->stack[((hsi*35640+389495)*1+lsi)*1]), &(inteval->stack[((hsi*29700+250175)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+250175)*1+lsi)*1]), &(inteval->stack[((hsi*2184+50563)*1+lsi)*1]), &(inteval->stack[((hsi*1848+52747)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+255719)*1+lsi)*1]), &(inteval->stack[((hsi*2548+48015)*1+lsi)*1]), &(inteval->stack[((hsi*2184+50563)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+23175)*1+lsi)*1]), &(inteval->stack[((hsi*6552+255719)*1+lsi)*1]), &(inteval->stack[((hsi*5544+250175)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+262271)*1+lsi)*1]), &(inteval->stack[((hsi*2940+45075)*1+lsi)*1]), &(inteval->stack[((hsi*2548+48015)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+321455)*1+lsi)*1]), &(inteval->stack[((hsi*7644+262271)*1+lsi)*1]), &(inteval->stack[((hsi*6552+255719)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+334559)*1+lsi)*1]), &(inteval->stack[((hsi*13104+321455)*1+lsi)*1]), &(inteval->stack[((hsi*11088+23175)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+269915)*1+lsi)*1]), &(inteval->stack[((hsi*1848+52747)*1+lsi)*1]), &(inteval->stack[((hsi*1540+54595)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+353039)*1+lsi)*1]), &(inteval->stack[((hsi*5544+250175)*1+lsi)*1]), &(inteval->stack[((hsi*4620+269915)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+362279)*1+lsi)*1]), &(inteval->stack[((hsi*11088+23175)*1+lsi)*1]), &(inteval->stack[((hsi*9240+353039)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+377679)*1+lsi)*1]), &(inteval->stack[((hsi*18480+334559)*1+lsi)*1]), &(inteval->stack[((hsi*15400+362279)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+353039)*1+lsi)*1]), &(inteval->stack[((hsi*3360+41715)*1+lsi)*1]), &(inteval->stack[((hsi*2940+45075)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+23175)*1+lsi)*1]), &(inteval->stack[((hsi*8820+353039)*1+lsi)*1]), &(inteval->stack[((hsi*7644+262271)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+250175)*1+lsi)*1]), &(inteval->stack[((hsi*15288+23175)*1+lsi)*1]), &(inteval->stack[((hsi*13104+321455)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+23175)*1+lsi)*1]), &(inteval->stack[((hsi*21840+250175)*1+lsi)*1]), &(inteval->stack[((hsi*18480+334559)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+321455)*1+lsi)*1]), &(inteval->stack[((hsi*27720+23175)*1+lsi)*1]), &(inteval->stack[((hsi*23100+377679)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*97020+353795)*1+lsi)*1]), &(inteval->stack[((hsi*41580+279875)*1+lsi)*1]), &(inteval->stack[((hsi*32340+321455)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+23175)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]), &(inteval->stack[((hsi*2970+17730)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+321455)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+250175)*1+lsi)*1]), &(inteval->stack[((hsi*10530+321455)*1+lsi)*1]), &(inteval->stack[((hsi*8910+23175)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+32085)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+331985)*1+lsi)*1]), &(inteval->stack[((hsi*12285+32085)*1+lsi)*1]), &(inteval->stack[((hsi*10530+321455)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+450815)*1+lsi)*1]), &(inteval->stack[((hsi*21060+331985)*1+lsi)*1]), &(inteval->stack[((hsi*17820+250175)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+267995)*1+lsi)*1]), &(inteval->stack[((hsi*2970+17730)*1+lsi)*1]), &(inteval->stack[((hsi*2475+20700)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+480515)*1+lsi)*1]), &(inteval->stack[((hsi*8910+23175)*1+lsi)*1]), &(inteval->stack[((hsi*7425+267995)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+495365)*1+lsi)*1]), &(inteval->stack[((hsi*17820+250175)*1+lsi)*1]), &(inteval->stack[((hsi*14850+480515)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+520115)*1+lsi)*1]), &(inteval->stack[((hsi*29700+450815)*1+lsi)*1]), &(inteval->stack[((hsi*24750+495365)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+480515)*1+lsi)*1]), &(inteval->stack[((hsi*5400+0)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+0)*1+lsi)*1]), &(inteval->stack[((hsi*14175+480515)*1+lsi)*1]), &(inteval->stack[((hsi*12285+32085)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+480515)*1+lsi)*1]), &(inteval->stack[((hsi*24570+0)*1+lsi)*1]), &(inteval->stack[((hsi*21060+331985)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+0)*1+lsi)*1]), &(inteval->stack[((hsi*35100+480515)*1+lsi)*1]), &(inteval->stack[((hsi*29700+450815)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+450815)*1+lsi)*1]), &(inteval->stack[((hsi*44550+0)*1+lsi)*1]), &(inteval->stack[((hsi*37125+520115)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*124740+502790)*1+lsi)*1]), &(inteval->stack[((hsi*51975+450815)*1+lsi)*1]), &(inteval->stack[((hsi*41580+279875)*1+lsi)*1]),1155);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*194040+56135)*1+lsi)*1]), &(inteval->stack[((hsi*124740+502790)*1+lsi)*1]), &(inteval->stack[((hsi*97020+353795)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*194040+56135)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
