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
#include <CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gf001.h>
#include <HRRPart1bra0ket0gf010.h>
#include <HRRPart1bra0ket0gf100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <deriv1eri3_aB_D__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_D__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3984)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_D__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+12084)*1+lsi)*1]), &(inteval->stack[((hsi*126+2478)*1+lsi)*1]), &(inteval->stack[((hsi*90+2694)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+12354)*1+lsi)*1]), &(inteval->stack[((hsi*168+2184)*1+lsi)*1]), &(inteval->stack[((hsi*126+2478)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+12732)*1+lsi)*1]), &(inteval->stack[((hsi*378+12354)*1+lsi)*1]), &(inteval->stack[((hsi*270+12084)*1+lsi)*1]),6);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*168+3600)*1+lsi)*1]), &(inteval->stack[((hsi*126+3768)*1+lsi)*1]), &(inteval->stack[((hsi*126+2478)*1+lsi)*1]),6);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*270+13650)*1+lsi)*1]), &(inteval->stack[((hsi*126+3768)*1+lsi)*1]), &(inteval->stack[((hsi*90+3894)*1+lsi)*1]), &(inteval->stack[((hsi*90+2694)*1+lsi)*1]),6);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*540+13920)*1+lsi)*1]), &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*270+13650)*1+lsi)*1]), &(inteval->stack[((hsi*270+12084)*1+lsi)*1]),6);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*504+14460)*1+lsi)*1]), &(inteval->stack[((hsi*216+3384)*1+lsi)*1]), &(inteval->stack[((hsi*168+3600)*1+lsi)*1]), &(inteval->stack[((hsi*168+2184)*1+lsi)*1]),6);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*756+14964)*1+lsi)*1]), &(inteval->stack[((hsi*504+14460)*1+lsi)*1]), &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*378+12354)*1+lsi)*1]),6);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*900+11184)*1+lsi)*1]), &(inteval->stack[((hsi*756+14964)*1+lsi)*1]), &(inteval->stack[((hsi*540+13920)*1+lsi)*1]), &(inteval->stack[((hsi*540+12732)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*168+1416)*1+lsi)*1]), &(inteval->stack[((hsi*126+1584)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+13650)*1+lsi)*1]), &(inteval->stack[((hsi*126+1584)*1+lsi)*1]), &(inteval->stack[((hsi*90+1710)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+3384)*1+lsi)*1]), &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*270+13650)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+14460)*1+lsi)*1]), &(inteval->stack[((hsi*216+1200)*1+lsi)*1]), &(inteval->stack[((hsi*168+1416)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+15720)*1+lsi)*1]), &(inteval->stack[((hsi*504+14460)*1+lsi)*1]), &(inteval->stack[((hsi*378+13272)*1+lsi)*1]),6);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*900+5784)*1+lsi)*1]), &(inteval->stack[((hsi*756+15720)*1+lsi)*1]), &(inteval->stack[((hsi*540+3384)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*900+8484)*1+lsi)*1]), &(inteval->stack[((hsi*900+5784)*1+lsi)*1]), &(inteval->stack[((hsi*900+11184)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*168+3000)*1+lsi)*1]), &(inteval->stack[((hsi*126+3168)*1+lsi)*1]), &(inteval->stack[((hsi*126+2478)*1+lsi)*1]),6);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*270+13650)*1+lsi)*1]), &(inteval->stack[((hsi*126+3168)*1+lsi)*1]), &(inteval->stack[((hsi*90+3294)*1+lsi)*1]), &(inteval->stack[((hsi*90+2694)*1+lsi)*1]),6);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*540+1200)*1+lsi)*1]), &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*270+13650)*1+lsi)*1]), &(inteval->stack[((hsi*270+12084)*1+lsi)*1]),6);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*504+14460)*1+lsi)*1]), &(inteval->stack[((hsi*216+2784)*1+lsi)*1]), &(inteval->stack[((hsi*168+3000)*1+lsi)*1]), &(inteval->stack[((hsi*168+2184)*1+lsi)*1]),6);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*756+16476)*1+lsi)*1]), &(inteval->stack[((hsi*504+14460)*1+lsi)*1]), &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*378+12354)*1+lsi)*1]),6);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*900+10284)*1+lsi)*1]), &(inteval->stack[((hsi*756+16476)*1+lsi)*1]), &(inteval->stack[((hsi*540+1200)*1+lsi)*1]), &(inteval->stack[((hsi*540+12732)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*168+816)*1+lsi)*1]), &(inteval->stack[((hsi*126+984)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+13650)*1+lsi)*1]), &(inteval->stack[((hsi*126+984)*1+lsi)*1]), &(inteval->stack[((hsi*90+1110)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+2784)*1+lsi)*1]), &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*270+13650)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+14460)*1+lsi)*1]), &(inteval->stack[((hsi*216+600)*1+lsi)*1]), &(inteval->stack[((hsi*168+816)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+17232)*1+lsi)*1]), &(inteval->stack[((hsi*504+14460)*1+lsi)*1]), &(inteval->stack[((hsi*378+13272)*1+lsi)*1]),6);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*900+4884)*1+lsi)*1]), &(inteval->stack[((hsi*756+17232)*1+lsi)*1]), &(inteval->stack[((hsi*540+2784)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*900+7584)*1+lsi)*1]), &(inteval->stack[((hsi*900+4884)*1+lsi)*1]), &(inteval->stack[((hsi*900+10284)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*168+2016)*1+lsi)*1]), &(inteval->stack[((hsi*126+2352)*1+lsi)*1]), &(inteval->stack[((hsi*126+2478)*1+lsi)*1]),6);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*270+13650)*1+lsi)*1]), &(inteval->stack[((hsi*126+2352)*1+lsi)*1]), &(inteval->stack[((hsi*90+2604)*1+lsi)*1]), &(inteval->stack[((hsi*90+2694)*1+lsi)*1]),6);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*540+600)*1+lsi)*1]), &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*270+13650)*1+lsi)*1]), &(inteval->stack[((hsi*270+12084)*1+lsi)*1]),6);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*504+14460)*1+lsi)*1]), &(inteval->stack[((hsi*216+1800)*1+lsi)*1]), &(inteval->stack[((hsi*168+2016)*1+lsi)*1]), &(inteval->stack[((hsi*168+2184)*1+lsi)*1]),6);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*756+1740)*1+lsi)*1]), &(inteval->stack[((hsi*504+14460)*1+lsi)*1]), &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*378+12354)*1+lsi)*1]),6);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*900+9384)*1+lsi)*1]), &(inteval->stack[((hsi*756+1740)*1+lsi)*1]), &(inteval->stack[((hsi*540+600)*1+lsi)*1]), &(inteval->stack[((hsi*540+12732)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*168+216)*1+lsi)*1]), &(inteval->stack[((hsi*126+384)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+13650)*1+lsi)*1]), &(inteval->stack[((hsi*126+384)*1+lsi)*1]), &(inteval->stack[((hsi*90+510)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+12084)*1+lsi)*1]), &(inteval->stack[((hsi*378+13272)*1+lsi)*1]), &(inteval->stack[((hsi*270+13650)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+14460)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]), &(inteval->stack[((hsi*168+216)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+17988)*1+lsi)*1]), &(inteval->stack[((hsi*504+14460)*1+lsi)*1]), &(inteval->stack[((hsi*378+13272)*1+lsi)*1]),6);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*900+3984)*1+lsi)*1]), &(inteval->stack[((hsi*756+17988)*1+lsi)*1]), &(inteval->stack[((hsi*540+12084)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*900+6684)*1+lsi)*1]), &(inteval->stack[((hsi*900+3984)*1+lsi)*1]), &(inteval->stack[((hsi*900+9384)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*900+3984)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*900+4884)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*900+5784)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*900+6684)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*900+7584)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*900+8484)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*900+9384)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*900+10284)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*900+11184)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
