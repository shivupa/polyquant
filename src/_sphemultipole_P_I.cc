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
#include <HRRPart0ket0bra0ip.h>
#include <_sphemultipole_P_I_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_P_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_P_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*36+864)*1+lsi)*1]), &(inteval->stack[((hsi*28+1572)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+3532)*1+lsi)*1]), &(inteval->stack[((hsi*36+828)*1+lsi)*1]), &(inteval->stack[((hsi*28+1544)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+3448)*1+lsi)*1]), &(inteval->stack[((hsi*36+792)*1+lsi)*1]), &(inteval->stack[((hsi*28+1516)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+3364)*1+lsi)*1]), &(inteval->stack[((hsi*36+756)*1+lsi)*1]), &(inteval->stack[((hsi*28+1488)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+3280)*1+lsi)*1]), &(inteval->stack[((hsi*36+720)*1+lsi)*1]), &(inteval->stack[((hsi*28+1460)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+3196)*1+lsi)*1]), &(inteval->stack[((hsi*36+684)*1+lsi)*1]), &(inteval->stack[((hsi*28+1432)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+3112)*1+lsi)*1]), &(inteval->stack[((hsi*36+648)*1+lsi)*1]), &(inteval->stack[((hsi*28+1404)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+3028)*1+lsi)*1]), &(inteval->stack[((hsi*36+612)*1+lsi)*1]), &(inteval->stack[((hsi*28+1376)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2944)*1+lsi)*1]), &(inteval->stack[((hsi*36+576)*1+lsi)*1]), &(inteval->stack[((hsi*28+1348)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2860)*1+lsi)*1]), &(inteval->stack[((hsi*36+540)*1+lsi)*1]), &(inteval->stack[((hsi*28+1320)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2776)*1+lsi)*1]), &(inteval->stack[((hsi*36+504)*1+lsi)*1]), &(inteval->stack[((hsi*28+1292)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2692)*1+lsi)*1]), &(inteval->stack[((hsi*36+468)*1+lsi)*1]), &(inteval->stack[((hsi*28+1264)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2608)*1+lsi)*1]), &(inteval->stack[((hsi*36+432)*1+lsi)*1]), &(inteval->stack[((hsi*28+1236)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2524)*1+lsi)*1]), &(inteval->stack[((hsi*36+396)*1+lsi)*1]), &(inteval->stack[((hsi*28+1208)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2440)*1+lsi)*1]), &(inteval->stack[((hsi*36+360)*1+lsi)*1]), &(inteval->stack[((hsi*28+1180)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2356)*1+lsi)*1]), &(inteval->stack[((hsi*36+324)*1+lsi)*1]), &(inteval->stack[((hsi*28+1152)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2272)*1+lsi)*1]), &(inteval->stack[((hsi*36+288)*1+lsi)*1]), &(inteval->stack[((hsi*28+1124)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2188)*1+lsi)*1]), &(inteval->stack[((hsi*36+252)*1+lsi)*1]), &(inteval->stack[((hsi*28+1096)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2104)*1+lsi)*1]), &(inteval->stack[((hsi*36+216)*1+lsi)*1]), &(inteval->stack[((hsi*28+1068)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2020)*1+lsi)*1]), &(inteval->stack[((hsi*36+180)*1+lsi)*1]), &(inteval->stack[((hsi*28+1040)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1936)*1+lsi)*1]), &(inteval->stack[((hsi*36+144)*1+lsi)*1]), &(inteval->stack[((hsi*28+1012)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1852)*1+lsi)*1]), &(inteval->stack[((hsi*36+108)*1+lsi)*1]), &(inteval->stack[((hsi*28+984)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1768)*1+lsi)*1]), &(inteval->stack[((hsi*36+72)*1+lsi)*1]), &(inteval->stack[((hsi*28+956)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1684)*1+lsi)*1]), &(inteval->stack[((hsi*36+36)*1+lsi)*1]), &(inteval->stack[((hsi*28+928)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1600)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+900)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*84+1600)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*84+1684)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*84+1768)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*84+1852)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*84+1936)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*84+2020)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*84+2104)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*84+2188)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*84+2272)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*84+2356)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*84+2440)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*84+2524)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*84+2608)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*84+2692)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*84+2776)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*84+2860)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*84+2944)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*84+3028)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*84+3112)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*84+3196)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*84+3280)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*84+3364)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*84+3448)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*84+3532)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*84+3616)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
