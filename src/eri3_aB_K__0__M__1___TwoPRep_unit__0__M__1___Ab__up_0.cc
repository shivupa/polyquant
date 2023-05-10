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
#include <HRRPart1bra0ket0mk.h>
#include <HRRPart1bra0ket0ml.h>
#include <HRRPart1bra0ket0mm.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdi.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psl.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_K__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_K__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,41940)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_K__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+150840)*1+lsi)*1]), &(inteval->stack[((hsi*2808+34776)*1+lsi)*1]), &(inteval->stack[((hsi*2376+37584)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+157968)*1+lsi)*1]), &(inteval->stack[((hsi*3276+31500)*1+lsi)*1]), &(inteval->stack[((hsi*2808+34776)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+166392)*1+lsi)*1]), &(inteval->stack[((hsi*8424+157968)*1+lsi)*1]), &(inteval->stack[((hsi*7128+150840)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+180648)*1+lsi)*1]), &(inteval->stack[((hsi*3780+27720)*1+lsi)*1]), &(inteval->stack[((hsi*3276+31500)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+190476)*1+lsi)*1]), &(inteval->stack[((hsi*9828+180648)*1+lsi)*1]), &(inteval->stack[((hsi*8424+157968)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+207324)*1+lsi)*1]), &(inteval->stack[((hsi*16848+190476)*1+lsi)*1]), &(inteval->stack[((hsi*14256+166392)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+231084)*1+lsi)*1]), &(inteval->stack[((hsi*4320+23400)*1+lsi)*1]), &(inteval->stack[((hsi*3780+27720)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+242424)*1+lsi)*1]), &(inteval->stack[((hsi*11340+231084)*1+lsi)*1]), &(inteval->stack[((hsi*9828+180648)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+262080)*1+lsi)*1]), &(inteval->stack[((hsi*19656+242424)*1+lsi)*1]), &(inteval->stack[((hsi*16848+190476)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+290160)*1+lsi)*1]), &(inteval->stack[((hsi*28080+262080)*1+lsi)*1]), &(inteval->stack[((hsi*23760+207324)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+180648)*1+lsi)*1]), &(inteval->stack[((hsi*4896+18504)*1+lsi)*1]), &(inteval->stack[((hsi*4320+23400)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+325800)*1+lsi)*1]), &(inteval->stack[((hsi*12960+180648)*1+lsi)*1]), &(inteval->stack[((hsi*11340+231084)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+348480)*1+lsi)*1]), &(inteval->stack[((hsi*22680+325800)*1+lsi)*1]), &(inteval->stack[((hsi*19656+242424)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+381240)*1+lsi)*1]), &(inteval->stack[((hsi*32760+348480)*1+lsi)*1]), &(inteval->stack[((hsi*28080+262080)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+231084)*1+lsi)*1]), &(inteval->stack[((hsi*42120+381240)*1+lsi)*1]), &(inteval->stack[((hsi*35640+290160)*1+lsi)*1]),36);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*14688+423360)*1+lsi)*1]), &(inteval->stack[((hsi*5508+12996)*1+lsi)*1]), &(inteval->stack[((hsi*4896+18504)*1+lsi)*1]),36);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*25920+438048)*1+lsi)*1]), &(inteval->stack[((hsi*14688+423360)*1+lsi)*1]), &(inteval->stack[((hsi*12960+180648)*1+lsi)*1]),36);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*37800+463968)*1+lsi)*1]), &(inteval->stack[((hsi*25920+438048)*1+lsi)*1]), &(inteval->stack[((hsi*22680+325800)*1+lsi)*1]),36);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*49140+501768)*1+lsi)*1]), &(inteval->stack[((hsi*37800+463968)*1+lsi)*1]), &(inteval->stack[((hsi*32760+348480)*1+lsi)*1]),36);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*58968+550908)*1+lsi)*1]), &(inteval->stack[((hsi*49140+501768)*1+lsi)*1]), &(inteval->stack[((hsi*42120+381240)*1+lsi)*1]),36);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*66528+325800)*1+lsi)*1]), &(inteval->stack[((hsi*58968+550908)*1+lsi)*1]), &(inteval->stack[((hsi*49896+231084)*1+lsi)*1]),36);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*16524+392328)*1+lsi)*1]), &(inteval->stack[((hsi*6156+6840)*1+lsi)*1]), &(inteval->stack[((hsi*5508+12996)*1+lsi)*1]),36);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*29376+609876)*1+lsi)*1]), &(inteval->stack[((hsi*16524+392328)*1+lsi)*1]), &(inteval->stack[((hsi*14688+423360)*1+lsi)*1]),36);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*43200+639252)*1+lsi)*1]), &(inteval->stack[((hsi*29376+609876)*1+lsi)*1]), &(inteval->stack[((hsi*25920+438048)*1+lsi)*1]),36);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*56700+682452)*1+lsi)*1]), &(inteval->stack[((hsi*43200+639252)*1+lsi)*1]), &(inteval->stack[((hsi*37800+463968)*1+lsi)*1]),36);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*68796+408852)*1+lsi)*1]), &(inteval->stack[((hsi*56700+682452)*1+lsi)*1]), &(inteval->stack[((hsi*49140+501768)*1+lsi)*1]),36);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*78624+739152)*1+lsi)*1]), &(inteval->stack[((hsi*68796+408852)*1+lsi)*1]), &(inteval->stack[((hsi*58968+550908)*1+lsi)*1]),36);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*85536+477648)*1+lsi)*1]), &(inteval->stack[((hsi*78624+739152)*1+lsi)*1]), &(inteval->stack[((hsi*66528+325800)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+563184)*1+lsi)*1]), &(inteval->stack[((hsi*2376+37584)*1+lsi)*1]), &(inteval->stack[((hsi*1980+39960)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+569124)*1+lsi)*1]), &(inteval->stack[((hsi*7128+150840)*1+lsi)*1]), &(inteval->stack[((hsi*5940+563184)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+12996)*1+lsi)*1]), &(inteval->stack[((hsi*14256+166392)*1+lsi)*1]), &(inteval->stack[((hsi*11880+569124)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+150840)*1+lsi)*1]), &(inteval->stack[((hsi*23760+207324)*1+lsi)*1]), &(inteval->stack[((hsi*19800+12996)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+180540)*1+lsi)*1]), &(inteval->stack[((hsi*35640+290160)*1+lsi)*1]), &(inteval->stack[((hsi*29700+150840)*1+lsi)*1]),36);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*55440+817776)*1+lsi)*1]), &(inteval->stack[((hsi*49896+231084)*1+lsi)*1]), &(inteval->stack[((hsi*41580+180540)*1+lsi)*1]),36);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*71280+150840)*1+lsi)*1]), &(inteval->stack[((hsi*66528+325800)*1+lsi)*1]), &(inteval->stack[((hsi*55440+817776)*1+lsi)*1]),36);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*89100+222120)*1+lsi)*1]), &(inteval->stack[((hsi*85536+477648)*1+lsi)*1]), &(inteval->stack[((hsi*71280+150840)*1+lsi)*1]),36);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*18468+311220)*1+lsi)*1]), &(inteval->stack[((hsi*6840+0)*1+lsi)*1]), &(inteval->stack[((hsi*6156+6840)*1+lsi)*1]),36);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*33048+150840)*1+lsi)*1]), &(inteval->stack[((hsi*18468+311220)*1+lsi)*1]), &(inteval->stack[((hsi*16524+392328)*1+lsi)*1]),36);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*48960+311220)*1+lsi)*1]), &(inteval->stack[((hsi*33048+150840)*1+lsi)*1]), &(inteval->stack[((hsi*29376+609876)*1+lsi)*1]),36);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*64800+563184)*1+lsi)*1]), &(inteval->stack[((hsi*48960+311220)*1+lsi)*1]), &(inteval->stack[((hsi*43200+639252)*1+lsi)*1]),36);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*79380+311220)*1+lsi)*1]), &(inteval->stack[((hsi*64800+563184)*1+lsi)*1]), &(inteval->stack[((hsi*56700+682452)*1+lsi)*1]),36);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*91728+563184)*1+lsi)*1]), &(inteval->stack[((hsi*79380+311220)*1+lsi)*1]), &(inteval->stack[((hsi*68796+408852)*1+lsi)*1]),36);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*101088+311220)*1+lsi)*1]), &(inteval->stack[((hsi*91728+563184)*1+lsi)*1]), &(inteval->stack[((hsi*78624+739152)*1+lsi)*1]),36);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*106920+563184)*1+lsi)*1]), &(inteval->stack[((hsi*101088+311220)*1+lsi)*1]), &(inteval->stack[((hsi*85536+477648)*1+lsi)*1]),36);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*108900+41940)*1+lsi)*1]), &(inteval->stack[((hsi*106920+563184)*1+lsi)*1]), &(inteval->stack[((hsi*89100+222120)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*108900+41940)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
