/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
#include <CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0fd001.h>
#include <HRRPart1bra0ket0fd010.h>
#include <HRRPart1bra0ket0fd100.h>
#include <HRRPart1bra0ket0ff.h>
#include <HRRPart1bra0ket0ff001.h>
#include <HRRPart1bra0ket0ff010.h>
#include <HRRPart1bra0ket0ff100.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0fp001.h>
#include <HRRPart1bra0ket0fp010.h>
#include <HRRPart1bra0ket0fp100.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <deriv1eri3_aB_P__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_P__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1470)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_P__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+4170)*1+lsi)*1]), &(inteval->stack[((hsi*45+921)*1+lsi)*1]), &(inteval->stack[((hsi*30+996)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+4260)*1+lsi)*1]), &(inteval->stack[((hsi*63+813)*1+lsi)*1]), &(inteval->stack[((hsi*45+921)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+4395)*1+lsi)*1]), &(inteval->stack[((hsi*135+4260)*1+lsi)*1]), &(inteval->stack[((hsi*90+4170)*1+lsi)*1]),3);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*63+1332)*1+lsi)*1]), &(inteval->stack[((hsi*45+1395)*1+lsi)*1]), &(inteval->stack[((hsi*45+921)*1+lsi)*1]),3);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*90+4710)*1+lsi)*1]), &(inteval->stack[((hsi*45+1395)*1+lsi)*1]), &(inteval->stack[((hsi*30+1440)*1+lsi)*1]), &(inteval->stack[((hsi*30+996)*1+lsi)*1]),3);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*180+4800)*1+lsi)*1]), &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*90+4710)*1+lsi)*1]), &(inteval->stack[((hsi*90+4170)*1+lsi)*1]),3);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*189+4980)*1+lsi)*1]), &(inteval->stack[((hsi*84+1248)*1+lsi)*1]), &(inteval->stack[((hsi*63+1332)*1+lsi)*1]), &(inteval->stack[((hsi*63+813)*1+lsi)*1]),3);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*270+5169)*1+lsi)*1]), &(inteval->stack[((hsi*189+4980)*1+lsi)*1]), &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*135+4260)*1+lsi)*1]),3);
HRRPart1bra0ket0ff001(inteval, &(inteval->stack[((hsi*300+3870)*1+lsi)*1]), &(inteval->stack[((hsi*270+5169)*1+lsi)*1]), &(inteval->stack[((hsi*180+4800)*1+lsi)*1]), &(inteval->stack[((hsi*180+4395)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*63+528)*1+lsi)*1]), &(inteval->stack[((hsi*45+591)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+4710)*1+lsi)*1]), &(inteval->stack[((hsi*45+591)*1+lsi)*1]), &(inteval->stack[((hsi*30+636)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+1248)*1+lsi)*1]), &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*90+4710)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+4980)*1+lsi)*1]), &(inteval->stack[((hsi*84+444)*1+lsi)*1]), &(inteval->stack[((hsi*63+528)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+5439)*1+lsi)*1]), &(inteval->stack[((hsi*189+4980)*1+lsi)*1]), &(inteval->stack[((hsi*135+4575)*1+lsi)*1]),3);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*300+2070)*1+lsi)*1]), &(inteval->stack[((hsi*270+5439)*1+lsi)*1]), &(inteval->stack[((hsi*180+1248)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*300+2970)*1+lsi)*1]), &(inteval->stack[((hsi*300+2070)*1+lsi)*1]), &(inteval->stack[((hsi*300+3870)*1+lsi)*1]));
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*63+1110)*1+lsi)*1]), &(inteval->stack[((hsi*45+1173)*1+lsi)*1]), &(inteval->stack[((hsi*45+921)*1+lsi)*1]),3);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*90+4710)*1+lsi)*1]), &(inteval->stack[((hsi*45+1173)*1+lsi)*1]), &(inteval->stack[((hsi*30+1218)*1+lsi)*1]), &(inteval->stack[((hsi*30+996)*1+lsi)*1]),3);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*180+444)*1+lsi)*1]), &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*90+4710)*1+lsi)*1]), &(inteval->stack[((hsi*90+4170)*1+lsi)*1]),3);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*189+4980)*1+lsi)*1]), &(inteval->stack[((hsi*84+1026)*1+lsi)*1]), &(inteval->stack[((hsi*63+1110)*1+lsi)*1]), &(inteval->stack[((hsi*63+813)*1+lsi)*1]),3);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*270+5709)*1+lsi)*1]), &(inteval->stack[((hsi*189+4980)*1+lsi)*1]), &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*135+4260)*1+lsi)*1]),3);
HRRPart1bra0ket0ff010(inteval, &(inteval->stack[((hsi*300+3570)*1+lsi)*1]), &(inteval->stack[((hsi*270+5709)*1+lsi)*1]), &(inteval->stack[((hsi*180+444)*1+lsi)*1]), &(inteval->stack[((hsi*180+4395)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*63+306)*1+lsi)*1]), &(inteval->stack[((hsi*45+369)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+4710)*1+lsi)*1]), &(inteval->stack[((hsi*45+369)*1+lsi)*1]), &(inteval->stack[((hsi*30+414)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+1026)*1+lsi)*1]), &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*90+4710)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+4980)*1+lsi)*1]), &(inteval->stack[((hsi*84+222)*1+lsi)*1]), &(inteval->stack[((hsi*63+306)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+5979)*1+lsi)*1]), &(inteval->stack[((hsi*189+4980)*1+lsi)*1]), &(inteval->stack[((hsi*135+4575)*1+lsi)*1]),3);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*300+1770)*1+lsi)*1]), &(inteval->stack[((hsi*270+5979)*1+lsi)*1]), &(inteval->stack[((hsi*180+1026)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*300+2670)*1+lsi)*1]), &(inteval->stack[((hsi*300+1770)*1+lsi)*1]), &(inteval->stack[((hsi*300+3570)*1+lsi)*1]));
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*63+750)*1+lsi)*1]), &(inteval->stack[((hsi*45+876)*1+lsi)*1]), &(inteval->stack[((hsi*45+921)*1+lsi)*1]),3);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*90+4710)*1+lsi)*1]), &(inteval->stack[((hsi*45+876)*1+lsi)*1]), &(inteval->stack[((hsi*30+966)*1+lsi)*1]), &(inteval->stack[((hsi*30+996)*1+lsi)*1]),3);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*180+222)*1+lsi)*1]), &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*90+4710)*1+lsi)*1]), &(inteval->stack[((hsi*90+4170)*1+lsi)*1]),3);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*189+4980)*1+lsi)*1]), &(inteval->stack[((hsi*84+666)*1+lsi)*1]), &(inteval->stack[((hsi*63+750)*1+lsi)*1]), &(inteval->stack[((hsi*63+813)*1+lsi)*1]),3);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*270+624)*1+lsi)*1]), &(inteval->stack[((hsi*189+4980)*1+lsi)*1]), &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*135+4260)*1+lsi)*1]),3);
HRRPart1bra0ket0ff100(inteval, &(inteval->stack[((hsi*300+3270)*1+lsi)*1]), &(inteval->stack[((hsi*270+624)*1+lsi)*1]), &(inteval->stack[((hsi*180+222)*1+lsi)*1]), &(inteval->stack[((hsi*180+4395)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*63+84)*1+lsi)*1]), &(inteval->stack[((hsi*45+147)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+4710)*1+lsi)*1]), &(inteval->stack[((hsi*45+147)*1+lsi)*1]), &(inteval->stack[((hsi*30+192)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+4170)*1+lsi)*1]), &(inteval->stack[((hsi*135+4575)*1+lsi)*1]), &(inteval->stack[((hsi*90+4710)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+4980)*1+lsi)*1]), &(inteval->stack[((hsi*84+0)*1+lsi)*1]), &(inteval->stack[((hsi*63+84)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+6249)*1+lsi)*1]), &(inteval->stack[((hsi*189+4980)*1+lsi)*1]), &(inteval->stack[((hsi*135+4575)*1+lsi)*1]),3);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*300+1470)*1+lsi)*1]), &(inteval->stack[((hsi*270+6249)*1+lsi)*1]), &(inteval->stack[((hsi*180+4170)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*300+2370)*1+lsi)*1]), &(inteval->stack[((hsi*300+1470)*1+lsi)*1]), &(inteval->stack[((hsi*300+3270)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*300+1470)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*300+1770)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*300+2070)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*300+2370)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*300+2670)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*300+2970)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*300+3270)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*300+3570)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*300+3870)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
