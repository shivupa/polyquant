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
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hg.h>
#include <HRRPart1bra0ket0hh.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_H__0__H__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__H__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,12299)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__H__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+40082)*1+lsi)*1]), &(inteval->stack[((hsi*756+10514)*1+lsi)*1]), &(inteval->stack[((hsi*588+11270)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+41846)*1+lsi)*1]), &(inteval->stack[((hsi*945+9569)*1+lsi)*1]), &(inteval->stack[((hsi*756+10514)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+44114)*1+lsi)*1]), &(inteval->stack[((hsi*2268+41846)*1+lsi)*1]), &(inteval->stack[((hsi*1764+40082)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+47642)*1+lsi)*1]), &(inteval->stack[((hsi*1155+8414)*1+lsi)*1]), &(inteval->stack[((hsi*945+9569)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+50477)*1+lsi)*1]), &(inteval->stack[((hsi*2835+47642)*1+lsi)*1]), &(inteval->stack[((hsi*2268+41846)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*5880+55013)*1+lsi)*1]), &(inteval->stack[((hsi*4536+50477)*1+lsi)*1]), &(inteval->stack[((hsi*3528+44114)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+41846)*1+lsi)*1]), &(inteval->stack[((hsi*588+11270)*1+lsi)*1]), &(inteval->stack[((hsi*441+11858)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+9569)*1+lsi)*1]), &(inteval->stack[((hsi*1764+40082)*1+lsi)*1]), &(inteval->stack[((hsi*1323+41846)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+60893)*1+lsi)*1]), &(inteval->stack[((hsi*3528+44114)*1+lsi)*1]), &(inteval->stack[((hsi*2646+9569)*1+lsi)*1]),21);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*6615+40082)*1+lsi)*1]), &(inteval->stack[((hsi*5880+55013)*1+lsi)*1]), &(inteval->stack[((hsi*4410+60893)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+60893)*1+lsi)*1]), &(inteval->stack[((hsi*1386+7028)*1+lsi)*1]), &(inteval->stack[((hsi*1155+8414)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+64358)*1+lsi)*1]), &(inteval->stack[((hsi*3465+60893)*1+lsi)*1]), &(inteval->stack[((hsi*2835+47642)*1+lsi)*1]),21);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*7560+70028)*1+lsi)*1]), &(inteval->stack[((hsi*5670+64358)*1+lsi)*1]), &(inteval->stack[((hsi*4536+50477)*1+lsi)*1]),21);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*8820+60893)*1+lsi)*1]), &(inteval->stack[((hsi*7560+70028)*1+lsi)*1]), &(inteval->stack[((hsi*5880+55013)*1+lsi)*1]),21);
HRRPart1bra0ket0hh(inteval, &(inteval->stack[((hsi*9261+46697)*1+lsi)*1]), &(inteval->stack[((hsi*8820+60893)*1+lsi)*1]), &(inteval->stack[((hsi*6615+40082)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+40082)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4648)*1+lsi)*1]), &(inteval->stack[((hsi*784+5656)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+7028)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3388)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4648)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+55958)*1+lsi)*1]), &(inteval->stack[((hsi*3024+7028)*1+lsi)*1]), &(inteval->stack[((hsi*2352+40082)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+42434)*1+lsi)*1]), &(inteval->stack[((hsi*1540+1848)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3388)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+60662)*1+lsi)*1]), &(inteval->stack[((hsi*3780+42434)*1+lsi)*1]), &(inteval->stack[((hsi*3024+7028)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+66710)*1+lsi)*1]), &(inteval->stack[((hsi*6048+60662)*1+lsi)*1]), &(inteval->stack[((hsi*4704+55958)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+7028)*1+lsi)*1]), &(inteval->stack[((hsi*784+5656)*1+lsi)*1]), &(inteval->stack[((hsi*588+6440)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+3388)*1+lsi)*1]), &(inteval->stack[((hsi*2352+40082)*1+lsi)*1]), &(inteval->stack[((hsi*1764+7028)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+74550)*1+lsi)*1]), &(inteval->stack[((hsi*4704+55958)*1+lsi)*1]), &(inteval->stack[((hsi*3528+3388)*1+lsi)*1]),28);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*8820+3388)*1+lsi)*1]), &(inteval->stack[((hsi*7840+66710)*1+lsi)*1]), &(inteval->stack[((hsi*5880+74550)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+55958)*1+lsi)*1]), &(inteval->stack[((hsi*1848+0)*1+lsi)*1]), &(inteval->stack[((hsi*1540+1848)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+74550)*1+lsi)*1]), &(inteval->stack[((hsi*4620+55958)*1+lsi)*1]), &(inteval->stack[((hsi*3780+42434)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+82110)*1+lsi)*1]), &(inteval->stack[((hsi*7560+74550)*1+lsi)*1]), &(inteval->stack[((hsi*6048+60662)*1+lsi)*1]),28);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*11760+92190)*1+lsi)*1]), &(inteval->stack[((hsi*10080+82110)*1+lsi)*1]), &(inteval->stack[((hsi*7840+66710)*1+lsi)*1]),28);
HRRPart1bra0ket0hh(inteval, &(inteval->stack[((hsi*12348+55958)*1+lsi)*1]), &(inteval->stack[((hsi*11760+92190)*1+lsi)*1]), &(inteval->stack[((hsi*8820+3388)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*27783+12299)*1+lsi)*1]), &(inteval->stack[((hsi*12348+55958)*1+lsi)*1]), &(inteval->stack[((hsi*9261+46697)*1+lsi)*1]),441);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*27783+12299)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
