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
#include <CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,18592)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+56392)*1+lsi)*1]), &(inteval->stack[((hsi*588+11564)*1+lsi)*1]), &(inteval->stack[((hsi*420+12572)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+57652)*1+lsi)*1]), &(inteval->stack[((hsi*784+10192)*1+lsi)*1]), &(inteval->stack[((hsi*588+11564)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+59416)*1+lsi)*1]), &(inteval->stack[((hsi*1764+57652)*1+lsi)*1]), &(inteval->stack[((hsi*1260+56392)*1+lsi)*1]),28);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*784+16800)*1+lsi)*1]), &(inteval->stack[((hsi*588+17584)*1+lsi)*1]), &(inteval->stack[((hsi*588+11564)*1+lsi)*1]),28);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*1260+63700)*1+lsi)*1]), &(inteval->stack[((hsi*588+17584)*1+lsi)*1]), &(inteval->stack[((hsi*420+18172)*1+lsi)*1]), &(inteval->stack[((hsi*420+12572)*1+lsi)*1]),28);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*2520+64960)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*1260+63700)*1+lsi)*1]), &(inteval->stack[((hsi*1260+56392)*1+lsi)*1]),28);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*2352+67480)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15792)*1+lsi)*1]), &(inteval->stack[((hsi*784+16800)*1+lsi)*1]), &(inteval->stack[((hsi*784+10192)*1+lsi)*1]),28);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*3528+69832)*1+lsi)*1]), &(inteval->stack[((hsi*2352+67480)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*1764+57652)*1+lsi)*1]),28);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*4200+52192)*1+lsi)*1]), &(inteval->stack[((hsi*3528+69832)*1+lsi)*1]), &(inteval->stack[((hsi*2520+64960)*1+lsi)*1]), &(inteval->stack[((hsi*2520+59416)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*784+6608)*1+lsi)*1]), &(inteval->stack[((hsi*588+7392)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+63700)*1+lsi)*1]), &(inteval->stack[((hsi*588+7392)*1+lsi)*1]), &(inteval->stack[((hsi*420+7980)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+15792)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*1260+63700)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+67480)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5600)*1+lsi)*1]), &(inteval->stack[((hsi*784+6608)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+73360)*1+lsi)*1]), &(inteval->stack[((hsi*2352+67480)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]),28);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*4200+26992)*1+lsi)*1]), &(inteval->stack[((hsi*3528+73360)*1+lsi)*1]), &(inteval->stack[((hsi*2520+15792)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*4200+39592)*1+lsi)*1]), &(inteval->stack[((hsi*4200+26992)*1+lsi)*1]), &(inteval->stack[((hsi*4200+52192)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*784+14000)*1+lsi)*1]), &(inteval->stack[((hsi*588+14784)*1+lsi)*1]), &(inteval->stack[((hsi*588+11564)*1+lsi)*1]),28);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*1260+63700)*1+lsi)*1]), &(inteval->stack[((hsi*588+14784)*1+lsi)*1]), &(inteval->stack[((hsi*420+15372)*1+lsi)*1]), &(inteval->stack[((hsi*420+12572)*1+lsi)*1]),28);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*2520+5600)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*1260+63700)*1+lsi)*1]), &(inteval->stack[((hsi*1260+56392)*1+lsi)*1]),28);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*2352+67480)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12992)*1+lsi)*1]), &(inteval->stack[((hsi*784+14000)*1+lsi)*1]), &(inteval->stack[((hsi*784+10192)*1+lsi)*1]),28);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*3528+76888)*1+lsi)*1]), &(inteval->stack[((hsi*2352+67480)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*1764+57652)*1+lsi)*1]),28);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*4200+47992)*1+lsi)*1]), &(inteval->stack[((hsi*3528+76888)*1+lsi)*1]), &(inteval->stack[((hsi*2520+5600)*1+lsi)*1]), &(inteval->stack[((hsi*2520+59416)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*784+3808)*1+lsi)*1]), &(inteval->stack[((hsi*588+4592)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+63700)*1+lsi)*1]), &(inteval->stack[((hsi*588+4592)*1+lsi)*1]), &(inteval->stack[((hsi*420+5180)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+12992)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*1260+63700)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+67480)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2800)*1+lsi)*1]), &(inteval->stack[((hsi*784+3808)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+80416)*1+lsi)*1]), &(inteval->stack[((hsi*2352+67480)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]),28);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*4200+22792)*1+lsi)*1]), &(inteval->stack[((hsi*3528+80416)*1+lsi)*1]), &(inteval->stack[((hsi*2520+12992)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*4200+35392)*1+lsi)*1]), &(inteval->stack[((hsi*4200+22792)*1+lsi)*1]), &(inteval->stack[((hsi*4200+47992)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*784+9408)*1+lsi)*1]), &(inteval->stack[((hsi*588+10976)*1+lsi)*1]), &(inteval->stack[((hsi*588+11564)*1+lsi)*1]),28);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*1260+63700)*1+lsi)*1]), &(inteval->stack[((hsi*588+10976)*1+lsi)*1]), &(inteval->stack[((hsi*420+12152)*1+lsi)*1]), &(inteval->stack[((hsi*420+12572)*1+lsi)*1]),28);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*2520+2800)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*1260+63700)*1+lsi)*1]), &(inteval->stack[((hsi*1260+56392)*1+lsi)*1]),28);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*2352+67480)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8400)*1+lsi)*1]), &(inteval->stack[((hsi*784+9408)*1+lsi)*1]), &(inteval->stack[((hsi*784+10192)*1+lsi)*1]),28);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*3528+8120)*1+lsi)*1]), &(inteval->stack[((hsi*2352+67480)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*1764+57652)*1+lsi)*1]),28);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*4200+43792)*1+lsi)*1]), &(inteval->stack[((hsi*3528+8120)*1+lsi)*1]), &(inteval->stack[((hsi*2520+2800)*1+lsi)*1]), &(inteval->stack[((hsi*2520+59416)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*784+1008)*1+lsi)*1]), &(inteval->stack[((hsi*588+1792)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+63700)*1+lsi)*1]), &(inteval->stack[((hsi*588+1792)*1+lsi)*1]), &(inteval->stack[((hsi*420+2380)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+56392)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]), &(inteval->stack[((hsi*1260+63700)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+67480)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*784+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+83944)*1+lsi)*1]), &(inteval->stack[((hsi*2352+67480)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61936)*1+lsi)*1]),28);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*4200+18592)*1+lsi)*1]), &(inteval->stack[((hsi*3528+83944)*1+lsi)*1]), &(inteval->stack[((hsi*2520+56392)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*4200+31192)*1+lsi)*1]), &(inteval->stack[((hsi*4200+18592)*1+lsi)*1]), &(inteval->stack[((hsi*4200+43792)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4200+18592)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*4200+22792)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*4200+26992)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*4200+31192)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*4200+35392)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*4200+39592)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*4200+43792)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*4200+47992)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*4200+52192)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
