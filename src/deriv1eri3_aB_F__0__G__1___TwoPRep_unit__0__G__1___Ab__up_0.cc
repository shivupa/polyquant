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
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9700)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+29950)*1+lsi)*1]), &(inteval->stack[((hsi*280+5800)*1+lsi)*1]), &(inteval->stack[((hsi*210+6290)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+30580)*1+lsi)*1]), &(inteval->stack[((hsi*210+6290)*1+lsi)*1]), &(inteval->stack[((hsi*150+6650)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+31030)*1+lsi)*1]), &(inteval->stack[((hsi*630+29950)*1+lsi)*1]), &(inteval->stack[((hsi*450+30580)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+31930)*1+lsi)*1]), &(inteval->stack[((hsi*360+5160)*1+lsi)*1]), &(inteval->stack[((hsi*280+5800)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+32770)*1+lsi)*1]), &(inteval->stack[((hsi*840+31930)*1+lsi)*1]), &(inteval->stack[((hsi*630+29950)*1+lsi)*1]),10);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*1500+34030)*1+lsi)*1]), &(inteval->stack[((hsi*1260+32770)*1+lsi)*1]), &(inteval->stack[((hsi*900+31030)*1+lsi)*1]),10);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*280+9060)*1+lsi)*1]), &(inteval->stack[((hsi*210+9340)*1+lsi)*1]), &(inteval->stack[((hsi*210+6290)*1+lsi)*1]),10);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*360+8700)*1+lsi)*1]), &(inteval->stack[((hsi*280+9060)*1+lsi)*1]), &(inteval->stack[((hsi*280+5800)*1+lsi)*1]),10);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]), &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*630+29950)*1+lsi)*1]),10);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*450+38260)*1+lsi)*1]), &(inteval->stack[((hsi*210+9340)*1+lsi)*1]), &(inteval->stack[((hsi*150+9550)*1+lsi)*1]), &(inteval->stack[((hsi*150+6650)*1+lsi)*1]),10);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*900+38710)*1+lsi)*1]), &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*450+38260)*1+lsi)*1]), &(inteval->stack[((hsi*450+30580)*1+lsi)*1]),10);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*1500+39610)*1+lsi)*1]), &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]), &(inteval->stack[((hsi*900+38710)*1+lsi)*1]), &(inteval->stack[((hsi*900+31030)*1+lsi)*1]),10);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1080+38260)*1+lsi)*1]), &(inteval->stack[((hsi*450+8250)*1+lsi)*1]), &(inteval->stack[((hsi*360+8700)*1+lsi)*1]), &(inteval->stack[((hsi*360+5160)*1+lsi)*1]),10);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*1680+41110)*1+lsi)*1]), &(inteval->stack[((hsi*1080+38260)*1+lsi)*1]), &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*840+31930)*1+lsi)*1]),10);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*2100+42790)*1+lsi)*1]), &(inteval->stack[((hsi*1680+41110)*1+lsi)*1]), &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]), &(inteval->stack[((hsi*1260+32770)*1+lsi)*1]),10);
HRRPart1bra0ket0gg001(inteval, &(inteval->stack[((hsi*2250+27700)*1+lsi)*1]), &(inteval->stack[((hsi*2100+42790)*1+lsi)*1]), &(inteval->stack[((hsi*1500+39610)*1+lsi)*1]), &(inteval->stack[((hsi*1500+34030)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*280+3710)*1+lsi)*1]), &(inteval->stack[((hsi*210+3990)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*360+3350)*1+lsi)*1]), &(inteval->stack[((hsi*280+3710)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]), &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*630+35530)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+41110)*1+lsi)*1]), &(inteval->stack[((hsi*210+3990)*1+lsi)*1]), &(inteval->stack[((hsi*150+4200)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+8250)*1+lsi)*1]), &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*450+41110)*1+lsi)*1]),10);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*1500+41110)*1+lsi)*1]), &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]), &(inteval->stack[((hsi*900+8250)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+8250)*1+lsi)*1]), &(inteval->stack[((hsi*450+2900)*1+lsi)*1]), &(inteval->stack[((hsi*360+3350)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+44890)*1+lsi)*1]), &(inteval->stack[((hsi*1080+8250)*1+lsi)*1]), &(inteval->stack[((hsi*840+36160)*1+lsi)*1]),10);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*2100+46570)*1+lsi)*1]), &(inteval->stack[((hsi*1680+44890)*1+lsi)*1]), &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]),10);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*2250+14200)*1+lsi)*1]), &(inteval->stack[((hsi*2100+46570)*1+lsi)*1]), &(inteval->stack[((hsi*1500+41110)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2250+20950)*1+lsi)*1]), &(inteval->stack[((hsi*2250+14200)*1+lsi)*1]), &(inteval->stack[((hsi*2250+27700)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*280+7610)*1+lsi)*1]), &(inteval->stack[((hsi*210+7890)*1+lsi)*1]), &(inteval->stack[((hsi*210+6290)*1+lsi)*1]),10);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*360+7250)*1+lsi)*1]), &(inteval->stack[((hsi*280+7610)*1+lsi)*1]), &(inteval->stack[((hsi*280+5800)*1+lsi)*1]),10);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]), &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*630+29950)*1+lsi)*1]),10);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*450+44890)*1+lsi)*1]), &(inteval->stack[((hsi*210+7890)*1+lsi)*1]), &(inteval->stack[((hsi*150+8100)*1+lsi)*1]), &(inteval->stack[((hsi*150+6650)*1+lsi)*1]),10);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*900+7610)*1+lsi)*1]), &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*450+44890)*1+lsi)*1]), &(inteval->stack[((hsi*450+30580)*1+lsi)*1]),10);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*1500+44890)*1+lsi)*1]), &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]), &(inteval->stack[((hsi*900+7610)*1+lsi)*1]), &(inteval->stack[((hsi*900+31030)*1+lsi)*1]),10);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1080+7610)*1+lsi)*1]), &(inteval->stack[((hsi*450+6800)*1+lsi)*1]), &(inteval->stack[((hsi*360+7250)*1+lsi)*1]), &(inteval->stack[((hsi*360+5160)*1+lsi)*1]),10);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*1680+48670)*1+lsi)*1]), &(inteval->stack[((hsi*1080+7610)*1+lsi)*1]), &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*840+31930)*1+lsi)*1]),10);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*2100+6800)*1+lsi)*1]), &(inteval->stack[((hsi*1680+48670)*1+lsi)*1]), &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]), &(inteval->stack[((hsi*1260+32770)*1+lsi)*1]),10);
HRRPart1bra0ket0gg010(inteval, &(inteval->stack[((hsi*2250+25450)*1+lsi)*1]), &(inteval->stack[((hsi*2100+6800)*1+lsi)*1]), &(inteval->stack[((hsi*1500+44890)*1+lsi)*1]), &(inteval->stack[((hsi*1500+34030)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*280+2260)*1+lsi)*1]), &(inteval->stack[((hsi*210+2540)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*360+1900)*1+lsi)*1]), &(inteval->stack[((hsi*280+2260)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]), &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*630+35530)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+2900)*1+lsi)*1]), &(inteval->stack[((hsi*210+2540)*1+lsi)*1]), &(inteval->stack[((hsi*150+2750)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+38260)*1+lsi)*1]), &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*450+2900)*1+lsi)*1]),10);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*1500+2260)*1+lsi)*1]), &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]), &(inteval->stack[((hsi*900+38260)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+38260)*1+lsi)*1]), &(inteval->stack[((hsi*450+1450)*1+lsi)*1]), &(inteval->stack[((hsi*360+1900)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+48670)*1+lsi)*1]), &(inteval->stack[((hsi*1080+38260)*1+lsi)*1]), &(inteval->stack[((hsi*840+36160)*1+lsi)*1]),10);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*2100+50350)*1+lsi)*1]), &(inteval->stack[((hsi*1680+48670)*1+lsi)*1]), &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]),10);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*2250+11950)*1+lsi)*1]), &(inteval->stack[((hsi*2100+50350)*1+lsi)*1]), &(inteval->stack[((hsi*1500+2260)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2250+18700)*1+lsi)*1]), &(inteval->stack[((hsi*2250+11950)*1+lsi)*1]), &(inteval->stack[((hsi*2250+25450)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*280+5520)*1+lsi)*1]), &(inteval->stack[((hsi*210+6080)*1+lsi)*1]), &(inteval->stack[((hsi*210+6290)*1+lsi)*1]),10);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*360+4800)*1+lsi)*1]), &(inteval->stack[((hsi*280+5520)*1+lsi)*1]), &(inteval->stack[((hsi*280+5800)*1+lsi)*1]),10);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]), &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*630+29950)*1+lsi)*1]),10);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*450+48670)*1+lsi)*1]), &(inteval->stack[((hsi*210+6080)*1+lsi)*1]), &(inteval->stack[((hsi*150+6500)*1+lsi)*1]), &(inteval->stack[((hsi*150+6650)*1+lsi)*1]),10);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*900+38260)*1+lsi)*1]), &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*450+48670)*1+lsi)*1]), &(inteval->stack[((hsi*450+30580)*1+lsi)*1]),10);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*1500+48670)*1+lsi)*1]), &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]), &(inteval->stack[((hsi*900+38260)*1+lsi)*1]), &(inteval->stack[((hsi*900+31030)*1+lsi)*1]),10);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1080+29950)*1+lsi)*1]), &(inteval->stack[((hsi*450+4350)*1+lsi)*1]), &(inteval->stack[((hsi*360+4800)*1+lsi)*1]), &(inteval->stack[((hsi*360+5160)*1+lsi)*1]),10);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*1680+3760)*1+lsi)*1]), &(inteval->stack[((hsi*1080+29950)*1+lsi)*1]), &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*840+31930)*1+lsi)*1]),10);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*2100+29950)*1+lsi)*1]), &(inteval->stack[((hsi*1680+3760)*1+lsi)*1]), &(inteval->stack[((hsi*1260+37000)*1+lsi)*1]), &(inteval->stack[((hsi*1260+32770)*1+lsi)*1]),10);
HRRPart1bra0ket0gg100(inteval, &(inteval->stack[((hsi*2250+23200)*1+lsi)*1]), &(inteval->stack[((hsi*2100+29950)*1+lsi)*1]), &(inteval->stack[((hsi*1500+48670)*1+lsi)*1]), &(inteval->stack[((hsi*1500+34030)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*280+810)*1+lsi)*1]), &(inteval->stack[((hsi*210+1090)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*360+450)*1+lsi)*1]), &(inteval->stack[((hsi*280+810)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+3760)*1+lsi)*1]), &(inteval->stack[((hsi*840+36160)*1+lsi)*1]), &(inteval->stack[((hsi*630+35530)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+37000)*1+lsi)*1]), &(inteval->stack[((hsi*210+1090)*1+lsi)*1]), &(inteval->stack[((hsi*150+1300)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+37450)*1+lsi)*1]), &(inteval->stack[((hsi*630+35530)*1+lsi)*1]), &(inteval->stack[((hsi*450+37000)*1+lsi)*1]),10);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*1500+32050)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3760)*1+lsi)*1]), &(inteval->stack[((hsi*900+37450)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+37000)*1+lsi)*1]), &(inteval->stack[((hsi*450+0)*1+lsi)*1]), &(inteval->stack[((hsi*360+450)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+0)*1+lsi)*1]), &(inteval->stack[((hsi*1080+37000)*1+lsi)*1]), &(inteval->stack[((hsi*840+36160)*1+lsi)*1]),10);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*2100+35530)*1+lsi)*1]), &(inteval->stack[((hsi*1680+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3760)*1+lsi)*1]),10);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*2250+9700)*1+lsi)*1]), &(inteval->stack[((hsi*2100+35530)*1+lsi)*1]), &(inteval->stack[((hsi*1500+32050)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2250+16450)*1+lsi)*1]), &(inteval->stack[((hsi*2250+9700)*1+lsi)*1]), &(inteval->stack[((hsi*2250+23200)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2250+9700)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2250+11950)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2250+14200)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2250+16450)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2250+18700)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2250+20950)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2250+23200)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2250+25450)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2250+27700)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
