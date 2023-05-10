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
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_F__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,25160)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3510+91160)*1+lsi)*1]), &(inteval->stack[((hsi*1638+16688)*1+lsi)*1]), &(inteval->stack[((hsi*1170+18326)*1+lsi)*1]),78);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2340+94670)*1+lsi)*1]), &(inteval->stack[((hsi*1170+18326)*1+lsi)*1]), &(inteval->stack[((hsi*780+19496)*1+lsi)*1]),78);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*4680+97010)*1+lsi)*1]), &(inteval->stack[((hsi*3510+91160)*1+lsi)*1]), &(inteval->stack[((hsi*2340+94670)*1+lsi)*1]),78);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4914+101690)*1+lsi)*1]), &(inteval->stack[((hsi*2184+14504)*1+lsi)*1]), &(inteval->stack[((hsi*1638+16688)*1+lsi)*1]),78);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*7020+106604)*1+lsi)*1]), &(inteval->stack[((hsi*4914+101690)*1+lsi)*1]), &(inteval->stack[((hsi*3510+91160)*1+lsi)*1]),78);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*7800+113624)*1+lsi)*1]), &(inteval->stack[((hsi*7020+106604)*1+lsi)*1]), &(inteval->stack[((hsi*4680+97010)*1+lsi)*1]),78);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4095+91160)*1+lsi)*1]), &(inteval->stack[((hsi*1911+10318)*1+lsi)*1]), &(inteval->stack[((hsi*1365+12229)*1+lsi)*1]),91);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2730+95255)*1+lsi)*1]), &(inteval->stack[((hsi*1365+12229)*1+lsi)*1]), &(inteval->stack[((hsi*910+13594)*1+lsi)*1]),91);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*5460+97985)*1+lsi)*1]), &(inteval->stack[((hsi*4095+91160)*1+lsi)*1]), &(inteval->stack[((hsi*2730+95255)*1+lsi)*1]),91);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5733+103445)*1+lsi)*1]), &(inteval->stack[((hsi*2548+7770)*1+lsi)*1]), &(inteval->stack[((hsi*1911+10318)*1+lsi)*1]),91);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*8190+7770)*1+lsi)*1]), &(inteval->stack[((hsi*5733+103445)*1+lsi)*1]), &(inteval->stack[((hsi*4095+91160)*1+lsi)*1]),91);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*9100+103445)*1+lsi)*1]), &(inteval->stack[((hsi*8190+7770)*1+lsi)*1]), &(inteval->stack[((hsi*5460+97985)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*23400+121424)*1+lsi)*1]), &(inteval->stack[((hsi*9100+103445)*1+lsi)*1]), &(inteval->stack[((hsi*7800+113624)*1+lsi)*1]),100);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2970+7770)*1+lsi)*1]), &(inteval->stack[((hsi*1386+22124)*1+lsi)*1]), &(inteval->stack[((hsi*990+23510)*1+lsi)*1]),66);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1980+91160)*1+lsi)*1]), &(inteval->stack[((hsi*990+23510)*1+lsi)*1]), &(inteval->stack[((hsi*660+24500)*1+lsi)*1]),66);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*3960+93140)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7770)*1+lsi)*1]), &(inteval->stack[((hsi*1980+91160)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+10740)*1+lsi)*1]), &(inteval->stack[((hsi*1848+20276)*1+lsi)*1]), &(inteval->stack[((hsi*1386+22124)*1+lsi)*1]),66);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*5940+14898)*1+lsi)*1]), &(inteval->stack[((hsi*4158+10740)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7770)*1+lsi)*1]),66);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*6600+7770)*1+lsi)*1]), &(inteval->stack[((hsi*5940+14898)*1+lsi)*1]), &(inteval->stack[((hsi*3960+93140)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*19800+144824)*1+lsi)*1]), &(inteval->stack[((hsi*7800+113624)*1+lsi)*1]), &(inteval->stack[((hsi*6600+7770)*1+lsi)*1]),100);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*39600+164624)*1+lsi)*1]), &(inteval->stack[((hsi*23400+121424)*1+lsi)*1]), &(inteval->stack[((hsi*19800+144824)*1+lsi)*1]),100);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4725+144824)*1+lsi)*1]), &(inteval->stack[((hsi*2205+2940)*1+lsi)*1]), &(inteval->stack[((hsi*1575+5145)*1+lsi)*1]),105);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*3150+7770)*1+lsi)*1]), &(inteval->stack[((hsi*1575+5145)*1+lsi)*1]), &(inteval->stack[((hsi*1050+6720)*1+lsi)*1]),105);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*6300+149549)*1+lsi)*1]), &(inteval->stack[((hsi*4725+144824)*1+lsi)*1]), &(inteval->stack[((hsi*3150+7770)*1+lsi)*1]),105);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6615+5145)*1+lsi)*1]), &(inteval->stack[((hsi*2940+0)*1+lsi)*1]), &(inteval->stack[((hsi*2205+2940)*1+lsi)*1]),105);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*9450+11760)*1+lsi)*1]), &(inteval->stack[((hsi*6615+5145)*1+lsi)*1]), &(inteval->stack[((hsi*4725+144824)*1+lsi)*1]),105);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*10500+91160)*1+lsi)*1]), &(inteval->stack[((hsi*9450+11760)*1+lsi)*1]), &(inteval->stack[((hsi*6300+149549)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*27300+204224)*1+lsi)*1]), &(inteval->stack[((hsi*10500+91160)*1+lsi)*1]), &(inteval->stack[((hsi*9100+103445)*1+lsi)*1]),100);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*46800+231524)*1+lsi)*1]), &(inteval->stack[((hsi*27300+204224)*1+lsi)*1]), &(inteval->stack[((hsi*23400+121424)*1+lsi)*1]),100);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*66000+25160)*1+lsi)*1]), &(inteval->stack[((hsi*46800+231524)*1+lsi)*1]), &(inteval->stack[((hsi*39600+164624)*1+lsi)*1]),100);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*66000+25160)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
