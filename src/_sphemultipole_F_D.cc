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
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <_sphemultipole_F_D_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_F_D(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1150)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_F_D_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+2650)*1+lsi)*1]), &(inteval->stack[((hsi*15+1125)*1+lsi)*1]), &(inteval->stack[((hsi*10+1140)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2680)*1+lsi)*1]), &(inteval->stack[((hsi*21+1104)*1+lsi)*1]), &(inteval->stack[((hsi*15+1125)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+2590)*1+lsi)*1]), &(inteval->stack[((hsi*45+2680)*1+lsi)*1]), &(inteval->stack[((hsi*30+2650)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1104)*1+lsi)*1]), &(inteval->stack[((hsi*15+1079)*1+lsi)*1]), &(inteval->stack[((hsi*10+1094)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2725)*1+lsi)*1]), &(inteval->stack[((hsi*21+1058)*1+lsi)*1]), &(inteval->stack[((hsi*15+1079)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+2530)*1+lsi)*1]), &(inteval->stack[((hsi*45+2725)*1+lsi)*1]), &(inteval->stack[((hsi*30+1104)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1058)*1+lsi)*1]), &(inteval->stack[((hsi*15+1033)*1+lsi)*1]), &(inteval->stack[((hsi*10+1048)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2770)*1+lsi)*1]), &(inteval->stack[((hsi*21+1012)*1+lsi)*1]), &(inteval->stack[((hsi*15+1033)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+2470)*1+lsi)*1]), &(inteval->stack[((hsi*45+2770)*1+lsi)*1]), &(inteval->stack[((hsi*30+1058)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+1012)*1+lsi)*1]), &(inteval->stack[((hsi*15+987)*1+lsi)*1]), &(inteval->stack[((hsi*10+1002)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2815)*1+lsi)*1]), &(inteval->stack[((hsi*21+966)*1+lsi)*1]), &(inteval->stack[((hsi*15+987)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+2410)*1+lsi)*1]), &(inteval->stack[((hsi*45+2815)*1+lsi)*1]), &(inteval->stack[((hsi*30+1012)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+966)*1+lsi)*1]), &(inteval->stack[((hsi*15+941)*1+lsi)*1]), &(inteval->stack[((hsi*10+956)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2860)*1+lsi)*1]), &(inteval->stack[((hsi*21+920)*1+lsi)*1]), &(inteval->stack[((hsi*15+941)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+2350)*1+lsi)*1]), &(inteval->stack[((hsi*45+2860)*1+lsi)*1]), &(inteval->stack[((hsi*30+966)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+920)*1+lsi)*1]), &(inteval->stack[((hsi*15+895)*1+lsi)*1]), &(inteval->stack[((hsi*10+910)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2905)*1+lsi)*1]), &(inteval->stack[((hsi*21+874)*1+lsi)*1]), &(inteval->stack[((hsi*15+895)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+2290)*1+lsi)*1]), &(inteval->stack[((hsi*45+2905)*1+lsi)*1]), &(inteval->stack[((hsi*30+920)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+874)*1+lsi)*1]), &(inteval->stack[((hsi*15+849)*1+lsi)*1]), &(inteval->stack[((hsi*10+864)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2950)*1+lsi)*1]), &(inteval->stack[((hsi*21+828)*1+lsi)*1]), &(inteval->stack[((hsi*15+849)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+2230)*1+lsi)*1]), &(inteval->stack[((hsi*45+2950)*1+lsi)*1]), &(inteval->stack[((hsi*30+874)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+828)*1+lsi)*1]), &(inteval->stack[((hsi*15+803)*1+lsi)*1]), &(inteval->stack[((hsi*10+818)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2995)*1+lsi)*1]), &(inteval->stack[((hsi*21+782)*1+lsi)*1]), &(inteval->stack[((hsi*15+803)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+2170)*1+lsi)*1]), &(inteval->stack[((hsi*45+2995)*1+lsi)*1]), &(inteval->stack[((hsi*30+828)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+782)*1+lsi)*1]), &(inteval->stack[((hsi*15+757)*1+lsi)*1]), &(inteval->stack[((hsi*10+772)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3040)*1+lsi)*1]), &(inteval->stack[((hsi*21+736)*1+lsi)*1]), &(inteval->stack[((hsi*15+757)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+2110)*1+lsi)*1]), &(inteval->stack[((hsi*45+3040)*1+lsi)*1]), &(inteval->stack[((hsi*30+782)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+736)*1+lsi)*1]), &(inteval->stack[((hsi*15+711)*1+lsi)*1]), &(inteval->stack[((hsi*10+726)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3085)*1+lsi)*1]), &(inteval->stack[((hsi*21+690)*1+lsi)*1]), &(inteval->stack[((hsi*15+711)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+2050)*1+lsi)*1]), &(inteval->stack[((hsi*45+3085)*1+lsi)*1]), &(inteval->stack[((hsi*30+736)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+690)*1+lsi)*1]), &(inteval->stack[((hsi*15+665)*1+lsi)*1]), &(inteval->stack[((hsi*10+680)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3130)*1+lsi)*1]), &(inteval->stack[((hsi*21+644)*1+lsi)*1]), &(inteval->stack[((hsi*15+665)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1990)*1+lsi)*1]), &(inteval->stack[((hsi*45+3130)*1+lsi)*1]), &(inteval->stack[((hsi*30+690)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+644)*1+lsi)*1]), &(inteval->stack[((hsi*15+619)*1+lsi)*1]), &(inteval->stack[((hsi*10+634)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3175)*1+lsi)*1]), &(inteval->stack[((hsi*21+598)*1+lsi)*1]), &(inteval->stack[((hsi*15+619)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1930)*1+lsi)*1]), &(inteval->stack[((hsi*45+3175)*1+lsi)*1]), &(inteval->stack[((hsi*30+644)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+598)*1+lsi)*1]), &(inteval->stack[((hsi*15+573)*1+lsi)*1]), &(inteval->stack[((hsi*10+588)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3220)*1+lsi)*1]), &(inteval->stack[((hsi*21+552)*1+lsi)*1]), &(inteval->stack[((hsi*15+573)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1870)*1+lsi)*1]), &(inteval->stack[((hsi*45+3220)*1+lsi)*1]), &(inteval->stack[((hsi*30+598)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+552)*1+lsi)*1]), &(inteval->stack[((hsi*15+527)*1+lsi)*1]), &(inteval->stack[((hsi*10+542)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3265)*1+lsi)*1]), &(inteval->stack[((hsi*21+506)*1+lsi)*1]), &(inteval->stack[((hsi*15+527)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1810)*1+lsi)*1]), &(inteval->stack[((hsi*45+3265)*1+lsi)*1]), &(inteval->stack[((hsi*30+552)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+506)*1+lsi)*1]), &(inteval->stack[((hsi*15+481)*1+lsi)*1]), &(inteval->stack[((hsi*10+496)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3310)*1+lsi)*1]), &(inteval->stack[((hsi*21+460)*1+lsi)*1]), &(inteval->stack[((hsi*15+481)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1750)*1+lsi)*1]), &(inteval->stack[((hsi*45+3310)*1+lsi)*1]), &(inteval->stack[((hsi*30+506)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+460)*1+lsi)*1]), &(inteval->stack[((hsi*15+435)*1+lsi)*1]), &(inteval->stack[((hsi*10+450)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3355)*1+lsi)*1]), &(inteval->stack[((hsi*21+414)*1+lsi)*1]), &(inteval->stack[((hsi*15+435)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1690)*1+lsi)*1]), &(inteval->stack[((hsi*45+3355)*1+lsi)*1]), &(inteval->stack[((hsi*30+460)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+414)*1+lsi)*1]), &(inteval->stack[((hsi*15+389)*1+lsi)*1]), &(inteval->stack[((hsi*10+404)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3400)*1+lsi)*1]), &(inteval->stack[((hsi*21+368)*1+lsi)*1]), &(inteval->stack[((hsi*15+389)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1630)*1+lsi)*1]), &(inteval->stack[((hsi*45+3400)*1+lsi)*1]), &(inteval->stack[((hsi*30+414)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+368)*1+lsi)*1]), &(inteval->stack[((hsi*15+343)*1+lsi)*1]), &(inteval->stack[((hsi*10+358)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3445)*1+lsi)*1]), &(inteval->stack[((hsi*21+322)*1+lsi)*1]), &(inteval->stack[((hsi*15+343)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1570)*1+lsi)*1]), &(inteval->stack[((hsi*45+3445)*1+lsi)*1]), &(inteval->stack[((hsi*30+368)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+322)*1+lsi)*1]), &(inteval->stack[((hsi*15+297)*1+lsi)*1]), &(inteval->stack[((hsi*10+312)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3490)*1+lsi)*1]), &(inteval->stack[((hsi*21+276)*1+lsi)*1]), &(inteval->stack[((hsi*15+297)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1510)*1+lsi)*1]), &(inteval->stack[((hsi*45+3490)*1+lsi)*1]), &(inteval->stack[((hsi*30+322)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+276)*1+lsi)*1]), &(inteval->stack[((hsi*15+251)*1+lsi)*1]), &(inteval->stack[((hsi*10+266)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3535)*1+lsi)*1]), &(inteval->stack[((hsi*21+230)*1+lsi)*1]), &(inteval->stack[((hsi*15+251)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1450)*1+lsi)*1]), &(inteval->stack[((hsi*45+3535)*1+lsi)*1]), &(inteval->stack[((hsi*30+276)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+230)*1+lsi)*1]), &(inteval->stack[((hsi*15+205)*1+lsi)*1]), &(inteval->stack[((hsi*10+220)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3580)*1+lsi)*1]), &(inteval->stack[((hsi*21+184)*1+lsi)*1]), &(inteval->stack[((hsi*15+205)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1390)*1+lsi)*1]), &(inteval->stack[((hsi*45+3580)*1+lsi)*1]), &(inteval->stack[((hsi*30+230)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+184)*1+lsi)*1]), &(inteval->stack[((hsi*15+159)*1+lsi)*1]), &(inteval->stack[((hsi*10+174)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3625)*1+lsi)*1]), &(inteval->stack[((hsi*21+138)*1+lsi)*1]), &(inteval->stack[((hsi*15+159)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1330)*1+lsi)*1]), &(inteval->stack[((hsi*45+3625)*1+lsi)*1]), &(inteval->stack[((hsi*30+184)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+138)*1+lsi)*1]), &(inteval->stack[((hsi*15+113)*1+lsi)*1]), &(inteval->stack[((hsi*10+128)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3670)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*15+113)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1270)*1+lsi)*1]), &(inteval->stack[((hsi*45+3670)*1+lsi)*1]), &(inteval->stack[((hsi*30+138)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+92)*1+lsi)*1]), &(inteval->stack[((hsi*15+67)*1+lsi)*1]), &(inteval->stack[((hsi*10+82)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3715)*1+lsi)*1]), &(inteval->stack[((hsi*21+46)*1+lsi)*1]), &(inteval->stack[((hsi*15+67)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1210)*1+lsi)*1]), &(inteval->stack[((hsi*45+3715)*1+lsi)*1]), &(inteval->stack[((hsi*30+92)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+46)*1+lsi)*1]), &(inteval->stack[((hsi*15+21)*1+lsi)*1]), &(inteval->stack[((hsi*10+36)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3760)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]), &(inteval->stack[((hsi*15+21)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1150)*1+lsi)*1]), &(inteval->stack[((hsi*45+3760)*1+lsi)*1]), &(inteval->stack[((hsi*30+46)*1+lsi)*1]),1);
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
