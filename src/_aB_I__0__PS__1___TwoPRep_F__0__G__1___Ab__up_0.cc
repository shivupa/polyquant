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
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
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
#include <_aB_I__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,75440)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+352640)*1+lsi)*1]), &(inteval->stack[((hsi*3276+54100)*1+lsi)*1]), &(inteval->stack[((hsi*2808+57376)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+361064)*1+lsi)*1]), &(inteval->stack[((hsi*3780+50320)*1+lsi)*1]), &(inteval->stack[((hsi*3276+54100)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+370892)*1+lsi)*1]), &(inteval->stack[((hsi*9828+361064)*1+lsi)*1]), &(inteval->stack[((hsi*8424+352640)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+387740)*1+lsi)*1]), &(inteval->stack[((hsi*2808+57376)*1+lsi)*1]), &(inteval->stack[((hsi*2376+60184)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+394868)*1+lsi)*1]), &(inteval->stack[((hsi*8424+352640)*1+lsi)*1]), &(inteval->stack[((hsi*7128+387740)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+409124)*1+lsi)*1]), &(inteval->stack[((hsi*16848+370892)*1+lsi)*1]), &(inteval->stack[((hsi*14256+394868)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+387740)*1+lsi)*1]), &(inteval->stack[((hsi*4320+46000)*1+lsi)*1]), &(inteval->stack[((hsi*3780+50320)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+432884)*1+lsi)*1]), &(inteval->stack[((hsi*11340+387740)*1+lsi)*1]), &(inteval->stack[((hsi*9828+361064)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+452540)*1+lsi)*1]), &(inteval->stack[((hsi*19656+432884)*1+lsi)*1]), &(inteval->stack[((hsi*16848+370892)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+352640)*1+lsi)*1]), &(inteval->stack[((hsi*28080+452540)*1+lsi)*1]), &(inteval->stack[((hsi*23760+409124)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+46000)*1+lsi)*1]), &(inteval->stack[((hsi*4095+35425)*1+lsi)*1]), &(inteval->stack[((hsi*3510+39520)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+388280)*1+lsi)*1]), &(inteval->stack[((hsi*4725+30700)*1+lsi)*1]), &(inteval->stack[((hsi*4095+35425)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+400565)*1+lsi)*1]), &(inteval->stack[((hsi*12285+388280)*1+lsi)*1]), &(inteval->stack[((hsi*10530+46000)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+421625)*1+lsi)*1]), &(inteval->stack[((hsi*3510+39520)*1+lsi)*1]), &(inteval->stack[((hsi*2970+43030)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+430535)*1+lsi)*1]), &(inteval->stack[((hsi*10530+46000)*1+lsi)*1]), &(inteval->stack[((hsi*8910+421625)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+448355)*1+lsi)*1]), &(inteval->stack[((hsi*21060+400565)*1+lsi)*1]), &(inteval->stack[((hsi*17820+430535)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+35425)*1+lsi)*1]), &(inteval->stack[((hsi*5400+25300)*1+lsi)*1]), &(inteval->stack[((hsi*4725+30700)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+421625)*1+lsi)*1]), &(inteval->stack[((hsi*14175+35425)*1+lsi)*1]), &(inteval->stack[((hsi*12285+388280)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+25300)*1+lsi)*1]), &(inteval->stack[((hsi*24570+421625)*1+lsi)*1]), &(inteval->stack[((hsi*21060+400565)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+388280)*1+lsi)*1]), &(inteval->stack[((hsi*35100+25300)*1+lsi)*1]), &(inteval->stack[((hsi*29700+448355)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*106920+432830)*1+lsi)*1]), &(inteval->stack[((hsi*44550+388280)*1+lsi)*1]), &(inteval->stack[((hsi*35640+352640)*1+lsi)*1]),990);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+25300)*1+lsi)*1]), &(inteval->stack[((hsi*2548+68860)*1+lsi)*1]), &(inteval->stack[((hsi*2184+71408)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+31852)*1+lsi)*1]), &(inteval->stack[((hsi*2940+65920)*1+lsi)*1]), &(inteval->stack[((hsi*2548+68860)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+39496)*1+lsi)*1]), &(inteval->stack[((hsi*7644+31852)*1+lsi)*1]), &(inteval->stack[((hsi*6552+25300)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+52600)*1+lsi)*1]), &(inteval->stack[((hsi*2184+71408)*1+lsi)*1]), &(inteval->stack[((hsi*1848+73592)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+539750)*1+lsi)*1]), &(inteval->stack[((hsi*6552+25300)*1+lsi)*1]), &(inteval->stack[((hsi*5544+52600)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+550838)*1+lsi)*1]), &(inteval->stack[((hsi*13104+39496)*1+lsi)*1]), &(inteval->stack[((hsi*11088+539750)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+539750)*1+lsi)*1]), &(inteval->stack[((hsi*3360+62560)*1+lsi)*1]), &(inteval->stack[((hsi*2940+65920)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+52600)*1+lsi)*1]), &(inteval->stack[((hsi*8820+539750)*1+lsi)*1]), &(inteval->stack[((hsi*7644+31852)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+569318)*1+lsi)*1]), &(inteval->stack[((hsi*15288+52600)*1+lsi)*1]), &(inteval->stack[((hsi*13104+39496)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+25300)*1+lsi)*1]), &(inteval->stack[((hsi*21840+569318)*1+lsi)*1]), &(inteval->stack[((hsi*18480+550838)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*83160+539750)*1+lsi)*1]), &(inteval->stack[((hsi*35640+352640)*1+lsi)*1]), &(inteval->stack[((hsi*27720+25300)*1+lsi)*1]),990);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*166320+622910)*1+lsi)*1]), &(inteval->stack[((hsi*106920+432830)*1+lsi)*1]), &(inteval->stack[((hsi*83160+539750)*1+lsi)*1]),990);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+539750)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+552620)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+567635)*1+lsi)*1]), &(inteval->stack[((hsi*15015+552620)*1+lsi)*1]), &(inteval->stack[((hsi*12870+539750)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+25300)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]), &(inteval->stack[((hsi*3630+21670)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+36190)*1+lsi)*1]), &(inteval->stack[((hsi*12870+539750)*1+lsi)*1]), &(inteval->stack[((hsi*10890+25300)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+789230)*1+lsi)*1]), &(inteval->stack[((hsi*25740+567635)*1+lsi)*1]), &(inteval->stack[((hsi*21780+36190)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+12375)*1+lsi)*1]), &(inteval->stack[((hsi*6600+0)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+29700)*1+lsi)*1]), &(inteval->stack[((hsi*17325+12375)*1+lsi)*1]), &(inteval->stack[((hsi*15015+552620)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+825530)*1+lsi)*1]), &(inteval->stack[((hsi*30030+29700)*1+lsi)*1]), &(inteval->stack[((hsi*25740+567635)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+539750)*1+lsi)*1]), &(inteval->stack[((hsi*42900+825530)*1+lsi)*1]), &(inteval->stack[((hsi*36300+789230)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*133650+789230)*1+lsi)*1]), &(inteval->stack[((hsi*54450+539750)*1+lsi)*1]), &(inteval->stack[((hsi*44550+388280)*1+lsi)*1]),990);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*213840+922880)*1+lsi)*1]), &(inteval->stack[((hsi*133650+789230)*1+lsi)*1]), &(inteval->stack[((hsi*106920+432830)*1+lsi)*1]),990);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*277200+75440)*1+lsi)*1]), &(inteval->stack[((hsi*213840+922880)*1+lsi)*1]), &(inteval->stack[((hsi*166320+622910)*1+lsi)*1]),990);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*277200+75440)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
