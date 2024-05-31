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
#include <HRRPart0ket0bra0id.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0kp.h>
#include <_sphemultipole_D_I_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_D_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2725)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6925)*1+lsi)*1]), &(inteval->stack[((hsi*36+2661)*1+lsi)*1]), &(inteval->stack[((hsi*28+2697)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7009)*1+lsi)*1]), &(inteval->stack[((hsi*45+2616)*1+lsi)*1]), &(inteval->stack[((hsi*36+2661)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+6757)*1+lsi)*1]), &(inteval->stack[((hsi*108+7009)*1+lsi)*1]), &(inteval->stack[((hsi*84+6925)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2616)*1+lsi)*1]), &(inteval->stack[((hsi*36+2552)*1+lsi)*1]), &(inteval->stack[((hsi*28+2588)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7117)*1+lsi)*1]), &(inteval->stack[((hsi*45+2507)*1+lsi)*1]), &(inteval->stack[((hsi*36+2552)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+6589)*1+lsi)*1]), &(inteval->stack[((hsi*108+7117)*1+lsi)*1]), &(inteval->stack[((hsi*84+2616)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2507)*1+lsi)*1]), &(inteval->stack[((hsi*36+2443)*1+lsi)*1]), &(inteval->stack[((hsi*28+2479)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7225)*1+lsi)*1]), &(inteval->stack[((hsi*45+2398)*1+lsi)*1]), &(inteval->stack[((hsi*36+2443)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+6421)*1+lsi)*1]), &(inteval->stack[((hsi*108+7225)*1+lsi)*1]), &(inteval->stack[((hsi*84+2507)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*36+2334)*1+lsi)*1]), &(inteval->stack[((hsi*28+2370)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7333)*1+lsi)*1]), &(inteval->stack[((hsi*45+2289)*1+lsi)*1]), &(inteval->stack[((hsi*36+2334)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+6253)*1+lsi)*1]), &(inteval->stack[((hsi*108+7333)*1+lsi)*1]), &(inteval->stack[((hsi*84+2398)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2289)*1+lsi)*1]), &(inteval->stack[((hsi*36+2225)*1+lsi)*1]), &(inteval->stack[((hsi*28+2261)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7441)*1+lsi)*1]), &(inteval->stack[((hsi*45+2180)*1+lsi)*1]), &(inteval->stack[((hsi*36+2225)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+6085)*1+lsi)*1]), &(inteval->stack[((hsi*108+7441)*1+lsi)*1]), &(inteval->stack[((hsi*84+2289)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2180)*1+lsi)*1]), &(inteval->stack[((hsi*36+2116)*1+lsi)*1]), &(inteval->stack[((hsi*28+2152)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7549)*1+lsi)*1]), &(inteval->stack[((hsi*45+2071)*1+lsi)*1]), &(inteval->stack[((hsi*36+2116)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+5917)*1+lsi)*1]), &(inteval->stack[((hsi*108+7549)*1+lsi)*1]), &(inteval->stack[((hsi*84+2180)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2071)*1+lsi)*1]), &(inteval->stack[((hsi*36+2007)*1+lsi)*1]), &(inteval->stack[((hsi*28+2043)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7657)*1+lsi)*1]), &(inteval->stack[((hsi*45+1962)*1+lsi)*1]), &(inteval->stack[((hsi*36+2007)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+5749)*1+lsi)*1]), &(inteval->stack[((hsi*108+7657)*1+lsi)*1]), &(inteval->stack[((hsi*84+2071)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1962)*1+lsi)*1]), &(inteval->stack[((hsi*36+1898)*1+lsi)*1]), &(inteval->stack[((hsi*28+1934)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7765)*1+lsi)*1]), &(inteval->stack[((hsi*45+1853)*1+lsi)*1]), &(inteval->stack[((hsi*36+1898)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+5581)*1+lsi)*1]), &(inteval->stack[((hsi*108+7765)*1+lsi)*1]), &(inteval->stack[((hsi*84+1962)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1853)*1+lsi)*1]), &(inteval->stack[((hsi*36+1789)*1+lsi)*1]), &(inteval->stack[((hsi*28+1825)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7873)*1+lsi)*1]), &(inteval->stack[((hsi*45+1744)*1+lsi)*1]), &(inteval->stack[((hsi*36+1789)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+5413)*1+lsi)*1]), &(inteval->stack[((hsi*108+7873)*1+lsi)*1]), &(inteval->stack[((hsi*84+1853)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1744)*1+lsi)*1]), &(inteval->stack[((hsi*36+1680)*1+lsi)*1]), &(inteval->stack[((hsi*28+1716)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7981)*1+lsi)*1]), &(inteval->stack[((hsi*45+1635)*1+lsi)*1]), &(inteval->stack[((hsi*36+1680)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+5245)*1+lsi)*1]), &(inteval->stack[((hsi*108+7981)*1+lsi)*1]), &(inteval->stack[((hsi*84+1744)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1635)*1+lsi)*1]), &(inteval->stack[((hsi*36+1571)*1+lsi)*1]), &(inteval->stack[((hsi*28+1607)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8089)*1+lsi)*1]), &(inteval->stack[((hsi*45+1526)*1+lsi)*1]), &(inteval->stack[((hsi*36+1571)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+5077)*1+lsi)*1]), &(inteval->stack[((hsi*108+8089)*1+lsi)*1]), &(inteval->stack[((hsi*84+1635)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1526)*1+lsi)*1]), &(inteval->stack[((hsi*36+1462)*1+lsi)*1]), &(inteval->stack[((hsi*28+1498)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8197)*1+lsi)*1]), &(inteval->stack[((hsi*45+1417)*1+lsi)*1]), &(inteval->stack[((hsi*36+1462)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4909)*1+lsi)*1]), &(inteval->stack[((hsi*108+8197)*1+lsi)*1]), &(inteval->stack[((hsi*84+1526)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1417)*1+lsi)*1]), &(inteval->stack[((hsi*36+1353)*1+lsi)*1]), &(inteval->stack[((hsi*28+1389)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8305)*1+lsi)*1]), &(inteval->stack[((hsi*45+1308)*1+lsi)*1]), &(inteval->stack[((hsi*36+1353)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4741)*1+lsi)*1]), &(inteval->stack[((hsi*108+8305)*1+lsi)*1]), &(inteval->stack[((hsi*84+1417)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1308)*1+lsi)*1]), &(inteval->stack[((hsi*36+1244)*1+lsi)*1]), &(inteval->stack[((hsi*28+1280)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8413)*1+lsi)*1]), &(inteval->stack[((hsi*45+1199)*1+lsi)*1]), &(inteval->stack[((hsi*36+1244)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4573)*1+lsi)*1]), &(inteval->stack[((hsi*108+8413)*1+lsi)*1]), &(inteval->stack[((hsi*84+1308)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1199)*1+lsi)*1]), &(inteval->stack[((hsi*36+1135)*1+lsi)*1]), &(inteval->stack[((hsi*28+1171)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8521)*1+lsi)*1]), &(inteval->stack[((hsi*45+1090)*1+lsi)*1]), &(inteval->stack[((hsi*36+1135)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4405)*1+lsi)*1]), &(inteval->stack[((hsi*108+8521)*1+lsi)*1]), &(inteval->stack[((hsi*84+1199)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1090)*1+lsi)*1]), &(inteval->stack[((hsi*36+1026)*1+lsi)*1]), &(inteval->stack[((hsi*28+1062)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8629)*1+lsi)*1]), &(inteval->stack[((hsi*45+981)*1+lsi)*1]), &(inteval->stack[((hsi*36+1026)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4237)*1+lsi)*1]), &(inteval->stack[((hsi*108+8629)*1+lsi)*1]), &(inteval->stack[((hsi*84+1090)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+981)*1+lsi)*1]), &(inteval->stack[((hsi*36+917)*1+lsi)*1]), &(inteval->stack[((hsi*28+953)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8737)*1+lsi)*1]), &(inteval->stack[((hsi*45+872)*1+lsi)*1]), &(inteval->stack[((hsi*36+917)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4069)*1+lsi)*1]), &(inteval->stack[((hsi*108+8737)*1+lsi)*1]), &(inteval->stack[((hsi*84+981)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+872)*1+lsi)*1]), &(inteval->stack[((hsi*36+808)*1+lsi)*1]), &(inteval->stack[((hsi*28+844)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8845)*1+lsi)*1]), &(inteval->stack[((hsi*45+763)*1+lsi)*1]), &(inteval->stack[((hsi*36+808)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3901)*1+lsi)*1]), &(inteval->stack[((hsi*108+8845)*1+lsi)*1]), &(inteval->stack[((hsi*84+872)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+763)*1+lsi)*1]), &(inteval->stack[((hsi*36+699)*1+lsi)*1]), &(inteval->stack[((hsi*28+735)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8953)*1+lsi)*1]), &(inteval->stack[((hsi*45+654)*1+lsi)*1]), &(inteval->stack[((hsi*36+699)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3733)*1+lsi)*1]), &(inteval->stack[((hsi*108+8953)*1+lsi)*1]), &(inteval->stack[((hsi*84+763)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+654)*1+lsi)*1]), &(inteval->stack[((hsi*36+590)*1+lsi)*1]), &(inteval->stack[((hsi*28+626)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9061)*1+lsi)*1]), &(inteval->stack[((hsi*45+545)*1+lsi)*1]), &(inteval->stack[((hsi*36+590)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3565)*1+lsi)*1]), &(inteval->stack[((hsi*108+9061)*1+lsi)*1]), &(inteval->stack[((hsi*84+654)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+545)*1+lsi)*1]), &(inteval->stack[((hsi*36+481)*1+lsi)*1]), &(inteval->stack[((hsi*28+517)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9169)*1+lsi)*1]), &(inteval->stack[((hsi*45+436)*1+lsi)*1]), &(inteval->stack[((hsi*36+481)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3397)*1+lsi)*1]), &(inteval->stack[((hsi*108+9169)*1+lsi)*1]), &(inteval->stack[((hsi*84+545)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+436)*1+lsi)*1]), &(inteval->stack[((hsi*36+372)*1+lsi)*1]), &(inteval->stack[((hsi*28+408)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9277)*1+lsi)*1]), &(inteval->stack[((hsi*45+327)*1+lsi)*1]), &(inteval->stack[((hsi*36+372)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3229)*1+lsi)*1]), &(inteval->stack[((hsi*108+9277)*1+lsi)*1]), &(inteval->stack[((hsi*84+436)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+327)*1+lsi)*1]), &(inteval->stack[((hsi*36+263)*1+lsi)*1]), &(inteval->stack[((hsi*28+299)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9385)*1+lsi)*1]), &(inteval->stack[((hsi*45+218)*1+lsi)*1]), &(inteval->stack[((hsi*36+263)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3061)*1+lsi)*1]), &(inteval->stack[((hsi*108+9385)*1+lsi)*1]), &(inteval->stack[((hsi*84+327)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+218)*1+lsi)*1]), &(inteval->stack[((hsi*36+154)*1+lsi)*1]), &(inteval->stack[((hsi*28+190)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9493)*1+lsi)*1]), &(inteval->stack[((hsi*45+109)*1+lsi)*1]), &(inteval->stack[((hsi*36+154)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2893)*1+lsi)*1]), &(inteval->stack[((hsi*108+9493)*1+lsi)*1]), &(inteval->stack[((hsi*84+218)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+109)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9601)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2725)*1+lsi)*1]), &(inteval->stack[((hsi*108+9601)*1+lsi)*1]), &(inteval->stack[((hsi*84+109)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*168+2725)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*168+2893)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*168+3061)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*168+3229)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*168+3397)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*168+3565)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*168+3733)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*168+3901)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*168+4069)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*168+4237)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*168+4405)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*168+4573)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*168+4741)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*168+4909)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*168+5077)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*168+5245)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*168+5413)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*168+5581)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*168+5749)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*168+5917)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*168+6085)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*168+6253)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*168+6421)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*168+6589)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*168+6757)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
