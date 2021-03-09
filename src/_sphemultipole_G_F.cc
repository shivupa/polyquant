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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gf.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <_sphemultipole_G_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_G_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2500)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_G_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2436)*1+lsi)*1]), &(inteval->stack[((hsi*21+2464)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+2464)*1+lsi)*1]), &(inteval->stack[((hsi*15+2485)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+6358)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2400)*1+lsi)*1]), &(inteval->stack[((hsi*28+2436)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+6532)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+6100)*1+lsi)*1]), &(inteval->stack[((hsi*126+6532)*1+lsi)*1]), &(inteval->stack[((hsi*90+6358)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2336)*1+lsi)*1]), &(inteval->stack[((hsi*21+2364)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+2364)*1+lsi)*1]), &(inteval->stack[((hsi*15+2385)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2364)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2300)*1+lsi)*1]), &(inteval->stack[((hsi*28+2336)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+6658)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+5950)*1+lsi)*1]), &(inteval->stack[((hsi*126+6658)*1+lsi)*1]), &(inteval->stack[((hsi*90+2364)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2236)*1+lsi)*1]), &(inteval->stack[((hsi*21+2264)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+2264)*1+lsi)*1]), &(inteval->stack[((hsi*15+2285)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2264)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2200)*1+lsi)*1]), &(inteval->stack[((hsi*28+2236)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+6784)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+5800)*1+lsi)*1]), &(inteval->stack[((hsi*126+6784)*1+lsi)*1]), &(inteval->stack[((hsi*90+2264)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2136)*1+lsi)*1]), &(inteval->stack[((hsi*21+2164)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+2164)*1+lsi)*1]), &(inteval->stack[((hsi*15+2185)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2164)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2100)*1+lsi)*1]), &(inteval->stack[((hsi*28+2136)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+6910)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+5650)*1+lsi)*1]), &(inteval->stack[((hsi*126+6910)*1+lsi)*1]), &(inteval->stack[((hsi*90+2164)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2036)*1+lsi)*1]), &(inteval->stack[((hsi*21+2064)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+2064)*1+lsi)*1]), &(inteval->stack[((hsi*15+2085)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2064)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2000)*1+lsi)*1]), &(inteval->stack[((hsi*28+2036)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+7036)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+5500)*1+lsi)*1]), &(inteval->stack[((hsi*126+7036)*1+lsi)*1]), &(inteval->stack[((hsi*90+2064)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1936)*1+lsi)*1]), &(inteval->stack[((hsi*21+1964)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1964)*1+lsi)*1]), &(inteval->stack[((hsi*15+1985)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1964)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1900)*1+lsi)*1]), &(inteval->stack[((hsi*28+1936)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+7162)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+5350)*1+lsi)*1]), &(inteval->stack[((hsi*126+7162)*1+lsi)*1]), &(inteval->stack[((hsi*90+1964)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1836)*1+lsi)*1]), &(inteval->stack[((hsi*21+1864)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1864)*1+lsi)*1]), &(inteval->stack[((hsi*15+1885)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1864)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1800)*1+lsi)*1]), &(inteval->stack[((hsi*28+1836)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+7288)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+5200)*1+lsi)*1]), &(inteval->stack[((hsi*126+7288)*1+lsi)*1]), &(inteval->stack[((hsi*90+1864)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1736)*1+lsi)*1]), &(inteval->stack[((hsi*21+1764)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1764)*1+lsi)*1]), &(inteval->stack[((hsi*15+1785)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1764)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1700)*1+lsi)*1]), &(inteval->stack[((hsi*28+1736)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+7414)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+5050)*1+lsi)*1]), &(inteval->stack[((hsi*126+7414)*1+lsi)*1]), &(inteval->stack[((hsi*90+1764)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1636)*1+lsi)*1]), &(inteval->stack[((hsi*21+1664)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1664)*1+lsi)*1]), &(inteval->stack[((hsi*15+1685)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1664)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1600)*1+lsi)*1]), &(inteval->stack[((hsi*28+1636)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+7540)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+4900)*1+lsi)*1]), &(inteval->stack[((hsi*126+7540)*1+lsi)*1]), &(inteval->stack[((hsi*90+1664)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1536)*1+lsi)*1]), &(inteval->stack[((hsi*21+1564)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1564)*1+lsi)*1]), &(inteval->stack[((hsi*15+1585)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1564)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1500)*1+lsi)*1]), &(inteval->stack[((hsi*28+1536)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+7666)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+4750)*1+lsi)*1]), &(inteval->stack[((hsi*126+7666)*1+lsi)*1]), &(inteval->stack[((hsi*90+1564)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1436)*1+lsi)*1]), &(inteval->stack[((hsi*21+1464)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1464)*1+lsi)*1]), &(inteval->stack[((hsi*15+1485)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1464)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1400)*1+lsi)*1]), &(inteval->stack[((hsi*28+1436)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+7792)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+4600)*1+lsi)*1]), &(inteval->stack[((hsi*126+7792)*1+lsi)*1]), &(inteval->stack[((hsi*90+1464)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1336)*1+lsi)*1]), &(inteval->stack[((hsi*21+1364)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1364)*1+lsi)*1]), &(inteval->stack[((hsi*15+1385)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1364)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1300)*1+lsi)*1]), &(inteval->stack[((hsi*28+1336)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+7918)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+4450)*1+lsi)*1]), &(inteval->stack[((hsi*126+7918)*1+lsi)*1]), &(inteval->stack[((hsi*90+1364)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1236)*1+lsi)*1]), &(inteval->stack[((hsi*21+1264)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1264)*1+lsi)*1]), &(inteval->stack[((hsi*15+1285)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1264)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1200)*1+lsi)*1]), &(inteval->stack[((hsi*28+1236)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+8044)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+4300)*1+lsi)*1]), &(inteval->stack[((hsi*126+8044)*1+lsi)*1]), &(inteval->stack[((hsi*90+1264)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1136)*1+lsi)*1]), &(inteval->stack[((hsi*21+1164)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1164)*1+lsi)*1]), &(inteval->stack[((hsi*15+1185)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1164)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1100)*1+lsi)*1]), &(inteval->stack[((hsi*28+1136)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+8170)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+4150)*1+lsi)*1]), &(inteval->stack[((hsi*126+8170)*1+lsi)*1]), &(inteval->stack[((hsi*90+1164)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1036)*1+lsi)*1]), &(inteval->stack[((hsi*21+1064)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+1064)*1+lsi)*1]), &(inteval->stack[((hsi*15+1085)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1064)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1000)*1+lsi)*1]), &(inteval->stack[((hsi*28+1036)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+8296)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+4000)*1+lsi)*1]), &(inteval->stack[((hsi*126+8296)*1+lsi)*1]), &(inteval->stack[((hsi*90+1064)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+936)*1+lsi)*1]), &(inteval->stack[((hsi*21+964)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+964)*1+lsi)*1]), &(inteval->stack[((hsi*15+985)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+964)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+900)*1+lsi)*1]), &(inteval->stack[((hsi*28+936)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+8422)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+3850)*1+lsi)*1]), &(inteval->stack[((hsi*126+8422)*1+lsi)*1]), &(inteval->stack[((hsi*90+964)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+836)*1+lsi)*1]), &(inteval->stack[((hsi*21+864)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+864)*1+lsi)*1]), &(inteval->stack[((hsi*15+885)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+864)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+800)*1+lsi)*1]), &(inteval->stack[((hsi*28+836)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+8548)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+3700)*1+lsi)*1]), &(inteval->stack[((hsi*126+8548)*1+lsi)*1]), &(inteval->stack[((hsi*90+864)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+736)*1+lsi)*1]), &(inteval->stack[((hsi*21+764)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+764)*1+lsi)*1]), &(inteval->stack[((hsi*15+785)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+764)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+700)*1+lsi)*1]), &(inteval->stack[((hsi*28+736)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+8674)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+3550)*1+lsi)*1]), &(inteval->stack[((hsi*126+8674)*1+lsi)*1]), &(inteval->stack[((hsi*90+764)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+636)*1+lsi)*1]), &(inteval->stack[((hsi*21+664)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+664)*1+lsi)*1]), &(inteval->stack[((hsi*15+685)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+664)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+600)*1+lsi)*1]), &(inteval->stack[((hsi*28+636)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+8800)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+3400)*1+lsi)*1]), &(inteval->stack[((hsi*126+8800)*1+lsi)*1]), &(inteval->stack[((hsi*90+664)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+536)*1+lsi)*1]), &(inteval->stack[((hsi*21+564)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+564)*1+lsi)*1]), &(inteval->stack[((hsi*15+585)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+564)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+500)*1+lsi)*1]), &(inteval->stack[((hsi*28+536)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+8926)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+3250)*1+lsi)*1]), &(inteval->stack[((hsi*126+8926)*1+lsi)*1]), &(inteval->stack[((hsi*90+564)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+436)*1+lsi)*1]), &(inteval->stack[((hsi*21+464)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+464)*1+lsi)*1]), &(inteval->stack[((hsi*15+485)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+464)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+400)*1+lsi)*1]), &(inteval->stack[((hsi*28+436)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9052)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+3100)*1+lsi)*1]), &(inteval->stack[((hsi*126+9052)*1+lsi)*1]), &(inteval->stack[((hsi*90+464)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+336)*1+lsi)*1]), &(inteval->stack[((hsi*21+364)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+364)*1+lsi)*1]), &(inteval->stack[((hsi*15+385)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+364)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+300)*1+lsi)*1]), &(inteval->stack[((hsi*28+336)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9178)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+2950)*1+lsi)*1]), &(inteval->stack[((hsi*126+9178)*1+lsi)*1]), &(inteval->stack[((hsi*90+364)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+236)*1+lsi)*1]), &(inteval->stack[((hsi*21+264)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+264)*1+lsi)*1]), &(inteval->stack[((hsi*15+285)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+264)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+200)*1+lsi)*1]), &(inteval->stack[((hsi*28+236)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9304)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+2800)*1+lsi)*1]), &(inteval->stack[((hsi*126+9304)*1+lsi)*1]), &(inteval->stack[((hsi*90+264)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]), &(inteval->stack[((hsi*21+164)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+164)*1+lsi)*1]), &(inteval->stack[((hsi*15+185)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+164)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9430)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+2650)*1+lsi)*1]), &(inteval->stack[((hsi*126+9430)*1+lsi)*1]), &(inteval->stack[((hsi*90+164)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*21+64)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+64)*1+lsi)*1]), &(inteval->stack[((hsi*15+85)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+64)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9556)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+2500)*1+lsi)*1]), &(inteval->stack[((hsi*126+9556)*1+lsi)*1]), &(inteval->stack[((hsi*90+64)*1+lsi)*1]),1);
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
