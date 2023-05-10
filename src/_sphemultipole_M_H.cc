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
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psp.h>
#include <_sphemultipole_M_H_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_M_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,12875)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_M_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+41750)*1+lsi)*1]), &(inteval->stack[((hsi*78+12676)*1+lsi)*1]), &(inteval->stack[((hsi*66+12754)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+41948)*1+lsi)*1]), &(inteval->stack[((hsi*91+12585)*1+lsi)*1]), &(inteval->stack[((hsi*78+12676)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+42182)*1+lsi)*1]), &(inteval->stack[((hsi*234+41948)*1+lsi)*1]), &(inteval->stack[((hsi*198+41750)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+42578)*1+lsi)*1]), &(inteval->stack[((hsi*105+12480)*1+lsi)*1]), &(inteval->stack[((hsi*91+12585)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+42851)*1+lsi)*1]), &(inteval->stack[((hsi*273+42578)*1+lsi)*1]), &(inteval->stack[((hsi*234+41948)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+43319)*1+lsi)*1]), &(inteval->stack[((hsi*468+42851)*1+lsi)*1]), &(inteval->stack[((hsi*396+42182)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+41948)*1+lsi)*1]), &(inteval->stack[((hsi*66+12754)*1+lsi)*1]), &(inteval->stack[((hsi*55+12820)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+43979)*1+lsi)*1]), &(inteval->stack[((hsi*198+41750)*1+lsi)*1]), &(inteval->stack[((hsi*165+41948)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+44309)*1+lsi)*1]), &(inteval->stack[((hsi*396+42182)*1+lsi)*1]), &(inteval->stack[((hsi*330+43979)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+41750)*1+lsi)*1]), &(inteval->stack[((hsi*660+43319)*1+lsi)*1]), &(inteval->stack[((hsi*550+44309)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+43979)*1+lsi)*1]), &(inteval->stack[((hsi*120+12360)*1+lsi)*1]), &(inteval->stack[((hsi*105+12480)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+44294)*1+lsi)*1]), &(inteval->stack[((hsi*315+43979)*1+lsi)*1]), &(inteval->stack[((hsi*273+42578)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+44840)*1+lsi)*1]), &(inteval->stack[((hsi*546+44294)*1+lsi)*1]), &(inteval->stack[((hsi*468+42851)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+45620)*1+lsi)*1]), &(inteval->stack[((hsi*780+44840)*1+lsi)*1]), &(inteval->stack[((hsi*660+43319)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+40595)*1+lsi)*1]), &(inteval->stack[((hsi*990+45620)*1+lsi)*1]), &(inteval->stack[((hsi*825+41750)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+42575)*1+lsi)*1]), &(inteval->stack[((hsi*78+12161)*1+lsi)*1]), &(inteval->stack[((hsi*66+12239)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+42773)*1+lsi)*1]), &(inteval->stack[((hsi*91+12070)*1+lsi)*1]), &(inteval->stack[((hsi*78+12161)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+43007)*1+lsi)*1]), &(inteval->stack[((hsi*234+42773)*1+lsi)*1]), &(inteval->stack[((hsi*198+42575)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+43403)*1+lsi)*1]), &(inteval->stack[((hsi*105+11965)*1+lsi)*1]), &(inteval->stack[((hsi*91+12070)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+43676)*1+lsi)*1]), &(inteval->stack[((hsi*273+43403)*1+lsi)*1]), &(inteval->stack[((hsi*234+42773)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+44144)*1+lsi)*1]), &(inteval->stack[((hsi*468+43676)*1+lsi)*1]), &(inteval->stack[((hsi*396+43007)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+44804)*1+lsi)*1]), &(inteval->stack[((hsi*66+12239)*1+lsi)*1]), &(inteval->stack[((hsi*55+12305)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+12070)*1+lsi)*1]), &(inteval->stack[((hsi*198+42575)*1+lsi)*1]), &(inteval->stack[((hsi*165+44804)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+44804)*1+lsi)*1]), &(inteval->stack[((hsi*396+43007)*1+lsi)*1]), &(inteval->stack[((hsi*330+12070)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+42575)*1+lsi)*1]), &(inteval->stack[((hsi*660+44144)*1+lsi)*1]), &(inteval->stack[((hsi*550+44804)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+44804)*1+lsi)*1]), &(inteval->stack[((hsi*120+11845)*1+lsi)*1]), &(inteval->stack[((hsi*105+11965)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+11845)*1+lsi)*1]), &(inteval->stack[((hsi*315+44804)*1+lsi)*1]), &(inteval->stack[((hsi*273+43403)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+44804)*1+lsi)*1]), &(inteval->stack[((hsi*546+11845)*1+lsi)*1]), &(inteval->stack[((hsi*468+43676)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+11845)*1+lsi)*1]), &(inteval->stack[((hsi*780+44804)*1+lsi)*1]), &(inteval->stack[((hsi*660+44144)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+39440)*1+lsi)*1]), &(inteval->stack[((hsi*990+11845)*1+lsi)*1]), &(inteval->stack[((hsi*825+42575)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+43400)*1+lsi)*1]), &(inteval->stack[((hsi*78+11646)*1+lsi)*1]), &(inteval->stack[((hsi*66+11724)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+43598)*1+lsi)*1]), &(inteval->stack[((hsi*91+11555)*1+lsi)*1]), &(inteval->stack[((hsi*78+11646)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+43832)*1+lsi)*1]), &(inteval->stack[((hsi*234+43598)*1+lsi)*1]), &(inteval->stack[((hsi*198+43400)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+44228)*1+lsi)*1]), &(inteval->stack[((hsi*105+11450)*1+lsi)*1]), &(inteval->stack[((hsi*91+11555)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+44501)*1+lsi)*1]), &(inteval->stack[((hsi*273+44228)*1+lsi)*1]), &(inteval->stack[((hsi*234+43598)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+46610)*1+lsi)*1]), &(inteval->stack[((hsi*468+44501)*1+lsi)*1]), &(inteval->stack[((hsi*396+43832)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+44969)*1+lsi)*1]), &(inteval->stack[((hsi*66+11724)*1+lsi)*1]), &(inteval->stack[((hsi*55+11790)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+45134)*1+lsi)*1]), &(inteval->stack[((hsi*198+43400)*1+lsi)*1]), &(inteval->stack[((hsi*165+44969)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+47270)*1+lsi)*1]), &(inteval->stack[((hsi*396+43832)*1+lsi)*1]), &(inteval->stack[((hsi*330+45134)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+43400)*1+lsi)*1]), &(inteval->stack[((hsi*660+46610)*1+lsi)*1]), &(inteval->stack[((hsi*550+47270)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+44969)*1+lsi)*1]), &(inteval->stack[((hsi*120+11330)*1+lsi)*1]), &(inteval->stack[((hsi*105+11450)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+47270)*1+lsi)*1]), &(inteval->stack[((hsi*315+44969)*1+lsi)*1]), &(inteval->stack[((hsi*273+44228)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+47816)*1+lsi)*1]), &(inteval->stack[((hsi*546+47270)*1+lsi)*1]), &(inteval->stack[((hsi*468+44501)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+44225)*1+lsi)*1]), &(inteval->stack[((hsi*780+47816)*1+lsi)*1]), &(inteval->stack[((hsi*660+46610)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+38285)*1+lsi)*1]), &(inteval->stack[((hsi*990+44225)*1+lsi)*1]), &(inteval->stack[((hsi*825+43400)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+11330)*1+lsi)*1]), &(inteval->stack[((hsi*78+11131)*1+lsi)*1]), &(inteval->stack[((hsi*66+11209)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+45215)*1+lsi)*1]), &(inteval->stack[((hsi*91+11040)*1+lsi)*1]), &(inteval->stack[((hsi*78+11131)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+46610)*1+lsi)*1]), &(inteval->stack[((hsi*234+45215)*1+lsi)*1]), &(inteval->stack[((hsi*198+11330)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+11528)*1+lsi)*1]), &(inteval->stack[((hsi*105+10935)*1+lsi)*1]), &(inteval->stack[((hsi*91+11040)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+47006)*1+lsi)*1]), &(inteval->stack[((hsi*273+11528)*1+lsi)*1]), &(inteval->stack[((hsi*234+45215)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+47474)*1+lsi)*1]), &(inteval->stack[((hsi*468+47006)*1+lsi)*1]), &(inteval->stack[((hsi*396+46610)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+45215)*1+lsi)*1]), &(inteval->stack[((hsi*66+11209)*1+lsi)*1]), &(inteval->stack[((hsi*55+11275)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+48134)*1+lsi)*1]), &(inteval->stack[((hsi*198+11330)*1+lsi)*1]), &(inteval->stack[((hsi*165+45215)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+48464)*1+lsi)*1]), &(inteval->stack[((hsi*396+46610)*1+lsi)*1]), &(inteval->stack[((hsi*330+48134)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+49014)*1+lsi)*1]), &(inteval->stack[((hsi*660+47474)*1+lsi)*1]), &(inteval->stack[((hsi*550+48464)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+48134)*1+lsi)*1]), &(inteval->stack[((hsi*120+10815)*1+lsi)*1]), &(inteval->stack[((hsi*105+10935)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+10815)*1+lsi)*1]), &(inteval->stack[((hsi*315+48134)*1+lsi)*1]), &(inteval->stack[((hsi*273+11528)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+48134)*1+lsi)*1]), &(inteval->stack[((hsi*546+10815)*1+lsi)*1]), &(inteval->stack[((hsi*468+47006)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+10815)*1+lsi)*1]), &(inteval->stack[((hsi*780+48134)*1+lsi)*1]), &(inteval->stack[((hsi*660+47474)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+37130)*1+lsi)*1]), &(inteval->stack[((hsi*990+10815)*1+lsi)*1]), &(inteval->stack[((hsi*825+49014)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+46610)*1+lsi)*1]), &(inteval->stack[((hsi*78+10616)*1+lsi)*1]), &(inteval->stack[((hsi*66+10694)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+46808)*1+lsi)*1]), &(inteval->stack[((hsi*91+10525)*1+lsi)*1]), &(inteval->stack[((hsi*78+10616)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+47042)*1+lsi)*1]), &(inteval->stack[((hsi*234+46808)*1+lsi)*1]), &(inteval->stack[((hsi*198+46610)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+47438)*1+lsi)*1]), &(inteval->stack[((hsi*105+10420)*1+lsi)*1]), &(inteval->stack[((hsi*91+10525)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+47711)*1+lsi)*1]), &(inteval->stack[((hsi*273+47438)*1+lsi)*1]), &(inteval->stack[((hsi*234+46808)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+48179)*1+lsi)*1]), &(inteval->stack[((hsi*468+47711)*1+lsi)*1]), &(inteval->stack[((hsi*396+47042)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+45215)*1+lsi)*1]), &(inteval->stack[((hsi*66+10694)*1+lsi)*1]), &(inteval->stack[((hsi*55+10760)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+49839)*1+lsi)*1]), &(inteval->stack[((hsi*198+46610)*1+lsi)*1]), &(inteval->stack[((hsi*165+45215)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+50169)*1+lsi)*1]), &(inteval->stack[((hsi*396+47042)*1+lsi)*1]), &(inteval->stack[((hsi*330+49839)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+46610)*1+lsi)*1]), &(inteval->stack[((hsi*660+48179)*1+lsi)*1]), &(inteval->stack[((hsi*550+50169)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+45215)*1+lsi)*1]), &(inteval->stack[((hsi*120+10300)*1+lsi)*1]), &(inteval->stack[((hsi*105+10420)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+49839)*1+lsi)*1]), &(inteval->stack[((hsi*315+45215)*1+lsi)*1]), &(inteval->stack[((hsi*273+47438)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+50385)*1+lsi)*1]), &(inteval->stack[((hsi*546+49839)*1+lsi)*1]), &(inteval->stack[((hsi*468+47711)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+51165)*1+lsi)*1]), &(inteval->stack[((hsi*780+50385)*1+lsi)*1]), &(inteval->stack[((hsi*660+48179)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+35975)*1+lsi)*1]), &(inteval->stack[((hsi*990+51165)*1+lsi)*1]), &(inteval->stack[((hsi*825+46610)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+47435)*1+lsi)*1]), &(inteval->stack[((hsi*78+10101)*1+lsi)*1]), &(inteval->stack[((hsi*66+10179)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+47633)*1+lsi)*1]), &(inteval->stack[((hsi*91+10010)*1+lsi)*1]), &(inteval->stack[((hsi*78+10101)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+49839)*1+lsi)*1]), &(inteval->stack[((hsi*234+47633)*1+lsi)*1]), &(inteval->stack[((hsi*198+47435)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+47867)*1+lsi)*1]), &(inteval->stack[((hsi*105+9905)*1+lsi)*1]), &(inteval->stack[((hsi*91+10010)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+50235)*1+lsi)*1]), &(inteval->stack[((hsi*273+47867)*1+lsi)*1]), &(inteval->stack[((hsi*234+47633)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+48140)*1+lsi)*1]), &(inteval->stack[((hsi*468+50235)*1+lsi)*1]), &(inteval->stack[((hsi*396+49839)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+10300)*1+lsi)*1]), &(inteval->stack[((hsi*66+10179)*1+lsi)*1]), &(inteval->stack[((hsi*55+10245)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+50703)*1+lsi)*1]), &(inteval->stack[((hsi*198+47435)*1+lsi)*1]), &(inteval->stack[((hsi*165+10300)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+10010)*1+lsi)*1]), &(inteval->stack[((hsi*396+49839)*1+lsi)*1]), &(inteval->stack[((hsi*330+50703)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+52155)*1+lsi)*1]), &(inteval->stack[((hsi*660+48140)*1+lsi)*1]), &(inteval->stack[((hsi*550+10010)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+10010)*1+lsi)*1]), &(inteval->stack[((hsi*120+9785)*1+lsi)*1]), &(inteval->stack[((hsi*105+9905)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+52980)*1+lsi)*1]), &(inteval->stack[((hsi*315+10010)*1+lsi)*1]), &(inteval->stack[((hsi*273+47867)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+9785)*1+lsi)*1]), &(inteval->stack[((hsi*546+52980)*1+lsi)*1]), &(inteval->stack[((hsi*468+50235)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+49839)*1+lsi)*1]), &(inteval->stack[((hsi*780+9785)*1+lsi)*1]), &(inteval->stack[((hsi*660+48140)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+34820)*1+lsi)*1]), &(inteval->stack[((hsi*990+49839)*1+lsi)*1]), &(inteval->stack[((hsi*825+52155)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+47435)*1+lsi)*1]), &(inteval->stack[((hsi*78+9586)*1+lsi)*1]), &(inteval->stack[((hsi*66+9664)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+47633)*1+lsi)*1]), &(inteval->stack[((hsi*91+9495)*1+lsi)*1]), &(inteval->stack[((hsi*78+9586)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+47867)*1+lsi)*1]), &(inteval->stack[((hsi*234+47633)*1+lsi)*1]), &(inteval->stack[((hsi*198+47435)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+9785)*1+lsi)*1]), &(inteval->stack[((hsi*105+9390)*1+lsi)*1]), &(inteval->stack[((hsi*91+9495)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+10058)*1+lsi)*1]), &(inteval->stack[((hsi*273+9785)*1+lsi)*1]), &(inteval->stack[((hsi*234+47633)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+48263)*1+lsi)*1]), &(inteval->stack[((hsi*468+10058)*1+lsi)*1]), &(inteval->stack[((hsi*396+47867)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+45215)*1+lsi)*1]), &(inteval->stack[((hsi*66+9664)*1+lsi)*1]), &(inteval->stack[((hsi*55+9730)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+50829)*1+lsi)*1]), &(inteval->stack[((hsi*198+47435)*1+lsi)*1]), &(inteval->stack[((hsi*165+45215)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+52980)*1+lsi)*1]), &(inteval->stack[((hsi*396+47867)*1+lsi)*1]), &(inteval->stack[((hsi*330+50829)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+47435)*1+lsi)*1]), &(inteval->stack[((hsi*660+48263)*1+lsi)*1]), &(inteval->stack[((hsi*550+52980)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+45215)*1+lsi)*1]), &(inteval->stack[((hsi*120+9270)*1+lsi)*1]), &(inteval->stack[((hsi*105+9390)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+52980)*1+lsi)*1]), &(inteval->stack[((hsi*315+45215)*1+lsi)*1]), &(inteval->stack[((hsi*273+9785)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+9270)*1+lsi)*1]), &(inteval->stack[((hsi*546+52980)*1+lsi)*1]), &(inteval->stack[((hsi*468+10058)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+52980)*1+lsi)*1]), &(inteval->stack[((hsi*780+9270)*1+lsi)*1]), &(inteval->stack[((hsi*660+48263)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+33665)*1+lsi)*1]), &(inteval->stack[((hsi*990+52980)*1+lsi)*1]), &(inteval->stack[((hsi*825+47435)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+9270)*1+lsi)*1]), &(inteval->stack[((hsi*78+9071)*1+lsi)*1]), &(inteval->stack[((hsi*66+9149)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+9468)*1+lsi)*1]), &(inteval->stack[((hsi*91+8980)*1+lsi)*1]), &(inteval->stack[((hsi*78+9071)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+9702)*1+lsi)*1]), &(inteval->stack[((hsi*234+9468)*1+lsi)*1]), &(inteval->stack[((hsi*198+9270)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+48260)*1+lsi)*1]), &(inteval->stack[((hsi*105+8875)*1+lsi)*1]), &(inteval->stack[((hsi*91+8980)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+10098)*1+lsi)*1]), &(inteval->stack[((hsi*273+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+9468)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+53970)*1+lsi)*1]), &(inteval->stack[((hsi*468+10098)*1+lsi)*1]), &(inteval->stack[((hsi*396+9702)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+48533)*1+lsi)*1]), &(inteval->stack[((hsi*66+9149)*1+lsi)*1]), &(inteval->stack[((hsi*55+9215)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+45215)*1+lsi)*1]), &(inteval->stack[((hsi*198+9270)*1+lsi)*1]), &(inteval->stack[((hsi*165+48533)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+8980)*1+lsi)*1]), &(inteval->stack[((hsi*396+9702)*1+lsi)*1]), &(inteval->stack[((hsi*330+45215)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+54630)*1+lsi)*1]), &(inteval->stack[((hsi*660+53970)*1+lsi)*1]), &(inteval->stack[((hsi*550+8980)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+8980)*1+lsi)*1]), &(inteval->stack[((hsi*120+8755)*1+lsi)*1]), &(inteval->stack[((hsi*105+8875)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+9295)*1+lsi)*1]), &(inteval->stack[((hsi*315+8980)*1+lsi)*1]), &(inteval->stack[((hsi*273+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+55455)*1+lsi)*1]), &(inteval->stack[((hsi*546+9295)*1+lsi)*1]), &(inteval->stack[((hsi*468+10098)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+8755)*1+lsi)*1]), &(inteval->stack[((hsi*780+55455)*1+lsi)*1]), &(inteval->stack[((hsi*660+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+32510)*1+lsi)*1]), &(inteval->stack[((hsi*990+8755)*1+lsi)*1]), &(inteval->stack[((hsi*825+54630)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+9745)*1+lsi)*1]), &(inteval->stack[((hsi*78+8556)*1+lsi)*1]), &(inteval->stack[((hsi*66+8634)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+9943)*1+lsi)*1]), &(inteval->stack[((hsi*91+8465)*1+lsi)*1]), &(inteval->stack[((hsi*78+8556)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+9943)*1+lsi)*1]), &(inteval->stack[((hsi*198+9745)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+53970)*1+lsi)*1]), &(inteval->stack[((hsi*105+8360)*1+lsi)*1]), &(inteval->stack[((hsi*91+8465)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+10177)*1+lsi)*1]), &(inteval->stack[((hsi*273+53970)*1+lsi)*1]), &(inteval->stack[((hsi*234+9943)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+55455)*1+lsi)*1]), &(inteval->stack[((hsi*468+10177)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+45215)*1+lsi)*1]), &(inteval->stack[((hsi*66+8634)*1+lsi)*1]), &(inteval->stack[((hsi*55+8700)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+54243)*1+lsi)*1]), &(inteval->stack[((hsi*198+9745)*1+lsi)*1]), &(inteval->stack[((hsi*165+45215)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+56115)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*330+54243)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+56665)*1+lsi)*1]), &(inteval->stack[((hsi*660+55455)*1+lsi)*1]), &(inteval->stack[((hsi*550+56115)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+48260)*1+lsi)*1]), &(inteval->stack[((hsi*120+8240)*1+lsi)*1]), &(inteval->stack[((hsi*105+8360)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+56115)*1+lsi)*1]), &(inteval->stack[((hsi*315+48260)*1+lsi)*1]), &(inteval->stack[((hsi*273+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+57490)*1+lsi)*1]), &(inteval->stack[((hsi*546+56115)*1+lsi)*1]), &(inteval->stack[((hsi*468+10177)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+9745)*1+lsi)*1]), &(inteval->stack[((hsi*780+57490)*1+lsi)*1]), &(inteval->stack[((hsi*660+55455)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+31355)*1+lsi)*1]), &(inteval->stack[((hsi*990+9745)*1+lsi)*1]), &(inteval->stack[((hsi*825+56665)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+55455)*1+lsi)*1]), &(inteval->stack[((hsi*78+8041)*1+lsi)*1]), &(inteval->stack[((hsi*66+8119)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+55653)*1+lsi)*1]), &(inteval->stack[((hsi*91+7950)*1+lsi)*1]), &(inteval->stack[((hsi*78+8041)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+55887)*1+lsi)*1]), &(inteval->stack[((hsi*234+55653)*1+lsi)*1]), &(inteval->stack[((hsi*198+55455)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+48260)*1+lsi)*1]), &(inteval->stack[((hsi*105+7845)*1+lsi)*1]), &(inteval->stack[((hsi*91+7950)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+53970)*1+lsi)*1]), &(inteval->stack[((hsi*273+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+55653)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+57490)*1+lsi)*1]), &(inteval->stack[((hsi*468+53970)*1+lsi)*1]), &(inteval->stack[((hsi*396+55887)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+8240)*1+lsi)*1]), &(inteval->stack[((hsi*66+8119)*1+lsi)*1]), &(inteval->stack[((hsi*55+8185)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+48533)*1+lsi)*1]), &(inteval->stack[((hsi*198+55455)*1+lsi)*1]), &(inteval->stack[((hsi*165+8240)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+7950)*1+lsi)*1]), &(inteval->stack[((hsi*396+55887)*1+lsi)*1]), &(inteval->stack[((hsi*330+48533)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+55455)*1+lsi)*1]), &(inteval->stack[((hsi*660+57490)*1+lsi)*1]), &(inteval->stack[((hsi*550+7950)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+7950)*1+lsi)*1]), &(inteval->stack[((hsi*120+7725)*1+lsi)*1]), &(inteval->stack[((hsi*105+7845)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+58150)*1+lsi)*1]), &(inteval->stack[((hsi*315+7950)*1+lsi)*1]), &(inteval->stack[((hsi*273+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+7725)*1+lsi)*1]), &(inteval->stack[((hsi*546+58150)*1+lsi)*1]), &(inteval->stack[((hsi*468+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+58150)*1+lsi)*1]), &(inteval->stack[((hsi*780+7725)*1+lsi)*1]), &(inteval->stack[((hsi*660+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+30200)*1+lsi)*1]), &(inteval->stack[((hsi*990+58150)*1+lsi)*1]), &(inteval->stack[((hsi*825+55455)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+7725)*1+lsi)*1]), &(inteval->stack[((hsi*78+7526)*1+lsi)*1]), &(inteval->stack[((hsi*66+7604)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+7923)*1+lsi)*1]), &(inteval->stack[((hsi*91+7435)*1+lsi)*1]), &(inteval->stack[((hsi*78+7526)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+7923)*1+lsi)*1]), &(inteval->stack[((hsi*198+7725)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+57490)*1+lsi)*1]), &(inteval->stack[((hsi*105+7330)*1+lsi)*1]), &(inteval->stack[((hsi*91+7435)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+53970)*1+lsi)*1]), &(inteval->stack[((hsi*273+57490)*1+lsi)*1]), &(inteval->stack[((hsi*234+7923)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+7923)*1+lsi)*1]), &(inteval->stack[((hsi*468+53970)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+45215)*1+lsi)*1]), &(inteval->stack[((hsi*66+7604)*1+lsi)*1]), &(inteval->stack[((hsi*55+7670)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+57763)*1+lsi)*1]), &(inteval->stack[((hsi*198+7725)*1+lsi)*1]), &(inteval->stack[((hsi*165+45215)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+59140)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*330+57763)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+59690)*1+lsi)*1]), &(inteval->stack[((hsi*660+7923)*1+lsi)*1]), &(inteval->stack[((hsi*550+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+48260)*1+lsi)*1]), &(inteval->stack[((hsi*120+7210)*1+lsi)*1]), &(inteval->stack[((hsi*105+7330)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+7210)*1+lsi)*1]), &(inteval->stack[((hsi*315+48260)*1+lsi)*1]), &(inteval->stack[((hsi*273+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+60515)*1+lsi)*1]), &(inteval->stack[((hsi*546+7210)*1+lsi)*1]), &(inteval->stack[((hsi*468+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+61295)*1+lsi)*1]), &(inteval->stack[((hsi*780+60515)*1+lsi)*1]), &(inteval->stack[((hsi*660+7923)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+29045)*1+lsi)*1]), &(inteval->stack[((hsi*990+61295)*1+lsi)*1]), &(inteval->stack[((hsi*825+59690)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+7210)*1+lsi)*1]), &(inteval->stack[((hsi*78+7011)*1+lsi)*1]), &(inteval->stack[((hsi*66+7089)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+7408)*1+lsi)*1]), &(inteval->stack[((hsi*91+6920)*1+lsi)*1]), &(inteval->stack[((hsi*78+7011)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+7642)*1+lsi)*1]), &(inteval->stack[((hsi*234+7408)*1+lsi)*1]), &(inteval->stack[((hsi*198+7210)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+60515)*1+lsi)*1]), &(inteval->stack[((hsi*105+6815)*1+lsi)*1]), &(inteval->stack[((hsi*91+6920)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+48260)*1+lsi)*1]), &(inteval->stack[((hsi*273+60515)*1+lsi)*1]), &(inteval->stack[((hsi*234+7408)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+57490)*1+lsi)*1]), &(inteval->stack[((hsi*468+48260)*1+lsi)*1]), &(inteval->stack[((hsi*396+7642)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+8038)*1+lsi)*1]), &(inteval->stack[((hsi*66+7089)*1+lsi)*1]), &(inteval->stack[((hsi*55+7155)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+53970)*1+lsi)*1]), &(inteval->stack[((hsi*198+7210)*1+lsi)*1]), &(inteval->stack[((hsi*165+8038)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+59140)*1+lsi)*1]), &(inteval->stack[((hsi*396+7642)*1+lsi)*1]), &(inteval->stack[((hsi*330+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+6920)*1+lsi)*1]), &(inteval->stack[((hsi*660+57490)*1+lsi)*1]), &(inteval->stack[((hsi*550+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+7745)*1+lsi)*1]), &(inteval->stack[((hsi*120+6695)*1+lsi)*1]), &(inteval->stack[((hsi*105+6815)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+8060)*1+lsi)*1]), &(inteval->stack[((hsi*315+7745)*1+lsi)*1]), &(inteval->stack[((hsi*273+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+60515)*1+lsi)*1]), &(inteval->stack[((hsi*546+8060)*1+lsi)*1]), &(inteval->stack[((hsi*468+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+7745)*1+lsi)*1]), &(inteval->stack[((hsi*780+60515)*1+lsi)*1]), &(inteval->stack[((hsi*660+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+27890)*1+lsi)*1]), &(inteval->stack[((hsi*990+7745)*1+lsi)*1]), &(inteval->stack[((hsi*825+6920)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+60515)*1+lsi)*1]), &(inteval->stack[((hsi*78+6496)*1+lsi)*1]), &(inteval->stack[((hsi*66+6574)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+48260)*1+lsi)*1]), &(inteval->stack[((hsi*91+6405)*1+lsi)*1]), &(inteval->stack[((hsi*78+6496)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+57490)*1+lsi)*1]), &(inteval->stack[((hsi*234+48260)*1+lsi)*1]), &(inteval->stack[((hsi*198+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+53970)*1+lsi)*1]), &(inteval->stack[((hsi*105+6300)*1+lsi)*1]), &(inteval->stack[((hsi*91+6405)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+60713)*1+lsi)*1]), &(inteval->stack[((hsi*273+53970)*1+lsi)*1]), &(inteval->stack[((hsi*234+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+48260)*1+lsi)*1]), &(inteval->stack[((hsi*468+60713)*1+lsi)*1]), &(inteval->stack[((hsi*396+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+59140)*1+lsi)*1]), &(inteval->stack[((hsi*66+6574)*1+lsi)*1]), &(inteval->stack[((hsi*55+6640)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+6405)*1+lsi)*1]), &(inteval->stack[((hsi*198+60515)*1+lsi)*1]), &(inteval->stack[((hsi*165+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+59140)*1+lsi)*1]), &(inteval->stack[((hsi*396+57490)*1+lsi)*1]), &(inteval->stack[((hsi*330+6405)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+62285)*1+lsi)*1]), &(inteval->stack[((hsi*660+48260)*1+lsi)*1]), &(inteval->stack[((hsi*550+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+57490)*1+lsi)*1]), &(inteval->stack[((hsi*120+6180)*1+lsi)*1]), &(inteval->stack[((hsi*105+6300)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+6180)*1+lsi)*1]), &(inteval->stack[((hsi*315+57490)*1+lsi)*1]), &(inteval->stack[((hsi*273+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*546+6180)*1+lsi)*1]), &(inteval->stack[((hsi*468+60713)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+63890)*1+lsi)*1]), &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*660+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+26735)*1+lsi)*1]), &(inteval->stack[((hsi*990+63890)*1+lsi)*1]), &(inteval->stack[((hsi*825+62285)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*78+5981)*1+lsi)*1]), &(inteval->stack[((hsi*66+6059)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*91+5890)*1+lsi)*1]), &(inteval->stack[((hsi*78+5981)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+6180)*1+lsi)*1]), &(inteval->stack[((hsi*105+5785)*1+lsi)*1]), &(inteval->stack[((hsi*91+5890)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+57490)*1+lsi)*1]), &(inteval->stack[((hsi*273+6180)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+53970)*1+lsi)*1]), &(inteval->stack[((hsi*468+57490)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+60515)*1+lsi)*1]), &(inteval->stack[((hsi*66+6059)*1+lsi)*1]), &(inteval->stack[((hsi*55+6125)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+60680)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*165+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+59140)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*330+60680)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+64880)*1+lsi)*1]), &(inteval->stack[((hsi*660+53970)*1+lsi)*1]), &(inteval->stack[((hsi*550+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*120+5665)*1+lsi)*1]), &(inteval->stack[((hsi*105+5785)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+60515)*1+lsi)*1]), &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*273+6180)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*546+60515)*1+lsi)*1]), &(inteval->stack[((hsi*468+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+5665)*1+lsi)*1]), &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*660+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+25580)*1+lsi)*1]), &(inteval->stack[((hsi*990+5665)*1+lsi)*1]), &(inteval->stack[((hsi*825+64880)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*78+5466)*1+lsi)*1]), &(inteval->stack[((hsi*66+5544)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*91+5375)*1+lsi)*1]), &(inteval->stack[((hsi*78+5466)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+53970)*1+lsi)*1]), &(inteval->stack[((hsi*105+5270)*1+lsi)*1]), &(inteval->stack[((hsi*91+5375)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+57490)*1+lsi)*1]), &(inteval->stack[((hsi*273+53970)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*468+57490)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+63308)*1+lsi)*1]), &(inteval->stack[((hsi*66+5544)*1+lsi)*1]), &(inteval->stack[((hsi*55+5610)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+59140)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*165+63308)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+63110)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*330+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+65705)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*550+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*120+5150)*1+lsi)*1]), &(inteval->stack[((hsi*105+5270)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+48260)*1+lsi)*1]), &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*273+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*546+48260)*1+lsi)*1]), &(inteval->stack[((hsi*468+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+66530)*1+lsi)*1]), &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+24425)*1+lsi)*1]), &(inteval->stack[((hsi*990+66530)*1+lsi)*1]), &(inteval->stack[((hsi*825+65705)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*78+4951)*1+lsi)*1]), &(inteval->stack[((hsi*66+5029)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*91+4860)*1+lsi)*1]), &(inteval->stack[((hsi*78+4951)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+53970)*1+lsi)*1]), &(inteval->stack[((hsi*105+4755)*1+lsi)*1]), &(inteval->stack[((hsi*91+4860)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+57490)*1+lsi)*1]), &(inteval->stack[((hsi*273+53970)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*468+57490)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+63308)*1+lsi)*1]), &(inteval->stack[((hsi*66+5029)*1+lsi)*1]), &(inteval->stack[((hsi*55+5095)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+4860)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*165+63308)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+59140)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*330+4860)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+67520)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*550+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+4860)*1+lsi)*1]), &(inteval->stack[((hsi*120+4635)*1+lsi)*1]), &(inteval->stack[((hsi*105+4755)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+63110)*1+lsi)*1]), &(inteval->stack[((hsi*315+4860)*1+lsi)*1]), &(inteval->stack[((hsi*273+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+4635)*1+lsi)*1]), &(inteval->stack[((hsi*546+63110)*1+lsi)*1]), &(inteval->stack[((hsi*468+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+68345)*1+lsi)*1]), &(inteval->stack[((hsi*780+4635)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+23270)*1+lsi)*1]), &(inteval->stack[((hsi*990+68345)*1+lsi)*1]), &(inteval->stack[((hsi*825+67520)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+4635)*1+lsi)*1]), &(inteval->stack[((hsi*78+4436)*1+lsi)*1]), &(inteval->stack[((hsi*66+4514)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+4833)*1+lsi)*1]), &(inteval->stack[((hsi*91+4345)*1+lsi)*1]), &(inteval->stack[((hsi*78+4436)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+63110)*1+lsi)*1]), &(inteval->stack[((hsi*234+4833)*1+lsi)*1]), &(inteval->stack[((hsi*198+4635)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+60515)*1+lsi)*1]), &(inteval->stack[((hsi*105+4240)*1+lsi)*1]), &(inteval->stack[((hsi*91+4345)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+48260)*1+lsi)*1]), &(inteval->stack[((hsi*273+60515)*1+lsi)*1]), &(inteval->stack[((hsi*234+4833)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+53970)*1+lsi)*1]), &(inteval->stack[((hsi*468+48260)*1+lsi)*1]), &(inteval->stack[((hsi*396+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4833)*1+lsi)*1]), &(inteval->stack[((hsi*66+4514)*1+lsi)*1]), &(inteval->stack[((hsi*55+4580)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+4998)*1+lsi)*1]), &(inteval->stack[((hsi*198+4635)*1+lsi)*1]), &(inteval->stack[((hsi*165+4833)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+59140)*1+lsi)*1]), &(inteval->stack[((hsi*396+63110)*1+lsi)*1]), &(inteval->stack[((hsi*330+4998)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+4345)*1+lsi)*1]), &(inteval->stack[((hsi*660+53970)*1+lsi)*1]), &(inteval->stack[((hsi*550+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*120+4120)*1+lsi)*1]), &(inteval->stack[((hsi*105+4240)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+57490)*1+lsi)*1]), &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*273+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*546+57490)*1+lsi)*1]), &(inteval->stack[((hsi*468+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+69335)*1+lsi)*1]), &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*660+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+22115)*1+lsi)*1]), &(inteval->stack[((hsi*990+69335)*1+lsi)*1]), &(inteval->stack[((hsi*825+4345)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*78+3921)*1+lsi)*1]), &(inteval->stack[((hsi*66+3999)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*91+3830)*1+lsi)*1]), &(inteval->stack[((hsi*78+3921)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+53970)*1+lsi)*1]), &(inteval->stack[((hsi*105+3725)*1+lsi)*1]), &(inteval->stack[((hsi*91+3830)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+57490)*1+lsi)*1]), &(inteval->stack[((hsi*273+53970)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*468+57490)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+63308)*1+lsi)*1]), &(inteval->stack[((hsi*66+3999)*1+lsi)*1]), &(inteval->stack[((hsi*55+4065)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+59140)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*165+63308)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+63110)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*330+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+70325)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*550+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*120+3605)*1+lsi)*1]), &(inteval->stack[((hsi*105+3725)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+48260)*1+lsi)*1]), &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*273+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*546+48260)*1+lsi)*1]), &(inteval->stack[((hsi*468+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+71150)*1+lsi)*1]), &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+20960)*1+lsi)*1]), &(inteval->stack[((hsi*990+71150)*1+lsi)*1]), &(inteval->stack[((hsi*825+70325)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*78+3406)*1+lsi)*1]), &(inteval->stack[((hsi*66+3484)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*91+3315)*1+lsi)*1]), &(inteval->stack[((hsi*78+3406)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+3605)*1+lsi)*1]), &(inteval->stack[((hsi*105+3210)*1+lsi)*1]), &(inteval->stack[((hsi*91+3315)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+53970)*1+lsi)*1]), &(inteval->stack[((hsi*273+3605)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+57490)*1+lsi)*1]), &(inteval->stack[((hsi*468+53970)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+60515)*1+lsi)*1]), &(inteval->stack[((hsi*66+3484)*1+lsi)*1]), &(inteval->stack[((hsi*55+3550)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+60680)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*165+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+59140)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*330+60680)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+72140)*1+lsi)*1]), &(inteval->stack[((hsi*660+57490)*1+lsi)*1]), &(inteval->stack[((hsi*550+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*120+3090)*1+lsi)*1]), &(inteval->stack[((hsi*105+3210)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+60515)*1+lsi)*1]), &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*273+3605)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*546+60515)*1+lsi)*1]), &(inteval->stack[((hsi*468+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+3090)*1+lsi)*1]), &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*660+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+19805)*1+lsi)*1]), &(inteval->stack[((hsi*990+3090)*1+lsi)*1]), &(inteval->stack[((hsi*825+72140)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*78+2891)*1+lsi)*1]), &(inteval->stack[((hsi*66+2969)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*91+2800)*1+lsi)*1]), &(inteval->stack[((hsi*78+2891)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+57490)*1+lsi)*1]), &(inteval->stack[((hsi*105+2695)*1+lsi)*1]), &(inteval->stack[((hsi*91+2800)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+53970)*1+lsi)*1]), &(inteval->stack[((hsi*273+57490)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*468+53970)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+63308)*1+lsi)*1]), &(inteval->stack[((hsi*66+2969)*1+lsi)*1]), &(inteval->stack[((hsi*55+3035)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+59140)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*165+63308)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+63110)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*330+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+72965)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*550+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*120+2575)*1+lsi)*1]), &(inteval->stack[((hsi*105+2695)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+48260)*1+lsi)*1]), &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*273+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*546+48260)*1+lsi)*1]), &(inteval->stack[((hsi*468+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+73790)*1+lsi)*1]), &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+18650)*1+lsi)*1]), &(inteval->stack[((hsi*990+73790)*1+lsi)*1]), &(inteval->stack[((hsi*825+72965)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*78+2376)*1+lsi)*1]), &(inteval->stack[((hsi*66+2454)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*91+2285)*1+lsi)*1]), &(inteval->stack[((hsi*78+2376)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+57490)*1+lsi)*1]), &(inteval->stack[((hsi*105+2180)*1+lsi)*1]), &(inteval->stack[((hsi*91+2285)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+53970)*1+lsi)*1]), &(inteval->stack[((hsi*273+57490)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*468+53970)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+63308)*1+lsi)*1]), &(inteval->stack[((hsi*66+2454)*1+lsi)*1]), &(inteval->stack[((hsi*55+2520)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+2285)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*165+63308)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+59140)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*330+2285)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+74780)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*550+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+2285)*1+lsi)*1]), &(inteval->stack[((hsi*120+2060)*1+lsi)*1]), &(inteval->stack[((hsi*105+2180)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+63110)*1+lsi)*1]), &(inteval->stack[((hsi*315+2285)*1+lsi)*1]), &(inteval->stack[((hsi*273+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+2060)*1+lsi)*1]), &(inteval->stack[((hsi*546+63110)*1+lsi)*1]), &(inteval->stack[((hsi*468+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+75605)*1+lsi)*1]), &(inteval->stack[((hsi*780+2060)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+17495)*1+lsi)*1]), &(inteval->stack[((hsi*990+75605)*1+lsi)*1]), &(inteval->stack[((hsi*825+74780)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+2060)*1+lsi)*1]), &(inteval->stack[((hsi*78+1861)*1+lsi)*1]), &(inteval->stack[((hsi*66+1939)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+2258)*1+lsi)*1]), &(inteval->stack[((hsi*91+1770)*1+lsi)*1]), &(inteval->stack[((hsi*78+1861)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+63110)*1+lsi)*1]), &(inteval->stack[((hsi*234+2258)*1+lsi)*1]), &(inteval->stack[((hsi*198+2060)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+60515)*1+lsi)*1]), &(inteval->stack[((hsi*105+1665)*1+lsi)*1]), &(inteval->stack[((hsi*91+1770)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+48260)*1+lsi)*1]), &(inteval->stack[((hsi*273+60515)*1+lsi)*1]), &(inteval->stack[((hsi*234+2258)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+57490)*1+lsi)*1]), &(inteval->stack[((hsi*468+48260)*1+lsi)*1]), &(inteval->stack[((hsi*396+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+2258)*1+lsi)*1]), &(inteval->stack[((hsi*66+1939)*1+lsi)*1]), &(inteval->stack[((hsi*55+2005)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+2423)*1+lsi)*1]), &(inteval->stack[((hsi*198+2060)*1+lsi)*1]), &(inteval->stack[((hsi*165+2258)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+59140)*1+lsi)*1]), &(inteval->stack[((hsi*396+63110)*1+lsi)*1]), &(inteval->stack[((hsi*330+2423)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+1770)*1+lsi)*1]), &(inteval->stack[((hsi*660+57490)*1+lsi)*1]), &(inteval->stack[((hsi*550+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*120+1545)*1+lsi)*1]), &(inteval->stack[((hsi*105+1665)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+53970)*1+lsi)*1]), &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*273+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*546+53970)*1+lsi)*1]), &(inteval->stack[((hsi*468+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+76595)*1+lsi)*1]), &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*660+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+16340)*1+lsi)*1]), &(inteval->stack[((hsi*990+76595)*1+lsi)*1]), &(inteval->stack[((hsi*825+1770)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*78+1346)*1+lsi)*1]), &(inteval->stack[((hsi*66+1424)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*91+1255)*1+lsi)*1]), &(inteval->stack[((hsi*78+1346)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+57490)*1+lsi)*1]), &(inteval->stack[((hsi*105+1150)*1+lsi)*1]), &(inteval->stack[((hsi*91+1255)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+53970)*1+lsi)*1]), &(inteval->stack[((hsi*273+57490)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*468+53970)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+63308)*1+lsi)*1]), &(inteval->stack[((hsi*66+1424)*1+lsi)*1]), &(inteval->stack[((hsi*55+1490)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+59140)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*165+63308)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+63110)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*330+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+77585)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*550+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*120+1030)*1+lsi)*1]), &(inteval->stack[((hsi*105+1150)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+48260)*1+lsi)*1]), &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*273+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*546+48260)*1+lsi)*1]), &(inteval->stack[((hsi*468+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+78410)*1+lsi)*1]), &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+15185)*1+lsi)*1]), &(inteval->stack[((hsi*990+78410)*1+lsi)*1]), &(inteval->stack[((hsi*825+77585)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*78+831)*1+lsi)*1]), &(inteval->stack[((hsi*66+909)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*91+740)*1+lsi)*1]), &(inteval->stack[((hsi*78+831)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+1030)*1+lsi)*1]), &(inteval->stack[((hsi*105+635)*1+lsi)*1]), &(inteval->stack[((hsi*91+740)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+57490)*1+lsi)*1]), &(inteval->stack[((hsi*273+1030)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+53970)*1+lsi)*1]), &(inteval->stack[((hsi*468+57490)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+60515)*1+lsi)*1]), &(inteval->stack[((hsi*66+909)*1+lsi)*1]), &(inteval->stack[((hsi*55+975)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+60680)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*165+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+59140)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*330+60680)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+79400)*1+lsi)*1]), &(inteval->stack[((hsi*660+53970)*1+lsi)*1]), &(inteval->stack[((hsi*550+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*120+515)*1+lsi)*1]), &(inteval->stack[((hsi*105+635)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+60515)*1+lsi)*1]), &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*273+1030)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*546+60515)*1+lsi)*1]), &(inteval->stack[((hsi*468+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+515)*1+lsi)*1]), &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*660+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+14030)*1+lsi)*1]), &(inteval->stack[((hsi*990+515)*1+lsi)*1]), &(inteval->stack[((hsi*825+79400)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*78+316)*1+lsi)*1]), &(inteval->stack[((hsi*66+394)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*91+225)*1+lsi)*1]), &(inteval->stack[((hsi*78+316)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+53970)*1+lsi)*1]), &(inteval->stack[((hsi*105+120)*1+lsi)*1]), &(inteval->stack[((hsi*91+225)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+57490)*1+lsi)*1]), &(inteval->stack[((hsi*273+53970)*1+lsi)*1]), &(inteval->stack[((hsi*234+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*468+57490)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+63308)*1+lsi)*1]), &(inteval->stack[((hsi*66+394)*1+lsi)*1]), &(inteval->stack[((hsi*55+460)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+59140)*1+lsi)*1]), &(inteval->stack[((hsi*198+63110)*1+lsi)*1]), &(inteval->stack[((hsi*165+63308)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+63110)*1+lsi)*1]), &(inteval->stack[((hsi*396+48260)*1+lsi)*1]), &(inteval->stack[((hsi*330+59140)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+80225)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]), &(inteval->stack[((hsi*550+63110)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*120+0)*1+lsi)*1]), &(inteval->stack[((hsi*105+120)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+48260)*1+lsi)*1]), &(inteval->stack[((hsi*315+63110)*1+lsi)*1]), &(inteval->stack[((hsi*273+53970)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*546+48260)*1+lsi)*1]), &(inteval->stack[((hsi*468+57490)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+81050)*1+lsi)*1]), &(inteval->stack[((hsi*780+63110)*1+lsi)*1]), &(inteval->stack[((hsi*660+60515)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+12875)*1+lsi)*1]), &(inteval->stack[((hsi*990+81050)*1+lsi)*1]), &(inteval->stack[((hsi*825+80225)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1155+12875)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1155+14030)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1155+15185)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1155+16340)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1155+17495)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1155+18650)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1155+19805)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1155+20960)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1155+22115)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1155+23270)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1155+24425)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1155+25580)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*1155+26735)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*1155+27890)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*1155+29045)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*1155+30200)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*1155+31355)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*1155+32510)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*1155+33665)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*1155+34820)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*1155+35975)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*1155+37130)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*1155+38285)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*1155+39440)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*1155+40595)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
