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
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
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
#include <_aB_I__0__M__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__M__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,84460)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__M__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+407860)*1+lsi)*1]), &(inteval->stack[((hsi*2808+62876)*1+lsi)*1]), &(inteval->stack[((hsi*2376+65684)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+414988)*1+lsi)*1]), &(inteval->stack[((hsi*3276+59600)*1+lsi)*1]), &(inteval->stack[((hsi*2808+62876)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+423412)*1+lsi)*1]), &(inteval->stack[((hsi*8424+414988)*1+lsi)*1]), &(inteval->stack[((hsi*7128+407860)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+437668)*1+lsi)*1]), &(inteval->stack[((hsi*3780+55820)*1+lsi)*1]), &(inteval->stack[((hsi*3276+59600)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+447496)*1+lsi)*1]), &(inteval->stack[((hsi*9828+437668)*1+lsi)*1]), &(inteval->stack[((hsi*8424+414988)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+464344)*1+lsi)*1]), &(inteval->stack[((hsi*16848+447496)*1+lsi)*1]), &(inteval->stack[((hsi*14256+423412)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+414988)*1+lsi)*1]), &(inteval->stack[((hsi*2376+65684)*1+lsi)*1]), &(inteval->stack[((hsi*1980+68060)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+488104)*1+lsi)*1]), &(inteval->stack[((hsi*7128+407860)*1+lsi)*1]), &(inteval->stack[((hsi*5940+414988)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+499984)*1+lsi)*1]), &(inteval->stack[((hsi*14256+423412)*1+lsi)*1]), &(inteval->stack[((hsi*11880+488104)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+407860)*1+lsi)*1]), &(inteval->stack[((hsi*23760+464344)*1+lsi)*1]), &(inteval->stack[((hsi*19800+499984)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+488104)*1+lsi)*1]), &(inteval->stack[((hsi*4320+51500)*1+lsi)*1]), &(inteval->stack[((hsi*3780+55820)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+499444)*1+lsi)*1]), &(inteval->stack[((hsi*11340+488104)*1+lsi)*1]), &(inteval->stack[((hsi*9828+437668)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+519100)*1+lsi)*1]), &(inteval->stack[((hsi*19656+499444)*1+lsi)*1]), &(inteval->stack[((hsi*16848+447496)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+547180)*1+lsi)*1]), &(inteval->stack[((hsi*28080+519100)*1+lsi)*1]), &(inteval->stack[((hsi*23760+464344)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+437560)*1+lsi)*1]), &(inteval->stack[((hsi*35640+547180)*1+lsi)*1]), &(inteval->stack[((hsi*29700+407860)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+407860)*1+lsi)*1]), &(inteval->stack[((hsi*3510+42545)*1+lsi)*1]), &(inteval->stack[((hsi*2970+46055)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+416770)*1+lsi)*1]), &(inteval->stack[((hsi*4095+38450)*1+lsi)*1]), &(inteval->stack[((hsi*3510+42545)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+51500)*1+lsi)*1]), &(inteval->stack[((hsi*10530+416770)*1+lsi)*1]), &(inteval->stack[((hsi*8910+407860)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+479140)*1+lsi)*1]), &(inteval->stack[((hsi*4725+33725)*1+lsi)*1]), &(inteval->stack[((hsi*4095+38450)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+491425)*1+lsi)*1]), &(inteval->stack[((hsi*12285+479140)*1+lsi)*1]), &(inteval->stack[((hsi*10530+416770)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+512485)*1+lsi)*1]), &(inteval->stack[((hsi*21060+491425)*1+lsi)*1]), &(inteval->stack[((hsi*17820+51500)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+416770)*1+lsi)*1]), &(inteval->stack[((hsi*2970+46055)*1+lsi)*1]), &(inteval->stack[((hsi*2475+49025)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+542185)*1+lsi)*1]), &(inteval->stack[((hsi*8910+407860)*1+lsi)*1]), &(inteval->stack[((hsi*7425+416770)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+407860)*1+lsi)*1]), &(inteval->stack[((hsi*17820+51500)*1+lsi)*1]), &(inteval->stack[((hsi*14850+542185)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+542185)*1+lsi)*1]), &(inteval->stack[((hsi*29700+512485)*1+lsi)*1]), &(inteval->stack[((hsi*24750+407860)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+38450)*1+lsi)*1]), &(inteval->stack[((hsi*5400+28325)*1+lsi)*1]), &(inteval->stack[((hsi*4725+33725)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+407860)*1+lsi)*1]), &(inteval->stack[((hsi*14175+38450)*1+lsi)*1]), &(inteval->stack[((hsi*12285+479140)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+28325)*1+lsi)*1]), &(inteval->stack[((hsi*24570+407860)*1+lsi)*1]), &(inteval->stack[((hsi*21060+491425)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+579310)*1+lsi)*1]), &(inteval->stack[((hsi*35100+28325)*1+lsi)*1]), &(inteval->stack[((hsi*29700+512485)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+479140)*1+lsi)*1]), &(inteval->stack[((hsi*44550+579310)*1+lsi)*1]), &(inteval->stack[((hsi*37125+542185)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*124740+531115)*1+lsi)*1]), &(inteval->stack[((hsi*51975+479140)*1+lsi)*1]), &(inteval->stack[((hsi*41580+437560)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+28325)*1+lsi)*1]), &(inteval->stack[((hsi*2184+78888)*1+lsi)*1]), &(inteval->stack[((hsi*1848+81072)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+33869)*1+lsi)*1]), &(inteval->stack[((hsi*2548+76340)*1+lsi)*1]), &(inteval->stack[((hsi*2184+78888)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+407860)*1+lsi)*1]), &(inteval->stack[((hsi*6552+33869)*1+lsi)*1]), &(inteval->stack[((hsi*5544+28325)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+40421)*1+lsi)*1]), &(inteval->stack[((hsi*2940+73400)*1+lsi)*1]), &(inteval->stack[((hsi*2548+76340)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+48065)*1+lsi)*1]), &(inteval->stack[((hsi*7644+40421)*1+lsi)*1]), &(inteval->stack[((hsi*6552+33869)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+418948)*1+lsi)*1]), &(inteval->stack[((hsi*13104+48065)*1+lsi)*1]), &(inteval->stack[((hsi*11088+407860)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+61169)*1+lsi)*1]), &(inteval->stack[((hsi*1848+81072)*1+lsi)*1]), &(inteval->stack[((hsi*1540+82920)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+655855)*1+lsi)*1]), &(inteval->stack[((hsi*5544+28325)*1+lsi)*1]), &(inteval->stack[((hsi*4620+61169)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+665095)*1+lsi)*1]), &(inteval->stack[((hsi*11088+407860)*1+lsi)*1]), &(inteval->stack[((hsi*9240+655855)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+680495)*1+lsi)*1]), &(inteval->stack[((hsi*18480+418948)*1+lsi)*1]), &(inteval->stack[((hsi*15400+665095)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+655855)*1+lsi)*1]), &(inteval->stack[((hsi*3360+70040)*1+lsi)*1]), &(inteval->stack[((hsi*2940+73400)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+61169)*1+lsi)*1]), &(inteval->stack[((hsi*8820+655855)*1+lsi)*1]), &(inteval->stack[((hsi*7644+40421)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+655855)*1+lsi)*1]), &(inteval->stack[((hsi*15288+61169)*1+lsi)*1]), &(inteval->stack[((hsi*13104+48065)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+28325)*1+lsi)*1]), &(inteval->stack[((hsi*21840+655855)*1+lsi)*1]), &(inteval->stack[((hsi*18480+418948)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+703595)*1+lsi)*1]), &(inteval->stack[((hsi*27720+28325)*1+lsi)*1]), &(inteval->stack[((hsi*23100+680495)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*97020+735935)*1+lsi)*1]), &(inteval->stack[((hsi*41580+437560)*1+lsi)*1]), &(inteval->stack[((hsi*32340+703595)*1+lsi)*1]),1155);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*194040+832955)*1+lsi)*1]), &(inteval->stack[((hsi*124740+531115)*1+lsi)*1]), &(inteval->stack[((hsi*97020+735935)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+655855)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]), &(inteval->stack[((hsi*3630+21670)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+666745)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+679615)*1+lsi)*1]), &(inteval->stack[((hsi*12870+666745)*1+lsi)*1]), &(inteval->stack[((hsi*10890+655855)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+701395)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+716410)*1+lsi)*1]), &(inteval->stack[((hsi*15015+701395)*1+lsi)*1]), &(inteval->stack[((hsi*12870+666745)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+742150)*1+lsi)*1]), &(inteval->stack[((hsi*25740+716410)*1+lsi)*1]), &(inteval->stack[((hsi*21780+679615)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+407860)*1+lsi)*1]), &(inteval->stack[((hsi*3630+21670)*1+lsi)*1]), &(inteval->stack[((hsi*3025+25300)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+12375)*1+lsi)*1]), &(inteval->stack[((hsi*10890+655855)*1+lsi)*1]), &(inteval->stack[((hsi*9075+407860)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+407860)*1+lsi)*1]), &(inteval->stack[((hsi*21780+679615)*1+lsi)*1]), &(inteval->stack[((hsi*18150+12375)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+12375)*1+lsi)*1]), &(inteval->stack[((hsi*36300+742150)*1+lsi)*1]), &(inteval->stack[((hsi*30250+407860)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+407860)*1+lsi)*1]), &(inteval->stack[((hsi*6600+0)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+778450)*1+lsi)*1]), &(inteval->stack[((hsi*17325+407860)*1+lsi)*1]), &(inteval->stack[((hsi*15015+701395)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+407860)*1+lsi)*1]), &(inteval->stack[((hsi*30030+778450)*1+lsi)*1]), &(inteval->stack[((hsi*25740+716410)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+655855)*1+lsi)*1]), &(inteval->stack[((hsi*42900+407860)*1+lsi)*1]), &(inteval->stack[((hsi*36300+742150)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+710305)*1+lsi)*1]), &(inteval->stack[((hsi*54450+655855)*1+lsi)*1]), &(inteval->stack[((hsi*45375+12375)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*155925+1026995)*1+lsi)*1]), &(inteval->stack[((hsi*63525+710305)*1+lsi)*1]), &(inteval->stack[((hsi*51975+479140)*1+lsi)*1]),1155);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*249480+1182920)*1+lsi)*1]), &(inteval->stack[((hsi*155925+1026995)*1+lsi)*1]), &(inteval->stack[((hsi*124740+531115)*1+lsi)*1]),1155);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*323400+84460)*1+lsi)*1]), &(inteval->stack[((hsi*249480+1182920)*1+lsi)*1]), &(inteval->stack[((hsi*194040+832955)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*323400+84460)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
