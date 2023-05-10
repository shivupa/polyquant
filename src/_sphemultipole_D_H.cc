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
#include <HRRPart0ket0bra0hd.h>
#include <HRRPart0ket0bra0hp.h>
#include <HRRPart0ket0bra0ip.h>
#include <_sphemultipole_D_H_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_D_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2125)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+5275)*1+lsi)*1]), &(inteval->stack[((hsi*28+2076)*1+lsi)*1]), &(inteval->stack[((hsi*21+2104)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5338)*1+lsi)*1]), &(inteval->stack[((hsi*36+864)*1+lsi)*1]), &(inteval->stack[((hsi*28+2076)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+5149)*1+lsi)*1]), &(inteval->stack[((hsi*84+5338)*1+lsi)*1]), &(inteval->stack[((hsi*63+5275)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+5422)*1+lsi)*1]), &(inteval->stack[((hsi*28+2027)*1+lsi)*1]), &(inteval->stack[((hsi*21+2055)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5485)*1+lsi)*1]), &(inteval->stack[((hsi*36+828)*1+lsi)*1]), &(inteval->stack[((hsi*28+2027)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+5023)*1+lsi)*1]), &(inteval->stack[((hsi*84+5485)*1+lsi)*1]), &(inteval->stack[((hsi*63+5422)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+2027)*1+lsi)*1]), &(inteval->stack[((hsi*28+1978)*1+lsi)*1]), &(inteval->stack[((hsi*21+2006)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5569)*1+lsi)*1]), &(inteval->stack[((hsi*36+792)*1+lsi)*1]), &(inteval->stack[((hsi*28+1978)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4897)*1+lsi)*1]), &(inteval->stack[((hsi*84+5569)*1+lsi)*1]), &(inteval->stack[((hsi*63+2027)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+792)*1+lsi)*1]), &(inteval->stack[((hsi*28+1929)*1+lsi)*1]), &(inteval->stack[((hsi*21+1957)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5653)*1+lsi)*1]), &(inteval->stack[((hsi*36+756)*1+lsi)*1]), &(inteval->stack[((hsi*28+1929)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4771)*1+lsi)*1]), &(inteval->stack[((hsi*84+5653)*1+lsi)*1]), &(inteval->stack[((hsi*63+792)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1929)*1+lsi)*1]), &(inteval->stack[((hsi*28+1880)*1+lsi)*1]), &(inteval->stack[((hsi*21+1908)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5737)*1+lsi)*1]), &(inteval->stack[((hsi*36+720)*1+lsi)*1]), &(inteval->stack[((hsi*28+1880)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4645)*1+lsi)*1]), &(inteval->stack[((hsi*84+5737)*1+lsi)*1]), &(inteval->stack[((hsi*63+1929)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+720)*1+lsi)*1]), &(inteval->stack[((hsi*28+1831)*1+lsi)*1]), &(inteval->stack[((hsi*21+1859)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5821)*1+lsi)*1]), &(inteval->stack[((hsi*36+684)*1+lsi)*1]), &(inteval->stack[((hsi*28+1831)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4519)*1+lsi)*1]), &(inteval->stack[((hsi*84+5821)*1+lsi)*1]), &(inteval->stack[((hsi*63+720)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1831)*1+lsi)*1]), &(inteval->stack[((hsi*28+1782)*1+lsi)*1]), &(inteval->stack[((hsi*21+1810)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5905)*1+lsi)*1]), &(inteval->stack[((hsi*36+648)*1+lsi)*1]), &(inteval->stack[((hsi*28+1782)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4393)*1+lsi)*1]), &(inteval->stack[((hsi*84+5905)*1+lsi)*1]), &(inteval->stack[((hsi*63+1831)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+648)*1+lsi)*1]), &(inteval->stack[((hsi*28+1733)*1+lsi)*1]), &(inteval->stack[((hsi*21+1761)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5989)*1+lsi)*1]), &(inteval->stack[((hsi*36+612)*1+lsi)*1]), &(inteval->stack[((hsi*28+1733)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4267)*1+lsi)*1]), &(inteval->stack[((hsi*84+5989)*1+lsi)*1]), &(inteval->stack[((hsi*63+648)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1733)*1+lsi)*1]), &(inteval->stack[((hsi*28+1684)*1+lsi)*1]), &(inteval->stack[((hsi*21+1712)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6073)*1+lsi)*1]), &(inteval->stack[((hsi*36+576)*1+lsi)*1]), &(inteval->stack[((hsi*28+1684)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4141)*1+lsi)*1]), &(inteval->stack[((hsi*84+6073)*1+lsi)*1]), &(inteval->stack[((hsi*63+1733)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+576)*1+lsi)*1]), &(inteval->stack[((hsi*28+1635)*1+lsi)*1]), &(inteval->stack[((hsi*21+1663)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6157)*1+lsi)*1]), &(inteval->stack[((hsi*36+540)*1+lsi)*1]), &(inteval->stack[((hsi*28+1635)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4015)*1+lsi)*1]), &(inteval->stack[((hsi*84+6157)*1+lsi)*1]), &(inteval->stack[((hsi*63+576)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1635)*1+lsi)*1]), &(inteval->stack[((hsi*28+1586)*1+lsi)*1]), &(inteval->stack[((hsi*21+1614)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6241)*1+lsi)*1]), &(inteval->stack[((hsi*36+504)*1+lsi)*1]), &(inteval->stack[((hsi*28+1586)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+6241)*1+lsi)*1]), &(inteval->stack[((hsi*63+1635)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+504)*1+lsi)*1]), &(inteval->stack[((hsi*28+1537)*1+lsi)*1]), &(inteval->stack[((hsi*21+1565)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6325)*1+lsi)*1]), &(inteval->stack[((hsi*36+468)*1+lsi)*1]), &(inteval->stack[((hsi*28+1537)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3763)*1+lsi)*1]), &(inteval->stack[((hsi*84+6325)*1+lsi)*1]), &(inteval->stack[((hsi*63+504)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1537)*1+lsi)*1]), &(inteval->stack[((hsi*28+1488)*1+lsi)*1]), &(inteval->stack[((hsi*21+1516)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6409)*1+lsi)*1]), &(inteval->stack[((hsi*36+432)*1+lsi)*1]), &(inteval->stack[((hsi*28+1488)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3637)*1+lsi)*1]), &(inteval->stack[((hsi*84+6409)*1+lsi)*1]), &(inteval->stack[((hsi*63+1537)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+432)*1+lsi)*1]), &(inteval->stack[((hsi*28+1439)*1+lsi)*1]), &(inteval->stack[((hsi*21+1467)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6493)*1+lsi)*1]), &(inteval->stack[((hsi*36+396)*1+lsi)*1]), &(inteval->stack[((hsi*28+1439)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3511)*1+lsi)*1]), &(inteval->stack[((hsi*84+6493)*1+lsi)*1]), &(inteval->stack[((hsi*63+432)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1439)*1+lsi)*1]), &(inteval->stack[((hsi*28+1390)*1+lsi)*1]), &(inteval->stack[((hsi*21+1418)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6577)*1+lsi)*1]), &(inteval->stack[((hsi*36+360)*1+lsi)*1]), &(inteval->stack[((hsi*28+1390)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3385)*1+lsi)*1]), &(inteval->stack[((hsi*84+6577)*1+lsi)*1]), &(inteval->stack[((hsi*63+1439)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+360)*1+lsi)*1]), &(inteval->stack[((hsi*28+1341)*1+lsi)*1]), &(inteval->stack[((hsi*21+1369)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6661)*1+lsi)*1]), &(inteval->stack[((hsi*36+324)*1+lsi)*1]), &(inteval->stack[((hsi*28+1341)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3259)*1+lsi)*1]), &(inteval->stack[((hsi*84+6661)*1+lsi)*1]), &(inteval->stack[((hsi*63+360)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1341)*1+lsi)*1]), &(inteval->stack[((hsi*28+1292)*1+lsi)*1]), &(inteval->stack[((hsi*21+1320)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6745)*1+lsi)*1]), &(inteval->stack[((hsi*36+288)*1+lsi)*1]), &(inteval->stack[((hsi*28+1292)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3133)*1+lsi)*1]), &(inteval->stack[((hsi*84+6745)*1+lsi)*1]), &(inteval->stack[((hsi*63+1341)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+288)*1+lsi)*1]), &(inteval->stack[((hsi*28+1243)*1+lsi)*1]), &(inteval->stack[((hsi*21+1271)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6829)*1+lsi)*1]), &(inteval->stack[((hsi*36+252)*1+lsi)*1]), &(inteval->stack[((hsi*28+1243)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3007)*1+lsi)*1]), &(inteval->stack[((hsi*84+6829)*1+lsi)*1]), &(inteval->stack[((hsi*63+288)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1243)*1+lsi)*1]), &(inteval->stack[((hsi*28+1194)*1+lsi)*1]), &(inteval->stack[((hsi*21+1222)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6913)*1+lsi)*1]), &(inteval->stack[((hsi*36+216)*1+lsi)*1]), &(inteval->stack[((hsi*28+1194)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2881)*1+lsi)*1]), &(inteval->stack[((hsi*84+6913)*1+lsi)*1]), &(inteval->stack[((hsi*63+1243)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+216)*1+lsi)*1]), &(inteval->stack[((hsi*28+1145)*1+lsi)*1]), &(inteval->stack[((hsi*21+1173)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6997)*1+lsi)*1]), &(inteval->stack[((hsi*36+180)*1+lsi)*1]), &(inteval->stack[((hsi*28+1145)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2755)*1+lsi)*1]), &(inteval->stack[((hsi*84+6997)*1+lsi)*1]), &(inteval->stack[((hsi*63+216)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1145)*1+lsi)*1]), &(inteval->stack[((hsi*28+1096)*1+lsi)*1]), &(inteval->stack[((hsi*21+1124)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+7081)*1+lsi)*1]), &(inteval->stack[((hsi*36+144)*1+lsi)*1]), &(inteval->stack[((hsi*28+1096)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2629)*1+lsi)*1]), &(inteval->stack[((hsi*84+7081)*1+lsi)*1]), &(inteval->stack[((hsi*63+1145)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+144)*1+lsi)*1]), &(inteval->stack[((hsi*28+1047)*1+lsi)*1]), &(inteval->stack[((hsi*21+1075)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+7165)*1+lsi)*1]), &(inteval->stack[((hsi*36+108)*1+lsi)*1]), &(inteval->stack[((hsi*28+1047)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2503)*1+lsi)*1]), &(inteval->stack[((hsi*84+7165)*1+lsi)*1]), &(inteval->stack[((hsi*63+144)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1047)*1+lsi)*1]), &(inteval->stack[((hsi*28+998)*1+lsi)*1]), &(inteval->stack[((hsi*21+1026)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+7249)*1+lsi)*1]), &(inteval->stack[((hsi*36+72)*1+lsi)*1]), &(inteval->stack[((hsi*28+998)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2377)*1+lsi)*1]), &(inteval->stack[((hsi*84+7249)*1+lsi)*1]), &(inteval->stack[((hsi*63+1047)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+72)*1+lsi)*1]), &(inteval->stack[((hsi*28+949)*1+lsi)*1]), &(inteval->stack[((hsi*21+977)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+7333)*1+lsi)*1]), &(inteval->stack[((hsi*36+36)*1+lsi)*1]), &(inteval->stack[((hsi*28+949)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2251)*1+lsi)*1]), &(inteval->stack[((hsi*84+7333)*1+lsi)*1]), &(inteval->stack[((hsi*63+72)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+949)*1+lsi)*1]), &(inteval->stack[((hsi*28+900)*1+lsi)*1]), &(inteval->stack[((hsi*21+928)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+7417)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+900)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2125)*1+lsi)*1]), &(inteval->stack[((hsi*84+7417)*1+lsi)*1]), &(inteval->stack[((hsi*63+949)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*126+2125)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*126+2251)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*126+2377)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*126+2503)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*126+2629)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*126+2755)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*126+2881)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*126+3007)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*126+3133)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*126+3259)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*126+3385)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*126+3511)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*126+3637)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*126+3763)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*126+3889)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*126+4015)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*126+4141)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*126+4267)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*126+4393)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*126+4519)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*126+4645)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*126+4771)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*126+4897)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*126+5023)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*126+5149)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
