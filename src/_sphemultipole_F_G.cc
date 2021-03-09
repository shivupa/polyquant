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
#include <HRRPart0ket0bra0gd.h>
#include <HRRPart0ket0bra0gf.h>
#include <HRRPart0ket0bra0gp.h>
#include <HRRPart0ket0bra0hd.h>
#include <HRRPart0ket0bra0hp.h>
#include <HRRPart0ket0bra0ip.h>
#include <_sphemultipole_F_G_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_F_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2500)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_F_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2451)*1+lsi)*1]), &(inteval->stack[((hsi*21+2479)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+2479)*1+lsi)*1]), &(inteval->stack[((hsi*15+360)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+6358)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2415)*1+lsi)*1]), &(inteval->stack[((hsi*28+2451)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+6532)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+6100)*1+lsi)*1]), &(inteval->stack[((hsi*126+6532)*1+lsi)*1]), &(inteval->stack[((hsi*90+6358)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2366)*1+lsi)*1]), &(inteval->stack[((hsi*21+2394)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+2394)*1+lsi)*1]), &(inteval->stack[((hsi*15+345)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+2394)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2330)*1+lsi)*1]), &(inteval->stack[((hsi*28+2366)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+6658)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5950)*1+lsi)*1]), &(inteval->stack[((hsi*126+6658)*1+lsi)*1]), &(inteval->stack[((hsi*90+2394)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2281)*1+lsi)*1]), &(inteval->stack[((hsi*21+2309)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+2309)*1+lsi)*1]), &(inteval->stack[((hsi*15+330)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+6784)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2245)*1+lsi)*1]), &(inteval->stack[((hsi*28+2281)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2245)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5800)*1+lsi)*1]), &(inteval->stack[((hsi*126+2245)*1+lsi)*1]), &(inteval->stack[((hsi*90+6784)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2196)*1+lsi)*1]), &(inteval->stack[((hsi*21+2224)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+330)*1+lsi)*1]), &(inteval->stack[((hsi*21+2224)*1+lsi)*1]), &(inteval->stack[((hsi*15+315)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+6874)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+330)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2160)*1+lsi)*1]), &(inteval->stack[((hsi*28+2196)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+6964)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5650)*1+lsi)*1]), &(inteval->stack[((hsi*126+6964)*1+lsi)*1]), &(inteval->stack[((hsi*90+6874)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2111)*1+lsi)*1]), &(inteval->stack[((hsi*21+2139)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+2139)*1+lsi)*1]), &(inteval->stack[((hsi*15+300)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+2139)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2075)*1+lsi)*1]), &(inteval->stack[((hsi*28+2111)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+7090)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5500)*1+lsi)*1]), &(inteval->stack[((hsi*126+7090)*1+lsi)*1]), &(inteval->stack[((hsi*90+2139)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2026)*1+lsi)*1]), &(inteval->stack[((hsi*21+2054)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+2054)*1+lsi)*1]), &(inteval->stack[((hsi*15+285)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+285)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1990)*1+lsi)*1]), &(inteval->stack[((hsi*28+2026)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1990)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5350)*1+lsi)*1]), &(inteval->stack[((hsi*126+1990)*1+lsi)*1]), &(inteval->stack[((hsi*90+285)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1941)*1+lsi)*1]), &(inteval->stack[((hsi*21+1969)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1969)*1+lsi)*1]), &(inteval->stack[((hsi*15+270)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+7216)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1905)*1+lsi)*1]), &(inteval->stack[((hsi*28+1941)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+7306)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5200)*1+lsi)*1]), &(inteval->stack[((hsi*126+7306)*1+lsi)*1]), &(inteval->stack[((hsi*90+7216)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1856)*1+lsi)*1]), &(inteval->stack[((hsi*21+1884)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1884)*1+lsi)*1]), &(inteval->stack[((hsi*15+255)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+1884)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1820)*1+lsi)*1]), &(inteval->stack[((hsi*28+1856)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+7432)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5050)*1+lsi)*1]), &(inteval->stack[((hsi*126+7432)*1+lsi)*1]), &(inteval->stack[((hsi*90+1884)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1771)*1+lsi)*1]), &(inteval->stack[((hsi*21+1799)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1799)*1+lsi)*1]), &(inteval->stack[((hsi*15+240)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+7558)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1735)*1+lsi)*1]), &(inteval->stack[((hsi*28+1771)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1735)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4900)*1+lsi)*1]), &(inteval->stack[((hsi*126+1735)*1+lsi)*1]), &(inteval->stack[((hsi*90+7558)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1686)*1+lsi)*1]), &(inteval->stack[((hsi*21+1714)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+240)*1+lsi)*1]), &(inteval->stack[((hsi*21+1714)*1+lsi)*1]), &(inteval->stack[((hsi*15+225)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+7648)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+240)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1650)*1+lsi)*1]), &(inteval->stack[((hsi*28+1686)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+7738)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4750)*1+lsi)*1]), &(inteval->stack[((hsi*126+7738)*1+lsi)*1]), &(inteval->stack[((hsi*90+7648)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1601)*1+lsi)*1]), &(inteval->stack[((hsi*21+1629)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1629)*1+lsi)*1]), &(inteval->stack[((hsi*15+210)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+1629)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1565)*1+lsi)*1]), &(inteval->stack[((hsi*28+1601)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+7864)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4600)*1+lsi)*1]), &(inteval->stack[((hsi*126+7864)*1+lsi)*1]), &(inteval->stack[((hsi*90+1629)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1516)*1+lsi)*1]), &(inteval->stack[((hsi*21+1544)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1544)*1+lsi)*1]), &(inteval->stack[((hsi*15+195)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+195)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1480)*1+lsi)*1]), &(inteval->stack[((hsi*28+1516)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1480)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4450)*1+lsi)*1]), &(inteval->stack[((hsi*126+1480)*1+lsi)*1]), &(inteval->stack[((hsi*90+195)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1431)*1+lsi)*1]), &(inteval->stack[((hsi*21+1459)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1459)*1+lsi)*1]), &(inteval->stack[((hsi*15+180)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+7990)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1395)*1+lsi)*1]), &(inteval->stack[((hsi*28+1431)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+8080)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4300)*1+lsi)*1]), &(inteval->stack[((hsi*126+8080)*1+lsi)*1]), &(inteval->stack[((hsi*90+7990)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1346)*1+lsi)*1]), &(inteval->stack[((hsi*21+1374)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1374)*1+lsi)*1]), &(inteval->stack[((hsi*15+165)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+1374)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1310)*1+lsi)*1]), &(inteval->stack[((hsi*28+1346)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+8206)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4150)*1+lsi)*1]), &(inteval->stack[((hsi*126+8206)*1+lsi)*1]), &(inteval->stack[((hsi*90+1374)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1261)*1+lsi)*1]), &(inteval->stack[((hsi*21+1289)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1289)*1+lsi)*1]), &(inteval->stack[((hsi*15+150)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+8332)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1225)*1+lsi)*1]), &(inteval->stack[((hsi*28+1261)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1225)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4000)*1+lsi)*1]), &(inteval->stack[((hsi*126+1225)*1+lsi)*1]), &(inteval->stack[((hsi*90+8332)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1176)*1+lsi)*1]), &(inteval->stack[((hsi*21+1204)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+150)*1+lsi)*1]), &(inteval->stack[((hsi*21+1204)*1+lsi)*1]), &(inteval->stack[((hsi*15+135)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+8422)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+150)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1140)*1+lsi)*1]), &(inteval->stack[((hsi*28+1176)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+8512)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+3850)*1+lsi)*1]), &(inteval->stack[((hsi*126+8512)*1+lsi)*1]), &(inteval->stack[((hsi*90+8422)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1091)*1+lsi)*1]), &(inteval->stack[((hsi*21+1119)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1119)*1+lsi)*1]), &(inteval->stack[((hsi*15+120)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+1119)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1055)*1+lsi)*1]), &(inteval->stack[((hsi*28+1091)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+8638)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+3700)*1+lsi)*1]), &(inteval->stack[((hsi*126+8638)*1+lsi)*1]), &(inteval->stack[((hsi*90+1119)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1006)*1+lsi)*1]), &(inteval->stack[((hsi*21+1034)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1034)*1+lsi)*1]), &(inteval->stack[((hsi*15+105)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+105)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+970)*1+lsi)*1]), &(inteval->stack[((hsi*28+1006)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+970)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+3550)*1+lsi)*1]), &(inteval->stack[((hsi*126+970)*1+lsi)*1]), &(inteval->stack[((hsi*90+105)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+921)*1+lsi)*1]), &(inteval->stack[((hsi*21+949)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+949)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+8764)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+885)*1+lsi)*1]), &(inteval->stack[((hsi*28+921)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+8854)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+3400)*1+lsi)*1]), &(inteval->stack[((hsi*126+8854)*1+lsi)*1]), &(inteval->stack[((hsi*90+8764)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+836)*1+lsi)*1]), &(inteval->stack[((hsi*21+864)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+864)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+864)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+800)*1+lsi)*1]), &(inteval->stack[((hsi*28+836)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+8980)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+3250)*1+lsi)*1]), &(inteval->stack[((hsi*126+8980)*1+lsi)*1]), &(inteval->stack[((hsi*90+864)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+751)*1+lsi)*1]), &(inteval->stack[((hsi*21+779)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+779)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+9106)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+715)*1+lsi)*1]), &(inteval->stack[((hsi*28+751)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+715)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+3100)*1+lsi)*1]), &(inteval->stack[((hsi*126+715)*1+lsi)*1]), &(inteval->stack[((hsi*90+9106)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+666)*1+lsi)*1]), &(inteval->stack[((hsi*21+694)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+60)*1+lsi)*1]), &(inteval->stack[((hsi*21+694)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+9196)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+60)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+630)*1+lsi)*1]), &(inteval->stack[((hsi*28+666)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+9286)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+2950)*1+lsi)*1]), &(inteval->stack[((hsi*126+9286)*1+lsi)*1]), &(inteval->stack[((hsi*90+9196)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+581)*1+lsi)*1]), &(inteval->stack[((hsi*21+609)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+609)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+609)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+545)*1+lsi)*1]), &(inteval->stack[((hsi*28+581)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+9412)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+2800)*1+lsi)*1]), &(inteval->stack[((hsi*126+9412)*1+lsi)*1]), &(inteval->stack[((hsi*90+609)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+496)*1+lsi)*1]), &(inteval->stack[((hsi*21+524)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+524)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+15)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+460)*1+lsi)*1]), &(inteval->stack[((hsi*28+496)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+460)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+2650)*1+lsi)*1]), &(inteval->stack[((hsi*126+460)*1+lsi)*1]), &(inteval->stack[((hsi*90+15)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+411)*1+lsi)*1]), &(inteval->stack[((hsi*21+439)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+439)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+9538)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+375)*1+lsi)*1]), &(inteval->stack[((hsi*28+411)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+9628)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+2500)*1+lsi)*1]), &(inteval->stack[((hsi*126+9628)*1+lsi)*1]), &(inteval->stack[((hsi*90+9538)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*150+2500)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*150+2650)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*150+2800)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*150+2950)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*150+3100)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*150+3250)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*150+3400)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*150+3550)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*150+3700)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*150+3850)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*150+4000)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*150+4150)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*150+4300)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*150+4450)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*150+4600)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*150+4750)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*150+4900)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*150+5050)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*150+5200)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*150+5350)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*150+5500)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*150+5650)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*150+5800)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*150+5950)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*150+6100)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
