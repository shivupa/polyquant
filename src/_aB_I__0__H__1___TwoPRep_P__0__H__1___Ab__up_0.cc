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
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hg.h>
#include <HRRPart1bra0ket0hh.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_I__0__H__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__H__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,16064)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__H__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+53108)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13684)*1+lsi)*1]), &(inteval->stack[((hsi*784+14692)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+55460)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12424)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13684)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+58484)*1+lsi)*1]), &(inteval->stack[((hsi*3024+55460)*1+lsi)*1]), &(inteval->stack[((hsi*2352+53108)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+63188)*1+lsi)*1]), &(inteval->stack[((hsi*1540+10884)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12424)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+66968)*1+lsi)*1]), &(inteval->stack[((hsi*3780+63188)*1+lsi)*1]), &(inteval->stack[((hsi*3024+55460)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+73016)*1+lsi)*1]), &(inteval->stack[((hsi*6048+66968)*1+lsi)*1]), &(inteval->stack[((hsi*4704+58484)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+55460)*1+lsi)*1]), &(inteval->stack[((hsi*784+14692)*1+lsi)*1]), &(inteval->stack[((hsi*588+15476)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+12424)*1+lsi)*1]), &(inteval->stack[((hsi*2352+53108)*1+lsi)*1]), &(inteval->stack[((hsi*1764+55460)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+80856)*1+lsi)*1]), &(inteval->stack[((hsi*4704+58484)*1+lsi)*1]), &(inteval->stack[((hsi*3528+12424)*1+lsi)*1]),28);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*8820+53108)*1+lsi)*1]), &(inteval->stack[((hsi*7840+73016)*1+lsi)*1]), &(inteval->stack[((hsi*5880+80856)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+80856)*1+lsi)*1]), &(inteval->stack[((hsi*1848+9036)*1+lsi)*1]), &(inteval->stack[((hsi*1540+10884)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+85476)*1+lsi)*1]), &(inteval->stack[((hsi*4620+80856)*1+lsi)*1]), &(inteval->stack[((hsi*3780+63188)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+93036)*1+lsi)*1]), &(inteval->stack[((hsi*7560+85476)*1+lsi)*1]), &(inteval->stack[((hsi*6048+66968)*1+lsi)*1]),28);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*11760+80856)*1+lsi)*1]), &(inteval->stack[((hsi*10080+93036)*1+lsi)*1]), &(inteval->stack[((hsi*7840+73016)*1+lsi)*1]),28);
HRRPart1bra0ket0hh(inteval, &(inteval->stack[((hsi*12348+61928)*1+lsi)*1]), &(inteval->stack[((hsi*11760+80856)*1+lsi)*1]), &(inteval->stack[((hsi*8820+53108)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+53108)*1+lsi)*1]), &(inteval->stack[((hsi*1296+5976)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7272)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+9036)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4356)*1+lsi)*1]), &(inteval->stack[((hsi*1296+5976)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+74276)*1+lsi)*1]), &(inteval->stack[((hsi*3888+9036)*1+lsi)*1]), &(inteval->stack[((hsi*3024+53108)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+56132)*1+lsi)*1]), &(inteval->stack[((hsi*1980+2376)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4356)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+80324)*1+lsi)*1]), &(inteval->stack[((hsi*4860+56132)*1+lsi)*1]), &(inteval->stack[((hsi*3888+9036)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+88100)*1+lsi)*1]), &(inteval->stack[((hsi*7776+80324)*1+lsi)*1]), &(inteval->stack[((hsi*6048+74276)*1+lsi)*1]),36);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+9036)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7272)*1+lsi)*1]), &(inteval->stack[((hsi*756+8280)*1+lsi)*1]),36);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+11304)*1+lsi)*1]), &(inteval->stack[((hsi*3024+53108)*1+lsi)*1]), &(inteval->stack[((hsi*2268+9036)*1+lsi)*1]),36);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*7560+98180)*1+lsi)*1]), &(inteval->stack[((hsi*6048+74276)*1+lsi)*1]), &(inteval->stack[((hsi*4536+11304)*1+lsi)*1]),36);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*11340+4356)*1+lsi)*1]), &(inteval->stack[((hsi*10080+88100)*1+lsi)*1]), &(inteval->stack[((hsi*7560+98180)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+74276)*1+lsi)*1]), &(inteval->stack[((hsi*2376+0)*1+lsi)*1]), &(inteval->stack[((hsi*1980+2376)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+98180)*1+lsi)*1]), &(inteval->stack[((hsi*5940+74276)*1+lsi)*1]), &(inteval->stack[((hsi*4860+56132)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+107900)*1+lsi)*1]), &(inteval->stack[((hsi*9720+98180)*1+lsi)*1]), &(inteval->stack[((hsi*7776+80324)*1+lsi)*1]),36);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*15120+120860)*1+lsi)*1]), &(inteval->stack[((hsi*12960+107900)*1+lsi)*1]), &(inteval->stack[((hsi*10080+88100)*1+lsi)*1]),36);
HRRPart1bra0ket0hh(inteval, &(inteval->stack[((hsi*15876+74276)*1+lsi)*1]), &(inteval->stack[((hsi*15120+120860)*1+lsi)*1]), &(inteval->stack[((hsi*11340+4356)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*37044+16064)*1+lsi)*1]), &(inteval->stack[((hsi*15876+74276)*1+lsi)*1]), &(inteval->stack[((hsi*12348+61928)*1+lsi)*1]),441);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*37044+16064)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
