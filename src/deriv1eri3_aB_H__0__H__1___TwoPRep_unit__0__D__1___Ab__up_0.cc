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
#include <CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_H__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_H__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11739)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_H__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+35553)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]), &(inteval->stack[((hsi*441+3276)*1+lsi)*1]),21);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1323+36876)*1+lsi)*1]), &(inteval->stack[((hsi*588+10269)*1+lsi)*1]), &(inteval->stack[((hsi*441+11298)*1+lsi)*1]), &(inteval->stack[((hsi*441+3276)*1+lsi)*1]),21);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1764+38199)*1+lsi)*1]), &(inteval->stack[((hsi*756+8925)*1+lsi)*1]), &(inteval->stack[((hsi*588+10269)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*2646+32907)*1+lsi)*1]), &(inteval->stack[((hsi*1764+38199)*1+lsi)*1]), &(inteval->stack[((hsi*1323+36876)*1+lsi)*1]), &(inteval->stack[((hsi*1323+35553)*1+lsi)*1]),21);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1323+39963)*1+lsi)*1]), &(inteval->stack[((hsi*588+6699)*1+lsi)*1]), &(inteval->stack[((hsi*441+7728)*1+lsi)*1]), &(inteval->stack[((hsi*441+3276)*1+lsi)*1]),21);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1764+41286)*1+lsi)*1]), &(inteval->stack[((hsi*756+5355)*1+lsi)*1]), &(inteval->stack[((hsi*588+6699)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*2646+30261)*1+lsi)*1]), &(inteval->stack[((hsi*1764+41286)*1+lsi)*1]), &(inteval->stack[((hsi*1323+39963)*1+lsi)*1]), &(inteval->stack[((hsi*1323+35553)*1+lsi)*1]),21);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1323+43050)*1+lsi)*1]), &(inteval->stack[((hsi*588+2688)*1+lsi)*1]), &(inteval->stack[((hsi*441+4158)*1+lsi)*1]), &(inteval->stack[((hsi*441+3276)*1+lsi)*1]),21);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1764+44373)*1+lsi)*1]), &(inteval->stack[((hsi*756+1344)*1+lsi)*1]), &(inteval->stack[((hsi*588+2688)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*2646+27615)*1+lsi)*1]), &(inteval->stack[((hsi*1764+44373)*1+lsi)*1]), &(inteval->stack[((hsi*1323+43050)*1+lsi)*1]), &(inteval->stack[((hsi*1323+35553)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+46137)*1+lsi)*1]), &(inteval->stack[((hsi*588+9681)*1+lsi)*1]), &(inteval->stack[((hsi*441+10857)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+47460)*1+lsi)*1]), &(inteval->stack[((hsi*756+8169)*1+lsi)*1]), &(inteval->stack[((hsi*588+9681)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+17031)*1+lsi)*1]), &(inteval->stack[((hsi*1764+47460)*1+lsi)*1]), &(inteval->stack[((hsi*1323+46137)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+49224)*1+lsi)*1]), &(inteval->stack[((hsi*588+6111)*1+lsi)*1]), &(inteval->stack[((hsi*441+7287)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+50547)*1+lsi)*1]), &(inteval->stack[((hsi*756+4599)*1+lsi)*1]), &(inteval->stack[((hsi*588+6111)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+14385)*1+lsi)*1]), &(inteval->stack[((hsi*1764+50547)*1+lsi)*1]), &(inteval->stack[((hsi*1323+49224)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+52311)*1+lsi)*1]), &(inteval->stack[((hsi*588+2100)*1+lsi)*1]), &(inteval->stack[((hsi*441+3717)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+53634)*1+lsi)*1]), &(inteval->stack[((hsi*756+588)*1+lsi)*1]), &(inteval->stack[((hsi*588+2100)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+11739)*1+lsi)*1]), &(inteval->stack[((hsi*1764+53634)*1+lsi)*1]), &(inteval->stack[((hsi*1323+52311)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+55398)*1+lsi)*1]), &(inteval->stack[((hsi*588+9681)*1+lsi)*1]), &(inteval->stack[((hsi*588+10269)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+9681)*1+lsi)*1]), &(inteval->stack[((hsi*441+10857)*1+lsi)*1]), &(inteval->stack[((hsi*441+11298)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*1323+10122)*1+lsi)*1]), &(inteval->stack[((hsi*588+55398)*1+lsi)*1]), &(inteval->stack[((hsi*441+9681)*1+lsi)*1]), &(inteval->stack[((hsi*441+3276)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+55986)*1+lsi)*1]), &(inteval->stack[((hsi*756+8169)*1+lsi)*1]), &(inteval->stack[((hsi*756+8925)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*1764+8169)*1+lsi)*1]), &(inteval->stack[((hsi*756+55986)*1+lsi)*1]), &(inteval->stack[((hsi*588+55398)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*2646+24969)*1+lsi)*1]), &(inteval->stack[((hsi*1764+8169)*1+lsi)*1]), &(inteval->stack[((hsi*1323+10122)*1+lsi)*1]), &(inteval->stack[((hsi*1323+35553)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+55398)*1+lsi)*1]), &(inteval->stack[((hsi*588+6111)*1+lsi)*1]), &(inteval->stack[((hsi*588+6699)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+6111)*1+lsi)*1]), &(inteval->stack[((hsi*441+7287)*1+lsi)*1]), &(inteval->stack[((hsi*441+7728)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*1323+6552)*1+lsi)*1]), &(inteval->stack[((hsi*588+55398)*1+lsi)*1]), &(inteval->stack[((hsi*441+6111)*1+lsi)*1]), &(inteval->stack[((hsi*441+3276)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+55986)*1+lsi)*1]), &(inteval->stack[((hsi*756+4599)*1+lsi)*1]), &(inteval->stack[((hsi*756+5355)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*1764+4599)*1+lsi)*1]), &(inteval->stack[((hsi*756+55986)*1+lsi)*1]), &(inteval->stack[((hsi*588+55398)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*2646+22323)*1+lsi)*1]), &(inteval->stack[((hsi*1764+4599)*1+lsi)*1]), &(inteval->stack[((hsi*1323+6552)*1+lsi)*1]), &(inteval->stack[((hsi*1323+35553)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+55398)*1+lsi)*1]), &(inteval->stack[((hsi*588+2100)*1+lsi)*1]), &(inteval->stack[((hsi*588+2688)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+2100)*1+lsi)*1]), &(inteval->stack[((hsi*441+3717)*1+lsi)*1]), &(inteval->stack[((hsi*441+4158)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*1323+55986)*1+lsi)*1]), &(inteval->stack[((hsi*588+55398)*1+lsi)*1]), &(inteval->stack[((hsi*441+2100)*1+lsi)*1]), &(inteval->stack[((hsi*441+3276)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+2100)*1+lsi)*1]), &(inteval->stack[((hsi*756+588)*1+lsi)*1]), &(inteval->stack[((hsi*756+1344)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*1764+57309)*1+lsi)*1]), &(inteval->stack[((hsi*756+2100)*1+lsi)*1]), &(inteval->stack[((hsi*588+55398)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*2646+19677)*1+lsi)*1]), &(inteval->stack[((hsi*1764+57309)*1+lsi)*1]), &(inteval->stack[((hsi*1323+55986)*1+lsi)*1]), &(inteval->stack[((hsi*1323+35553)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2646+11739)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2646+14385)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2646+17031)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2646+19677)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2646+22323)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2646+24969)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2646+27615)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2646+30261)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2646+32907)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
