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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ig.h>
#include <HRRPart0bra0ket0ih.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kg.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_I__0__M__1___TwoPRep_H__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__M__1___TwoPRep_H__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,61292)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__M__1___TwoPRep_H__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+255332)*1+lsi)*1]), &(inteval->stack[((hsi*2970+37158)*1+lsi)*1]), &(inteval->stack[((hsi*2376+40128)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+262460)*1+lsi)*1]), &(inteval->stack[((hsi*3630+33528)*1+lsi)*1]), &(inteval->stack[((hsi*2970+37158)*1+lsi)*1]),66);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+271370)*1+lsi)*1]), &(inteval->stack[((hsi*8910+262460)*1+lsi)*1]), &(inteval->stack[((hsi*7128+255332)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+285626)*1+lsi)*1]), &(inteval->stack[((hsi*4356+29172)*1+lsi)*1]), &(inteval->stack[((hsi*3630+33528)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+296516)*1+lsi)*1]), &(inteval->stack[((hsi*10890+285626)*1+lsi)*1]), &(inteval->stack[((hsi*8910+262460)*1+lsi)*1]),66);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+314336)*1+lsi)*1]), &(inteval->stack[((hsi*17820+296516)*1+lsi)*1]), &(inteval->stack[((hsi*14256+271370)*1+lsi)*1]),66);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+262460)*1+lsi)*1]), &(inteval->stack[((hsi*2376+40128)*1+lsi)*1]), &(inteval->stack[((hsi*1848+42504)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+338096)*1+lsi)*1]), &(inteval->stack[((hsi*7128+255332)*1+lsi)*1]), &(inteval->stack[((hsi*5544+262460)*1+lsi)*1]),66);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*18480+349184)*1+lsi)*1]), &(inteval->stack[((hsi*14256+271370)*1+lsi)*1]), &(inteval->stack[((hsi*11088+338096)*1+lsi)*1]),66);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*27720+255332)*1+lsi)*1]), &(inteval->stack[((hsi*23760+314336)*1+lsi)*1]), &(inteval->stack[((hsi*18480+349184)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+338096)*1+lsi)*1]), &(inteval->stack[((hsi*5148+24024)*1+lsi)*1]), &(inteval->stack[((hsi*4356+29172)*1+lsi)*1]),66);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*21780+351164)*1+lsi)*1]), &(inteval->stack[((hsi*13068+338096)*1+lsi)*1]), &(inteval->stack[((hsi*10890+285626)*1+lsi)*1]),66);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+372944)*1+lsi)*1]), &(inteval->stack[((hsi*21780+351164)*1+lsi)*1]), &(inteval->stack[((hsi*17820+296516)*1+lsi)*1]),66);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*35640+402644)*1+lsi)*1]), &(inteval->stack[((hsi*29700+372944)*1+lsi)*1]), &(inteval->stack[((hsi*23760+314336)*1+lsi)*1]),66);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*38808+283052)*1+lsi)*1]), &(inteval->stack[((hsi*35640+402644)*1+lsi)*1]), &(inteval->stack[((hsi*27720+255332)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+255332)*1+lsi)*1]), &(inteval->stack[((hsi*2475+55297)*1+lsi)*1]), &(inteval->stack[((hsi*1980+57772)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+261272)*1+lsi)*1]), &(inteval->stack[((hsi*3025+52272)*1+lsi)*1]), &(inteval->stack[((hsi*2475+55297)*1+lsi)*1]),55);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+24024)*1+lsi)*1]), &(inteval->stack[((hsi*7425+261272)*1+lsi)*1]), &(inteval->stack[((hsi*5940+255332)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+268697)*1+lsi)*1]), &(inteval->stack[((hsi*3630+48642)*1+lsi)*1]), &(inteval->stack[((hsi*3025+52272)*1+lsi)*1]),55);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+321860)*1+lsi)*1]), &(inteval->stack[((hsi*9075+268697)*1+lsi)*1]), &(inteval->stack[((hsi*7425+261272)*1+lsi)*1]),55);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+336710)*1+lsi)*1]), &(inteval->stack[((hsi*14850+321860)*1+lsi)*1]), &(inteval->stack[((hsi*11880+24024)*1+lsi)*1]),55);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+35904)*1+lsi)*1]), &(inteval->stack[((hsi*1980+57772)*1+lsi)*1]), &(inteval->stack[((hsi*1540+59752)*1+lsi)*1]),55);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*9240+356510)*1+lsi)*1]), &(inteval->stack[((hsi*5940+255332)*1+lsi)*1]), &(inteval->stack[((hsi*4620+35904)*1+lsi)*1]),55);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*15400+365750)*1+lsi)*1]), &(inteval->stack[((hsi*11880+24024)*1+lsi)*1]), &(inteval->stack[((hsi*9240+356510)*1+lsi)*1]),55);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*23100+381150)*1+lsi)*1]), &(inteval->stack[((hsi*19800+336710)*1+lsi)*1]), &(inteval->stack[((hsi*15400+365750)*1+lsi)*1]),55);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+356510)*1+lsi)*1]), &(inteval->stack[((hsi*4290+44352)*1+lsi)*1]), &(inteval->stack[((hsi*3630+48642)*1+lsi)*1]),55);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*18150+24024)*1+lsi)*1]), &(inteval->stack[((hsi*10890+356510)*1+lsi)*1]), &(inteval->stack[((hsi*9075+268697)*1+lsi)*1]),55);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+255332)*1+lsi)*1]), &(inteval->stack[((hsi*18150+24024)*1+lsi)*1]), &(inteval->stack[((hsi*14850+321860)*1+lsi)*1]),55);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+24024)*1+lsi)*1]), &(inteval->stack[((hsi*24750+255332)*1+lsi)*1]), &(inteval->stack[((hsi*19800+336710)*1+lsi)*1]),55);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*32340+321860)*1+lsi)*1]), &(inteval->stack[((hsi*29700+24024)*1+lsi)*1]), &(inteval->stack[((hsi*23100+381150)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*97020+354200)*1+lsi)*1]), &(inteval->stack[((hsi*38808+283052)*1+lsi)*1]), &(inteval->stack[((hsi*32340+321860)*1+lsi)*1]),588);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+24024)*1+lsi)*1]), &(inteval->stack[((hsi*3510+15522)*1+lsi)*1]), &(inteval->stack[((hsi*2808+19032)*1+lsi)*1]),78);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+321860)*1+lsi)*1]), &(inteval->stack[((hsi*4290+11232)*1+lsi)*1]), &(inteval->stack[((hsi*3510+15522)*1+lsi)*1]),78);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*16848+32448)*1+lsi)*1]), &(inteval->stack[((hsi*10530+321860)*1+lsi)*1]), &(inteval->stack[((hsi*8424+24024)*1+lsi)*1]),78);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+255332)*1+lsi)*1]), &(inteval->stack[((hsi*5148+6084)*1+lsi)*1]), &(inteval->stack[((hsi*4290+11232)*1+lsi)*1]),78);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+332390)*1+lsi)*1]), &(inteval->stack[((hsi*12870+255332)*1+lsi)*1]), &(inteval->stack[((hsi*10530+321860)*1+lsi)*1]),78);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*28080+451220)*1+lsi)*1]), &(inteval->stack[((hsi*21060+332390)*1+lsi)*1]), &(inteval->stack[((hsi*16848+32448)*1+lsi)*1]),78);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+268202)*1+lsi)*1]), &(inteval->stack[((hsi*2808+19032)*1+lsi)*1]), &(inteval->stack[((hsi*2184+21840)*1+lsi)*1]),78);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*13104+479300)*1+lsi)*1]), &(inteval->stack[((hsi*8424+24024)*1+lsi)*1]), &(inteval->stack[((hsi*6552+268202)*1+lsi)*1]),78);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*21840+492404)*1+lsi)*1]), &(inteval->stack[((hsi*16848+32448)*1+lsi)*1]), &(inteval->stack[((hsi*13104+479300)*1+lsi)*1]),78);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*32760+11232)*1+lsi)*1]), &(inteval->stack[((hsi*28080+451220)*1+lsi)*1]), &(inteval->stack[((hsi*21840+492404)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+43992)*1+lsi)*1]), &(inteval->stack[((hsi*6084+0)*1+lsi)*1]), &(inteval->stack[((hsi*5148+6084)*1+lsi)*1]),78);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*25740+479300)*1+lsi)*1]), &(inteval->stack[((hsi*15444+43992)*1+lsi)*1]), &(inteval->stack[((hsi*12870+255332)*1+lsi)*1]),78);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+505040)*1+lsi)*1]), &(inteval->stack[((hsi*25740+479300)*1+lsi)*1]), &(inteval->stack[((hsi*21060+332390)*1+lsi)*1]),78);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*42120+540140)*1+lsi)*1]), &(inteval->stack[((hsi*35100+505040)*1+lsi)*1]), &(inteval->stack[((hsi*28080+451220)*1+lsi)*1]),78);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*45864+451220)*1+lsi)*1]), &(inteval->stack[((hsi*42120+540140)*1+lsi)*1]), &(inteval->stack[((hsi*32760+11232)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*116424+497084)*1+lsi)*1]), &(inteval->stack[((hsi*45864+451220)*1+lsi)*1]), &(inteval->stack[((hsi*38808+283052)*1+lsi)*1]),588);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*194040+61292)*1+lsi)*1]), &(inteval->stack[((hsi*116424+497084)*1+lsi)*1]), &(inteval->stack[((hsi*97020+354200)*1+lsi)*1]),588);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*194040+61292)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
