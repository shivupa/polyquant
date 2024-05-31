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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_I__0__K__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__K__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,33128)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__K__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+133928)*1+lsi)*1]), &(inteval->stack[((hsi*2025+22319)*1+lsi)*1]), &(inteval->stack[((hsi*1620+24344)*1+lsi)*1]),45);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+138788)*1+lsi)*1]), &(inteval->stack[((hsi*1620+24344)*1+lsi)*1]), &(inteval->stack[((hsi*1260+25964)*1+lsi)*1]),45);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*7560+142568)*1+lsi)*1]), &(inteval->stack[((hsi*4860+133928)*1+lsi)*1]), &(inteval->stack[((hsi*3780+138788)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+150128)*1+lsi)*1]), &(inteval->stack[((hsi*2475+19844)*1+lsi)*1]), &(inteval->stack[((hsi*2025+22319)*1+lsi)*1]),45);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+156203)*1+lsi)*1]), &(inteval->stack[((hsi*6075+150128)*1+lsi)*1]), &(inteval->stack[((hsi*4860+133928)*1+lsi)*1]),45);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*12600+165923)*1+lsi)*1]), &(inteval->stack[((hsi*9720+156203)*1+lsi)*1]), &(inteval->stack[((hsi*7560+142568)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+133928)*1+lsi)*1]), &(inteval->stack[((hsi*2475+13849)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16324)*1+lsi)*1]),55);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+139868)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16324)*1+lsi)*1]), &(inteval->stack[((hsi*1540+18304)*1+lsi)*1]),55);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*9240+144488)*1+lsi)*1]), &(inteval->stack[((hsi*5940+133928)*1+lsi)*1]), &(inteval->stack[((hsi*4620+139868)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+153728)*1+lsi)*1]), &(inteval->stack[((hsi*3025+10824)*1+lsi)*1]), &(inteval->stack[((hsi*2475+13849)*1+lsi)*1]),55);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+10824)*1+lsi)*1]), &(inteval->stack[((hsi*7425+153728)*1+lsi)*1]), &(inteval->stack[((hsi*5940+133928)*1+lsi)*1]),55);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*15400+178523)*1+lsi)*1]), &(inteval->stack[((hsi*11880+10824)*1+lsi)*1]), &(inteval->stack[((hsi*9240+144488)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*37800+193923)*1+lsi)*1]), &(inteval->stack[((hsi*15400+178523)*1+lsi)*1]), &(inteval->stack[((hsi*12600+165923)*1+lsi)*1]),280);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+133928)*1+lsi)*1]), &(inteval->stack[((hsi*1620+29204)*1+lsi)*1]), &(inteval->stack[((hsi*1296+30824)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+137816)*1+lsi)*1]), &(inteval->stack[((hsi*1296+30824)*1+lsi)*1]), &(inteval->stack[((hsi*1008+32120)*1+lsi)*1]),36);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*6048+140840)*1+lsi)*1]), &(inteval->stack[((hsi*3888+133928)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137816)*1+lsi)*1]),36);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+146888)*1+lsi)*1]), &(inteval->stack[((hsi*1980+27224)*1+lsi)*1]), &(inteval->stack[((hsi*1620+29204)*1+lsi)*1]),36);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+10824)*1+lsi)*1]), &(inteval->stack[((hsi*4860+146888)*1+lsi)*1]), &(inteval->stack[((hsi*3888+133928)*1+lsi)*1]),36);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*10080+146888)*1+lsi)*1]), &(inteval->stack[((hsi*7776+10824)*1+lsi)*1]), &(inteval->stack[((hsi*6048+140840)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*30240+231723)*1+lsi)*1]), &(inteval->stack[((hsi*12600+165923)*1+lsi)*1]), &(inteval->stack[((hsi*10080+146888)*1+lsi)*1]),280);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*60480+261963)*1+lsi)*1]), &(inteval->stack[((hsi*37800+193923)*1+lsi)*1]), &(inteval->stack[((hsi*30240+231723)*1+lsi)*1]),280);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+133928)*1+lsi)*1]), &(inteval->stack[((hsi*2970+3630)*1+lsi)*1]), &(inteval->stack[((hsi*2376+6600)*1+lsi)*1]),66);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+141056)*1+lsi)*1]), &(inteval->stack[((hsi*2376+6600)*1+lsi)*1]), &(inteval->stack[((hsi*1848+8976)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+146600)*1+lsi)*1]), &(inteval->stack[((hsi*7128+133928)*1+lsi)*1]), &(inteval->stack[((hsi*5544+141056)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+231723)*1+lsi)*1]), &(inteval->stack[((hsi*3630+0)*1+lsi)*1]), &(inteval->stack[((hsi*2970+3630)*1+lsi)*1]),66);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+0)*1+lsi)*1]), &(inteval->stack[((hsi*8910+231723)*1+lsi)*1]), &(inteval->stack[((hsi*7128+133928)*1+lsi)*1]),66);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*18480+231723)*1+lsi)*1]), &(inteval->stack[((hsi*14256+0)*1+lsi)*1]), &(inteval->stack[((hsi*11088+146600)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*46200+322443)*1+lsi)*1]), &(inteval->stack[((hsi*18480+231723)*1+lsi)*1]), &(inteval->stack[((hsi*15400+178523)*1+lsi)*1]),280);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*75600+368643)*1+lsi)*1]), &(inteval->stack[((hsi*46200+322443)*1+lsi)*1]), &(inteval->stack[((hsi*37800+193923)*1+lsi)*1]),280);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*100800+33128)*1+lsi)*1]), &(inteval->stack[((hsi*75600+368643)*1+lsi)*1]), &(inteval->stack[((hsi*60480+261963)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*100800+33128)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
