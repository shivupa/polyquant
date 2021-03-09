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
#include <CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001d.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010d.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100d.h>
#include <HRRPart1bra0ket0g100p.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11760)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+34440)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]), &(inteval->stack[((hsi*420+3332)*1+lsi)*1]),28);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*1260+35700)*1+lsi)*1]), &(inteval->stack[((hsi*588+10332)*1+lsi)*1]), &(inteval->stack[((hsi*420+11340)*1+lsi)*1]), &(inteval->stack[((hsi*420+3332)*1+lsi)*1]),28);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1764+36960)*1+lsi)*1]), &(inteval->stack[((hsi*784+8960)*1+lsi)*1]), &(inteval->stack[((hsi*588+10332)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*2520+31920)*1+lsi)*1]), &(inteval->stack[((hsi*1764+36960)*1+lsi)*1]), &(inteval->stack[((hsi*1260+35700)*1+lsi)*1]), &(inteval->stack[((hsi*1260+34440)*1+lsi)*1]),28);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*1260+38724)*1+lsi)*1]), &(inteval->stack[((hsi*588+6748)*1+lsi)*1]), &(inteval->stack[((hsi*420+7756)*1+lsi)*1]), &(inteval->stack[((hsi*420+3332)*1+lsi)*1]),28);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1764+39984)*1+lsi)*1]), &(inteval->stack[((hsi*784+5376)*1+lsi)*1]), &(inteval->stack[((hsi*588+6748)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*2520+29400)*1+lsi)*1]), &(inteval->stack[((hsi*1764+39984)*1+lsi)*1]), &(inteval->stack[((hsi*1260+38724)*1+lsi)*1]), &(inteval->stack[((hsi*1260+34440)*1+lsi)*1]),28);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*1260+41748)*1+lsi)*1]), &(inteval->stack[((hsi*588+2744)*1+lsi)*1]), &(inteval->stack[((hsi*420+4172)*1+lsi)*1]), &(inteval->stack[((hsi*420+3332)*1+lsi)*1]),28);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1764+43008)*1+lsi)*1]), &(inteval->stack[((hsi*784+1372)*1+lsi)*1]), &(inteval->stack[((hsi*588+2744)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*2520+26880)*1+lsi)*1]), &(inteval->stack[((hsi*1764+43008)*1+lsi)*1]), &(inteval->stack[((hsi*1260+41748)*1+lsi)*1]), &(inteval->stack[((hsi*1260+34440)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+44772)*1+lsi)*1]), &(inteval->stack[((hsi*588+9744)*1+lsi)*1]), &(inteval->stack[((hsi*420+10920)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+46032)*1+lsi)*1]), &(inteval->stack[((hsi*784+8176)*1+lsi)*1]), &(inteval->stack[((hsi*588+9744)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+16800)*1+lsi)*1]), &(inteval->stack[((hsi*1764+46032)*1+lsi)*1]), &(inteval->stack[((hsi*1260+44772)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+47796)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]), &(inteval->stack[((hsi*420+7336)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+49056)*1+lsi)*1]), &(inteval->stack[((hsi*784+4592)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+14280)*1+lsi)*1]), &(inteval->stack[((hsi*1764+49056)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47796)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+50820)*1+lsi)*1]), &(inteval->stack[((hsi*588+2156)*1+lsi)*1]), &(inteval->stack[((hsi*420+3752)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+52080)*1+lsi)*1]), &(inteval->stack[((hsi*784+588)*1+lsi)*1]), &(inteval->stack[((hsi*588+2156)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+11760)*1+lsi)*1]), &(inteval->stack[((hsi*1764+52080)*1+lsi)*1]), &(inteval->stack[((hsi*1260+50820)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+53844)*1+lsi)*1]), &(inteval->stack[((hsi*588+9744)*1+lsi)*1]), &(inteval->stack[((hsi*588+10332)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+9744)*1+lsi)*1]), &(inteval->stack[((hsi*420+10920)*1+lsi)*1]), &(inteval->stack[((hsi*420+11340)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*1260+10164)*1+lsi)*1]), &(inteval->stack[((hsi*588+53844)*1+lsi)*1]), &(inteval->stack[((hsi*420+9744)*1+lsi)*1]), &(inteval->stack[((hsi*420+3332)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+54432)*1+lsi)*1]), &(inteval->stack[((hsi*784+8176)*1+lsi)*1]), &(inteval->stack[((hsi*784+8960)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*1764+8176)*1+lsi)*1]), &(inteval->stack[((hsi*784+54432)*1+lsi)*1]), &(inteval->stack[((hsi*588+53844)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart1bra0ket0g001d(inteval, &(inteval->stack[((hsi*2520+24360)*1+lsi)*1]), &(inteval->stack[((hsi*1764+8176)*1+lsi)*1]), &(inteval->stack[((hsi*1260+10164)*1+lsi)*1]), &(inteval->stack[((hsi*1260+34440)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+53844)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]), &(inteval->stack[((hsi*588+6748)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+6160)*1+lsi)*1]), &(inteval->stack[((hsi*420+7336)*1+lsi)*1]), &(inteval->stack[((hsi*420+7756)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*1260+6580)*1+lsi)*1]), &(inteval->stack[((hsi*588+53844)*1+lsi)*1]), &(inteval->stack[((hsi*420+6160)*1+lsi)*1]), &(inteval->stack[((hsi*420+3332)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+54432)*1+lsi)*1]), &(inteval->stack[((hsi*784+4592)*1+lsi)*1]), &(inteval->stack[((hsi*784+5376)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*1764+4592)*1+lsi)*1]), &(inteval->stack[((hsi*784+54432)*1+lsi)*1]), &(inteval->stack[((hsi*588+53844)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart1bra0ket0g010d(inteval, &(inteval->stack[((hsi*2520+21840)*1+lsi)*1]), &(inteval->stack[((hsi*1764+4592)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6580)*1+lsi)*1]), &(inteval->stack[((hsi*1260+34440)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+53844)*1+lsi)*1]), &(inteval->stack[((hsi*588+2156)*1+lsi)*1]), &(inteval->stack[((hsi*588+2744)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+2156)*1+lsi)*1]), &(inteval->stack[((hsi*420+3752)*1+lsi)*1]), &(inteval->stack[((hsi*420+4172)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*1260+54432)*1+lsi)*1]), &(inteval->stack[((hsi*588+53844)*1+lsi)*1]), &(inteval->stack[((hsi*420+2156)*1+lsi)*1]), &(inteval->stack[((hsi*420+3332)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+2156)*1+lsi)*1]), &(inteval->stack[((hsi*784+588)*1+lsi)*1]), &(inteval->stack[((hsi*784+1372)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*1764+55692)*1+lsi)*1]), &(inteval->stack[((hsi*784+2156)*1+lsi)*1]), &(inteval->stack[((hsi*588+53844)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart1bra0ket0g100d(inteval, &(inteval->stack[((hsi*2520+19320)*1+lsi)*1]), &(inteval->stack[((hsi*1764+55692)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54432)*1+lsi)*1]), &(inteval->stack[((hsi*1260+34440)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2520+11760)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2520+14280)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2520+16800)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2520+19320)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2520+21840)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2520+24360)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2520+26880)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2520+29400)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2520+31920)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
