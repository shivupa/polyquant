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
#include <HRRPart0ket0bra0ld.h>
#include <HRRPart0ket0bra0lf.h>
#include <HRRPart0ket0bra0lp.h>
#include <HRRPart0ket0bra0md.h>
#include <HRRPart0ket0bra0mp.h>
#include <HRRPart0ket0bra0psp.h>
#include <_sphemultipole_F_L_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_F_L(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6100)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_F_L_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+5934)*1+lsi)*1]), &(inteval->stack[((hsi*55+6000)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+6000)*1+lsi)*1]), &(inteval->stack[((hsi*45+6055)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+17650)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+5856)*1+lsi)*1]), &(inteval->stack[((hsi*66+5934)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+18118)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+16900)*1+lsi)*1]), &(inteval->stack[((hsi*330+18118)*1+lsi)*1]), &(inteval->stack[((hsi*270+17650)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+5690)*1+lsi)*1]), &(inteval->stack[((hsi*55+5756)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+5756)*1+lsi)*1]), &(inteval->stack[((hsi*45+5811)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+5756)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+5612)*1+lsi)*1]), &(inteval->stack[((hsi*66+5690)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+18448)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+16450)*1+lsi)*1]), &(inteval->stack[((hsi*330+18448)*1+lsi)*1]), &(inteval->stack[((hsi*270+5756)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+5446)*1+lsi)*1]), &(inteval->stack[((hsi*55+5512)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+5512)*1+lsi)*1]), &(inteval->stack[((hsi*45+5567)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+18778)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+5368)*1+lsi)*1]), &(inteval->stack[((hsi*66+5446)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+5368)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+16000)*1+lsi)*1]), &(inteval->stack[((hsi*330+5368)*1+lsi)*1]), &(inteval->stack[((hsi*270+18778)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+5202)*1+lsi)*1]), &(inteval->stack[((hsi*55+5268)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+5268)*1+lsi)*1]), &(inteval->stack[((hsi*45+5323)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+19048)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+5124)*1+lsi)*1]), &(inteval->stack[((hsi*66+5202)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+19318)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+15550)*1+lsi)*1]), &(inteval->stack[((hsi*330+19318)*1+lsi)*1]), &(inteval->stack[((hsi*270+19048)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+4958)*1+lsi)*1]), &(inteval->stack[((hsi*55+5024)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+5024)*1+lsi)*1]), &(inteval->stack[((hsi*45+5079)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+5024)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+4880)*1+lsi)*1]), &(inteval->stack[((hsi*66+4958)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+19648)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+15100)*1+lsi)*1]), &(inteval->stack[((hsi*330+19648)*1+lsi)*1]), &(inteval->stack[((hsi*270+5024)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+4714)*1+lsi)*1]), &(inteval->stack[((hsi*55+4780)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+4780)*1+lsi)*1]), &(inteval->stack[((hsi*45+4835)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+19978)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+4636)*1+lsi)*1]), &(inteval->stack[((hsi*66+4714)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+4636)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+14650)*1+lsi)*1]), &(inteval->stack[((hsi*330+4636)*1+lsi)*1]), &(inteval->stack[((hsi*270+19978)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+4470)*1+lsi)*1]), &(inteval->stack[((hsi*55+4536)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+4536)*1+lsi)*1]), &(inteval->stack[((hsi*45+4591)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+20248)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+4392)*1+lsi)*1]), &(inteval->stack[((hsi*66+4470)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+20518)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+14200)*1+lsi)*1]), &(inteval->stack[((hsi*330+20518)*1+lsi)*1]), &(inteval->stack[((hsi*270+20248)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+4226)*1+lsi)*1]), &(inteval->stack[((hsi*55+4292)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+4292)*1+lsi)*1]), &(inteval->stack[((hsi*45+4347)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+4292)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+4148)*1+lsi)*1]), &(inteval->stack[((hsi*66+4226)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+20848)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+13750)*1+lsi)*1]), &(inteval->stack[((hsi*330+20848)*1+lsi)*1]), &(inteval->stack[((hsi*270+4292)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+3982)*1+lsi)*1]), &(inteval->stack[((hsi*55+4048)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+4048)*1+lsi)*1]), &(inteval->stack[((hsi*45+4103)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+21178)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+3904)*1+lsi)*1]), &(inteval->stack[((hsi*66+3982)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+3904)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+13300)*1+lsi)*1]), &(inteval->stack[((hsi*330+3904)*1+lsi)*1]), &(inteval->stack[((hsi*270+21178)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+3738)*1+lsi)*1]), &(inteval->stack[((hsi*55+3804)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+3804)*1+lsi)*1]), &(inteval->stack[((hsi*45+3859)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+21448)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+3660)*1+lsi)*1]), &(inteval->stack[((hsi*66+3738)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+21718)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+12850)*1+lsi)*1]), &(inteval->stack[((hsi*330+21718)*1+lsi)*1]), &(inteval->stack[((hsi*270+21448)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+3494)*1+lsi)*1]), &(inteval->stack[((hsi*55+3560)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+3560)*1+lsi)*1]), &(inteval->stack[((hsi*45+3615)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+3560)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+3416)*1+lsi)*1]), &(inteval->stack[((hsi*66+3494)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+22048)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+12400)*1+lsi)*1]), &(inteval->stack[((hsi*330+22048)*1+lsi)*1]), &(inteval->stack[((hsi*270+3560)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+3250)*1+lsi)*1]), &(inteval->stack[((hsi*55+3316)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+3316)*1+lsi)*1]), &(inteval->stack[((hsi*45+3371)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+22378)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+3172)*1+lsi)*1]), &(inteval->stack[((hsi*66+3250)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+3172)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+11950)*1+lsi)*1]), &(inteval->stack[((hsi*330+3172)*1+lsi)*1]), &(inteval->stack[((hsi*270+22378)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+3006)*1+lsi)*1]), &(inteval->stack[((hsi*55+3072)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+3072)*1+lsi)*1]), &(inteval->stack[((hsi*45+3127)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+22648)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+2928)*1+lsi)*1]), &(inteval->stack[((hsi*66+3006)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+22918)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+11500)*1+lsi)*1]), &(inteval->stack[((hsi*330+22918)*1+lsi)*1]), &(inteval->stack[((hsi*270+22648)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+2762)*1+lsi)*1]), &(inteval->stack[((hsi*55+2828)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+2828)*1+lsi)*1]), &(inteval->stack[((hsi*45+2883)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+2828)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+2684)*1+lsi)*1]), &(inteval->stack[((hsi*66+2762)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+23248)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+11050)*1+lsi)*1]), &(inteval->stack[((hsi*330+23248)*1+lsi)*1]), &(inteval->stack[((hsi*270+2828)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+2518)*1+lsi)*1]), &(inteval->stack[((hsi*55+2584)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+2584)*1+lsi)*1]), &(inteval->stack[((hsi*45+2639)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+23578)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+2440)*1+lsi)*1]), &(inteval->stack[((hsi*66+2518)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+2440)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+10600)*1+lsi)*1]), &(inteval->stack[((hsi*330+2440)*1+lsi)*1]), &(inteval->stack[((hsi*270+23578)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+2274)*1+lsi)*1]), &(inteval->stack[((hsi*55+2340)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+2340)*1+lsi)*1]), &(inteval->stack[((hsi*45+2395)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+23848)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+2196)*1+lsi)*1]), &(inteval->stack[((hsi*66+2274)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+24118)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+10150)*1+lsi)*1]), &(inteval->stack[((hsi*330+24118)*1+lsi)*1]), &(inteval->stack[((hsi*270+23848)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+2030)*1+lsi)*1]), &(inteval->stack[((hsi*55+2096)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+2096)*1+lsi)*1]), &(inteval->stack[((hsi*45+2151)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+2096)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+1952)*1+lsi)*1]), &(inteval->stack[((hsi*66+2030)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+24448)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+9700)*1+lsi)*1]), &(inteval->stack[((hsi*330+24448)*1+lsi)*1]), &(inteval->stack[((hsi*270+2096)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+1786)*1+lsi)*1]), &(inteval->stack[((hsi*55+1852)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+1852)*1+lsi)*1]), &(inteval->stack[((hsi*45+1907)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+24778)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+1708)*1+lsi)*1]), &(inteval->stack[((hsi*66+1786)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+1708)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+9250)*1+lsi)*1]), &(inteval->stack[((hsi*330+1708)*1+lsi)*1]), &(inteval->stack[((hsi*270+24778)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+1542)*1+lsi)*1]), &(inteval->stack[((hsi*55+1608)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+1608)*1+lsi)*1]), &(inteval->stack[((hsi*45+1663)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+25048)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+1464)*1+lsi)*1]), &(inteval->stack[((hsi*66+1542)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+25318)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+8800)*1+lsi)*1]), &(inteval->stack[((hsi*330+25318)*1+lsi)*1]), &(inteval->stack[((hsi*270+25048)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+1298)*1+lsi)*1]), &(inteval->stack[((hsi*55+1364)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+1364)*1+lsi)*1]), &(inteval->stack[((hsi*45+1419)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+1364)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+1220)*1+lsi)*1]), &(inteval->stack[((hsi*66+1298)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+25648)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+8350)*1+lsi)*1]), &(inteval->stack[((hsi*330+25648)*1+lsi)*1]), &(inteval->stack[((hsi*270+1364)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+1054)*1+lsi)*1]), &(inteval->stack[((hsi*55+1120)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+1120)*1+lsi)*1]), &(inteval->stack[((hsi*45+1175)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+25978)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+976)*1+lsi)*1]), &(inteval->stack[((hsi*66+1054)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+976)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+7900)*1+lsi)*1]), &(inteval->stack[((hsi*330+976)*1+lsi)*1]), &(inteval->stack[((hsi*270+25978)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+810)*1+lsi)*1]), &(inteval->stack[((hsi*55+876)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+876)*1+lsi)*1]), &(inteval->stack[((hsi*45+931)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+26248)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+732)*1+lsi)*1]), &(inteval->stack[((hsi*66+810)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+26518)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+7450)*1+lsi)*1]), &(inteval->stack[((hsi*330+26518)*1+lsi)*1]), &(inteval->stack[((hsi*270+26248)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+566)*1+lsi)*1]), &(inteval->stack[((hsi*55+632)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+632)*1+lsi)*1]), &(inteval->stack[((hsi*45+687)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+632)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+488)*1+lsi)*1]), &(inteval->stack[((hsi*66+566)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+26848)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+7000)*1+lsi)*1]), &(inteval->stack[((hsi*330+26848)*1+lsi)*1]), &(inteval->stack[((hsi*270+632)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+322)*1+lsi)*1]), &(inteval->stack[((hsi*55+388)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+388)*1+lsi)*1]), &(inteval->stack[((hsi*45+443)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+27178)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+244)*1+lsi)*1]), &(inteval->stack[((hsi*66+322)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+244)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+6550)*1+lsi)*1]), &(inteval->stack[((hsi*330+244)*1+lsi)*1]), &(inteval->stack[((hsi*270+27178)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]), &(inteval->stack[((hsi*55+144)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17515)*1+lsi)*1]), &(inteval->stack[((hsi*55+144)*1+lsi)*1]), &(inteval->stack[((hsi*45+199)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+27448)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]), &(inteval->stack[((hsi*135+17515)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*78+0)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+27718)*1+lsi)*1]), &(inteval->stack[((hsi*198+17920)*1+lsi)*1]), &(inteval->stack[((hsi*165+17350)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+6100)*1+lsi)*1]), &(inteval->stack[((hsi*330+27718)*1+lsi)*1]), &(inteval->stack[((hsi*270+27448)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*450+6100)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*450+6550)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*450+7000)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*450+7450)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*450+7900)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*450+8350)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*450+8800)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*450+9250)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*450+9700)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*450+10150)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*450+10600)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*450+11050)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*450+11500)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*450+11950)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*450+12400)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*450+12850)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*450+13300)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*450+13750)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*450+14200)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*450+14650)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*450+15100)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*450+15550)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*450+16000)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*450+16450)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*450+16900)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
