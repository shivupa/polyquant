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
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
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
#include <_aB_F__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,27416)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__PS__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+110576)*1+lsi)*1]), &(inteval->stack[((hsi*1365+17931)*1+lsi)*1]), &(inteval->stack[((hsi*1170+19296)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+114086)*1+lsi)*1]), &(inteval->stack[((hsi*1575+16356)*1+lsi)*1]), &(inteval->stack[((hsi*1365+17931)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+118181)*1+lsi)*1]), &(inteval->stack[((hsi*4095+114086)*1+lsi)*1]), &(inteval->stack[((hsi*3510+110576)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+125201)*1+lsi)*1]), &(inteval->stack[((hsi*1800+14556)*1+lsi)*1]), &(inteval->stack[((hsi*1575+16356)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+129926)*1+lsi)*1]), &(inteval->stack[((hsi*4725+125201)*1+lsi)*1]), &(inteval->stack[((hsi*4095+114086)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+138116)*1+lsi)*1]), &(inteval->stack[((hsi*8190+129926)*1+lsi)*1]), &(inteval->stack[((hsi*7020+118181)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+114086)*1+lsi)*1]), &(inteval->stack[((hsi*1170+19296)*1+lsi)*1]), &(inteval->stack[((hsi*990+20466)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+149816)*1+lsi)*1]), &(inteval->stack[((hsi*3510+110576)*1+lsi)*1]), &(inteval->stack[((hsi*2970+114086)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+155756)*1+lsi)*1]), &(inteval->stack[((hsi*7020+118181)*1+lsi)*1]), &(inteval->stack[((hsi*5940+149816)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+165656)*1+lsi)*1]), &(inteval->stack[((hsi*11700+138116)*1+lsi)*1]), &(inteval->stack[((hsi*9900+155756)*1+lsi)*1]),15);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*5400+149816)*1+lsi)*1]), &(inteval->stack[((hsi*2040+12516)*1+lsi)*1]), &(inteval->stack[((hsi*1800+14556)*1+lsi)*1]),15);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*9450+110576)*1+lsi)*1]), &(inteval->stack[((hsi*5400+149816)*1+lsi)*1]), &(inteval->stack[((hsi*4725+125201)*1+lsi)*1]),15);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*13650+149816)*1+lsi)*1]), &(inteval->stack[((hsi*9450+110576)*1+lsi)*1]), &(inteval->stack[((hsi*8190+129926)*1+lsi)*1]),15);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*17550+110576)*1+lsi)*1]), &(inteval->stack[((hsi*13650+149816)*1+lsi)*1]), &(inteval->stack[((hsi*11700+138116)*1+lsi)*1]),15);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*20790+128126)*1+lsi)*1]), &(inteval->stack[((hsi*17550+110576)*1+lsi)*1]), &(inteval->stack[((hsi*14850+165656)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+110576)*1+lsi)*1]), &(inteval->stack[((hsi*910+25066)*1+lsi)*1]), &(inteval->stack[((hsi*780+25976)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+112916)*1+lsi)*1]), &(inteval->stack[((hsi*1050+24016)*1+lsi)*1]), &(inteval->stack[((hsi*910+25066)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+115646)*1+lsi)*1]), &(inteval->stack[((hsi*2730+112916)*1+lsi)*1]), &(inteval->stack[((hsi*2340+110576)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+12516)*1+lsi)*1]), &(inteval->stack[((hsi*1200+22816)*1+lsi)*1]), &(inteval->stack[((hsi*1050+24016)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+120326)*1+lsi)*1]), &(inteval->stack[((hsi*3150+12516)*1+lsi)*1]), &(inteval->stack[((hsi*2730+112916)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+148916)*1+lsi)*1]), &(inteval->stack[((hsi*5460+120326)*1+lsi)*1]), &(inteval->stack[((hsi*4680+115646)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+15666)*1+lsi)*1]), &(inteval->stack[((hsi*780+25976)*1+lsi)*1]), &(inteval->stack[((hsi*660+26756)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+156716)*1+lsi)*1]), &(inteval->stack[((hsi*2340+110576)*1+lsi)*1]), &(inteval->stack[((hsi*1980+15666)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+160676)*1+lsi)*1]), &(inteval->stack[((hsi*4680+115646)*1+lsi)*1]), &(inteval->stack[((hsi*3960+156716)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+167276)*1+lsi)*1]), &(inteval->stack[((hsi*7800+148916)*1+lsi)*1]), &(inteval->stack[((hsi*6600+160676)*1+lsi)*1]),10);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*3600+156716)*1+lsi)*1]), &(inteval->stack[((hsi*1360+21456)*1+lsi)*1]), &(inteval->stack[((hsi*1200+22816)*1+lsi)*1]),10);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*6300+15666)*1+lsi)*1]), &(inteval->stack[((hsi*3600+156716)*1+lsi)*1]), &(inteval->stack[((hsi*3150+12516)*1+lsi)*1]),10);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*9100+156716)*1+lsi)*1]), &(inteval->stack[((hsi*6300+15666)*1+lsi)*1]), &(inteval->stack[((hsi*5460+120326)*1+lsi)*1]),10);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*11700+110576)*1+lsi)*1]), &(inteval->stack[((hsi*9100+156716)*1+lsi)*1]), &(inteval->stack[((hsi*7800+148916)*1+lsi)*1]),10);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*13860+148916)*1+lsi)*1]), &(inteval->stack[((hsi*11700+110576)*1+lsi)*1]), &(inteval->stack[((hsi*9900+167276)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*41580+162776)*1+lsi)*1]), &(inteval->stack[((hsi*20790+128126)*1+lsi)*1]), &(inteval->stack[((hsi*13860+148916)*1+lsi)*1]),1386);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+110576)*1+lsi)*1]), &(inteval->stack[((hsi*1911+7581)*1+lsi)*1]), &(inteval->stack[((hsi*1638+9492)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+12516)*1+lsi)*1]), &(inteval->stack[((hsi*2205+5376)*1+lsi)*1]), &(inteval->stack[((hsi*1911+7581)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+148916)*1+lsi)*1]), &(inteval->stack[((hsi*5733+12516)*1+lsi)*1]), &(inteval->stack[((hsi*4914+110576)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+115490)*1+lsi)*1]), &(inteval->stack[((hsi*2520+2856)*1+lsi)*1]), &(inteval->stack[((hsi*2205+5376)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+204356)*1+lsi)*1]), &(inteval->stack[((hsi*6615+115490)*1+lsi)*1]), &(inteval->stack[((hsi*5733+12516)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+215822)*1+lsi)*1]), &(inteval->stack[((hsi*11466+204356)*1+lsi)*1]), &(inteval->stack[((hsi*9828+148916)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+12516)*1+lsi)*1]), &(inteval->stack[((hsi*1638+9492)*1+lsi)*1]), &(inteval->stack[((hsi*1386+11130)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+16674)*1+lsi)*1]), &(inteval->stack[((hsi*4914+110576)*1+lsi)*1]), &(inteval->stack[((hsi*4158+12516)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+232202)*1+lsi)*1]), &(inteval->stack[((hsi*9828+148916)*1+lsi)*1]), &(inteval->stack[((hsi*8316+16674)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+5376)*1+lsi)*1]), &(inteval->stack[((hsi*16380+215822)*1+lsi)*1]), &(inteval->stack[((hsi*13860+232202)*1+lsi)*1]),21);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*7560+148916)*1+lsi)*1]), &(inteval->stack[((hsi*2856+0)*1+lsi)*1]), &(inteval->stack[((hsi*2520+2856)*1+lsi)*1]),21);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*13230+232202)*1+lsi)*1]), &(inteval->stack[((hsi*7560+148916)*1+lsi)*1]), &(inteval->stack[((hsi*6615+115490)*1+lsi)*1]),21);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*19110+245432)*1+lsi)*1]), &(inteval->stack[((hsi*13230+232202)*1+lsi)*1]), &(inteval->stack[((hsi*11466+204356)*1+lsi)*1]),21);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*24570+264542)*1+lsi)*1]), &(inteval->stack[((hsi*19110+245432)*1+lsi)*1]), &(inteval->stack[((hsi*16380+215822)*1+lsi)*1]),21);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*29106+204356)*1+lsi)*1]), &(inteval->stack[((hsi*24570+264542)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5376)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*62370+233462)*1+lsi)*1]), &(inteval->stack[((hsi*29106+204356)*1+lsi)*1]), &(inteval->stack[((hsi*20790+128126)*1+lsi)*1]),1386);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*83160+27416)*1+lsi)*1]), &(inteval->stack[((hsi*62370+233462)*1+lsi)*1]), &(inteval->stack[((hsi*41580+162776)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*83160+27416)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
