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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__M__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,70760)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+318260)*1+lsi)*1]), &(inteval->stack[((hsi*4356+46384)*1+lsi)*1]), &(inteval->stack[((hsi*3630+50740)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+329150)*1+lsi)*1]), &(inteval->stack[((hsi*3630+50740)*1+lsi)*1]), &(inteval->stack[((hsi*2970+54370)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+338060)*1+lsi)*1]), &(inteval->stack[((hsi*10890+318260)*1+lsi)*1]), &(inteval->stack[((hsi*8910+329150)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+355880)*1+lsi)*1]), &(inteval->stack[((hsi*5148+41236)*1+lsi)*1]), &(inteval->stack[((hsi*4356+46384)*1+lsi)*1]),66);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*21780+368948)*1+lsi)*1]), &(inteval->stack[((hsi*13068+355880)*1+lsi)*1]), &(inteval->stack[((hsi*10890+318260)*1+lsi)*1]),66);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+390728)*1+lsi)*1]), &(inteval->stack[((hsi*21780+368948)*1+lsi)*1]), &(inteval->stack[((hsi*17820+338060)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+318260)*1+lsi)*1]), &(inteval->stack[((hsi*5148+28288)*1+lsi)*1]), &(inteval->stack[((hsi*4290+33436)*1+lsi)*1]),78);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+331130)*1+lsi)*1]), &(inteval->stack[((hsi*4290+33436)*1+lsi)*1]), &(inteval->stack[((hsi*3510+37726)*1+lsi)*1]),78);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+341660)*1+lsi)*1]), &(inteval->stack[((hsi*12870+318260)*1+lsi)*1]), &(inteval->stack[((hsi*10530+331130)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+362720)*1+lsi)*1]), &(inteval->stack[((hsi*6084+22204)*1+lsi)*1]), &(inteval->stack[((hsi*5148+28288)*1+lsi)*1]),78);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*25740+22204)*1+lsi)*1]), &(inteval->stack[((hsi*15444+362720)*1+lsi)*1]), &(inteval->stack[((hsi*12870+318260)*1+lsi)*1]),78);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+420428)*1+lsi)*1]), &(inteval->stack[((hsi*25740+22204)*1+lsi)*1]), &(inteval->stack[((hsi*21060+341660)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*89100+455528)*1+lsi)*1]), &(inteval->stack[((hsi*35100+420428)*1+lsi)*1]), &(inteval->stack[((hsi*29700+390728)*1+lsi)*1]),450);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+318260)*1+lsi)*1]), &(inteval->stack[((hsi*3630+61630)*1+lsi)*1]), &(inteval->stack[((hsi*3025+65260)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+327335)*1+lsi)*1]), &(inteval->stack[((hsi*3025+65260)*1+lsi)*1]), &(inteval->stack[((hsi*2475+68285)*1+lsi)*1]),55);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+334760)*1+lsi)*1]), &(inteval->stack[((hsi*9075+318260)*1+lsi)*1]), &(inteval->stack[((hsi*7425+327335)*1+lsi)*1]),55);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+349610)*1+lsi)*1]), &(inteval->stack[((hsi*4290+57340)*1+lsi)*1]), &(inteval->stack[((hsi*3630+61630)*1+lsi)*1]),55);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*18150+22204)*1+lsi)*1]), &(inteval->stack[((hsi*10890+349610)*1+lsi)*1]), &(inteval->stack[((hsi*9075+318260)*1+lsi)*1]),55);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+349610)*1+lsi)*1]), &(inteval->stack[((hsi*18150+22204)*1+lsi)*1]), &(inteval->stack[((hsi*14850+334760)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*74250+544628)*1+lsi)*1]), &(inteval->stack[((hsi*29700+390728)*1+lsi)*1]), &(inteval->stack[((hsi*24750+349610)*1+lsi)*1]),450);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*148500+618878)*1+lsi)*1]), &(inteval->stack[((hsi*89100+455528)*1+lsi)*1]), &(inteval->stack[((hsi*74250+544628)*1+lsi)*1]),450);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+318260)*1+lsi)*1]), &(inteval->stack[((hsi*6006+7098)*1+lsi)*1]), &(inteval->stack[((hsi*5005+13104)*1+lsi)*1]),91);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+333275)*1+lsi)*1]), &(inteval->stack[((hsi*5005+13104)*1+lsi)*1]), &(inteval->stack[((hsi*4095+18109)*1+lsi)*1]),91);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+345560)*1+lsi)*1]), &(inteval->stack[((hsi*15015+318260)*1+lsi)*1]), &(inteval->stack[((hsi*12285+333275)*1+lsi)*1]),91);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+544628)*1+lsi)*1]), &(inteval->stack[((hsi*7098+0)*1+lsi)*1]), &(inteval->stack[((hsi*6006+7098)*1+lsi)*1]),91);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*30030+0)*1+lsi)*1]), &(inteval->stack[((hsi*18018+544628)*1+lsi)*1]), &(inteval->stack[((hsi*15015+318260)*1+lsi)*1]),91);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*40950+544628)*1+lsi)*1]), &(inteval->stack[((hsi*30030+0)*1+lsi)*1]), &(inteval->stack[((hsi*24570+345560)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*105300+767378)*1+lsi)*1]), &(inteval->stack[((hsi*40950+544628)*1+lsi)*1]), &(inteval->stack[((hsi*35100+420428)*1+lsi)*1]),450);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*178200+872678)*1+lsi)*1]), &(inteval->stack[((hsi*105300+767378)*1+lsi)*1]), &(inteval->stack[((hsi*89100+455528)*1+lsi)*1]),450);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*247500+70760)*1+lsi)*1]), &(inteval->stack[((hsi*178200+872678)*1+lsi)*1]), &(inteval->stack[((hsi*148500+618878)*1+lsi)*1]),450);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*247500+70760)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
