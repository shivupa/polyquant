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
#include <_aB_F__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,34040)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3510+133040)*1+lsi)*1]), &(inteval->stack[((hsi*1638+25568)*1+lsi)*1]), &(inteval->stack[((hsi*1170+27206)*1+lsi)*1]),78);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2340+136550)*1+lsi)*1]), &(inteval->stack[((hsi*1170+27206)*1+lsi)*1]), &(inteval->stack[((hsi*780+28376)*1+lsi)*1]),78);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*4680+138890)*1+lsi)*1]), &(inteval->stack[((hsi*3510+133040)*1+lsi)*1]), &(inteval->stack[((hsi*2340+136550)*1+lsi)*1]),78);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4914+143570)*1+lsi)*1]), &(inteval->stack[((hsi*2184+23384)*1+lsi)*1]), &(inteval->stack[((hsi*1638+25568)*1+lsi)*1]),78);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*7020+148484)*1+lsi)*1]), &(inteval->stack[((hsi*4914+143570)*1+lsi)*1]), &(inteval->stack[((hsi*3510+133040)*1+lsi)*1]),78);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*7800+155504)*1+lsi)*1]), &(inteval->stack[((hsi*7020+148484)*1+lsi)*1]), &(inteval->stack[((hsi*4680+138890)*1+lsi)*1]),78);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4095+133040)*1+lsi)*1]), &(inteval->stack[((hsi*1911+19198)*1+lsi)*1]), &(inteval->stack[((hsi*1365+21109)*1+lsi)*1]),91);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2730+137135)*1+lsi)*1]), &(inteval->stack[((hsi*1365+21109)*1+lsi)*1]), &(inteval->stack[((hsi*910+22474)*1+lsi)*1]),91);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*5460+139865)*1+lsi)*1]), &(inteval->stack[((hsi*4095+133040)*1+lsi)*1]), &(inteval->stack[((hsi*2730+137135)*1+lsi)*1]),91);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5733+145325)*1+lsi)*1]), &(inteval->stack[((hsi*2548+16650)*1+lsi)*1]), &(inteval->stack[((hsi*1911+19198)*1+lsi)*1]),91);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*8190+16650)*1+lsi)*1]), &(inteval->stack[((hsi*5733+145325)*1+lsi)*1]), &(inteval->stack[((hsi*4095+133040)*1+lsi)*1]),91);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*9100+145325)*1+lsi)*1]), &(inteval->stack[((hsi*8190+16650)*1+lsi)*1]), &(inteval->stack[((hsi*5460+139865)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*23400+163304)*1+lsi)*1]), &(inteval->stack[((hsi*9100+145325)*1+lsi)*1]), &(inteval->stack[((hsi*7800+155504)*1+lsi)*1]),100);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4725+16650)*1+lsi)*1]), &(inteval->stack[((hsi*2205+11820)*1+lsi)*1]), &(inteval->stack[((hsi*1575+14025)*1+lsi)*1]),105);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*3150+133040)*1+lsi)*1]), &(inteval->stack[((hsi*1575+14025)*1+lsi)*1]), &(inteval->stack[((hsi*1050+15600)*1+lsi)*1]),105);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*6300+136190)*1+lsi)*1]), &(inteval->stack[((hsi*4725+16650)*1+lsi)*1]), &(inteval->stack[((hsi*3150+133040)*1+lsi)*1]),105);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6615+21375)*1+lsi)*1]), &(inteval->stack[((hsi*2940+8880)*1+lsi)*1]), &(inteval->stack[((hsi*2205+11820)*1+lsi)*1]),105);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*9450+186704)*1+lsi)*1]), &(inteval->stack[((hsi*6615+21375)*1+lsi)*1]), &(inteval->stack[((hsi*4725+16650)*1+lsi)*1]),105);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*10500+8880)*1+lsi)*1]), &(inteval->stack[((hsi*9450+186704)*1+lsi)*1]), &(inteval->stack[((hsi*6300+136190)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*27300+186704)*1+lsi)*1]), &(inteval->stack[((hsi*10500+8880)*1+lsi)*1]), &(inteval->stack[((hsi*9100+145325)*1+lsi)*1]),100);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*46800+214004)*1+lsi)*1]), &(inteval->stack[((hsi*27300+186704)*1+lsi)*1]), &(inteval->stack[((hsi*23400+163304)*1+lsi)*1]),100);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2970+133040)*1+lsi)*1]), &(inteval->stack[((hsi*1386+31004)*1+lsi)*1]), &(inteval->stack[((hsi*990+32390)*1+lsi)*1]),66);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1980+136010)*1+lsi)*1]), &(inteval->stack[((hsi*990+32390)*1+lsi)*1]), &(inteval->stack[((hsi*660+33380)*1+lsi)*1]),66);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*3960+137990)*1+lsi)*1]), &(inteval->stack[((hsi*2970+133040)*1+lsi)*1]), &(inteval->stack[((hsi*1980+136010)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+141950)*1+lsi)*1]), &(inteval->stack[((hsi*1848+29156)*1+lsi)*1]), &(inteval->stack[((hsi*1386+31004)*1+lsi)*1]),66);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*5940+19380)*1+lsi)*1]), &(inteval->stack[((hsi*4158+141950)*1+lsi)*1]), &(inteval->stack[((hsi*2970+133040)*1+lsi)*1]),66);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*6600+141950)*1+lsi)*1]), &(inteval->stack[((hsi*5940+19380)*1+lsi)*1]), &(inteval->stack[((hsi*3960+137990)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*19800+260804)*1+lsi)*1]), &(inteval->stack[((hsi*7800+155504)*1+lsi)*1]), &(inteval->stack[((hsi*6600+141950)*1+lsi)*1]),100);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*39600+280604)*1+lsi)*1]), &(inteval->stack[((hsi*23400+163304)*1+lsi)*1]), &(inteval->stack[((hsi*19800+260804)*1+lsi)*1]),100);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*66000+320204)*1+lsi)*1]), &(inteval->stack[((hsi*46800+214004)*1+lsi)*1]), &(inteval->stack[((hsi*39600+280604)*1+lsi)*1]),100);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*5400+260804)*1+lsi)*1]), &(inteval->stack[((hsi*2520+3360)*1+lsi)*1]), &(inteval->stack[((hsi*1800+5880)*1+lsi)*1]),120);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*3600+266204)*1+lsi)*1]), &(inteval->stack[((hsi*1800+5880)*1+lsi)*1]), &(inteval->stack[((hsi*1200+7680)*1+lsi)*1]),120);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*7200+133040)*1+lsi)*1]), &(inteval->stack[((hsi*5400+260804)*1+lsi)*1]), &(inteval->stack[((hsi*3600+266204)*1+lsi)*1]),120);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*7560+266204)*1+lsi)*1]), &(inteval->stack[((hsi*3360+0)*1+lsi)*1]), &(inteval->stack[((hsi*2520+3360)*1+lsi)*1]),120);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*10800+140240)*1+lsi)*1]), &(inteval->stack[((hsi*7560+266204)*1+lsi)*1]), &(inteval->stack[((hsi*5400+260804)*1+lsi)*1]),120);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*12000+260804)*1+lsi)*1]), &(inteval->stack[((hsi*10800+140240)*1+lsi)*1]), &(inteval->stack[((hsi*7200+133040)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*31500+133040)*1+lsi)*1]), &(inteval->stack[((hsi*12000+260804)*1+lsi)*1]), &(inteval->stack[((hsi*10500+8880)*1+lsi)*1]),100);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*54600+260804)*1+lsi)*1]), &(inteval->stack[((hsi*31500+133040)*1+lsi)*1]), &(inteval->stack[((hsi*27300+186704)*1+lsi)*1]),100);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*78000+133040)*1+lsi)*1]), &(inteval->stack[((hsi*54600+260804)*1+lsi)*1]), &(inteval->stack[((hsi*46800+214004)*1+lsi)*1]),100);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*99000+34040)*1+lsi)*1]), &(inteval->stack[((hsi*78000+133040)*1+lsi)*1]), &(inteval->stack[((hsi*66000+320204)*1+lsi)*1]),100);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*99000+34040)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
