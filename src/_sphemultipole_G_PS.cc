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
#include <HRRPart0ket0bra0pdd.h>
#include <HRRPart0ket0bra0pdp.h>
#include <HRRPart0ket0bra0pfp.h>
#include <HRRPart0ket0bra0ppd.h>
#include <HRRPart0ket0bra0ppf.h>
#include <HRRPart0ket0bra0ppp.h>
#include <HRRPart0ket0bra0psd.h>
#include <HRRPart0ket0bra0psf.h>
#include <HRRPart0ket0bra0psg.h>
#include <HRRPart0ket0bra0psp.h>
#include <_sphemultipole_G_PS_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_G_PS(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11500)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_G_PS_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+11265)*1+lsi)*1]), &(inteval->stack[((hsi*78+11356)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+11160)*1+lsi)*1]), &(inteval->stack[((hsi*91+11265)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+11356)*1+lsi)*1]), &(inteval->stack[((hsi*66+11434)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+37819)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+11040)*1+lsi)*1]), &(inteval->stack[((hsi*105+11160)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+39025)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+35260)*1+lsi)*1]), &(inteval->stack[((hsi*780+39025)*1+lsi)*1]), &(inteval->stack[((hsi*660+37819)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+10805)*1+lsi)*1]), &(inteval->stack[((hsi*78+10896)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+10700)*1+lsi)*1]), &(inteval->stack[((hsi*91+10805)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+10896)*1+lsi)*1]), &(inteval->stack[((hsi*66+10974)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+10805)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+10580)*1+lsi)*1]), &(inteval->stack[((hsi*105+10700)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+39805)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+34270)*1+lsi)*1]), &(inteval->stack[((hsi*780+39805)*1+lsi)*1]), &(inteval->stack[((hsi*660+10805)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+10345)*1+lsi)*1]), &(inteval->stack[((hsi*78+10436)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+10240)*1+lsi)*1]), &(inteval->stack[((hsi*91+10345)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+10436)*1+lsi)*1]), &(inteval->stack[((hsi*66+10514)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+40585)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+10120)*1+lsi)*1]), &(inteval->stack[((hsi*105+10240)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+41245)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+33280)*1+lsi)*1]), &(inteval->stack[((hsi*780+41245)*1+lsi)*1]), &(inteval->stack[((hsi*660+40585)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+9885)*1+lsi)*1]), &(inteval->stack[((hsi*78+9976)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+9780)*1+lsi)*1]), &(inteval->stack[((hsi*91+9885)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+10120)*1+lsi)*1]), &(inteval->stack[((hsi*78+9976)*1+lsi)*1]), &(inteval->stack[((hsi*66+10054)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37225)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+10120)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+9885)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+9660)*1+lsi)*1]), &(inteval->stack[((hsi*105+9780)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+42025)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+32290)*1+lsi)*1]), &(inteval->stack[((hsi*780+42025)*1+lsi)*1]), &(inteval->stack[((hsi*660+9885)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+9425)*1+lsi)*1]), &(inteval->stack[((hsi*78+9516)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+9320)*1+lsi)*1]), &(inteval->stack[((hsi*91+9425)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+9516)*1+lsi)*1]), &(inteval->stack[((hsi*66+9594)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+42805)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+9200)*1+lsi)*1]), &(inteval->stack[((hsi*105+9320)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+43465)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+31300)*1+lsi)*1]), &(inteval->stack[((hsi*780+43465)*1+lsi)*1]), &(inteval->stack[((hsi*660+42805)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+8965)*1+lsi)*1]), &(inteval->stack[((hsi*78+9056)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+8860)*1+lsi)*1]), &(inteval->stack[((hsi*91+8965)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+9200)*1+lsi)*1]), &(inteval->stack[((hsi*78+9056)*1+lsi)*1]), &(inteval->stack[((hsi*66+9134)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37225)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+9200)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+8965)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+8740)*1+lsi)*1]), &(inteval->stack[((hsi*105+8860)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+44245)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+30310)*1+lsi)*1]), &(inteval->stack[((hsi*780+44245)*1+lsi)*1]), &(inteval->stack[((hsi*660+8965)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+8505)*1+lsi)*1]), &(inteval->stack[((hsi*78+8596)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+8400)*1+lsi)*1]), &(inteval->stack[((hsi*91+8505)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+8596)*1+lsi)*1]), &(inteval->stack[((hsi*66+8674)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+45025)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+8280)*1+lsi)*1]), &(inteval->stack[((hsi*105+8400)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+45685)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+29320)*1+lsi)*1]), &(inteval->stack[((hsi*780+45685)*1+lsi)*1]), &(inteval->stack[((hsi*660+45025)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+8045)*1+lsi)*1]), &(inteval->stack[((hsi*78+8136)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+7940)*1+lsi)*1]), &(inteval->stack[((hsi*91+8045)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+8280)*1+lsi)*1]), &(inteval->stack[((hsi*78+8136)*1+lsi)*1]), &(inteval->stack[((hsi*66+8214)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37225)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+8280)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+8045)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+7820)*1+lsi)*1]), &(inteval->stack[((hsi*105+7940)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+46465)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+28330)*1+lsi)*1]), &(inteval->stack[((hsi*780+46465)*1+lsi)*1]), &(inteval->stack[((hsi*660+8045)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+7585)*1+lsi)*1]), &(inteval->stack[((hsi*78+7676)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+7480)*1+lsi)*1]), &(inteval->stack[((hsi*91+7585)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+7676)*1+lsi)*1]), &(inteval->stack[((hsi*66+7754)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+47245)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+7360)*1+lsi)*1]), &(inteval->stack[((hsi*105+7480)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+47905)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+27340)*1+lsi)*1]), &(inteval->stack[((hsi*780+47905)*1+lsi)*1]), &(inteval->stack[((hsi*660+47245)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+7125)*1+lsi)*1]), &(inteval->stack[((hsi*78+7216)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+7020)*1+lsi)*1]), &(inteval->stack[((hsi*91+7125)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+7360)*1+lsi)*1]), &(inteval->stack[((hsi*78+7216)*1+lsi)*1]), &(inteval->stack[((hsi*66+7294)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37225)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+7360)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+7125)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+6900)*1+lsi)*1]), &(inteval->stack[((hsi*105+7020)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+48685)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+26350)*1+lsi)*1]), &(inteval->stack[((hsi*780+48685)*1+lsi)*1]), &(inteval->stack[((hsi*660+7125)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+6665)*1+lsi)*1]), &(inteval->stack[((hsi*78+6756)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+6560)*1+lsi)*1]), &(inteval->stack[((hsi*91+6665)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+6756)*1+lsi)*1]), &(inteval->stack[((hsi*66+6834)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+49465)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+6440)*1+lsi)*1]), &(inteval->stack[((hsi*105+6560)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+50125)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+25360)*1+lsi)*1]), &(inteval->stack[((hsi*780+50125)*1+lsi)*1]), &(inteval->stack[((hsi*660+49465)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+6205)*1+lsi)*1]), &(inteval->stack[((hsi*78+6296)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+6100)*1+lsi)*1]), &(inteval->stack[((hsi*91+6205)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+6440)*1+lsi)*1]), &(inteval->stack[((hsi*78+6296)*1+lsi)*1]), &(inteval->stack[((hsi*66+6374)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37225)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+6440)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+6205)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+5980)*1+lsi)*1]), &(inteval->stack[((hsi*105+6100)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+50905)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+24370)*1+lsi)*1]), &(inteval->stack[((hsi*780+50905)*1+lsi)*1]), &(inteval->stack[((hsi*660+6205)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+5745)*1+lsi)*1]), &(inteval->stack[((hsi*78+5836)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+5640)*1+lsi)*1]), &(inteval->stack[((hsi*91+5745)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+5836)*1+lsi)*1]), &(inteval->stack[((hsi*66+5914)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+51685)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+5520)*1+lsi)*1]), &(inteval->stack[((hsi*105+5640)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+52345)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+23380)*1+lsi)*1]), &(inteval->stack[((hsi*780+52345)*1+lsi)*1]), &(inteval->stack[((hsi*660+51685)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+5285)*1+lsi)*1]), &(inteval->stack[((hsi*78+5376)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+5180)*1+lsi)*1]), &(inteval->stack[((hsi*91+5285)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+5520)*1+lsi)*1]), &(inteval->stack[((hsi*78+5376)*1+lsi)*1]), &(inteval->stack[((hsi*66+5454)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37225)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+5520)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+5285)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+5060)*1+lsi)*1]), &(inteval->stack[((hsi*105+5180)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+53125)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+22390)*1+lsi)*1]), &(inteval->stack[((hsi*780+53125)*1+lsi)*1]), &(inteval->stack[((hsi*660+5285)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+4825)*1+lsi)*1]), &(inteval->stack[((hsi*78+4916)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+4720)*1+lsi)*1]), &(inteval->stack[((hsi*91+4825)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+4916)*1+lsi)*1]), &(inteval->stack[((hsi*66+4994)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+53905)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+4600)*1+lsi)*1]), &(inteval->stack[((hsi*105+4720)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+54565)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+21400)*1+lsi)*1]), &(inteval->stack[((hsi*780+54565)*1+lsi)*1]), &(inteval->stack[((hsi*660+53905)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+4365)*1+lsi)*1]), &(inteval->stack[((hsi*78+4456)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+4260)*1+lsi)*1]), &(inteval->stack[((hsi*91+4365)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+4600)*1+lsi)*1]), &(inteval->stack[((hsi*78+4456)*1+lsi)*1]), &(inteval->stack[((hsi*66+4534)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37225)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+4600)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+4365)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+4140)*1+lsi)*1]), &(inteval->stack[((hsi*105+4260)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+55345)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+20410)*1+lsi)*1]), &(inteval->stack[((hsi*780+55345)*1+lsi)*1]), &(inteval->stack[((hsi*660+4365)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+3905)*1+lsi)*1]), &(inteval->stack[((hsi*78+3996)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+3800)*1+lsi)*1]), &(inteval->stack[((hsi*91+3905)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+3996)*1+lsi)*1]), &(inteval->stack[((hsi*66+4074)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+56125)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+3680)*1+lsi)*1]), &(inteval->stack[((hsi*105+3800)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+56785)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+19420)*1+lsi)*1]), &(inteval->stack[((hsi*780+56785)*1+lsi)*1]), &(inteval->stack[((hsi*660+56125)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+3445)*1+lsi)*1]), &(inteval->stack[((hsi*78+3536)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+3340)*1+lsi)*1]), &(inteval->stack[((hsi*91+3445)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+3680)*1+lsi)*1]), &(inteval->stack[((hsi*78+3536)*1+lsi)*1]), &(inteval->stack[((hsi*66+3614)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37225)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+3680)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+3445)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+3220)*1+lsi)*1]), &(inteval->stack[((hsi*105+3340)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+57565)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+18430)*1+lsi)*1]), &(inteval->stack[((hsi*780+57565)*1+lsi)*1]), &(inteval->stack[((hsi*660+3445)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+2985)*1+lsi)*1]), &(inteval->stack[((hsi*78+3076)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+2880)*1+lsi)*1]), &(inteval->stack[((hsi*91+2985)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+3076)*1+lsi)*1]), &(inteval->stack[((hsi*66+3154)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+58345)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+2760)*1+lsi)*1]), &(inteval->stack[((hsi*105+2880)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+59005)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+17440)*1+lsi)*1]), &(inteval->stack[((hsi*780+59005)*1+lsi)*1]), &(inteval->stack[((hsi*660+58345)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+2525)*1+lsi)*1]), &(inteval->stack[((hsi*78+2616)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+2420)*1+lsi)*1]), &(inteval->stack[((hsi*91+2525)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+2760)*1+lsi)*1]), &(inteval->stack[((hsi*78+2616)*1+lsi)*1]), &(inteval->stack[((hsi*66+2694)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37225)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+2760)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+2525)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+2300)*1+lsi)*1]), &(inteval->stack[((hsi*105+2420)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+59785)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+16450)*1+lsi)*1]), &(inteval->stack[((hsi*780+59785)*1+lsi)*1]), &(inteval->stack[((hsi*660+2525)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+2065)*1+lsi)*1]), &(inteval->stack[((hsi*78+2156)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+1960)*1+lsi)*1]), &(inteval->stack[((hsi*91+2065)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+2156)*1+lsi)*1]), &(inteval->stack[((hsi*66+2234)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+60565)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+1840)*1+lsi)*1]), &(inteval->stack[((hsi*105+1960)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+61225)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+15460)*1+lsi)*1]), &(inteval->stack[((hsi*780+61225)*1+lsi)*1]), &(inteval->stack[((hsi*660+60565)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+1605)*1+lsi)*1]), &(inteval->stack[((hsi*78+1696)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+1500)*1+lsi)*1]), &(inteval->stack[((hsi*91+1605)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+1840)*1+lsi)*1]), &(inteval->stack[((hsi*78+1696)*1+lsi)*1]), &(inteval->stack[((hsi*66+1774)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37225)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+1840)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+1605)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+1380)*1+lsi)*1]), &(inteval->stack[((hsi*105+1500)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+62005)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+14470)*1+lsi)*1]), &(inteval->stack[((hsi*780+62005)*1+lsi)*1]), &(inteval->stack[((hsi*660+1605)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+1145)*1+lsi)*1]), &(inteval->stack[((hsi*78+1236)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+1040)*1+lsi)*1]), &(inteval->stack[((hsi*91+1145)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+1236)*1+lsi)*1]), &(inteval->stack[((hsi*66+1314)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+62785)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+920)*1+lsi)*1]), &(inteval->stack[((hsi*105+1040)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+63445)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+13480)*1+lsi)*1]), &(inteval->stack[((hsi*780+63445)*1+lsi)*1]), &(inteval->stack[((hsi*660+62785)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+685)*1+lsi)*1]), &(inteval->stack[((hsi*78+776)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+580)*1+lsi)*1]), &(inteval->stack[((hsi*91+685)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+920)*1+lsi)*1]), &(inteval->stack[((hsi*78+776)*1+lsi)*1]), &(inteval->stack[((hsi*66+854)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37225)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+920)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+685)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+460)*1+lsi)*1]), &(inteval->stack[((hsi*105+580)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+64225)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+12490)*1+lsi)*1]), &(inteval->stack[((hsi*780+64225)*1+lsi)*1]), &(inteval->stack[((hsi*660+685)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*91+225)*1+lsi)*1]), &(inteval->stack[((hsi*78+316)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*105+120)*1+lsi)*1]), &(inteval->stack[((hsi*91+225)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37225)*1+lsi)*1]), &(inteval->stack[((hsi*78+316)*1+lsi)*1]), &(inteval->stack[((hsi*66+394)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37423)*1+lsi)*1]), &(inteval->stack[((hsi*234+36250)*1+lsi)*1]), &(inteval->stack[((hsi*198+37225)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+65005)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]), &(inteval->stack[((hsi*396+37423)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*120+0)*1+lsi)*1]), &(inteval->stack[((hsi*105+120)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*315+37225)*1+lsi)*1]), &(inteval->stack[((hsi*273+36484)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+65665)*1+lsi)*1]), &(inteval->stack[((hsi*546+38479)*1+lsi)*1]), &(inteval->stack[((hsi*468+36757)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+11500)*1+lsi)*1]), &(inteval->stack[((hsi*780+65665)*1+lsi)*1]), &(inteval->stack[((hsi*660+65005)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*990+11500)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*990+12490)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*990+13480)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*990+14470)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*990+15460)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*990+16450)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*990+17440)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*990+18430)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*990+19420)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*990+20410)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*990+21400)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*990+22390)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*990+23380)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*990+24370)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*990+25360)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*990+26350)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*990+27340)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*990+28330)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*990+29320)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*990+30310)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*990+31300)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*990+32290)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*990+33280)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*990+34270)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*990+35260)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
