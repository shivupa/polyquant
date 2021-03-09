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
#include <HRRPart0ket0bra0fd.h>
#include <HRRPart0ket0bra0fp.h>
#include <HRRPart0ket0bra0gp.h>
#include <_sphemultipole_D_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_D_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1150)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+2650)*1+lsi)*1]), &(inteval->stack[((hsi*15+610)*1+lsi)*1]), &(inteval->stack[((hsi*10+240)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2680)*1+lsi)*1]), &(inteval->stack[((hsi*21+1129)*1+lsi)*1]), &(inteval->stack[((hsi*15+610)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2590)*1+lsi)*1]), &(inteval->stack[((hsi*45+2680)*1+lsi)*1]), &(inteval->stack[((hsi*30+2650)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+2725)*1+lsi)*1]), &(inteval->stack[((hsi*15+595)*1+lsi)*1]), &(inteval->stack[((hsi*10+230)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2755)*1+lsi)*1]), &(inteval->stack[((hsi*21+1108)*1+lsi)*1]), &(inteval->stack[((hsi*15+595)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2530)*1+lsi)*1]), &(inteval->stack[((hsi*45+2755)*1+lsi)*1]), &(inteval->stack[((hsi*30+2725)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+595)*1+lsi)*1]), &(inteval->stack[((hsi*15+580)*1+lsi)*1]), &(inteval->stack[((hsi*10+220)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2800)*1+lsi)*1]), &(inteval->stack[((hsi*21+1087)*1+lsi)*1]), &(inteval->stack[((hsi*15+580)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2470)*1+lsi)*1]), &(inteval->stack[((hsi*45+2800)*1+lsi)*1]), &(inteval->stack[((hsi*30+595)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+220)*1+lsi)*1]), &(inteval->stack[((hsi*15+565)*1+lsi)*1]), &(inteval->stack[((hsi*10+210)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1087)*1+lsi)*1]), &(inteval->stack[((hsi*21+1066)*1+lsi)*1]), &(inteval->stack[((hsi*15+565)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2410)*1+lsi)*1]), &(inteval->stack[((hsi*45+1087)*1+lsi)*1]), &(inteval->stack[((hsi*30+220)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+565)*1+lsi)*1]), &(inteval->stack[((hsi*15+550)*1+lsi)*1]), &(inteval->stack[((hsi*10+200)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2845)*1+lsi)*1]), &(inteval->stack[((hsi*21+1045)*1+lsi)*1]), &(inteval->stack[((hsi*15+550)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2350)*1+lsi)*1]), &(inteval->stack[((hsi*45+2845)*1+lsi)*1]), &(inteval->stack[((hsi*30+565)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1045)*1+lsi)*1]), &(inteval->stack[((hsi*15+535)*1+lsi)*1]), &(inteval->stack[((hsi*10+190)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2890)*1+lsi)*1]), &(inteval->stack[((hsi*21+1024)*1+lsi)*1]), &(inteval->stack[((hsi*15+535)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2290)*1+lsi)*1]), &(inteval->stack[((hsi*45+2890)*1+lsi)*1]), &(inteval->stack[((hsi*30+1045)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+190)*1+lsi)*1]), &(inteval->stack[((hsi*15+520)*1+lsi)*1]), &(inteval->stack[((hsi*10+180)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2935)*1+lsi)*1]), &(inteval->stack[((hsi*21+1003)*1+lsi)*1]), &(inteval->stack[((hsi*15+520)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2230)*1+lsi)*1]), &(inteval->stack[((hsi*45+2935)*1+lsi)*1]), &(inteval->stack[((hsi*30+190)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+520)*1+lsi)*1]), &(inteval->stack[((hsi*15+505)*1+lsi)*1]), &(inteval->stack[((hsi*10+170)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2980)*1+lsi)*1]), &(inteval->stack[((hsi*21+982)*1+lsi)*1]), &(inteval->stack[((hsi*15+505)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2170)*1+lsi)*1]), &(inteval->stack[((hsi*45+2980)*1+lsi)*1]), &(inteval->stack[((hsi*30+520)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+982)*1+lsi)*1]), &(inteval->stack[((hsi*15+490)*1+lsi)*1]), &(inteval->stack[((hsi*10+160)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3025)*1+lsi)*1]), &(inteval->stack[((hsi*21+961)*1+lsi)*1]), &(inteval->stack[((hsi*15+490)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2110)*1+lsi)*1]), &(inteval->stack[((hsi*45+3025)*1+lsi)*1]), &(inteval->stack[((hsi*30+982)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+160)*1+lsi)*1]), &(inteval->stack[((hsi*15+475)*1+lsi)*1]), &(inteval->stack[((hsi*10+150)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3070)*1+lsi)*1]), &(inteval->stack[((hsi*21+940)*1+lsi)*1]), &(inteval->stack[((hsi*15+475)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2050)*1+lsi)*1]), &(inteval->stack[((hsi*45+3070)*1+lsi)*1]), &(inteval->stack[((hsi*30+160)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+475)*1+lsi)*1]), &(inteval->stack[((hsi*15+460)*1+lsi)*1]), &(inteval->stack[((hsi*10+140)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3115)*1+lsi)*1]), &(inteval->stack[((hsi*21+919)*1+lsi)*1]), &(inteval->stack[((hsi*15+460)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1990)*1+lsi)*1]), &(inteval->stack[((hsi*45+3115)*1+lsi)*1]), &(inteval->stack[((hsi*30+475)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+919)*1+lsi)*1]), &(inteval->stack[((hsi*15+445)*1+lsi)*1]), &(inteval->stack[((hsi*10+130)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3160)*1+lsi)*1]), &(inteval->stack[((hsi*21+898)*1+lsi)*1]), &(inteval->stack[((hsi*15+445)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1930)*1+lsi)*1]), &(inteval->stack[((hsi*45+3160)*1+lsi)*1]), &(inteval->stack[((hsi*30+919)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+130)*1+lsi)*1]), &(inteval->stack[((hsi*15+430)*1+lsi)*1]), &(inteval->stack[((hsi*10+120)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3205)*1+lsi)*1]), &(inteval->stack[((hsi*21+877)*1+lsi)*1]), &(inteval->stack[((hsi*15+430)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1870)*1+lsi)*1]), &(inteval->stack[((hsi*45+3205)*1+lsi)*1]), &(inteval->stack[((hsi*30+130)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+430)*1+lsi)*1]), &(inteval->stack[((hsi*15+415)*1+lsi)*1]), &(inteval->stack[((hsi*10+110)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3250)*1+lsi)*1]), &(inteval->stack[((hsi*21+856)*1+lsi)*1]), &(inteval->stack[((hsi*15+415)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1810)*1+lsi)*1]), &(inteval->stack[((hsi*45+3250)*1+lsi)*1]), &(inteval->stack[((hsi*30+430)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+856)*1+lsi)*1]), &(inteval->stack[((hsi*15+400)*1+lsi)*1]), &(inteval->stack[((hsi*10+100)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3295)*1+lsi)*1]), &(inteval->stack[((hsi*21+835)*1+lsi)*1]), &(inteval->stack[((hsi*15+400)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1750)*1+lsi)*1]), &(inteval->stack[((hsi*45+3295)*1+lsi)*1]), &(inteval->stack[((hsi*30+856)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+100)*1+lsi)*1]), &(inteval->stack[((hsi*15+385)*1+lsi)*1]), &(inteval->stack[((hsi*10+90)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3340)*1+lsi)*1]), &(inteval->stack[((hsi*21+814)*1+lsi)*1]), &(inteval->stack[((hsi*15+385)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1690)*1+lsi)*1]), &(inteval->stack[((hsi*45+3340)*1+lsi)*1]), &(inteval->stack[((hsi*30+100)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+385)*1+lsi)*1]), &(inteval->stack[((hsi*15+370)*1+lsi)*1]), &(inteval->stack[((hsi*10+80)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3385)*1+lsi)*1]), &(inteval->stack[((hsi*21+793)*1+lsi)*1]), &(inteval->stack[((hsi*15+370)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1630)*1+lsi)*1]), &(inteval->stack[((hsi*45+3385)*1+lsi)*1]), &(inteval->stack[((hsi*30+385)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+793)*1+lsi)*1]), &(inteval->stack[((hsi*15+355)*1+lsi)*1]), &(inteval->stack[((hsi*10+70)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3430)*1+lsi)*1]), &(inteval->stack[((hsi*21+772)*1+lsi)*1]), &(inteval->stack[((hsi*15+355)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1570)*1+lsi)*1]), &(inteval->stack[((hsi*45+3430)*1+lsi)*1]), &(inteval->stack[((hsi*30+793)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+70)*1+lsi)*1]), &(inteval->stack[((hsi*15+340)*1+lsi)*1]), &(inteval->stack[((hsi*10+60)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3475)*1+lsi)*1]), &(inteval->stack[((hsi*21+751)*1+lsi)*1]), &(inteval->stack[((hsi*15+340)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1510)*1+lsi)*1]), &(inteval->stack[((hsi*45+3475)*1+lsi)*1]), &(inteval->stack[((hsi*30+70)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+340)*1+lsi)*1]), &(inteval->stack[((hsi*15+325)*1+lsi)*1]), &(inteval->stack[((hsi*10+50)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3520)*1+lsi)*1]), &(inteval->stack[((hsi*21+730)*1+lsi)*1]), &(inteval->stack[((hsi*15+325)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1450)*1+lsi)*1]), &(inteval->stack[((hsi*45+3520)*1+lsi)*1]), &(inteval->stack[((hsi*30+340)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+730)*1+lsi)*1]), &(inteval->stack[((hsi*15+310)*1+lsi)*1]), &(inteval->stack[((hsi*10+40)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3565)*1+lsi)*1]), &(inteval->stack[((hsi*21+709)*1+lsi)*1]), &(inteval->stack[((hsi*15+310)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1390)*1+lsi)*1]), &(inteval->stack[((hsi*45+3565)*1+lsi)*1]), &(inteval->stack[((hsi*30+730)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+40)*1+lsi)*1]), &(inteval->stack[((hsi*15+295)*1+lsi)*1]), &(inteval->stack[((hsi*10+30)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3610)*1+lsi)*1]), &(inteval->stack[((hsi*21+688)*1+lsi)*1]), &(inteval->stack[((hsi*15+295)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1330)*1+lsi)*1]), &(inteval->stack[((hsi*45+3610)*1+lsi)*1]), &(inteval->stack[((hsi*30+40)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+295)*1+lsi)*1]), &(inteval->stack[((hsi*15+280)*1+lsi)*1]), &(inteval->stack[((hsi*10+20)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3655)*1+lsi)*1]), &(inteval->stack[((hsi*21+667)*1+lsi)*1]), &(inteval->stack[((hsi*15+280)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1270)*1+lsi)*1]), &(inteval->stack[((hsi*45+3655)*1+lsi)*1]), &(inteval->stack[((hsi*30+295)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+667)*1+lsi)*1]), &(inteval->stack[((hsi*15+265)*1+lsi)*1]), &(inteval->stack[((hsi*10+10)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3700)*1+lsi)*1]), &(inteval->stack[((hsi*21+646)*1+lsi)*1]), &(inteval->stack[((hsi*15+265)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1210)*1+lsi)*1]), &(inteval->stack[((hsi*45+3700)*1+lsi)*1]), &(inteval->stack[((hsi*30+667)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+10)*1+lsi)*1]), &(inteval->stack[((hsi*15+250)*1+lsi)*1]), &(inteval->stack[((hsi*10+0)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3745)*1+lsi)*1]), &(inteval->stack[((hsi*21+625)*1+lsi)*1]), &(inteval->stack[((hsi*15+250)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1150)*1+lsi)*1]), &(inteval->stack[((hsi*45+3745)*1+lsi)*1]), &(inteval->stack[((hsi*30+10)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*60+1150)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*60+1210)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*60+1270)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*60+1330)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*60+1390)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*60+1450)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*60+1510)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*60+1570)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*60+1630)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*60+1690)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*60+1750)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*60+1810)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*60+1870)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*60+1930)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*60+1990)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*60+2050)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*60+2110)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*60+2170)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*60+2230)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*60+2290)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*60+2350)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*60+2410)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*60+2470)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*60+2530)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*60+2590)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
