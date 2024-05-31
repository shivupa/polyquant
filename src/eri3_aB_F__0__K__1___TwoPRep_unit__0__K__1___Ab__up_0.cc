/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kh.h>
#include <HRRPart1bra0ket0ki.h>
#include <HRRPart1bra0ket0kk.h>
#include <HRRPart1bra0ket0kp.h>
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
#include <HRRPart1bra0ket0nd.h>
#include <HRRPart1bra0ket0nf.h>
#include <HRRPart1bra0ket0ng.h>
#include <HRRPart1bra0ket0np.h>
#include <HRRPart1bra0ket0od.h>
#include <HRRPart1bra0ket0of.h>
#include <HRRPart1bra0ket0op.h>
#include <HRRPart1bra0ket0qd.h>
#include <HRRPart1bra0ket0qp.h>
#include <HRRPart1bra0ket0rp.h>
#include <eri3_aB_F__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_F__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5960)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_F__0__K__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+18920)*1+lsi)*1]), &(inteval->stack[((hsi*550+4600)*1+lsi)*1]), &(inteval->stack[((hsi*450+5150)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+20270)*1+lsi)*1]), &(inteval->stack[((hsi*660+3940)*1+lsi)*1]), &(inteval->stack[((hsi*550+4600)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+21920)*1+lsi)*1]), &(inteval->stack[((hsi*1650+20270)*1+lsi)*1]), &(inteval->stack[((hsi*1350+18920)*1+lsi)*1]),10);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*1980+24620)*1+lsi)*1]), &(inteval->stack[((hsi*780+3160)*1+lsi)*1]), &(inteval->stack[((hsi*660+3940)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+26600)*1+lsi)*1]), &(inteval->stack[((hsi*1980+24620)*1+lsi)*1]), &(inteval->stack[((hsi*1650+20270)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+29900)*1+lsi)*1]), &(inteval->stack[((hsi*3300+26600)*1+lsi)*1]), &(inteval->stack[((hsi*2700+21920)*1+lsi)*1]),10);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*2340+34400)*1+lsi)*1]), &(inteval->stack[((hsi*910+2250)*1+lsi)*1]), &(inteval->stack[((hsi*780+3160)*1+lsi)*1]),10);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*3960+36740)*1+lsi)*1]), &(inteval->stack[((hsi*2340+34400)*1+lsi)*1]), &(inteval->stack[((hsi*1980+24620)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+40700)*1+lsi)*1]), &(inteval->stack[((hsi*3960+36740)*1+lsi)*1]), &(inteval->stack[((hsi*3300+26600)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+46200)*1+lsi)*1]), &(inteval->stack[((hsi*5500+40700)*1+lsi)*1]), &(inteval->stack[((hsi*4500+29900)*1+lsi)*1]),10);
HRRPart1bra0ket0qp(inteval, &(inteval->stack[((hsi*2730+24620)*1+lsi)*1]), &(inteval->stack[((hsi*1050+1200)*1+lsi)*1]), &(inteval->stack[((hsi*910+2250)*1+lsi)*1]),10);
HRRPart1bra0ket0od(inteval, &(inteval->stack[((hsi*4680+52950)*1+lsi)*1]), &(inteval->stack[((hsi*2730+24620)*1+lsi)*1]), &(inteval->stack[((hsi*2340+34400)*1+lsi)*1]),10);
HRRPart1bra0ket0nf(inteval, &(inteval->stack[((hsi*6600+57630)*1+lsi)*1]), &(inteval->stack[((hsi*4680+52950)*1+lsi)*1]), &(inteval->stack[((hsi*3960+36740)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+64230)*1+lsi)*1]), &(inteval->stack[((hsi*6600+57630)*1+lsi)*1]), &(inteval->stack[((hsi*5500+40700)*1+lsi)*1]),10);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*9450+34400)*1+lsi)*1]), &(inteval->stack[((hsi*8250+64230)*1+lsi)*1]), &(inteval->stack[((hsi*6750+46200)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+2250)*1+lsi)*1]), &(inteval->stack[((hsi*450+5150)*1+lsi)*1]), &(inteval->stack[((hsi*360+5600)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+3330)*1+lsi)*1]), &(inteval->stack[((hsi*1350+18920)*1+lsi)*1]), &(inteval->stack[((hsi*1080+2250)*1+lsi)*1]),10);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*3600+72480)*1+lsi)*1]), &(inteval->stack[((hsi*2700+21920)*1+lsi)*1]), &(inteval->stack[((hsi*2160+3330)*1+lsi)*1]),10);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*5400+18920)*1+lsi)*1]), &(inteval->stack[((hsi*4500+29900)*1+lsi)*1]), &(inteval->stack[((hsi*3600+72480)*1+lsi)*1]),10);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*7560+72480)*1+lsi)*1]), &(inteval->stack[((hsi*6750+46200)*1+lsi)*1]), &(inteval->stack[((hsi*5400+18920)*1+lsi)*1]),10);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*10080+80040)*1+lsi)*1]), &(inteval->stack[((hsi*9450+34400)*1+lsi)*1]), &(inteval->stack[((hsi*7560+72480)*1+lsi)*1]),10);
HRRPart1bra0ket0rp(inteval, &(inteval->stack[((hsi*3150+43850)*1+lsi)*1]), &(inteval->stack[((hsi*1200+0)*1+lsi)*1]), &(inteval->stack[((hsi*1050+1200)*1+lsi)*1]),10);
HRRPart1bra0ket0qd(inteval, &(inteval->stack[((hsi*5460+72480)*1+lsi)*1]), &(inteval->stack[((hsi*3150+43850)*1+lsi)*1]), &(inteval->stack[((hsi*2730+24620)*1+lsi)*1]),10);
HRRPart1bra0ket0of(inteval, &(inteval->stack[((hsi*7800+18920)*1+lsi)*1]), &(inteval->stack[((hsi*5460+72480)*1+lsi)*1]), &(inteval->stack[((hsi*4680+52950)*1+lsi)*1]),10);
HRRPart1bra0ket0ng(inteval, &(inteval->stack[((hsi*9900+43850)*1+lsi)*1]), &(inteval->stack[((hsi*7800+18920)*1+lsi)*1]), &(inteval->stack[((hsi*6600+57630)*1+lsi)*1]),10);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*11550+18920)*1+lsi)*1]), &(inteval->stack[((hsi*9900+43850)*1+lsi)*1]), &(inteval->stack[((hsi*8250+64230)*1+lsi)*1]),10);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*12600+43850)*1+lsi)*1]), &(inteval->stack[((hsi*11550+18920)*1+lsi)*1]), &(inteval->stack[((hsi*9450+34400)*1+lsi)*1]),10);
HRRPart1bra0ket0kk(inteval, &(inteval->stack[((hsi*12960+5960)*1+lsi)*1]), &(inteval->stack[((hsi*12600+43850)*1+lsi)*1]), &(inteval->stack[((hsi*10080+80040)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12960+5960)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
