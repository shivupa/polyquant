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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hp.h>
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
#include <_aB_H__0__M__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__M__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,66950)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__M__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+309500)*1+lsi)*1]), &(inteval->stack[((hsi*2184+50563)*1+lsi)*1]), &(inteval->stack[((hsi*1848+52747)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+315044)*1+lsi)*1]), &(inteval->stack[((hsi*2548+48015)*1+lsi)*1]), &(inteval->stack[((hsi*2184+50563)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+321596)*1+lsi)*1]), &(inteval->stack[((hsi*6552+315044)*1+lsi)*1]), &(inteval->stack[((hsi*5544+309500)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+332684)*1+lsi)*1]), &(inteval->stack[((hsi*2940+45075)*1+lsi)*1]), &(inteval->stack[((hsi*2548+48015)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+340328)*1+lsi)*1]), &(inteval->stack[((hsi*7644+332684)*1+lsi)*1]), &(inteval->stack[((hsi*6552+315044)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+353432)*1+lsi)*1]), &(inteval->stack[((hsi*13104+340328)*1+lsi)*1]), &(inteval->stack[((hsi*11088+321596)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+315044)*1+lsi)*1]), &(inteval->stack[((hsi*1848+52747)*1+lsi)*1]), &(inteval->stack[((hsi*1540+54595)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+371912)*1+lsi)*1]), &(inteval->stack[((hsi*5544+309500)*1+lsi)*1]), &(inteval->stack[((hsi*4620+315044)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+381152)*1+lsi)*1]), &(inteval->stack[((hsi*11088+321596)*1+lsi)*1]), &(inteval->stack[((hsi*9240+371912)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+309500)*1+lsi)*1]), &(inteval->stack[((hsi*18480+353432)*1+lsi)*1]), &(inteval->stack[((hsi*15400+381152)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+371912)*1+lsi)*1]), &(inteval->stack[((hsi*3360+41715)*1+lsi)*1]), &(inteval->stack[((hsi*2940+45075)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+380732)*1+lsi)*1]), &(inteval->stack[((hsi*8820+371912)*1+lsi)*1]), &(inteval->stack[((hsi*7644+332684)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+396020)*1+lsi)*1]), &(inteval->stack[((hsi*15288+380732)*1+lsi)*1]), &(inteval->stack[((hsi*13104+340328)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+417860)*1+lsi)*1]), &(inteval->stack[((hsi*21840+396020)*1+lsi)*1]), &(inteval->stack[((hsi*18480+353432)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+332600)*1+lsi)*1]), &(inteval->stack[((hsi*27720+417860)*1+lsi)*1]), &(inteval->stack[((hsi*23100+309500)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+309500)*1+lsi)*1]), &(inteval->stack[((hsi*2808+34551)*1+lsi)*1]), &(inteval->stack[((hsi*2376+37359)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+316628)*1+lsi)*1]), &(inteval->stack[((hsi*3276+31275)*1+lsi)*1]), &(inteval->stack[((hsi*2808+34551)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+41715)*1+lsi)*1]), &(inteval->stack[((hsi*8424+316628)*1+lsi)*1]), &(inteval->stack[((hsi*7128+309500)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+364940)*1+lsi)*1]), &(inteval->stack[((hsi*3780+27495)*1+lsi)*1]), &(inteval->stack[((hsi*3276+31275)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+374768)*1+lsi)*1]), &(inteval->stack[((hsi*9828+364940)*1+lsi)*1]), &(inteval->stack[((hsi*8424+316628)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+391616)*1+lsi)*1]), &(inteval->stack[((hsi*16848+374768)*1+lsi)*1]), &(inteval->stack[((hsi*14256+41715)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+316628)*1+lsi)*1]), &(inteval->stack[((hsi*2376+37359)*1+lsi)*1]), &(inteval->stack[((hsi*1980+39735)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+415376)*1+lsi)*1]), &(inteval->stack[((hsi*7128+309500)*1+lsi)*1]), &(inteval->stack[((hsi*5940+316628)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+309500)*1+lsi)*1]), &(inteval->stack[((hsi*14256+41715)*1+lsi)*1]), &(inteval->stack[((hsi*11880+415376)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+415376)*1+lsi)*1]), &(inteval->stack[((hsi*23760+391616)*1+lsi)*1]), &(inteval->stack[((hsi*19800+309500)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+31275)*1+lsi)*1]), &(inteval->stack[((hsi*4320+23175)*1+lsi)*1]), &(inteval->stack[((hsi*3780+27495)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+309500)*1+lsi)*1]), &(inteval->stack[((hsi*11340+31275)*1+lsi)*1]), &(inteval->stack[((hsi*9828+364940)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+23175)*1+lsi)*1]), &(inteval->stack[((hsi*19656+309500)*1+lsi)*1]), &(inteval->stack[((hsi*16848+374768)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+445076)*1+lsi)*1]), &(inteval->stack[((hsi*28080+23175)*1+lsi)*1]), &(inteval->stack[((hsi*23760+391616)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+364940)*1+lsi)*1]), &(inteval->stack[((hsi*35640+445076)*1+lsi)*1]), &(inteval->stack[((hsi*29700+415376)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*97020+406520)*1+lsi)*1]), &(inteval->stack[((hsi*41580+364940)*1+lsi)*1]), &(inteval->stack[((hsi*32340+332600)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+23175)*1+lsi)*1]), &(inteval->stack[((hsi*1638+62771)*1+lsi)*1]), &(inteval->stack[((hsi*1386+64409)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+27333)*1+lsi)*1]), &(inteval->stack[((hsi*1911+60860)*1+lsi)*1]), &(inteval->stack[((hsi*1638+62771)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+32247)*1+lsi)*1]), &(inteval->stack[((hsi*4914+27333)*1+lsi)*1]), &(inteval->stack[((hsi*4158+23175)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+309500)*1+lsi)*1]), &(inteval->stack[((hsi*2205+58655)*1+lsi)*1]), &(inteval->stack[((hsi*1911+60860)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+315233)*1+lsi)*1]), &(inteval->stack[((hsi*5733+309500)*1+lsi)*1]), &(inteval->stack[((hsi*4914+27333)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+40563)*1+lsi)*1]), &(inteval->stack[((hsi*9828+315233)*1+lsi)*1]), &(inteval->stack[((hsi*8316+32247)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+325061)*1+lsi)*1]), &(inteval->stack[((hsi*1386+64409)*1+lsi)*1]), &(inteval->stack[((hsi*1155+65795)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+503540)*1+lsi)*1]), &(inteval->stack[((hsi*4158+23175)*1+lsi)*1]), &(inteval->stack[((hsi*3465+325061)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+510470)*1+lsi)*1]), &(inteval->stack[((hsi*8316+32247)*1+lsi)*1]), &(inteval->stack[((hsi*6930+503540)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+23175)*1+lsi)*1]), &(inteval->stack[((hsi*13860+40563)*1+lsi)*1]), &(inteval->stack[((hsi*11550+510470)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+325061)*1+lsi)*1]), &(inteval->stack[((hsi*2520+56135)*1+lsi)*1]), &(inteval->stack[((hsi*2205+58655)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+54423)*1+lsi)*1]), &(inteval->stack[((hsi*6615+325061)*1+lsi)*1]), &(inteval->stack[((hsi*5733+309500)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+503540)*1+lsi)*1]), &(inteval->stack[((hsi*11466+54423)*1+lsi)*1]), &(inteval->stack[((hsi*9828+315233)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+309500)*1+lsi)*1]), &(inteval->stack[((hsi*16380+503540)*1+lsi)*1]), &(inteval->stack[((hsi*13860+40563)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+40500)*1+lsi)*1]), &(inteval->stack[((hsi*20790+309500)*1+lsi)*1]), &(inteval->stack[((hsi*17325+23175)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*72765+503540)*1+lsi)*1]), &(inteval->stack[((hsi*32340+332600)*1+lsi)*1]), &(inteval->stack[((hsi*24255+40500)*1+lsi)*1]),1155);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*145530+576305)*1+lsi)*1]), &(inteval->stack[((hsi*97020+406520)*1+lsi)*1]), &(inteval->stack[((hsi*72765+503540)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+503540)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]), &(inteval->stack[((hsi*2970+17730)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+512450)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+309500)*1+lsi)*1]), &(inteval->stack[((hsi*10530+512450)*1+lsi)*1]), &(inteval->stack[((hsi*8910+503540)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+522980)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+23175)*1+lsi)*1]), &(inteval->stack[((hsi*12285+522980)*1+lsi)*1]), &(inteval->stack[((hsi*10530+512450)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+535265)*1+lsi)*1]), &(inteval->stack[((hsi*21060+23175)*1+lsi)*1]), &(inteval->stack[((hsi*17820+309500)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+327320)*1+lsi)*1]), &(inteval->stack[((hsi*2970+17730)*1+lsi)*1]), &(inteval->stack[((hsi*2475+20700)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+334745)*1+lsi)*1]), &(inteval->stack[((hsi*8910+503540)*1+lsi)*1]), &(inteval->stack[((hsi*7425+327320)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+721835)*1+lsi)*1]), &(inteval->stack[((hsi*17820+309500)*1+lsi)*1]), &(inteval->stack[((hsi*14850+334745)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+309500)*1+lsi)*1]), &(inteval->stack[((hsi*29700+535265)*1+lsi)*1]), &(inteval->stack[((hsi*24750+721835)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+44235)*1+lsi)*1]), &(inteval->stack[((hsi*5400+0)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+721835)*1+lsi)*1]), &(inteval->stack[((hsi*14175+44235)*1+lsi)*1]), &(inteval->stack[((hsi*12285+522980)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+746405)*1+lsi)*1]), &(inteval->stack[((hsi*24570+721835)*1+lsi)*1]), &(inteval->stack[((hsi*21060+23175)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+0)*1+lsi)*1]), &(inteval->stack[((hsi*35100+746405)*1+lsi)*1]), &(inteval->stack[((hsi*29700+535265)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+503540)*1+lsi)*1]), &(inteval->stack[((hsi*44550+0)*1+lsi)*1]), &(inteval->stack[((hsi*37125+309500)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*124740+721835)*1+lsi)*1]), &(inteval->stack[((hsi*51975+503540)*1+lsi)*1]), &(inteval->stack[((hsi*41580+364940)*1+lsi)*1]),1155);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*194040+846575)*1+lsi)*1]), &(inteval->stack[((hsi*124740+721835)*1+lsi)*1]), &(inteval->stack[((hsi*97020+406520)*1+lsi)*1]),1155);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*242550+66950)*1+lsi)*1]), &(inteval->stack[((hsi*194040+846575)*1+lsi)*1]), &(inteval->stack[((hsi*145530+576305)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*242550+66950)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
