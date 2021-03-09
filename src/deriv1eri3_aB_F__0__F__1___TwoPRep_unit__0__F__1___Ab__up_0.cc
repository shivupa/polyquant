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
#include <CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_F__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_F__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4900)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_F__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+13900)*1+lsi)*1]), &(inteval->stack[((hsi*150+3070)*1+lsi)*1]), &(inteval->stack[((hsi*100+3320)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+14200)*1+lsi)*1]), &(inteval->stack[((hsi*210+2710)*1+lsi)*1]), &(inteval->stack[((hsi*150+3070)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+14650)*1+lsi)*1]), &(inteval->stack[((hsi*450+14200)*1+lsi)*1]), &(inteval->stack[((hsi*300+13900)*1+lsi)*1]),10);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*210+4440)*1+lsi)*1]), &(inteval->stack[((hsi*150+4650)*1+lsi)*1]), &(inteval->stack[((hsi*150+3070)*1+lsi)*1]),10);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*300+15700)*1+lsi)*1]), &(inteval->stack[((hsi*150+4650)*1+lsi)*1]), &(inteval->stack[((hsi*100+4800)*1+lsi)*1]), &(inteval->stack[((hsi*100+3320)*1+lsi)*1]),10);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*600+16000)*1+lsi)*1]), &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*300+15700)*1+lsi)*1]), &(inteval->stack[((hsi*300+13900)*1+lsi)*1]),10);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*630+16600)*1+lsi)*1]), &(inteval->stack[((hsi*280+4160)*1+lsi)*1]), &(inteval->stack[((hsi*210+4440)*1+lsi)*1]), &(inteval->stack[((hsi*210+2710)*1+lsi)*1]),10);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*900+17230)*1+lsi)*1]), &(inteval->stack[((hsi*630+16600)*1+lsi)*1]), &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*450+14200)*1+lsi)*1]),10);
HRRPart1bra0ket0ff001(inteval, &(inteval->stack[((hsi*1000+12900)*1+lsi)*1]), &(inteval->stack[((hsi*900+17230)*1+lsi)*1]), &(inteval->stack[((hsi*600+16000)*1+lsi)*1]), &(inteval->stack[((hsi*600+14650)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*210+1760)*1+lsi)*1]), &(inteval->stack[((hsi*150+1970)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+15700)*1+lsi)*1]), &(inteval->stack[((hsi*150+1970)*1+lsi)*1]), &(inteval->stack[((hsi*100+2120)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+4160)*1+lsi)*1]), &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*300+15700)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+16600)*1+lsi)*1]), &(inteval->stack[((hsi*280+1480)*1+lsi)*1]), &(inteval->stack[((hsi*210+1760)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+18130)*1+lsi)*1]), &(inteval->stack[((hsi*630+16600)*1+lsi)*1]), &(inteval->stack[((hsi*450+15250)*1+lsi)*1]),10);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*1000+6900)*1+lsi)*1]), &(inteval->stack[((hsi*900+18130)*1+lsi)*1]), &(inteval->stack[((hsi*600+4160)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1000+9900)*1+lsi)*1]), &(inteval->stack[((hsi*1000+6900)*1+lsi)*1]), &(inteval->stack[((hsi*1000+12900)*1+lsi)*1]));
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*210+3700)*1+lsi)*1]), &(inteval->stack[((hsi*150+3910)*1+lsi)*1]), &(inteval->stack[((hsi*150+3070)*1+lsi)*1]),10);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*300+15700)*1+lsi)*1]), &(inteval->stack[((hsi*150+3910)*1+lsi)*1]), &(inteval->stack[((hsi*100+4060)*1+lsi)*1]), &(inteval->stack[((hsi*100+3320)*1+lsi)*1]),10);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*600+1480)*1+lsi)*1]), &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*300+15700)*1+lsi)*1]), &(inteval->stack[((hsi*300+13900)*1+lsi)*1]),10);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*630+16600)*1+lsi)*1]), &(inteval->stack[((hsi*280+3420)*1+lsi)*1]), &(inteval->stack[((hsi*210+3700)*1+lsi)*1]), &(inteval->stack[((hsi*210+2710)*1+lsi)*1]),10);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*900+19030)*1+lsi)*1]), &(inteval->stack[((hsi*630+16600)*1+lsi)*1]), &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*450+14200)*1+lsi)*1]),10);
HRRPart1bra0ket0ff010(inteval, &(inteval->stack[((hsi*1000+11900)*1+lsi)*1]), &(inteval->stack[((hsi*900+19030)*1+lsi)*1]), &(inteval->stack[((hsi*600+1480)*1+lsi)*1]), &(inteval->stack[((hsi*600+14650)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*210+1020)*1+lsi)*1]), &(inteval->stack[((hsi*150+1230)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+15700)*1+lsi)*1]), &(inteval->stack[((hsi*150+1230)*1+lsi)*1]), &(inteval->stack[((hsi*100+1380)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+3420)*1+lsi)*1]), &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*300+15700)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+16600)*1+lsi)*1]), &(inteval->stack[((hsi*280+740)*1+lsi)*1]), &(inteval->stack[((hsi*210+1020)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+19930)*1+lsi)*1]), &(inteval->stack[((hsi*630+16600)*1+lsi)*1]), &(inteval->stack[((hsi*450+15250)*1+lsi)*1]),10);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*1000+5900)*1+lsi)*1]), &(inteval->stack[((hsi*900+19930)*1+lsi)*1]), &(inteval->stack[((hsi*600+3420)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1000+8900)*1+lsi)*1]), &(inteval->stack[((hsi*1000+5900)*1+lsi)*1]), &(inteval->stack[((hsi*1000+11900)*1+lsi)*1]));
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*210+2500)*1+lsi)*1]), &(inteval->stack[((hsi*150+2920)*1+lsi)*1]), &(inteval->stack[((hsi*150+3070)*1+lsi)*1]),10);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*300+15700)*1+lsi)*1]), &(inteval->stack[((hsi*150+2920)*1+lsi)*1]), &(inteval->stack[((hsi*100+3220)*1+lsi)*1]), &(inteval->stack[((hsi*100+3320)*1+lsi)*1]),10);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*600+740)*1+lsi)*1]), &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*300+15700)*1+lsi)*1]), &(inteval->stack[((hsi*300+13900)*1+lsi)*1]),10);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*630+16600)*1+lsi)*1]), &(inteval->stack[((hsi*280+2220)*1+lsi)*1]), &(inteval->stack[((hsi*210+2500)*1+lsi)*1]), &(inteval->stack[((hsi*210+2710)*1+lsi)*1]),10);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*900+2080)*1+lsi)*1]), &(inteval->stack[((hsi*630+16600)*1+lsi)*1]), &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*450+14200)*1+lsi)*1]),10);
HRRPart1bra0ket0ff100(inteval, &(inteval->stack[((hsi*1000+10900)*1+lsi)*1]), &(inteval->stack[((hsi*900+2080)*1+lsi)*1]), &(inteval->stack[((hsi*600+740)*1+lsi)*1]), &(inteval->stack[((hsi*600+14650)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*210+280)*1+lsi)*1]), &(inteval->stack[((hsi*150+490)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+15700)*1+lsi)*1]), &(inteval->stack[((hsi*150+490)*1+lsi)*1]), &(inteval->stack[((hsi*100+640)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+13900)*1+lsi)*1]), &(inteval->stack[((hsi*450+15250)*1+lsi)*1]), &(inteval->stack[((hsi*300+15700)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+16600)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]), &(inteval->stack[((hsi*210+280)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+20830)*1+lsi)*1]), &(inteval->stack[((hsi*630+16600)*1+lsi)*1]), &(inteval->stack[((hsi*450+15250)*1+lsi)*1]),10);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*1000+4900)*1+lsi)*1]), &(inteval->stack[((hsi*900+20830)*1+lsi)*1]), &(inteval->stack[((hsi*600+13900)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1000+7900)*1+lsi)*1]), &(inteval->stack[((hsi*1000+4900)*1+lsi)*1]), &(inteval->stack[((hsi*1000+10900)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1000+4900)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1000+5900)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1000+6900)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1000+7900)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1000+8900)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1000+9900)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1000+10900)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1000+11900)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1000+12900)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
