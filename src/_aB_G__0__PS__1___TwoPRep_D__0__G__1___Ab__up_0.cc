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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
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
#include <_aB_G__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,29440)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+118540)*1+lsi)*1]), &(inteval->stack[((hsi*1911+17605)*1+lsi)*1]), &(inteval->stack[((hsi*1638+19516)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+123454)*1+lsi)*1]), &(inteval->stack[((hsi*2205+15400)*1+lsi)*1]), &(inteval->stack[((hsi*1911+17605)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+129187)*1+lsi)*1]), &(inteval->stack[((hsi*5733+123454)*1+lsi)*1]), &(inteval->stack[((hsi*4914+118540)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+139015)*1+lsi)*1]), &(inteval->stack[((hsi*1638+19516)*1+lsi)*1]), &(inteval->stack[((hsi*1386+21154)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+143173)*1+lsi)*1]), &(inteval->stack[((hsi*4914+118540)*1+lsi)*1]), &(inteval->stack[((hsi*4158+139015)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+151489)*1+lsi)*1]), &(inteval->stack[((hsi*9828+129187)*1+lsi)*1]), &(inteval->stack[((hsi*8316+143173)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+139015)*1+lsi)*1]), &(inteval->stack[((hsi*2520+12880)*1+lsi)*1]), &(inteval->stack[((hsi*2205+15400)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+165349)*1+lsi)*1]), &(inteval->stack[((hsi*6615+139015)*1+lsi)*1]), &(inteval->stack[((hsi*5733+123454)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+176815)*1+lsi)*1]), &(inteval->stack[((hsi*11466+165349)*1+lsi)*1]), &(inteval->stack[((hsi*9828+129187)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+118540)*1+lsi)*1]), &(inteval->stack[((hsi*16380+176815)*1+lsi)*1]), &(inteval->stack[((hsi*13860+151489)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+12880)*1+lsi)*1]), &(inteval->stack[((hsi*1365+25915)*1+lsi)*1]), &(inteval->stack[((hsi*1170+27280)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+16390)*1+lsi)*1]), &(inteval->stack[((hsi*1575+24340)*1+lsi)*1]), &(inteval->stack[((hsi*1365+25915)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+139330)*1+lsi)*1]), &(inteval->stack[((hsi*4095+16390)*1+lsi)*1]), &(inteval->stack[((hsi*3510+12880)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+146350)*1+lsi)*1]), &(inteval->stack[((hsi*1170+27280)*1+lsi)*1]), &(inteval->stack[((hsi*990+28450)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+149320)*1+lsi)*1]), &(inteval->stack[((hsi*3510+12880)*1+lsi)*1]), &(inteval->stack[((hsi*2970+146350)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+155260)*1+lsi)*1]), &(inteval->stack[((hsi*7020+139330)*1+lsi)*1]), &(inteval->stack[((hsi*5940+149320)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+146350)*1+lsi)*1]), &(inteval->stack[((hsi*1800+22540)*1+lsi)*1]), &(inteval->stack[((hsi*1575+24340)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+20485)*1+lsi)*1]), &(inteval->stack[((hsi*4725+146350)*1+lsi)*1]), &(inteval->stack[((hsi*4095+16390)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+165160)*1+lsi)*1]), &(inteval->stack[((hsi*8190+20485)*1+lsi)*1]), &(inteval->stack[((hsi*7020+139330)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+12880)*1+lsi)*1]), &(inteval->stack[((hsi*11700+165160)*1+lsi)*1]), &(inteval->stack[((hsi*9900+155260)*1+lsi)*1]),15);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*44550+139330)*1+lsi)*1]), &(inteval->stack[((hsi*20790+118540)*1+lsi)*1]), &(inteval->stack[((hsi*14850+12880)*1+lsi)*1]),990);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+12880)*1+lsi)*1]), &(inteval->stack[((hsi*2548+6300)*1+lsi)*1]), &(inteval->stack[((hsi*2184+8848)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+19432)*1+lsi)*1]), &(inteval->stack[((hsi*2940+3360)*1+lsi)*1]), &(inteval->stack[((hsi*2548+6300)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+183880)*1+lsi)*1]), &(inteval->stack[((hsi*7644+19432)*1+lsi)*1]), &(inteval->stack[((hsi*6552+12880)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+196984)*1+lsi)*1]), &(inteval->stack[((hsi*2184+8848)*1+lsi)*1]), &(inteval->stack[((hsi*1848+11032)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+202528)*1+lsi)*1]), &(inteval->stack[((hsi*6552+12880)*1+lsi)*1]), &(inteval->stack[((hsi*5544+196984)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+213616)*1+lsi)*1]), &(inteval->stack[((hsi*13104+183880)*1+lsi)*1]), &(inteval->stack[((hsi*11088+202528)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+196984)*1+lsi)*1]), &(inteval->stack[((hsi*3360+0)*1+lsi)*1]), &(inteval->stack[((hsi*2940+3360)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+0)*1+lsi)*1]), &(inteval->stack[((hsi*8820+196984)*1+lsi)*1]), &(inteval->stack[((hsi*7644+19432)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+232096)*1+lsi)*1]), &(inteval->stack[((hsi*15288+0)*1+lsi)*1]), &(inteval->stack[((hsi*13104+183880)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+183880)*1+lsi)*1]), &(inteval->stack[((hsi*21840+232096)*1+lsi)*1]), &(inteval->stack[((hsi*18480+213616)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*62370+211600)*1+lsi)*1]), &(inteval->stack[((hsi*27720+183880)*1+lsi)*1]), &(inteval->stack[((hsi*20790+118540)*1+lsi)*1]),990);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*89100+29440)*1+lsi)*1]), &(inteval->stack[((hsi*62370+211600)*1+lsi)*1]), &(inteval->stack[((hsi*44550+139330)*1+lsi)*1]),990);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*89100+29440)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
