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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0li.h>
#include <HRRPart1bra0ket0lp.h>
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
#include <_aB_K__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__L__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,45360)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+181440)*1+lsi)*1]), &(inteval->stack[((hsi*2376+39384)*1+lsi)*1]), &(inteval->stack[((hsi*1980+41760)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+187380)*1+lsi)*1]), &(inteval->stack[((hsi*2808+36576)*1+lsi)*1]), &(inteval->stack[((hsi*2376+39384)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+194508)*1+lsi)*1]), &(inteval->stack[((hsi*7128+187380)*1+lsi)*1]), &(inteval->stack[((hsi*5940+181440)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+206388)*1+lsi)*1]), &(inteval->stack[((hsi*3276+33300)*1+lsi)*1]), &(inteval->stack[((hsi*2808+36576)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+214812)*1+lsi)*1]), &(inteval->stack[((hsi*8424+206388)*1+lsi)*1]), &(inteval->stack[((hsi*7128+187380)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+229068)*1+lsi)*1]), &(inteval->stack[((hsi*14256+214812)*1+lsi)*1]), &(inteval->stack[((hsi*11880+194508)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+248868)*1+lsi)*1]), &(inteval->stack[((hsi*3780+29520)*1+lsi)*1]), &(inteval->stack[((hsi*3276+33300)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+258696)*1+lsi)*1]), &(inteval->stack[((hsi*9828+248868)*1+lsi)*1]), &(inteval->stack[((hsi*8424+206388)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+275544)*1+lsi)*1]), &(inteval->stack[((hsi*16848+258696)*1+lsi)*1]), &(inteval->stack[((hsi*14256+214812)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+299304)*1+lsi)*1]), &(inteval->stack[((hsi*23760+275544)*1+lsi)*1]), &(inteval->stack[((hsi*19800+229068)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+206388)*1+lsi)*1]), &(inteval->stack[((hsi*1980+41760)*1+lsi)*1]), &(inteval->stack[((hsi*1620+43740)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+211248)*1+lsi)*1]), &(inteval->stack[((hsi*5940+181440)*1+lsi)*1]), &(inteval->stack[((hsi*4860+206388)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+329004)*1+lsi)*1]), &(inteval->stack[((hsi*11880+194508)*1+lsi)*1]), &(inteval->stack[((hsi*9720+211248)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+181440)*1+lsi)*1]), &(inteval->stack[((hsi*19800+229068)*1+lsi)*1]), &(inteval->stack[((hsi*16200+329004)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+205740)*1+lsi)*1]), &(inteval->stack[((hsi*29700+299304)*1+lsi)*1]), &(inteval->stack[((hsi*24300+181440)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+181440)*1+lsi)*1]), &(inteval->stack[((hsi*4320+25200)*1+lsi)*1]), &(inteval->stack[((hsi*3780+29520)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+25200)*1+lsi)*1]), &(inteval->stack[((hsi*11340+181440)*1+lsi)*1]), &(inteval->stack[((hsi*9828+248868)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+329004)*1+lsi)*1]), &(inteval->stack[((hsi*19656+25200)*1+lsi)*1]), &(inteval->stack[((hsi*16848+258696)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+239760)*1+lsi)*1]), &(inteval->stack[((hsi*28080+329004)*1+lsi)*1]), &(inteval->stack[((hsi*23760+275544)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+329004)*1+lsi)*1]), &(inteval->stack[((hsi*35640+239760)*1+lsi)*1]), &(inteval->stack[((hsi*29700+299304)*1+lsi)*1]),36);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*45360+239760)*1+lsi)*1]), &(inteval->stack[((hsi*41580+329004)*1+lsi)*1]), &(inteval->stack[((hsi*34020+205740)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+181440)*1+lsi)*1]), &(inteval->stack[((hsi*2970+17730)*1+lsi)*1]), &(inteval->stack[((hsi*2475+20700)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+188865)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]), &(inteval->stack[((hsi*2970+17730)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+197775)*1+lsi)*1]), &(inteval->stack[((hsi*8910+188865)*1+lsi)*1]), &(inteval->stack[((hsi*7425+181440)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+212625)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+25200)*1+lsi)*1]), &(inteval->stack[((hsi*10530+212625)*1+lsi)*1]), &(inteval->stack[((hsi*8910+188865)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+285120)*1+lsi)*1]), &(inteval->stack[((hsi*17820+25200)*1+lsi)*1]), &(inteval->stack[((hsi*14850+197775)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+223155)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+309870)*1+lsi)*1]), &(inteval->stack[((hsi*12285+223155)*1+lsi)*1]), &(inteval->stack[((hsi*10530+212625)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+330930)*1+lsi)*1]), &(inteval->stack[((hsi*21060+309870)*1+lsi)*1]), &(inteval->stack[((hsi*17820+25200)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+360630)*1+lsi)*1]), &(inteval->stack[((hsi*29700+330930)*1+lsi)*1]), &(inteval->stack[((hsi*24750+285120)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+25200)*1+lsi)*1]), &(inteval->stack[((hsi*2475+20700)*1+lsi)*1]), &(inteval->stack[((hsi*2025+23175)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+10125)*1+lsi)*1]), &(inteval->stack[((hsi*7425+181440)*1+lsi)*1]), &(inteval->stack[((hsi*6075+25200)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+22275)*1+lsi)*1]), &(inteval->stack[((hsi*14850+197775)*1+lsi)*1]), &(inteval->stack[((hsi*12150+10125)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+181440)*1+lsi)*1]), &(inteval->stack[((hsi*24750+285120)*1+lsi)*1]), &(inteval->stack[((hsi*20250+22275)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+397755)*1+lsi)*1]), &(inteval->stack[((hsi*37125+360630)*1+lsi)*1]), &(inteval->stack[((hsi*30375+181440)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+181440)*1+lsi)*1]), &(inteval->stack[((hsi*5400+0)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+0)*1+lsi)*1]), &(inteval->stack[((hsi*14175+181440)*1+lsi)*1]), &(inteval->stack[((hsi*12285+223155)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+181440)*1+lsi)*1]), &(inteval->stack[((hsi*24570+0)*1+lsi)*1]), &(inteval->stack[((hsi*21060+309870)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+285120)*1+lsi)*1]), &(inteval->stack[((hsi*35100+181440)*1+lsi)*1]), &(inteval->stack[((hsi*29700+330930)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+181440)*1+lsi)*1]), &(inteval->stack[((hsi*44550+285120)*1+lsi)*1]), &(inteval->stack[((hsi*37125+360630)*1+lsi)*1]),45);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*56700+285120)*1+lsi)*1]), &(inteval->stack[((hsi*51975+181440)*1+lsi)*1]), &(inteval->stack[((hsi*42525+397755)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*136080+45360)*1+lsi)*1]), &(inteval->stack[((hsi*56700+285120)*1+lsi)*1]), &(inteval->stack[((hsi*45360+239760)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*136080+45360)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
