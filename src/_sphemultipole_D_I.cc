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
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7009)*1+lsi)*1]), &(inteval->stack[((hsi*45+1080)*1+lsi)*1]), &(inteval->stack[((hsi*36+2661)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+6757)*1+lsi)*1]), &(inteval->stack[((hsi*108+7009)*1+lsi)*1]), &(inteval->stack[((hsi*84+6925)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+7117)*1+lsi)*1]), &(inteval->stack[((hsi*36+2597)*1+lsi)*1]), &(inteval->stack[((hsi*28+2633)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7201)*1+lsi)*1]), &(inteval->stack[((hsi*45+1035)*1+lsi)*1]), &(inteval->stack[((hsi*36+2597)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+6589)*1+lsi)*1]), &(inteval->stack[((hsi*108+7201)*1+lsi)*1]), &(inteval->stack[((hsi*84+7117)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2597)*1+lsi)*1]), &(inteval->stack[((hsi*36+2533)*1+lsi)*1]), &(inteval->stack[((hsi*28+2569)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7309)*1+lsi)*1]), &(inteval->stack[((hsi*45+990)*1+lsi)*1]), &(inteval->stack[((hsi*36+2533)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+6421)*1+lsi)*1]), &(inteval->stack[((hsi*108+7309)*1+lsi)*1]), &(inteval->stack[((hsi*84+2597)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+990)*1+lsi)*1]), &(inteval->stack[((hsi*36+2469)*1+lsi)*1]), &(inteval->stack[((hsi*28+2505)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7417)*1+lsi)*1]), &(inteval->stack[((hsi*45+945)*1+lsi)*1]), &(inteval->stack[((hsi*36+2469)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+6253)*1+lsi)*1]), &(inteval->stack[((hsi*108+7417)*1+lsi)*1]), &(inteval->stack[((hsi*84+990)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2469)*1+lsi)*1]), &(inteval->stack[((hsi*36+2405)*1+lsi)*1]), &(inteval->stack[((hsi*28+2441)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7525)*1+lsi)*1]), &(inteval->stack[((hsi*45+900)*1+lsi)*1]), &(inteval->stack[((hsi*36+2405)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+6085)*1+lsi)*1]), &(inteval->stack[((hsi*108+7525)*1+lsi)*1]), &(inteval->stack[((hsi*84+2469)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+900)*1+lsi)*1]), &(inteval->stack[((hsi*36+2341)*1+lsi)*1]), &(inteval->stack[((hsi*28+2377)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7633)*1+lsi)*1]), &(inteval->stack[((hsi*45+855)*1+lsi)*1]), &(inteval->stack[((hsi*36+2341)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+5917)*1+lsi)*1]), &(inteval->stack[((hsi*108+7633)*1+lsi)*1]), &(inteval->stack[((hsi*84+900)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2341)*1+lsi)*1]), &(inteval->stack[((hsi*36+2277)*1+lsi)*1]), &(inteval->stack[((hsi*28+2313)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7741)*1+lsi)*1]), &(inteval->stack[((hsi*45+810)*1+lsi)*1]), &(inteval->stack[((hsi*36+2277)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+5749)*1+lsi)*1]), &(inteval->stack[((hsi*108+7741)*1+lsi)*1]), &(inteval->stack[((hsi*84+2341)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+810)*1+lsi)*1]), &(inteval->stack[((hsi*36+2213)*1+lsi)*1]), &(inteval->stack[((hsi*28+2249)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7849)*1+lsi)*1]), &(inteval->stack[((hsi*45+765)*1+lsi)*1]), &(inteval->stack[((hsi*36+2213)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+5581)*1+lsi)*1]), &(inteval->stack[((hsi*108+7849)*1+lsi)*1]), &(inteval->stack[((hsi*84+810)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2213)*1+lsi)*1]), &(inteval->stack[((hsi*36+2149)*1+lsi)*1]), &(inteval->stack[((hsi*28+2185)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7957)*1+lsi)*1]), &(inteval->stack[((hsi*45+720)*1+lsi)*1]), &(inteval->stack[((hsi*36+2149)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+5413)*1+lsi)*1]), &(inteval->stack[((hsi*108+7957)*1+lsi)*1]), &(inteval->stack[((hsi*84+2213)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+720)*1+lsi)*1]), &(inteval->stack[((hsi*36+2085)*1+lsi)*1]), &(inteval->stack[((hsi*28+2121)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8065)*1+lsi)*1]), &(inteval->stack[((hsi*45+675)*1+lsi)*1]), &(inteval->stack[((hsi*36+2085)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+5245)*1+lsi)*1]), &(inteval->stack[((hsi*108+8065)*1+lsi)*1]), &(inteval->stack[((hsi*84+720)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2085)*1+lsi)*1]), &(inteval->stack[((hsi*36+2021)*1+lsi)*1]), &(inteval->stack[((hsi*28+2057)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8173)*1+lsi)*1]), &(inteval->stack[((hsi*45+630)*1+lsi)*1]), &(inteval->stack[((hsi*36+2021)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+5077)*1+lsi)*1]), &(inteval->stack[((hsi*108+8173)*1+lsi)*1]), &(inteval->stack[((hsi*84+2085)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+630)*1+lsi)*1]), &(inteval->stack[((hsi*36+1957)*1+lsi)*1]), &(inteval->stack[((hsi*28+1993)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8281)*1+lsi)*1]), &(inteval->stack[((hsi*45+585)*1+lsi)*1]), &(inteval->stack[((hsi*36+1957)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4909)*1+lsi)*1]), &(inteval->stack[((hsi*108+8281)*1+lsi)*1]), &(inteval->stack[((hsi*84+630)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1957)*1+lsi)*1]), &(inteval->stack[((hsi*36+1893)*1+lsi)*1]), &(inteval->stack[((hsi*28+1929)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8389)*1+lsi)*1]), &(inteval->stack[((hsi*45+540)*1+lsi)*1]), &(inteval->stack[((hsi*36+1893)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4741)*1+lsi)*1]), &(inteval->stack[((hsi*108+8389)*1+lsi)*1]), &(inteval->stack[((hsi*84+1957)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+540)*1+lsi)*1]), &(inteval->stack[((hsi*36+1829)*1+lsi)*1]), &(inteval->stack[((hsi*28+1865)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8497)*1+lsi)*1]), &(inteval->stack[((hsi*45+495)*1+lsi)*1]), &(inteval->stack[((hsi*36+1829)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4573)*1+lsi)*1]), &(inteval->stack[((hsi*108+8497)*1+lsi)*1]), &(inteval->stack[((hsi*84+540)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1829)*1+lsi)*1]), &(inteval->stack[((hsi*36+1765)*1+lsi)*1]), &(inteval->stack[((hsi*28+1801)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8605)*1+lsi)*1]), &(inteval->stack[((hsi*45+450)*1+lsi)*1]), &(inteval->stack[((hsi*36+1765)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4405)*1+lsi)*1]), &(inteval->stack[((hsi*108+8605)*1+lsi)*1]), &(inteval->stack[((hsi*84+1829)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+450)*1+lsi)*1]), &(inteval->stack[((hsi*36+1701)*1+lsi)*1]), &(inteval->stack[((hsi*28+1737)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8713)*1+lsi)*1]), &(inteval->stack[((hsi*45+405)*1+lsi)*1]), &(inteval->stack[((hsi*36+1701)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4237)*1+lsi)*1]), &(inteval->stack[((hsi*108+8713)*1+lsi)*1]), &(inteval->stack[((hsi*84+450)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1701)*1+lsi)*1]), &(inteval->stack[((hsi*36+1637)*1+lsi)*1]), &(inteval->stack[((hsi*28+1673)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8821)*1+lsi)*1]), &(inteval->stack[((hsi*45+360)*1+lsi)*1]), &(inteval->stack[((hsi*36+1637)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4069)*1+lsi)*1]), &(inteval->stack[((hsi*108+8821)*1+lsi)*1]), &(inteval->stack[((hsi*84+1701)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+360)*1+lsi)*1]), &(inteval->stack[((hsi*36+1573)*1+lsi)*1]), &(inteval->stack[((hsi*28+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8929)*1+lsi)*1]), &(inteval->stack[((hsi*45+315)*1+lsi)*1]), &(inteval->stack[((hsi*36+1573)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3901)*1+lsi)*1]), &(inteval->stack[((hsi*108+8929)*1+lsi)*1]), &(inteval->stack[((hsi*84+360)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1573)*1+lsi)*1]), &(inteval->stack[((hsi*36+1509)*1+lsi)*1]), &(inteval->stack[((hsi*28+1545)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9037)*1+lsi)*1]), &(inteval->stack[((hsi*45+270)*1+lsi)*1]), &(inteval->stack[((hsi*36+1509)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3733)*1+lsi)*1]), &(inteval->stack[((hsi*108+9037)*1+lsi)*1]), &(inteval->stack[((hsi*84+1573)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+270)*1+lsi)*1]), &(inteval->stack[((hsi*36+1445)*1+lsi)*1]), &(inteval->stack[((hsi*28+1481)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9145)*1+lsi)*1]), &(inteval->stack[((hsi*45+225)*1+lsi)*1]), &(inteval->stack[((hsi*36+1445)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3565)*1+lsi)*1]), &(inteval->stack[((hsi*108+9145)*1+lsi)*1]), &(inteval->stack[((hsi*84+270)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1445)*1+lsi)*1]), &(inteval->stack[((hsi*36+1381)*1+lsi)*1]), &(inteval->stack[((hsi*28+1417)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9253)*1+lsi)*1]), &(inteval->stack[((hsi*45+180)*1+lsi)*1]), &(inteval->stack[((hsi*36+1381)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3397)*1+lsi)*1]), &(inteval->stack[((hsi*108+9253)*1+lsi)*1]), &(inteval->stack[((hsi*84+1445)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+180)*1+lsi)*1]), &(inteval->stack[((hsi*36+1317)*1+lsi)*1]), &(inteval->stack[((hsi*28+1353)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9361)*1+lsi)*1]), &(inteval->stack[((hsi*45+135)*1+lsi)*1]), &(inteval->stack[((hsi*36+1317)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3229)*1+lsi)*1]), &(inteval->stack[((hsi*108+9361)*1+lsi)*1]), &(inteval->stack[((hsi*84+180)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1317)*1+lsi)*1]), &(inteval->stack[((hsi*36+1253)*1+lsi)*1]), &(inteval->stack[((hsi*28+1289)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9469)*1+lsi)*1]), &(inteval->stack[((hsi*45+90)*1+lsi)*1]), &(inteval->stack[((hsi*36+1253)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3061)*1+lsi)*1]), &(inteval->stack[((hsi*108+9469)*1+lsi)*1]), &(inteval->stack[((hsi*84+1317)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+90)*1+lsi)*1]), &(inteval->stack[((hsi*36+1189)*1+lsi)*1]), &(inteval->stack[((hsi*28+1225)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9577)*1+lsi)*1]), &(inteval->stack[((hsi*45+45)*1+lsi)*1]), &(inteval->stack[((hsi*36+1189)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2893)*1+lsi)*1]), &(inteval->stack[((hsi*108+9577)*1+lsi)*1]), &(inteval->stack[((hsi*84+90)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1189)*1+lsi)*1]), &(inteval->stack[((hsi*36+1125)*1+lsi)*1]), &(inteval->stack[((hsi*28+1161)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9685)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+1125)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2725)*1+lsi)*1]), &(inteval->stack[((hsi*108+9685)*1+lsi)*1]), &(inteval->stack[((hsi*84+1189)*1+lsi)*1]),1);
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
