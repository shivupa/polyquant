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
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psp.h>
#include <_sphemultipole_M_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_M_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7250)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_M_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+7051)*1+lsi)*1]), &(inteval->stack[((hsi*66+7129)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+7129)*1+lsi)*1]), &(inteval->stack[((hsi*55+7195)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21363)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+6960)*1+lsi)*1]), &(inteval->stack[((hsi*78+7051)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+21927)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+20450)*1+lsi)*1]), &(inteval->stack[((hsi*396+21927)*1+lsi)*1]), &(inteval->stack[((hsi*330+21363)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+6761)*1+lsi)*1]), &(inteval->stack[((hsi*66+6839)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+6839)*1+lsi)*1]), &(inteval->stack[((hsi*55+6905)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+6839)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+6670)*1+lsi)*1]), &(inteval->stack[((hsi*78+6761)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+22323)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+19900)*1+lsi)*1]), &(inteval->stack[((hsi*396+22323)*1+lsi)*1]), &(inteval->stack[((hsi*330+6839)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+6471)*1+lsi)*1]), &(inteval->stack[((hsi*66+6549)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+6549)*1+lsi)*1]), &(inteval->stack[((hsi*55+6615)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+22719)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+6380)*1+lsi)*1]), &(inteval->stack[((hsi*78+6471)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+6380)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+19350)*1+lsi)*1]), &(inteval->stack[((hsi*396+6380)*1+lsi)*1]), &(inteval->stack[((hsi*330+22719)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+6181)*1+lsi)*1]), &(inteval->stack[((hsi*66+6259)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+6259)*1+lsi)*1]), &(inteval->stack[((hsi*55+6325)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+23049)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+6090)*1+lsi)*1]), &(inteval->stack[((hsi*78+6181)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+23379)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+18800)*1+lsi)*1]), &(inteval->stack[((hsi*396+23379)*1+lsi)*1]), &(inteval->stack[((hsi*330+23049)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+5891)*1+lsi)*1]), &(inteval->stack[((hsi*66+5969)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+5969)*1+lsi)*1]), &(inteval->stack[((hsi*55+6035)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+5969)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+5800)*1+lsi)*1]), &(inteval->stack[((hsi*78+5891)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+23775)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+18250)*1+lsi)*1]), &(inteval->stack[((hsi*396+23775)*1+lsi)*1]), &(inteval->stack[((hsi*330+5969)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+5601)*1+lsi)*1]), &(inteval->stack[((hsi*66+5679)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+5679)*1+lsi)*1]), &(inteval->stack[((hsi*55+5745)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+24171)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+5510)*1+lsi)*1]), &(inteval->stack[((hsi*78+5601)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+5510)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+17700)*1+lsi)*1]), &(inteval->stack[((hsi*396+5510)*1+lsi)*1]), &(inteval->stack[((hsi*330+24171)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+5311)*1+lsi)*1]), &(inteval->stack[((hsi*66+5389)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+5389)*1+lsi)*1]), &(inteval->stack[((hsi*55+5455)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+24501)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+5220)*1+lsi)*1]), &(inteval->stack[((hsi*78+5311)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+24831)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+17150)*1+lsi)*1]), &(inteval->stack[((hsi*396+24831)*1+lsi)*1]), &(inteval->stack[((hsi*330+24501)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+5021)*1+lsi)*1]), &(inteval->stack[((hsi*66+5099)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+5099)*1+lsi)*1]), &(inteval->stack[((hsi*55+5165)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+5099)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+4930)*1+lsi)*1]), &(inteval->stack[((hsi*78+5021)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+25227)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+16600)*1+lsi)*1]), &(inteval->stack[((hsi*396+25227)*1+lsi)*1]), &(inteval->stack[((hsi*330+5099)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+4731)*1+lsi)*1]), &(inteval->stack[((hsi*66+4809)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+4809)*1+lsi)*1]), &(inteval->stack[((hsi*55+4875)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25623)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+4640)*1+lsi)*1]), &(inteval->stack[((hsi*78+4731)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+4640)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+16050)*1+lsi)*1]), &(inteval->stack[((hsi*396+4640)*1+lsi)*1]), &(inteval->stack[((hsi*330+25623)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+4441)*1+lsi)*1]), &(inteval->stack[((hsi*66+4519)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+4519)*1+lsi)*1]), &(inteval->stack[((hsi*55+4585)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25953)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+4350)*1+lsi)*1]), &(inteval->stack[((hsi*78+4441)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26283)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+15500)*1+lsi)*1]), &(inteval->stack[((hsi*396+26283)*1+lsi)*1]), &(inteval->stack[((hsi*330+25953)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+4151)*1+lsi)*1]), &(inteval->stack[((hsi*66+4229)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+4229)*1+lsi)*1]), &(inteval->stack[((hsi*55+4295)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+4229)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+4060)*1+lsi)*1]), &(inteval->stack[((hsi*78+4151)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26679)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+14950)*1+lsi)*1]), &(inteval->stack[((hsi*396+26679)*1+lsi)*1]), &(inteval->stack[((hsi*330+4229)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+3861)*1+lsi)*1]), &(inteval->stack[((hsi*66+3939)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+3939)*1+lsi)*1]), &(inteval->stack[((hsi*55+4005)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+27075)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+3770)*1+lsi)*1]), &(inteval->stack[((hsi*78+3861)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+3770)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+14400)*1+lsi)*1]), &(inteval->stack[((hsi*396+3770)*1+lsi)*1]), &(inteval->stack[((hsi*330+27075)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+3571)*1+lsi)*1]), &(inteval->stack[((hsi*66+3649)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+3649)*1+lsi)*1]), &(inteval->stack[((hsi*55+3715)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+27405)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+3480)*1+lsi)*1]), &(inteval->stack[((hsi*78+3571)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+27735)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+13850)*1+lsi)*1]), &(inteval->stack[((hsi*396+27735)*1+lsi)*1]), &(inteval->stack[((hsi*330+27405)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+3281)*1+lsi)*1]), &(inteval->stack[((hsi*66+3359)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+3359)*1+lsi)*1]), &(inteval->stack[((hsi*55+3425)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+3359)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+3190)*1+lsi)*1]), &(inteval->stack[((hsi*78+3281)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+28131)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+13300)*1+lsi)*1]), &(inteval->stack[((hsi*396+28131)*1+lsi)*1]), &(inteval->stack[((hsi*330+3359)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+2991)*1+lsi)*1]), &(inteval->stack[((hsi*66+3069)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+3069)*1+lsi)*1]), &(inteval->stack[((hsi*55+3135)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+28527)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+2900)*1+lsi)*1]), &(inteval->stack[((hsi*78+2991)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+2900)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+12750)*1+lsi)*1]), &(inteval->stack[((hsi*396+2900)*1+lsi)*1]), &(inteval->stack[((hsi*330+28527)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+2701)*1+lsi)*1]), &(inteval->stack[((hsi*66+2779)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+2779)*1+lsi)*1]), &(inteval->stack[((hsi*55+2845)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+28857)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+2610)*1+lsi)*1]), &(inteval->stack[((hsi*78+2701)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+29187)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+12200)*1+lsi)*1]), &(inteval->stack[((hsi*396+29187)*1+lsi)*1]), &(inteval->stack[((hsi*330+28857)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+2411)*1+lsi)*1]), &(inteval->stack[((hsi*66+2489)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+2489)*1+lsi)*1]), &(inteval->stack[((hsi*55+2555)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+2489)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+2320)*1+lsi)*1]), &(inteval->stack[((hsi*78+2411)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+29583)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+11650)*1+lsi)*1]), &(inteval->stack[((hsi*396+29583)*1+lsi)*1]), &(inteval->stack[((hsi*330+2489)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+2121)*1+lsi)*1]), &(inteval->stack[((hsi*66+2199)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+2199)*1+lsi)*1]), &(inteval->stack[((hsi*55+2265)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+29979)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+2030)*1+lsi)*1]), &(inteval->stack[((hsi*78+2121)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+2030)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+11100)*1+lsi)*1]), &(inteval->stack[((hsi*396+2030)*1+lsi)*1]), &(inteval->stack[((hsi*330+29979)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+1831)*1+lsi)*1]), &(inteval->stack[((hsi*66+1909)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+1909)*1+lsi)*1]), &(inteval->stack[((hsi*55+1975)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+30309)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+1740)*1+lsi)*1]), &(inteval->stack[((hsi*78+1831)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30639)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+10550)*1+lsi)*1]), &(inteval->stack[((hsi*396+30639)*1+lsi)*1]), &(inteval->stack[((hsi*330+30309)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+1541)*1+lsi)*1]), &(inteval->stack[((hsi*66+1619)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+1619)*1+lsi)*1]), &(inteval->stack[((hsi*55+1685)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+1619)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+1450)*1+lsi)*1]), &(inteval->stack[((hsi*78+1541)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+31035)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+10000)*1+lsi)*1]), &(inteval->stack[((hsi*396+31035)*1+lsi)*1]), &(inteval->stack[((hsi*330+1619)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+1251)*1+lsi)*1]), &(inteval->stack[((hsi*66+1329)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+1329)*1+lsi)*1]), &(inteval->stack[((hsi*55+1395)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31431)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+1160)*1+lsi)*1]), &(inteval->stack[((hsi*78+1251)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+1160)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+9450)*1+lsi)*1]), &(inteval->stack[((hsi*396+1160)*1+lsi)*1]), &(inteval->stack[((hsi*330+31431)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+961)*1+lsi)*1]), &(inteval->stack[((hsi*66+1039)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+1039)*1+lsi)*1]), &(inteval->stack[((hsi*55+1105)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31761)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+870)*1+lsi)*1]), &(inteval->stack[((hsi*78+961)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+32091)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+8900)*1+lsi)*1]), &(inteval->stack[((hsi*396+32091)*1+lsi)*1]), &(inteval->stack[((hsi*330+31761)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+671)*1+lsi)*1]), &(inteval->stack[((hsi*66+749)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+749)*1+lsi)*1]), &(inteval->stack[((hsi*55+815)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+749)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+580)*1+lsi)*1]), &(inteval->stack[((hsi*78+671)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+32487)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+8350)*1+lsi)*1]), &(inteval->stack[((hsi*396+32487)*1+lsi)*1]), &(inteval->stack[((hsi*330+749)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+381)*1+lsi)*1]), &(inteval->stack[((hsi*66+459)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+459)*1+lsi)*1]), &(inteval->stack[((hsi*55+525)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+32883)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+290)*1+lsi)*1]), &(inteval->stack[((hsi*78+381)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+290)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+7800)*1+lsi)*1]), &(inteval->stack[((hsi*396+290)*1+lsi)*1]), &(inteval->stack[((hsi*330+32883)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]), &(inteval->stack[((hsi*66+169)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+21198)*1+lsi)*1]), &(inteval->stack[((hsi*66+169)*1+lsi)*1]), &(inteval->stack[((hsi*55+235)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+33213)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]), &(inteval->stack[((hsi*165+21198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*91+0)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+33543)*1+lsi)*1]), &(inteval->stack[((hsi*234+21693)*1+lsi)*1]), &(inteval->stack[((hsi*198+21000)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+7250)*1+lsi)*1]), &(inteval->stack[((hsi*396+33543)*1+lsi)*1]), &(inteval->stack[((hsi*330+33213)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*550+7250)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*550+7800)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*550+8350)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*550+8900)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*550+9450)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*550+10000)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*550+10550)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*550+11100)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*550+11650)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*550+12200)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*550+12750)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*550+13300)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*550+13850)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*550+14400)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*550+14950)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*550+15500)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*550+16050)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*550+16600)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*550+17150)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*550+17700)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*550+18250)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*550+18800)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*550+19350)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*550+19900)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*550+20450)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
