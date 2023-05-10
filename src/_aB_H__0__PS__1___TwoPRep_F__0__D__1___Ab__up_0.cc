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
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__PS__1___TwoPRep_F__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__PS__1___TwoPRep_F__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,30550)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__PS__1___TwoPRep_F__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+113710)*1+lsi)*1]), &(inteval->stack[((hsi*2808+15340)*1+lsi)*1]), &(inteval->stack[((hsi*2184+18148)*1+lsi)*1]),78);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4914+120262)*1+lsi)*1]), &(inteval->stack[((hsi*2184+18148)*1+lsi)*1]), &(inteval->stack[((hsi*1638+20332)*1+lsi)*1]),78);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*9828+125176)*1+lsi)*1]), &(inteval->stack[((hsi*6552+113710)*1+lsi)*1]), &(inteval->stack[((hsi*4914+120262)*1+lsi)*1]),78);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+135004)*1+lsi)*1]), &(inteval->stack[((hsi*3510+11830)*1+lsi)*1]), &(inteval->stack[((hsi*2808+15340)*1+lsi)*1]),78);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*13104+143428)*1+lsi)*1]), &(inteval->stack[((hsi*8424+135004)*1+lsi)*1]), &(inteval->stack[((hsi*6552+113710)*1+lsi)*1]),78);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*16380+156532)*1+lsi)*1]), &(inteval->stack[((hsi*13104+143428)*1+lsi)*1]), &(inteval->stack[((hsi*9828+125176)*1+lsi)*1]),78);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+113710)*1+lsi)*1]), &(inteval->stack[((hsi*2376+24940)*1+lsi)*1]), &(inteval->stack[((hsi*1848+27316)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+119254)*1+lsi)*1]), &(inteval->stack[((hsi*1848+27316)*1+lsi)*1]), &(inteval->stack[((hsi*1386+29164)*1+lsi)*1]),66);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*8316+123412)*1+lsi)*1]), &(inteval->stack[((hsi*5544+113710)*1+lsi)*1]), &(inteval->stack[((hsi*4158+119254)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+131728)*1+lsi)*1]), &(inteval->stack[((hsi*2970+21970)*1+lsi)*1]), &(inteval->stack[((hsi*2376+24940)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+11830)*1+lsi)*1]), &(inteval->stack[((hsi*7128+131728)*1+lsi)*1]), &(inteval->stack[((hsi*5544+113710)*1+lsi)*1]),66);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*13860+131728)*1+lsi)*1]), &(inteval->stack[((hsi*11088+11830)*1+lsi)*1]), &(inteval->stack[((hsi*8316+123412)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*41580+172912)*1+lsi)*1]), &(inteval->stack[((hsi*16380+156532)*1+lsi)*1]), &(inteval->stack[((hsi*13860+131728)*1+lsi)*1]),210);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*7644+113710)*1+lsi)*1]), &(inteval->stack[((hsi*3276+4095)*1+lsi)*1]), &(inteval->stack[((hsi*2548+7371)*1+lsi)*1]),91);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5733+121354)*1+lsi)*1]), &(inteval->stack[((hsi*2548+7371)*1+lsi)*1]), &(inteval->stack[((hsi*1911+9919)*1+lsi)*1]),91);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*11466+127087)*1+lsi)*1]), &(inteval->stack[((hsi*7644+113710)*1+lsi)*1]), &(inteval->stack[((hsi*5733+121354)*1+lsi)*1]),91);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*9828+7371)*1+lsi)*1]), &(inteval->stack[((hsi*4095+0)*1+lsi)*1]), &(inteval->stack[((hsi*3276+4095)*1+lsi)*1]),91);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*15288+138553)*1+lsi)*1]), &(inteval->stack[((hsi*9828+7371)*1+lsi)*1]), &(inteval->stack[((hsi*7644+113710)*1+lsi)*1]),91);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*19110+0)*1+lsi)*1]), &(inteval->stack[((hsi*15288+138553)*1+lsi)*1]), &(inteval->stack[((hsi*11466+127087)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*49140+214492)*1+lsi)*1]), &(inteval->stack[((hsi*19110+0)*1+lsi)*1]), &(inteval->stack[((hsi*16380+156532)*1+lsi)*1]),210);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*83160+30550)*1+lsi)*1]), &(inteval->stack[((hsi*49140+214492)*1+lsi)*1]), &(inteval->stack[((hsi*41580+172912)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*83160+30550)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
