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
#include <HRRPart0bra0ket0gf.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_G__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,34000)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4914+133000)*1+lsi)*1]), &(inteval->stack[((hsi*2184+22408)*1+lsi)*1]), &(inteval->stack[((hsi*1638+24592)*1+lsi)*1]),78);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3510+137914)*1+lsi)*1]), &(inteval->stack[((hsi*1638+24592)*1+lsi)*1]), &(inteval->stack[((hsi*1170+26230)*1+lsi)*1]),78);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*7020+141424)*1+lsi)*1]), &(inteval->stack[((hsi*4914+133000)*1+lsi)*1]), &(inteval->stack[((hsi*3510+137914)*1+lsi)*1]),78);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+148444)*1+lsi)*1]), &(inteval->stack[((hsi*2808+19600)*1+lsi)*1]), &(inteval->stack[((hsi*2184+22408)*1+lsi)*1]),78);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*9828+154996)*1+lsi)*1]), &(inteval->stack[((hsi*6552+148444)*1+lsi)*1]), &(inteval->stack[((hsi*4914+133000)*1+lsi)*1]),78);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*11700+164824)*1+lsi)*1]), &(inteval->stack[((hsi*9828+154996)*1+lsi)*1]), &(inteval->stack[((hsi*7020+141424)*1+lsi)*1]),78);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5733+133000)*1+lsi)*1]), &(inteval->stack[((hsi*2548+13776)*1+lsi)*1]), &(inteval->stack[((hsi*1911+16324)*1+lsi)*1]),91);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4095+138733)*1+lsi)*1]), &(inteval->stack[((hsi*1911+16324)*1+lsi)*1]), &(inteval->stack[((hsi*1365+18235)*1+lsi)*1]),91);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*8190+142828)*1+lsi)*1]), &(inteval->stack[((hsi*5733+133000)*1+lsi)*1]), &(inteval->stack[((hsi*4095+138733)*1+lsi)*1]),91);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*7644+151018)*1+lsi)*1]), &(inteval->stack[((hsi*3276+10500)*1+lsi)*1]), &(inteval->stack[((hsi*2548+13776)*1+lsi)*1]),91);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*11466+10500)*1+lsi)*1]), &(inteval->stack[((hsi*7644+151018)*1+lsi)*1]), &(inteval->stack[((hsi*5733+133000)*1+lsi)*1]),91);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*13650+151018)*1+lsi)*1]), &(inteval->stack[((hsi*11466+10500)*1+lsi)*1]), &(inteval->stack[((hsi*8190+142828)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35100+176524)*1+lsi)*1]), &(inteval->stack[((hsi*13650+151018)*1+lsi)*1]), &(inteval->stack[((hsi*11700+164824)*1+lsi)*1]),150);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+133000)*1+lsi)*1]), &(inteval->stack[((hsi*1848+29776)*1+lsi)*1]), &(inteval->stack[((hsi*1386+31624)*1+lsi)*1]),66);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2970+10500)*1+lsi)*1]), &(inteval->stack[((hsi*1386+31624)*1+lsi)*1]), &(inteval->stack[((hsi*990+33010)*1+lsi)*1]),66);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*5940+13470)*1+lsi)*1]), &(inteval->stack[((hsi*4158+133000)*1+lsi)*1]), &(inteval->stack[((hsi*2970+10500)*1+lsi)*1]),66);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+137158)*1+lsi)*1]), &(inteval->stack[((hsi*2376+27400)*1+lsi)*1]), &(inteval->stack[((hsi*1848+29776)*1+lsi)*1]),66);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*8316+142702)*1+lsi)*1]), &(inteval->stack[((hsi*5544+137158)*1+lsi)*1]), &(inteval->stack[((hsi*4158+133000)*1+lsi)*1]),66);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*9900+19410)*1+lsi)*1]), &(inteval->stack[((hsi*8316+142702)*1+lsi)*1]), &(inteval->stack[((hsi*5940+13470)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*29700+211624)*1+lsi)*1]), &(inteval->stack[((hsi*11700+164824)*1+lsi)*1]), &(inteval->stack[((hsi*9900+19410)*1+lsi)*1]),150);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*59400+241324)*1+lsi)*1]), &(inteval->stack[((hsi*35100+176524)*1+lsi)*1]), &(inteval->stack[((hsi*29700+211624)*1+lsi)*1]),150);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6615+211624)*1+lsi)*1]), &(inteval->stack[((hsi*2940+3780)*1+lsi)*1]), &(inteval->stack[((hsi*2205+6720)*1+lsi)*1]),105);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4725+10500)*1+lsi)*1]), &(inteval->stack[((hsi*2205+6720)*1+lsi)*1]), &(inteval->stack[((hsi*1575+8925)*1+lsi)*1]),105);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*9450+218239)*1+lsi)*1]), &(inteval->stack[((hsi*6615+211624)*1+lsi)*1]), &(inteval->stack[((hsi*4725+10500)*1+lsi)*1]),105);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*8820+6720)*1+lsi)*1]), &(inteval->stack[((hsi*3780+0)*1+lsi)*1]), &(inteval->stack[((hsi*2940+3780)*1+lsi)*1]),105);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*13230+15540)*1+lsi)*1]), &(inteval->stack[((hsi*8820+6720)*1+lsi)*1]), &(inteval->stack[((hsi*6615+211624)*1+lsi)*1]),105);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*15750+133000)*1+lsi)*1]), &(inteval->stack[((hsi*13230+15540)*1+lsi)*1]), &(inteval->stack[((hsi*9450+218239)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*40950+300724)*1+lsi)*1]), &(inteval->stack[((hsi*15750+133000)*1+lsi)*1]), &(inteval->stack[((hsi*13650+151018)*1+lsi)*1]),150);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*70200+341674)*1+lsi)*1]), &(inteval->stack[((hsi*40950+300724)*1+lsi)*1]), &(inteval->stack[((hsi*35100+176524)*1+lsi)*1]),150);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*99000+34000)*1+lsi)*1]), &(inteval->stack[((hsi*70200+341674)*1+lsi)*1]), &(inteval->stack[((hsi*59400+241324)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*99000+34000)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
