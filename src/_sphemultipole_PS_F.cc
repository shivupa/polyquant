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
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psp.h>
#include <_sphemultipole_PS_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_PS_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8500)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_PS_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+8265)*1+lsi)*1]), &(inteval->stack[((hsi*78+8356)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+8356)*1+lsi)*1]), &(inteval->stack[((hsi*66+8434)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+25432)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+8160)*1+lsi)*1]), &(inteval->stack[((hsi*91+8265)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+26101)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+24340)*1+lsi)*1]), &(inteval->stack[((hsi*468+26101)*1+lsi)*1]), &(inteval->stack[((hsi*396+25432)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+7925)*1+lsi)*1]), &(inteval->stack[((hsi*78+8016)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+8016)*1+lsi)*1]), &(inteval->stack[((hsi*66+8094)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+8016)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+7820)*1+lsi)*1]), &(inteval->stack[((hsi*91+7925)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+26569)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+23680)*1+lsi)*1]), &(inteval->stack[((hsi*468+26569)*1+lsi)*1]), &(inteval->stack[((hsi*396+8016)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+7585)*1+lsi)*1]), &(inteval->stack[((hsi*78+7676)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+7676)*1+lsi)*1]), &(inteval->stack[((hsi*66+7754)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+27037)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+7480)*1+lsi)*1]), &(inteval->stack[((hsi*91+7585)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+7480)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+23020)*1+lsi)*1]), &(inteval->stack[((hsi*468+7480)*1+lsi)*1]), &(inteval->stack[((hsi*396+27037)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+7245)*1+lsi)*1]), &(inteval->stack[((hsi*78+7336)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+7336)*1+lsi)*1]), &(inteval->stack[((hsi*66+7414)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+27433)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+7140)*1+lsi)*1]), &(inteval->stack[((hsi*91+7245)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+27829)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+22360)*1+lsi)*1]), &(inteval->stack[((hsi*468+27829)*1+lsi)*1]), &(inteval->stack[((hsi*396+27433)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+6905)*1+lsi)*1]), &(inteval->stack[((hsi*78+6996)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+6996)*1+lsi)*1]), &(inteval->stack[((hsi*66+7074)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+6996)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+6800)*1+lsi)*1]), &(inteval->stack[((hsi*91+6905)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+28297)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+21700)*1+lsi)*1]), &(inteval->stack[((hsi*468+28297)*1+lsi)*1]), &(inteval->stack[((hsi*396+6996)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+6565)*1+lsi)*1]), &(inteval->stack[((hsi*78+6656)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+6656)*1+lsi)*1]), &(inteval->stack[((hsi*66+6734)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+28765)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+6460)*1+lsi)*1]), &(inteval->stack[((hsi*91+6565)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+6460)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+21040)*1+lsi)*1]), &(inteval->stack[((hsi*468+6460)*1+lsi)*1]), &(inteval->stack[((hsi*396+28765)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+6225)*1+lsi)*1]), &(inteval->stack[((hsi*78+6316)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+6316)*1+lsi)*1]), &(inteval->stack[((hsi*66+6394)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+29161)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+6120)*1+lsi)*1]), &(inteval->stack[((hsi*91+6225)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+29557)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+20380)*1+lsi)*1]), &(inteval->stack[((hsi*468+29557)*1+lsi)*1]), &(inteval->stack[((hsi*396+29161)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+5885)*1+lsi)*1]), &(inteval->stack[((hsi*78+5976)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+5976)*1+lsi)*1]), &(inteval->stack[((hsi*66+6054)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+5976)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+5780)*1+lsi)*1]), &(inteval->stack[((hsi*91+5885)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+30025)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+19720)*1+lsi)*1]), &(inteval->stack[((hsi*468+30025)*1+lsi)*1]), &(inteval->stack[((hsi*396+5976)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+5545)*1+lsi)*1]), &(inteval->stack[((hsi*78+5636)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+5636)*1+lsi)*1]), &(inteval->stack[((hsi*66+5714)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30493)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+5440)*1+lsi)*1]), &(inteval->stack[((hsi*91+5545)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+5440)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+19060)*1+lsi)*1]), &(inteval->stack[((hsi*468+5440)*1+lsi)*1]), &(inteval->stack[((hsi*396+30493)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+5205)*1+lsi)*1]), &(inteval->stack[((hsi*78+5296)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+5296)*1+lsi)*1]), &(inteval->stack[((hsi*66+5374)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30889)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+5100)*1+lsi)*1]), &(inteval->stack[((hsi*91+5205)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+31285)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+18400)*1+lsi)*1]), &(inteval->stack[((hsi*468+31285)*1+lsi)*1]), &(inteval->stack[((hsi*396+30889)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+4865)*1+lsi)*1]), &(inteval->stack[((hsi*78+4956)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+4956)*1+lsi)*1]), &(inteval->stack[((hsi*66+5034)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+4956)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+4760)*1+lsi)*1]), &(inteval->stack[((hsi*91+4865)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+31753)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+17740)*1+lsi)*1]), &(inteval->stack[((hsi*468+31753)*1+lsi)*1]), &(inteval->stack[((hsi*396+4956)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+4525)*1+lsi)*1]), &(inteval->stack[((hsi*78+4616)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+4616)*1+lsi)*1]), &(inteval->stack[((hsi*66+4694)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+32221)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+4420)*1+lsi)*1]), &(inteval->stack[((hsi*91+4525)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+4420)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+17080)*1+lsi)*1]), &(inteval->stack[((hsi*468+4420)*1+lsi)*1]), &(inteval->stack[((hsi*396+32221)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+4185)*1+lsi)*1]), &(inteval->stack[((hsi*78+4276)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+4276)*1+lsi)*1]), &(inteval->stack[((hsi*66+4354)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+32617)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+4080)*1+lsi)*1]), &(inteval->stack[((hsi*91+4185)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+33013)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+16420)*1+lsi)*1]), &(inteval->stack[((hsi*468+33013)*1+lsi)*1]), &(inteval->stack[((hsi*396+32617)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+3845)*1+lsi)*1]), &(inteval->stack[((hsi*78+3936)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+3936)*1+lsi)*1]), &(inteval->stack[((hsi*66+4014)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+3936)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+3740)*1+lsi)*1]), &(inteval->stack[((hsi*91+3845)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+33481)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+15760)*1+lsi)*1]), &(inteval->stack[((hsi*468+33481)*1+lsi)*1]), &(inteval->stack[((hsi*396+3936)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+3505)*1+lsi)*1]), &(inteval->stack[((hsi*78+3596)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+3596)*1+lsi)*1]), &(inteval->stack[((hsi*66+3674)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+33949)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+3400)*1+lsi)*1]), &(inteval->stack[((hsi*91+3505)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+3400)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+15100)*1+lsi)*1]), &(inteval->stack[((hsi*468+3400)*1+lsi)*1]), &(inteval->stack[((hsi*396+33949)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+3165)*1+lsi)*1]), &(inteval->stack[((hsi*78+3256)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+3256)*1+lsi)*1]), &(inteval->stack[((hsi*66+3334)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+34345)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+3060)*1+lsi)*1]), &(inteval->stack[((hsi*91+3165)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+34741)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+14440)*1+lsi)*1]), &(inteval->stack[((hsi*468+34741)*1+lsi)*1]), &(inteval->stack[((hsi*396+34345)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+2825)*1+lsi)*1]), &(inteval->stack[((hsi*78+2916)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+2916)*1+lsi)*1]), &(inteval->stack[((hsi*66+2994)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+2916)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+2720)*1+lsi)*1]), &(inteval->stack[((hsi*91+2825)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+35209)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+13780)*1+lsi)*1]), &(inteval->stack[((hsi*468+35209)*1+lsi)*1]), &(inteval->stack[((hsi*396+2916)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+2485)*1+lsi)*1]), &(inteval->stack[((hsi*78+2576)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+2576)*1+lsi)*1]), &(inteval->stack[((hsi*66+2654)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+35677)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+2380)*1+lsi)*1]), &(inteval->stack[((hsi*91+2485)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+2380)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+13120)*1+lsi)*1]), &(inteval->stack[((hsi*468+2380)*1+lsi)*1]), &(inteval->stack[((hsi*396+35677)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+2145)*1+lsi)*1]), &(inteval->stack[((hsi*78+2236)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+2236)*1+lsi)*1]), &(inteval->stack[((hsi*66+2314)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+36073)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+2040)*1+lsi)*1]), &(inteval->stack[((hsi*91+2145)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+36469)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+12460)*1+lsi)*1]), &(inteval->stack[((hsi*468+36469)*1+lsi)*1]), &(inteval->stack[((hsi*396+36073)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+1805)*1+lsi)*1]), &(inteval->stack[((hsi*78+1896)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+1896)*1+lsi)*1]), &(inteval->stack[((hsi*66+1974)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+1896)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+1700)*1+lsi)*1]), &(inteval->stack[((hsi*91+1805)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+36937)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+11800)*1+lsi)*1]), &(inteval->stack[((hsi*468+36937)*1+lsi)*1]), &(inteval->stack[((hsi*396+1896)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+1465)*1+lsi)*1]), &(inteval->stack[((hsi*78+1556)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+1556)*1+lsi)*1]), &(inteval->stack[((hsi*66+1634)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+37405)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+1360)*1+lsi)*1]), &(inteval->stack[((hsi*91+1465)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+1360)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+11140)*1+lsi)*1]), &(inteval->stack[((hsi*468+1360)*1+lsi)*1]), &(inteval->stack[((hsi*396+37405)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+1125)*1+lsi)*1]), &(inteval->stack[((hsi*78+1216)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+1216)*1+lsi)*1]), &(inteval->stack[((hsi*66+1294)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+37801)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+1020)*1+lsi)*1]), &(inteval->stack[((hsi*91+1125)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+38197)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+10480)*1+lsi)*1]), &(inteval->stack[((hsi*468+38197)*1+lsi)*1]), &(inteval->stack[((hsi*396+37801)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+785)*1+lsi)*1]), &(inteval->stack[((hsi*78+876)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+876)*1+lsi)*1]), &(inteval->stack[((hsi*66+954)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+876)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+680)*1+lsi)*1]), &(inteval->stack[((hsi*91+785)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+38665)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+9820)*1+lsi)*1]), &(inteval->stack[((hsi*468+38665)*1+lsi)*1]), &(inteval->stack[((hsi*396+876)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+445)*1+lsi)*1]), &(inteval->stack[((hsi*78+536)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+536)*1+lsi)*1]), &(inteval->stack[((hsi*66+614)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+39133)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+340)*1+lsi)*1]), &(inteval->stack[((hsi*91+445)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+340)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+9160)*1+lsi)*1]), &(inteval->stack[((hsi*468+340)*1+lsi)*1]), &(inteval->stack[((hsi*396+39133)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]), &(inteval->stack[((hsi*78+196)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25234)*1+lsi)*1]), &(inteval->stack[((hsi*78+196)*1+lsi)*1]), &(inteval->stack[((hsi*66+274)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+39529)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]), &(inteval->stack[((hsi*198+25234)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*105+0)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+39925)*1+lsi)*1]), &(inteval->stack[((hsi*273+25828)*1+lsi)*1]), &(inteval->stack[((hsi*234+25000)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+8500)*1+lsi)*1]), &(inteval->stack[((hsi*468+39925)*1+lsi)*1]), &(inteval->stack[((hsi*396+39529)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*660+8500)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*660+9160)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*660+9820)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*660+10480)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*660+11140)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*660+11800)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*660+12460)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*660+13120)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*660+13780)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*660+14440)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*660+15100)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*660+15760)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*660+16420)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*660+17080)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*660+17740)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*660+18400)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*660+19060)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*660+19720)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*660+20380)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*660+21040)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*660+21700)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*660+22360)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*660+23020)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*660+23680)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*660+24340)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
