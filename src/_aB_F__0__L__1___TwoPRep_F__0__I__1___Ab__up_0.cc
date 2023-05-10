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
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0ff.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
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
#include <_aB_F__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__L__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,41440)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+167440)*1+lsi)*1]), &(inteval->stack[((hsi*990+33350)*1+lsi)*1]), &(inteval->stack[((hsi*825+34340)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+169915)*1+lsi)*1]), &(inteval->stack[((hsi*1170+32180)*1+lsi)*1]), &(inteval->stack[((hsi*990+33350)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+172885)*1+lsi)*1]), &(inteval->stack[((hsi*2970+169915)*1+lsi)*1]), &(inteval->stack[((hsi*2475+167440)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+177835)*1+lsi)*1]), &(inteval->stack[((hsi*1365+30815)*1+lsi)*1]), &(inteval->stack[((hsi*1170+32180)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+181345)*1+lsi)*1]), &(inteval->stack[((hsi*3510+177835)*1+lsi)*1]), &(inteval->stack[((hsi*2970+169915)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+187285)*1+lsi)*1]), &(inteval->stack[((hsi*5940+181345)*1+lsi)*1]), &(inteval->stack[((hsi*4950+172885)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+195535)*1+lsi)*1]), &(inteval->stack[((hsi*1575+29240)*1+lsi)*1]), &(inteval->stack[((hsi*1365+30815)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+199630)*1+lsi)*1]), &(inteval->stack[((hsi*4095+195535)*1+lsi)*1]), &(inteval->stack[((hsi*3510+177835)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+206650)*1+lsi)*1]), &(inteval->stack[((hsi*7020+199630)*1+lsi)*1]), &(inteval->stack[((hsi*5940+181345)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+216550)*1+lsi)*1]), &(inteval->stack[((hsi*9900+206650)*1+lsi)*1]), &(inteval->stack[((hsi*8250+187285)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+177835)*1+lsi)*1]), &(inteval->stack[((hsi*825+34340)*1+lsi)*1]), &(inteval->stack[((hsi*675+35165)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+179860)*1+lsi)*1]), &(inteval->stack[((hsi*2475+167440)*1+lsi)*1]), &(inteval->stack[((hsi*2025+177835)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+228925)*1+lsi)*1]), &(inteval->stack[((hsi*4950+172885)*1+lsi)*1]), &(inteval->stack[((hsi*4050+179860)*1+lsi)*1]),15);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*10125+167440)*1+lsi)*1]), &(inteval->stack[((hsi*8250+187285)*1+lsi)*1]), &(inteval->stack[((hsi*6750+228925)*1+lsi)*1]),15);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*14175+177565)*1+lsi)*1]), &(inteval->stack[((hsi*12375+216550)*1+lsi)*1]), &(inteval->stack[((hsi*10125+167440)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+167440)*1+lsi)*1]), &(inteval->stack[((hsi*1800+27440)*1+lsi)*1]), &(inteval->stack[((hsi*1575+29240)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+27440)*1+lsi)*1]), &(inteval->stack[((hsi*4725+167440)*1+lsi)*1]), &(inteval->stack[((hsi*4095+195535)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+228925)*1+lsi)*1]), &(inteval->stack[((hsi*8190+27440)*1+lsi)*1]), &(inteval->stack[((hsi*7020+199630)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+191740)*1+lsi)*1]), &(inteval->stack[((hsi*11700+228925)*1+lsi)*1]), &(inteval->stack[((hsi*9900+206650)*1+lsi)*1]),15);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*17325+228925)*1+lsi)*1]), &(inteval->stack[((hsi*14850+191740)*1+lsi)*1]), &(inteval->stack[((hsi*12375+216550)*1+lsi)*1]),15);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*18900+191740)*1+lsi)*1]), &(inteval->stack[((hsi*17325+228925)*1+lsi)*1]), &(inteval->stack[((hsi*14175+177565)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+167440)*1+lsi)*1]), &(inteval->stack[((hsi*1386+23954)*1+lsi)*1]), &(inteval->stack[((hsi*1155+25340)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+170905)*1+lsi)*1]), &(inteval->stack[((hsi*1638+22316)*1+lsi)*1]), &(inteval->stack[((hsi*1386+23954)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+175063)*1+lsi)*1]), &(inteval->stack[((hsi*4158+170905)*1+lsi)*1]), &(inteval->stack[((hsi*3465+167440)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+181993)*1+lsi)*1]), &(inteval->stack[((hsi*1911+20405)*1+lsi)*1]), &(inteval->stack[((hsi*1638+22316)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+27440)*1+lsi)*1]), &(inteval->stack[((hsi*4914+181993)*1+lsi)*1]), &(inteval->stack[((hsi*4158+170905)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+210640)*1+lsi)*1]), &(inteval->stack[((hsi*8316+27440)*1+lsi)*1]), &(inteval->stack[((hsi*6930+175063)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+222190)*1+lsi)*1]), &(inteval->stack[((hsi*2205+18200)*1+lsi)*1]), &(inteval->stack[((hsi*1911+20405)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+227923)*1+lsi)*1]), &(inteval->stack[((hsi*5733+222190)*1+lsi)*1]), &(inteval->stack[((hsi*4914+181993)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+237751)*1+lsi)*1]), &(inteval->stack[((hsi*9828+227923)*1+lsi)*1]), &(inteval->stack[((hsi*8316+27440)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+251611)*1+lsi)*1]), &(inteval->stack[((hsi*13860+237751)*1+lsi)*1]), &(inteval->stack[((hsi*11550+210640)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+181993)*1+lsi)*1]), &(inteval->stack[((hsi*1155+25340)*1+lsi)*1]), &(inteval->stack[((hsi*945+26495)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+20405)*1+lsi)*1]), &(inteval->stack[((hsi*3465+167440)*1+lsi)*1]), &(inteval->stack[((hsi*2835+181993)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+26075)*1+lsi)*1]), &(inteval->stack[((hsi*6930+175063)*1+lsi)*1]), &(inteval->stack[((hsi*5670+20405)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+167440)*1+lsi)*1]), &(inteval->stack[((hsi*11550+210640)*1+lsi)*1]), &(inteval->stack[((hsi*9450+26075)*1+lsi)*1]),21);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*19845+268936)*1+lsi)*1]), &(inteval->stack[((hsi*17325+251611)*1+lsi)*1]), &(inteval->stack[((hsi*14175+167440)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+167440)*1+lsi)*1]), &(inteval->stack[((hsi*2520+15680)*1+lsi)*1]), &(inteval->stack[((hsi*2205+18200)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+15680)*1+lsi)*1]), &(inteval->stack[((hsi*6615+167440)*1+lsi)*1]), &(inteval->stack[((hsi*5733+222190)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+167440)*1+lsi)*1]), &(inteval->stack[((hsi*11466+15680)*1+lsi)*1]), &(inteval->stack[((hsi*9828+227923)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+210640)*1+lsi)*1]), &(inteval->stack[((hsi*16380+167440)*1+lsi)*1]), &(inteval->stack[((hsi*13860+237751)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+167440)*1+lsi)*1]), &(inteval->stack[((hsi*20790+210640)*1+lsi)*1]), &(inteval->stack[((hsi*17325+251611)*1+lsi)*1]),21);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*26460+210640)*1+lsi)*1]), &(inteval->stack[((hsi*24255+167440)*1+lsi)*1]), &(inteval->stack[((hsi*19845+268936)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*56700+237100)*1+lsi)*1]), &(inteval->stack[((hsi*26460+210640)*1+lsi)*1]), &(inteval->stack[((hsi*18900+191740)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+167440)*1+lsi)*1]), &(inteval->stack[((hsi*660+39780)*1+lsi)*1]), &(inteval->stack[((hsi*550+40440)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+169090)*1+lsi)*1]), &(inteval->stack[((hsi*780+39000)*1+lsi)*1]), &(inteval->stack[((hsi*660+39780)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+171070)*1+lsi)*1]), &(inteval->stack[((hsi*1980+169090)*1+lsi)*1]), &(inteval->stack[((hsi*1650+167440)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+15680)*1+lsi)*1]), &(inteval->stack[((hsi*910+38090)*1+lsi)*1]), &(inteval->stack[((hsi*780+39000)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+18020)*1+lsi)*1]), &(inteval->stack[((hsi*2340+15680)*1+lsi)*1]), &(inteval->stack[((hsi*1980+169090)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+174370)*1+lsi)*1]), &(inteval->stack[((hsi*3960+18020)*1+lsi)*1]), &(inteval->stack[((hsi*3300+171070)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+21980)*1+lsi)*1]), &(inteval->stack[((hsi*1050+37040)*1+lsi)*1]), &(inteval->stack[((hsi*910+38090)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+179870)*1+lsi)*1]), &(inteval->stack[((hsi*2730+21980)*1+lsi)*1]), &(inteval->stack[((hsi*2340+15680)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+24710)*1+lsi)*1]), &(inteval->stack[((hsi*4680+179870)*1+lsi)*1]), &(inteval->stack[((hsi*3960+18020)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+293800)*1+lsi)*1]), &(inteval->stack[((hsi*6600+24710)*1+lsi)*1]), &(inteval->stack[((hsi*5500+174370)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+184550)*1+lsi)*1]), &(inteval->stack[((hsi*550+40440)*1+lsi)*1]), &(inteval->stack[((hsi*450+40990)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+15680)*1+lsi)*1]), &(inteval->stack[((hsi*1650+167440)*1+lsi)*1]), &(inteval->stack[((hsi*1350+184550)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+184550)*1+lsi)*1]), &(inteval->stack[((hsi*3300+171070)*1+lsi)*1]), &(inteval->stack[((hsi*2700+15680)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+167440)*1+lsi)*1]), &(inteval->stack[((hsi*5500+174370)*1+lsi)*1]), &(inteval->stack[((hsi*4500+184550)*1+lsi)*1]),10);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*9450+302050)*1+lsi)*1]), &(inteval->stack[((hsi*8250+293800)*1+lsi)*1]), &(inteval->stack[((hsi*6750+167440)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+167440)*1+lsi)*1]), &(inteval->stack[((hsi*1200+35840)*1+lsi)*1]), &(inteval->stack[((hsi*1050+37040)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+31310)*1+lsi)*1]), &(inteval->stack[((hsi*3150+167440)*1+lsi)*1]), &(inteval->stack[((hsi*2730+21980)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+167440)*1+lsi)*1]), &(inteval->stack[((hsi*5460+31310)*1+lsi)*1]), &(inteval->stack[((hsi*4680+179870)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+175240)*1+lsi)*1]), &(inteval->stack[((hsi*7800+167440)*1+lsi)*1]), &(inteval->stack[((hsi*6600+24710)*1+lsi)*1]),10);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*11550+15680)*1+lsi)*1]), &(inteval->stack[((hsi*9900+175240)*1+lsi)*1]), &(inteval->stack[((hsi*8250+293800)*1+lsi)*1]),10);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*12600+167440)*1+lsi)*1]), &(inteval->stack[((hsi*11550+15680)*1+lsi)*1]), &(inteval->stack[((hsi*9450+302050)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*37800+293800)*1+lsi)*1]), &(inteval->stack[((hsi*18900+191740)*1+lsi)*1]), &(inteval->stack[((hsi*12600+167440)*1+lsi)*1]),1260);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*75600+331600)*1+lsi)*1]), &(inteval->stack[((hsi*56700+237100)*1+lsi)*1]), &(inteval->stack[((hsi*37800+293800)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+167440)*1+lsi)*1]), &(inteval->stack[((hsi*1848+11032)*1+lsi)*1]), &(inteval->stack[((hsi*1540+12880)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+172060)*1+lsi)*1]), &(inteval->stack[((hsi*2184+8848)*1+lsi)*1]), &(inteval->stack[((hsi*1848+11032)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+293800)*1+lsi)*1]), &(inteval->stack[((hsi*5544+172060)*1+lsi)*1]), &(inteval->stack[((hsi*4620+167440)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+177604)*1+lsi)*1]), &(inteval->stack[((hsi*2548+6300)*1+lsi)*1]), &(inteval->stack[((hsi*2184+8848)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+303040)*1+lsi)*1]), &(inteval->stack[((hsi*6552+177604)*1+lsi)*1]), &(inteval->stack[((hsi*5544+172060)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+184156)*1+lsi)*1]), &(inteval->stack[((hsi*11088+303040)*1+lsi)*1]), &(inteval->stack[((hsi*9240+293800)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+15680)*1+lsi)*1]), &(inteval->stack[((hsi*2940+3360)*1+lsi)*1]), &(inteval->stack[((hsi*2548+6300)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+23324)*1+lsi)*1]), &(inteval->stack[((hsi*7644+15680)*1+lsi)*1]), &(inteval->stack[((hsi*6552+177604)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+407200)*1+lsi)*1]), &(inteval->stack[((hsi*13104+23324)*1+lsi)*1]), &(inteval->stack[((hsi*11088+303040)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+303040)*1+lsi)*1]), &(inteval->stack[((hsi*18480+407200)*1+lsi)*1]), &(inteval->stack[((hsi*15400+184156)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+172060)*1+lsi)*1]), &(inteval->stack[((hsi*1540+12880)*1+lsi)*1]), &(inteval->stack[((hsi*1260+14420)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+199556)*1+lsi)*1]), &(inteval->stack[((hsi*4620+167440)*1+lsi)*1]), &(inteval->stack[((hsi*3780+172060)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+167440)*1+lsi)*1]), &(inteval->stack[((hsi*9240+293800)*1+lsi)*1]), &(inteval->stack[((hsi*7560+199556)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+425680)*1+lsi)*1]), &(inteval->stack[((hsi*15400+184156)*1+lsi)*1]), &(inteval->stack[((hsi*12600+167440)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+167440)*1+lsi)*1]), &(inteval->stack[((hsi*23100+303040)*1+lsi)*1]), &(inteval->stack[((hsi*18900+425680)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+193900)*1+lsi)*1]), &(inteval->stack[((hsi*3360+0)*1+lsi)*1]), &(inteval->stack[((hsi*2940+3360)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+0)*1+lsi)*1]), &(inteval->stack[((hsi*8820+193900)*1+lsi)*1]), &(inteval->stack[((hsi*7644+15680)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+425680)*1+lsi)*1]), &(inteval->stack[((hsi*15288+0)*1+lsi)*1]), &(inteval->stack[((hsi*13104+23324)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+0)*1+lsi)*1]), &(inteval->stack[((hsi*21840+425680)*1+lsi)*1]), &(inteval->stack[((hsi*18480+407200)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+407200)*1+lsi)*1]), &(inteval->stack[((hsi*27720+0)*1+lsi)*1]), &(inteval->stack[((hsi*23100+303040)*1+lsi)*1]),28);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*35280+0)*1+lsi)*1]), &(inteval->stack[((hsi*32340+407200)*1+lsi)*1]), &(inteval->stack[((hsi*26460+167440)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*79380+407200)*1+lsi)*1]), &(inteval->stack[((hsi*35280+0)*1+lsi)*1]), &(inteval->stack[((hsi*26460+210640)*1+lsi)*1]),1260);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*113400+486580)*1+lsi)*1]), &(inteval->stack[((hsi*79380+407200)*1+lsi)*1]), &(inteval->stack[((hsi*56700+237100)*1+lsi)*1]),1260);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*126000+41440)*1+lsi)*1]), &(inteval->stack[((hsi*113400+486580)*1+lsi)*1]), &(inteval->stack[((hsi*75600+331600)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*126000+41440)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
