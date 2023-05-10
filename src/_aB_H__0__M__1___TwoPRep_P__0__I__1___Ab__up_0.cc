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
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mp.h>
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
#include <_aB_H__0__M__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__M__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,31899)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__M__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+128919)*1+lsi)*1]), &(inteval->stack[((hsi*1638+27720)*1+lsi)*1]), &(inteval->stack[((hsi*1386+29358)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+133077)*1+lsi)*1]), &(inteval->stack[((hsi*1911+25809)*1+lsi)*1]), &(inteval->stack[((hsi*1638+27720)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+137991)*1+lsi)*1]), &(inteval->stack[((hsi*4914+133077)*1+lsi)*1]), &(inteval->stack[((hsi*4158+128919)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+146307)*1+lsi)*1]), &(inteval->stack[((hsi*2205+23604)*1+lsi)*1]), &(inteval->stack[((hsi*1911+25809)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+152040)*1+lsi)*1]), &(inteval->stack[((hsi*5733+146307)*1+lsi)*1]), &(inteval->stack[((hsi*4914+133077)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+161868)*1+lsi)*1]), &(inteval->stack[((hsi*9828+152040)*1+lsi)*1]), &(inteval->stack[((hsi*8316+137991)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+175728)*1+lsi)*1]), &(inteval->stack[((hsi*2520+21084)*1+lsi)*1]), &(inteval->stack[((hsi*2205+23604)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+182343)*1+lsi)*1]), &(inteval->stack[((hsi*6615+175728)*1+lsi)*1]), &(inteval->stack[((hsi*5733+146307)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+193809)*1+lsi)*1]), &(inteval->stack[((hsi*11466+182343)*1+lsi)*1]), &(inteval->stack[((hsi*9828+152040)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+210189)*1+lsi)*1]), &(inteval->stack[((hsi*16380+193809)*1+lsi)*1]), &(inteval->stack[((hsi*13860+161868)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+146307)*1+lsi)*1]), &(inteval->stack[((hsi*1386+29358)*1+lsi)*1]), &(inteval->stack[((hsi*1155+30744)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+149772)*1+lsi)*1]), &(inteval->stack[((hsi*4158+128919)*1+lsi)*1]), &(inteval->stack[((hsi*3465+146307)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+230979)*1+lsi)*1]), &(inteval->stack[((hsi*8316+137991)*1+lsi)*1]), &(inteval->stack[((hsi*6930+149772)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+128919)*1+lsi)*1]), &(inteval->stack[((hsi*13860+161868)*1+lsi)*1]), &(inteval->stack[((hsi*11550+230979)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+146244)*1+lsi)*1]), &(inteval->stack[((hsi*20790+210189)*1+lsi)*1]), &(inteval->stack[((hsi*17325+128919)*1+lsi)*1]),21);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*7560+128919)*1+lsi)*1]), &(inteval->stack[((hsi*2856+18228)*1+lsi)*1]), &(inteval->stack[((hsi*2520+21084)*1+lsi)*1]),21);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*13230+18228)*1+lsi)*1]), &(inteval->stack[((hsi*7560+128919)*1+lsi)*1]), &(inteval->stack[((hsi*6615+175728)*1+lsi)*1]),21);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*19110+230979)*1+lsi)*1]), &(inteval->stack[((hsi*13230+18228)*1+lsi)*1]), &(inteval->stack[((hsi*11466+182343)*1+lsi)*1]),21);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*24570+250089)*1+lsi)*1]), &(inteval->stack[((hsi*19110+230979)*1+lsi)*1]), &(inteval->stack[((hsi*16380+193809)*1+lsi)*1]),21);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*29106+170499)*1+lsi)*1]), &(inteval->stack[((hsi*24570+250089)*1+lsi)*1]), &(inteval->stack[((hsi*20790+210189)*1+lsi)*1]),21);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*32340+199605)*1+lsi)*1]), &(inteval->stack[((hsi*29106+170499)*1+lsi)*1]), &(inteval->stack[((hsi*24255+146244)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+128919)*1+lsi)*1]), &(inteval->stack[((hsi*2184+12656)*1+lsi)*1]), &(inteval->stack[((hsi*1848+14840)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+134463)*1+lsi)*1]), &(inteval->stack[((hsi*2548+10108)*1+lsi)*1]), &(inteval->stack[((hsi*2184+12656)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+141015)*1+lsi)*1]), &(inteval->stack[((hsi*6552+134463)*1+lsi)*1]), &(inteval->stack[((hsi*5544+128919)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+152103)*1+lsi)*1]), &(inteval->stack[((hsi*2940+7168)*1+lsi)*1]), &(inteval->stack[((hsi*2548+10108)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+159747)*1+lsi)*1]), &(inteval->stack[((hsi*7644+152103)*1+lsi)*1]), &(inteval->stack[((hsi*6552+134463)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+172851)*1+lsi)*1]), &(inteval->stack[((hsi*13104+159747)*1+lsi)*1]), &(inteval->stack[((hsi*11088+141015)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+18228)*1+lsi)*1]), &(inteval->stack[((hsi*3360+3808)*1+lsi)*1]), &(inteval->stack[((hsi*2940+7168)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+231945)*1+lsi)*1]), &(inteval->stack[((hsi*8820+18228)*1+lsi)*1]), &(inteval->stack[((hsi*7644+152103)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+247233)*1+lsi)*1]), &(inteval->stack[((hsi*15288+231945)*1+lsi)*1]), &(inteval->stack[((hsi*13104+159747)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+269073)*1+lsi)*1]), &(inteval->stack[((hsi*21840+247233)*1+lsi)*1]), &(inteval->stack[((hsi*18480+172851)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+152103)*1+lsi)*1]), &(inteval->stack[((hsi*1848+14840)*1+lsi)*1]), &(inteval->stack[((hsi*1540+16688)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+156723)*1+lsi)*1]), &(inteval->stack[((hsi*5544+128919)*1+lsi)*1]), &(inteval->stack[((hsi*4620+152103)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+296793)*1+lsi)*1]), &(inteval->stack[((hsi*11088+141015)*1+lsi)*1]), &(inteval->stack[((hsi*9240+156723)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+128919)*1+lsi)*1]), &(inteval->stack[((hsi*18480+172851)*1+lsi)*1]), &(inteval->stack[((hsi*15400+296793)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+152019)*1+lsi)*1]), &(inteval->stack[((hsi*27720+269073)*1+lsi)*1]), &(inteval->stack[((hsi*23100+128919)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+128919)*1+lsi)*1]), &(inteval->stack[((hsi*3808+0)*1+lsi)*1]), &(inteval->stack[((hsi*3360+3808)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+0)*1+lsi)*1]), &(inteval->stack[((hsi*10080+128919)*1+lsi)*1]), &(inteval->stack[((hsi*8820+18228)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+296793)*1+lsi)*1]), &(inteval->stack[((hsi*17640+0)*1+lsi)*1]), &(inteval->stack[((hsi*15288+231945)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+322273)*1+lsi)*1]), &(inteval->stack[((hsi*25480+296793)*1+lsi)*1]), &(inteval->stack[((hsi*21840+247233)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+355033)*1+lsi)*1]), &(inteval->stack[((hsi*32760+322273)*1+lsi)*1]), &(inteval->stack[((hsi*27720+269073)*1+lsi)*1]),28);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*43120+231945)*1+lsi)*1]), &(inteval->stack[((hsi*38808+355033)*1+lsi)*1]), &(inteval->stack[((hsi*32340+152019)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*97020+31899)*1+lsi)*1]), &(inteval->stack[((hsi*43120+231945)*1+lsi)*1]), &(inteval->stack[((hsi*32340+199605)*1+lsi)*1]),1540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*97020+31899)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
