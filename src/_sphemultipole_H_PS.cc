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
#include <HRRPart0ket0bra0pdf.h>
#include <HRRPart0ket0bra0pdp.h>
#include <HRRPart0ket0bra0pfd.h>
#include <HRRPart0ket0bra0pfp.h>
#include <HRRPart0ket0bra0pgp.h>
#include <HRRPart0ket0bra0ppd.h>
#include <HRRPart0ket0bra0ppf.h>
#include <HRRPart0ket0bra0ppg.h>
#include <HRRPart0ket0bra0ppp.h>
#include <HRRPart0ket0bra0psd.h>
#include <HRRPart0ket0bra0psf.h>
#include <HRRPart0ket0bra0psg.h>
#include <HRRPart0ket0bra0psh.h>
#include <HRRPart0ket0bra0psp.h>
#include <_sphemultipole_H_PS_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_H_PS(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,14900)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_H_PS_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+49550)*1+lsi)*1]), &(inteval->stack[((hsi*91+14665)*1+lsi)*1]), &(inteval->stack[((hsi*78+14756)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+49784)*1+lsi)*1]), &(inteval->stack[((hsi*105+14560)*1+lsi)*1]), &(inteval->stack[((hsi*91+14665)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+50057)*1+lsi)*1]), &(inteval->stack[((hsi*273+49784)*1+lsi)*1]), &(inteval->stack[((hsi*234+49550)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+50525)*1+lsi)*1]), &(inteval->stack[((hsi*120+14440)*1+lsi)*1]), &(inteval->stack[((hsi*105+14560)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+50840)*1+lsi)*1]), &(inteval->stack[((hsi*315+50525)*1+lsi)*1]), &(inteval->stack[((hsi*273+49784)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+51386)*1+lsi)*1]), &(inteval->stack[((hsi*546+50840)*1+lsi)*1]), &(inteval->stack[((hsi*468+50057)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+49784)*1+lsi)*1]), &(inteval->stack[((hsi*78+14756)*1+lsi)*1]), &(inteval->stack[((hsi*66+14834)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+52166)*1+lsi)*1]), &(inteval->stack[((hsi*234+49550)*1+lsi)*1]), &(inteval->stack[((hsi*198+49784)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+52562)*1+lsi)*1]), &(inteval->stack[((hsi*468+50057)*1+lsi)*1]), &(inteval->stack[((hsi*396+52166)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+53222)*1+lsi)*1]), &(inteval->stack[((hsi*780+51386)*1+lsi)*1]), &(inteval->stack[((hsi*660+52562)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+52166)*1+lsi)*1]), &(inteval->stack[((hsi*136+14304)*1+lsi)*1]), &(inteval->stack[((hsi*120+14440)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+49550)*1+lsi)*1]), &(inteval->stack[((hsi*360+52166)*1+lsi)*1]), &(inteval->stack[((hsi*315+50525)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+52166)*1+lsi)*1]), &(inteval->stack[((hsi*630+49550)*1+lsi)*1]), &(inteval->stack[((hsi*546+50840)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+49550)*1+lsi)*1]), &(inteval->stack[((hsi*910+52166)*1+lsi)*1]), &(inteval->stack[((hsi*780+51386)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+48164)*1+lsi)*1]), &(inteval->stack[((hsi*1170+49550)*1+lsi)*1]), &(inteval->stack[((hsi*990+53222)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+50720)*1+lsi)*1]), &(inteval->stack[((hsi*91+14069)*1+lsi)*1]), &(inteval->stack[((hsi*78+14160)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+50954)*1+lsi)*1]), &(inteval->stack[((hsi*105+13964)*1+lsi)*1]), &(inteval->stack[((hsi*91+14069)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+51227)*1+lsi)*1]), &(inteval->stack[((hsi*273+50954)*1+lsi)*1]), &(inteval->stack[((hsi*234+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+51695)*1+lsi)*1]), &(inteval->stack[((hsi*120+13844)*1+lsi)*1]), &(inteval->stack[((hsi*105+13964)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+52010)*1+lsi)*1]), &(inteval->stack[((hsi*315+51695)*1+lsi)*1]), &(inteval->stack[((hsi*273+50954)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+54212)*1+lsi)*1]), &(inteval->stack[((hsi*546+52010)*1+lsi)*1]), &(inteval->stack[((hsi*468+51227)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+52556)*1+lsi)*1]), &(inteval->stack[((hsi*78+14160)*1+lsi)*1]), &(inteval->stack[((hsi*66+14238)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+13964)*1+lsi)*1]), &(inteval->stack[((hsi*234+50720)*1+lsi)*1]), &(inteval->stack[((hsi*198+52556)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+52556)*1+lsi)*1]), &(inteval->stack[((hsi*468+51227)*1+lsi)*1]), &(inteval->stack[((hsi*396+13964)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+54992)*1+lsi)*1]), &(inteval->stack[((hsi*780+54212)*1+lsi)*1]), &(inteval->stack[((hsi*660+52556)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*136+13708)*1+lsi)*1]), &(inteval->stack[((hsi*120+13844)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+13708)*1+lsi)*1]), &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*315+51695)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+13708)*1+lsi)*1]), &(inteval->stack[((hsi*546+52010)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+51630)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+46778)*1+lsi)*1]), &(inteval->stack[((hsi*1170+51630)*1+lsi)*1]), &(inteval->stack[((hsi*990+54992)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+13708)*1+lsi)*1]), &(inteval->stack[((hsi*91+13473)*1+lsi)*1]), &(inteval->stack[((hsi*78+13564)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+13942)*1+lsi)*1]), &(inteval->stack[((hsi*105+13368)*1+lsi)*1]), &(inteval->stack[((hsi*91+13473)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+13942)*1+lsi)*1]), &(inteval->stack[((hsi*234+13708)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+54212)*1+lsi)*1]), &(inteval->stack[((hsi*120+13248)*1+lsi)*1]), &(inteval->stack[((hsi*105+13368)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+14215)*1+lsi)*1]), &(inteval->stack[((hsi*315+54212)*1+lsi)*1]), &(inteval->stack[((hsi*273+13942)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*546+14215)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+54527)*1+lsi)*1]), &(inteval->stack[((hsi*78+13564)*1+lsi)*1]), &(inteval->stack[((hsi*66+13642)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+51188)*1+lsi)*1]), &(inteval->stack[((hsi*234+13708)*1+lsi)*1]), &(inteval->stack[((hsi*198+54527)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+13368)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*396+51188)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+56762)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*660+13368)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*136+13112)*1+lsi)*1]), &(inteval->stack[((hsi*120+13248)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+13112)*1+lsi)*1]), &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*315+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+13112)*1+lsi)*1]), &(inteval->stack[((hsi*546+14215)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+13112)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+45392)*1+lsi)*1]), &(inteval->stack[((hsi*1170+13112)*1+lsi)*1]), &(inteval->stack[((hsi*990+56762)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+50720)*1+lsi)*1]), &(inteval->stack[((hsi*91+12877)*1+lsi)*1]), &(inteval->stack[((hsi*78+12968)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+55982)*1+lsi)*1]), &(inteval->stack[((hsi*105+12772)*1+lsi)*1]), &(inteval->stack[((hsi*91+12877)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+54212)*1+lsi)*1]), &(inteval->stack[((hsi*273+55982)*1+lsi)*1]), &(inteval->stack[((hsi*234+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+50954)*1+lsi)*1]), &(inteval->stack[((hsi*120+12652)*1+lsi)*1]), &(inteval->stack[((hsi*105+12772)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+14282)*1+lsi)*1]), &(inteval->stack[((hsi*315+50954)*1+lsi)*1]), &(inteval->stack[((hsi*273+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*546+14282)*1+lsi)*1]), &(inteval->stack[((hsi*468+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+52800)*1+lsi)*1]), &(inteval->stack[((hsi*78+12968)*1+lsi)*1]), &(inteval->stack[((hsi*66+13046)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+57752)*1+lsi)*1]), &(inteval->stack[((hsi*234+50720)*1+lsi)*1]), &(inteval->stack[((hsi*198+52800)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+58148)*1+lsi)*1]), &(inteval->stack[((hsi*468+54212)*1+lsi)*1]), &(inteval->stack[((hsi*396+57752)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+58808)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*660+58148)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+57752)*1+lsi)*1]), &(inteval->stack[((hsi*136+12516)*1+lsi)*1]), &(inteval->stack[((hsi*120+12652)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+54212)*1+lsi)*1]), &(inteval->stack[((hsi*360+57752)*1+lsi)*1]), &(inteval->stack[((hsi*315+50954)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+54212)*1+lsi)*1]), &(inteval->stack[((hsi*546+14282)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+59798)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+44006)*1+lsi)*1]), &(inteval->stack[((hsi*1170+59798)*1+lsi)*1]), &(inteval->stack[((hsi*990+58808)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+57752)*1+lsi)*1]), &(inteval->stack[((hsi*91+12281)*1+lsi)*1]), &(inteval->stack[((hsi*78+12372)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+50720)*1+lsi)*1]), &(inteval->stack[((hsi*105+12176)*1+lsi)*1]), &(inteval->stack[((hsi*91+12281)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+57986)*1+lsi)*1]), &(inteval->stack[((hsi*273+50720)*1+lsi)*1]), &(inteval->stack[((hsi*234+57752)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*120+12056)*1+lsi)*1]), &(inteval->stack[((hsi*105+12176)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*273+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+50720)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+57986)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+14282)*1+lsi)*1]), &(inteval->stack[((hsi*78+12372)*1+lsi)*1]), &(inteval->stack[((hsi*66+12450)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+12176)*1+lsi)*1]), &(inteval->stack[((hsi*234+57752)*1+lsi)*1]), &(inteval->stack[((hsi*198+14282)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+60968)*1+lsi)*1]), &(inteval->stack[((hsi*468+57986)*1+lsi)*1]), &(inteval->stack[((hsi*396+12176)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+57752)*1+lsi)*1]), &(inteval->stack[((hsi*780+50720)*1+lsi)*1]), &(inteval->stack[((hsi*660+60968)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+12176)*1+lsi)*1]), &(inteval->stack[((hsi*136+11920)*1+lsi)*1]), &(inteval->stack[((hsi*120+12056)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+60968)*1+lsi)*1]), &(inteval->stack[((hsi*360+12176)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+11920)*1+lsi)*1]), &(inteval->stack[((hsi*630+60968)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+60968)*1+lsi)*1]), &(inteval->stack[((hsi*910+11920)*1+lsi)*1]), &(inteval->stack[((hsi*780+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+42620)*1+lsi)*1]), &(inteval->stack[((hsi*1170+60968)*1+lsi)*1]), &(inteval->stack[((hsi*990+57752)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+11920)*1+lsi)*1]), &(inteval->stack[((hsi*91+11685)*1+lsi)*1]), &(inteval->stack[((hsi*78+11776)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+12154)*1+lsi)*1]), &(inteval->stack[((hsi*105+11580)*1+lsi)*1]), &(inteval->stack[((hsi*91+11685)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+12154)*1+lsi)*1]), &(inteval->stack[((hsi*234+11920)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*120+11460)*1+lsi)*1]), &(inteval->stack[((hsi*105+11580)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*273+12154)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+12154)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+14282)*1+lsi)*1]), &(inteval->stack[((hsi*78+11776)*1+lsi)*1]), &(inteval->stack[((hsi*66+11854)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+56297)*1+lsi)*1]), &(inteval->stack[((hsi*234+11920)*1+lsi)*1]), &(inteval->stack[((hsi*198+14282)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+62138)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*396+56297)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+62798)*1+lsi)*1]), &(inteval->stack[((hsi*780+12154)*1+lsi)*1]), &(inteval->stack[((hsi*660+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*136+11324)*1+lsi)*1]), &(inteval->stack[((hsi*120+11460)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+11324)*1+lsi)*1]), &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+11324)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+63788)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+12154)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+41234)*1+lsi)*1]), &(inteval->stack[((hsi*1170+63788)*1+lsi)*1]), &(inteval->stack[((hsi*990+62798)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+11324)*1+lsi)*1]), &(inteval->stack[((hsi*91+11089)*1+lsi)*1]), &(inteval->stack[((hsi*78+11180)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+11558)*1+lsi)*1]), &(inteval->stack[((hsi*105+10984)*1+lsi)*1]), &(inteval->stack[((hsi*91+11089)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+11831)*1+lsi)*1]), &(inteval->stack[((hsi*273+11558)*1+lsi)*1]), &(inteval->stack[((hsi*234+11324)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+50720)*1+lsi)*1]), &(inteval->stack[((hsi*120+10864)*1+lsi)*1]), &(inteval->stack[((hsi*105+10984)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+12299)*1+lsi)*1]), &(inteval->stack[((hsi*315+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+11558)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*546+12299)*1+lsi)*1]), &(inteval->stack[((hsi*468+11831)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+54212)*1+lsi)*1]), &(inteval->stack[((hsi*78+11180)*1+lsi)*1]), &(inteval->stack[((hsi*66+11258)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62138)*1+lsi)*1]), &(inteval->stack[((hsi*234+11324)*1+lsi)*1]), &(inteval->stack[((hsi*198+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+10984)*1+lsi)*1]), &(inteval->stack[((hsi*468+11831)*1+lsi)*1]), &(inteval->stack[((hsi*396+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+64958)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*660+10984)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+10984)*1+lsi)*1]), &(inteval->stack[((hsi*136+10728)*1+lsi)*1]), &(inteval->stack[((hsi*120+10864)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+11344)*1+lsi)*1]), &(inteval->stack[((hsi*360+10984)*1+lsi)*1]), &(inteval->stack[((hsi*315+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+11344)*1+lsi)*1]), &(inteval->stack[((hsi*546+12299)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+10728)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+39848)*1+lsi)*1]), &(inteval->stack[((hsi*1170+10728)*1+lsi)*1]), &(inteval->stack[((hsi*990+64958)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+11898)*1+lsi)*1]), &(inteval->stack[((hsi*91+10493)*1+lsi)*1]), &(inteval->stack[((hsi*78+10584)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+12132)*1+lsi)*1]), &(inteval->stack[((hsi*105+10388)*1+lsi)*1]), &(inteval->stack[((hsi*91+10493)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+12132)*1+lsi)*1]), &(inteval->stack[((hsi*234+11898)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*120+10268)*1+lsi)*1]), &(inteval->stack[((hsi*105+10388)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*273+12132)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+12132)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+62138)*1+lsi)*1]), &(inteval->stack[((hsi*78+10584)*1+lsi)*1]), &(inteval->stack[((hsi*66+10662)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+14282)*1+lsi)*1]), &(inteval->stack[((hsi*234+11898)*1+lsi)*1]), &(inteval->stack[((hsi*198+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+62138)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*396+14282)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+65948)*1+lsi)*1]), &(inteval->stack[((hsi*780+12132)*1+lsi)*1]), &(inteval->stack[((hsi*660+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*136+10132)*1+lsi)*1]), &(inteval->stack[((hsi*120+10268)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+62138)*1+lsi)*1]), &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+62138)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+66938)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+12132)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+38462)*1+lsi)*1]), &(inteval->stack[((hsi*1170+66938)*1+lsi)*1]), &(inteval->stack[((hsi*990+65948)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+11898)*1+lsi)*1]), &(inteval->stack[((hsi*91+9897)*1+lsi)*1]), &(inteval->stack[((hsi*78+9988)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+12132)*1+lsi)*1]), &(inteval->stack[((hsi*105+9792)*1+lsi)*1]), &(inteval->stack[((hsi*91+9897)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+12132)*1+lsi)*1]), &(inteval->stack[((hsi*234+11898)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*120+9672)*1+lsi)*1]), &(inteval->stack[((hsi*105+9792)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*273+12132)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+12132)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+62138)*1+lsi)*1]), &(inteval->stack[((hsi*78+9988)*1+lsi)*1]), &(inteval->stack[((hsi*66+10066)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+9792)*1+lsi)*1]), &(inteval->stack[((hsi*234+11898)*1+lsi)*1]), &(inteval->stack[((hsi*198+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+62138)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*396+9792)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+68108)*1+lsi)*1]), &(inteval->stack[((hsi*780+12132)*1+lsi)*1]), &(inteval->stack[((hsi*660+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+9792)*1+lsi)*1]), &(inteval->stack[((hsi*136+9536)*1+lsi)*1]), &(inteval->stack[((hsi*120+9672)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+50720)*1+lsi)*1]), &(inteval->stack[((hsi*360+9792)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+9536)*1+lsi)*1]), &(inteval->stack[((hsi*630+50720)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+69098)*1+lsi)*1]), &(inteval->stack[((hsi*910+9536)*1+lsi)*1]), &(inteval->stack[((hsi*780+12132)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+37076)*1+lsi)*1]), &(inteval->stack[((hsi*1170+69098)*1+lsi)*1]), &(inteval->stack[((hsi*990+68108)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+11898)*1+lsi)*1]), &(inteval->stack[((hsi*91+9301)*1+lsi)*1]), &(inteval->stack[((hsi*78+9392)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+9536)*1+lsi)*1]), &(inteval->stack[((hsi*105+9196)*1+lsi)*1]), &(inteval->stack[((hsi*91+9301)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+12132)*1+lsi)*1]), &(inteval->stack[((hsi*273+9536)*1+lsi)*1]), &(inteval->stack[((hsi*234+11898)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+9809)*1+lsi)*1]), &(inteval->stack[((hsi*120+9076)*1+lsi)*1]), &(inteval->stack[((hsi*105+9196)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+50720)*1+lsi)*1]), &(inteval->stack[((hsi*315+9809)*1+lsi)*1]), &(inteval->stack[((hsi*273+9536)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*546+50720)*1+lsi)*1]), &(inteval->stack[((hsi*468+12132)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+54212)*1+lsi)*1]), &(inteval->stack[((hsi*78+9392)*1+lsi)*1]), &(inteval->stack[((hsi*66+9470)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62138)*1+lsi)*1]), &(inteval->stack[((hsi*234+11898)*1+lsi)*1]), &(inteval->stack[((hsi*198+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+12132)*1+lsi)*1]), &(inteval->stack[((hsi*396+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+11898)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*660+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+54212)*1+lsi)*1]), &(inteval->stack[((hsi*136+8940)*1+lsi)*1]), &(inteval->stack[((hsi*120+9076)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+8940)*1+lsi)*1]), &(inteval->stack[((hsi*360+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+9809)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+9570)*1+lsi)*1]), &(inteval->stack[((hsi*630+8940)*1+lsi)*1]), &(inteval->stack[((hsi*546+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+70268)*1+lsi)*1]), &(inteval->stack[((hsi*910+9570)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+35690)*1+lsi)*1]), &(inteval->stack[((hsi*1170+70268)*1+lsi)*1]), &(inteval->stack[((hsi*990+11898)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+8940)*1+lsi)*1]), &(inteval->stack[((hsi*91+8705)*1+lsi)*1]), &(inteval->stack[((hsi*78+8796)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+9174)*1+lsi)*1]), &(inteval->stack[((hsi*105+8600)*1+lsi)*1]), &(inteval->stack[((hsi*91+8705)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+9447)*1+lsi)*1]), &(inteval->stack[((hsi*273+9174)*1+lsi)*1]), &(inteval->stack[((hsi*234+8940)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+50720)*1+lsi)*1]), &(inteval->stack[((hsi*120+8480)*1+lsi)*1]), &(inteval->stack[((hsi*105+8600)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+9915)*1+lsi)*1]), &(inteval->stack[((hsi*315+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+9174)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*546+9915)*1+lsi)*1]), &(inteval->stack[((hsi*468+9447)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+54212)*1+lsi)*1]), &(inteval->stack[((hsi*78+8796)*1+lsi)*1]), &(inteval->stack[((hsi*66+8874)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62138)*1+lsi)*1]), &(inteval->stack[((hsi*234+8940)*1+lsi)*1]), &(inteval->stack[((hsi*198+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+8600)*1+lsi)*1]), &(inteval->stack[((hsi*468+9447)*1+lsi)*1]), &(inteval->stack[((hsi*396+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+71438)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*660+8600)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+8600)*1+lsi)*1]), &(inteval->stack[((hsi*136+8344)*1+lsi)*1]), &(inteval->stack[((hsi*120+8480)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+8960)*1+lsi)*1]), &(inteval->stack[((hsi*360+8600)*1+lsi)*1]), &(inteval->stack[((hsi*315+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+8960)*1+lsi)*1]), &(inteval->stack[((hsi*546+9915)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+8344)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+34304)*1+lsi)*1]), &(inteval->stack[((hsi*1170+8344)*1+lsi)*1]), &(inteval->stack[((hsi*990+71438)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+9514)*1+lsi)*1]), &(inteval->stack[((hsi*91+8109)*1+lsi)*1]), &(inteval->stack[((hsi*78+8200)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+9748)*1+lsi)*1]), &(inteval->stack[((hsi*105+8004)*1+lsi)*1]), &(inteval->stack[((hsi*91+8109)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+9748)*1+lsi)*1]), &(inteval->stack[((hsi*234+9514)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*120+7884)*1+lsi)*1]), &(inteval->stack[((hsi*105+8004)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*273+9748)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+9748)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+62138)*1+lsi)*1]), &(inteval->stack[((hsi*78+8200)*1+lsi)*1]), &(inteval->stack[((hsi*66+8278)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+14282)*1+lsi)*1]), &(inteval->stack[((hsi*234+9514)*1+lsi)*1]), &(inteval->stack[((hsi*198+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+62138)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*396+14282)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+72428)*1+lsi)*1]), &(inteval->stack[((hsi*780+9748)*1+lsi)*1]), &(inteval->stack[((hsi*660+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*136+7748)*1+lsi)*1]), &(inteval->stack[((hsi*120+7884)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+62138)*1+lsi)*1]), &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+62138)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+73418)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+9748)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+32918)*1+lsi)*1]), &(inteval->stack[((hsi*1170+73418)*1+lsi)*1]), &(inteval->stack[((hsi*990+72428)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+9514)*1+lsi)*1]), &(inteval->stack[((hsi*91+7513)*1+lsi)*1]), &(inteval->stack[((hsi*78+7604)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+9748)*1+lsi)*1]), &(inteval->stack[((hsi*105+7408)*1+lsi)*1]), &(inteval->stack[((hsi*91+7513)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+9748)*1+lsi)*1]), &(inteval->stack[((hsi*234+9514)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*120+7288)*1+lsi)*1]), &(inteval->stack[((hsi*105+7408)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*273+9748)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+9748)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+62138)*1+lsi)*1]), &(inteval->stack[((hsi*78+7604)*1+lsi)*1]), &(inteval->stack[((hsi*66+7682)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+7408)*1+lsi)*1]), &(inteval->stack[((hsi*234+9514)*1+lsi)*1]), &(inteval->stack[((hsi*198+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+62138)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*396+7408)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+74588)*1+lsi)*1]), &(inteval->stack[((hsi*780+9748)*1+lsi)*1]), &(inteval->stack[((hsi*660+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+7408)*1+lsi)*1]), &(inteval->stack[((hsi*136+7152)*1+lsi)*1]), &(inteval->stack[((hsi*120+7288)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+50720)*1+lsi)*1]), &(inteval->stack[((hsi*360+7408)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+7152)*1+lsi)*1]), &(inteval->stack[((hsi*630+50720)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+75578)*1+lsi)*1]), &(inteval->stack[((hsi*910+7152)*1+lsi)*1]), &(inteval->stack[((hsi*780+9748)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+31532)*1+lsi)*1]), &(inteval->stack[((hsi*1170+75578)*1+lsi)*1]), &(inteval->stack[((hsi*990+74588)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+9514)*1+lsi)*1]), &(inteval->stack[((hsi*91+6917)*1+lsi)*1]), &(inteval->stack[((hsi*78+7008)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+7152)*1+lsi)*1]), &(inteval->stack[((hsi*105+6812)*1+lsi)*1]), &(inteval->stack[((hsi*91+6917)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+9748)*1+lsi)*1]), &(inteval->stack[((hsi*273+7152)*1+lsi)*1]), &(inteval->stack[((hsi*234+9514)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+7425)*1+lsi)*1]), &(inteval->stack[((hsi*120+6692)*1+lsi)*1]), &(inteval->stack[((hsi*105+6812)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+50720)*1+lsi)*1]), &(inteval->stack[((hsi*315+7425)*1+lsi)*1]), &(inteval->stack[((hsi*273+7152)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*546+50720)*1+lsi)*1]), &(inteval->stack[((hsi*468+9748)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+54212)*1+lsi)*1]), &(inteval->stack[((hsi*78+7008)*1+lsi)*1]), &(inteval->stack[((hsi*66+7086)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62138)*1+lsi)*1]), &(inteval->stack[((hsi*234+9514)*1+lsi)*1]), &(inteval->stack[((hsi*198+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+9748)*1+lsi)*1]), &(inteval->stack[((hsi*396+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+9514)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*660+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+54212)*1+lsi)*1]), &(inteval->stack[((hsi*136+6556)*1+lsi)*1]), &(inteval->stack[((hsi*120+6692)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+6556)*1+lsi)*1]), &(inteval->stack[((hsi*360+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+7425)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+7186)*1+lsi)*1]), &(inteval->stack[((hsi*630+6556)*1+lsi)*1]), &(inteval->stack[((hsi*546+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+76748)*1+lsi)*1]), &(inteval->stack[((hsi*910+7186)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+30146)*1+lsi)*1]), &(inteval->stack[((hsi*1170+76748)*1+lsi)*1]), &(inteval->stack[((hsi*990+9514)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+6556)*1+lsi)*1]), &(inteval->stack[((hsi*91+6321)*1+lsi)*1]), &(inteval->stack[((hsi*78+6412)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+6790)*1+lsi)*1]), &(inteval->stack[((hsi*105+6216)*1+lsi)*1]), &(inteval->stack[((hsi*91+6321)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+7063)*1+lsi)*1]), &(inteval->stack[((hsi*273+6790)*1+lsi)*1]), &(inteval->stack[((hsi*234+6556)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+50720)*1+lsi)*1]), &(inteval->stack[((hsi*120+6096)*1+lsi)*1]), &(inteval->stack[((hsi*105+6216)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+7531)*1+lsi)*1]), &(inteval->stack[((hsi*315+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+6790)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*546+7531)*1+lsi)*1]), &(inteval->stack[((hsi*468+7063)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+54212)*1+lsi)*1]), &(inteval->stack[((hsi*78+6412)*1+lsi)*1]), &(inteval->stack[((hsi*66+6490)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62138)*1+lsi)*1]), &(inteval->stack[((hsi*234+6556)*1+lsi)*1]), &(inteval->stack[((hsi*198+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+6216)*1+lsi)*1]), &(inteval->stack[((hsi*468+7063)*1+lsi)*1]), &(inteval->stack[((hsi*396+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+77918)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*660+6216)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+6216)*1+lsi)*1]), &(inteval->stack[((hsi*136+5960)*1+lsi)*1]), &(inteval->stack[((hsi*120+6096)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+6576)*1+lsi)*1]), &(inteval->stack[((hsi*360+6216)*1+lsi)*1]), &(inteval->stack[((hsi*315+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+6576)*1+lsi)*1]), &(inteval->stack[((hsi*546+7531)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+5960)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+28760)*1+lsi)*1]), &(inteval->stack[((hsi*1170+5960)*1+lsi)*1]), &(inteval->stack[((hsi*990+77918)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+7130)*1+lsi)*1]), &(inteval->stack[((hsi*91+5725)*1+lsi)*1]), &(inteval->stack[((hsi*78+5816)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+7364)*1+lsi)*1]), &(inteval->stack[((hsi*105+5620)*1+lsi)*1]), &(inteval->stack[((hsi*91+5725)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+7364)*1+lsi)*1]), &(inteval->stack[((hsi*234+7130)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*120+5500)*1+lsi)*1]), &(inteval->stack[((hsi*105+5620)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*273+7364)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+7364)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+62138)*1+lsi)*1]), &(inteval->stack[((hsi*78+5816)*1+lsi)*1]), &(inteval->stack[((hsi*66+5894)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+14282)*1+lsi)*1]), &(inteval->stack[((hsi*234+7130)*1+lsi)*1]), &(inteval->stack[((hsi*198+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+62138)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*396+14282)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+78908)*1+lsi)*1]), &(inteval->stack[((hsi*780+7364)*1+lsi)*1]), &(inteval->stack[((hsi*660+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*136+5364)*1+lsi)*1]), &(inteval->stack[((hsi*120+5500)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+62138)*1+lsi)*1]), &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+62138)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+79898)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+7364)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+27374)*1+lsi)*1]), &(inteval->stack[((hsi*1170+79898)*1+lsi)*1]), &(inteval->stack[((hsi*990+78908)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+7130)*1+lsi)*1]), &(inteval->stack[((hsi*91+5129)*1+lsi)*1]), &(inteval->stack[((hsi*78+5220)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+7364)*1+lsi)*1]), &(inteval->stack[((hsi*105+5024)*1+lsi)*1]), &(inteval->stack[((hsi*91+5129)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+7364)*1+lsi)*1]), &(inteval->stack[((hsi*234+7130)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*120+4904)*1+lsi)*1]), &(inteval->stack[((hsi*105+5024)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*273+7364)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+7364)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+62138)*1+lsi)*1]), &(inteval->stack[((hsi*78+5220)*1+lsi)*1]), &(inteval->stack[((hsi*66+5298)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+5024)*1+lsi)*1]), &(inteval->stack[((hsi*234+7130)*1+lsi)*1]), &(inteval->stack[((hsi*198+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+62138)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*396+5024)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+81068)*1+lsi)*1]), &(inteval->stack[((hsi*780+7364)*1+lsi)*1]), &(inteval->stack[((hsi*660+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+5024)*1+lsi)*1]), &(inteval->stack[((hsi*136+4768)*1+lsi)*1]), &(inteval->stack[((hsi*120+4904)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+50720)*1+lsi)*1]), &(inteval->stack[((hsi*360+5024)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+4768)*1+lsi)*1]), &(inteval->stack[((hsi*630+50720)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+82058)*1+lsi)*1]), &(inteval->stack[((hsi*910+4768)*1+lsi)*1]), &(inteval->stack[((hsi*780+7364)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+25988)*1+lsi)*1]), &(inteval->stack[((hsi*1170+82058)*1+lsi)*1]), &(inteval->stack[((hsi*990+81068)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+7130)*1+lsi)*1]), &(inteval->stack[((hsi*91+4533)*1+lsi)*1]), &(inteval->stack[((hsi*78+4624)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+4768)*1+lsi)*1]), &(inteval->stack[((hsi*105+4428)*1+lsi)*1]), &(inteval->stack[((hsi*91+4533)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+7364)*1+lsi)*1]), &(inteval->stack[((hsi*273+4768)*1+lsi)*1]), &(inteval->stack[((hsi*234+7130)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+5041)*1+lsi)*1]), &(inteval->stack[((hsi*120+4308)*1+lsi)*1]), &(inteval->stack[((hsi*105+4428)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+50720)*1+lsi)*1]), &(inteval->stack[((hsi*315+5041)*1+lsi)*1]), &(inteval->stack[((hsi*273+4768)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*546+50720)*1+lsi)*1]), &(inteval->stack[((hsi*468+7364)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+54212)*1+lsi)*1]), &(inteval->stack[((hsi*78+4624)*1+lsi)*1]), &(inteval->stack[((hsi*66+4702)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62138)*1+lsi)*1]), &(inteval->stack[((hsi*234+7130)*1+lsi)*1]), &(inteval->stack[((hsi*198+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+7364)*1+lsi)*1]), &(inteval->stack[((hsi*396+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+7130)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*660+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+54212)*1+lsi)*1]), &(inteval->stack[((hsi*136+4172)*1+lsi)*1]), &(inteval->stack[((hsi*120+4308)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+4172)*1+lsi)*1]), &(inteval->stack[((hsi*360+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+5041)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+4802)*1+lsi)*1]), &(inteval->stack[((hsi*630+4172)*1+lsi)*1]), &(inteval->stack[((hsi*546+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+83228)*1+lsi)*1]), &(inteval->stack[((hsi*910+4802)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+24602)*1+lsi)*1]), &(inteval->stack[((hsi*1170+83228)*1+lsi)*1]), &(inteval->stack[((hsi*990+7130)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+4172)*1+lsi)*1]), &(inteval->stack[((hsi*91+3937)*1+lsi)*1]), &(inteval->stack[((hsi*78+4028)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+4406)*1+lsi)*1]), &(inteval->stack[((hsi*105+3832)*1+lsi)*1]), &(inteval->stack[((hsi*91+3937)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+4679)*1+lsi)*1]), &(inteval->stack[((hsi*273+4406)*1+lsi)*1]), &(inteval->stack[((hsi*234+4172)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+50720)*1+lsi)*1]), &(inteval->stack[((hsi*120+3712)*1+lsi)*1]), &(inteval->stack[((hsi*105+3832)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+5147)*1+lsi)*1]), &(inteval->stack[((hsi*315+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+4406)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*546+5147)*1+lsi)*1]), &(inteval->stack[((hsi*468+4679)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+54212)*1+lsi)*1]), &(inteval->stack[((hsi*78+4028)*1+lsi)*1]), &(inteval->stack[((hsi*66+4106)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62138)*1+lsi)*1]), &(inteval->stack[((hsi*234+4172)*1+lsi)*1]), &(inteval->stack[((hsi*198+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+3832)*1+lsi)*1]), &(inteval->stack[((hsi*468+4679)*1+lsi)*1]), &(inteval->stack[((hsi*396+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+84398)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*660+3832)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+3832)*1+lsi)*1]), &(inteval->stack[((hsi*136+3576)*1+lsi)*1]), &(inteval->stack[((hsi*120+3712)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+4192)*1+lsi)*1]), &(inteval->stack[((hsi*360+3832)*1+lsi)*1]), &(inteval->stack[((hsi*315+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+4192)*1+lsi)*1]), &(inteval->stack[((hsi*546+5147)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+3576)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+23216)*1+lsi)*1]), &(inteval->stack[((hsi*1170+3576)*1+lsi)*1]), &(inteval->stack[((hsi*990+84398)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+4746)*1+lsi)*1]), &(inteval->stack[((hsi*91+3341)*1+lsi)*1]), &(inteval->stack[((hsi*78+3432)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+4980)*1+lsi)*1]), &(inteval->stack[((hsi*105+3236)*1+lsi)*1]), &(inteval->stack[((hsi*91+3341)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+4980)*1+lsi)*1]), &(inteval->stack[((hsi*234+4746)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*120+3116)*1+lsi)*1]), &(inteval->stack[((hsi*105+3236)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*273+4980)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+4980)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+62138)*1+lsi)*1]), &(inteval->stack[((hsi*78+3432)*1+lsi)*1]), &(inteval->stack[((hsi*66+3510)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+14282)*1+lsi)*1]), &(inteval->stack[((hsi*234+4746)*1+lsi)*1]), &(inteval->stack[((hsi*198+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+62138)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*396+14282)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+85388)*1+lsi)*1]), &(inteval->stack[((hsi*780+4980)*1+lsi)*1]), &(inteval->stack[((hsi*660+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*136+2980)*1+lsi)*1]), &(inteval->stack[((hsi*120+3116)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+62138)*1+lsi)*1]), &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+62138)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+86378)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+4980)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+21830)*1+lsi)*1]), &(inteval->stack[((hsi*1170+86378)*1+lsi)*1]), &(inteval->stack[((hsi*990+85388)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+4746)*1+lsi)*1]), &(inteval->stack[((hsi*91+2745)*1+lsi)*1]), &(inteval->stack[((hsi*78+2836)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+4980)*1+lsi)*1]), &(inteval->stack[((hsi*105+2640)*1+lsi)*1]), &(inteval->stack[((hsi*91+2745)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+4980)*1+lsi)*1]), &(inteval->stack[((hsi*234+4746)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*120+2520)*1+lsi)*1]), &(inteval->stack[((hsi*105+2640)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*273+4980)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+4980)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+62138)*1+lsi)*1]), &(inteval->stack[((hsi*78+2836)*1+lsi)*1]), &(inteval->stack[((hsi*66+2914)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+2640)*1+lsi)*1]), &(inteval->stack[((hsi*234+4746)*1+lsi)*1]), &(inteval->stack[((hsi*198+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+62138)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*396+2640)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+87548)*1+lsi)*1]), &(inteval->stack[((hsi*780+4980)*1+lsi)*1]), &(inteval->stack[((hsi*660+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+2640)*1+lsi)*1]), &(inteval->stack[((hsi*136+2384)*1+lsi)*1]), &(inteval->stack[((hsi*120+2520)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+50720)*1+lsi)*1]), &(inteval->stack[((hsi*360+2640)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+2384)*1+lsi)*1]), &(inteval->stack[((hsi*630+50720)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+88538)*1+lsi)*1]), &(inteval->stack[((hsi*910+2384)*1+lsi)*1]), &(inteval->stack[((hsi*780+4980)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+20444)*1+lsi)*1]), &(inteval->stack[((hsi*1170+88538)*1+lsi)*1]), &(inteval->stack[((hsi*990+87548)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+4746)*1+lsi)*1]), &(inteval->stack[((hsi*91+2149)*1+lsi)*1]), &(inteval->stack[((hsi*78+2240)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+2384)*1+lsi)*1]), &(inteval->stack[((hsi*105+2044)*1+lsi)*1]), &(inteval->stack[((hsi*91+2149)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+4980)*1+lsi)*1]), &(inteval->stack[((hsi*273+2384)*1+lsi)*1]), &(inteval->stack[((hsi*234+4746)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+2657)*1+lsi)*1]), &(inteval->stack[((hsi*120+1924)*1+lsi)*1]), &(inteval->stack[((hsi*105+2044)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+50720)*1+lsi)*1]), &(inteval->stack[((hsi*315+2657)*1+lsi)*1]), &(inteval->stack[((hsi*273+2384)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*546+50720)*1+lsi)*1]), &(inteval->stack[((hsi*468+4980)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+54212)*1+lsi)*1]), &(inteval->stack[((hsi*78+2240)*1+lsi)*1]), &(inteval->stack[((hsi*66+2318)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62138)*1+lsi)*1]), &(inteval->stack[((hsi*234+4746)*1+lsi)*1]), &(inteval->stack[((hsi*198+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+4980)*1+lsi)*1]), &(inteval->stack[((hsi*396+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+4746)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*660+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+54212)*1+lsi)*1]), &(inteval->stack[((hsi*136+1788)*1+lsi)*1]), &(inteval->stack[((hsi*120+1924)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+1788)*1+lsi)*1]), &(inteval->stack[((hsi*360+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+2657)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+2418)*1+lsi)*1]), &(inteval->stack[((hsi*630+1788)*1+lsi)*1]), &(inteval->stack[((hsi*546+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+89708)*1+lsi)*1]), &(inteval->stack[((hsi*910+2418)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+19058)*1+lsi)*1]), &(inteval->stack[((hsi*1170+89708)*1+lsi)*1]), &(inteval->stack[((hsi*990+4746)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+1788)*1+lsi)*1]), &(inteval->stack[((hsi*91+1553)*1+lsi)*1]), &(inteval->stack[((hsi*78+1644)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+2022)*1+lsi)*1]), &(inteval->stack[((hsi*105+1448)*1+lsi)*1]), &(inteval->stack[((hsi*91+1553)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+2295)*1+lsi)*1]), &(inteval->stack[((hsi*273+2022)*1+lsi)*1]), &(inteval->stack[((hsi*234+1788)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+50720)*1+lsi)*1]), &(inteval->stack[((hsi*120+1328)*1+lsi)*1]), &(inteval->stack[((hsi*105+1448)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+2763)*1+lsi)*1]), &(inteval->stack[((hsi*315+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+2022)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*546+2763)*1+lsi)*1]), &(inteval->stack[((hsi*468+2295)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+54212)*1+lsi)*1]), &(inteval->stack[((hsi*78+1644)*1+lsi)*1]), &(inteval->stack[((hsi*66+1722)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62138)*1+lsi)*1]), &(inteval->stack[((hsi*234+1788)*1+lsi)*1]), &(inteval->stack[((hsi*198+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+1448)*1+lsi)*1]), &(inteval->stack[((hsi*468+2295)*1+lsi)*1]), &(inteval->stack[((hsi*396+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+90878)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]), &(inteval->stack[((hsi*660+1448)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+1448)*1+lsi)*1]), &(inteval->stack[((hsi*136+1192)*1+lsi)*1]), &(inteval->stack[((hsi*120+1328)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+1808)*1+lsi)*1]), &(inteval->stack[((hsi*360+1448)*1+lsi)*1]), &(inteval->stack[((hsi*315+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+1808)*1+lsi)*1]), &(inteval->stack[((hsi*546+2763)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+1192)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+17672)*1+lsi)*1]), &(inteval->stack[((hsi*1170+1192)*1+lsi)*1]), &(inteval->stack[((hsi*990+90878)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+2362)*1+lsi)*1]), &(inteval->stack[((hsi*91+957)*1+lsi)*1]), &(inteval->stack[((hsi*78+1048)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+2596)*1+lsi)*1]), &(inteval->stack[((hsi*105+852)*1+lsi)*1]), &(inteval->stack[((hsi*91+957)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+2596)*1+lsi)*1]), &(inteval->stack[((hsi*234+2362)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*120+732)*1+lsi)*1]), &(inteval->stack[((hsi*105+852)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*273+2596)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+2596)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+62138)*1+lsi)*1]), &(inteval->stack[((hsi*78+1048)*1+lsi)*1]), &(inteval->stack[((hsi*66+1126)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+14282)*1+lsi)*1]), &(inteval->stack[((hsi*234+2362)*1+lsi)*1]), &(inteval->stack[((hsi*198+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+62138)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*396+14282)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+91868)*1+lsi)*1]), &(inteval->stack[((hsi*780+2596)*1+lsi)*1]), &(inteval->stack[((hsi*660+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*136+596)*1+lsi)*1]), &(inteval->stack[((hsi*120+732)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+62138)*1+lsi)*1]), &(inteval->stack[((hsi*360+50720)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*630+62138)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+92858)*1+lsi)*1]), &(inteval->stack[((hsi*910+50720)*1+lsi)*1]), &(inteval->stack[((hsi*780+2596)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+16286)*1+lsi)*1]), &(inteval->stack[((hsi*1170+92858)*1+lsi)*1]), &(inteval->stack[((hsi*990+91868)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+2362)*1+lsi)*1]), &(inteval->stack[((hsi*91+361)*1+lsi)*1]), &(inteval->stack[((hsi*78+452)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+2596)*1+lsi)*1]), &(inteval->stack[((hsi*105+256)*1+lsi)*1]), &(inteval->stack[((hsi*91+361)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*273+2596)*1+lsi)*1]), &(inteval->stack[((hsi*234+2362)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*120+136)*1+lsi)*1]), &(inteval->stack[((hsi*105+256)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]), &(inteval->stack[((hsi*273+2596)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+2596)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+62138)*1+lsi)*1]), &(inteval->stack[((hsi*78+452)*1+lsi)*1]), &(inteval->stack[((hsi*66+530)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+256)*1+lsi)*1]), &(inteval->stack[((hsi*234+2362)*1+lsi)*1]), &(inteval->stack[((hsi*198+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+62138)*1+lsi)*1]), &(inteval->stack[((hsi*468+50720)*1+lsi)*1]), &(inteval->stack[((hsi*396+256)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+94028)*1+lsi)*1]), &(inteval->stack[((hsi*780+2596)*1+lsi)*1]), &(inteval->stack[((hsi*660+62138)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+256)*1+lsi)*1]), &(inteval->stack[((hsi*136+0)*1+lsi)*1]), &(inteval->stack[((hsi*120+136)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+50720)*1+lsi)*1]), &(inteval->stack[((hsi*360+256)*1+lsi)*1]), &(inteval->stack[((hsi*315+55982)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+0)*1+lsi)*1]), &(inteval->stack[((hsi*630+50720)*1+lsi)*1]), &(inteval->stack[((hsi*546+54212)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+95018)*1+lsi)*1]), &(inteval->stack[((hsi*910+0)*1+lsi)*1]), &(inteval->stack[((hsi*780+2596)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+14900)*1+lsi)*1]), &(inteval->stack[((hsi*1170+95018)*1+lsi)*1]), &(inteval->stack[((hsi*990+94028)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1386+14900)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1386+16286)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1386+17672)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1386+19058)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1386+20444)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1386+21830)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1386+23216)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1386+24602)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1386+25988)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1386+27374)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1386+28760)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1386+30146)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*1386+31532)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*1386+32918)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*1386+34304)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*1386+35690)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*1386+37076)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*1386+38462)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*1386+39848)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*1386+41234)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*1386+42620)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*1386+44006)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*1386+45392)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*1386+46778)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*1386+48164)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
