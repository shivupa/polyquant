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
#include <CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001d.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010d.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100d.h>
#include <HRRPart1bra0ket0h100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,15652)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+47404)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+4368)*1+lsi)*1]),28);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1764+49168)*1+lsi)*1]), &(inteval->stack[((hsi*784+13692)*1+lsi)*1]), &(inteval->stack[((hsi*588+15064)*1+lsi)*1]), &(inteval->stack[((hsi*588+4368)*1+lsi)*1]),28);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*2352+50932)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11900)*1+lsi)*1]), &(inteval->stack[((hsi*784+13692)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*3528+43876)*1+lsi)*1]), &(inteval->stack[((hsi*2352+50932)*1+lsi)*1]), &(inteval->stack[((hsi*1764+49168)*1+lsi)*1]), &(inteval->stack[((hsi*1764+47404)*1+lsi)*1]),28);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1764+53284)*1+lsi)*1]), &(inteval->stack[((hsi*784+8932)*1+lsi)*1]), &(inteval->stack[((hsi*588+10304)*1+lsi)*1]), &(inteval->stack[((hsi*588+4368)*1+lsi)*1]),28);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*2352+55048)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7140)*1+lsi)*1]), &(inteval->stack[((hsi*784+8932)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*3528+40348)*1+lsi)*1]), &(inteval->stack[((hsi*2352+55048)*1+lsi)*1]), &(inteval->stack[((hsi*1764+53284)*1+lsi)*1]), &(inteval->stack[((hsi*1764+47404)*1+lsi)*1]),28);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1764+57400)*1+lsi)*1]), &(inteval->stack[((hsi*784+3584)*1+lsi)*1]), &(inteval->stack[((hsi*588+5544)*1+lsi)*1]), &(inteval->stack[((hsi*588+4368)*1+lsi)*1]),28);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*2352+59164)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1792)*1+lsi)*1]), &(inteval->stack[((hsi*784+3584)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*3528+36820)*1+lsi)*1]), &(inteval->stack[((hsi*2352+59164)*1+lsi)*1]), &(inteval->stack[((hsi*1764+57400)*1+lsi)*1]), &(inteval->stack[((hsi*1764+47404)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+61516)*1+lsi)*1]), &(inteval->stack[((hsi*784+12908)*1+lsi)*1]), &(inteval->stack[((hsi*588+14476)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+63280)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10892)*1+lsi)*1]), &(inteval->stack[((hsi*784+12908)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+22708)*1+lsi)*1]), &(inteval->stack[((hsi*2352+63280)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61516)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+65632)*1+lsi)*1]), &(inteval->stack[((hsi*784+8148)*1+lsi)*1]), &(inteval->stack[((hsi*588+9716)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+67396)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6132)*1+lsi)*1]), &(inteval->stack[((hsi*784+8148)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+19180)*1+lsi)*1]), &(inteval->stack[((hsi*2352+67396)*1+lsi)*1]), &(inteval->stack[((hsi*1764+65632)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+69748)*1+lsi)*1]), &(inteval->stack[((hsi*784+2800)*1+lsi)*1]), &(inteval->stack[((hsi*588+4956)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+71512)*1+lsi)*1]), &(inteval->stack[((hsi*1008+784)*1+lsi)*1]), &(inteval->stack[((hsi*784+2800)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+15652)*1+lsi)*1]), &(inteval->stack[((hsi*2352+71512)*1+lsi)*1]), &(inteval->stack[((hsi*1764+69748)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+73864)*1+lsi)*1]), &(inteval->stack[((hsi*784+12908)*1+lsi)*1]), &(inteval->stack[((hsi*784+13692)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+12908)*1+lsi)*1]), &(inteval->stack[((hsi*588+14476)*1+lsi)*1]), &(inteval->stack[((hsi*588+15064)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*1764+13496)*1+lsi)*1]), &(inteval->stack[((hsi*784+73864)*1+lsi)*1]), &(inteval->stack[((hsi*588+12908)*1+lsi)*1]), &(inteval->stack[((hsi*588+4368)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+74648)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10892)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11900)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*2352+10892)*1+lsi)*1]), &(inteval->stack[((hsi*1008+74648)*1+lsi)*1]), &(inteval->stack[((hsi*784+73864)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*3528+33292)*1+lsi)*1]), &(inteval->stack[((hsi*2352+10892)*1+lsi)*1]), &(inteval->stack[((hsi*1764+13496)*1+lsi)*1]), &(inteval->stack[((hsi*1764+47404)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+73864)*1+lsi)*1]), &(inteval->stack[((hsi*784+8148)*1+lsi)*1]), &(inteval->stack[((hsi*784+8932)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+8148)*1+lsi)*1]), &(inteval->stack[((hsi*588+9716)*1+lsi)*1]), &(inteval->stack[((hsi*588+10304)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*1764+8736)*1+lsi)*1]), &(inteval->stack[((hsi*784+73864)*1+lsi)*1]), &(inteval->stack[((hsi*588+8148)*1+lsi)*1]), &(inteval->stack[((hsi*588+4368)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+74648)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6132)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7140)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*2352+6132)*1+lsi)*1]), &(inteval->stack[((hsi*1008+74648)*1+lsi)*1]), &(inteval->stack[((hsi*784+73864)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*3528+29764)*1+lsi)*1]), &(inteval->stack[((hsi*2352+6132)*1+lsi)*1]), &(inteval->stack[((hsi*1764+8736)*1+lsi)*1]), &(inteval->stack[((hsi*1764+47404)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+73864)*1+lsi)*1]), &(inteval->stack[((hsi*784+2800)*1+lsi)*1]), &(inteval->stack[((hsi*784+3584)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+2800)*1+lsi)*1]), &(inteval->stack[((hsi*588+4956)*1+lsi)*1]), &(inteval->stack[((hsi*588+5544)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*1764+74648)*1+lsi)*1]), &(inteval->stack[((hsi*784+73864)*1+lsi)*1]), &(inteval->stack[((hsi*588+2800)*1+lsi)*1]), &(inteval->stack[((hsi*588+4368)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+2800)*1+lsi)*1]), &(inteval->stack[((hsi*1008+784)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1792)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*2352+76412)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2800)*1+lsi)*1]), &(inteval->stack[((hsi*784+73864)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*3528+26236)*1+lsi)*1]), &(inteval->stack[((hsi*2352+76412)*1+lsi)*1]), &(inteval->stack[((hsi*1764+74648)*1+lsi)*1]), &(inteval->stack[((hsi*1764+47404)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3528+15652)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3528+19180)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3528+22708)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3528+26236)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3528+29764)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3528+33292)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3528+36820)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3528+40348)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3528+43876)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
