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
#include <eri3_aB_L__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_L__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11295)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_L__0__H__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+31140)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7470)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9090)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+34920)*1+lsi)*1]), &(inteval->stack[((hsi*2025+5445)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7470)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+39780)*1+lsi)*1]), &(inteval->stack[((hsi*4860+34920)*1+lsi)*1]), &(inteval->stack[((hsi*3780+31140)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+47340)*1+lsi)*1]), &(inteval->stack[((hsi*2475+2970)*1+lsi)*1]), &(inteval->stack[((hsi*2025+5445)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+53415)*1+lsi)*1]), &(inteval->stack[((hsi*6075+47340)*1+lsi)*1]), &(inteval->stack[((hsi*4860+34920)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+63135)*1+lsi)*1]), &(inteval->stack[((hsi*9720+53415)*1+lsi)*1]), &(inteval->stack[((hsi*7560+39780)*1+lsi)*1]),45);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+34920)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9090)*1+lsi)*1]), &(inteval->stack[((hsi*945+10350)*1+lsi)*1]),45);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*5670+5445)*1+lsi)*1]), &(inteval->stack[((hsi*3780+31140)*1+lsi)*1]), &(inteval->stack[((hsi*2835+34920)*1+lsi)*1]),45);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*9450+75735)*1+lsi)*1]), &(inteval->stack[((hsi*7560+39780)*1+lsi)*1]), &(inteval->stack[((hsi*5670+5445)*1+lsi)*1]),45);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*14175+31140)*1+lsi)*1]), &(inteval->stack[((hsi*12600+63135)*1+lsi)*1]), &(inteval->stack[((hsi*9450+75735)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+75735)*1+lsi)*1]), &(inteval->stack[((hsi*2970+0)*1+lsi)*1]), &(inteval->stack[((hsi*2475+2970)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+83160)*1+lsi)*1]), &(inteval->stack[((hsi*7425+75735)*1+lsi)*1]), &(inteval->stack[((hsi*6075+47340)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+95310)*1+lsi)*1]), &(inteval->stack[((hsi*12150+83160)*1+lsi)*1]), &(inteval->stack[((hsi*9720+53415)*1+lsi)*1]),45);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*18900+75735)*1+lsi)*1]), &(inteval->stack[((hsi*16200+95310)*1+lsi)*1]), &(inteval->stack[((hsi*12600+63135)*1+lsi)*1]),45);
HRRPart1bra0ket0hh(inteval, &(inteval->stack[((hsi*19845+11295)*1+lsi)*1]), &(inteval->stack[((hsi*18900+75735)*1+lsi)*1]), &(inteval->stack[((hsi*14175+31140)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*19845+11295)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif