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
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mp.h>
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
#include <_aB_I__0__M__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__M__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,41664)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__M__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+171024)*1+lsi)*1]), &(inteval->stack[((hsi*2184+36092)*1+lsi)*1]), &(inteval->stack[((hsi*1848+38276)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+176568)*1+lsi)*1]), &(inteval->stack[((hsi*2548+33544)*1+lsi)*1]), &(inteval->stack[((hsi*2184+36092)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+183120)*1+lsi)*1]), &(inteval->stack[((hsi*6552+176568)*1+lsi)*1]), &(inteval->stack[((hsi*5544+171024)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+194208)*1+lsi)*1]), &(inteval->stack[((hsi*2940+30604)*1+lsi)*1]), &(inteval->stack[((hsi*2548+33544)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+201852)*1+lsi)*1]), &(inteval->stack[((hsi*7644+194208)*1+lsi)*1]), &(inteval->stack[((hsi*6552+176568)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+214956)*1+lsi)*1]), &(inteval->stack[((hsi*13104+201852)*1+lsi)*1]), &(inteval->stack[((hsi*11088+183120)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+233436)*1+lsi)*1]), &(inteval->stack[((hsi*3360+27244)*1+lsi)*1]), &(inteval->stack[((hsi*2940+30604)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+242256)*1+lsi)*1]), &(inteval->stack[((hsi*8820+233436)*1+lsi)*1]), &(inteval->stack[((hsi*7644+194208)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+257544)*1+lsi)*1]), &(inteval->stack[((hsi*15288+242256)*1+lsi)*1]), &(inteval->stack[((hsi*13104+201852)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+279384)*1+lsi)*1]), &(inteval->stack[((hsi*21840+257544)*1+lsi)*1]), &(inteval->stack[((hsi*18480+214956)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+194208)*1+lsi)*1]), &(inteval->stack[((hsi*1848+38276)*1+lsi)*1]), &(inteval->stack[((hsi*1540+40124)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+198828)*1+lsi)*1]), &(inteval->stack[((hsi*5544+171024)*1+lsi)*1]), &(inteval->stack[((hsi*4620+194208)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+307104)*1+lsi)*1]), &(inteval->stack[((hsi*11088+183120)*1+lsi)*1]), &(inteval->stack[((hsi*9240+198828)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+171024)*1+lsi)*1]), &(inteval->stack[((hsi*18480+214956)*1+lsi)*1]), &(inteval->stack[((hsi*15400+307104)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+194124)*1+lsi)*1]), &(inteval->stack[((hsi*27720+279384)*1+lsi)*1]), &(inteval->stack[((hsi*23100+171024)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+171024)*1+lsi)*1]), &(inteval->stack[((hsi*3808+23436)*1+lsi)*1]), &(inteval->stack[((hsi*3360+27244)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+23436)*1+lsi)*1]), &(inteval->stack[((hsi*10080+171024)*1+lsi)*1]), &(inteval->stack[((hsi*8820+233436)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+307104)*1+lsi)*1]), &(inteval->stack[((hsi*17640+23436)*1+lsi)*1]), &(inteval->stack[((hsi*15288+242256)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+332584)*1+lsi)*1]), &(inteval->stack[((hsi*25480+307104)*1+lsi)*1]), &(inteval->stack[((hsi*21840+257544)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+226464)*1+lsi)*1]), &(inteval->stack[((hsi*32760+332584)*1+lsi)*1]), &(inteval->stack[((hsi*27720+279384)*1+lsi)*1]),28);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*43120+265272)*1+lsi)*1]), &(inteval->stack[((hsi*38808+226464)*1+lsi)*1]), &(inteval->stack[((hsi*32340+194124)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+171024)*1+lsi)*1]), &(inteval->stack[((hsi*2808+16272)*1+lsi)*1]), &(inteval->stack[((hsi*2376+19080)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+178152)*1+lsi)*1]), &(inteval->stack[((hsi*3276+12996)*1+lsi)*1]), &(inteval->stack[((hsi*2808+16272)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+186576)*1+lsi)*1]), &(inteval->stack[((hsi*8424+178152)*1+lsi)*1]), &(inteval->stack[((hsi*7128+171024)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+200832)*1+lsi)*1]), &(inteval->stack[((hsi*3780+9216)*1+lsi)*1]), &(inteval->stack[((hsi*3276+12996)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+210660)*1+lsi)*1]), &(inteval->stack[((hsi*9828+200832)*1+lsi)*1]), &(inteval->stack[((hsi*8424+178152)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+227508)*1+lsi)*1]), &(inteval->stack[((hsi*16848+210660)*1+lsi)*1]), &(inteval->stack[((hsi*14256+186576)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+23436)*1+lsi)*1]), &(inteval->stack[((hsi*4320+4896)*1+lsi)*1]), &(inteval->stack[((hsi*3780+9216)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+308392)*1+lsi)*1]), &(inteval->stack[((hsi*11340+23436)*1+lsi)*1]), &(inteval->stack[((hsi*9828+200832)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+328048)*1+lsi)*1]), &(inteval->stack[((hsi*19656+308392)*1+lsi)*1]), &(inteval->stack[((hsi*16848+210660)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+356128)*1+lsi)*1]), &(inteval->stack[((hsi*28080+328048)*1+lsi)*1]), &(inteval->stack[((hsi*23760+227508)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+200832)*1+lsi)*1]), &(inteval->stack[((hsi*2376+19080)*1+lsi)*1]), &(inteval->stack[((hsi*1980+21456)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+206772)*1+lsi)*1]), &(inteval->stack[((hsi*7128+171024)*1+lsi)*1]), &(inteval->stack[((hsi*5940+200832)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+391768)*1+lsi)*1]), &(inteval->stack[((hsi*14256+186576)*1+lsi)*1]), &(inteval->stack[((hsi*11880+206772)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+171024)*1+lsi)*1]), &(inteval->stack[((hsi*23760+227508)*1+lsi)*1]), &(inteval->stack[((hsi*19800+391768)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+200724)*1+lsi)*1]), &(inteval->stack[((hsi*35640+356128)*1+lsi)*1]), &(inteval->stack[((hsi*29700+171024)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+171024)*1+lsi)*1]), &(inteval->stack[((hsi*4896+0)*1+lsi)*1]), &(inteval->stack[((hsi*4320+4896)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+0)*1+lsi)*1]), &(inteval->stack[((hsi*12960+171024)*1+lsi)*1]), &(inteval->stack[((hsi*11340+23436)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+391768)*1+lsi)*1]), &(inteval->stack[((hsi*22680+0)*1+lsi)*1]), &(inteval->stack[((hsi*19656+308392)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+424528)*1+lsi)*1]), &(inteval->stack[((hsi*32760+391768)*1+lsi)*1]), &(inteval->stack[((hsi*28080+328048)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+466648)*1+lsi)*1]), &(inteval->stack[((hsi*42120+424528)*1+lsi)*1]), &(inteval->stack[((hsi*35640+356128)*1+lsi)*1]),36);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*55440+308392)*1+lsi)*1]), &(inteval->stack[((hsi*49896+466648)*1+lsi)*1]), &(inteval->stack[((hsi*41580+200724)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*129360+41664)*1+lsi)*1]), &(inteval->stack[((hsi*55440+308392)*1+lsi)*1]), &(inteval->stack[((hsi*43120+265272)*1+lsi)*1]),1540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*129360+41664)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
