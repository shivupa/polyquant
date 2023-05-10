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
#include <_aB_I__0__L__1___TwoPRep_D__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__L__1___TwoPRep_D__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,61040)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__L__1___TwoPRep_D__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+272720)*1+lsi)*1]), &(inteval->stack[((hsi*2376+39384)*1+lsi)*1]), &(inteval->stack[((hsi*1980+41760)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+278660)*1+lsi)*1]), &(inteval->stack[((hsi*2808+36576)*1+lsi)*1]), &(inteval->stack[((hsi*2376+39384)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+285788)*1+lsi)*1]), &(inteval->stack[((hsi*7128+278660)*1+lsi)*1]), &(inteval->stack[((hsi*5940+272720)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+297668)*1+lsi)*1]), &(inteval->stack[((hsi*3276+33300)*1+lsi)*1]), &(inteval->stack[((hsi*2808+36576)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+306092)*1+lsi)*1]), &(inteval->stack[((hsi*8424+297668)*1+lsi)*1]), &(inteval->stack[((hsi*7128+278660)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+320348)*1+lsi)*1]), &(inteval->stack[((hsi*14256+306092)*1+lsi)*1]), &(inteval->stack[((hsi*11880+285788)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+340148)*1+lsi)*1]), &(inteval->stack[((hsi*3780+29520)*1+lsi)*1]), &(inteval->stack[((hsi*3276+33300)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+349976)*1+lsi)*1]), &(inteval->stack[((hsi*9828+340148)*1+lsi)*1]), &(inteval->stack[((hsi*8424+297668)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+366824)*1+lsi)*1]), &(inteval->stack[((hsi*16848+349976)*1+lsi)*1]), &(inteval->stack[((hsi*14256+306092)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+390584)*1+lsi)*1]), &(inteval->stack[((hsi*23760+366824)*1+lsi)*1]), &(inteval->stack[((hsi*19800+320348)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+297668)*1+lsi)*1]), &(inteval->stack[((hsi*1980+41760)*1+lsi)*1]), &(inteval->stack[((hsi*1620+43740)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+302528)*1+lsi)*1]), &(inteval->stack[((hsi*5940+272720)*1+lsi)*1]), &(inteval->stack[((hsi*4860+297668)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+420284)*1+lsi)*1]), &(inteval->stack[((hsi*11880+285788)*1+lsi)*1]), &(inteval->stack[((hsi*9720+302528)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+272720)*1+lsi)*1]), &(inteval->stack[((hsi*19800+320348)*1+lsi)*1]), &(inteval->stack[((hsi*16200+420284)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+297020)*1+lsi)*1]), &(inteval->stack[((hsi*29700+390584)*1+lsi)*1]), &(inteval->stack[((hsi*24300+272720)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+272720)*1+lsi)*1]), &(inteval->stack[((hsi*4320+25200)*1+lsi)*1]), &(inteval->stack[((hsi*3780+29520)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+25200)*1+lsi)*1]), &(inteval->stack[((hsi*11340+272720)*1+lsi)*1]), &(inteval->stack[((hsi*9828+340148)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+420284)*1+lsi)*1]), &(inteval->stack[((hsi*19656+25200)*1+lsi)*1]), &(inteval->stack[((hsi*16848+349976)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+331040)*1+lsi)*1]), &(inteval->stack[((hsi*28080+420284)*1+lsi)*1]), &(inteval->stack[((hsi*23760+366824)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+420284)*1+lsi)*1]), &(inteval->stack[((hsi*35640+331040)*1+lsi)*1]), &(inteval->stack[((hsi*29700+390584)*1+lsi)*1]),36);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*45360+331040)*1+lsi)*1]), &(inteval->stack[((hsi*41580+420284)*1+lsi)*1]), &(inteval->stack[((hsi*34020+297020)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+272720)*1+lsi)*1]), &(inteval->stack[((hsi*1848+56392)*1+lsi)*1]), &(inteval->stack[((hsi*1540+58240)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+277340)*1+lsi)*1]), &(inteval->stack[((hsi*2184+54208)*1+lsi)*1]), &(inteval->stack[((hsi*1848+56392)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+282884)*1+lsi)*1]), &(inteval->stack[((hsi*5544+277340)*1+lsi)*1]), &(inteval->stack[((hsi*4620+272720)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+292124)*1+lsi)*1]), &(inteval->stack[((hsi*2548+51660)*1+lsi)*1]), &(inteval->stack[((hsi*2184+54208)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+298676)*1+lsi)*1]), &(inteval->stack[((hsi*6552+292124)*1+lsi)*1]), &(inteval->stack[((hsi*5544+277340)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+309764)*1+lsi)*1]), &(inteval->stack[((hsi*11088+298676)*1+lsi)*1]), &(inteval->stack[((hsi*9240+282884)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+25200)*1+lsi)*1]), &(inteval->stack[((hsi*2940+48720)*1+lsi)*1]), &(inteval->stack[((hsi*2548+51660)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+376400)*1+lsi)*1]), &(inteval->stack[((hsi*7644+25200)*1+lsi)*1]), &(inteval->stack[((hsi*6552+292124)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+389504)*1+lsi)*1]), &(inteval->stack[((hsi*13104+376400)*1+lsi)*1]), &(inteval->stack[((hsi*11088+298676)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+407984)*1+lsi)*1]), &(inteval->stack[((hsi*18480+389504)*1+lsi)*1]), &(inteval->stack[((hsi*15400+309764)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+292124)*1+lsi)*1]), &(inteval->stack[((hsi*1540+58240)*1+lsi)*1]), &(inteval->stack[((hsi*1260+59780)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+295904)*1+lsi)*1]), &(inteval->stack[((hsi*4620+272720)*1+lsi)*1]), &(inteval->stack[((hsi*3780+292124)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+431084)*1+lsi)*1]), &(inteval->stack[((hsi*9240+282884)*1+lsi)*1]), &(inteval->stack[((hsi*7560+295904)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+272720)*1+lsi)*1]), &(inteval->stack[((hsi*15400+309764)*1+lsi)*1]), &(inteval->stack[((hsi*12600+431084)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+291620)*1+lsi)*1]), &(inteval->stack[((hsi*23100+407984)*1+lsi)*1]), &(inteval->stack[((hsi*18900+272720)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+272720)*1+lsi)*1]), &(inteval->stack[((hsi*3360+45360)*1+lsi)*1]), &(inteval->stack[((hsi*2940+48720)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+32844)*1+lsi)*1]), &(inteval->stack[((hsi*8820+272720)*1+lsi)*1]), &(inteval->stack[((hsi*7644+25200)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+431084)*1+lsi)*1]), &(inteval->stack[((hsi*15288+32844)*1+lsi)*1]), &(inteval->stack[((hsi*13104+376400)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+25200)*1+lsi)*1]), &(inteval->stack[((hsi*21840+431084)*1+lsi)*1]), &(inteval->stack[((hsi*18480+389504)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+431084)*1+lsi)*1]), &(inteval->stack[((hsi*27720+25200)*1+lsi)*1]), &(inteval->stack[((hsi*23100+407984)*1+lsi)*1]),28);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*35280+376400)*1+lsi)*1]), &(inteval->stack[((hsi*32340+431084)*1+lsi)*1]), &(inteval->stack[((hsi*26460+291620)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*105840+411680)*1+lsi)*1]), &(inteval->stack[((hsi*45360+331040)*1+lsi)*1]), &(inteval->stack[((hsi*35280+376400)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+272720)*1+lsi)*1]), &(inteval->stack[((hsi*2970+17730)*1+lsi)*1]), &(inteval->stack[((hsi*2475+20700)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+280145)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]), &(inteval->stack[((hsi*2970+17730)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+289055)*1+lsi)*1]), &(inteval->stack[((hsi*8910+280145)*1+lsi)*1]), &(inteval->stack[((hsi*7425+272720)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+25200)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+376400)*1+lsi)*1]), &(inteval->stack[((hsi*10530+25200)*1+lsi)*1]), &(inteval->stack[((hsi*8910+280145)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+303905)*1+lsi)*1]), &(inteval->stack[((hsi*17820+376400)*1+lsi)*1]), &(inteval->stack[((hsi*14850+289055)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+35730)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+517520)*1+lsi)*1]), &(inteval->stack[((hsi*12285+35730)*1+lsi)*1]), &(inteval->stack[((hsi*10530+25200)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+538580)*1+lsi)*1]), &(inteval->stack[((hsi*21060+517520)*1+lsi)*1]), &(inteval->stack[((hsi*17820+376400)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+568280)*1+lsi)*1]), &(inteval->stack[((hsi*29700+538580)*1+lsi)*1]), &(inteval->stack[((hsi*24750+303905)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+376400)*1+lsi)*1]), &(inteval->stack[((hsi*2475+20700)*1+lsi)*1]), &(inteval->stack[((hsi*2025+23175)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+382475)*1+lsi)*1]), &(inteval->stack[((hsi*7425+272720)*1+lsi)*1]), &(inteval->stack[((hsi*6075+376400)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+10125)*1+lsi)*1]), &(inteval->stack[((hsi*14850+289055)*1+lsi)*1]), &(inteval->stack[((hsi*12150+382475)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+376400)*1+lsi)*1]), &(inteval->stack[((hsi*24750+303905)*1+lsi)*1]), &(inteval->stack[((hsi*20250+10125)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+272720)*1+lsi)*1]), &(inteval->stack[((hsi*37125+568280)*1+lsi)*1]), &(inteval->stack[((hsi*30375+376400)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+376400)*1+lsi)*1]), &(inteval->stack[((hsi*5400+0)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+0)*1+lsi)*1]), &(inteval->stack[((hsi*14175+376400)*1+lsi)*1]), &(inteval->stack[((hsi*12285+35730)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+24570)*1+lsi)*1]), &(inteval->stack[((hsi*24570+0)*1+lsi)*1]), &(inteval->stack[((hsi*21060+517520)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+605405)*1+lsi)*1]), &(inteval->stack[((hsi*35100+24570)*1+lsi)*1]), &(inteval->stack[((hsi*29700+538580)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+0)*1+lsi)*1]), &(inteval->stack[((hsi*44550+605405)*1+lsi)*1]), &(inteval->stack[((hsi*37125+568280)*1+lsi)*1]),45);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*56700+517520)*1+lsi)*1]), &(inteval->stack[((hsi*51975+0)*1+lsi)*1]), &(inteval->stack[((hsi*42525+272720)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*136080+574220)*1+lsi)*1]), &(inteval->stack[((hsi*56700+517520)*1+lsi)*1]), &(inteval->stack[((hsi*45360+331040)*1+lsi)*1]),1260);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*211680+61040)*1+lsi)*1]), &(inteval->stack[((hsi*136080+574220)*1+lsi)*1]), &(inteval->stack[((hsi*105840+411680)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*211680+61040)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
