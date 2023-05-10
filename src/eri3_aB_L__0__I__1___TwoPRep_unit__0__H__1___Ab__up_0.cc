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
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ih.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_L__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_L__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,13860)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_L__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+40320)*1+lsi)*1]), &(inteval->stack[((hsi*2025+8955)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10980)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+45180)*1+lsi)*1]), &(inteval->stack[((hsi*2475+6480)*1+lsi)*1]), &(inteval->stack[((hsi*2025+8955)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+51255)*1+lsi)*1]), &(inteval->stack[((hsi*6075+45180)*1+lsi)*1]), &(inteval->stack[((hsi*4860+40320)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+60975)*1+lsi)*1]), &(inteval->stack[((hsi*2970+3510)*1+lsi)*1]), &(inteval->stack[((hsi*2475+6480)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+68400)*1+lsi)*1]), &(inteval->stack[((hsi*7425+60975)*1+lsi)*1]), &(inteval->stack[((hsi*6075+45180)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+80550)*1+lsi)*1]), &(inteval->stack[((hsi*12150+68400)*1+lsi)*1]), &(inteval->stack[((hsi*9720+51255)*1+lsi)*1]),45);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+45180)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10980)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12600)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+96750)*1+lsi)*1]), &(inteval->stack[((hsi*4860+40320)*1+lsi)*1]), &(inteval->stack[((hsi*3780+45180)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+104310)*1+lsi)*1]), &(inteval->stack[((hsi*9720+51255)*1+lsi)*1]), &(inteval->stack[((hsi*7560+96750)*1+lsi)*1]),45);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*18900+40320)*1+lsi)*1]), &(inteval->stack[((hsi*16200+80550)*1+lsi)*1]), &(inteval->stack[((hsi*12600+104310)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+96750)*1+lsi)*1]), &(inteval->stack[((hsi*3510+0)*1+lsi)*1]), &(inteval->stack[((hsi*2970+3510)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+105660)*1+lsi)*1]), &(inteval->stack[((hsi*8910+96750)*1+lsi)*1]), &(inteval->stack[((hsi*7425+60975)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+120510)*1+lsi)*1]), &(inteval->stack[((hsi*14850+105660)*1+lsi)*1]), &(inteval->stack[((hsi*12150+68400)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+140760)*1+lsi)*1]), &(inteval->stack[((hsi*20250+120510)*1+lsi)*1]), &(inteval->stack[((hsi*16200+80550)*1+lsi)*1]),45);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*26460+13860)*1+lsi)*1]), &(inteval->stack[((hsi*24300+140760)*1+lsi)*1]), &(inteval->stack[((hsi*18900+40320)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*26460+13860)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
