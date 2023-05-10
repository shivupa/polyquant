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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_H__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_H__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,13671)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_H__0__M__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+46011)*1+lsi)*1]), &(inteval->stack[((hsi*1638+9492)*1+lsi)*1]), &(inteval->stack[((hsi*1386+11130)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+50169)*1+lsi)*1]), &(inteval->stack[((hsi*1911+7581)*1+lsi)*1]), &(inteval->stack[((hsi*1638+9492)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+55083)*1+lsi)*1]), &(inteval->stack[((hsi*4914+50169)*1+lsi)*1]), &(inteval->stack[((hsi*4158+46011)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+63399)*1+lsi)*1]), &(inteval->stack[((hsi*2205+5376)*1+lsi)*1]), &(inteval->stack[((hsi*1911+7581)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+69132)*1+lsi)*1]), &(inteval->stack[((hsi*5733+63399)*1+lsi)*1]), &(inteval->stack[((hsi*4914+50169)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+78960)*1+lsi)*1]), &(inteval->stack[((hsi*9828+69132)*1+lsi)*1]), &(inteval->stack[((hsi*8316+55083)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+92820)*1+lsi)*1]), &(inteval->stack[((hsi*2520+2856)*1+lsi)*1]), &(inteval->stack[((hsi*2205+5376)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+99435)*1+lsi)*1]), &(inteval->stack[((hsi*6615+92820)*1+lsi)*1]), &(inteval->stack[((hsi*5733+63399)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+110901)*1+lsi)*1]), &(inteval->stack[((hsi*11466+99435)*1+lsi)*1]), &(inteval->stack[((hsi*9828+69132)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+127281)*1+lsi)*1]), &(inteval->stack[((hsi*16380+110901)*1+lsi)*1]), &(inteval->stack[((hsi*13860+78960)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+63399)*1+lsi)*1]), &(inteval->stack[((hsi*1386+11130)*1+lsi)*1]), &(inteval->stack[((hsi*1155+12516)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+66864)*1+lsi)*1]), &(inteval->stack[((hsi*4158+46011)*1+lsi)*1]), &(inteval->stack[((hsi*3465+63399)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+148071)*1+lsi)*1]), &(inteval->stack[((hsi*8316+55083)*1+lsi)*1]), &(inteval->stack[((hsi*6930+66864)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+46011)*1+lsi)*1]), &(inteval->stack[((hsi*13860+78960)*1+lsi)*1]), &(inteval->stack[((hsi*11550+148071)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+63336)*1+lsi)*1]), &(inteval->stack[((hsi*20790+127281)*1+lsi)*1]), &(inteval->stack[((hsi*17325+46011)*1+lsi)*1]),21);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*7560+46011)*1+lsi)*1]), &(inteval->stack[((hsi*2856+0)*1+lsi)*1]), &(inteval->stack[((hsi*2520+2856)*1+lsi)*1]),21);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*13230+0)*1+lsi)*1]), &(inteval->stack[((hsi*7560+46011)*1+lsi)*1]), &(inteval->stack[((hsi*6615+92820)*1+lsi)*1]),21);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*19110+148071)*1+lsi)*1]), &(inteval->stack[((hsi*13230+0)*1+lsi)*1]), &(inteval->stack[((hsi*11466+99435)*1+lsi)*1]),21);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*24570+167181)*1+lsi)*1]), &(inteval->stack[((hsi*19110+148071)*1+lsi)*1]), &(inteval->stack[((hsi*16380+110901)*1+lsi)*1]),21);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*29106+87591)*1+lsi)*1]), &(inteval->stack[((hsi*24570+167181)*1+lsi)*1]), &(inteval->stack[((hsi*20790+127281)*1+lsi)*1]),21);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*32340+13671)*1+lsi)*1]), &(inteval->stack[((hsi*29106+87591)*1+lsi)*1]), &(inteval->stack[((hsi*24255+63336)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*32340+13671)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
