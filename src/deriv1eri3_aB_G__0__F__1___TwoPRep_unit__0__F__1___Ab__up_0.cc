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
#include <CR_DerivGaussP1InBra_aB_G__0__F001__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F010__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F100__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_G__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_G__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7350)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_G__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+20850)*1+lsi)*1]), &(inteval->stack[((hsi*225+4605)*1+lsi)*1]), &(inteval->stack[((hsi*150+4980)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+21300)*1+lsi)*1]), &(inteval->stack[((hsi*315+4065)*1+lsi)*1]), &(inteval->stack[((hsi*225+4605)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+21975)*1+lsi)*1]), &(inteval->stack[((hsi*675+21300)*1+lsi)*1]), &(inteval->stack[((hsi*450+20850)*1+lsi)*1]),15);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*315+6660)*1+lsi)*1]), &(inteval->stack[((hsi*225+6975)*1+lsi)*1]), &(inteval->stack[((hsi*225+4605)*1+lsi)*1]),15);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*450+23550)*1+lsi)*1]), &(inteval->stack[((hsi*225+6975)*1+lsi)*1]), &(inteval->stack[((hsi*150+7200)*1+lsi)*1]), &(inteval->stack[((hsi*150+4980)*1+lsi)*1]),15);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*900+24000)*1+lsi)*1]), &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*450+23550)*1+lsi)*1]), &(inteval->stack[((hsi*450+20850)*1+lsi)*1]),15);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*945+24900)*1+lsi)*1]), &(inteval->stack[((hsi*420+6240)*1+lsi)*1]), &(inteval->stack[((hsi*315+6660)*1+lsi)*1]), &(inteval->stack[((hsi*315+4065)*1+lsi)*1]),15);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*1350+25845)*1+lsi)*1]), &(inteval->stack[((hsi*945+24900)*1+lsi)*1]), &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*675+21300)*1+lsi)*1]),15);
HRRPart1bra0ket0ff001(inteval, &(inteval->stack[((hsi*1500+19350)*1+lsi)*1]), &(inteval->stack[((hsi*1350+25845)*1+lsi)*1]), &(inteval->stack[((hsi*900+24000)*1+lsi)*1]), &(inteval->stack[((hsi*900+21975)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*315+2640)*1+lsi)*1]), &(inteval->stack[((hsi*225+2955)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+23550)*1+lsi)*1]), &(inteval->stack[((hsi*225+2955)*1+lsi)*1]), &(inteval->stack[((hsi*150+3180)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+6240)*1+lsi)*1]), &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*450+23550)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+24900)*1+lsi)*1]), &(inteval->stack[((hsi*420+2220)*1+lsi)*1]), &(inteval->stack[((hsi*315+2640)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+27195)*1+lsi)*1]), &(inteval->stack[((hsi*945+24900)*1+lsi)*1]), &(inteval->stack[((hsi*675+22875)*1+lsi)*1]),15);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*1500+10350)*1+lsi)*1]), &(inteval->stack[((hsi*1350+27195)*1+lsi)*1]), &(inteval->stack[((hsi*900+6240)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__F001__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1500+14850)*1+lsi)*1]), &(inteval->stack[((hsi*1500+10350)*1+lsi)*1]), &(inteval->stack[((hsi*1500+19350)*1+lsi)*1]));
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*315+5550)*1+lsi)*1]), &(inteval->stack[((hsi*225+5865)*1+lsi)*1]), &(inteval->stack[((hsi*225+4605)*1+lsi)*1]),15);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*450+23550)*1+lsi)*1]), &(inteval->stack[((hsi*225+5865)*1+lsi)*1]), &(inteval->stack[((hsi*150+6090)*1+lsi)*1]), &(inteval->stack[((hsi*150+4980)*1+lsi)*1]),15);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*900+2220)*1+lsi)*1]), &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*450+23550)*1+lsi)*1]), &(inteval->stack[((hsi*450+20850)*1+lsi)*1]),15);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*945+24900)*1+lsi)*1]), &(inteval->stack[((hsi*420+5130)*1+lsi)*1]), &(inteval->stack[((hsi*315+5550)*1+lsi)*1]), &(inteval->stack[((hsi*315+4065)*1+lsi)*1]),15);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*1350+28545)*1+lsi)*1]), &(inteval->stack[((hsi*945+24900)*1+lsi)*1]), &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*675+21300)*1+lsi)*1]),15);
HRRPart1bra0ket0ff010(inteval, &(inteval->stack[((hsi*1500+17850)*1+lsi)*1]), &(inteval->stack[((hsi*1350+28545)*1+lsi)*1]), &(inteval->stack[((hsi*900+2220)*1+lsi)*1]), &(inteval->stack[((hsi*900+21975)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*315+1530)*1+lsi)*1]), &(inteval->stack[((hsi*225+1845)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+23550)*1+lsi)*1]), &(inteval->stack[((hsi*225+1845)*1+lsi)*1]), &(inteval->stack[((hsi*150+2070)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+5130)*1+lsi)*1]), &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*450+23550)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+24900)*1+lsi)*1]), &(inteval->stack[((hsi*420+1110)*1+lsi)*1]), &(inteval->stack[((hsi*315+1530)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+29895)*1+lsi)*1]), &(inteval->stack[((hsi*945+24900)*1+lsi)*1]), &(inteval->stack[((hsi*675+22875)*1+lsi)*1]),15);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*1500+8850)*1+lsi)*1]), &(inteval->stack[((hsi*1350+29895)*1+lsi)*1]), &(inteval->stack[((hsi*900+5130)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__F010__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1500+13350)*1+lsi)*1]), &(inteval->stack[((hsi*1500+8850)*1+lsi)*1]), &(inteval->stack[((hsi*1500+17850)*1+lsi)*1]));
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*315+3750)*1+lsi)*1]), &(inteval->stack[((hsi*225+4380)*1+lsi)*1]), &(inteval->stack[((hsi*225+4605)*1+lsi)*1]),15);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*450+23550)*1+lsi)*1]), &(inteval->stack[((hsi*225+4380)*1+lsi)*1]), &(inteval->stack[((hsi*150+4830)*1+lsi)*1]), &(inteval->stack[((hsi*150+4980)*1+lsi)*1]),15);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*900+1110)*1+lsi)*1]), &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*450+23550)*1+lsi)*1]), &(inteval->stack[((hsi*450+20850)*1+lsi)*1]),15);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*945+24900)*1+lsi)*1]), &(inteval->stack[((hsi*420+3330)*1+lsi)*1]), &(inteval->stack[((hsi*315+3750)*1+lsi)*1]), &(inteval->stack[((hsi*315+4065)*1+lsi)*1]),15);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*1350+3120)*1+lsi)*1]), &(inteval->stack[((hsi*945+24900)*1+lsi)*1]), &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*675+21300)*1+lsi)*1]),15);
HRRPart1bra0ket0ff100(inteval, &(inteval->stack[((hsi*1500+16350)*1+lsi)*1]), &(inteval->stack[((hsi*1350+3120)*1+lsi)*1]), &(inteval->stack[((hsi*900+1110)*1+lsi)*1]), &(inteval->stack[((hsi*900+21975)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*315+420)*1+lsi)*1]), &(inteval->stack[((hsi*225+735)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+23550)*1+lsi)*1]), &(inteval->stack[((hsi*225+735)*1+lsi)*1]), &(inteval->stack[((hsi*150+960)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+20850)*1+lsi)*1]), &(inteval->stack[((hsi*675+22875)*1+lsi)*1]), &(inteval->stack[((hsi*450+23550)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+24900)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+420)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+31245)*1+lsi)*1]), &(inteval->stack[((hsi*945+24900)*1+lsi)*1]), &(inteval->stack[((hsi*675+22875)*1+lsi)*1]),15);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*1500+7350)*1+lsi)*1]), &(inteval->stack[((hsi*1350+31245)*1+lsi)*1]), &(inteval->stack[((hsi*900+20850)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__F100__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1500+11850)*1+lsi)*1]), &(inteval->stack[((hsi*1500+7350)*1+lsi)*1]), &(inteval->stack[((hsi*1500+16350)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1500+7350)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1500+8850)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1500+10350)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1500+11850)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1500+13350)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1500+14850)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1500+16350)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1500+17850)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1500+19350)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
