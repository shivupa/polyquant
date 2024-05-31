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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
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
#include <_aB_I__0__H__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__H__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,27359)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__H__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+101447)*1+lsi)*1]), &(inteval->stack[((hsi*1296+17271)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18567)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+104471)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15651)*1+lsi)*1]), &(inteval->stack[((hsi*1296+17271)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+108359)*1+lsi)*1]), &(inteval->stack[((hsi*3888+104471)*1+lsi)*1]), &(inteval->stack[((hsi*3024+101447)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+114407)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13671)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15651)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+119267)*1+lsi)*1]), &(inteval->stack[((hsi*4860+114407)*1+lsi)*1]), &(inteval->stack[((hsi*3888+104471)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+127043)*1+lsi)*1]), &(inteval->stack[((hsi*7776+119267)*1+lsi)*1]), &(inteval->stack[((hsi*6048+108359)*1+lsi)*1]),36);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+104471)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18567)*1+lsi)*1]), &(inteval->stack[((hsi*756+19575)*1+lsi)*1]),36);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+15651)*1+lsi)*1]), &(inteval->stack[((hsi*3024+101447)*1+lsi)*1]), &(inteval->stack[((hsi*2268+104471)*1+lsi)*1]),36);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*7560+137123)*1+lsi)*1]), &(inteval->stack[((hsi*6048+108359)*1+lsi)*1]), &(inteval->stack[((hsi*4536+15651)*1+lsi)*1]),36);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*11340+101447)*1+lsi)*1]), &(inteval->stack[((hsi*10080+127043)*1+lsi)*1]), &(inteval->stack[((hsi*7560+137123)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+137123)*1+lsi)*1]), &(inteval->stack[((hsi*2376+11295)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13671)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+143063)*1+lsi)*1]), &(inteval->stack[((hsi*5940+137123)*1+lsi)*1]), &(inteval->stack[((hsi*4860+114407)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+152783)*1+lsi)*1]), &(inteval->stack[((hsi*9720+143063)*1+lsi)*1]), &(inteval->stack[((hsi*7776+119267)*1+lsi)*1]),36);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*15120+137123)*1+lsi)*1]), &(inteval->stack[((hsi*12960+152783)*1+lsi)*1]), &(inteval->stack[((hsi*10080+127043)*1+lsi)*1]),36);
HRRPart1bra0ket0hh(inteval, &(inteval->stack[((hsi*15876+112787)*1+lsi)*1]), &(inteval->stack[((hsi*15120+137123)*1+lsi)*1]), &(inteval->stack[((hsi*11340+101447)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+101447)*1+lsi)*1]), &(inteval->stack[((hsi*1008+24979)*1+lsi)*1]), &(inteval->stack[((hsi*784+25987)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+11295)*1+lsi)*1]), &(inteval->stack[((hsi*1260+23719)*1+lsi)*1]), &(inteval->stack[((hsi*1008+24979)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+103799)*1+lsi)*1]), &(inteval->stack[((hsi*3024+11295)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101447)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+14319)*1+lsi)*1]), &(inteval->stack[((hsi*1540+22179)*1+lsi)*1]), &(inteval->stack[((hsi*1260+23719)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+128663)*1+lsi)*1]), &(inteval->stack[((hsi*3780+14319)*1+lsi)*1]), &(inteval->stack[((hsi*3024+11295)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+134711)*1+lsi)*1]), &(inteval->stack[((hsi*6048+128663)*1+lsi)*1]), &(inteval->stack[((hsi*4704+103799)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+108503)*1+lsi)*1]), &(inteval->stack[((hsi*784+25987)*1+lsi)*1]), &(inteval->stack[((hsi*588+26771)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+23719)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101447)*1+lsi)*1]), &(inteval->stack[((hsi*1764+108503)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+142551)*1+lsi)*1]), &(inteval->stack[((hsi*4704+103799)*1+lsi)*1]), &(inteval->stack[((hsi*3528+23719)*1+lsi)*1]),28);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*8820+101447)*1+lsi)*1]), &(inteval->stack[((hsi*7840+134711)*1+lsi)*1]), &(inteval->stack[((hsi*5880+142551)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+142551)*1+lsi)*1]), &(inteval->stack[((hsi*1848+20331)*1+lsi)*1]), &(inteval->stack[((hsi*1540+22179)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+18099)*1+lsi)*1]), &(inteval->stack[((hsi*4620+142551)*1+lsi)*1]), &(inteval->stack[((hsi*3780+14319)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+142551)*1+lsi)*1]), &(inteval->stack[((hsi*7560+18099)*1+lsi)*1]), &(inteval->stack[((hsi*6048+128663)*1+lsi)*1]),28);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*11760+11295)*1+lsi)*1]), &(inteval->stack[((hsi*10080+142551)*1+lsi)*1]), &(inteval->stack[((hsi*7840+134711)*1+lsi)*1]),28);
HRRPart1bra0ket0hh(inteval, &(inteval->stack[((hsi*12348+128663)*1+lsi)*1]), &(inteval->stack[((hsi*11760+11295)*1+lsi)*1]), &(inteval->stack[((hsi*8820+101447)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*37044+141011)*1+lsi)*1]), &(inteval->stack[((hsi*15876+112787)*1+lsi)*1]), &(inteval->stack[((hsi*12348+128663)*1+lsi)*1]),441);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+11295)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7470)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9090)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+128663)*1+lsi)*1]), &(inteval->stack[((hsi*2025+5445)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7470)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+15075)*1+lsi)*1]), &(inteval->stack[((hsi*4860+128663)*1+lsi)*1]), &(inteval->stack[((hsi*3780+11295)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+101447)*1+lsi)*1]), &(inteval->stack[((hsi*2475+2970)*1+lsi)*1]), &(inteval->stack[((hsi*2025+5445)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+178055)*1+lsi)*1]), &(inteval->stack[((hsi*6075+101447)*1+lsi)*1]), &(inteval->stack[((hsi*4860+128663)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+187775)*1+lsi)*1]), &(inteval->stack[((hsi*9720+178055)*1+lsi)*1]), &(inteval->stack[((hsi*7560+15075)*1+lsi)*1]),45);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+128663)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9090)*1+lsi)*1]), &(inteval->stack[((hsi*945+10350)*1+lsi)*1]),45);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*5670+131498)*1+lsi)*1]), &(inteval->stack[((hsi*3780+11295)*1+lsi)*1]), &(inteval->stack[((hsi*2835+128663)*1+lsi)*1]),45);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*9450+5445)*1+lsi)*1]), &(inteval->stack[((hsi*7560+15075)*1+lsi)*1]), &(inteval->stack[((hsi*5670+131498)*1+lsi)*1]),45);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*14175+200375)*1+lsi)*1]), &(inteval->stack[((hsi*12600+187775)*1+lsi)*1]), &(inteval->stack[((hsi*9450+5445)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+5445)*1+lsi)*1]), &(inteval->stack[((hsi*2970+0)*1+lsi)*1]), &(inteval->stack[((hsi*2475+2970)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+12870)*1+lsi)*1]), &(inteval->stack[((hsi*7425+5445)*1+lsi)*1]), &(inteval->stack[((hsi*6075+101447)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+214550)*1+lsi)*1]), &(inteval->stack[((hsi*12150+12870)*1+lsi)*1]), &(inteval->stack[((hsi*9720+178055)*1+lsi)*1]),45);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*18900+0)*1+lsi)*1]), &(inteval->stack[((hsi*16200+214550)*1+lsi)*1]), &(inteval->stack[((hsi*12600+187775)*1+lsi)*1]),45);
HRRPart1bra0ket0hh(inteval, &(inteval->stack[((hsi*19845+178055)*1+lsi)*1]), &(inteval->stack[((hsi*18900+0)*1+lsi)*1]), &(inteval->stack[((hsi*14175+200375)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*47628+197900)*1+lsi)*1]), &(inteval->stack[((hsi*19845+178055)*1+lsi)*1]), &(inteval->stack[((hsi*15876+112787)*1+lsi)*1]),441);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*74088+27359)*1+lsi)*1]), &(inteval->stack[((hsi*47628+197900)*1+lsi)*1]), &(inteval->stack[((hsi*37044+141011)*1+lsi)*1]),441);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*74088+27359)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
