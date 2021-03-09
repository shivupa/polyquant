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
#include <CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gf001.h>
#include <HRRPart1bra0ket0gf010.h>
#include <HRRPart1bra0ket0gf100.h>
#include <HRRPart1bra0ket0gg.h>
#include <HRRPart1bra0ket0gg001.h>
#include <HRRPart1bra0ket0gg010.h>
#include <HRRPart1bra0ket0gg100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hf001.h>
#include <HRRPart1bra0ket0hf010.h>
#include <HRRPart1bra0ket0hf100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0id001.h>
#include <HRRPart1bra0ket0id010.h>
#include <HRRPart1bra0ket0id100.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,14550)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+44925)*1+lsi)*1]), &(inteval->stack[((hsi*420+8700)*1+lsi)*1]), &(inteval->stack[((hsi*315+9435)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+45870)*1+lsi)*1]), &(inteval->stack[((hsi*315+9435)*1+lsi)*1]), &(inteval->stack[((hsi*225+9975)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+46545)*1+lsi)*1]), &(inteval->stack[((hsi*945+44925)*1+lsi)*1]), &(inteval->stack[((hsi*675+45870)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+47895)*1+lsi)*1]), &(inteval->stack[((hsi*540+7740)*1+lsi)*1]), &(inteval->stack[((hsi*420+8700)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+49155)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47895)*1+lsi)*1]), &(inteval->stack[((hsi*945+44925)*1+lsi)*1]),15);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*2250+51045)*1+lsi)*1]), &(inteval->stack[((hsi*1890+49155)*1+lsi)*1]), &(inteval->stack[((hsi*1350+46545)*1+lsi)*1]),15);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*420+13590)*1+lsi)*1]), &(inteval->stack[((hsi*315+14010)*1+lsi)*1]), &(inteval->stack[((hsi*315+9435)*1+lsi)*1]),15);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*540+13050)*1+lsi)*1]), &(inteval->stack[((hsi*420+13590)*1+lsi)*1]), &(inteval->stack[((hsi*420+8700)*1+lsi)*1]),15);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*945+44925)*1+lsi)*1]),15);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*675+57390)*1+lsi)*1]), &(inteval->stack[((hsi*315+14010)*1+lsi)*1]), &(inteval->stack[((hsi*225+14325)*1+lsi)*1]), &(inteval->stack[((hsi*225+9975)*1+lsi)*1]),15);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*1350+58065)*1+lsi)*1]), &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*675+57390)*1+lsi)*1]), &(inteval->stack[((hsi*675+45870)*1+lsi)*1]),15);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*2250+59415)*1+lsi)*1]), &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1350+58065)*1+lsi)*1]), &(inteval->stack[((hsi*1350+46545)*1+lsi)*1]),15);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1620+57390)*1+lsi)*1]), &(inteval->stack[((hsi*675+12375)*1+lsi)*1]), &(inteval->stack[((hsi*540+13050)*1+lsi)*1]), &(inteval->stack[((hsi*540+7740)*1+lsi)*1]),15);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*2520+61665)*1+lsi)*1]), &(inteval->stack[((hsi*1620+57390)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47895)*1+lsi)*1]),15);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*3150+64185)*1+lsi)*1]), &(inteval->stack[((hsi*2520+61665)*1+lsi)*1]), &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1890+49155)*1+lsi)*1]),15);
HRRPart1bra0ket0gg001(inteval, &(inteval->stack[((hsi*3375+41550)*1+lsi)*1]), &(inteval->stack[((hsi*3150+64185)*1+lsi)*1]), &(inteval->stack[((hsi*2250+59415)*1+lsi)*1]), &(inteval->stack[((hsi*2250+51045)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*420+5565)*1+lsi)*1]), &(inteval->stack[((hsi*315+5985)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*540+5025)*1+lsi)*1]), &(inteval->stack[((hsi*420+5565)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*945+53295)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+61665)*1+lsi)*1]), &(inteval->stack[((hsi*315+5985)*1+lsi)*1]), &(inteval->stack[((hsi*225+6300)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+12375)*1+lsi)*1]), &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*675+61665)*1+lsi)*1]),15);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*2250+61665)*1+lsi)*1]), &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1350+12375)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+12375)*1+lsi)*1]), &(inteval->stack[((hsi*675+4350)*1+lsi)*1]), &(inteval->stack[((hsi*540+5025)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+67335)*1+lsi)*1]), &(inteval->stack[((hsi*1620+12375)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]),15);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*3150+69855)*1+lsi)*1]), &(inteval->stack[((hsi*2520+67335)*1+lsi)*1]), &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]),15);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*3375+21300)*1+lsi)*1]), &(inteval->stack[((hsi*3150+69855)*1+lsi)*1]), &(inteval->stack[((hsi*2250+61665)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*3375+31425)*1+lsi)*1]), &(inteval->stack[((hsi*3375+21300)*1+lsi)*1]), &(inteval->stack[((hsi*3375+41550)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*420+11415)*1+lsi)*1]), &(inteval->stack[((hsi*315+11835)*1+lsi)*1]), &(inteval->stack[((hsi*315+9435)*1+lsi)*1]),15);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*540+10875)*1+lsi)*1]), &(inteval->stack[((hsi*420+11415)*1+lsi)*1]), &(inteval->stack[((hsi*420+8700)*1+lsi)*1]),15);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*945+44925)*1+lsi)*1]),15);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*675+67335)*1+lsi)*1]), &(inteval->stack[((hsi*315+11835)*1+lsi)*1]), &(inteval->stack[((hsi*225+12150)*1+lsi)*1]), &(inteval->stack[((hsi*225+9975)*1+lsi)*1]),15);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*1350+11415)*1+lsi)*1]), &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*675+67335)*1+lsi)*1]), &(inteval->stack[((hsi*675+45870)*1+lsi)*1]),15);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*2250+67335)*1+lsi)*1]), &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1350+11415)*1+lsi)*1]), &(inteval->stack[((hsi*1350+46545)*1+lsi)*1]),15);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1620+11415)*1+lsi)*1]), &(inteval->stack[((hsi*675+10200)*1+lsi)*1]), &(inteval->stack[((hsi*540+10875)*1+lsi)*1]), &(inteval->stack[((hsi*540+7740)*1+lsi)*1]),15);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*2520+73005)*1+lsi)*1]), &(inteval->stack[((hsi*1620+11415)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47895)*1+lsi)*1]),15);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*3150+10200)*1+lsi)*1]), &(inteval->stack[((hsi*2520+73005)*1+lsi)*1]), &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1890+49155)*1+lsi)*1]),15);
HRRPart1bra0ket0gg010(inteval, &(inteval->stack[((hsi*3375+38175)*1+lsi)*1]), &(inteval->stack[((hsi*3150+10200)*1+lsi)*1]), &(inteval->stack[((hsi*2250+67335)*1+lsi)*1]), &(inteval->stack[((hsi*2250+51045)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*420+3390)*1+lsi)*1]), &(inteval->stack[((hsi*315+3810)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*540+2850)*1+lsi)*1]), &(inteval->stack[((hsi*420+3390)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*945+53295)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+4350)*1+lsi)*1]), &(inteval->stack[((hsi*315+3810)*1+lsi)*1]), &(inteval->stack[((hsi*225+4125)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+57390)*1+lsi)*1]), &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*675+4350)*1+lsi)*1]),15);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*2250+3390)*1+lsi)*1]), &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1350+57390)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+57390)*1+lsi)*1]), &(inteval->stack[((hsi*675+2175)*1+lsi)*1]), &(inteval->stack[((hsi*540+2850)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+73005)*1+lsi)*1]), &(inteval->stack[((hsi*1620+57390)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]),15);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*3150+75525)*1+lsi)*1]), &(inteval->stack[((hsi*2520+73005)*1+lsi)*1]), &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]),15);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*3375+17925)*1+lsi)*1]), &(inteval->stack[((hsi*3150+75525)*1+lsi)*1]), &(inteval->stack[((hsi*2250+3390)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*3375+28050)*1+lsi)*1]), &(inteval->stack[((hsi*3375+17925)*1+lsi)*1]), &(inteval->stack[((hsi*3375+38175)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*420+8280)*1+lsi)*1]), &(inteval->stack[((hsi*315+9120)*1+lsi)*1]), &(inteval->stack[((hsi*315+9435)*1+lsi)*1]),15);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*540+7200)*1+lsi)*1]), &(inteval->stack[((hsi*420+8280)*1+lsi)*1]), &(inteval->stack[((hsi*420+8700)*1+lsi)*1]),15);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*945+44925)*1+lsi)*1]),15);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*675+73005)*1+lsi)*1]), &(inteval->stack[((hsi*315+9120)*1+lsi)*1]), &(inteval->stack[((hsi*225+9750)*1+lsi)*1]), &(inteval->stack[((hsi*225+9975)*1+lsi)*1]),15);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*1350+57390)*1+lsi)*1]), &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*675+73005)*1+lsi)*1]), &(inteval->stack[((hsi*675+45870)*1+lsi)*1]),15);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*2250+73005)*1+lsi)*1]), &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1350+57390)*1+lsi)*1]), &(inteval->stack[((hsi*1350+46545)*1+lsi)*1]),15);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1620+44925)*1+lsi)*1]), &(inteval->stack[((hsi*675+6525)*1+lsi)*1]), &(inteval->stack[((hsi*540+7200)*1+lsi)*1]), &(inteval->stack[((hsi*540+7740)*1+lsi)*1]),15);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*2520+5640)*1+lsi)*1]), &(inteval->stack[((hsi*1620+44925)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47895)*1+lsi)*1]),15);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*3150+44925)*1+lsi)*1]), &(inteval->stack[((hsi*2520+5640)*1+lsi)*1]), &(inteval->stack[((hsi*1890+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1890+49155)*1+lsi)*1]),15);
HRRPart1bra0ket0gg100(inteval, &(inteval->stack[((hsi*3375+34800)*1+lsi)*1]), &(inteval->stack[((hsi*3150+44925)*1+lsi)*1]), &(inteval->stack[((hsi*2250+73005)*1+lsi)*1]), &(inteval->stack[((hsi*2250+51045)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*420+1215)*1+lsi)*1]), &(inteval->stack[((hsi*315+1635)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*540+675)*1+lsi)*1]), &(inteval->stack[((hsi*420+1215)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+5640)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]), &(inteval->stack[((hsi*945+53295)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+55500)*1+lsi)*1]), &(inteval->stack[((hsi*315+1635)*1+lsi)*1]), &(inteval->stack[((hsi*225+1950)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+56175)*1+lsi)*1]), &(inteval->stack[((hsi*945+53295)*1+lsi)*1]), &(inteval->stack[((hsi*675+55500)*1+lsi)*1]),15);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*2250+48075)*1+lsi)*1]), &(inteval->stack[((hsi*1890+5640)*1+lsi)*1]), &(inteval->stack[((hsi*1350+56175)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+55500)*1+lsi)*1]), &(inteval->stack[((hsi*675+0)*1+lsi)*1]), &(inteval->stack[((hsi*540+675)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+0)*1+lsi)*1]), &(inteval->stack[((hsi*1620+55500)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54240)*1+lsi)*1]),15);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*3150+53295)*1+lsi)*1]), &(inteval->stack[((hsi*2520+0)*1+lsi)*1]), &(inteval->stack[((hsi*1890+5640)*1+lsi)*1]),15);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*3375+14550)*1+lsi)*1]), &(inteval->stack[((hsi*3150+53295)*1+lsi)*1]), &(inteval->stack[((hsi*2250+48075)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*3375+24675)*1+lsi)*1]), &(inteval->stack[((hsi*3375+14550)*1+lsi)*1]), &(inteval->stack[((hsi*3375+34800)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3375+14550)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3375+17925)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3375+21300)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3375+24675)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3375+28050)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3375+31425)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3375+34800)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3375+38175)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3375+41550)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
