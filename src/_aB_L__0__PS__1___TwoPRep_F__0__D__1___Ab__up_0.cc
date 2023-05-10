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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__PS__1___TwoPRep_F__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__PS__1___TwoPRep_F__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,57340)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__PS__1___TwoPRep_F__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+235540)*1+lsi)*1]), &(inteval->stack[((hsi*5148+28288)*1+lsi)*1]), &(inteval->stack[((hsi*4290+33436)*1+lsi)*1]),78);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+248410)*1+lsi)*1]), &(inteval->stack[((hsi*4290+33436)*1+lsi)*1]), &(inteval->stack[((hsi*3510+37726)*1+lsi)*1]),78);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+258940)*1+lsi)*1]), &(inteval->stack[((hsi*12870+235540)*1+lsi)*1]), &(inteval->stack[((hsi*10530+248410)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+280000)*1+lsi)*1]), &(inteval->stack[((hsi*6084+22204)*1+lsi)*1]), &(inteval->stack[((hsi*5148+28288)*1+lsi)*1]),78);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*25740+295444)*1+lsi)*1]), &(inteval->stack[((hsi*15444+280000)*1+lsi)*1]), &(inteval->stack[((hsi*12870+235540)*1+lsi)*1]),78);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+321184)*1+lsi)*1]), &(inteval->stack[((hsi*25740+295444)*1+lsi)*1]), &(inteval->stack[((hsi*21060+258940)*1+lsi)*1]),78);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+235540)*1+lsi)*1]), &(inteval->stack[((hsi*4356+46384)*1+lsi)*1]), &(inteval->stack[((hsi*3630+50740)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+246430)*1+lsi)*1]), &(inteval->stack[((hsi*3630+50740)*1+lsi)*1]), &(inteval->stack[((hsi*2970+54370)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+255340)*1+lsi)*1]), &(inteval->stack[((hsi*10890+235540)*1+lsi)*1]), &(inteval->stack[((hsi*8910+246430)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+273160)*1+lsi)*1]), &(inteval->stack[((hsi*5148+41236)*1+lsi)*1]), &(inteval->stack[((hsi*4356+46384)*1+lsi)*1]),66);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*21780+22204)*1+lsi)*1]), &(inteval->stack[((hsi*13068+273160)*1+lsi)*1]), &(inteval->stack[((hsi*10890+235540)*1+lsi)*1]),66);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+273160)*1+lsi)*1]), &(inteval->stack[((hsi*21780+22204)*1+lsi)*1]), &(inteval->stack[((hsi*17820+255340)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*89100+356284)*1+lsi)*1]), &(inteval->stack[((hsi*35100+321184)*1+lsi)*1]), &(inteval->stack[((hsi*29700+273160)*1+lsi)*1]),450);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+235540)*1+lsi)*1]), &(inteval->stack[((hsi*6006+7098)*1+lsi)*1]), &(inteval->stack[((hsi*5005+13104)*1+lsi)*1]),91);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+250555)*1+lsi)*1]), &(inteval->stack[((hsi*5005+13104)*1+lsi)*1]), &(inteval->stack[((hsi*4095+18109)*1+lsi)*1]),91);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+262840)*1+lsi)*1]), &(inteval->stack[((hsi*15015+235540)*1+lsi)*1]), &(inteval->stack[((hsi*12285+250555)*1+lsi)*1]),91);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+13104)*1+lsi)*1]), &(inteval->stack[((hsi*7098+0)*1+lsi)*1]), &(inteval->stack[((hsi*6006+7098)*1+lsi)*1]),91);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*30030+287410)*1+lsi)*1]), &(inteval->stack[((hsi*18018+13104)*1+lsi)*1]), &(inteval->stack[((hsi*15015+235540)*1+lsi)*1]),91);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*40950+0)*1+lsi)*1]), &(inteval->stack[((hsi*30030+287410)*1+lsi)*1]), &(inteval->stack[((hsi*24570+262840)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*105300+445384)*1+lsi)*1]), &(inteval->stack[((hsi*40950+0)*1+lsi)*1]), &(inteval->stack[((hsi*35100+321184)*1+lsi)*1]),450);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*178200+57340)*1+lsi)*1]), &(inteval->stack[((hsi*105300+445384)*1+lsi)*1]), &(inteval->stack[((hsi*89100+356284)*1+lsi)*1]),450);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*178200+57340)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
