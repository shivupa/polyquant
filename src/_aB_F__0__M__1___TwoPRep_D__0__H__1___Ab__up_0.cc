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
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
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
#include <_aB_F__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__M__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,23690)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+92990)*1+lsi)*1]), &(inteval->stack[((hsi*1170+15555)*1+lsi)*1]), &(inteval->stack[((hsi*990+16725)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+95960)*1+lsi)*1]), &(inteval->stack[((hsi*1365+14190)*1+lsi)*1]), &(inteval->stack[((hsi*1170+15555)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+99470)*1+lsi)*1]), &(inteval->stack[((hsi*3510+95960)*1+lsi)*1]), &(inteval->stack[((hsi*2970+92990)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+105410)*1+lsi)*1]), &(inteval->stack[((hsi*1575+12615)*1+lsi)*1]), &(inteval->stack[((hsi*1365+14190)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+109505)*1+lsi)*1]), &(inteval->stack[((hsi*4095+105410)*1+lsi)*1]), &(inteval->stack[((hsi*3510+95960)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+116525)*1+lsi)*1]), &(inteval->stack[((hsi*7020+109505)*1+lsi)*1]), &(inteval->stack[((hsi*5940+99470)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+95960)*1+lsi)*1]), &(inteval->stack[((hsi*990+16725)*1+lsi)*1]), &(inteval->stack[((hsi*825+17715)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+126425)*1+lsi)*1]), &(inteval->stack[((hsi*2970+92990)*1+lsi)*1]), &(inteval->stack[((hsi*2475+95960)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+131375)*1+lsi)*1]), &(inteval->stack[((hsi*5940+99470)*1+lsi)*1]), &(inteval->stack[((hsi*4950+126425)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+92990)*1+lsi)*1]), &(inteval->stack[((hsi*9900+116525)*1+lsi)*1]), &(inteval->stack[((hsi*8250+131375)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+126425)*1+lsi)*1]), &(inteval->stack[((hsi*1800+10815)*1+lsi)*1]), &(inteval->stack[((hsi*1575+12615)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+131150)*1+lsi)*1]), &(inteval->stack[((hsi*4725+126425)*1+lsi)*1]), &(inteval->stack[((hsi*4095+105410)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+139340)*1+lsi)*1]), &(inteval->stack[((hsi*8190+131150)*1+lsi)*1]), &(inteval->stack[((hsi*7020+109505)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+151040)*1+lsi)*1]), &(inteval->stack[((hsi*11700+139340)*1+lsi)*1]), &(inteval->stack[((hsi*9900+116525)*1+lsi)*1]),15);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*17325+105365)*1+lsi)*1]), &(inteval->stack[((hsi*14850+151040)*1+lsi)*1]), &(inteval->stack[((hsi*12375+92990)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+92990)*1+lsi)*1]), &(inteval->stack[((hsi*780+21700)*1+lsi)*1]), &(inteval->stack[((hsi*660+22480)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+94970)*1+lsi)*1]), &(inteval->stack[((hsi*910+20790)*1+lsi)*1]), &(inteval->stack[((hsi*780+21700)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+97310)*1+lsi)*1]), &(inteval->stack[((hsi*2340+94970)*1+lsi)*1]), &(inteval->stack[((hsi*1980+92990)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+10815)*1+lsi)*1]), &(inteval->stack[((hsi*1050+19740)*1+lsi)*1]), &(inteval->stack[((hsi*910+20790)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+13545)*1+lsi)*1]), &(inteval->stack[((hsi*2730+10815)*1+lsi)*1]), &(inteval->stack[((hsi*2340+94970)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+122690)*1+lsi)*1]), &(inteval->stack[((hsi*4680+13545)*1+lsi)*1]), &(inteval->stack[((hsi*3960+97310)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+101270)*1+lsi)*1]), &(inteval->stack[((hsi*660+22480)*1+lsi)*1]), &(inteval->stack[((hsi*550+23140)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+129290)*1+lsi)*1]), &(inteval->stack[((hsi*1980+92990)*1+lsi)*1]), &(inteval->stack[((hsi*1650+101270)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+132590)*1+lsi)*1]), &(inteval->stack[((hsi*3960+97310)*1+lsi)*1]), &(inteval->stack[((hsi*3300+129290)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+92990)*1+lsi)*1]), &(inteval->stack[((hsi*6600+122690)*1+lsi)*1]), &(inteval->stack[((hsi*5500+132590)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+101240)*1+lsi)*1]), &(inteval->stack[((hsi*1200+18540)*1+lsi)*1]), &(inteval->stack[((hsi*1050+19740)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+18225)*1+lsi)*1]), &(inteval->stack[((hsi*3150+101240)*1+lsi)*1]), &(inteval->stack[((hsi*2730+10815)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+129290)*1+lsi)*1]), &(inteval->stack[((hsi*5460+18225)*1+lsi)*1]), &(inteval->stack[((hsi*4680+13545)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+10815)*1+lsi)*1]), &(inteval->stack[((hsi*7800+129290)*1+lsi)*1]), &(inteval->stack[((hsi*6600+122690)*1+lsi)*1]),10);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*11550+122690)*1+lsi)*1]), &(inteval->stack[((hsi*9900+10815)*1+lsi)*1]), &(inteval->stack[((hsi*8250+92990)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*34650+134240)*1+lsi)*1]), &(inteval->stack[((hsi*17325+105365)*1+lsi)*1]), &(inteval->stack[((hsi*11550+122690)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+10815)*1+lsi)*1]), &(inteval->stack[((hsi*1638+6636)*1+lsi)*1]), &(inteval->stack[((hsi*1386+8274)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+92990)*1+lsi)*1]), &(inteval->stack[((hsi*1911+4725)*1+lsi)*1]), &(inteval->stack[((hsi*1638+6636)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+122690)*1+lsi)*1]), &(inteval->stack[((hsi*4914+92990)*1+lsi)*1]), &(inteval->stack[((hsi*4158+10815)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+14973)*1+lsi)*1]), &(inteval->stack[((hsi*2205+2520)*1+lsi)*1]), &(inteval->stack[((hsi*1911+4725)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+168890)*1+lsi)*1]), &(inteval->stack[((hsi*5733+14973)*1+lsi)*1]), &(inteval->stack[((hsi*4914+92990)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+178718)*1+lsi)*1]), &(inteval->stack[((hsi*9828+168890)*1+lsi)*1]), &(inteval->stack[((hsi*8316+122690)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+92990)*1+lsi)*1]), &(inteval->stack[((hsi*1386+8274)*1+lsi)*1]), &(inteval->stack[((hsi*1155+9660)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+96455)*1+lsi)*1]), &(inteval->stack[((hsi*4158+10815)*1+lsi)*1]), &(inteval->stack[((hsi*3465+92990)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+192578)*1+lsi)*1]), &(inteval->stack[((hsi*8316+122690)*1+lsi)*1]), &(inteval->stack[((hsi*6930+96455)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+204128)*1+lsi)*1]), &(inteval->stack[((hsi*13860+178718)*1+lsi)*1]), &(inteval->stack[((hsi*11550+192578)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+92990)*1+lsi)*1]), &(inteval->stack[((hsi*2520+0)*1+lsi)*1]), &(inteval->stack[((hsi*2205+2520)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+0)*1+lsi)*1]), &(inteval->stack[((hsi*6615+92990)*1+lsi)*1]), &(inteval->stack[((hsi*5733+14973)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+221453)*1+lsi)*1]), &(inteval->stack[((hsi*11466+0)*1+lsi)*1]), &(inteval->stack[((hsi*9828+168890)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+0)*1+lsi)*1]), &(inteval->stack[((hsi*16380+221453)*1+lsi)*1]), &(inteval->stack[((hsi*13860+178718)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+168890)*1+lsi)*1]), &(inteval->stack[((hsi*20790+0)*1+lsi)*1]), &(inteval->stack[((hsi*17325+204128)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*51975+193145)*1+lsi)*1]), &(inteval->stack[((hsi*24255+168890)*1+lsi)*1]), &(inteval->stack[((hsi*17325+105365)*1+lsi)*1]),1155);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*69300+23690)*1+lsi)*1]), &(inteval->stack[((hsi*51975+193145)*1+lsi)*1]), &(inteval->stack[((hsi*34650+134240)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*69300+23690)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
