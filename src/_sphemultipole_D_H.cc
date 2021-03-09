/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5338)*1+lsi)*1]), &(inteval->stack[((hsi*36+2040)*1+lsi)*1]), &(inteval->stack[((hsi*28+2076)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+5149)*1+lsi)*1]), &(inteval->stack[((hsi*84+5338)*1+lsi)*1]), &(inteval->stack[((hsi*63+5275)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+2040)*1+lsi)*1]), &(inteval->stack[((hsi*28+1991)*1+lsi)*1]), &(inteval->stack[((hsi*21+2019)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5422)*1+lsi)*1]), &(inteval->stack[((hsi*36+1955)*1+lsi)*1]), &(inteval->stack[((hsi*28+1991)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+5023)*1+lsi)*1]), &(inteval->stack[((hsi*84+5422)*1+lsi)*1]), &(inteval->stack[((hsi*63+2040)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1955)*1+lsi)*1]), &(inteval->stack[((hsi*28+1906)*1+lsi)*1]), &(inteval->stack[((hsi*21+1934)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5506)*1+lsi)*1]), &(inteval->stack[((hsi*36+1870)*1+lsi)*1]), &(inteval->stack[((hsi*28+1906)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4897)*1+lsi)*1]), &(inteval->stack[((hsi*84+5506)*1+lsi)*1]), &(inteval->stack[((hsi*63+1955)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1870)*1+lsi)*1]), &(inteval->stack[((hsi*28+1821)*1+lsi)*1]), &(inteval->stack[((hsi*21+1849)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5590)*1+lsi)*1]), &(inteval->stack[((hsi*36+1785)*1+lsi)*1]), &(inteval->stack[((hsi*28+1821)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4771)*1+lsi)*1]), &(inteval->stack[((hsi*84+5590)*1+lsi)*1]), &(inteval->stack[((hsi*63+1870)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1785)*1+lsi)*1]), &(inteval->stack[((hsi*28+1736)*1+lsi)*1]), &(inteval->stack[((hsi*21+1764)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5674)*1+lsi)*1]), &(inteval->stack[((hsi*36+1700)*1+lsi)*1]), &(inteval->stack[((hsi*28+1736)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4645)*1+lsi)*1]), &(inteval->stack[((hsi*84+5674)*1+lsi)*1]), &(inteval->stack[((hsi*63+1785)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1700)*1+lsi)*1]), &(inteval->stack[((hsi*28+1651)*1+lsi)*1]), &(inteval->stack[((hsi*21+1679)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5758)*1+lsi)*1]), &(inteval->stack[((hsi*36+1615)*1+lsi)*1]), &(inteval->stack[((hsi*28+1651)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4519)*1+lsi)*1]), &(inteval->stack[((hsi*84+5758)*1+lsi)*1]), &(inteval->stack[((hsi*63+1700)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1615)*1+lsi)*1]), &(inteval->stack[((hsi*28+1566)*1+lsi)*1]), &(inteval->stack[((hsi*21+1594)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5842)*1+lsi)*1]), &(inteval->stack[((hsi*36+1530)*1+lsi)*1]), &(inteval->stack[((hsi*28+1566)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4393)*1+lsi)*1]), &(inteval->stack[((hsi*84+5842)*1+lsi)*1]), &(inteval->stack[((hsi*63+1615)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1530)*1+lsi)*1]), &(inteval->stack[((hsi*28+1481)*1+lsi)*1]), &(inteval->stack[((hsi*21+1509)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+5926)*1+lsi)*1]), &(inteval->stack[((hsi*36+1445)*1+lsi)*1]), &(inteval->stack[((hsi*28+1481)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4267)*1+lsi)*1]), &(inteval->stack[((hsi*84+5926)*1+lsi)*1]), &(inteval->stack[((hsi*63+1530)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1445)*1+lsi)*1]), &(inteval->stack[((hsi*28+1396)*1+lsi)*1]), &(inteval->stack[((hsi*21+1424)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6010)*1+lsi)*1]), &(inteval->stack[((hsi*36+1360)*1+lsi)*1]), &(inteval->stack[((hsi*28+1396)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4141)*1+lsi)*1]), &(inteval->stack[((hsi*84+6010)*1+lsi)*1]), &(inteval->stack[((hsi*63+1445)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1360)*1+lsi)*1]), &(inteval->stack[((hsi*28+1311)*1+lsi)*1]), &(inteval->stack[((hsi*21+1339)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6094)*1+lsi)*1]), &(inteval->stack[((hsi*36+1275)*1+lsi)*1]), &(inteval->stack[((hsi*28+1311)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4015)*1+lsi)*1]), &(inteval->stack[((hsi*84+6094)*1+lsi)*1]), &(inteval->stack[((hsi*63+1360)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1275)*1+lsi)*1]), &(inteval->stack[((hsi*28+1226)*1+lsi)*1]), &(inteval->stack[((hsi*21+1254)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6178)*1+lsi)*1]), &(inteval->stack[((hsi*36+1190)*1+lsi)*1]), &(inteval->stack[((hsi*28+1226)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+6178)*1+lsi)*1]), &(inteval->stack[((hsi*63+1275)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1190)*1+lsi)*1]), &(inteval->stack[((hsi*28+1141)*1+lsi)*1]), &(inteval->stack[((hsi*21+1169)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6262)*1+lsi)*1]), &(inteval->stack[((hsi*36+1105)*1+lsi)*1]), &(inteval->stack[((hsi*28+1141)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3763)*1+lsi)*1]), &(inteval->stack[((hsi*84+6262)*1+lsi)*1]), &(inteval->stack[((hsi*63+1190)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1105)*1+lsi)*1]), &(inteval->stack[((hsi*28+1056)*1+lsi)*1]), &(inteval->stack[((hsi*21+1084)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6346)*1+lsi)*1]), &(inteval->stack[((hsi*36+1020)*1+lsi)*1]), &(inteval->stack[((hsi*28+1056)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3637)*1+lsi)*1]), &(inteval->stack[((hsi*84+6346)*1+lsi)*1]), &(inteval->stack[((hsi*63+1105)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1020)*1+lsi)*1]), &(inteval->stack[((hsi*28+971)*1+lsi)*1]), &(inteval->stack[((hsi*21+999)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6430)*1+lsi)*1]), &(inteval->stack[((hsi*36+935)*1+lsi)*1]), &(inteval->stack[((hsi*28+971)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3511)*1+lsi)*1]), &(inteval->stack[((hsi*84+6430)*1+lsi)*1]), &(inteval->stack[((hsi*63+1020)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+935)*1+lsi)*1]), &(inteval->stack[((hsi*28+886)*1+lsi)*1]), &(inteval->stack[((hsi*21+914)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6514)*1+lsi)*1]), &(inteval->stack[((hsi*36+850)*1+lsi)*1]), &(inteval->stack[((hsi*28+886)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3385)*1+lsi)*1]), &(inteval->stack[((hsi*84+6514)*1+lsi)*1]), &(inteval->stack[((hsi*63+935)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+850)*1+lsi)*1]), &(inteval->stack[((hsi*28+801)*1+lsi)*1]), &(inteval->stack[((hsi*21+829)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6598)*1+lsi)*1]), &(inteval->stack[((hsi*36+765)*1+lsi)*1]), &(inteval->stack[((hsi*28+801)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3259)*1+lsi)*1]), &(inteval->stack[((hsi*84+6598)*1+lsi)*1]), &(inteval->stack[((hsi*63+850)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+765)*1+lsi)*1]), &(inteval->stack[((hsi*28+716)*1+lsi)*1]), &(inteval->stack[((hsi*21+744)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6682)*1+lsi)*1]), &(inteval->stack[((hsi*36+680)*1+lsi)*1]), &(inteval->stack[((hsi*28+716)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3133)*1+lsi)*1]), &(inteval->stack[((hsi*84+6682)*1+lsi)*1]), &(inteval->stack[((hsi*63+765)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+680)*1+lsi)*1]), &(inteval->stack[((hsi*28+631)*1+lsi)*1]), &(inteval->stack[((hsi*21+659)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6766)*1+lsi)*1]), &(inteval->stack[((hsi*36+595)*1+lsi)*1]), &(inteval->stack[((hsi*28+631)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3007)*1+lsi)*1]), &(inteval->stack[((hsi*84+6766)*1+lsi)*1]), &(inteval->stack[((hsi*63+680)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+595)*1+lsi)*1]), &(inteval->stack[((hsi*28+546)*1+lsi)*1]), &(inteval->stack[((hsi*21+574)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6850)*1+lsi)*1]), &(inteval->stack[((hsi*36+510)*1+lsi)*1]), &(inteval->stack[((hsi*28+546)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2881)*1+lsi)*1]), &(inteval->stack[((hsi*84+6850)*1+lsi)*1]), &(inteval->stack[((hsi*63+595)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+510)*1+lsi)*1]), &(inteval->stack[((hsi*28+461)*1+lsi)*1]), &(inteval->stack[((hsi*21+489)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6934)*1+lsi)*1]), &(inteval->stack[((hsi*36+425)*1+lsi)*1]), &(inteval->stack[((hsi*28+461)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2755)*1+lsi)*1]), &(inteval->stack[((hsi*84+6934)*1+lsi)*1]), &(inteval->stack[((hsi*63+510)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+425)*1+lsi)*1]), &(inteval->stack[((hsi*28+376)*1+lsi)*1]), &(inteval->stack[((hsi*21+404)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+7018)*1+lsi)*1]), &(inteval->stack[((hsi*36+340)*1+lsi)*1]), &(inteval->stack[((hsi*28+376)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2629)*1+lsi)*1]), &(inteval->stack[((hsi*84+7018)*1+lsi)*1]), &(inteval->stack[((hsi*63+425)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+340)*1+lsi)*1]), &(inteval->stack[((hsi*28+291)*1+lsi)*1]), &(inteval->stack[((hsi*21+319)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+7102)*1+lsi)*1]), &(inteval->stack[((hsi*36+255)*1+lsi)*1]), &(inteval->stack[((hsi*28+291)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2503)*1+lsi)*1]), &(inteval->stack[((hsi*84+7102)*1+lsi)*1]), &(inteval->stack[((hsi*63+340)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+255)*1+lsi)*1]), &(inteval->stack[((hsi*28+206)*1+lsi)*1]), &(inteval->stack[((hsi*21+234)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+7186)*1+lsi)*1]), &(inteval->stack[((hsi*36+170)*1+lsi)*1]), &(inteval->stack[((hsi*28+206)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2377)*1+lsi)*1]), &(inteval->stack[((hsi*84+7186)*1+lsi)*1]), &(inteval->stack[((hsi*63+255)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+170)*1+lsi)*1]), &(inteval->stack[((hsi*28+121)*1+lsi)*1]), &(inteval->stack[((hsi*21+149)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+7270)*1+lsi)*1]), &(inteval->stack[((hsi*36+85)*1+lsi)*1]), &(inteval->stack[((hsi*28+121)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2251)*1+lsi)*1]), &(inteval->stack[((hsi*84+7270)*1+lsi)*1]), &(inteval->stack[((hsi*63+170)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+85)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*21+64)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+7354)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2125)*1+lsi)*1]), &(inteval->stack[((hsi*84+7354)*1+lsi)*1]), &(inteval->stack[((hsi*63+85)*1+lsi)*1]),1);
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
