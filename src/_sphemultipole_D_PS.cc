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
#include <HRRPart0ket0bra0ppp.h>
#include <HRRPart0ket0bra0psd.h>
#include <HRRPart0ket0bra0psp.h>
#include <_sphemultipole_D_PS_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_D_PS(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5875)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_PS_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+15775)*1+lsi)*1]), &(inteval->stack[((hsi*78+5731)*1+lsi)*1]), &(inteval->stack[((hsi*66+5809)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+15973)*1+lsi)*1]), &(inteval->stack[((hsi*91+5640)*1+lsi)*1]), &(inteval->stack[((hsi*78+5731)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+15379)*1+lsi)*1]), &(inteval->stack[((hsi*234+15973)*1+lsi)*1]), &(inteval->stack[((hsi*198+15775)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+5640)*1+lsi)*1]), &(inteval->stack[((hsi*78+5496)*1+lsi)*1]), &(inteval->stack[((hsi*66+5574)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+16207)*1+lsi)*1]), &(inteval->stack[((hsi*91+5405)*1+lsi)*1]), &(inteval->stack[((hsi*78+5496)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+14983)*1+lsi)*1]), &(inteval->stack[((hsi*234+16207)*1+lsi)*1]), &(inteval->stack[((hsi*198+5640)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+5405)*1+lsi)*1]), &(inteval->stack[((hsi*78+5261)*1+lsi)*1]), &(inteval->stack[((hsi*66+5339)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+16441)*1+lsi)*1]), &(inteval->stack[((hsi*91+5170)*1+lsi)*1]), &(inteval->stack[((hsi*78+5261)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+14587)*1+lsi)*1]), &(inteval->stack[((hsi*234+16441)*1+lsi)*1]), &(inteval->stack[((hsi*198+5405)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+5170)*1+lsi)*1]), &(inteval->stack[((hsi*78+5026)*1+lsi)*1]), &(inteval->stack[((hsi*66+5104)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+16675)*1+lsi)*1]), &(inteval->stack[((hsi*91+4935)*1+lsi)*1]), &(inteval->stack[((hsi*78+5026)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+14191)*1+lsi)*1]), &(inteval->stack[((hsi*234+16675)*1+lsi)*1]), &(inteval->stack[((hsi*198+5170)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+4935)*1+lsi)*1]), &(inteval->stack[((hsi*78+4791)*1+lsi)*1]), &(inteval->stack[((hsi*66+4869)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+16909)*1+lsi)*1]), &(inteval->stack[((hsi*91+4700)*1+lsi)*1]), &(inteval->stack[((hsi*78+4791)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+13795)*1+lsi)*1]), &(inteval->stack[((hsi*234+16909)*1+lsi)*1]), &(inteval->stack[((hsi*198+4935)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+4700)*1+lsi)*1]), &(inteval->stack[((hsi*78+4556)*1+lsi)*1]), &(inteval->stack[((hsi*66+4634)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+17143)*1+lsi)*1]), &(inteval->stack[((hsi*91+4465)*1+lsi)*1]), &(inteval->stack[((hsi*78+4556)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+13399)*1+lsi)*1]), &(inteval->stack[((hsi*234+17143)*1+lsi)*1]), &(inteval->stack[((hsi*198+4700)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+4465)*1+lsi)*1]), &(inteval->stack[((hsi*78+4321)*1+lsi)*1]), &(inteval->stack[((hsi*66+4399)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+17377)*1+lsi)*1]), &(inteval->stack[((hsi*91+4230)*1+lsi)*1]), &(inteval->stack[((hsi*78+4321)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+13003)*1+lsi)*1]), &(inteval->stack[((hsi*234+17377)*1+lsi)*1]), &(inteval->stack[((hsi*198+4465)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+4230)*1+lsi)*1]), &(inteval->stack[((hsi*78+4086)*1+lsi)*1]), &(inteval->stack[((hsi*66+4164)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+17611)*1+lsi)*1]), &(inteval->stack[((hsi*91+3995)*1+lsi)*1]), &(inteval->stack[((hsi*78+4086)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+12607)*1+lsi)*1]), &(inteval->stack[((hsi*234+17611)*1+lsi)*1]), &(inteval->stack[((hsi*198+4230)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+3995)*1+lsi)*1]), &(inteval->stack[((hsi*78+3851)*1+lsi)*1]), &(inteval->stack[((hsi*66+3929)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+17845)*1+lsi)*1]), &(inteval->stack[((hsi*91+3760)*1+lsi)*1]), &(inteval->stack[((hsi*78+3851)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+12211)*1+lsi)*1]), &(inteval->stack[((hsi*234+17845)*1+lsi)*1]), &(inteval->stack[((hsi*198+3995)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+3760)*1+lsi)*1]), &(inteval->stack[((hsi*78+3616)*1+lsi)*1]), &(inteval->stack[((hsi*66+3694)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+18079)*1+lsi)*1]), &(inteval->stack[((hsi*91+3525)*1+lsi)*1]), &(inteval->stack[((hsi*78+3616)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+11815)*1+lsi)*1]), &(inteval->stack[((hsi*234+18079)*1+lsi)*1]), &(inteval->stack[((hsi*198+3760)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+3525)*1+lsi)*1]), &(inteval->stack[((hsi*78+3381)*1+lsi)*1]), &(inteval->stack[((hsi*66+3459)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+18313)*1+lsi)*1]), &(inteval->stack[((hsi*91+3290)*1+lsi)*1]), &(inteval->stack[((hsi*78+3381)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+11419)*1+lsi)*1]), &(inteval->stack[((hsi*234+18313)*1+lsi)*1]), &(inteval->stack[((hsi*198+3525)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+3290)*1+lsi)*1]), &(inteval->stack[((hsi*78+3146)*1+lsi)*1]), &(inteval->stack[((hsi*66+3224)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+18547)*1+lsi)*1]), &(inteval->stack[((hsi*91+3055)*1+lsi)*1]), &(inteval->stack[((hsi*78+3146)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+11023)*1+lsi)*1]), &(inteval->stack[((hsi*234+18547)*1+lsi)*1]), &(inteval->stack[((hsi*198+3290)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+3055)*1+lsi)*1]), &(inteval->stack[((hsi*78+2911)*1+lsi)*1]), &(inteval->stack[((hsi*66+2989)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+18781)*1+lsi)*1]), &(inteval->stack[((hsi*91+2820)*1+lsi)*1]), &(inteval->stack[((hsi*78+2911)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+10627)*1+lsi)*1]), &(inteval->stack[((hsi*234+18781)*1+lsi)*1]), &(inteval->stack[((hsi*198+3055)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+2820)*1+lsi)*1]), &(inteval->stack[((hsi*78+2676)*1+lsi)*1]), &(inteval->stack[((hsi*66+2754)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+19015)*1+lsi)*1]), &(inteval->stack[((hsi*91+2585)*1+lsi)*1]), &(inteval->stack[((hsi*78+2676)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+10231)*1+lsi)*1]), &(inteval->stack[((hsi*234+19015)*1+lsi)*1]), &(inteval->stack[((hsi*198+2820)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+2585)*1+lsi)*1]), &(inteval->stack[((hsi*78+2441)*1+lsi)*1]), &(inteval->stack[((hsi*66+2519)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+19249)*1+lsi)*1]), &(inteval->stack[((hsi*91+2350)*1+lsi)*1]), &(inteval->stack[((hsi*78+2441)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+9835)*1+lsi)*1]), &(inteval->stack[((hsi*234+19249)*1+lsi)*1]), &(inteval->stack[((hsi*198+2585)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+2350)*1+lsi)*1]), &(inteval->stack[((hsi*78+2206)*1+lsi)*1]), &(inteval->stack[((hsi*66+2284)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+19483)*1+lsi)*1]), &(inteval->stack[((hsi*91+2115)*1+lsi)*1]), &(inteval->stack[((hsi*78+2206)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+9439)*1+lsi)*1]), &(inteval->stack[((hsi*234+19483)*1+lsi)*1]), &(inteval->stack[((hsi*198+2350)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+2115)*1+lsi)*1]), &(inteval->stack[((hsi*78+1971)*1+lsi)*1]), &(inteval->stack[((hsi*66+2049)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+19717)*1+lsi)*1]), &(inteval->stack[((hsi*91+1880)*1+lsi)*1]), &(inteval->stack[((hsi*78+1971)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+9043)*1+lsi)*1]), &(inteval->stack[((hsi*234+19717)*1+lsi)*1]), &(inteval->stack[((hsi*198+2115)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+1880)*1+lsi)*1]), &(inteval->stack[((hsi*78+1736)*1+lsi)*1]), &(inteval->stack[((hsi*66+1814)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+19951)*1+lsi)*1]), &(inteval->stack[((hsi*91+1645)*1+lsi)*1]), &(inteval->stack[((hsi*78+1736)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+8647)*1+lsi)*1]), &(inteval->stack[((hsi*234+19951)*1+lsi)*1]), &(inteval->stack[((hsi*198+1880)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+1645)*1+lsi)*1]), &(inteval->stack[((hsi*78+1501)*1+lsi)*1]), &(inteval->stack[((hsi*66+1579)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+20185)*1+lsi)*1]), &(inteval->stack[((hsi*91+1410)*1+lsi)*1]), &(inteval->stack[((hsi*78+1501)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+8251)*1+lsi)*1]), &(inteval->stack[((hsi*234+20185)*1+lsi)*1]), &(inteval->stack[((hsi*198+1645)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+1410)*1+lsi)*1]), &(inteval->stack[((hsi*78+1266)*1+lsi)*1]), &(inteval->stack[((hsi*66+1344)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+20419)*1+lsi)*1]), &(inteval->stack[((hsi*91+1175)*1+lsi)*1]), &(inteval->stack[((hsi*78+1266)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+7855)*1+lsi)*1]), &(inteval->stack[((hsi*234+20419)*1+lsi)*1]), &(inteval->stack[((hsi*198+1410)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+1175)*1+lsi)*1]), &(inteval->stack[((hsi*78+1031)*1+lsi)*1]), &(inteval->stack[((hsi*66+1109)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+20653)*1+lsi)*1]), &(inteval->stack[((hsi*91+940)*1+lsi)*1]), &(inteval->stack[((hsi*78+1031)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+7459)*1+lsi)*1]), &(inteval->stack[((hsi*234+20653)*1+lsi)*1]), &(inteval->stack[((hsi*198+1175)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+940)*1+lsi)*1]), &(inteval->stack[((hsi*78+796)*1+lsi)*1]), &(inteval->stack[((hsi*66+874)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+20887)*1+lsi)*1]), &(inteval->stack[((hsi*91+705)*1+lsi)*1]), &(inteval->stack[((hsi*78+796)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+7063)*1+lsi)*1]), &(inteval->stack[((hsi*234+20887)*1+lsi)*1]), &(inteval->stack[((hsi*198+940)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+705)*1+lsi)*1]), &(inteval->stack[((hsi*78+561)*1+lsi)*1]), &(inteval->stack[((hsi*66+639)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+21121)*1+lsi)*1]), &(inteval->stack[((hsi*91+470)*1+lsi)*1]), &(inteval->stack[((hsi*78+561)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+6667)*1+lsi)*1]), &(inteval->stack[((hsi*234+21121)*1+lsi)*1]), &(inteval->stack[((hsi*198+705)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+470)*1+lsi)*1]), &(inteval->stack[((hsi*78+326)*1+lsi)*1]), &(inteval->stack[((hsi*66+404)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+21355)*1+lsi)*1]), &(inteval->stack[((hsi*91+235)*1+lsi)*1]), &(inteval->stack[((hsi*78+326)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+6271)*1+lsi)*1]), &(inteval->stack[((hsi*234+21355)*1+lsi)*1]), &(inteval->stack[((hsi*198+470)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+235)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]), &(inteval->stack[((hsi*66+169)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+21589)*1+lsi)*1]), &(inteval->stack[((hsi*91+0)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+5875)*1+lsi)*1]), &(inteval->stack[((hsi*234+21589)*1+lsi)*1]), &(inteval->stack[((hsi*198+235)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*396+5875)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*396+6271)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*396+6667)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*396+7063)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*396+7459)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*396+7855)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*396+8251)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*396+8647)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*396+9043)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*396+9439)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*396+9835)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*396+10231)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*396+10627)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*396+11023)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*396+11419)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*396+11815)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*396+12211)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*396+12607)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*396+13003)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*396+13399)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*396+13795)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*396+14191)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*396+14587)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*396+14983)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*396+15379)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
