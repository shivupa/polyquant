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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lh.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psp.h>
#include <_sphemultipole_L_H_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_L_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11000)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_L_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+34625)*1+lsi)*1]), &(inteval->stack[((hsi*66+10834)*1+lsi)*1]), &(inteval->stack[((hsi*55+10900)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+34790)*1+lsi)*1]), &(inteval->stack[((hsi*78+10756)*1+lsi)*1]), &(inteval->stack[((hsi*66+10834)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+34988)*1+lsi)*1]), &(inteval->stack[((hsi*198+34790)*1+lsi)*1]), &(inteval->stack[((hsi*165+34625)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+35318)*1+lsi)*1]), &(inteval->stack[((hsi*91+10665)*1+lsi)*1]), &(inteval->stack[((hsi*78+10756)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+35552)*1+lsi)*1]), &(inteval->stack[((hsi*234+35318)*1+lsi)*1]), &(inteval->stack[((hsi*198+34790)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+35948)*1+lsi)*1]), &(inteval->stack[((hsi*396+35552)*1+lsi)*1]), &(inteval->stack[((hsi*330+34988)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+34790)*1+lsi)*1]), &(inteval->stack[((hsi*55+10900)*1+lsi)*1]), &(inteval->stack[((hsi*45+10955)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+36498)*1+lsi)*1]), &(inteval->stack[((hsi*165+34625)*1+lsi)*1]), &(inteval->stack[((hsi*135+34790)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+36768)*1+lsi)*1]), &(inteval->stack[((hsi*330+34988)*1+lsi)*1]), &(inteval->stack[((hsi*270+36498)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+34625)*1+lsi)*1]), &(inteval->stack[((hsi*550+35948)*1+lsi)*1]), &(inteval->stack[((hsi*450+36768)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+36498)*1+lsi)*1]), &(inteval->stack[((hsi*105+10560)*1+lsi)*1]), &(inteval->stack[((hsi*91+10665)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+36771)*1+lsi)*1]), &(inteval->stack[((hsi*273+36498)*1+lsi)*1]), &(inteval->stack[((hsi*234+35318)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+37239)*1+lsi)*1]), &(inteval->stack[((hsi*468+36771)*1+lsi)*1]), &(inteval->stack[((hsi*396+35552)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+37899)*1+lsi)*1]), &(inteval->stack[((hsi*660+37239)*1+lsi)*1]), &(inteval->stack[((hsi*550+35948)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+33680)*1+lsi)*1]), &(inteval->stack[((hsi*825+37899)*1+lsi)*1]), &(inteval->stack[((hsi*675+34625)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+35300)*1+lsi)*1]), &(inteval->stack[((hsi*66+10394)*1+lsi)*1]), &(inteval->stack[((hsi*55+10460)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+35465)*1+lsi)*1]), &(inteval->stack[((hsi*78+10316)*1+lsi)*1]), &(inteval->stack[((hsi*66+10394)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+35663)*1+lsi)*1]), &(inteval->stack[((hsi*198+35465)*1+lsi)*1]), &(inteval->stack[((hsi*165+35300)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+35993)*1+lsi)*1]), &(inteval->stack[((hsi*91+10225)*1+lsi)*1]), &(inteval->stack[((hsi*78+10316)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+36227)*1+lsi)*1]), &(inteval->stack[((hsi*234+35993)*1+lsi)*1]), &(inteval->stack[((hsi*198+35465)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+36623)*1+lsi)*1]), &(inteval->stack[((hsi*396+36227)*1+lsi)*1]), &(inteval->stack[((hsi*330+35663)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+37173)*1+lsi)*1]), &(inteval->stack[((hsi*55+10460)*1+lsi)*1]), &(inteval->stack[((hsi*45+10515)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+10316)*1+lsi)*1]), &(inteval->stack[((hsi*165+35300)*1+lsi)*1]), &(inteval->stack[((hsi*135+37173)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+37173)*1+lsi)*1]), &(inteval->stack[((hsi*330+35663)*1+lsi)*1]), &(inteval->stack[((hsi*270+10316)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+35300)*1+lsi)*1]), &(inteval->stack[((hsi*550+36623)*1+lsi)*1]), &(inteval->stack[((hsi*450+37173)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+37173)*1+lsi)*1]), &(inteval->stack[((hsi*105+10120)*1+lsi)*1]), &(inteval->stack[((hsi*91+10225)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+10120)*1+lsi)*1]), &(inteval->stack[((hsi*273+37173)*1+lsi)*1]), &(inteval->stack[((hsi*234+35993)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+37173)*1+lsi)*1]), &(inteval->stack[((hsi*468+10120)*1+lsi)*1]), &(inteval->stack[((hsi*396+36227)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+10120)*1+lsi)*1]), &(inteval->stack[((hsi*660+37173)*1+lsi)*1]), &(inteval->stack[((hsi*550+36623)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+32735)*1+lsi)*1]), &(inteval->stack[((hsi*825+10120)*1+lsi)*1]), &(inteval->stack[((hsi*675+35300)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+35975)*1+lsi)*1]), &(inteval->stack[((hsi*66+9954)*1+lsi)*1]), &(inteval->stack[((hsi*55+10020)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+36140)*1+lsi)*1]), &(inteval->stack[((hsi*78+9876)*1+lsi)*1]), &(inteval->stack[((hsi*66+9954)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+36338)*1+lsi)*1]), &(inteval->stack[((hsi*198+36140)*1+lsi)*1]), &(inteval->stack[((hsi*165+35975)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+36668)*1+lsi)*1]), &(inteval->stack[((hsi*91+9785)*1+lsi)*1]), &(inteval->stack[((hsi*78+9876)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+36902)*1+lsi)*1]), &(inteval->stack[((hsi*234+36668)*1+lsi)*1]), &(inteval->stack[((hsi*198+36140)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+37298)*1+lsi)*1]), &(inteval->stack[((hsi*396+36902)*1+lsi)*1]), &(inteval->stack[((hsi*330+36338)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+36140)*1+lsi)*1]), &(inteval->stack[((hsi*55+10020)*1+lsi)*1]), &(inteval->stack[((hsi*45+10075)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+38724)*1+lsi)*1]), &(inteval->stack[((hsi*165+35975)*1+lsi)*1]), &(inteval->stack[((hsi*135+36140)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+38994)*1+lsi)*1]), &(inteval->stack[((hsi*330+36338)*1+lsi)*1]), &(inteval->stack[((hsi*270+38724)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+35975)*1+lsi)*1]), &(inteval->stack[((hsi*550+37298)*1+lsi)*1]), &(inteval->stack[((hsi*450+38994)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+38724)*1+lsi)*1]), &(inteval->stack[((hsi*105+9680)*1+lsi)*1]), &(inteval->stack[((hsi*91+9785)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+38997)*1+lsi)*1]), &(inteval->stack[((hsi*273+38724)*1+lsi)*1]), &(inteval->stack[((hsi*234+36668)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+39465)*1+lsi)*1]), &(inteval->stack[((hsi*468+38997)*1+lsi)*1]), &(inteval->stack[((hsi*396+36902)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+40125)*1+lsi)*1]), &(inteval->stack[((hsi*660+39465)*1+lsi)*1]), &(inteval->stack[((hsi*550+37298)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+31790)*1+lsi)*1]), &(inteval->stack[((hsi*825+40125)*1+lsi)*1]), &(inteval->stack[((hsi*675+35975)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+38724)*1+lsi)*1]), &(inteval->stack[((hsi*66+9514)*1+lsi)*1]), &(inteval->stack[((hsi*55+9580)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+36650)*1+lsi)*1]), &(inteval->stack[((hsi*78+9436)*1+lsi)*1]), &(inteval->stack[((hsi*66+9514)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+38889)*1+lsi)*1]), &(inteval->stack[((hsi*198+36650)*1+lsi)*1]), &(inteval->stack[((hsi*165+38724)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+36848)*1+lsi)*1]), &(inteval->stack[((hsi*91+9345)*1+lsi)*1]), &(inteval->stack[((hsi*78+9436)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+39219)*1+lsi)*1]), &(inteval->stack[((hsi*234+36848)*1+lsi)*1]), &(inteval->stack[((hsi*198+36650)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+37082)*1+lsi)*1]), &(inteval->stack[((hsi*396+39219)*1+lsi)*1]), &(inteval->stack[((hsi*330+38889)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+39615)*1+lsi)*1]), &(inteval->stack[((hsi*55+9580)*1+lsi)*1]), &(inteval->stack[((hsi*45+9635)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+9436)*1+lsi)*1]), &(inteval->stack[((hsi*165+38724)*1+lsi)*1]), &(inteval->stack[((hsi*135+39615)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+39615)*1+lsi)*1]), &(inteval->stack[((hsi*330+38889)*1+lsi)*1]), &(inteval->stack[((hsi*270+9436)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+9436)*1+lsi)*1]), &(inteval->stack[((hsi*550+37082)*1+lsi)*1]), &(inteval->stack[((hsi*450+39615)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+39615)*1+lsi)*1]), &(inteval->stack[((hsi*105+9240)*1+lsi)*1]), &(inteval->stack[((hsi*91+9345)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+38724)*1+lsi)*1]), &(inteval->stack[((hsi*273+39615)*1+lsi)*1]), &(inteval->stack[((hsi*234+36848)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+40950)*1+lsi)*1]), &(inteval->stack[((hsi*468+38724)*1+lsi)*1]), &(inteval->stack[((hsi*396+39219)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+38724)*1+lsi)*1]), &(inteval->stack[((hsi*660+40950)*1+lsi)*1]), &(inteval->stack[((hsi*550+37082)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+30845)*1+lsi)*1]), &(inteval->stack[((hsi*825+38724)*1+lsi)*1]), &(inteval->stack[((hsi*675+9436)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+36650)*1+lsi)*1]), &(inteval->stack[((hsi*66+9074)*1+lsi)*1]), &(inteval->stack[((hsi*55+9140)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+36815)*1+lsi)*1]), &(inteval->stack[((hsi*78+8996)*1+lsi)*1]), &(inteval->stack[((hsi*66+9074)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+37013)*1+lsi)*1]), &(inteval->stack[((hsi*198+36815)*1+lsi)*1]), &(inteval->stack[((hsi*165+36650)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*91+8905)*1+lsi)*1]), &(inteval->stack[((hsi*78+8996)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+37343)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*198+36815)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+40950)*1+lsi)*1]), &(inteval->stack[((hsi*396+37343)*1+lsi)*1]), &(inteval->stack[((hsi*330+37013)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+39783)*1+lsi)*1]), &(inteval->stack[((hsi*55+9140)*1+lsi)*1]), &(inteval->stack[((hsi*45+9195)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+8996)*1+lsi)*1]), &(inteval->stack[((hsi*165+36650)*1+lsi)*1]), &(inteval->stack[((hsi*135+39783)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+41500)*1+lsi)*1]), &(inteval->stack[((hsi*330+37013)*1+lsi)*1]), &(inteval->stack[((hsi*270+8996)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+36650)*1+lsi)*1]), &(inteval->stack[((hsi*550+40950)*1+lsi)*1]), &(inteval->stack[((hsi*450+41500)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+8996)*1+lsi)*1]), &(inteval->stack[((hsi*105+8800)*1+lsi)*1]), &(inteval->stack[((hsi*91+8905)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+41500)*1+lsi)*1]), &(inteval->stack[((hsi*273+8996)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+41968)*1+lsi)*1]), &(inteval->stack[((hsi*468+41500)*1+lsi)*1]), &(inteval->stack[((hsi*396+37343)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+42628)*1+lsi)*1]), &(inteval->stack[((hsi*660+41968)*1+lsi)*1]), &(inteval->stack[((hsi*550+40950)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+29900)*1+lsi)*1]), &(inteval->stack[((hsi*825+42628)*1+lsi)*1]), &(inteval->stack[((hsi*675+36650)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+40950)*1+lsi)*1]), &(inteval->stack[((hsi*66+8634)*1+lsi)*1]), &(inteval->stack[((hsi*55+8700)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+41115)*1+lsi)*1]), &(inteval->stack[((hsi*78+8556)*1+lsi)*1]), &(inteval->stack[((hsi*66+8634)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+41313)*1+lsi)*1]), &(inteval->stack[((hsi*198+41115)*1+lsi)*1]), &(inteval->stack[((hsi*165+40950)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+41643)*1+lsi)*1]), &(inteval->stack[((hsi*91+8465)*1+lsi)*1]), &(inteval->stack[((hsi*78+8556)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+41877)*1+lsi)*1]), &(inteval->stack[((hsi*234+41643)*1+lsi)*1]), &(inteval->stack[((hsi*198+41115)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+8800)*1+lsi)*1]), &(inteval->stack[((hsi*396+41877)*1+lsi)*1]), &(inteval->stack[((hsi*330+41313)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+39549)*1+lsi)*1]), &(inteval->stack[((hsi*55+8700)*1+lsi)*1]), &(inteval->stack[((hsi*45+8755)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+37325)*1+lsi)*1]), &(inteval->stack[((hsi*165+40950)*1+lsi)*1]), &(inteval->stack[((hsi*135+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+39549)*1+lsi)*1]), &(inteval->stack[((hsi*330+41313)*1+lsi)*1]), &(inteval->stack[((hsi*270+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+40950)*1+lsi)*1]), &(inteval->stack[((hsi*550+8800)*1+lsi)*1]), &(inteval->stack[((hsi*450+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*105+8360)*1+lsi)*1]), &(inteval->stack[((hsi*91+8465)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*234+41643)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+43453)*1+lsi)*1]), &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*396+41877)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+41625)*1+lsi)*1]), &(inteval->stack[((hsi*660+43453)*1+lsi)*1]), &(inteval->stack[((hsi*550+8800)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+28955)*1+lsi)*1]), &(inteval->stack[((hsi*825+41625)*1+lsi)*1]), &(inteval->stack[((hsi*675+40950)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+8360)*1+lsi)*1]), &(inteval->stack[((hsi*66+8194)*1+lsi)*1]), &(inteval->stack[((hsi*55+8260)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+8525)*1+lsi)*1]), &(inteval->stack[((hsi*78+8116)*1+lsi)*1]), &(inteval->stack[((hsi*66+8194)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+8723)*1+lsi)*1]), &(inteval->stack[((hsi*198+8525)*1+lsi)*1]), &(inteval->stack[((hsi*165+8360)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*91+8025)*1+lsi)*1]), &(inteval->stack[((hsi*78+8116)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*198+8525)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+43453)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*330+8723)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+9053)*1+lsi)*1]), &(inteval->stack[((hsi*55+8260)*1+lsi)*1]), &(inteval->stack[((hsi*45+8315)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+39783)*1+lsi)*1]), &(inteval->stack[((hsi*165+8360)*1+lsi)*1]), &(inteval->stack[((hsi*135+9053)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+8116)*1+lsi)*1]), &(inteval->stack[((hsi*330+8723)*1+lsi)*1]), &(inteval->stack[((hsi*270+39783)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+8566)*1+lsi)*1]), &(inteval->stack[((hsi*550+43453)*1+lsi)*1]), &(inteval->stack[((hsi*450+8116)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+8116)*1+lsi)*1]), &(inteval->stack[((hsi*105+7920)*1+lsi)*1]), &(inteval->stack[((hsi*91+8025)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+44003)*1+lsi)*1]), &(inteval->stack[((hsi*273+8116)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+44471)*1+lsi)*1]), &(inteval->stack[((hsi*468+44003)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+45131)*1+lsi)*1]), &(inteval->stack[((hsi*660+44471)*1+lsi)*1]), &(inteval->stack[((hsi*550+43453)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+28010)*1+lsi)*1]), &(inteval->stack[((hsi*825+45131)*1+lsi)*1]), &(inteval->stack[((hsi*675+8566)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+43453)*1+lsi)*1]), &(inteval->stack[((hsi*66+7754)*1+lsi)*1]), &(inteval->stack[((hsi*55+7820)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+43618)*1+lsi)*1]), &(inteval->stack[((hsi*78+7676)*1+lsi)*1]), &(inteval->stack[((hsi*66+7754)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+43816)*1+lsi)*1]), &(inteval->stack[((hsi*198+43618)*1+lsi)*1]), &(inteval->stack[((hsi*165+43453)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+44146)*1+lsi)*1]), &(inteval->stack[((hsi*91+7585)*1+lsi)*1]), &(inteval->stack[((hsi*78+7676)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+44380)*1+lsi)*1]), &(inteval->stack[((hsi*234+44146)*1+lsi)*1]), &(inteval->stack[((hsi*198+43618)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+7920)*1+lsi)*1]), &(inteval->stack[((hsi*396+44380)*1+lsi)*1]), &(inteval->stack[((hsi*330+43816)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+39549)*1+lsi)*1]), &(inteval->stack[((hsi*55+7820)*1+lsi)*1]), &(inteval->stack[((hsi*45+7875)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+37325)*1+lsi)*1]), &(inteval->stack[((hsi*165+43453)*1+lsi)*1]), &(inteval->stack[((hsi*135+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+39549)*1+lsi)*1]), &(inteval->stack[((hsi*330+43816)*1+lsi)*1]), &(inteval->stack[((hsi*270+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+43453)*1+lsi)*1]), &(inteval->stack[((hsi*550+7920)*1+lsi)*1]), &(inteval->stack[((hsi*450+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*105+7480)*1+lsi)*1]), &(inteval->stack[((hsi*91+7585)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*234+44146)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+45956)*1+lsi)*1]), &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*396+44380)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+44128)*1+lsi)*1]), &(inteval->stack[((hsi*660+45956)*1+lsi)*1]), &(inteval->stack[((hsi*550+7920)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+27065)*1+lsi)*1]), &(inteval->stack[((hsi*825+44128)*1+lsi)*1]), &(inteval->stack[((hsi*675+43453)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+7480)*1+lsi)*1]), &(inteval->stack[((hsi*66+7314)*1+lsi)*1]), &(inteval->stack[((hsi*55+7380)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+7645)*1+lsi)*1]), &(inteval->stack[((hsi*78+7236)*1+lsi)*1]), &(inteval->stack[((hsi*66+7314)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+7843)*1+lsi)*1]), &(inteval->stack[((hsi*198+7645)*1+lsi)*1]), &(inteval->stack[((hsi*165+7480)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*91+7145)*1+lsi)*1]), &(inteval->stack[((hsi*78+7236)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*198+7645)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+45956)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*330+7843)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+8173)*1+lsi)*1]), &(inteval->stack[((hsi*55+7380)*1+lsi)*1]), &(inteval->stack[((hsi*45+7435)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+39783)*1+lsi)*1]), &(inteval->stack[((hsi*165+7480)*1+lsi)*1]), &(inteval->stack[((hsi*135+8173)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+7236)*1+lsi)*1]), &(inteval->stack[((hsi*330+7843)*1+lsi)*1]), &(inteval->stack[((hsi*270+39783)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+7686)*1+lsi)*1]), &(inteval->stack[((hsi*550+45956)*1+lsi)*1]), &(inteval->stack[((hsi*450+7236)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+7236)*1+lsi)*1]), &(inteval->stack[((hsi*105+7040)*1+lsi)*1]), &(inteval->stack[((hsi*91+7145)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+46506)*1+lsi)*1]), &(inteval->stack[((hsi*273+7236)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+46974)*1+lsi)*1]), &(inteval->stack[((hsi*468+46506)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+47634)*1+lsi)*1]), &(inteval->stack[((hsi*660+46974)*1+lsi)*1]), &(inteval->stack[((hsi*550+45956)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+26120)*1+lsi)*1]), &(inteval->stack[((hsi*825+47634)*1+lsi)*1]), &(inteval->stack[((hsi*675+7686)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+45956)*1+lsi)*1]), &(inteval->stack[((hsi*66+6874)*1+lsi)*1]), &(inteval->stack[((hsi*55+6940)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+46121)*1+lsi)*1]), &(inteval->stack[((hsi*78+6796)*1+lsi)*1]), &(inteval->stack[((hsi*66+6874)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+46319)*1+lsi)*1]), &(inteval->stack[((hsi*198+46121)*1+lsi)*1]), &(inteval->stack[((hsi*165+45956)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+46649)*1+lsi)*1]), &(inteval->stack[((hsi*91+6705)*1+lsi)*1]), &(inteval->stack[((hsi*78+6796)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+46883)*1+lsi)*1]), &(inteval->stack[((hsi*234+46649)*1+lsi)*1]), &(inteval->stack[((hsi*198+46121)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+7040)*1+lsi)*1]), &(inteval->stack[((hsi*396+46883)*1+lsi)*1]), &(inteval->stack[((hsi*330+46319)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+39549)*1+lsi)*1]), &(inteval->stack[((hsi*55+6940)*1+lsi)*1]), &(inteval->stack[((hsi*45+6995)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+37325)*1+lsi)*1]), &(inteval->stack[((hsi*165+45956)*1+lsi)*1]), &(inteval->stack[((hsi*135+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+39549)*1+lsi)*1]), &(inteval->stack[((hsi*330+46319)*1+lsi)*1]), &(inteval->stack[((hsi*270+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+45956)*1+lsi)*1]), &(inteval->stack[((hsi*550+7040)*1+lsi)*1]), &(inteval->stack[((hsi*450+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*105+6600)*1+lsi)*1]), &(inteval->stack[((hsi*91+6705)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*234+46649)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+48459)*1+lsi)*1]), &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*396+46883)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+46631)*1+lsi)*1]), &(inteval->stack[((hsi*660+48459)*1+lsi)*1]), &(inteval->stack[((hsi*550+7040)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+25175)*1+lsi)*1]), &(inteval->stack[((hsi*825+46631)*1+lsi)*1]), &(inteval->stack[((hsi*675+45956)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6600)*1+lsi)*1]), &(inteval->stack[((hsi*66+6434)*1+lsi)*1]), &(inteval->stack[((hsi*55+6500)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+6765)*1+lsi)*1]), &(inteval->stack[((hsi*78+6356)*1+lsi)*1]), &(inteval->stack[((hsi*66+6434)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+6963)*1+lsi)*1]), &(inteval->stack[((hsi*198+6765)*1+lsi)*1]), &(inteval->stack[((hsi*165+6600)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*91+6265)*1+lsi)*1]), &(inteval->stack[((hsi*78+6356)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*198+6765)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+48459)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*330+6963)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+7293)*1+lsi)*1]), &(inteval->stack[((hsi*55+6500)*1+lsi)*1]), &(inteval->stack[((hsi*45+6555)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+39783)*1+lsi)*1]), &(inteval->stack[((hsi*165+6600)*1+lsi)*1]), &(inteval->stack[((hsi*135+7293)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+6356)*1+lsi)*1]), &(inteval->stack[((hsi*330+6963)*1+lsi)*1]), &(inteval->stack[((hsi*270+39783)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+6806)*1+lsi)*1]), &(inteval->stack[((hsi*550+48459)*1+lsi)*1]), &(inteval->stack[((hsi*450+6356)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+6356)*1+lsi)*1]), &(inteval->stack[((hsi*105+6160)*1+lsi)*1]), &(inteval->stack[((hsi*91+6265)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+49009)*1+lsi)*1]), &(inteval->stack[((hsi*273+6356)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+49477)*1+lsi)*1]), &(inteval->stack[((hsi*468+49009)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+50137)*1+lsi)*1]), &(inteval->stack[((hsi*660+49477)*1+lsi)*1]), &(inteval->stack[((hsi*550+48459)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+24230)*1+lsi)*1]), &(inteval->stack[((hsi*825+50137)*1+lsi)*1]), &(inteval->stack[((hsi*675+6806)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+48459)*1+lsi)*1]), &(inteval->stack[((hsi*66+5994)*1+lsi)*1]), &(inteval->stack[((hsi*55+6060)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+48624)*1+lsi)*1]), &(inteval->stack[((hsi*78+5916)*1+lsi)*1]), &(inteval->stack[((hsi*66+5994)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+48822)*1+lsi)*1]), &(inteval->stack[((hsi*198+48624)*1+lsi)*1]), &(inteval->stack[((hsi*165+48459)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+49152)*1+lsi)*1]), &(inteval->stack[((hsi*91+5825)*1+lsi)*1]), &(inteval->stack[((hsi*78+5916)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+49386)*1+lsi)*1]), &(inteval->stack[((hsi*234+49152)*1+lsi)*1]), &(inteval->stack[((hsi*198+48624)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+6160)*1+lsi)*1]), &(inteval->stack[((hsi*396+49386)*1+lsi)*1]), &(inteval->stack[((hsi*330+48822)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+39549)*1+lsi)*1]), &(inteval->stack[((hsi*55+6060)*1+lsi)*1]), &(inteval->stack[((hsi*45+6115)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+37325)*1+lsi)*1]), &(inteval->stack[((hsi*165+48459)*1+lsi)*1]), &(inteval->stack[((hsi*135+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+39549)*1+lsi)*1]), &(inteval->stack[((hsi*330+48822)*1+lsi)*1]), &(inteval->stack[((hsi*270+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+48459)*1+lsi)*1]), &(inteval->stack[((hsi*550+6160)*1+lsi)*1]), &(inteval->stack[((hsi*450+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*105+5720)*1+lsi)*1]), &(inteval->stack[((hsi*91+5825)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*234+49152)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+50962)*1+lsi)*1]), &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*396+49386)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+49134)*1+lsi)*1]), &(inteval->stack[((hsi*660+50962)*1+lsi)*1]), &(inteval->stack[((hsi*550+6160)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+23285)*1+lsi)*1]), &(inteval->stack[((hsi*825+49134)*1+lsi)*1]), &(inteval->stack[((hsi*675+48459)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+5720)*1+lsi)*1]), &(inteval->stack[((hsi*66+5554)*1+lsi)*1]), &(inteval->stack[((hsi*55+5620)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+5885)*1+lsi)*1]), &(inteval->stack[((hsi*78+5476)*1+lsi)*1]), &(inteval->stack[((hsi*66+5554)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+6083)*1+lsi)*1]), &(inteval->stack[((hsi*198+5885)*1+lsi)*1]), &(inteval->stack[((hsi*165+5720)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*91+5385)*1+lsi)*1]), &(inteval->stack[((hsi*78+5476)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*198+5885)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+50962)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*330+6083)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+6413)*1+lsi)*1]), &(inteval->stack[((hsi*55+5620)*1+lsi)*1]), &(inteval->stack[((hsi*45+5675)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+39783)*1+lsi)*1]), &(inteval->stack[((hsi*165+5720)*1+lsi)*1]), &(inteval->stack[((hsi*135+6413)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+5476)*1+lsi)*1]), &(inteval->stack[((hsi*330+6083)*1+lsi)*1]), &(inteval->stack[((hsi*270+39783)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+5926)*1+lsi)*1]), &(inteval->stack[((hsi*550+50962)*1+lsi)*1]), &(inteval->stack[((hsi*450+5476)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+5476)*1+lsi)*1]), &(inteval->stack[((hsi*105+5280)*1+lsi)*1]), &(inteval->stack[((hsi*91+5385)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+51512)*1+lsi)*1]), &(inteval->stack[((hsi*273+5476)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+51980)*1+lsi)*1]), &(inteval->stack[((hsi*468+51512)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+52640)*1+lsi)*1]), &(inteval->stack[((hsi*660+51980)*1+lsi)*1]), &(inteval->stack[((hsi*550+50962)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+22340)*1+lsi)*1]), &(inteval->stack[((hsi*825+52640)*1+lsi)*1]), &(inteval->stack[((hsi*675+5926)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+50962)*1+lsi)*1]), &(inteval->stack[((hsi*66+5114)*1+lsi)*1]), &(inteval->stack[((hsi*55+5180)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+51127)*1+lsi)*1]), &(inteval->stack[((hsi*78+5036)*1+lsi)*1]), &(inteval->stack[((hsi*66+5114)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+51325)*1+lsi)*1]), &(inteval->stack[((hsi*198+51127)*1+lsi)*1]), &(inteval->stack[((hsi*165+50962)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+51655)*1+lsi)*1]), &(inteval->stack[((hsi*91+4945)*1+lsi)*1]), &(inteval->stack[((hsi*78+5036)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+51889)*1+lsi)*1]), &(inteval->stack[((hsi*234+51655)*1+lsi)*1]), &(inteval->stack[((hsi*198+51127)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+5280)*1+lsi)*1]), &(inteval->stack[((hsi*396+51889)*1+lsi)*1]), &(inteval->stack[((hsi*330+51325)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+39549)*1+lsi)*1]), &(inteval->stack[((hsi*55+5180)*1+lsi)*1]), &(inteval->stack[((hsi*45+5235)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+37325)*1+lsi)*1]), &(inteval->stack[((hsi*165+50962)*1+lsi)*1]), &(inteval->stack[((hsi*135+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+39549)*1+lsi)*1]), &(inteval->stack[((hsi*330+51325)*1+lsi)*1]), &(inteval->stack[((hsi*270+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+50962)*1+lsi)*1]), &(inteval->stack[((hsi*550+5280)*1+lsi)*1]), &(inteval->stack[((hsi*450+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*105+4840)*1+lsi)*1]), &(inteval->stack[((hsi*91+4945)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*234+51655)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+53465)*1+lsi)*1]), &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*396+51889)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+51637)*1+lsi)*1]), &(inteval->stack[((hsi*660+53465)*1+lsi)*1]), &(inteval->stack[((hsi*550+5280)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+21395)*1+lsi)*1]), &(inteval->stack[((hsi*825+51637)*1+lsi)*1]), &(inteval->stack[((hsi*675+50962)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4840)*1+lsi)*1]), &(inteval->stack[((hsi*66+4674)*1+lsi)*1]), &(inteval->stack[((hsi*55+4740)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+5005)*1+lsi)*1]), &(inteval->stack[((hsi*78+4596)*1+lsi)*1]), &(inteval->stack[((hsi*66+4674)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+5203)*1+lsi)*1]), &(inteval->stack[((hsi*198+5005)*1+lsi)*1]), &(inteval->stack[((hsi*165+4840)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*91+4505)*1+lsi)*1]), &(inteval->stack[((hsi*78+4596)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*198+5005)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+53465)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*330+5203)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5533)*1+lsi)*1]), &(inteval->stack[((hsi*55+4740)*1+lsi)*1]), &(inteval->stack[((hsi*45+4795)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+39783)*1+lsi)*1]), &(inteval->stack[((hsi*165+4840)*1+lsi)*1]), &(inteval->stack[((hsi*135+5533)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+4596)*1+lsi)*1]), &(inteval->stack[((hsi*330+5203)*1+lsi)*1]), &(inteval->stack[((hsi*270+39783)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+5046)*1+lsi)*1]), &(inteval->stack[((hsi*550+53465)*1+lsi)*1]), &(inteval->stack[((hsi*450+4596)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+4596)*1+lsi)*1]), &(inteval->stack[((hsi*105+4400)*1+lsi)*1]), &(inteval->stack[((hsi*91+4505)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+54015)*1+lsi)*1]), &(inteval->stack[((hsi*273+4596)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+54483)*1+lsi)*1]), &(inteval->stack[((hsi*468+54015)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+55143)*1+lsi)*1]), &(inteval->stack[((hsi*660+54483)*1+lsi)*1]), &(inteval->stack[((hsi*550+53465)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+20450)*1+lsi)*1]), &(inteval->stack[((hsi*825+55143)*1+lsi)*1]), &(inteval->stack[((hsi*675+5046)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+53465)*1+lsi)*1]), &(inteval->stack[((hsi*66+4234)*1+lsi)*1]), &(inteval->stack[((hsi*55+4300)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+53630)*1+lsi)*1]), &(inteval->stack[((hsi*78+4156)*1+lsi)*1]), &(inteval->stack[((hsi*66+4234)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+53828)*1+lsi)*1]), &(inteval->stack[((hsi*198+53630)*1+lsi)*1]), &(inteval->stack[((hsi*165+53465)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+54158)*1+lsi)*1]), &(inteval->stack[((hsi*91+4065)*1+lsi)*1]), &(inteval->stack[((hsi*78+4156)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+54392)*1+lsi)*1]), &(inteval->stack[((hsi*234+54158)*1+lsi)*1]), &(inteval->stack[((hsi*198+53630)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+4400)*1+lsi)*1]), &(inteval->stack[((hsi*396+54392)*1+lsi)*1]), &(inteval->stack[((hsi*330+53828)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+39549)*1+lsi)*1]), &(inteval->stack[((hsi*55+4300)*1+lsi)*1]), &(inteval->stack[((hsi*45+4355)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+37325)*1+lsi)*1]), &(inteval->stack[((hsi*165+53465)*1+lsi)*1]), &(inteval->stack[((hsi*135+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+39549)*1+lsi)*1]), &(inteval->stack[((hsi*330+53828)*1+lsi)*1]), &(inteval->stack[((hsi*270+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+53465)*1+lsi)*1]), &(inteval->stack[((hsi*550+4400)*1+lsi)*1]), &(inteval->stack[((hsi*450+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*105+3960)*1+lsi)*1]), &(inteval->stack[((hsi*91+4065)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*234+54158)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+55968)*1+lsi)*1]), &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*396+54392)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+54140)*1+lsi)*1]), &(inteval->stack[((hsi*660+55968)*1+lsi)*1]), &(inteval->stack[((hsi*550+4400)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+19505)*1+lsi)*1]), &(inteval->stack[((hsi*825+54140)*1+lsi)*1]), &(inteval->stack[((hsi*675+53465)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3960)*1+lsi)*1]), &(inteval->stack[((hsi*66+3794)*1+lsi)*1]), &(inteval->stack[((hsi*55+3860)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+4125)*1+lsi)*1]), &(inteval->stack[((hsi*78+3716)*1+lsi)*1]), &(inteval->stack[((hsi*66+3794)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+4323)*1+lsi)*1]), &(inteval->stack[((hsi*198+4125)*1+lsi)*1]), &(inteval->stack[((hsi*165+3960)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*91+3625)*1+lsi)*1]), &(inteval->stack[((hsi*78+3716)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*198+4125)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+55968)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*330+4323)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4653)*1+lsi)*1]), &(inteval->stack[((hsi*55+3860)*1+lsi)*1]), &(inteval->stack[((hsi*45+3915)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+39783)*1+lsi)*1]), &(inteval->stack[((hsi*165+3960)*1+lsi)*1]), &(inteval->stack[((hsi*135+4653)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+3716)*1+lsi)*1]), &(inteval->stack[((hsi*330+4323)*1+lsi)*1]), &(inteval->stack[((hsi*270+39783)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+4166)*1+lsi)*1]), &(inteval->stack[((hsi*550+55968)*1+lsi)*1]), &(inteval->stack[((hsi*450+3716)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+3716)*1+lsi)*1]), &(inteval->stack[((hsi*105+3520)*1+lsi)*1]), &(inteval->stack[((hsi*91+3625)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+56518)*1+lsi)*1]), &(inteval->stack[((hsi*273+3716)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+56986)*1+lsi)*1]), &(inteval->stack[((hsi*468+56518)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+57646)*1+lsi)*1]), &(inteval->stack[((hsi*660+56986)*1+lsi)*1]), &(inteval->stack[((hsi*550+55968)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+18560)*1+lsi)*1]), &(inteval->stack[((hsi*825+57646)*1+lsi)*1]), &(inteval->stack[((hsi*675+4166)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+55968)*1+lsi)*1]), &(inteval->stack[((hsi*66+3354)*1+lsi)*1]), &(inteval->stack[((hsi*55+3420)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+56133)*1+lsi)*1]), &(inteval->stack[((hsi*78+3276)*1+lsi)*1]), &(inteval->stack[((hsi*66+3354)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+56331)*1+lsi)*1]), &(inteval->stack[((hsi*198+56133)*1+lsi)*1]), &(inteval->stack[((hsi*165+55968)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+56661)*1+lsi)*1]), &(inteval->stack[((hsi*91+3185)*1+lsi)*1]), &(inteval->stack[((hsi*78+3276)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+56895)*1+lsi)*1]), &(inteval->stack[((hsi*234+56661)*1+lsi)*1]), &(inteval->stack[((hsi*198+56133)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+3520)*1+lsi)*1]), &(inteval->stack[((hsi*396+56895)*1+lsi)*1]), &(inteval->stack[((hsi*330+56331)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+39549)*1+lsi)*1]), &(inteval->stack[((hsi*55+3420)*1+lsi)*1]), &(inteval->stack[((hsi*45+3475)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+37325)*1+lsi)*1]), &(inteval->stack[((hsi*165+55968)*1+lsi)*1]), &(inteval->stack[((hsi*135+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+39549)*1+lsi)*1]), &(inteval->stack[((hsi*330+56331)*1+lsi)*1]), &(inteval->stack[((hsi*270+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+55968)*1+lsi)*1]), &(inteval->stack[((hsi*550+3520)*1+lsi)*1]), &(inteval->stack[((hsi*450+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*105+3080)*1+lsi)*1]), &(inteval->stack[((hsi*91+3185)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*234+56661)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+58471)*1+lsi)*1]), &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*396+56895)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+56643)*1+lsi)*1]), &(inteval->stack[((hsi*660+58471)*1+lsi)*1]), &(inteval->stack[((hsi*550+3520)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+17615)*1+lsi)*1]), &(inteval->stack[((hsi*825+56643)*1+lsi)*1]), &(inteval->stack[((hsi*675+55968)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3080)*1+lsi)*1]), &(inteval->stack[((hsi*66+2914)*1+lsi)*1]), &(inteval->stack[((hsi*55+2980)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+3245)*1+lsi)*1]), &(inteval->stack[((hsi*78+2836)*1+lsi)*1]), &(inteval->stack[((hsi*66+2914)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+3443)*1+lsi)*1]), &(inteval->stack[((hsi*198+3245)*1+lsi)*1]), &(inteval->stack[((hsi*165+3080)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*91+2745)*1+lsi)*1]), &(inteval->stack[((hsi*78+2836)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*198+3245)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+58471)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*330+3443)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3773)*1+lsi)*1]), &(inteval->stack[((hsi*55+2980)*1+lsi)*1]), &(inteval->stack[((hsi*45+3035)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+39783)*1+lsi)*1]), &(inteval->stack[((hsi*165+3080)*1+lsi)*1]), &(inteval->stack[((hsi*135+3773)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+2836)*1+lsi)*1]), &(inteval->stack[((hsi*330+3443)*1+lsi)*1]), &(inteval->stack[((hsi*270+39783)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+3286)*1+lsi)*1]), &(inteval->stack[((hsi*550+58471)*1+lsi)*1]), &(inteval->stack[((hsi*450+2836)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+2836)*1+lsi)*1]), &(inteval->stack[((hsi*105+2640)*1+lsi)*1]), &(inteval->stack[((hsi*91+2745)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+59021)*1+lsi)*1]), &(inteval->stack[((hsi*273+2836)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+59489)*1+lsi)*1]), &(inteval->stack[((hsi*468+59021)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+60149)*1+lsi)*1]), &(inteval->stack[((hsi*660+59489)*1+lsi)*1]), &(inteval->stack[((hsi*550+58471)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+16670)*1+lsi)*1]), &(inteval->stack[((hsi*825+60149)*1+lsi)*1]), &(inteval->stack[((hsi*675+3286)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+58471)*1+lsi)*1]), &(inteval->stack[((hsi*66+2474)*1+lsi)*1]), &(inteval->stack[((hsi*55+2540)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+58636)*1+lsi)*1]), &(inteval->stack[((hsi*78+2396)*1+lsi)*1]), &(inteval->stack[((hsi*66+2474)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+58834)*1+lsi)*1]), &(inteval->stack[((hsi*198+58636)*1+lsi)*1]), &(inteval->stack[((hsi*165+58471)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+59164)*1+lsi)*1]), &(inteval->stack[((hsi*91+2305)*1+lsi)*1]), &(inteval->stack[((hsi*78+2396)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+59398)*1+lsi)*1]), &(inteval->stack[((hsi*234+59164)*1+lsi)*1]), &(inteval->stack[((hsi*198+58636)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+2640)*1+lsi)*1]), &(inteval->stack[((hsi*396+59398)*1+lsi)*1]), &(inteval->stack[((hsi*330+58834)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+39549)*1+lsi)*1]), &(inteval->stack[((hsi*55+2540)*1+lsi)*1]), &(inteval->stack[((hsi*45+2595)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+37325)*1+lsi)*1]), &(inteval->stack[((hsi*165+58471)*1+lsi)*1]), &(inteval->stack[((hsi*135+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+39549)*1+lsi)*1]), &(inteval->stack[((hsi*330+58834)*1+lsi)*1]), &(inteval->stack[((hsi*270+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+58471)*1+lsi)*1]), &(inteval->stack[((hsi*550+2640)*1+lsi)*1]), &(inteval->stack[((hsi*450+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*105+2200)*1+lsi)*1]), &(inteval->stack[((hsi*91+2305)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*234+59164)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+60974)*1+lsi)*1]), &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*396+59398)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+59146)*1+lsi)*1]), &(inteval->stack[((hsi*660+60974)*1+lsi)*1]), &(inteval->stack[((hsi*550+2640)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+15725)*1+lsi)*1]), &(inteval->stack[((hsi*825+59146)*1+lsi)*1]), &(inteval->stack[((hsi*675+58471)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+2200)*1+lsi)*1]), &(inteval->stack[((hsi*66+2034)*1+lsi)*1]), &(inteval->stack[((hsi*55+2100)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+2365)*1+lsi)*1]), &(inteval->stack[((hsi*78+1956)*1+lsi)*1]), &(inteval->stack[((hsi*66+2034)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+2563)*1+lsi)*1]), &(inteval->stack[((hsi*198+2365)*1+lsi)*1]), &(inteval->stack[((hsi*165+2200)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*91+1865)*1+lsi)*1]), &(inteval->stack[((hsi*78+1956)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*198+2365)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+60974)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*330+2563)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+2893)*1+lsi)*1]), &(inteval->stack[((hsi*55+2100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2155)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+39783)*1+lsi)*1]), &(inteval->stack[((hsi*165+2200)*1+lsi)*1]), &(inteval->stack[((hsi*135+2893)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+1956)*1+lsi)*1]), &(inteval->stack[((hsi*330+2563)*1+lsi)*1]), &(inteval->stack[((hsi*270+39783)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+2406)*1+lsi)*1]), &(inteval->stack[((hsi*550+60974)*1+lsi)*1]), &(inteval->stack[((hsi*450+1956)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+1956)*1+lsi)*1]), &(inteval->stack[((hsi*105+1760)*1+lsi)*1]), &(inteval->stack[((hsi*91+1865)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+61524)*1+lsi)*1]), &(inteval->stack[((hsi*273+1956)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+61992)*1+lsi)*1]), &(inteval->stack[((hsi*468+61524)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+62652)*1+lsi)*1]), &(inteval->stack[((hsi*660+61992)*1+lsi)*1]), &(inteval->stack[((hsi*550+60974)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+14780)*1+lsi)*1]), &(inteval->stack[((hsi*825+62652)*1+lsi)*1]), &(inteval->stack[((hsi*675+2406)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+60974)*1+lsi)*1]), &(inteval->stack[((hsi*66+1594)*1+lsi)*1]), &(inteval->stack[((hsi*55+1660)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+61139)*1+lsi)*1]), &(inteval->stack[((hsi*78+1516)*1+lsi)*1]), &(inteval->stack[((hsi*66+1594)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+61337)*1+lsi)*1]), &(inteval->stack[((hsi*198+61139)*1+lsi)*1]), &(inteval->stack[((hsi*165+60974)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+61667)*1+lsi)*1]), &(inteval->stack[((hsi*91+1425)*1+lsi)*1]), &(inteval->stack[((hsi*78+1516)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+61901)*1+lsi)*1]), &(inteval->stack[((hsi*234+61667)*1+lsi)*1]), &(inteval->stack[((hsi*198+61139)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+1760)*1+lsi)*1]), &(inteval->stack[((hsi*396+61901)*1+lsi)*1]), &(inteval->stack[((hsi*330+61337)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+39549)*1+lsi)*1]), &(inteval->stack[((hsi*55+1660)*1+lsi)*1]), &(inteval->stack[((hsi*45+1715)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+37325)*1+lsi)*1]), &(inteval->stack[((hsi*165+60974)*1+lsi)*1]), &(inteval->stack[((hsi*135+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+39549)*1+lsi)*1]), &(inteval->stack[((hsi*330+61337)*1+lsi)*1]), &(inteval->stack[((hsi*270+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+60974)*1+lsi)*1]), &(inteval->stack[((hsi*550+1760)*1+lsi)*1]), &(inteval->stack[((hsi*450+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*105+1320)*1+lsi)*1]), &(inteval->stack[((hsi*91+1425)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*234+61667)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+63477)*1+lsi)*1]), &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*396+61901)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+61649)*1+lsi)*1]), &(inteval->stack[((hsi*660+63477)*1+lsi)*1]), &(inteval->stack[((hsi*550+1760)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+13835)*1+lsi)*1]), &(inteval->stack[((hsi*825+61649)*1+lsi)*1]), &(inteval->stack[((hsi*675+60974)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1320)*1+lsi)*1]), &(inteval->stack[((hsi*66+1154)*1+lsi)*1]), &(inteval->stack[((hsi*55+1220)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+1485)*1+lsi)*1]), &(inteval->stack[((hsi*78+1076)*1+lsi)*1]), &(inteval->stack[((hsi*66+1154)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+1683)*1+lsi)*1]), &(inteval->stack[((hsi*198+1485)*1+lsi)*1]), &(inteval->stack[((hsi*165+1320)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*91+985)*1+lsi)*1]), &(inteval->stack[((hsi*78+1076)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*198+1485)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+63477)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*330+1683)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+2013)*1+lsi)*1]), &(inteval->stack[((hsi*55+1220)*1+lsi)*1]), &(inteval->stack[((hsi*45+1275)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+39783)*1+lsi)*1]), &(inteval->stack[((hsi*165+1320)*1+lsi)*1]), &(inteval->stack[((hsi*135+2013)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+1076)*1+lsi)*1]), &(inteval->stack[((hsi*330+1683)*1+lsi)*1]), &(inteval->stack[((hsi*270+39783)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+1526)*1+lsi)*1]), &(inteval->stack[((hsi*550+63477)*1+lsi)*1]), &(inteval->stack[((hsi*450+1076)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+1076)*1+lsi)*1]), &(inteval->stack[((hsi*105+880)*1+lsi)*1]), &(inteval->stack[((hsi*91+985)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+64027)*1+lsi)*1]), &(inteval->stack[((hsi*273+1076)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+64495)*1+lsi)*1]), &(inteval->stack[((hsi*468+64027)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+65155)*1+lsi)*1]), &(inteval->stack[((hsi*660+64495)*1+lsi)*1]), &(inteval->stack[((hsi*550+63477)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+12890)*1+lsi)*1]), &(inteval->stack[((hsi*825+65155)*1+lsi)*1]), &(inteval->stack[((hsi*675+1526)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+63477)*1+lsi)*1]), &(inteval->stack[((hsi*66+714)*1+lsi)*1]), &(inteval->stack[((hsi*55+780)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+63642)*1+lsi)*1]), &(inteval->stack[((hsi*78+636)*1+lsi)*1]), &(inteval->stack[((hsi*66+714)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+63840)*1+lsi)*1]), &(inteval->stack[((hsi*198+63642)*1+lsi)*1]), &(inteval->stack[((hsi*165+63477)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+64170)*1+lsi)*1]), &(inteval->stack[((hsi*91+545)*1+lsi)*1]), &(inteval->stack[((hsi*78+636)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+64404)*1+lsi)*1]), &(inteval->stack[((hsi*234+64170)*1+lsi)*1]), &(inteval->stack[((hsi*198+63642)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+880)*1+lsi)*1]), &(inteval->stack[((hsi*396+64404)*1+lsi)*1]), &(inteval->stack[((hsi*330+63840)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+39549)*1+lsi)*1]), &(inteval->stack[((hsi*55+780)*1+lsi)*1]), &(inteval->stack[((hsi*45+835)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+37325)*1+lsi)*1]), &(inteval->stack[((hsi*165+63477)*1+lsi)*1]), &(inteval->stack[((hsi*135+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+39549)*1+lsi)*1]), &(inteval->stack[((hsi*330+63840)*1+lsi)*1]), &(inteval->stack[((hsi*270+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+63477)*1+lsi)*1]), &(inteval->stack[((hsi*550+880)*1+lsi)*1]), &(inteval->stack[((hsi*450+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*105+440)*1+lsi)*1]), &(inteval->stack[((hsi*91+545)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*273+39549)*1+lsi)*1]), &(inteval->stack[((hsi*234+64170)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+65980)*1+lsi)*1]), &(inteval->stack[((hsi*468+37325)*1+lsi)*1]), &(inteval->stack[((hsi*396+64404)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+64152)*1+lsi)*1]), &(inteval->stack[((hsi*660+65980)*1+lsi)*1]), &(inteval->stack[((hsi*550+880)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+11945)*1+lsi)*1]), &(inteval->stack[((hsi*825+64152)*1+lsi)*1]), &(inteval->stack[((hsi*675+63477)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+440)*1+lsi)*1]), &(inteval->stack[((hsi*66+274)*1+lsi)*1]), &(inteval->stack[((hsi*55+340)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+605)*1+lsi)*1]), &(inteval->stack[((hsi*78+196)*1+lsi)*1]), &(inteval->stack[((hsi*66+274)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+803)*1+lsi)*1]), &(inteval->stack[((hsi*198+605)*1+lsi)*1]), &(inteval->stack[((hsi*165+440)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]), &(inteval->stack[((hsi*78+196)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]), &(inteval->stack[((hsi*198+605)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+65980)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]), &(inteval->stack[((hsi*330+803)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+1133)*1+lsi)*1]), &(inteval->stack[((hsi*55+340)*1+lsi)*1]), &(inteval->stack[((hsi*45+395)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+39783)*1+lsi)*1]), &(inteval->stack[((hsi*165+440)*1+lsi)*1]), &(inteval->stack[((hsi*135+1133)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+196)*1+lsi)*1]), &(inteval->stack[((hsi*330+803)*1+lsi)*1]), &(inteval->stack[((hsi*270+39783)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+646)*1+lsi)*1]), &(inteval->stack[((hsi*550+65980)*1+lsi)*1]), &(inteval->stack[((hsi*450+196)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+196)*1+lsi)*1]), &(inteval->stack[((hsi*105+0)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+66530)*1+lsi)*1]), &(inteval->stack[((hsi*273+196)*1+lsi)*1]), &(inteval->stack[((hsi*234+39549)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+66998)*1+lsi)*1]), &(inteval->stack[((hsi*468+66530)*1+lsi)*1]), &(inteval->stack[((hsi*396+37325)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+67658)*1+lsi)*1]), &(inteval->stack[((hsi*660+66998)*1+lsi)*1]), &(inteval->stack[((hsi*550+65980)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+11000)*1+lsi)*1]), &(inteval->stack[((hsi*825+67658)*1+lsi)*1]), &(inteval->stack[((hsi*675+646)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*945+11000)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*945+11945)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*945+12890)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*945+13835)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*945+14780)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*945+15725)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*945+16670)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*945+17615)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*945+18560)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*945+19505)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*945+20450)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*945+21395)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*945+22340)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*945+23285)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*945+24230)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*945+25175)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*945+26120)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*945+27065)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*945+28010)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*945+28955)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*945+29900)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*945+30845)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*945+31790)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*945+32735)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*945+33680)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
