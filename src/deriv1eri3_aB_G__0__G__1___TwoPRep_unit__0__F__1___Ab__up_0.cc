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
#include <CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9960)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+30210)*1+lsi)*1]), &(inteval->stack[((hsi*315+6195)*1+lsi)*1]), &(inteval->stack[((hsi*225+6735)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+30885)*1+lsi)*1]), &(inteval->stack[((hsi*420+5460)*1+lsi)*1]), &(inteval->stack[((hsi*315+6195)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+31830)*1+lsi)*1]), &(inteval->stack[((hsi*945+30885)*1+lsi)*1]), &(inteval->stack[((hsi*675+30210)*1+lsi)*1]),15);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*420+9000)*1+lsi)*1]), &(inteval->stack[((hsi*315+9420)*1+lsi)*1]), &(inteval->stack[((hsi*315+6195)*1+lsi)*1]),15);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*675+34125)*1+lsi)*1]), &(inteval->stack[((hsi*315+9420)*1+lsi)*1]), &(inteval->stack[((hsi*225+9735)*1+lsi)*1]), &(inteval->stack[((hsi*225+6735)*1+lsi)*1]),15);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*1350+34800)*1+lsi)*1]), &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*675+34125)*1+lsi)*1]), &(inteval->stack[((hsi*675+30210)*1+lsi)*1]),15);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1260+36150)*1+lsi)*1]), &(inteval->stack[((hsi*540+8460)*1+lsi)*1]), &(inteval->stack[((hsi*420+9000)*1+lsi)*1]), &(inteval->stack[((hsi*420+5460)*1+lsi)*1]),15);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*1890+37410)*1+lsi)*1]), &(inteval->stack[((hsi*1260+36150)*1+lsi)*1]), &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*945+30885)*1+lsi)*1]),15);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*2250+27960)*1+lsi)*1]), &(inteval->stack[((hsi*1890+37410)*1+lsi)*1]), &(inteval->stack[((hsi*1350+34800)*1+lsi)*1]), &(inteval->stack[((hsi*1350+31830)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*420+3540)*1+lsi)*1]), &(inteval->stack[((hsi*315+3960)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+34125)*1+lsi)*1]), &(inteval->stack[((hsi*315+3960)*1+lsi)*1]), &(inteval->stack[((hsi*225+4275)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+8460)*1+lsi)*1]), &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*675+34125)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+36150)*1+lsi)*1]), &(inteval->stack[((hsi*540+3000)*1+lsi)*1]), &(inteval->stack[((hsi*420+3540)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+39300)*1+lsi)*1]), &(inteval->stack[((hsi*1260+36150)*1+lsi)*1]), &(inteval->stack[((hsi*945+33180)*1+lsi)*1]),15);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*2250+14460)*1+lsi)*1]), &(inteval->stack[((hsi*1890+39300)*1+lsi)*1]), &(inteval->stack[((hsi*1350+8460)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2250+21210)*1+lsi)*1]), &(inteval->stack[((hsi*2250+14460)*1+lsi)*1]), &(inteval->stack[((hsi*2250+27960)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*420+7500)*1+lsi)*1]), &(inteval->stack[((hsi*315+7920)*1+lsi)*1]), &(inteval->stack[((hsi*315+6195)*1+lsi)*1]),15);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*675+34125)*1+lsi)*1]), &(inteval->stack[((hsi*315+7920)*1+lsi)*1]), &(inteval->stack[((hsi*225+8235)*1+lsi)*1]), &(inteval->stack[((hsi*225+6735)*1+lsi)*1]),15);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*1350+3000)*1+lsi)*1]), &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*675+34125)*1+lsi)*1]), &(inteval->stack[((hsi*675+30210)*1+lsi)*1]),15);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1260+36150)*1+lsi)*1]), &(inteval->stack[((hsi*540+6960)*1+lsi)*1]), &(inteval->stack[((hsi*420+7500)*1+lsi)*1]), &(inteval->stack[((hsi*420+5460)*1+lsi)*1]),15);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*1890+41190)*1+lsi)*1]), &(inteval->stack[((hsi*1260+36150)*1+lsi)*1]), &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*945+30885)*1+lsi)*1]),15);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*2250+25710)*1+lsi)*1]), &(inteval->stack[((hsi*1890+41190)*1+lsi)*1]), &(inteval->stack[((hsi*1350+3000)*1+lsi)*1]), &(inteval->stack[((hsi*1350+31830)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*420+2040)*1+lsi)*1]), &(inteval->stack[((hsi*315+2460)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+34125)*1+lsi)*1]), &(inteval->stack[((hsi*315+2460)*1+lsi)*1]), &(inteval->stack[((hsi*225+2775)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+6960)*1+lsi)*1]), &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*675+34125)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+36150)*1+lsi)*1]), &(inteval->stack[((hsi*540+1500)*1+lsi)*1]), &(inteval->stack[((hsi*420+2040)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+43080)*1+lsi)*1]), &(inteval->stack[((hsi*1260+36150)*1+lsi)*1]), &(inteval->stack[((hsi*945+33180)*1+lsi)*1]),15);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*2250+12210)*1+lsi)*1]), &(inteval->stack[((hsi*1890+43080)*1+lsi)*1]), &(inteval->stack[((hsi*1350+6960)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2250+18960)*1+lsi)*1]), &(inteval->stack[((hsi*2250+12210)*1+lsi)*1]), &(inteval->stack[((hsi*2250+25710)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*420+5040)*1+lsi)*1]), &(inteval->stack[((hsi*315+5880)*1+lsi)*1]), &(inteval->stack[((hsi*315+6195)*1+lsi)*1]),15);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*675+34125)*1+lsi)*1]), &(inteval->stack[((hsi*315+5880)*1+lsi)*1]), &(inteval->stack[((hsi*225+6510)*1+lsi)*1]), &(inteval->stack[((hsi*225+6735)*1+lsi)*1]),15);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*1350+1500)*1+lsi)*1]), &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*675+34125)*1+lsi)*1]), &(inteval->stack[((hsi*675+30210)*1+lsi)*1]),15);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1260+36150)*1+lsi)*1]), &(inteval->stack[((hsi*540+4500)*1+lsi)*1]), &(inteval->stack[((hsi*420+5040)*1+lsi)*1]), &(inteval->stack[((hsi*420+5460)*1+lsi)*1]),15);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*1890+4350)*1+lsi)*1]), &(inteval->stack[((hsi*1260+36150)*1+lsi)*1]), &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*945+30885)*1+lsi)*1]),15);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*2250+23460)*1+lsi)*1]), &(inteval->stack[((hsi*1890+4350)*1+lsi)*1]), &(inteval->stack[((hsi*1350+1500)*1+lsi)*1]), &(inteval->stack[((hsi*1350+31830)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*420+540)*1+lsi)*1]), &(inteval->stack[((hsi*315+960)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+34125)*1+lsi)*1]), &(inteval->stack[((hsi*315+960)*1+lsi)*1]), &(inteval->stack[((hsi*225+1275)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+30210)*1+lsi)*1]), &(inteval->stack[((hsi*945+33180)*1+lsi)*1]), &(inteval->stack[((hsi*675+34125)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+36150)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]), &(inteval->stack[((hsi*420+540)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+44970)*1+lsi)*1]), &(inteval->stack[((hsi*1260+36150)*1+lsi)*1]), &(inteval->stack[((hsi*945+33180)*1+lsi)*1]),15);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*2250+9960)*1+lsi)*1]), &(inteval->stack[((hsi*1890+44970)*1+lsi)*1]), &(inteval->stack[((hsi*1350+30210)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2250+16710)*1+lsi)*1]), &(inteval->stack[((hsi*2250+9960)*1+lsi)*1]), &(inteval->stack[((hsi*2250+23460)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2250+9960)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2250+12210)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2250+14460)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2250+16710)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2250+18960)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2250+21210)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2250+23460)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2250+25710)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2250+27960)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
