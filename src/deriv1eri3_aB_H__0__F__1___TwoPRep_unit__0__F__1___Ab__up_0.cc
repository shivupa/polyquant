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
#include <CR_DerivGaussP1InBra_aB_H__0__F001__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__F010__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__F100__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_H__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_H__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,10290)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_H__0__F__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*630+29190)*1+lsi)*1]), &(inteval->stack[((hsi*315+6447)*1+lsi)*1]), &(inteval->stack[((hsi*210+6972)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+29820)*1+lsi)*1]), &(inteval->stack[((hsi*441+5691)*1+lsi)*1]), &(inteval->stack[((hsi*315+6447)*1+lsi)*1]),21);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+30765)*1+lsi)*1]), &(inteval->stack[((hsi*945+29820)*1+lsi)*1]), &(inteval->stack[((hsi*630+29190)*1+lsi)*1]),21);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*441+9324)*1+lsi)*1]), &(inteval->stack[((hsi*315+9765)*1+lsi)*1]), &(inteval->stack[((hsi*315+6447)*1+lsi)*1]),21);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*630+32970)*1+lsi)*1]), &(inteval->stack[((hsi*315+9765)*1+lsi)*1]), &(inteval->stack[((hsi*210+10080)*1+lsi)*1]), &(inteval->stack[((hsi*210+6972)*1+lsi)*1]),21);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*1260+33600)*1+lsi)*1]), &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*630+32970)*1+lsi)*1]), &(inteval->stack[((hsi*630+29190)*1+lsi)*1]),21);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1323+34860)*1+lsi)*1]), &(inteval->stack[((hsi*588+8736)*1+lsi)*1]), &(inteval->stack[((hsi*441+9324)*1+lsi)*1]), &(inteval->stack[((hsi*441+5691)*1+lsi)*1]),21);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*1890+36183)*1+lsi)*1]), &(inteval->stack[((hsi*1323+34860)*1+lsi)*1]), &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*945+29820)*1+lsi)*1]),21);
HRRPart1bra0ket0ff001(inteval, &(inteval->stack[((hsi*2100+27090)*1+lsi)*1]), &(inteval->stack[((hsi*1890+36183)*1+lsi)*1]), &(inteval->stack[((hsi*1260+33600)*1+lsi)*1]), &(inteval->stack[((hsi*1260+30765)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*441+3696)*1+lsi)*1]), &(inteval->stack[((hsi*315+4137)*1+lsi)*1]),21);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*630+32970)*1+lsi)*1]), &(inteval->stack[((hsi*315+4137)*1+lsi)*1]), &(inteval->stack[((hsi*210+4452)*1+lsi)*1]),21);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+8736)*1+lsi)*1]), &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*630+32970)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+34860)*1+lsi)*1]), &(inteval->stack[((hsi*588+3108)*1+lsi)*1]), &(inteval->stack[((hsi*441+3696)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+38073)*1+lsi)*1]), &(inteval->stack[((hsi*1323+34860)*1+lsi)*1]), &(inteval->stack[((hsi*945+32025)*1+lsi)*1]),21);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*2100+14490)*1+lsi)*1]), &(inteval->stack[((hsi*1890+38073)*1+lsi)*1]), &(inteval->stack[((hsi*1260+8736)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__F001__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2100+20790)*1+lsi)*1]), &(inteval->stack[((hsi*2100+14490)*1+lsi)*1]), &(inteval->stack[((hsi*2100+27090)*1+lsi)*1]));
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*441+7770)*1+lsi)*1]), &(inteval->stack[((hsi*315+8211)*1+lsi)*1]), &(inteval->stack[((hsi*315+6447)*1+lsi)*1]),21);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*630+32970)*1+lsi)*1]), &(inteval->stack[((hsi*315+8211)*1+lsi)*1]), &(inteval->stack[((hsi*210+8526)*1+lsi)*1]), &(inteval->stack[((hsi*210+6972)*1+lsi)*1]),21);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*1260+3108)*1+lsi)*1]), &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*630+32970)*1+lsi)*1]), &(inteval->stack[((hsi*630+29190)*1+lsi)*1]),21);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1323+34860)*1+lsi)*1]), &(inteval->stack[((hsi*588+7182)*1+lsi)*1]), &(inteval->stack[((hsi*441+7770)*1+lsi)*1]), &(inteval->stack[((hsi*441+5691)*1+lsi)*1]),21);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*1890+39963)*1+lsi)*1]), &(inteval->stack[((hsi*1323+34860)*1+lsi)*1]), &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*945+29820)*1+lsi)*1]),21);
HRRPart1bra0ket0ff010(inteval, &(inteval->stack[((hsi*2100+24990)*1+lsi)*1]), &(inteval->stack[((hsi*1890+39963)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3108)*1+lsi)*1]), &(inteval->stack[((hsi*1260+30765)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*441+2142)*1+lsi)*1]), &(inteval->stack[((hsi*315+2583)*1+lsi)*1]),21);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*630+32970)*1+lsi)*1]), &(inteval->stack[((hsi*315+2583)*1+lsi)*1]), &(inteval->stack[((hsi*210+2898)*1+lsi)*1]),21);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+7182)*1+lsi)*1]), &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*630+32970)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+34860)*1+lsi)*1]), &(inteval->stack[((hsi*588+1554)*1+lsi)*1]), &(inteval->stack[((hsi*441+2142)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+41853)*1+lsi)*1]), &(inteval->stack[((hsi*1323+34860)*1+lsi)*1]), &(inteval->stack[((hsi*945+32025)*1+lsi)*1]),21);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*2100+12390)*1+lsi)*1]), &(inteval->stack[((hsi*1890+41853)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7182)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__F010__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2100+18690)*1+lsi)*1]), &(inteval->stack[((hsi*2100+12390)*1+lsi)*1]), &(inteval->stack[((hsi*2100+24990)*1+lsi)*1]));
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*441+5250)*1+lsi)*1]), &(inteval->stack[((hsi*315+6132)*1+lsi)*1]), &(inteval->stack[((hsi*315+6447)*1+lsi)*1]),21);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*630+32970)*1+lsi)*1]), &(inteval->stack[((hsi*315+6132)*1+lsi)*1]), &(inteval->stack[((hsi*210+6762)*1+lsi)*1]), &(inteval->stack[((hsi*210+6972)*1+lsi)*1]),21);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*1260+1554)*1+lsi)*1]), &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*630+32970)*1+lsi)*1]), &(inteval->stack[((hsi*630+29190)*1+lsi)*1]),21);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1323+34860)*1+lsi)*1]), &(inteval->stack[((hsi*588+4662)*1+lsi)*1]), &(inteval->stack[((hsi*441+5250)*1+lsi)*1]), &(inteval->stack[((hsi*441+5691)*1+lsi)*1]),21);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*1890+4368)*1+lsi)*1]), &(inteval->stack[((hsi*1323+34860)*1+lsi)*1]), &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*945+29820)*1+lsi)*1]),21);
HRRPart1bra0ket0ff100(inteval, &(inteval->stack[((hsi*2100+22890)*1+lsi)*1]), &(inteval->stack[((hsi*1890+4368)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1554)*1+lsi)*1]), &(inteval->stack[((hsi*1260+30765)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*441+588)*1+lsi)*1]), &(inteval->stack[((hsi*315+1029)*1+lsi)*1]),21);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*630+32970)*1+lsi)*1]), &(inteval->stack[((hsi*315+1029)*1+lsi)*1]), &(inteval->stack[((hsi*210+1344)*1+lsi)*1]),21);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+29190)*1+lsi)*1]), &(inteval->stack[((hsi*945+32025)*1+lsi)*1]), &(inteval->stack[((hsi*630+32970)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+34860)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]), &(inteval->stack[((hsi*441+588)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+43743)*1+lsi)*1]), &(inteval->stack[((hsi*1323+34860)*1+lsi)*1]), &(inteval->stack[((hsi*945+32025)*1+lsi)*1]),21);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*2100+10290)*1+lsi)*1]), &(inteval->stack[((hsi*1890+43743)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29190)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__F100__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2100+16590)*1+lsi)*1]), &(inteval->stack[((hsi*2100+10290)*1+lsi)*1]), &(inteval->stack[((hsi*2100+22890)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2100+10290)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2100+12390)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2100+14490)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2100+16590)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2100+18690)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2100+20790)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2100+22890)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2100+24990)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2100+27090)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
