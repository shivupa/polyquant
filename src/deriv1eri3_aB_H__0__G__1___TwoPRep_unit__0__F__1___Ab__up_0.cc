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
#include <CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,13944)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+42294)*1+lsi)*1]), &(inteval->stack[((hsi*441+8673)*1+lsi)*1]), &(inteval->stack[((hsi*315+9429)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+43239)*1+lsi)*1]), &(inteval->stack[((hsi*588+7644)*1+lsi)*1]), &(inteval->stack[((hsi*441+8673)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+44562)*1+lsi)*1]), &(inteval->stack[((hsi*1323+43239)*1+lsi)*1]), &(inteval->stack[((hsi*945+42294)*1+lsi)*1]),21);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*588+12600)*1+lsi)*1]), &(inteval->stack[((hsi*441+13188)*1+lsi)*1]), &(inteval->stack[((hsi*441+8673)*1+lsi)*1]),21);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*945+47775)*1+lsi)*1]), &(inteval->stack[((hsi*441+13188)*1+lsi)*1]), &(inteval->stack[((hsi*315+13629)*1+lsi)*1]), &(inteval->stack[((hsi*315+9429)*1+lsi)*1]),21);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*1890+48720)*1+lsi)*1]), &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*945+47775)*1+lsi)*1]), &(inteval->stack[((hsi*945+42294)*1+lsi)*1]),21);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1764+50610)*1+lsi)*1]), &(inteval->stack[((hsi*756+11844)*1+lsi)*1]), &(inteval->stack[((hsi*588+12600)*1+lsi)*1]), &(inteval->stack[((hsi*588+7644)*1+lsi)*1]),21);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*2646+52374)*1+lsi)*1]), &(inteval->stack[((hsi*1764+50610)*1+lsi)*1]), &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*1323+43239)*1+lsi)*1]),21);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*3150+39144)*1+lsi)*1]), &(inteval->stack[((hsi*2646+52374)*1+lsi)*1]), &(inteval->stack[((hsi*1890+48720)*1+lsi)*1]), &(inteval->stack[((hsi*1890+44562)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*588+4956)*1+lsi)*1]), &(inteval->stack[((hsi*441+5544)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+47775)*1+lsi)*1]), &(inteval->stack[((hsi*441+5544)*1+lsi)*1]), &(inteval->stack[((hsi*315+5985)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+11844)*1+lsi)*1]), &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*945+47775)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+50610)*1+lsi)*1]), &(inteval->stack[((hsi*756+4200)*1+lsi)*1]), &(inteval->stack[((hsi*588+4956)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+55020)*1+lsi)*1]), &(inteval->stack[((hsi*1764+50610)*1+lsi)*1]), &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]),21);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*3150+20244)*1+lsi)*1]), &(inteval->stack[((hsi*2646+55020)*1+lsi)*1]), &(inteval->stack[((hsi*1890+11844)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*3150+29694)*1+lsi)*1]), &(inteval->stack[((hsi*3150+20244)*1+lsi)*1]), &(inteval->stack[((hsi*3150+39144)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*588+10500)*1+lsi)*1]), &(inteval->stack[((hsi*441+11088)*1+lsi)*1]), &(inteval->stack[((hsi*441+8673)*1+lsi)*1]),21);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*945+47775)*1+lsi)*1]), &(inteval->stack[((hsi*441+11088)*1+lsi)*1]), &(inteval->stack[((hsi*315+11529)*1+lsi)*1]), &(inteval->stack[((hsi*315+9429)*1+lsi)*1]),21);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*1890+4200)*1+lsi)*1]), &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*945+47775)*1+lsi)*1]), &(inteval->stack[((hsi*945+42294)*1+lsi)*1]),21);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1764+50610)*1+lsi)*1]), &(inteval->stack[((hsi*756+9744)*1+lsi)*1]), &(inteval->stack[((hsi*588+10500)*1+lsi)*1]), &(inteval->stack[((hsi*588+7644)*1+lsi)*1]),21);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*2646+57666)*1+lsi)*1]), &(inteval->stack[((hsi*1764+50610)*1+lsi)*1]), &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*1323+43239)*1+lsi)*1]),21);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*3150+35994)*1+lsi)*1]), &(inteval->stack[((hsi*2646+57666)*1+lsi)*1]), &(inteval->stack[((hsi*1890+4200)*1+lsi)*1]), &(inteval->stack[((hsi*1890+44562)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*588+2856)*1+lsi)*1]), &(inteval->stack[((hsi*441+3444)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+47775)*1+lsi)*1]), &(inteval->stack[((hsi*441+3444)*1+lsi)*1]), &(inteval->stack[((hsi*315+3885)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+9744)*1+lsi)*1]), &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*945+47775)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+50610)*1+lsi)*1]), &(inteval->stack[((hsi*756+2100)*1+lsi)*1]), &(inteval->stack[((hsi*588+2856)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+60312)*1+lsi)*1]), &(inteval->stack[((hsi*1764+50610)*1+lsi)*1]), &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]),21);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*3150+17094)*1+lsi)*1]), &(inteval->stack[((hsi*2646+60312)*1+lsi)*1]), &(inteval->stack[((hsi*1890+9744)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*3150+26544)*1+lsi)*1]), &(inteval->stack[((hsi*3150+17094)*1+lsi)*1]), &(inteval->stack[((hsi*3150+35994)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*588+7056)*1+lsi)*1]), &(inteval->stack[((hsi*441+8232)*1+lsi)*1]), &(inteval->stack[((hsi*441+8673)*1+lsi)*1]),21);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*945+47775)*1+lsi)*1]), &(inteval->stack[((hsi*441+8232)*1+lsi)*1]), &(inteval->stack[((hsi*315+9114)*1+lsi)*1]), &(inteval->stack[((hsi*315+9429)*1+lsi)*1]),21);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*1890+2100)*1+lsi)*1]), &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*945+47775)*1+lsi)*1]), &(inteval->stack[((hsi*945+42294)*1+lsi)*1]),21);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1764+50610)*1+lsi)*1]), &(inteval->stack[((hsi*756+6300)*1+lsi)*1]), &(inteval->stack[((hsi*588+7056)*1+lsi)*1]), &(inteval->stack[((hsi*588+7644)*1+lsi)*1]),21);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*2646+6090)*1+lsi)*1]), &(inteval->stack[((hsi*1764+50610)*1+lsi)*1]), &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*1323+43239)*1+lsi)*1]),21);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*3150+32844)*1+lsi)*1]), &(inteval->stack[((hsi*2646+6090)*1+lsi)*1]), &(inteval->stack[((hsi*1890+2100)*1+lsi)*1]), &(inteval->stack[((hsi*1890+44562)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*588+756)*1+lsi)*1]), &(inteval->stack[((hsi*441+1344)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+47775)*1+lsi)*1]), &(inteval->stack[((hsi*441+1344)*1+lsi)*1]), &(inteval->stack[((hsi*315+1785)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+42294)*1+lsi)*1]), &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]), &(inteval->stack[((hsi*945+47775)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+50610)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+756)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+62958)*1+lsi)*1]), &(inteval->stack[((hsi*1764+50610)*1+lsi)*1]), &(inteval->stack[((hsi*1323+46452)*1+lsi)*1]),21);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*3150+13944)*1+lsi)*1]), &(inteval->stack[((hsi*2646+62958)*1+lsi)*1]), &(inteval->stack[((hsi*1890+42294)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*3150+23394)*1+lsi)*1]), &(inteval->stack[((hsi*3150+13944)*1+lsi)*1]), &(inteval->stack[((hsi*3150+32844)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3150+13944)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3150+17094)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3150+20244)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3150+23394)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3150+26544)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3150+29694)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3150+32844)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3150+35994)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3150+39144)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
