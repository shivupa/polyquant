/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ih.h>
#include <HRRPart1bra0ket0ii.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kh.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0nd.h>
#include <HRRPart1bra0ket0np.h>
#include <HRRPart1bra0ket0op.h>
#include <_aB_H__0__I__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__I__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,19551)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__I__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+68943)*1+lsi)*1]), &(inteval->stack[((hsi*945+17262)*1+lsi)*1]), &(inteval->stack[((hsi*756+18207)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+71211)*1+lsi)*1]), &(inteval->stack[((hsi*1155+16107)*1+lsi)*1]), &(inteval->stack[((hsi*945+17262)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+74046)*1+lsi)*1]), &(inteval->stack[((hsi*2835+71211)*1+lsi)*1]), &(inteval->stack[((hsi*2268+68943)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+78582)*1+lsi)*1]), &(inteval->stack[((hsi*1386+14721)*1+lsi)*1]), &(inteval->stack[((hsi*1155+16107)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+82047)*1+lsi)*1]), &(inteval->stack[((hsi*3465+78582)*1+lsi)*1]), &(inteval->stack[((hsi*2835+71211)*1+lsi)*1]),21);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*7560+87717)*1+lsi)*1]), &(inteval->stack[((hsi*5670+82047)*1+lsi)*1]), &(inteval->stack[((hsi*4536+74046)*1+lsi)*1]),21);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*4158+95277)*1+lsi)*1]), &(inteval->stack[((hsi*1638+13083)*1+lsi)*1]), &(inteval->stack[((hsi*1386+14721)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+99435)*1+lsi)*1]), &(inteval->stack[((hsi*4158+95277)*1+lsi)*1]), &(inteval->stack[((hsi*3465+78582)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+106365)*1+lsi)*1]), &(inteval->stack[((hsi*6930+99435)*1+lsi)*1]), &(inteval->stack[((hsi*5670+82047)*1+lsi)*1]),21);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*11340+115815)*1+lsi)*1]), &(inteval->stack[((hsi*9450+106365)*1+lsi)*1]), &(inteval->stack[((hsi*7560+87717)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+78582)*1+lsi)*1]), &(inteval->stack[((hsi*756+18207)*1+lsi)*1]), &(inteval->stack[((hsi*588+18963)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+80346)*1+lsi)*1]), &(inteval->stack[((hsi*2268+68943)*1+lsi)*1]), &(inteval->stack[((hsi*1764+78582)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*5880+127155)*1+lsi)*1]), &(inteval->stack[((hsi*4536+74046)*1+lsi)*1]), &(inteval->stack[((hsi*3528+80346)*1+lsi)*1]),21);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*8820+68943)*1+lsi)*1]), &(inteval->stack[((hsi*7560+87717)*1+lsi)*1]), &(inteval->stack[((hsi*5880+127155)*1+lsi)*1]),21);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*12348+77763)*1+lsi)*1]), &(inteval->stack[((hsi*11340+115815)*1+lsi)*1]), &(inteval->stack[((hsi*8820+68943)*1+lsi)*1]),21);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*4914+68943)*1+lsi)*1]), &(inteval->stack[((hsi*1911+11172)*1+lsi)*1]), &(inteval->stack[((hsi*1638+13083)*1+lsi)*1]),21);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*8316+11172)*1+lsi)*1]), &(inteval->stack[((hsi*4914+68943)*1+lsi)*1]), &(inteval->stack[((hsi*4158+95277)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+127155)*1+lsi)*1]), &(inteval->stack[((hsi*8316+11172)*1+lsi)*1]), &(inteval->stack[((hsi*6930+99435)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+90111)*1+lsi)*1]), &(inteval->stack[((hsi*11550+127155)*1+lsi)*1]), &(inteval->stack[((hsi*9450+106365)*1+lsi)*1]),21);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*15876+127155)*1+lsi)*1]), &(inteval->stack[((hsi*14175+90111)*1+lsi)*1]), &(inteval->stack[((hsi*11340+115815)*1+lsi)*1]),21);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*16464+90111)*1+lsi)*1]), &(inteval->stack[((hsi*15876+127155)*1+lsi)*1]), &(inteval->stack[((hsi*12348+77763)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+68943)*1+lsi)*1]), &(inteval->stack[((hsi*1260+8120)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9380)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+71967)*1+lsi)*1]), &(inteval->stack[((hsi*1540+6580)*1+lsi)*1]), &(inteval->stack[((hsi*1260+8120)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+75747)*1+lsi)*1]), &(inteval->stack[((hsi*3780+71967)*1+lsi)*1]), &(inteval->stack[((hsi*3024+68943)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+11172)*1+lsi)*1]), &(inteval->stack[((hsi*1848+4732)*1+lsi)*1]), &(inteval->stack[((hsi*1540+6580)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+81795)*1+lsi)*1]), &(inteval->stack[((hsi*4620+11172)*1+lsi)*1]), &(inteval->stack[((hsi*3780+71967)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+106575)*1+lsi)*1]), &(inteval->stack[((hsi*7560+81795)*1+lsi)*1]), &(inteval->stack[((hsi*6048+75747)*1+lsi)*1]),28);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*5544+116655)*1+lsi)*1]), &(inteval->stack[((hsi*2184+2548)*1+lsi)*1]), &(inteval->stack[((hsi*1848+4732)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+122199)*1+lsi)*1]), &(inteval->stack[((hsi*5544+116655)*1+lsi)*1]), &(inteval->stack[((hsi*4620+11172)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+131439)*1+lsi)*1]), &(inteval->stack[((hsi*9240+122199)*1+lsi)*1]), &(inteval->stack[((hsi*7560+81795)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+144039)*1+lsi)*1]), &(inteval->stack[((hsi*12600+131439)*1+lsi)*1]), &(inteval->stack[((hsi*10080+106575)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+11172)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9380)*1+lsi)*1]), &(inteval->stack[((hsi*784+10388)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+81795)*1+lsi)*1]), &(inteval->stack[((hsi*3024+68943)*1+lsi)*1]), &(inteval->stack[((hsi*2352+11172)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+4732)*1+lsi)*1]), &(inteval->stack[((hsi*6048+75747)*1+lsi)*1]), &(inteval->stack[((hsi*4704+81795)*1+lsi)*1]),28);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*11760+68943)*1+lsi)*1]), &(inteval->stack[((hsi*10080+106575)*1+lsi)*1]), &(inteval->stack[((hsi*7840+4732)*1+lsi)*1]),28);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*16464+159159)*1+lsi)*1]), &(inteval->stack[((hsi*15120+144039)*1+lsi)*1]), &(inteval->stack[((hsi*11760+68943)*1+lsi)*1]),28);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*6552+68943)*1+lsi)*1]), &(inteval->stack[((hsi*2548+0)*1+lsi)*1]), &(inteval->stack[((hsi*2184+2548)*1+lsi)*1]),28);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*11088+0)*1+lsi)*1]), &(inteval->stack[((hsi*6552+68943)*1+lsi)*1]), &(inteval->stack[((hsi*5544+116655)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+68943)*1+lsi)*1]), &(inteval->stack[((hsi*11088+0)*1+lsi)*1]), &(inteval->stack[((hsi*9240+122199)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+106575)*1+lsi)*1]), &(inteval->stack[((hsi*15400+68943)*1+lsi)*1]), &(inteval->stack[((hsi*12600+131439)*1+lsi)*1]),28);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*21168+68943)*1+lsi)*1]), &(inteval->stack[((hsi*18900+106575)*1+lsi)*1]), &(inteval->stack[((hsi*15120+144039)*1+lsi)*1]),28);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*21952+106575)*1+lsi)*1]), &(inteval->stack[((hsi*21168+68943)*1+lsi)*1]), &(inteval->stack[((hsi*16464+159159)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*49392+19551)*1+lsi)*1]), &(inteval->stack[((hsi*21952+106575)*1+lsi)*1]), &(inteval->stack[((hsi*16464+90111)*1+lsi)*1]),784);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*49392+19551)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
