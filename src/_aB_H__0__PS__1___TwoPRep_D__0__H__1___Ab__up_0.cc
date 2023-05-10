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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,50660)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+225296)*1+lsi)*1]), &(inteval->stack[((hsi*2548+31564)*1+lsi)*1]), &(inteval->stack[((hsi*2184+34112)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+231848)*1+lsi)*1]), &(inteval->stack[((hsi*2940+28624)*1+lsi)*1]), &(inteval->stack[((hsi*2548+31564)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+239492)*1+lsi)*1]), &(inteval->stack[((hsi*7644+231848)*1+lsi)*1]), &(inteval->stack[((hsi*6552+225296)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+252596)*1+lsi)*1]), &(inteval->stack[((hsi*3360+25264)*1+lsi)*1]), &(inteval->stack[((hsi*2940+28624)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+261416)*1+lsi)*1]), &(inteval->stack[((hsi*8820+252596)*1+lsi)*1]), &(inteval->stack[((hsi*7644+231848)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+276704)*1+lsi)*1]), &(inteval->stack[((hsi*15288+261416)*1+lsi)*1]), &(inteval->stack[((hsi*13104+239492)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+231848)*1+lsi)*1]), &(inteval->stack[((hsi*2184+34112)*1+lsi)*1]), &(inteval->stack[((hsi*1848+36296)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+298544)*1+lsi)*1]), &(inteval->stack[((hsi*6552+225296)*1+lsi)*1]), &(inteval->stack[((hsi*5544+231848)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+309632)*1+lsi)*1]), &(inteval->stack[((hsi*13104+239492)*1+lsi)*1]), &(inteval->stack[((hsi*11088+298544)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+328112)*1+lsi)*1]), &(inteval->stack[((hsi*21840+276704)*1+lsi)*1]), &(inteval->stack[((hsi*18480+309632)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+298544)*1+lsi)*1]), &(inteval->stack[((hsi*3808+21456)*1+lsi)*1]), &(inteval->stack[((hsi*3360+25264)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+225296)*1+lsi)*1]), &(inteval->stack[((hsi*10080+298544)*1+lsi)*1]), &(inteval->stack[((hsi*8820+252596)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+298544)*1+lsi)*1]), &(inteval->stack[((hsi*17640+225296)*1+lsi)*1]), &(inteval->stack[((hsi*15288+261416)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+225296)*1+lsi)*1]), &(inteval->stack[((hsi*25480+298544)*1+lsi)*1]), &(inteval->stack[((hsi*21840+276704)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+258056)*1+lsi)*1]), &(inteval->stack[((hsi*32760+225296)*1+lsi)*1]), &(inteval->stack[((hsi*27720+328112)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+225296)*1+lsi)*1]), &(inteval->stack[((hsi*1911+45725)*1+lsi)*1]), &(inteval->stack[((hsi*1638+47636)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+230210)*1+lsi)*1]), &(inteval->stack[((hsi*2205+43520)*1+lsi)*1]), &(inteval->stack[((hsi*1911+45725)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+235943)*1+lsi)*1]), &(inteval->stack[((hsi*5733+230210)*1+lsi)*1]), &(inteval->stack[((hsi*4914+225296)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+21456)*1+lsi)*1]), &(inteval->stack[((hsi*2520+41000)*1+lsi)*1]), &(inteval->stack[((hsi*2205+43520)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+245771)*1+lsi)*1]), &(inteval->stack[((hsi*6615+21456)*1+lsi)*1]), &(inteval->stack[((hsi*5733+230210)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+296864)*1+lsi)*1]), &(inteval->stack[((hsi*11466+245771)*1+lsi)*1]), &(inteval->stack[((hsi*9828+235943)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+28071)*1+lsi)*1]), &(inteval->stack[((hsi*1638+47636)*1+lsi)*1]), &(inteval->stack[((hsi*1386+49274)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+313244)*1+lsi)*1]), &(inteval->stack[((hsi*4914+225296)*1+lsi)*1]), &(inteval->stack[((hsi*4158+28071)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+321560)*1+lsi)*1]), &(inteval->stack[((hsi*9828+235943)*1+lsi)*1]), &(inteval->stack[((hsi*8316+313244)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+335420)*1+lsi)*1]), &(inteval->stack[((hsi*16380+296864)*1+lsi)*1]), &(inteval->stack[((hsi*13860+321560)*1+lsi)*1]),21);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*7560+313244)*1+lsi)*1]), &(inteval->stack[((hsi*2856+38144)*1+lsi)*1]), &(inteval->stack[((hsi*2520+41000)*1+lsi)*1]),21);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*13230+28071)*1+lsi)*1]), &(inteval->stack[((hsi*7560+313244)*1+lsi)*1]), &(inteval->stack[((hsi*6615+21456)*1+lsi)*1]),21);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*19110+313244)*1+lsi)*1]), &(inteval->stack[((hsi*13230+28071)*1+lsi)*1]), &(inteval->stack[((hsi*11466+245771)*1+lsi)*1]),21);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*24570+225296)*1+lsi)*1]), &(inteval->stack[((hsi*19110+313244)*1+lsi)*1]), &(inteval->stack[((hsi*16380+296864)*1+lsi)*1]),21);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*29106+296864)*1+lsi)*1]), &(inteval->stack[((hsi*24570+225296)*1+lsi)*1]), &(inteval->stack[((hsi*20790+335420)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*87318+325970)*1+lsi)*1]), &(inteval->stack[((hsi*38808+258056)*1+lsi)*1]), &(inteval->stack[((hsi*29106+296864)*1+lsi)*1]),1386);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+225296)*1+lsi)*1]), &(inteval->stack[((hsi*3276+12996)*1+lsi)*1]), &(inteval->stack[((hsi*2808+16272)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+21456)*1+lsi)*1]), &(inteval->stack[((hsi*3780+9216)*1+lsi)*1]), &(inteval->stack[((hsi*3276+12996)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+296864)*1+lsi)*1]), &(inteval->stack[((hsi*9828+21456)*1+lsi)*1]), &(inteval->stack[((hsi*8424+225296)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+233720)*1+lsi)*1]), &(inteval->stack[((hsi*4320+4896)*1+lsi)*1]), &(inteval->stack[((hsi*3780+9216)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+413288)*1+lsi)*1]), &(inteval->stack[((hsi*11340+233720)*1+lsi)*1]), &(inteval->stack[((hsi*9828+21456)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+21456)*1+lsi)*1]), &(inteval->stack[((hsi*19656+413288)*1+lsi)*1]), &(inteval->stack[((hsi*16848+296864)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+245060)*1+lsi)*1]), &(inteval->stack[((hsi*2808+16272)*1+lsi)*1]), &(inteval->stack[((hsi*2376+19080)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+432944)*1+lsi)*1]), &(inteval->stack[((hsi*8424+225296)*1+lsi)*1]), &(inteval->stack[((hsi*7128+245060)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+447200)*1+lsi)*1]), &(inteval->stack[((hsi*16848+296864)*1+lsi)*1]), &(inteval->stack[((hsi*14256+432944)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+470960)*1+lsi)*1]), &(inteval->stack[((hsi*28080+21456)*1+lsi)*1]), &(inteval->stack[((hsi*23760+447200)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+432944)*1+lsi)*1]), &(inteval->stack[((hsi*4896+0)*1+lsi)*1]), &(inteval->stack[((hsi*4320+4896)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+296864)*1+lsi)*1]), &(inteval->stack[((hsi*12960+432944)*1+lsi)*1]), &(inteval->stack[((hsi*11340+233720)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+225296)*1+lsi)*1]), &(inteval->stack[((hsi*22680+296864)*1+lsi)*1]), &(inteval->stack[((hsi*19656+413288)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+413288)*1+lsi)*1]), &(inteval->stack[((hsi*32760+225296)*1+lsi)*1]), &(inteval->stack[((hsi*28080+21456)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+0)*1+lsi)*1]), &(inteval->stack[((hsi*42120+413288)*1+lsi)*1]), &(inteval->stack[((hsi*35640+470960)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*116424+413288)*1+lsi)*1]), &(inteval->stack[((hsi*49896+0)*1+lsi)*1]), &(inteval->stack[((hsi*38808+258056)*1+lsi)*1]),1386);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*174636+50660)*1+lsi)*1]), &(inteval->stack[((hsi*116424+413288)*1+lsi)*1]), &(inteval->stack[((hsi*87318+325970)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*174636+50660)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
