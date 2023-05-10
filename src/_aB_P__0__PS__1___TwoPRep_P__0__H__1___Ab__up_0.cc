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
#include <HRRPart0bra0ket0pp.h>
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
#include <_aB_P__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_P__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5364)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*702+17838)*1+lsi)*1]), &(inteval->stack[((hsi*273+4659)*1+lsi)*1]), &(inteval->stack[((hsi*234+4932)*1+lsi)*1]),3);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*819+18540)*1+lsi)*1]), &(inteval->stack[((hsi*315+4344)*1+lsi)*1]), &(inteval->stack[((hsi*273+4659)*1+lsi)*1]),3);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*1404+19359)*1+lsi)*1]), &(inteval->stack[((hsi*819+18540)*1+lsi)*1]), &(inteval->stack[((hsi*702+17838)*1+lsi)*1]),3);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*945+20763)*1+lsi)*1]), &(inteval->stack[((hsi*360+3984)*1+lsi)*1]), &(inteval->stack[((hsi*315+4344)*1+lsi)*1]),3);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*1638+21708)*1+lsi)*1]), &(inteval->stack[((hsi*945+20763)*1+lsi)*1]), &(inteval->stack[((hsi*819+18540)*1+lsi)*1]),3);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*2340+23346)*1+lsi)*1]), &(inteval->stack[((hsi*1638+21708)*1+lsi)*1]), &(inteval->stack[((hsi*1404+19359)*1+lsi)*1]),3);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*594+18540)*1+lsi)*1]), &(inteval->stack[((hsi*234+4932)*1+lsi)*1]), &(inteval->stack[((hsi*198+5166)*1+lsi)*1]),3);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*1188+25686)*1+lsi)*1]), &(inteval->stack[((hsi*702+17838)*1+lsi)*1]), &(inteval->stack[((hsi*594+18540)*1+lsi)*1]),3);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*1980+26874)*1+lsi)*1]), &(inteval->stack[((hsi*1404+19359)*1+lsi)*1]), &(inteval->stack[((hsi*1188+25686)*1+lsi)*1]),3);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*2970+28854)*1+lsi)*1]), &(inteval->stack[((hsi*2340+23346)*1+lsi)*1]), &(inteval->stack[((hsi*1980+26874)*1+lsi)*1]),3);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*1080+25686)*1+lsi)*1]), &(inteval->stack[((hsi*408+3576)*1+lsi)*1]), &(inteval->stack[((hsi*360+3984)*1+lsi)*1]),3);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*1890+17838)*1+lsi)*1]), &(inteval->stack[((hsi*1080+25686)*1+lsi)*1]), &(inteval->stack[((hsi*945+20763)*1+lsi)*1]),3);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*2730+25686)*1+lsi)*1]), &(inteval->stack[((hsi*1890+17838)*1+lsi)*1]), &(inteval->stack[((hsi*1638+21708)*1+lsi)*1]),3);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*3510+17838)*1+lsi)*1]), &(inteval->stack[((hsi*2730+25686)*1+lsi)*1]), &(inteval->stack[((hsi*2340+23346)*1+lsi)*1]),3);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*4158+21348)*1+lsi)*1]), &(inteval->stack[((hsi*3510+17838)*1+lsi)*1]), &(inteval->stack[((hsi*2970+28854)*1+lsi)*1]),3);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+17838)*1+lsi)*1]), &(inteval->stack[((hsi*546+2166)*1+lsi)*1]), &(inteval->stack[((hsi*468+2712)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+19242)*1+lsi)*1]), &(inteval->stack[((hsi*630+1536)*1+lsi)*1]), &(inteval->stack[((hsi*546+2166)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+25506)*1+lsi)*1]), &(inteval->stack[((hsi*1638+19242)*1+lsi)*1]), &(inteval->stack[((hsi*1404+17838)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+28314)*1+lsi)*1]), &(inteval->stack[((hsi*720+816)*1+lsi)*1]), &(inteval->stack[((hsi*630+1536)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+30204)*1+lsi)*1]), &(inteval->stack[((hsi*1890+28314)*1+lsi)*1]), &(inteval->stack[((hsi*1638+19242)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+33480)*1+lsi)*1]), &(inteval->stack[((hsi*3276+30204)*1+lsi)*1]), &(inteval->stack[((hsi*2808+25506)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+19242)*1+lsi)*1]), &(inteval->stack[((hsi*468+2712)*1+lsi)*1]), &(inteval->stack[((hsi*396+3180)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+1536)*1+lsi)*1]), &(inteval->stack[((hsi*1404+17838)*1+lsi)*1]), &(inteval->stack[((hsi*1188+19242)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+38160)*1+lsi)*1]), &(inteval->stack[((hsi*2808+25506)*1+lsi)*1]), &(inteval->stack[((hsi*2376+1536)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+42120)*1+lsi)*1]), &(inteval->stack[((hsi*4680+33480)*1+lsi)*1]), &(inteval->stack[((hsi*3960+38160)*1+lsi)*1]),6);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*2160+38160)*1+lsi)*1]), &(inteval->stack[((hsi*816+0)*1+lsi)*1]), &(inteval->stack[((hsi*720+816)*1+lsi)*1]),6);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*3780+0)*1+lsi)*1]), &(inteval->stack[((hsi*2160+38160)*1+lsi)*1]), &(inteval->stack[((hsi*1890+28314)*1+lsi)*1]),6);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*5460+48060)*1+lsi)*1]), &(inteval->stack[((hsi*3780+0)*1+lsi)*1]), &(inteval->stack[((hsi*3276+30204)*1+lsi)*1]),6);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*7020+25506)*1+lsi)*1]), &(inteval->stack[((hsi*5460+48060)*1+lsi)*1]), &(inteval->stack[((hsi*4680+33480)*1+lsi)*1]),6);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*8316+32526)*1+lsi)*1]), &(inteval->stack[((hsi*7020+25506)*1+lsi)*1]), &(inteval->stack[((hsi*5940+42120)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*12474+5364)*1+lsi)*1]), &(inteval->stack[((hsi*8316+32526)*1+lsi)*1]), &(inteval->stack[((hsi*4158+21348)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12474+5364)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
