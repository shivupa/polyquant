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
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_I__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,50140)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+216460)*1+lsi)*1]), &(inteval->stack[((hsi*3276+28800)*1+lsi)*1]), &(inteval->stack[((hsi*2808+32076)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+224884)*1+lsi)*1]), &(inteval->stack[((hsi*3780+25020)*1+lsi)*1]), &(inteval->stack[((hsi*3276+28800)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+234712)*1+lsi)*1]), &(inteval->stack[((hsi*9828+224884)*1+lsi)*1]), &(inteval->stack[((hsi*8424+216460)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+251560)*1+lsi)*1]), &(inteval->stack[((hsi*2808+32076)*1+lsi)*1]), &(inteval->stack[((hsi*2376+34884)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+258688)*1+lsi)*1]), &(inteval->stack[((hsi*8424+216460)*1+lsi)*1]), &(inteval->stack[((hsi*7128+251560)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+272944)*1+lsi)*1]), &(inteval->stack[((hsi*16848+234712)*1+lsi)*1]), &(inteval->stack[((hsi*14256+258688)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+251560)*1+lsi)*1]), &(inteval->stack[((hsi*4320+20700)*1+lsi)*1]), &(inteval->stack[((hsi*3780+25020)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+296704)*1+lsi)*1]), &(inteval->stack[((hsi*11340+251560)*1+lsi)*1]), &(inteval->stack[((hsi*9828+224884)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+316360)*1+lsi)*1]), &(inteval->stack[((hsi*19656+296704)*1+lsi)*1]), &(inteval->stack[((hsi*16848+234712)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+216460)*1+lsi)*1]), &(inteval->stack[((hsi*28080+316360)*1+lsi)*1]), &(inteval->stack[((hsi*23760+272944)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+20700)*1+lsi)*1]), &(inteval->stack[((hsi*2548+43560)*1+lsi)*1]), &(inteval->stack[((hsi*2184+46108)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+27252)*1+lsi)*1]), &(inteval->stack[((hsi*2940+40620)*1+lsi)*1]), &(inteval->stack[((hsi*2548+43560)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+252100)*1+lsi)*1]), &(inteval->stack[((hsi*7644+27252)*1+lsi)*1]), &(inteval->stack[((hsi*6552+20700)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+265204)*1+lsi)*1]), &(inteval->stack[((hsi*2184+46108)*1+lsi)*1]), &(inteval->stack[((hsi*1848+48292)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+270748)*1+lsi)*1]), &(inteval->stack[((hsi*6552+20700)*1+lsi)*1]), &(inteval->stack[((hsi*5544+265204)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+281836)*1+lsi)*1]), &(inteval->stack[((hsi*13104+252100)*1+lsi)*1]), &(inteval->stack[((hsi*11088+270748)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+265204)*1+lsi)*1]), &(inteval->stack[((hsi*3360+37260)*1+lsi)*1]), &(inteval->stack[((hsi*2940+40620)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+300316)*1+lsi)*1]), &(inteval->stack[((hsi*8820+265204)*1+lsi)*1]), &(inteval->stack[((hsi*7644+27252)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+20700)*1+lsi)*1]), &(inteval->stack[((hsi*15288+300316)*1+lsi)*1]), &(inteval->stack[((hsi*13104+252100)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+252100)*1+lsi)*1]), &(inteval->stack[((hsi*21840+20700)*1+lsi)*1]), &(inteval->stack[((hsi*18480+281836)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*83160+279820)*1+lsi)*1]), &(inteval->stack[((hsi*35640+216460)*1+lsi)*1]), &(inteval->stack[((hsi*27720+252100)*1+lsi)*1]),990);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+20700)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+252100)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+362980)*1+lsi)*1]), &(inteval->stack[((hsi*12285+252100)*1+lsi)*1]), &(inteval->stack[((hsi*10530+20700)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+31230)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]), &(inteval->stack[((hsi*2970+17730)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+384040)*1+lsi)*1]), &(inteval->stack[((hsi*10530+20700)*1+lsi)*1]), &(inteval->stack[((hsi*8910+31230)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+10125)*1+lsi)*1]), &(inteval->stack[((hsi*21060+362980)*1+lsi)*1]), &(inteval->stack[((hsi*17820+384040)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+264385)*1+lsi)*1]), &(inteval->stack[((hsi*5400+0)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+384040)*1+lsi)*1]), &(inteval->stack[((hsi*14175+264385)*1+lsi)*1]), &(inteval->stack[((hsi*12285+252100)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+408610)*1+lsi)*1]), &(inteval->stack[((hsi*24570+384040)*1+lsi)*1]), &(inteval->stack[((hsi*21060+362980)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+362980)*1+lsi)*1]), &(inteval->stack[((hsi*35100+408610)*1+lsi)*1]), &(inteval->stack[((hsi*29700+10125)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*106920+407530)*1+lsi)*1]), &(inteval->stack[((hsi*44550+362980)*1+lsi)*1]), &(inteval->stack[((hsi*35640+216460)*1+lsi)*1]),990);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*166320+50140)*1+lsi)*1]), &(inteval->stack[((hsi*106920+407530)*1+lsi)*1]), &(inteval->stack[((hsi*83160+279820)*1+lsi)*1]),990);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*166320+50140)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
