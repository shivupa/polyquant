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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
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
#include <_aB_G__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__M__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,32960)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+136910)*1+lsi)*1]), &(inteval->stack[((hsi*1638+21056)*1+lsi)*1]), &(inteval->stack[((hsi*1386+22694)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+141068)*1+lsi)*1]), &(inteval->stack[((hsi*1911+19145)*1+lsi)*1]), &(inteval->stack[((hsi*1638+21056)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+145982)*1+lsi)*1]), &(inteval->stack[((hsi*4914+141068)*1+lsi)*1]), &(inteval->stack[((hsi*4158+136910)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+154298)*1+lsi)*1]), &(inteval->stack[((hsi*2205+16940)*1+lsi)*1]), &(inteval->stack[((hsi*1911+19145)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+160031)*1+lsi)*1]), &(inteval->stack[((hsi*5733+154298)*1+lsi)*1]), &(inteval->stack[((hsi*4914+141068)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+169859)*1+lsi)*1]), &(inteval->stack[((hsi*9828+160031)*1+lsi)*1]), &(inteval->stack[((hsi*8316+145982)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+141068)*1+lsi)*1]), &(inteval->stack[((hsi*1386+22694)*1+lsi)*1]), &(inteval->stack[((hsi*1155+24080)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+183719)*1+lsi)*1]), &(inteval->stack[((hsi*4158+136910)*1+lsi)*1]), &(inteval->stack[((hsi*3465+141068)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+190649)*1+lsi)*1]), &(inteval->stack[((hsi*8316+145982)*1+lsi)*1]), &(inteval->stack[((hsi*6930+183719)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+136910)*1+lsi)*1]), &(inteval->stack[((hsi*13860+169859)*1+lsi)*1]), &(inteval->stack[((hsi*11550+190649)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+183719)*1+lsi)*1]), &(inteval->stack[((hsi*2520+14420)*1+lsi)*1]), &(inteval->stack[((hsi*2205+16940)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+190334)*1+lsi)*1]), &(inteval->stack[((hsi*6615+183719)*1+lsi)*1]), &(inteval->stack[((hsi*5733+154298)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+201800)*1+lsi)*1]), &(inteval->stack[((hsi*11466+190334)*1+lsi)*1]), &(inteval->stack[((hsi*9828+160031)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+218180)*1+lsi)*1]), &(inteval->stack[((hsi*16380+201800)*1+lsi)*1]), &(inteval->stack[((hsi*13860+169859)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+154235)*1+lsi)*1]), &(inteval->stack[((hsi*20790+218180)*1+lsi)*1]), &(inteval->stack[((hsi*17325+136910)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+136910)*1+lsi)*1]), &(inteval->stack[((hsi*1170+29975)*1+lsi)*1]), &(inteval->stack[((hsi*990+31145)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+139880)*1+lsi)*1]), &(inteval->stack[((hsi*1365+28610)*1+lsi)*1]), &(inteval->stack[((hsi*1170+29975)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+143390)*1+lsi)*1]), &(inteval->stack[((hsi*3510+139880)*1+lsi)*1]), &(inteval->stack[((hsi*2970+136910)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+14420)*1+lsi)*1]), &(inteval->stack[((hsi*1575+27035)*1+lsi)*1]), &(inteval->stack[((hsi*1365+28610)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+178490)*1+lsi)*1]), &(inteval->stack[((hsi*4095+14420)*1+lsi)*1]), &(inteval->stack[((hsi*3510+139880)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+185510)*1+lsi)*1]), &(inteval->stack[((hsi*7020+178490)*1+lsi)*1]), &(inteval->stack[((hsi*5940+143390)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+18515)*1+lsi)*1]), &(inteval->stack[((hsi*990+31145)*1+lsi)*1]), &(inteval->stack[((hsi*825+32135)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+195410)*1+lsi)*1]), &(inteval->stack[((hsi*2970+136910)*1+lsi)*1]), &(inteval->stack[((hsi*2475+18515)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+200360)*1+lsi)*1]), &(inteval->stack[((hsi*5940+143390)*1+lsi)*1]), &(inteval->stack[((hsi*4950+195410)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+136910)*1+lsi)*1]), &(inteval->stack[((hsi*9900+185510)*1+lsi)*1]), &(inteval->stack[((hsi*8250+200360)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+18515)*1+lsi)*1]), &(inteval->stack[((hsi*1800+25235)*1+lsi)*1]), &(inteval->stack[((hsi*1575+27035)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+23240)*1+lsi)*1]), &(inteval->stack[((hsi*4725+18515)*1+lsi)*1]), &(inteval->stack[((hsi*4095+14420)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+195410)*1+lsi)*1]), &(inteval->stack[((hsi*8190+23240)*1+lsi)*1]), &(inteval->stack[((hsi*7020+178490)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+14420)*1+lsi)*1]), &(inteval->stack[((hsi*11700+195410)*1+lsi)*1]), &(inteval->stack[((hsi*9900+185510)*1+lsi)*1]),15);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*17325+178490)*1+lsi)*1]), &(inteval->stack[((hsi*14850+14420)*1+lsi)*1]), &(inteval->stack[((hsi*12375+136910)*1+lsi)*1]),15);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*51975+195815)*1+lsi)*1]), &(inteval->stack[((hsi*24255+154235)*1+lsi)*1]), &(inteval->stack[((hsi*17325+178490)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+14420)*1+lsi)*1]), &(inteval->stack[((hsi*2184+8848)*1+lsi)*1]), &(inteval->stack[((hsi*1848+11032)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+178490)*1+lsi)*1]), &(inteval->stack[((hsi*2548+6300)*1+lsi)*1]), &(inteval->stack[((hsi*2184+8848)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+136910)*1+lsi)*1]), &(inteval->stack[((hsi*6552+178490)*1+lsi)*1]), &(inteval->stack[((hsi*5544+14420)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+19964)*1+lsi)*1]), &(inteval->stack[((hsi*2940+3360)*1+lsi)*1]), &(inteval->stack[((hsi*2548+6300)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+247790)*1+lsi)*1]), &(inteval->stack[((hsi*7644+19964)*1+lsi)*1]), &(inteval->stack[((hsi*6552+178490)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+260894)*1+lsi)*1]), &(inteval->stack[((hsi*13104+247790)*1+lsi)*1]), &(inteval->stack[((hsi*11088+136910)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+178490)*1+lsi)*1]), &(inteval->stack[((hsi*1848+11032)*1+lsi)*1]), &(inteval->stack[((hsi*1540+12880)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+183110)*1+lsi)*1]), &(inteval->stack[((hsi*5544+14420)*1+lsi)*1]), &(inteval->stack[((hsi*4620+178490)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+279374)*1+lsi)*1]), &(inteval->stack[((hsi*11088+136910)*1+lsi)*1]), &(inteval->stack[((hsi*9240+183110)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+294774)*1+lsi)*1]), &(inteval->stack[((hsi*18480+260894)*1+lsi)*1]), &(inteval->stack[((hsi*15400+279374)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+136910)*1+lsi)*1]), &(inteval->stack[((hsi*3360+0)*1+lsi)*1]), &(inteval->stack[((hsi*2940+3360)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+0)*1+lsi)*1]), &(inteval->stack[((hsi*8820+136910)*1+lsi)*1]), &(inteval->stack[((hsi*7644+19964)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+317874)*1+lsi)*1]), &(inteval->stack[((hsi*15288+0)*1+lsi)*1]), &(inteval->stack[((hsi*13104+247790)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+0)*1+lsi)*1]), &(inteval->stack[((hsi*21840+317874)*1+lsi)*1]), &(inteval->stack[((hsi*18480+260894)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+247790)*1+lsi)*1]), &(inteval->stack[((hsi*27720+0)*1+lsi)*1]), &(inteval->stack[((hsi*23100+294774)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*72765+280130)*1+lsi)*1]), &(inteval->stack[((hsi*32340+247790)*1+lsi)*1]), &(inteval->stack[((hsi*24255+154235)*1+lsi)*1]),1155);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*103950+32960)*1+lsi)*1]), &(inteval->stack[((hsi*72765+280130)*1+lsi)*1]), &(inteval->stack[((hsi*51975+195815)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*103950+32960)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
