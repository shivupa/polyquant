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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_K__0__L__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__L__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,49288)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__L__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+211288)*1+lsi)*1]), &(inteval->stack[((hsi*3025+32718)*1+lsi)*1]), &(inteval->stack[((hsi*2475+35743)*1+lsi)*1]),55);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+218713)*1+lsi)*1]), &(inteval->stack[((hsi*2475+35743)*1+lsi)*1]), &(inteval->stack[((hsi*1980+38218)*1+lsi)*1]),55);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+224653)*1+lsi)*1]), &(inteval->stack[((hsi*7425+211288)*1+lsi)*1]), &(inteval->stack[((hsi*5940+218713)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+236533)*1+lsi)*1]), &(inteval->stack[((hsi*3630+29088)*1+lsi)*1]), &(inteval->stack[((hsi*3025+32718)*1+lsi)*1]),55);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+245608)*1+lsi)*1]), &(inteval->stack[((hsi*9075+236533)*1+lsi)*1]), &(inteval->stack[((hsi*7425+211288)*1+lsi)*1]),55);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+260458)*1+lsi)*1]), &(inteval->stack[((hsi*14850+245608)*1+lsi)*1]), &(inteval->stack[((hsi*11880+224653)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+211288)*1+lsi)*1]), &(inteval->stack[((hsi*3630+20112)*1+lsi)*1]), &(inteval->stack[((hsi*2970+23742)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+220198)*1+lsi)*1]), &(inteval->stack[((hsi*2970+23742)*1+lsi)*1]), &(inteval->stack[((hsi*2376+26712)*1+lsi)*1]),66);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+227326)*1+lsi)*1]), &(inteval->stack[((hsi*8910+211288)*1+lsi)*1]), &(inteval->stack[((hsi*7128+220198)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+241582)*1+lsi)*1]), &(inteval->stack[((hsi*4356+15756)*1+lsi)*1]), &(inteval->stack[((hsi*3630+20112)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+15756)*1+lsi)*1]), &(inteval->stack[((hsi*10890+241582)*1+lsi)*1]), &(inteval->stack[((hsi*8910+211288)*1+lsi)*1]),66);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+280258)*1+lsi)*1]), &(inteval->stack[((hsi*17820+15756)*1+lsi)*1]), &(inteval->stack[((hsi*14256+227326)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*59400+304018)*1+lsi)*1]), &(inteval->stack[((hsi*23760+280258)*1+lsi)*1]), &(inteval->stack[((hsi*19800+260458)*1+lsi)*1]),360);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+211288)*1+lsi)*1]), &(inteval->stack[((hsi*2475+43168)*1+lsi)*1]), &(inteval->stack[((hsi*2025+45643)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+217363)*1+lsi)*1]), &(inteval->stack[((hsi*2025+45643)*1+lsi)*1]), &(inteval->stack[((hsi*1620+47668)*1+lsi)*1]),45);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+222223)*1+lsi)*1]), &(inteval->stack[((hsi*6075+211288)*1+lsi)*1]), &(inteval->stack[((hsi*4860+217363)*1+lsi)*1]),45);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+231943)*1+lsi)*1]), &(inteval->stack[((hsi*2970+40198)*1+lsi)*1]), &(inteval->stack[((hsi*2475+43168)*1+lsi)*1]),45);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+15756)*1+lsi)*1]), &(inteval->stack[((hsi*7425+231943)*1+lsi)*1]), &(inteval->stack[((hsi*6075+211288)*1+lsi)*1]),45);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+231943)*1+lsi)*1]), &(inteval->stack[((hsi*12150+15756)*1+lsi)*1]), &(inteval->stack[((hsi*9720+222223)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*48600+363418)*1+lsi)*1]), &(inteval->stack[((hsi*19800+260458)*1+lsi)*1]), &(inteval->stack[((hsi*16200+231943)*1+lsi)*1]),360);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*97200+412018)*1+lsi)*1]), &(inteval->stack[((hsi*59400+304018)*1+lsi)*1]), &(inteval->stack[((hsi*48600+363418)*1+lsi)*1]),360);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+211288)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5148)*1+lsi)*1]), &(inteval->stack[((hsi*3510+9438)*1+lsi)*1]),78);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+221818)*1+lsi)*1]), &(inteval->stack[((hsi*3510+9438)*1+lsi)*1]), &(inteval->stack[((hsi*2808+12948)*1+lsi)*1]),78);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*16848+230242)*1+lsi)*1]), &(inteval->stack[((hsi*10530+211288)*1+lsi)*1]), &(inteval->stack[((hsi*8424+221818)*1+lsi)*1]),78);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+363418)*1+lsi)*1]), &(inteval->stack[((hsi*5148+0)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5148)*1+lsi)*1]),78);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+0)*1+lsi)*1]), &(inteval->stack[((hsi*12870+363418)*1+lsi)*1]), &(inteval->stack[((hsi*10530+211288)*1+lsi)*1]),78);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*28080+363418)*1+lsi)*1]), &(inteval->stack[((hsi*21060+0)*1+lsi)*1]), &(inteval->stack[((hsi*16848+230242)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*71280+509218)*1+lsi)*1]), &(inteval->stack[((hsi*28080+363418)*1+lsi)*1]), &(inteval->stack[((hsi*23760+280258)*1+lsi)*1]),360);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*118800+580498)*1+lsi)*1]), &(inteval->stack[((hsi*71280+509218)*1+lsi)*1]), &(inteval->stack[((hsi*59400+304018)*1+lsi)*1]),360);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*162000+49288)*1+lsi)*1]), &(inteval->stack[((hsi*118800+580498)*1+lsi)*1]), &(inteval->stack[((hsi*97200+412018)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*162000+49288)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
