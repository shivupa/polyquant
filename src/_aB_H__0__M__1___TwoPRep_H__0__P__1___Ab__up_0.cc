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
#include <HRRPart0bra0ket0hg.h>
#include <HRRPart0bra0ket0hh.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ig.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_H__0__M__1___TwoPRep_H__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__M__1___TwoPRep_H__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,30371)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__M__1___TwoPRep_H__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+103136)*1+lsi)*1]), &(inteval->stack[((hsi*1980+25696)*1+lsi)*1]), &(inteval->stack[((hsi*1540+27676)*1+lsi)*1]),55);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+107756)*1+lsi)*1]), &(inteval->stack[((hsi*2475+23221)*1+lsi)*1]), &(inteval->stack[((hsi*1980+25696)*1+lsi)*1]),55);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*9240+113696)*1+lsi)*1]), &(inteval->stack[((hsi*5940+107756)*1+lsi)*1]), &(inteval->stack[((hsi*4620+103136)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+122936)*1+lsi)*1]), &(inteval->stack[((hsi*3025+20196)*1+lsi)*1]), &(inteval->stack[((hsi*2475+23221)*1+lsi)*1]),55);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+130361)*1+lsi)*1]), &(inteval->stack[((hsi*7425+122936)*1+lsi)*1]), &(inteval->stack[((hsi*5940+107756)*1+lsi)*1]),55);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*15400+142241)*1+lsi)*1]), &(inteval->stack[((hsi*11880+130361)*1+lsi)*1]), &(inteval->stack[((hsi*9240+113696)*1+lsi)*1]),55);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3465+107756)*1+lsi)*1]), &(inteval->stack[((hsi*1540+27676)*1+lsi)*1]), &(inteval->stack[((hsi*1155+29216)*1+lsi)*1]),55);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*6930+23221)*1+lsi)*1]), &(inteval->stack[((hsi*4620+103136)*1+lsi)*1]), &(inteval->stack[((hsi*3465+107756)*1+lsi)*1]),55);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*11550+157641)*1+lsi)*1]), &(inteval->stack[((hsi*9240+113696)*1+lsi)*1]), &(inteval->stack[((hsi*6930+23221)*1+lsi)*1]),55);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*17325+103136)*1+lsi)*1]), &(inteval->stack[((hsi*15400+142241)*1+lsi)*1]), &(inteval->stack[((hsi*11550+157641)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+157641)*1+lsi)*1]), &(inteval->stack[((hsi*3630+16566)*1+lsi)*1]), &(inteval->stack[((hsi*3025+20196)*1+lsi)*1]),55);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+166716)*1+lsi)*1]), &(inteval->stack[((hsi*9075+157641)*1+lsi)*1]), &(inteval->stack[((hsi*7425+122936)*1+lsi)*1]),55);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+181566)*1+lsi)*1]), &(inteval->stack[((hsi*14850+166716)*1+lsi)*1]), &(inteval->stack[((hsi*11880+130361)*1+lsi)*1]),55);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*23100+157641)*1+lsi)*1]), &(inteval->stack[((hsi*19800+181566)*1+lsi)*1]), &(inteval->stack[((hsi*15400+142241)*1+lsi)*1]),55);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*24255+120461)*1+lsi)*1]), &(inteval->stack[((hsi*23100+157641)*1+lsi)*1]), &(inteval->stack[((hsi*17325+103136)*1+lsi)*1]),55);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+103136)*1+lsi)*1]), &(inteval->stack[((hsi*2376+10956)*1+lsi)*1]), &(inteval->stack[((hsi*1848+13332)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+16566)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7986)*1+lsi)*1]), &(inteval->stack[((hsi*2376+10956)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+108680)*1+lsi)*1]), &(inteval->stack[((hsi*7128+16566)*1+lsi)*1]), &(inteval->stack[((hsi*5544+103136)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+144716)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4356)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7986)*1+lsi)*1]),66);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+153626)*1+lsi)*1]), &(inteval->stack[((hsi*8910+144716)*1+lsi)*1]), &(inteval->stack[((hsi*7128+16566)*1+lsi)*1]),66);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*18480+167882)*1+lsi)*1]), &(inteval->stack[((hsi*14256+153626)*1+lsi)*1]), &(inteval->stack[((hsi*11088+108680)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+16566)*1+lsi)*1]), &(inteval->stack[((hsi*1848+13332)*1+lsi)*1]), &(inteval->stack[((hsi*1386+15180)*1+lsi)*1]),66);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*8316+20724)*1+lsi)*1]), &(inteval->stack[((hsi*5544+103136)*1+lsi)*1]), &(inteval->stack[((hsi*4158+16566)*1+lsi)*1]),66);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*13860+186362)*1+lsi)*1]), &(inteval->stack[((hsi*11088+108680)*1+lsi)*1]), &(inteval->stack[((hsi*8316+20724)*1+lsi)*1]),66);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*20790+7986)*1+lsi)*1]), &(inteval->stack[((hsi*18480+167882)*1+lsi)*1]), &(inteval->stack[((hsi*13860+186362)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+103136)*1+lsi)*1]), &(inteval->stack[((hsi*4356+0)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4356)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+186362)*1+lsi)*1]), &(inteval->stack[((hsi*10890+103136)*1+lsi)*1]), &(inteval->stack[((hsi*8910+144716)*1+lsi)*1]),66);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+204182)*1+lsi)*1]), &(inteval->stack[((hsi*17820+186362)*1+lsi)*1]), &(inteval->stack[((hsi*14256+153626)*1+lsi)*1]),66);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*27720+227942)*1+lsi)*1]), &(inteval->stack[((hsi*23760+204182)*1+lsi)*1]), &(inteval->stack[((hsi*18480+167882)*1+lsi)*1]),66);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*29106+144716)*1+lsi)*1]), &(inteval->stack[((hsi*27720+227942)*1+lsi)*1]), &(inteval->stack[((hsi*20790+7986)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*72765+30371)*1+lsi)*1]), &(inteval->stack[((hsi*29106+144716)*1+lsi)*1]), &(inteval->stack[((hsi*24255+120461)*1+lsi)*1]),441);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*72765+30371)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
