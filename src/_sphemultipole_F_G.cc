/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
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
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1572)*1+lsi)*1]), &(inteval->stack[((hsi*21+879)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+879)*1+lsi)*1]), &(inteval->stack[((hsi*15+360)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+6358)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2464)*1+lsi)*1]), &(inteval->stack[((hsi*28+1572)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+6532)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+6100)*1+lsi)*1]), &(inteval->stack[((hsi*126+6532)*1+lsi)*1]), &(inteval->stack[((hsi*90+6358)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1544)*1+lsi)*1]), &(inteval->stack[((hsi*21+858)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+858)*1+lsi)*1]), &(inteval->stack[((hsi*15+345)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+6658)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2428)*1+lsi)*1]), &(inteval->stack[((hsi*28+1544)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+6748)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5950)*1+lsi)*1]), &(inteval->stack[((hsi*126+6748)*1+lsi)*1]), &(inteval->stack[((hsi*90+6658)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1516)*1+lsi)*1]), &(inteval->stack[((hsi*21+837)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6313)*1+lsi)*1]), &(inteval->stack[((hsi*21+837)*1+lsi)*1]), &(inteval->stack[((hsi*15+330)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+6874)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]), &(inteval->stack[((hsi*45+6313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2392)*1+lsi)*1]), &(inteval->stack[((hsi*28+1516)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+6964)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5800)*1+lsi)*1]), &(inteval->stack[((hsi*126+6964)*1+lsi)*1]), &(inteval->stack[((hsi*90+6874)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+837)*1+lsi)*1]), &(inteval->stack[((hsi*28+1488)*1+lsi)*1]), &(inteval->stack[((hsi*21+816)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+330)*1+lsi)*1]), &(inteval->stack[((hsi*21+816)*1+lsi)*1]), &(inteval->stack[((hsi*15+315)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+2392)*1+lsi)*1]), &(inteval->stack[((hsi*63+837)*1+lsi)*1]), &(inteval->stack[((hsi*45+330)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2356)*1+lsi)*1]), &(inteval->stack[((hsi*28+1488)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+7090)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+837)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5650)*1+lsi)*1]), &(inteval->stack[((hsi*126+7090)*1+lsi)*1]), &(inteval->stack[((hsi*90+2392)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1488)*1+lsi)*1]), &(inteval->stack[((hsi*28+1460)*1+lsi)*1]), &(inteval->stack[((hsi*21+795)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6250)*1+lsi)*1]), &(inteval->stack[((hsi*21+795)*1+lsi)*1]), &(inteval->stack[((hsi*15+300)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+795)*1+lsi)*1]), &(inteval->stack[((hsi*63+1488)*1+lsi)*1]), &(inteval->stack[((hsi*45+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2320)*1+lsi)*1]), &(inteval->stack[((hsi*28+1460)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+7216)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+1488)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5500)*1+lsi)*1]), &(inteval->stack[((hsi*126+7216)*1+lsi)*1]), &(inteval->stack[((hsi*90+795)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1460)*1+lsi)*1]), &(inteval->stack[((hsi*28+1432)*1+lsi)*1]), &(inteval->stack[((hsi*21+774)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6250)*1+lsi)*1]), &(inteval->stack[((hsi*21+774)*1+lsi)*1]), &(inteval->stack[((hsi*15+285)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+285)*1+lsi)*1]), &(inteval->stack[((hsi*63+1460)*1+lsi)*1]), &(inteval->stack[((hsi*45+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2284)*1+lsi)*1]), &(inteval->stack[((hsi*28+1432)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+7342)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+1460)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5350)*1+lsi)*1]), &(inteval->stack[((hsi*126+7342)*1+lsi)*1]), &(inteval->stack[((hsi*90+285)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1432)*1+lsi)*1]), &(inteval->stack[((hsi*28+1404)*1+lsi)*1]), &(inteval->stack[((hsi*21+753)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6250)*1+lsi)*1]), &(inteval->stack[((hsi*21+753)*1+lsi)*1]), &(inteval->stack[((hsi*15+270)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+2284)*1+lsi)*1]), &(inteval->stack[((hsi*63+1432)*1+lsi)*1]), &(inteval->stack[((hsi*45+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2248)*1+lsi)*1]), &(inteval->stack[((hsi*28+1404)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+7468)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+1432)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5200)*1+lsi)*1]), &(inteval->stack[((hsi*126+7468)*1+lsi)*1]), &(inteval->stack[((hsi*90+2284)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1404)*1+lsi)*1]), &(inteval->stack[((hsi*28+1376)*1+lsi)*1]), &(inteval->stack[((hsi*21+732)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1467)*1+lsi)*1]), &(inteval->stack[((hsi*21+732)*1+lsi)*1]), &(inteval->stack[((hsi*15+255)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+6250)*1+lsi)*1]), &(inteval->stack[((hsi*63+1404)*1+lsi)*1]), &(inteval->stack[((hsi*45+1467)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2212)*1+lsi)*1]), &(inteval->stack[((hsi*28+1376)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1467)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+1404)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+5050)*1+lsi)*1]), &(inteval->stack[((hsi*126+1467)*1+lsi)*1]), &(inteval->stack[((hsi*90+6250)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+732)*1+lsi)*1]), &(inteval->stack[((hsi*28+1348)*1+lsi)*1]), &(inteval->stack[((hsi*21+711)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1376)*1+lsi)*1]), &(inteval->stack[((hsi*21+711)*1+lsi)*1]), &(inteval->stack[((hsi*15+240)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+7594)*1+lsi)*1]), &(inteval->stack[((hsi*63+732)*1+lsi)*1]), &(inteval->stack[((hsi*45+1376)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2176)*1+lsi)*1]), &(inteval->stack[((hsi*28+1348)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+7684)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+732)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4900)*1+lsi)*1]), &(inteval->stack[((hsi*126+7684)*1+lsi)*1]), &(inteval->stack[((hsi*90+7594)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1348)*1+lsi)*1]), &(inteval->stack[((hsi*28+1320)*1+lsi)*1]), &(inteval->stack[((hsi*21+690)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+240)*1+lsi)*1]), &(inteval->stack[((hsi*21+690)*1+lsi)*1]), &(inteval->stack[((hsi*15+225)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+2176)*1+lsi)*1]), &(inteval->stack[((hsi*63+1348)*1+lsi)*1]), &(inteval->stack[((hsi*45+240)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2140)*1+lsi)*1]), &(inteval->stack[((hsi*28+1320)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+7810)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+1348)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4750)*1+lsi)*1]), &(inteval->stack[((hsi*126+7810)*1+lsi)*1]), &(inteval->stack[((hsi*90+2176)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1320)*1+lsi)*1]), &(inteval->stack[((hsi*28+1292)*1+lsi)*1]), &(inteval->stack[((hsi*21+669)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+690)*1+lsi)*1]), &(inteval->stack[((hsi*21+669)*1+lsi)*1]), &(inteval->stack[((hsi*15+210)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+7936)*1+lsi)*1]), &(inteval->stack[((hsi*63+1320)*1+lsi)*1]), &(inteval->stack[((hsi*45+690)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2104)*1+lsi)*1]), &(inteval->stack[((hsi*28+1292)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+669)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+1320)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4600)*1+lsi)*1]), &(inteval->stack[((hsi*126+669)*1+lsi)*1]), &(inteval->stack[((hsi*90+7936)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1292)*1+lsi)*1]), &(inteval->stack[((hsi*28+1264)*1+lsi)*1]), &(inteval->stack[((hsi*21+648)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1355)*1+lsi)*1]), &(inteval->stack[((hsi*21+648)*1+lsi)*1]), &(inteval->stack[((hsi*15+195)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+195)*1+lsi)*1]), &(inteval->stack[((hsi*63+1292)*1+lsi)*1]), &(inteval->stack[((hsi*45+1355)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2068)*1+lsi)*1]), &(inteval->stack[((hsi*28+1264)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+8026)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+1292)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4450)*1+lsi)*1]), &(inteval->stack[((hsi*126+8026)*1+lsi)*1]), &(inteval->stack[((hsi*90+195)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1264)*1+lsi)*1]), &(inteval->stack[((hsi*28+1236)*1+lsi)*1]), &(inteval->stack[((hsi*21+627)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1327)*1+lsi)*1]), &(inteval->stack[((hsi*21+627)*1+lsi)*1]), &(inteval->stack[((hsi*15+180)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+2068)*1+lsi)*1]), &(inteval->stack[((hsi*63+1264)*1+lsi)*1]), &(inteval->stack[((hsi*45+1327)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+2032)*1+lsi)*1]), &(inteval->stack[((hsi*28+1236)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1327)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+1264)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4300)*1+lsi)*1]), &(inteval->stack[((hsi*126+1327)*1+lsi)*1]), &(inteval->stack[((hsi*90+2068)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1236)*1+lsi)*1]), &(inteval->stack[((hsi*28+1208)*1+lsi)*1]), &(inteval->stack[((hsi*21+606)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6448)*1+lsi)*1]), &(inteval->stack[((hsi*21+606)*1+lsi)*1]), &(inteval->stack[((hsi*15+165)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+8152)*1+lsi)*1]), &(inteval->stack[((hsi*63+1236)*1+lsi)*1]), &(inteval->stack[((hsi*45+6448)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1996)*1+lsi)*1]), &(inteval->stack[((hsi*28+1208)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+8242)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+1236)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4150)*1+lsi)*1]), &(inteval->stack[((hsi*126+8242)*1+lsi)*1]), &(inteval->stack[((hsi*90+8152)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+606)*1+lsi)*1]), &(inteval->stack[((hsi*28+1180)*1+lsi)*1]), &(inteval->stack[((hsi*21+585)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1208)*1+lsi)*1]), &(inteval->stack[((hsi*21+585)*1+lsi)*1]), &(inteval->stack[((hsi*15+150)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+8368)*1+lsi)*1]), &(inteval->stack[((hsi*63+606)*1+lsi)*1]), &(inteval->stack[((hsi*45+1208)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1960)*1+lsi)*1]), &(inteval->stack[((hsi*28+1180)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1180)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+606)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+4000)*1+lsi)*1]), &(inteval->stack[((hsi*126+1180)*1+lsi)*1]), &(inteval->stack[((hsi*90+8368)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1960)*1+lsi)*1]), &(inteval->stack[((hsi*28+1152)*1+lsi)*1]), &(inteval->stack[((hsi*21+564)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+150)*1+lsi)*1]), &(inteval->stack[((hsi*21+564)*1+lsi)*1]), &(inteval->stack[((hsi*15+135)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+564)*1+lsi)*1]), &(inteval->stack[((hsi*63+1960)*1+lsi)*1]), &(inteval->stack[((hsi*45+150)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1924)*1+lsi)*1]), &(inteval->stack[((hsi*28+1152)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+8458)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+1960)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+3850)*1+lsi)*1]), &(inteval->stack[((hsi*126+8458)*1+lsi)*1]), &(inteval->stack[((hsi*90+564)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1924)*1+lsi)*1]), &(inteval->stack[((hsi*28+1124)*1+lsi)*1]), &(inteval->stack[((hsi*21+543)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6448)*1+lsi)*1]), &(inteval->stack[((hsi*21+543)*1+lsi)*1]), &(inteval->stack[((hsi*15+120)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+8584)*1+lsi)*1]), &(inteval->stack[((hsi*63+1924)*1+lsi)*1]), &(inteval->stack[((hsi*45+6448)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1888)*1+lsi)*1]), &(inteval->stack[((hsi*28+1124)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+8674)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+1924)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+3700)*1+lsi)*1]), &(inteval->stack[((hsi*126+8674)*1+lsi)*1]), &(inteval->stack[((hsi*90+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1888)*1+lsi)*1]), &(inteval->stack[((hsi*28+1096)*1+lsi)*1]), &(inteval->stack[((hsi*21+522)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1951)*1+lsi)*1]), &(inteval->stack[((hsi*21+522)*1+lsi)*1]), &(inteval->stack[((hsi*15+105)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+105)*1+lsi)*1]), &(inteval->stack[((hsi*63+1888)*1+lsi)*1]), &(inteval->stack[((hsi*45+1951)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1852)*1+lsi)*1]), &(inteval->stack[((hsi*28+1096)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+8800)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+1888)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+3550)*1+lsi)*1]), &(inteval->stack[((hsi*126+8800)*1+lsi)*1]), &(inteval->stack[((hsi*90+105)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1852)*1+lsi)*1]), &(inteval->stack[((hsi*28+1068)*1+lsi)*1]), &(inteval->stack[((hsi*21+501)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1915)*1+lsi)*1]), &(inteval->stack[((hsi*21+501)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1852)*1+lsi)*1]), &(inteval->stack[((hsi*45+1915)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1816)*1+lsi)*1]), &(inteval->stack[((hsi*28+1068)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+8926)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+1852)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+3400)*1+lsi)*1]), &(inteval->stack[((hsi*126+8926)*1+lsi)*1]), &(inteval->stack[((hsi*90+1960)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+501)*1+lsi)*1]), &(inteval->stack[((hsi*28+1040)*1+lsi)*1]), &(inteval->stack[((hsi*21+480)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1816)*1+lsi)*1]), &(inteval->stack[((hsi*21+480)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+1068)*1+lsi)*1]), &(inteval->stack[((hsi*63+501)*1+lsi)*1]), &(inteval->stack[((hsi*45+1816)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1780)*1+lsi)*1]), &(inteval->stack[((hsi*28+1040)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1780)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+501)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+3250)*1+lsi)*1]), &(inteval->stack[((hsi*126+1780)*1+lsi)*1]), &(inteval->stack[((hsi*90+1068)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+6448)*1+lsi)*1]), &(inteval->stack[((hsi*28+1012)*1+lsi)*1]), &(inteval->stack[((hsi*21+459)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+480)*1+lsi)*1]), &(inteval->stack[((hsi*21+459)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+9052)*1+lsi)*1]), &(inteval->stack[((hsi*63+6448)*1+lsi)*1]), &(inteval->stack[((hsi*45+480)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+459)*1+lsi)*1]), &(inteval->stack[((hsi*36+1744)*1+lsi)*1]), &(inteval->stack[((hsi*28+1012)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+9142)*1+lsi)*1]), &(inteval->stack[((hsi*84+459)*1+lsi)*1]), &(inteval->stack[((hsi*63+6448)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+3100)*1+lsi)*1]), &(inteval->stack[((hsi*126+9142)*1+lsi)*1]), &(inteval->stack[((hsi*90+9052)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+459)*1+lsi)*1]), &(inteval->stack[((hsi*28+984)*1+lsi)*1]), &(inteval->stack[((hsi*21+438)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+60)*1+lsi)*1]), &(inteval->stack[((hsi*21+438)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+9268)*1+lsi)*1]), &(inteval->stack[((hsi*63+459)*1+lsi)*1]), &(inteval->stack[((hsi*45+60)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1708)*1+lsi)*1]), &(inteval->stack[((hsi*28+984)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+9358)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+459)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+2950)*1+lsi)*1]), &(inteval->stack[((hsi*126+9358)*1+lsi)*1]), &(inteval->stack[((hsi*90+9268)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+438)*1+lsi)*1]), &(inteval->stack[((hsi*28+956)*1+lsi)*1]), &(inteval->stack[((hsi*21+417)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+6448)*1+lsi)*1]), &(inteval->stack[((hsi*21+417)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+9484)*1+lsi)*1]), &(inteval->stack[((hsi*63+438)*1+lsi)*1]), &(inteval->stack[((hsi*45+6448)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+984)*1+lsi)*1]), &(inteval->stack[((hsi*36+1672)*1+lsi)*1]), &(inteval->stack[((hsi*28+956)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+9574)*1+lsi)*1]), &(inteval->stack[((hsi*84+984)*1+lsi)*1]), &(inteval->stack[((hsi*63+438)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+2800)*1+lsi)*1]), &(inteval->stack[((hsi*126+9574)*1+lsi)*1]), &(inteval->stack[((hsi*90+9484)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+417)*1+lsi)*1]), &(inteval->stack[((hsi*28+928)*1+lsi)*1]), &(inteval->stack[((hsi*21+396)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+956)*1+lsi)*1]), &(inteval->stack[((hsi*21+396)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+15)*1+lsi)*1]), &(inteval->stack[((hsi*63+417)*1+lsi)*1]), &(inteval->stack[((hsi*45+956)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1636)*1+lsi)*1]), &(inteval->stack[((hsi*28+928)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1636)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+417)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+2650)*1+lsi)*1]), &(inteval->stack[((hsi*126+1636)*1+lsi)*1]), &(inteval->stack[((hsi*90+15)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+396)*1+lsi)*1]), &(inteval->stack[((hsi*28+900)*1+lsi)*1]), &(inteval->stack[((hsi*21+375)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+928)*1+lsi)*1]), &(inteval->stack[((hsi*21+375)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+459)*1+lsi)*1]), &(inteval->stack[((hsi*63+396)*1+lsi)*1]), &(inteval->stack[((hsi*45+928)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*36+1600)*1+lsi)*1]), &(inteval->stack[((hsi*28+900)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+885)*1+lsi)*1]), &(inteval->stack[((hsi*84+6448)*1+lsi)*1]), &(inteval->stack[((hsi*63+396)*1+lsi)*1]),1);
HRRPart0ket0bra0gf(inteval, &(inteval->stack[((hsi*150+2500)*1+lsi)*1]), &(inteval->stack[((hsi*126+885)*1+lsi)*1]), &(inteval->stack[((hsi*90+459)*1+lsi)*1]),1);
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
