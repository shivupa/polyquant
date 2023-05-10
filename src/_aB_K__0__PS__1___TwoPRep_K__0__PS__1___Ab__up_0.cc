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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kg.h>
#include <HRRPart0bra0ket0kh.h>
#include <HRRPart0bra0ket0ki.h>
#include <HRRPart0bra0ket0kk.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lh.h>
#include <HRRPart0bra0ket0li.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdi.h>
#include <HRRPart1bra0ket0pdk.h>
#include <HRRPart1bra0ket0pdl.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfi.h>
#include <HRRPart1bra0ket0pfk.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgh.h>
#include <HRRPart1bra0ket0pgi.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0phg.h>
#include <HRRPart1bra0ket0phh.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pif.h>
#include <HRRPart1bra0ket0pig.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkd.h>
#include <HRRPart1bra0ket0pkf.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0pld.h>
#include <HRRPart1bra0ket0plp.h>
#include <HRRPart1bra0ket0pmp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppl.h>
#include <HRRPart1bra0ket0ppm.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psl.h>
#include <HRRPart1bra0ket0psm.h>
#include <HRRPart1bra0ket0psp.h>
#include <HRRPart1bra0ket0psps.h>
#include <_aB_K__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,924396)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*4095+857985)*1+lsi)*1]), &(inteval->stack[((hsi*3510+862080)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+6580302)*1+lsi)*1]), &(inteval->stack[((hsi*4725+853260)*1+lsi)*1]), &(inteval->stack[((hsi*4095+857985)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+6592587)*1+lsi)*1]), &(inteval->stack[((hsi*12285+6580302)*1+lsi)*1]), &(inteval->stack[((hsi*10530+6569772)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+6613647)*1+lsi)*1]), &(inteval->stack[((hsi*5400+847860)*1+lsi)*1]), &(inteval->stack[((hsi*4725+853260)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+6627822)*1+lsi)*1]), &(inteval->stack[((hsi*14175+6613647)*1+lsi)*1]), &(inteval->stack[((hsi*12285+6580302)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+6652392)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6627822)*1+lsi)*1]), &(inteval->stack[((hsi*21060+6592587)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+6687492)*1+lsi)*1]), &(inteval->stack[((hsi*6120+841740)*1+lsi)*1]), &(inteval->stack[((hsi*5400+847860)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+6703692)*1+lsi)*1]), &(inteval->stack[((hsi*16200+6687492)*1+lsi)*1]), &(inteval->stack[((hsi*14175+6613647)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+6732042)*1+lsi)*1]), &(inteval->stack[((hsi*28350+6703692)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6627822)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+6772992)*1+lsi)*1]), &(inteval->stack[((hsi*40950+6732042)*1+lsi)*1]), &(inteval->stack[((hsi*35100+6652392)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+6613647)*1+lsi)*1]), &(inteval->stack[((hsi*6885+834855)*1+lsi)*1]), &(inteval->stack[((hsi*6120+841740)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+6825642)*1+lsi)*1]), &(inteval->stack[((hsi*18360+6613647)*1+lsi)*1]), &(inteval->stack[((hsi*16200+6687492)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+6858042)*1+lsi)*1]), &(inteval->stack[((hsi*32400+6825642)*1+lsi)*1]), &(inteval->stack[((hsi*28350+6703692)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+6905292)*1+lsi)*1]), &(inteval->stack[((hsi*47250+6858042)*1+lsi)*1]), &(inteval->stack[((hsi*40950+6732042)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+6687492)*1+lsi)*1]), &(inteval->stack[((hsi*61425+6905292)*1+lsi)*1]), &(inteval->stack[((hsi*52650+6772992)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+6966717)*1+lsi)*1]), &(inteval->stack[((hsi*7695+827160)*1+lsi)*1]), &(inteval->stack[((hsi*6885+834855)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+6987372)*1+lsi)*1]), &(inteval->stack[((hsi*20655+6966717)*1+lsi)*1]), &(inteval->stack[((hsi*18360+6613647)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+7024092)*1+lsi)*1]), &(inteval->stack[((hsi*36720+6987372)*1+lsi)*1]), &(inteval->stack[((hsi*32400+6825642)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+7078092)*1+lsi)*1]), &(inteval->stack[((hsi*54000+7024092)*1+lsi)*1]), &(inteval->stack[((hsi*47250+6858042)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+7148967)*1+lsi)*1]), &(inteval->stack[((hsi*70875+7078092)*1+lsi)*1]), &(inteval->stack[((hsi*61425+6905292)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+6825642)*1+lsi)*1]), &(inteval->stack[((hsi*85995+7148967)*1+lsi)*1]), &(inteval->stack[((hsi*73710+6687492)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+6923922)*1+lsi)*1]), &(inteval->stack[((hsi*8550+818610)*1+lsi)*1]), &(inteval->stack[((hsi*7695+827160)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+7234962)*1+lsi)*1]), &(inteval->stack[((hsi*23085+6923922)*1+lsi)*1]), &(inteval->stack[((hsi*20655+6966717)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+7276272)*1+lsi)*1]), &(inteval->stack[((hsi*41310+7234962)*1+lsi)*1]), &(inteval->stack[((hsi*36720+6987372)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+7337472)*1+lsi)*1]), &(inteval->stack[((hsi*61200+7276272)*1+lsi)*1]), &(inteval->stack[((hsi*54000+7024092)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+6947007)*1+lsi)*1]), &(inteval->stack[((hsi*81000+7337472)*1+lsi)*1]), &(inteval->stack[((hsi*70875+7078092)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+7418472)*1+lsi)*1]), &(inteval->stack[((hsi*99225+6947007)*1+lsi)*1]), &(inteval->stack[((hsi*85995+7148967)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+7046232)*1+lsi)*1]), &(inteval->stack[((hsi*114660+7418472)*1+lsi)*1]), &(inteval->stack[((hsi*98280+6825642)*1+lsi)*1]),45);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*25650+7172592)*1+lsi)*1]), &(inteval->stack[((hsi*9450+809160)*1+lsi)*1]), &(inteval->stack[((hsi*8550+818610)*1+lsi)*1]),45);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*46170+7533132)*1+lsi)*1]), &(inteval->stack[((hsi*25650+7172592)*1+lsi)*1]), &(inteval->stack[((hsi*23085+6923922)*1+lsi)*1]),45);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*68850+7579302)*1+lsi)*1]), &(inteval->stack[((hsi*46170+7533132)*1+lsi)*1]), &(inteval->stack[((hsi*41310+7234962)*1+lsi)*1]),45);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*91800+7648152)*1+lsi)*1]), &(inteval->stack[((hsi*68850+7579302)*1+lsi)*1]), &(inteval->stack[((hsi*61200+7276272)*1+lsi)*1]),45);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*113400+7198242)*1+lsi)*1]), &(inteval->stack[((hsi*91800+7648152)*1+lsi)*1]), &(inteval->stack[((hsi*81000+7337472)*1+lsi)*1]),45);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*132300+7739952)*1+lsi)*1]), &(inteval->stack[((hsi*113400+7198242)*1+lsi)*1]), &(inteval->stack[((hsi*99225+6947007)*1+lsi)*1]),45);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*147420+7872252)*1+lsi)*1]), &(inteval->stack[((hsi*132300+7739952)*1+lsi)*1]), &(inteval->stack[((hsi*114660+7418472)*1+lsi)*1]),45);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*157950+7311642)*1+lsi)*1]), &(inteval->stack[((hsi*147420+7872252)*1+lsi)*1]), &(inteval->stack[((hsi*126360+7046232)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+6923922)*1+lsi)*1]), &(inteval->stack[((hsi*3510+862080)*1+lsi)*1]), &(inteval->stack[((hsi*2970+865590)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+6932832)*1+lsi)*1]), &(inteval->stack[((hsi*10530+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*8910+6923922)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+6950652)*1+lsi)*1]), &(inteval->stack[((hsi*21060+6592587)*1+lsi)*1]), &(inteval->stack[((hsi*17820+6932832)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*35100+6652392)*1+lsi)*1]), &(inteval->stack[((hsi*29700+6950652)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+6923922)*1+lsi)*1]), &(inteval->stack[((hsi*52650+6772992)*1+lsi)*1]), &(inteval->stack[((hsi*44550+6569772)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*73710+6687492)*1+lsi)*1]), &(inteval->stack[((hsi*62370+6923922)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+6652932)*1+lsi)*1]), &(inteval->stack[((hsi*98280+6825642)*1+lsi)*1]), &(inteval->stack[((hsi*83160+6569772)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+6759852)*1+lsi)*1]), &(inteval->stack[((hsi*126360+7046232)*1+lsi)*1]), &(inteval->stack[((hsi*106920+6652932)*1+lsi)*1]),45);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*163350+6893502)*1+lsi)*1]), &(inteval->stack[((hsi*157950+7311642)*1+lsi)*1]), &(inteval->stack[((hsi*133650+6759852)*1+lsi)*1]),45);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*28350+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*10395+798765)*1+lsi)*1]), &(inteval->stack[((hsi*9450+809160)*1+lsi)*1]),45);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*51300+6598122)*1+lsi)*1]), &(inteval->stack[((hsi*28350+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*25650+7172592)*1+lsi)*1]),45);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*76950+6649422)*1+lsi)*1]), &(inteval->stack[((hsi*51300+6598122)*1+lsi)*1]), &(inteval->stack[((hsi*46170+7533132)*1+lsi)*1]),45);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*103275+6726372)*1+lsi)*1]), &(inteval->stack[((hsi*76950+6649422)*1+lsi)*1]), &(inteval->stack[((hsi*68850+7579302)*1+lsi)*1]),45);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*128520+7469592)*1+lsi)*1]), &(inteval->stack[((hsi*103275+6726372)*1+lsi)*1]), &(inteval->stack[((hsi*91800+7648152)*1+lsi)*1]),45);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*151200+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*128520+7469592)*1+lsi)*1]), &(inteval->stack[((hsi*113400+7198242)*1+lsi)*1]),45);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*170100+7469592)*1+lsi)*1]), &(inteval->stack[((hsi*151200+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*132300+7739952)*1+lsi)*1]),45);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*184275+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*170100+7469592)*1+lsi)*1]), &(inteval->stack[((hsi*147420+7872252)*1+lsi)*1]),45);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*193050+7056852)*1+lsi)*1]), &(inteval->stack[((hsi*184275+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*157950+7311642)*1+lsi)*1]),45);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*196020+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*193050+7056852)*1+lsi)*1]), &(inteval->stack[((hsi*163350+6893502)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+798765)*1+lsi)*1]), &(inteval->stack[((hsi*5005+785840)*1+lsi)*1]), &(inteval->stack[((hsi*4290+790845)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+811635)*1+lsi)*1]), &(inteval->stack[((hsi*5775+780065)*1+lsi)*1]), &(inteval->stack[((hsi*5005+785840)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+826650)*1+lsi)*1]), &(inteval->stack[((hsi*15015+811635)*1+lsi)*1]), &(inteval->stack[((hsi*12870+798765)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*6600+773465)*1+lsi)*1]), &(inteval->stack[((hsi*5775+780065)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+6783117)*1+lsi)*1]), &(inteval->stack[((hsi*17325+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*15015+811635)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+6813147)*1+lsi)*1]), &(inteval->stack[((hsi*30030+6783117)*1+lsi)*1]), &(inteval->stack[((hsi*25740+826650)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+6856047)*1+lsi)*1]), &(inteval->stack[((hsi*7480+765985)*1+lsi)*1]), &(inteval->stack[((hsi*6600+773465)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+6875847)*1+lsi)*1]), &(inteval->stack[((hsi*19800+6856047)*1+lsi)*1]), &(inteval->stack[((hsi*17325+6765792)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+6910497)*1+lsi)*1]), &(inteval->stack[((hsi*34650+6875847)*1+lsi)*1]), &(inteval->stack[((hsi*30030+6783117)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+6960547)*1+lsi)*1]), &(inteval->stack[((hsi*50050+6910497)*1+lsi)*1]), &(inteval->stack[((hsi*42900+6813147)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*8415+757570)*1+lsi)*1]), &(inteval->stack[((hsi*7480+765985)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+7024897)*1+lsi)*1]), &(inteval->stack[((hsi*22440+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*19800+6856047)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+7064497)*1+lsi)*1]), &(inteval->stack[((hsi*39600+7024897)*1+lsi)*1]), &(inteval->stack[((hsi*34650+6875847)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+7122247)*1+lsi)*1]), &(inteval->stack[((hsi*57750+7064497)*1+lsi)*1]), &(inteval->stack[((hsi*50050+6910497)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+6856047)*1+lsi)*1]), &(inteval->stack[((hsi*75075+7122247)*1+lsi)*1]), &(inteval->stack[((hsi*64350+6960547)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+7197322)*1+lsi)*1]), &(inteval->stack[((hsi*9405+748165)*1+lsi)*1]), &(inteval->stack[((hsi*8415+757570)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+7222567)*1+lsi)*1]), &(inteval->stack[((hsi*25245+7197322)*1+lsi)*1]), &(inteval->stack[((hsi*22440+6765792)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+7267447)*1+lsi)*1]), &(inteval->stack[((hsi*44880+7222567)*1+lsi)*1]), &(inteval->stack[((hsi*39600+7024897)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+7333447)*1+lsi)*1]), &(inteval->stack[((hsi*66000+7267447)*1+lsi)*1]), &(inteval->stack[((hsi*57750+7064497)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+7420072)*1+lsi)*1]), &(inteval->stack[((hsi*86625+7333447)*1+lsi)*1]), &(inteval->stack[((hsi*75075+7122247)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+7024897)*1+lsi)*1]), &(inteval->stack[((hsi*105105+7420072)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6856047)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+7145017)*1+lsi)*1]), &(inteval->stack[((hsi*10450+737715)*1+lsi)*1]), &(inteval->stack[((hsi*9405+748165)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+7525177)*1+lsi)*1]), &(inteval->stack[((hsi*28215+7145017)*1+lsi)*1]), &(inteval->stack[((hsi*25245+7197322)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+7575667)*1+lsi)*1]), &(inteval->stack[((hsi*50490+7525177)*1+lsi)*1]), &(inteval->stack[((hsi*44880+7222567)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+7650467)*1+lsi)*1]), &(inteval->stack[((hsi*74800+7575667)*1+lsi)*1]), &(inteval->stack[((hsi*66000+7267447)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+7173232)*1+lsi)*1]), &(inteval->stack[((hsi*99000+7650467)*1+lsi)*1]), &(inteval->stack[((hsi*86625+7333447)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+7749467)*1+lsi)*1]), &(inteval->stack[((hsi*121275+7173232)*1+lsi)*1]), &(inteval->stack[((hsi*105105+7420072)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+7294507)*1+lsi)*1]), &(inteval->stack[((hsi*140140+7749467)*1+lsi)*1]), &(inteval->stack[((hsi*120120+7024897)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+7448947)*1+lsi)*1]), &(inteval->stack[((hsi*11550+726165)*1+lsi)*1]), &(inteval->stack[((hsi*10450+737715)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+7889607)*1+lsi)*1]), &(inteval->stack[((hsi*31350+7448947)*1+lsi)*1]), &(inteval->stack[((hsi*28215+7145017)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+7946037)*1+lsi)*1]), &(inteval->stack[((hsi*56430+7889607)*1+lsi)*1]), &(inteval->stack[((hsi*50490+7525177)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+8030187)*1+lsi)*1]), &(inteval->stack[((hsi*84150+7946037)*1+lsi)*1]), &(inteval->stack[((hsi*74800+7575667)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+7480297)*1+lsi)*1]), &(inteval->stack[((hsi*112200+8030187)*1+lsi)*1]), &(inteval->stack[((hsi*99000+7650467)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+8142387)*1+lsi)*1]), &(inteval->stack[((hsi*138600+7480297)*1+lsi)*1]), &(inteval->stack[((hsi*121275+7173232)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+8304087)*1+lsi)*1]), &(inteval->stack[((hsi*161700+8142387)*1+lsi)*1]), &(inteval->stack[((hsi*140140+7749467)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+7618897)*1+lsi)*1]), &(inteval->stack[((hsi*180180+8304087)*1+lsi)*1]), &(inteval->stack[((hsi*154440+7294507)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+7145017)*1+lsi)*1]), &(inteval->stack[((hsi*4290+790845)*1+lsi)*1]), &(inteval->stack[((hsi*3630+795135)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+7155907)*1+lsi)*1]), &(inteval->stack[((hsi*12870+798765)*1+lsi)*1]), &(inteval->stack[((hsi*10890+7145017)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+7177687)*1+lsi)*1]), &(inteval->stack[((hsi*25740+826650)*1+lsi)*1]), &(inteval->stack[((hsi*21780+7155907)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+737715)*1+lsi)*1]), &(inteval->stack[((hsi*42900+6813147)*1+lsi)*1]), &(inteval->stack[((hsi*36300+7177687)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+7145017)*1+lsi)*1]), &(inteval->stack[((hsi*64350+6960547)*1+lsi)*1]), &(inteval->stack[((hsi*54450+737715)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+737715)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6856047)*1+lsi)*1]), &(inteval->stack[((hsi*76230+7145017)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*120120+7024897)*1+lsi)*1]), &(inteval->stack[((hsi*101640+737715)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+6896472)*1+lsi)*1]), &(inteval->stack[((hsi*154440+7294507)*1+lsi)*1]), &(inteval->stack[((hsi*130680+6765792)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+7059822)*1+lsi)*1]), &(inteval->stack[((hsi*193050+7618897)*1+lsi)*1]), &(inteval->stack[((hsi*163350+6896472)*1+lsi)*1]),55);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*34650+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*12705+713460)*1+lsi)*1]), &(inteval->stack[((hsi*11550+726165)*1+lsi)*1]),55);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*62700+6800442)*1+lsi)*1]), &(inteval->stack[((hsi*34650+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*31350+7448947)*1+lsi)*1]),55);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*94050+7259472)*1+lsi)*1]), &(inteval->stack[((hsi*62700+6800442)*1+lsi)*1]), &(inteval->stack[((hsi*56430+7889607)*1+lsi)*1]),55);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*126225+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*94050+7259472)*1+lsi)*1]), &(inteval->stack[((hsi*84150+7946037)*1+lsi)*1]),55);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*157080+7259472)*1+lsi)*1]), &(inteval->stack[((hsi*126225+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*112200+8030187)*1+lsi)*1]),55);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*184800+7811947)*1+lsi)*1]), &(inteval->stack[((hsi*157080+7259472)*1+lsi)*1]), &(inteval->stack[((hsi*138600+7480297)*1+lsi)*1]),55);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*207900+7259472)*1+lsi)*1]), &(inteval->stack[((hsi*184800+7811947)*1+lsi)*1]), &(inteval->stack[((hsi*161700+8142387)*1+lsi)*1]),55);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*225225+7811947)*1+lsi)*1]), &(inteval->stack[((hsi*207900+7259472)*1+lsi)*1]), &(inteval->stack[((hsi*180180+8304087)*1+lsi)*1]),55);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*235950+7259472)*1+lsi)*1]), &(inteval->stack[((hsi*225225+7811947)*1+lsi)*1]), &(inteval->stack[((hsi*193050+7618897)*1+lsi)*1]),55);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*239580+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*235950+7259472)*1+lsi)*1]), &(inteval->stack[((hsi*199650+7059822)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*588060+7005372)*1+lsi)*1]), &(inteval->stack[((hsi*239580+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*196020+6569772)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+713460)*1+lsi)*1]), &(inteval->stack[((hsi*6006+697950)*1+lsi)*1]), &(inteval->stack[((hsi*5148+703956)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+728904)*1+lsi)*1]), &(inteval->stack[((hsi*6930+691020)*1+lsi)*1]), &(inteval->stack[((hsi*6006+697950)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+746922)*1+lsi)*1]), &(inteval->stack[((hsi*18018+728904)*1+lsi)*1]), &(inteval->stack[((hsi*15444+713460)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+777810)*1+lsi)*1]), &(inteval->stack[((hsi*7920+683100)*1+lsi)*1]), &(inteval->stack[((hsi*6930+691020)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+798600)*1+lsi)*1]), &(inteval->stack[((hsi*20790+777810)*1+lsi)*1]), &(inteval->stack[((hsi*18018+728904)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*36036+798600)*1+lsi)*1]), &(inteval->stack[((hsi*30888+746922)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+834636)*1+lsi)*1]), &(inteval->stack[((hsi*8976+674124)*1+lsi)*1]), &(inteval->stack[((hsi*7920+683100)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+7644912)*1+lsi)*1]), &(inteval->stack[((hsi*23760+834636)*1+lsi)*1]), &(inteval->stack[((hsi*20790+777810)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+7686492)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7644912)*1+lsi)*1]), &(inteval->stack[((hsi*36036+798600)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+7746552)*1+lsi)*1]), &(inteval->stack[((hsi*60060+7686492)*1+lsi)*1]), &(inteval->stack[((hsi*51480+7593432)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+777810)*1+lsi)*1]), &(inteval->stack[((hsi*10098+664026)*1+lsi)*1]), &(inteval->stack[((hsi*8976+674124)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+7823772)*1+lsi)*1]), &(inteval->stack[((hsi*26928+777810)*1+lsi)*1]), &(inteval->stack[((hsi*23760+834636)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+7871292)*1+lsi)*1]), &(inteval->stack[((hsi*47520+7823772)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7644912)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+7940592)*1+lsi)*1]), &(inteval->stack[((hsi*69300+7871292)*1+lsi)*1]), &(inteval->stack[((hsi*60060+7686492)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+8030682)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7940592)*1+lsi)*1]), &(inteval->stack[((hsi*77220+7746552)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+7644912)*1+lsi)*1]), &(inteval->stack[((hsi*11286+652740)*1+lsi)*1]), &(inteval->stack[((hsi*10098+664026)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+7675206)*1+lsi)*1]), &(inteval->stack[((hsi*30294+7644912)*1+lsi)*1]), &(inteval->stack[((hsi*26928+777810)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+777810)*1+lsi)*1]), &(inteval->stack[((hsi*53856+7675206)*1+lsi)*1]), &(inteval->stack[((hsi*47520+7823772)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+8138790)*1+lsi)*1]), &(inteval->stack[((hsi*79200+777810)*1+lsi)*1]), &(inteval->stack[((hsi*69300+7871292)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+8242740)*1+lsi)*1]), &(inteval->stack[((hsi*103950+8138790)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7940592)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+7823772)*1+lsi)*1]), &(inteval->stack[((hsi*126126+8242740)*1+lsi)*1]), &(inteval->stack[((hsi*108108+8030682)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+7967916)*1+lsi)*1]), &(inteval->stack[((hsi*12540+640200)*1+lsi)*1]), &(inteval->stack[((hsi*11286+652740)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+8368866)*1+lsi)*1]), &(inteval->stack[((hsi*33858+7967916)*1+lsi)*1]), &(inteval->stack[((hsi*30294+7644912)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+8429454)*1+lsi)*1]), &(inteval->stack[((hsi*60588+8368866)*1+lsi)*1]), &(inteval->stack[((hsi*53856+7675206)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+8519214)*1+lsi)*1]), &(inteval->stack[((hsi*89760+8429454)*1+lsi)*1]), &(inteval->stack[((hsi*79200+777810)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+8638014)*1+lsi)*1]), &(inteval->stack[((hsi*118800+8519214)*1+lsi)*1]), &(inteval->stack[((hsi*103950+8138790)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+8783544)*1+lsi)*1]), &(inteval->stack[((hsi*145530+8638014)*1+lsi)*1]), &(inteval->stack[((hsi*126126+8242740)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+8138790)*1+lsi)*1]), &(inteval->stack[((hsi*168168+8783544)*1+lsi)*1]), &(inteval->stack[((hsi*144144+7823772)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+7644912)*1+lsi)*1]), &(inteval->stack[((hsi*13860+626340)*1+lsi)*1]), &(inteval->stack[((hsi*12540+640200)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+777810)*1+lsi)*1]), &(inteval->stack[((hsi*37620+7644912)*1+lsi)*1]), &(inteval->stack[((hsi*33858+7967916)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+8951712)*1+lsi)*1]), &(inteval->stack[((hsi*67716+777810)*1+lsi)*1]), &(inteval->stack[((hsi*60588+8368866)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+9052692)*1+lsi)*1]), &(inteval->stack[((hsi*100980+8951712)*1+lsi)*1]), &(inteval->stack[((hsi*89760+8429454)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+8324118)*1+lsi)*1]), &(inteval->stack[((hsi*134640+9052692)*1+lsi)*1]), &(inteval->stack[((hsi*118800+8519214)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+9187332)*1+lsi)*1]), &(inteval->stack[((hsi*166320+8324118)*1+lsi)*1]), &(inteval->stack[((hsi*145530+8638014)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+8490438)*1+lsi)*1]), &(inteval->stack[((hsi*194040+9187332)*1+lsi)*1]), &(inteval->stack[((hsi*168168+8783544)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+8706654)*1+lsi)*1]), &(inteval->stack[((hsi*216216+8490438)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8138790)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+7682532)*1+lsi)*1]), &(inteval->stack[((hsi*5148+703956)*1+lsi)*1]), &(inteval->stack[((hsi*4356+709104)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+640200)*1+lsi)*1]), &(inteval->stack[((hsi*15444+713460)*1+lsi)*1]), &(inteval->stack[((hsi*13068+7682532)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+666336)*1+lsi)*1]), &(inteval->stack[((hsi*30888+746922)*1+lsi)*1]), &(inteval->stack[((hsi*26136+640200)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+709896)*1+lsi)*1]), &(inteval->stack[((hsi*51480+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*43560+666336)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+9381372)*1+lsi)*1]), &(inteval->stack[((hsi*77220+7746552)*1+lsi)*1]), &(inteval->stack[((hsi*65340+709896)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+7682532)*1+lsi)*1]), &(inteval->stack[((hsi*108108+8030682)*1+lsi)*1]), &(inteval->stack[((hsi*91476+9381372)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+7967916)*1+lsi)*1]), &(inteval->stack[((hsi*144144+7823772)*1+lsi)*1]), &(inteval->stack[((hsi*121968+7682532)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+7682532)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8138790)*1+lsi)*1]), &(inteval->stack[((hsi*156816+7967916)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+7878552)*1+lsi)*1]), &(inteval->stack[((hsi*231660+8706654)*1+lsi)*1]), &(inteval->stack[((hsi*196020+7682532)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+8118132)*1+lsi)*1]), &(inteval->stack[((hsi*15246+611094)*1+lsi)*1]), &(inteval->stack[((hsi*13860+626340)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+7682532)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8118132)*1+lsi)*1]), &(inteval->stack[((hsi*37620+7644912)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+8118132)*1+lsi)*1]), &(inteval->stack[((hsi*75240+7682532)*1+lsi)*1]), &(inteval->stack[((hsi*67716+777810)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*112860+8118132)*1+lsi)*1]), &(inteval->stack[((hsi*100980+8951712)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+611094)*1+lsi)*1]), &(inteval->stack[((hsi*151470+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*134640+9052692)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*188496+611094)*1+lsi)*1]), &(inteval->stack[((hsi*166320+8324118)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+8118132)*1+lsi)*1]), &(inteval->stack[((hsi*221760+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*194040+9187332)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*249480+8118132)*1+lsi)*1]), &(inteval->stack[((hsi*216216+8490438)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+8118132)*1+lsi)*1]), &(inteval->stack[((hsi*270270+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*231660+8706654)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+8401272)*1+lsi)*1]), &(inteval->stack[((hsi*283140+8118132)*1+lsi)*1]), &(inteval->stack[((hsi*239580+7878552)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*718740+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*287496+8401272)*1+lsi)*1]), &(inteval->stack[((hsi*239580+6765792)*1+lsi)*1]),4356);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*1176120+8688768)*1+lsi)*1]), &(inteval->stack[((hsi*718740+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*588060+7005372)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+611094)*1+lsi)*1]), &(inteval->stack[((hsi*7098+592764)*1+lsi)*1]), &(inteval->stack[((hsi*6084+599862)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*8190+584574)*1+lsi)*1]), &(inteval->stack[((hsi*7098+592764)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+629346)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*18252+611094)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+6787086)*1+lsi)*1]), &(inteval->stack[((hsi*9360+575214)*1+lsi)*1]), &(inteval->stack[((hsi*8190+584574)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+665850)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6787086)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6765792)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+6811656)*1+lsi)*1]), &(inteval->stack[((hsi*42588+665850)*1+lsi)*1]), &(inteval->stack[((hsi*36504+629346)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+708438)*1+lsi)*1]), &(inteval->stack[((hsi*10608+564606)*1+lsi)*1]), &(inteval->stack[((hsi*9360+575214)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+6872496)*1+lsi)*1]), &(inteval->stack[((hsi*28080+708438)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6787086)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+736518)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6872496)*1+lsi)*1]), &(inteval->stack[((hsi*42588+665850)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*70980+736518)*1+lsi)*1]), &(inteval->stack[((hsi*60840+6811656)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+8312172)*1+lsi)*1]), &(inteval->stack[((hsi*11934+552672)*1+lsi)*1]), &(inteval->stack[((hsi*10608+564606)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+6921636)*1+lsi)*1]), &(inteval->stack[((hsi*31824+8312172)*1+lsi)*1]), &(inteval->stack[((hsi*28080+708438)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+9956148)*1+lsi)*1]), &(inteval->stack[((hsi*56160+6921636)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6872496)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+10038048)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9956148)*1+lsi)*1]), &(inteval->stack[((hsi*70980+736518)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+665850)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10038048)*1+lsi)*1]), &(inteval->stack[((hsi*91260+9864888)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+793614)*1+lsi)*1]), &(inteval->stack[((hsi*13338+539334)*1+lsi)*1]), &(inteval->stack[((hsi*11934+552672)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+10144518)*1+lsi)*1]), &(inteval->stack[((hsi*35802+793614)*1+lsi)*1]), &(inteval->stack[((hsi*31824+8312172)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+10208166)*1+lsi)*1]), &(inteval->stack[((hsi*63648+10144518)*1+lsi)*1]), &(inteval->stack[((hsi*56160+6921636)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+6872496)*1+lsi)*1]), &(inteval->stack[((hsi*93600+10208166)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9956148)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+10301766)*1+lsi)*1]), &(inteval->stack[((hsi*122850+6872496)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10038048)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+9956148)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10301766)*1+lsi)*1]), &(inteval->stack[((hsi*127764+665850)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+8312172)*1+lsi)*1]), &(inteval->stack[((hsi*14820+524514)*1+lsi)*1]), &(inteval->stack[((hsi*13338+539334)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+10450824)*1+lsi)*1]), &(inteval->stack[((hsi*40014+8312172)*1+lsi)*1]), &(inteval->stack[((hsi*35802+793614)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+10522428)*1+lsi)*1]), &(inteval->stack[((hsi*71604+10450824)*1+lsi)*1]), &(inteval->stack[((hsi*63648+10144518)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+10628508)*1+lsi)*1]), &(inteval->stack[((hsi*106080+10522428)*1+lsi)*1]), &(inteval->stack[((hsi*93600+10208166)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+10126500)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10628508)*1+lsi)*1]), &(inteval->stack[((hsi*122850+6872496)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+10768908)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10126500)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10301766)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+10967652)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10768908)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9956148)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+10298490)*1+lsi)*1]), &(inteval->stack[((hsi*16380+508134)*1+lsi)*1]), &(inteval->stack[((hsi*14820+524514)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+6872496)*1+lsi)*1]), &(inteval->stack[((hsi*44460+10298490)*1+lsi)*1]), &(inteval->stack[((hsi*40014+8312172)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+11186676)*1+lsi)*1]), &(inteval->stack[((hsi*80028+6872496)*1+lsi)*1]), &(inteval->stack[((hsi*71604+10450824)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+10342950)*1+lsi)*1]), &(inteval->stack[((hsi*119340+11186676)*1+lsi)*1]), &(inteval->stack[((hsi*106080+10522428)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+11306016)*1+lsi)*1]), &(inteval->stack[((hsi*159120+10342950)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10628508)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+10502070)*1+lsi)*1]), &(inteval->stack[((hsi*196560+11306016)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10126500)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+11502576)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10502070)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10768908)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+11758104)*1+lsi)*1]), &(inteval->stack[((hsi*255528+11502576)*1+lsi)*1]), &(inteval->stack[((hsi*219024+10967652)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+10731390)*1+lsi)*1]), &(inteval->stack[((hsi*6084+599862)*1+lsi)*1]), &(inteval->stack[((hsi*5148+605946)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+10746834)*1+lsi)*1]), &(inteval->stack[((hsi*18252+611094)*1+lsi)*1]), &(inteval->stack[((hsi*15444+10731390)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+10777722)*1+lsi)*1]), &(inteval->stack[((hsi*36504+629346)*1+lsi)*1]), &(inteval->stack[((hsi*30888+10746834)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+10126500)*1+lsi)*1]), &(inteval->stack[((hsi*60840+6811656)*1+lsi)*1]), &(inteval->stack[((hsi*51480+10777722)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+10731390)*1+lsi)*1]), &(inteval->stack[((hsi*91260+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*77220+10126500)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+10126500)*1+lsi)*1]), &(inteval->stack[((hsi*127764+665850)*1+lsi)*1]), &(inteval->stack[((hsi*108108+10731390)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+524514)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9956148)*1+lsi)*1]), &(inteval->stack[((hsi*144144+10126500)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*219024+10967652)*1+lsi)*1]), &(inteval->stack[((hsi*185328+524514)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+10731390)*1+lsi)*1]), &(inteval->stack[((hsi*273780+11758104)*1+lsi)*1]), &(inteval->stack[((hsi*231660+9864888)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*18018+490116)*1+lsi)*1]), &(inteval->stack[((hsi*16380+508134)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+9914028)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*44460+10298490)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+490116)*1+lsi)*1]), &(inteval->stack[((hsi*88920+9914028)*1+lsi)*1]), &(inteval->stack[((hsi*80028+6872496)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*133380+490116)*1+lsi)*1]), &(inteval->stack[((hsi*119340+11186676)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+490116)*1+lsi)*1]), &(inteval->stack[((hsi*179010+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*159120+10342950)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*222768+490116)*1+lsi)*1]), &(inteval->stack[((hsi*196560+11306016)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+11014530)*1+lsi)*1]), &(inteval->stack[((hsi*262080+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10502070)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*294840+11014530)*1+lsi)*1]), &(inteval->stack[((hsi*255528+11502576)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+11014530)*1+lsi)*1]), &(inteval->stack[((hsi*319410+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*273780+11758104)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*334620+11014530)*1+lsi)*1]), &(inteval->stack[((hsi*283140+10731390)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+10204656)*1+lsi)*1]), &(inteval->stack[((hsi*339768+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*287496+8401272)*1+lsi)*1]),4356);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1437480+11067144)*1+lsi)*1]), &(inteval->stack[((hsi*862488+10204656)*1+lsi)*1]), &(inteval->stack[((hsi*718740+7593432)*1+lsi)*1]),4356);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*1960200+12504624)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+11067144)*1+lsi)*1]), &(inteval->stack[((hsi*1176120+8688768)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*8281+468731)*1+lsi)*1]), &(inteval->stack[((hsi*7098+477012)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+7614726)*1+lsi)*1]), &(inteval->stack[((hsi*9555+459176)*1+lsi)*1]), &(inteval->stack[((hsi*8281+468731)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+7639569)*1+lsi)*1]), &(inteval->stack[((hsi*24843+7614726)*1+lsi)*1]), &(inteval->stack[((hsi*21294+7593432)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+7682157)*1+lsi)*1]), &(inteval->stack[((hsi*10920+448256)*1+lsi)*1]), &(inteval->stack[((hsi*9555+459176)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+7710822)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7682157)*1+lsi)*1]), &(inteval->stack[((hsi*24843+7614726)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+7760508)*1+lsi)*1]), &(inteval->stack[((hsi*49686+7710822)*1+lsi)*1]), &(inteval->stack[((hsi*42588+7639569)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+7831488)*1+lsi)*1]), &(inteval->stack[((hsi*12376+435880)*1+lsi)*1]), &(inteval->stack[((hsi*10920+448256)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+7864248)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7831488)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7682157)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+7921578)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7864248)*1+lsi)*1]), &(inteval->stack[((hsi*49686+7710822)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+8004388)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7921578)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7760508)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+8110858)*1+lsi)*1]), &(inteval->stack[((hsi*13923+421957)*1+lsi)*1]), &(inteval->stack[((hsi*12376+435880)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+8147986)*1+lsi)*1]), &(inteval->stack[((hsi*37128+8110858)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7831488)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+8213506)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8147986)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7864248)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+8309056)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8213506)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7921578)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+490116)*1+lsi)*1]), &(inteval->stack[((hsi*124215+8309056)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8004388)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+8433271)*1+lsi)*1]), &(inteval->stack[((hsi*15561+406396)*1+lsi)*1]), &(inteval->stack[((hsi*13923+421957)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*41769+8433271)*1+lsi)*1]), &(inteval->stack[((hsi*37128+8110858)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+639174)*1+lsi)*1]), &(inteval->stack[((hsi*74256+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8147986)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+8475040)*1+lsi)*1]), &(inteval->stack[((hsi*109200+639174)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8213506)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+8110858)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8475040)*1+lsi)*1]), &(inteval->stack[((hsi*124215+8309056)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+14464824)*1+lsi)*1]), &(inteval->stack[((hsi*173901+8110858)*1+lsi)*1]), &(inteval->stack[((hsi*149058+490116)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+7831488)*1+lsi)*1]), &(inteval->stack[((hsi*17290+389106)*1+lsi)*1]), &(inteval->stack[((hsi*15561+406396)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+6840048)*1+lsi)*1]), &(inteval->stack[((hsi*46683+7831488)*1+lsi)*1]), &(inteval->stack[((hsi*41769+8433271)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+8284759)*1+lsi)*1]), &(inteval->stack[((hsi*83538+6840048)*1+lsi)*1]), &(inteval->stack[((hsi*74256+6765792)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+14663568)*1+lsi)*1]), &(inteval->stack[((hsi*123760+8284759)*1+lsi)*1]), &(inteval->stack[((hsi*109200+639174)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+639174)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14663568)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8475040)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+8408519)*1+lsi)*1]), &(inteval->stack[((hsi*200655+639174)*1+lsi)*1]), &(inteval->stack[((hsi*173901+8110858)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+14827368)*1+lsi)*1]), &(inteval->stack[((hsi*231868+8408519)*1+lsi)*1]), &(inteval->stack[((hsi*198744+14464824)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+8110858)*1+lsi)*1]), &(inteval->stack[((hsi*19110+369996)*1+lsi)*1]), &(inteval->stack[((hsi*17290+389106)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+7878171)*1+lsi)*1]), &(inteval->stack[((hsi*51870+8110858)*1+lsi)*1]), &(inteval->stack[((hsi*46683+7831488)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+15082896)*1+lsi)*1]), &(inteval->stack[((hsi*93366+7878171)*1+lsi)*1]), &(inteval->stack[((hsi*83538+6840048)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*139230+15082896)*1+lsi)*1]), &(inteval->stack[((hsi*123760+8284759)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+8162728)*1+lsi)*1]), &(inteval->stack[((hsi*185640+6765792)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14663568)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+15222126)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8162728)*1+lsi)*1]), &(inteval->stack[((hsi*200655+639174)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+15489666)*1+lsi)*1]), &(inteval->stack[((hsi*267540+15222126)*1+lsi)*1]), &(inteval->stack[((hsi*231868+8408519)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+15787782)*1+lsi)*1]), &(inteval->stack[((hsi*298116+15489666)*1+lsi)*1]), &(inteval->stack[((hsi*255528+14827368)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+8392048)*1+lsi)*1]), &(inteval->stack[((hsi*7098+477012)*1+lsi)*1]), &(inteval->stack[((hsi*6006+484110)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+8410066)*1+lsi)*1]), &(inteval->stack[((hsi*21294+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*18018+8392048)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+8446102)*1+lsi)*1]), &(inteval->stack[((hsi*42588+7639569)*1+lsi)*1]), &(inteval->stack[((hsi*36036+8410066)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+639174)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7760508)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8446102)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+8392048)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8004388)*1+lsi)*1]), &(inteval->stack[((hsi*90090+639174)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*149058+490116)*1+lsi)*1]), &(inteval->stack[((hsi*126126+8392048)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+389106)*1+lsi)*1]), &(inteval->stack[((hsi*198744+14464824)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7593432)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+14464824)*1+lsi)*1]), &(inteval->stack[((hsi*255528+14827368)*1+lsi)*1]), &(inteval->stack[((hsi*216216+389106)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+389106)*1+lsi)*1]), &(inteval->stack[((hsi*319410+15787782)*1+lsi)*1]), &(inteval->stack[((hsi*270270+14464824)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+14464824)*1+lsi)*1]), &(inteval->stack[((hsi*21021+348975)*1+lsi)*1]), &(inteval->stack[((hsi*19110+369996)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+14522154)*1+lsi)*1]), &(inteval->stack[((hsi*57330+14464824)*1+lsi)*1]), &(inteval->stack[((hsi*51870+8110858)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+14625894)*1+lsi)*1]), &(inteval->stack[((hsi*103740+14522154)*1+lsi)*1]), &(inteval->stack[((hsi*93366+7878171)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*155610+14625894)*1+lsi)*1]), &(inteval->stack[((hsi*139230+15082896)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+14464824)*1+lsi)*1]), &(inteval->stack[((hsi*208845+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*185640+6765792)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*259896+14464824)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8162728)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+7899192)*1+lsi)*1]), &(inteval->stack[((hsi*305760+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*267540+15222126)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+14464824)*1+lsi)*1]), &(inteval->stack[((hsi*343980+7899192)*1+lsi)*1]), &(inteval->stack[((hsi*298116+15489666)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*372645+14464824)*1+lsi)*1]), &(inteval->stack[((hsi*319410+15787782)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+7983822)*1+lsi)*1]), &(inteval->stack[((hsi*390390+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*330330+389106)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+14464824)*1+lsi)*1]), &(inteval->stack[((hsi*396396+7983822)*1+lsi)*1]), &(inteval->stack[((hsi*339768+9864888)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+15484128)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+14464824)*1+lsi)*1]), &(inteval->stack[((hsi*862488+10204656)*1+lsi)*1]),4356);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*2395800+17209104)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+15484128)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+11067144)*1+lsi)*1]),4356);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*2940300+19604904)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+17209104)*1+lsi)*1]), &(inteval->stack[((hsi*1960200+12504624)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*9555+324300)*1+lsi)*1]), &(inteval->stack[((hsi*8190+333855)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+9889458)*1+lsi)*1]), &(inteval->stack[((hsi*11025+313275)*1+lsi)*1]), &(inteval->stack[((hsi*9555+324300)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+9918123)*1+lsi)*1]), &(inteval->stack[((hsi*28665+9889458)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9864888)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+9967263)*1+lsi)*1]), &(inteval->stack[((hsi*12600+300675)*1+lsi)*1]), &(inteval->stack[((hsi*11025+313275)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+10000338)*1+lsi)*1]), &(inteval->stack[((hsi*33075+9967263)*1+lsi)*1]), &(inteval->stack[((hsi*28665+9889458)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+10057668)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10000338)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9918123)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+10139568)*1+lsi)*1]), &(inteval->stack[((hsi*14280+286395)*1+lsi)*1]), &(inteval->stack[((hsi*12600+300675)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+10177368)*1+lsi)*1]), &(inteval->stack[((hsi*37800+10139568)*1+lsi)*1]), &(inteval->stack[((hsi*33075+9967263)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+10243518)*1+lsi)*1]), &(inteval->stack[((hsi*66150+10177368)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10000338)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+10339068)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10243518)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10057668)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+10461918)*1+lsi)*1]), &(inteval->stack[((hsi*16065+270330)*1+lsi)*1]), &(inteval->stack[((hsi*14280+286395)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+10504758)*1+lsi)*1]), &(inteval->stack[((hsi*42840+10461918)*1+lsi)*1]), &(inteval->stack[((hsi*37800+10139568)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+10580358)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10504758)*1+lsi)*1]), &(inteval->stack[((hsi*66150+10177368)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+10690608)*1+lsi)*1]), &(inteval->stack[((hsi*110250+10580358)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10243518)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+10833933)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10690608)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10339068)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+11005923)*1+lsi)*1]), &(inteval->stack[((hsi*17955+252375)*1+lsi)*1]), &(inteval->stack[((hsi*16065+270330)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+11054118)*1+lsi)*1]), &(inteval->stack[((hsi*48195+11005923)*1+lsi)*1]), &(inteval->stack[((hsi*42840+10461918)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+11139798)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11054118)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10504758)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+11265798)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11139798)*1+lsi)*1]), &(inteval->stack[((hsi*110250+10580358)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+11431173)*1+lsi)*1]), &(inteval->stack[((hsi*165375+11265798)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10690608)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+11631828)*1+lsi)*1]), &(inteval->stack[((hsi*200655+11431173)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10833933)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+11861148)*1+lsi)*1]), &(inteval->stack[((hsi*19950+232425)*1+lsi)*1]), &(inteval->stack[((hsi*17955+252375)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+11915013)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11861148)*1+lsi)*1]), &(inteval->stack[((hsi*48195+11005923)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+348975)*1+lsi)*1]), &(inteval->stack[((hsi*96390+11915013)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11054118)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+12011403)*1+lsi)*1]), &(inteval->stack[((hsi*142800+348975)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11139798)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*189000+12011403)*1+lsi)*1]), &(inteval->stack[((hsi*165375+11265798)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+11005923)*1+lsi)*1]), &(inteval->stack[((hsi*231525+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*200655+11431173)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+491775)*1+lsi)*1]), &(inteval->stack[((hsi*267540+11005923)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11631828)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+10461918)*1+lsi)*1]), &(inteval->stack[((hsi*22050+210375)*1+lsi)*1]), &(inteval->stack[((hsi*19950+232425)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+11273463)*1+lsi)*1]), &(inteval->stack[((hsi*59850+10461918)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11861148)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+10521768)*1+lsi)*1]), &(inteval->stack[((hsi*107730+11273463)*1+lsi)*1]), &(inteval->stack[((hsi*96390+11915013)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+8380218)*1+lsi)*1]), &(inteval->stack[((hsi*160650+10521768)*1+lsi)*1]), &(inteval->stack[((hsi*142800+348975)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+12200403)*1+lsi)*1]), &(inteval->stack[((hsi*214200+8380218)*1+lsi)*1]), &(inteval->stack[((hsi*189000+12011403)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+11861148)*1+lsi)*1]), &(inteval->stack[((hsi*264600+12200403)*1+lsi)*1]), &(inteval->stack[((hsi*231525+7593432)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*308700+11861148)*1+lsi)*1]), &(inteval->stack[((hsi*267540+11005923)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+22545204)*1+lsi)*1]), &(inteval->stack[((hsi*343980+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*294840+491775)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+11005923)*1+lsi)*1]), &(inteval->stack[((hsi*8190+333855)*1+lsi)*1]), &(inteval->stack[((hsi*6930+342045)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+232425)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*20790+11005923)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+11005923)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9918123)*1+lsi)*1]), &(inteval->stack[((hsi*41580+232425)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+232425)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10057668)*1+lsi)*1]), &(inteval->stack[((hsi*69300+11005923)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10339068)*1+lsi)*1]), &(inteval->stack[((hsi*103950+232425)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+10010418)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10833933)*1+lsi)*1]), &(inteval->stack[((hsi*145530+9864888)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+10682418)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11631828)*1+lsi)*1]), &(inteval->stack[((hsi*194040+10010418)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*294840+491775)*1+lsi)*1]), &(inteval->stack[((hsi*249480+10682418)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+232425)*1+lsi)*1]), &(inteval->stack[((hsi*368550+22545204)*1+lsi)*1]), &(inteval->stack[((hsi*311850+9864888)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*24255+186120)*1+lsi)*1]), &(inteval->stack[((hsi*22050+210375)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+10682418)*1+lsi)*1]), &(inteval->stack[((hsi*66150+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*59850+10461918)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*119700+10682418)*1+lsi)*1]), &(inteval->stack[((hsi*107730+11273463)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+10682418)*1+lsi)*1]), &(inteval->stack[((hsi*179550+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*160650+10521768)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+10923393)*1+lsi)*1]), &(inteval->stack[((hsi*240975+10682418)*1+lsi)*1]), &(inteval->stack[((hsi*214200+8380218)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*299880+10923393)*1+lsi)*1]), &(inteval->stack[((hsi*264600+12200403)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+10217688)*1+lsi)*1]), &(inteval->stack[((hsi*352800+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*308700+11861148)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+10614588)*1+lsi)*1]), &(inteval->stack[((hsi*396900+10217688)*1+lsi)*1]), &(inteval->stack[((hsi*343980+7593432)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+11044563)*1+lsi)*1]), &(inteval->stack[((hsi*429975+10614588)*1+lsi)*1]), &(inteval->stack[((hsi*368550+22545204)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*450450+11044563)*1+lsi)*1]), &(inteval->stack[((hsi*381150+232425)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+10322268)*1+lsi)*1]), &(inteval->stack[((hsi*457380+9864888)*1+lsi)*1]), &(inteval->stack[((hsi*396396+7983822)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+22545204)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+10322268)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+14464824)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+24583812)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+22545204)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+15484128)*1+lsi)*1]),4356);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*3593700+27458772)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+24583812)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+17209104)*1+lsi)*1]),4356);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*4116420+14464824)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+27458772)*1+lsi)*1]), &(inteval->stack[((hsi*2940300+19604904)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*3276+915936)*1+lsi)*1]), &(inteval->stack[((hsi*2808+919212)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+7601856)*1+lsi)*1]), &(inteval->stack[((hsi*3780+912156)*1+lsi)*1]), &(inteval->stack[((hsi*3276+915936)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+7611684)*1+lsi)*1]), &(inteval->stack[((hsi*9828+7601856)*1+lsi)*1]), &(inteval->stack[((hsi*8424+7593432)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+7628532)*1+lsi)*1]), &(inteval->stack[((hsi*4320+907836)*1+lsi)*1]), &(inteval->stack[((hsi*3780+912156)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+7639872)*1+lsi)*1]), &(inteval->stack[((hsi*11340+7628532)*1+lsi)*1]), &(inteval->stack[((hsi*9828+7601856)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+7659528)*1+lsi)*1]), &(inteval->stack[((hsi*19656+7639872)*1+lsi)*1]), &(inteval->stack[((hsi*16848+7611684)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+18581244)*1+lsi)*1]), &(inteval->stack[((hsi*4896+902940)*1+lsi)*1]), &(inteval->stack[((hsi*4320+907836)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+18594204)*1+lsi)*1]), &(inteval->stack[((hsi*12960+18581244)*1+lsi)*1]), &(inteval->stack[((hsi*11340+7628532)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+7687608)*1+lsi)*1]), &(inteval->stack[((hsi*22680+18594204)*1+lsi)*1]), &(inteval->stack[((hsi*19656+7639872)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+11511456)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7687608)*1+lsi)*1]), &(inteval->stack[((hsi*28080+7659528)*1+lsi)*1]),36);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*14688+18616884)*1+lsi)*1]), &(inteval->stack[((hsi*5508+897432)*1+lsi)*1]), &(inteval->stack[((hsi*4896+902940)*1+lsi)*1]),36);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*25920+18631572)*1+lsi)*1]), &(inteval->stack[((hsi*14688+18616884)*1+lsi)*1]), &(inteval->stack[((hsi*12960+18581244)*1+lsi)*1]),36);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*37800+7720368)*1+lsi)*1]), &(inteval->stack[((hsi*25920+18631572)*1+lsi)*1]), &(inteval->stack[((hsi*22680+18594204)*1+lsi)*1]),36);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*49140+11553576)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7720368)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7687608)*1+lsi)*1]),36);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*58968+18657492)*1+lsi)*1]), &(inteval->stack[((hsi*49140+11553576)*1+lsi)*1]), &(inteval->stack[((hsi*42120+11511456)*1+lsi)*1]),36);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*16524+7758168)*1+lsi)*1]), &(inteval->stack[((hsi*6156+891276)*1+lsi)*1]), &(inteval->stack[((hsi*5508+897432)*1+lsi)*1]),36);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*29376+7774692)*1+lsi)*1]), &(inteval->stack[((hsi*16524+7758168)*1+lsi)*1]), &(inteval->stack[((hsi*14688+18616884)*1+lsi)*1]),36);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*43200+11602716)*1+lsi)*1]), &(inteval->stack[((hsi*29376+7774692)*1+lsi)*1]), &(inteval->stack[((hsi*25920+18631572)*1+lsi)*1]),36);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*56700+18716460)*1+lsi)*1]), &(inteval->stack[((hsi*43200+11602716)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7720368)*1+lsi)*1]),36);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*68796+7804068)*1+lsi)*1]), &(inteval->stack[((hsi*56700+18716460)*1+lsi)*1]), &(inteval->stack[((hsi*49140+11553576)*1+lsi)*1]),36);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*78624+11645916)*1+lsi)*1]), &(inteval->stack[((hsi*68796+7804068)*1+lsi)*1]), &(inteval->stack[((hsi*58968+18657492)*1+lsi)*1]),36);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*18468+18773160)*1+lsi)*1]), &(inteval->stack[((hsi*6840+884436)*1+lsi)*1]), &(inteval->stack[((hsi*6156+891276)*1+lsi)*1]),36);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*33048+7872864)*1+lsi)*1]), &(inteval->stack[((hsi*18468+18773160)*1+lsi)*1]), &(inteval->stack[((hsi*16524+7758168)*1+lsi)*1]),36);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*48960+18791628)*1+lsi)*1]), &(inteval->stack[((hsi*33048+7872864)*1+lsi)*1]), &(inteval->stack[((hsi*29376+7774692)*1+lsi)*1]),36);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*64800+7905912)*1+lsi)*1]), &(inteval->stack[((hsi*48960+18791628)*1+lsi)*1]), &(inteval->stack[((hsi*43200+11602716)*1+lsi)*1]),36);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*79380+11724540)*1+lsi)*1]), &(inteval->stack[((hsi*64800+7905912)*1+lsi)*1]), &(inteval->stack[((hsi*56700+18716460)*1+lsi)*1]),36);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*91728+18840588)*1+lsi)*1]), &(inteval->stack[((hsi*79380+11724540)*1+lsi)*1]), &(inteval->stack[((hsi*68796+7804068)*1+lsi)*1]),36);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*101088+7970712)*1+lsi)*1]), &(inteval->stack[((hsi*91728+18840588)*1+lsi)*1]), &(inteval->stack[((hsi*78624+11645916)*1+lsi)*1]),36);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*20520+11803920)*1+lsi)*1]), &(inteval->stack[((hsi*7560+876876)*1+lsi)*1]), &(inteval->stack[((hsi*6840+884436)*1+lsi)*1]),36);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*36936+186120)*1+lsi)*1]), &(inteval->stack[((hsi*20520+11803920)*1+lsi)*1]), &(inteval->stack[((hsi*18468+18773160)*1+lsi)*1]),36);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*55080+11824440)*1+lsi)*1]), &(inteval->stack[((hsi*36936+186120)*1+lsi)*1]), &(inteval->stack[((hsi*33048+7872864)*1+lsi)*1]),36);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*73440+18932316)*1+lsi)*1]), &(inteval->stack[((hsi*55080+11824440)*1+lsi)*1]), &(inteval->stack[((hsi*48960+18791628)*1+lsi)*1]),36);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*90720+223056)*1+lsi)*1]), &(inteval->stack[((hsi*73440+18932316)*1+lsi)*1]), &(inteval->stack[((hsi*64800+7905912)*1+lsi)*1]),36);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*105840+11879520)*1+lsi)*1]), &(inteval->stack[((hsi*90720+223056)*1+lsi)*1]), &(inteval->stack[((hsi*79380+11724540)*1+lsi)*1]),36);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*117936+8071800)*1+lsi)*1]), &(inteval->stack[((hsi*105840+11879520)*1+lsi)*1]), &(inteval->stack[((hsi*91728+18840588)*1+lsi)*1]),36);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*126360+19005756)*1+lsi)*1]), &(inteval->stack[((hsi*117936+8071800)*1+lsi)*1]), &(inteval->stack[((hsi*101088+7970712)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+313776)*1+lsi)*1]), &(inteval->stack[((hsi*2808+919212)*1+lsi)*1]), &(inteval->stack[((hsi*2376+922020)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+320904)*1+lsi)*1]), &(inteval->stack[((hsi*8424+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*7128+313776)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+335160)*1+lsi)*1]), &(inteval->stack[((hsi*16848+7611684)*1+lsi)*1]), &(inteval->stack[((hsi*14256+320904)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+11985360)*1+lsi)*1]), &(inteval->stack[((hsi*28080+7659528)*1+lsi)*1]), &(inteval->stack[((hsi*23760+335160)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+313776)*1+lsi)*1]), &(inteval->stack[((hsi*42120+11511456)*1+lsi)*1]), &(inteval->stack[((hsi*35640+11985360)*1+lsi)*1]),36);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*66528+11985360)*1+lsi)*1]), &(inteval->stack[((hsi*58968+18657492)*1+lsi)*1]), &(inteval->stack[((hsi*49896+313776)*1+lsi)*1]),36);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*85536+313776)*1+lsi)*1]), &(inteval->stack[((hsi*78624+11645916)*1+lsi)*1]), &(inteval->stack[((hsi*66528+11985360)*1+lsi)*1]),36);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*106920+11985360)*1+lsi)*1]), &(inteval->stack[((hsi*101088+7970712)*1+lsi)*1]), &(inteval->stack[((hsi*85536+313776)*1+lsi)*1]),36);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*130680+313776)*1+lsi)*1]), &(inteval->stack[((hsi*126360+19005756)*1+lsi)*1]), &(inteval->stack[((hsi*106920+11985360)*1+lsi)*1]),36);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*22680+11985360)*1+lsi)*1]), &(inteval->stack[((hsi*8316+868560)*1+lsi)*1]), &(inteval->stack[((hsi*7560+876876)*1+lsi)*1]),36);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*41040+8189736)*1+lsi)*1]), &(inteval->stack[((hsi*22680+11985360)*1+lsi)*1]), &(inteval->stack[((hsi*20520+11803920)*1+lsi)*1]),36);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*61560+11985360)*1+lsi)*1]), &(inteval->stack[((hsi*41040+8189736)*1+lsi)*1]), &(inteval->stack[((hsi*36936+186120)*1+lsi)*1]),36);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*82620+8189736)*1+lsi)*1]), &(inteval->stack[((hsi*61560+11985360)*1+lsi)*1]), &(inteval->stack[((hsi*55080+11824440)*1+lsi)*1]),36);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*102816+11985360)*1+lsi)*1]), &(inteval->stack[((hsi*82620+8189736)*1+lsi)*1]), &(inteval->stack[((hsi*73440+18932316)*1+lsi)*1]),36);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*120960+8189736)*1+lsi)*1]), &(inteval->stack[((hsi*102816+11985360)*1+lsi)*1]), &(inteval->stack[((hsi*90720+223056)*1+lsi)*1]),36);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*136080+11985360)*1+lsi)*1]), &(inteval->stack[((hsi*120960+8189736)*1+lsi)*1]), &(inteval->stack[((hsi*105840+11879520)*1+lsi)*1]),36);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*147420+8189736)*1+lsi)*1]), &(inteval->stack[((hsi*136080+11985360)*1+lsi)*1]), &(inteval->stack[((hsi*117936+8071800)*1+lsi)*1]),36);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*154440+11511456)*1+lsi)*1]), &(inteval->stack[((hsi*147420+8189736)*1+lsi)*1]), &(inteval->stack[((hsi*126360+19005756)*1+lsi)*1]),36);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*156816+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*154440+11511456)*1+lsi)*1]), &(inteval->stack[((hsi*130680+313776)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*470448+18581244)*1+lsi)*1]), &(inteval->stack[((hsi*196020+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*156816+7593432)*1+lsi)*1]),4356);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*940896+7593432)*1+lsi)*1]), &(inteval->stack[((hsi*588060+7005372)*1+lsi)*1]), &(inteval->stack[((hsi*470448+18581244)*1+lsi)*1]),4356);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*1568160+31052472)*1+lsi)*1]), &(inteval->stack[((hsi*1176120+8688768)*1+lsi)*1]), &(inteval->stack[((hsi*940896+7593432)*1+lsi)*1]),4356);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*2352240+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*1960200+12504624)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+31052472)*1+lsi)*1]),4356);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*3293136+31052472)*1+lsi)*1]), &(inteval->stack[((hsi*2940300+19604904)*1+lsi)*1]), &(inteval->stack[((hsi*2352240+6569772)*1+lsi)*1]),4356);
HRRPart0bra0ket0ki(inteval, &(inteval->stack[((hsi*4390848+34345608)*1+lsi)*1]), &(inteval->stack[((hsi*4116420+14464824)*1+lsi)*1]), &(inteval->stack[((hsi*3293136+31052472)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+18581244)*1+lsi)*1]), &(inteval->stack[((hsi*10920+157920)*1+lsi)*1]), &(inteval->stack[((hsi*9360+168840)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+18609324)*1+lsi)*1]), &(inteval->stack[((hsi*12600+145320)*1+lsi)*1]), &(inteval->stack[((hsi*10920+157920)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+18642084)*1+lsi)*1]), &(inteval->stack[((hsi*32760+18609324)*1+lsi)*1]), &(inteval->stack[((hsi*28080+18581244)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+18698244)*1+lsi)*1]), &(inteval->stack[((hsi*14400+130920)*1+lsi)*1]), &(inteval->stack[((hsi*12600+145320)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+18736044)*1+lsi)*1]), &(inteval->stack[((hsi*37800+18698244)*1+lsi)*1]), &(inteval->stack[((hsi*32760+18609324)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+18801564)*1+lsi)*1]), &(inteval->stack[((hsi*65520+18736044)*1+lsi)*1]), &(inteval->stack[((hsi*56160+18642084)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+18895164)*1+lsi)*1]), &(inteval->stack[((hsi*16320+114600)*1+lsi)*1]), &(inteval->stack[((hsi*14400+130920)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+18938364)*1+lsi)*1]), &(inteval->stack[((hsi*43200+18895164)*1+lsi)*1]), &(inteval->stack[((hsi*37800+18698244)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+19013964)*1+lsi)*1]), &(inteval->stack[((hsi*75600+18938364)*1+lsi)*1]), &(inteval->stack[((hsi*65520+18736044)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+19123164)*1+lsi)*1]), &(inteval->stack[((hsi*109200+19013964)*1+lsi)*1]), &(inteval->stack[((hsi*93600+18801564)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*18360+96240)*1+lsi)*1]), &(inteval->stack[((hsi*16320+114600)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+31052472)*1+lsi)*1]), &(inteval->stack[((hsi*48960+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*43200+18895164)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+19263564)*1+lsi)*1]), &(inteval->stack[((hsi*86400+31052472)*1+lsi)*1]), &(inteval->stack[((hsi*75600+18938364)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+6618732)*1+lsi)*1]), &(inteval->stack[((hsi*126000+19263564)*1+lsi)*1]), &(inteval->stack[((hsi*109200+19013964)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+31138872)*1+lsi)*1]), &(inteval->stack[((hsi*163800+6618732)*1+lsi)*1]), &(inteval->stack[((hsi*140400+19123164)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+19389564)*1+lsi)*1]), &(inteval->stack[((hsi*20520+75720)*1+lsi)*1]), &(inteval->stack[((hsi*18360+96240)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+19444644)*1+lsi)*1]), &(inteval->stack[((hsi*55080+19389564)*1+lsi)*1]), &(inteval->stack[((hsi*48960+6569772)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+6782532)*1+lsi)*1]), &(inteval->stack[((hsi*97920+19444644)*1+lsi)*1]), &(inteval->stack[((hsi*86400+31052472)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+31335432)*1+lsi)*1]), &(inteval->stack[((hsi*144000+6782532)*1+lsi)*1]), &(inteval->stack[((hsi*126000+19263564)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+19542564)*1+lsi)*1]), &(inteval->stack[((hsi*189000+31335432)*1+lsi)*1]), &(inteval->stack[((hsi*163800+6618732)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+11511456)*1+lsi)*1]), &(inteval->stack[((hsi*229320+19542564)*1+lsi)*1]), &(inteval->stack[((hsi*196560+31138872)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+6926532)*1+lsi)*1]), &(inteval->stack[((hsi*22800+52920)*1+lsi)*1]), &(inteval->stack[((hsi*20520+75720)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+6988092)*1+lsi)*1]), &(inteval->stack[((hsi*61560+6926532)*1+lsi)*1]), &(inteval->stack[((hsi*55080+19389564)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+31524432)*1+lsi)*1]), &(inteval->stack[((hsi*110160+6988092)*1+lsi)*1]), &(inteval->stack[((hsi*97920+19444644)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+19771884)*1+lsi)*1]), &(inteval->stack[((hsi*163200+31524432)*1+lsi)*1]), &(inteval->stack[((hsi*144000+6782532)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+7098252)*1+lsi)*1]), &(inteval->stack[((hsi*216000+19771884)*1+lsi)*1]), &(inteval->stack[((hsi*189000+31335432)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+11773536)*1+lsi)*1]), &(inteval->stack[((hsi*264600+7098252)*1+lsi)*1]), &(inteval->stack[((hsi*229320+19542564)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+31687632)*1+lsi)*1]), &(inteval->stack[((hsi*305760+11773536)*1+lsi)*1]), &(inteval->stack[((hsi*262080+11511456)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+19987884)*1+lsi)*1]), &(inteval->stack[((hsi*25200+27720)*1+lsi)*1]), &(inteval->stack[((hsi*22800+52920)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+7362852)*1+lsi)*1]), &(inteval->stack[((hsi*68400+19987884)*1+lsi)*1]), &(inteval->stack[((hsi*61560+6926532)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+20056284)*1+lsi)*1]), &(inteval->stack[((hsi*123120+7362852)*1+lsi)*1]), &(inteval->stack[((hsi*110160+6988092)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+12079296)*1+lsi)*1]), &(inteval->stack[((hsi*183600+20056284)*1+lsi)*1]), &(inteval->stack[((hsi*163200+31524432)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+7485972)*1+lsi)*1]), &(inteval->stack[((hsi*244800+12079296)*1+lsi)*1]), &(inteval->stack[((hsi*216000+19771884)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+32024592)*1+lsi)*1]), &(inteval->stack[((hsi*302400+7485972)*1+lsi)*1]), &(inteval->stack[((hsi*264600+7098252)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+20239884)*1+lsi)*1]), &(inteval->stack[((hsi*352800+32024592)*1+lsi)*1]), &(inteval->stack[((hsi*305760+11773536)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+12324096)*1+lsi)*1]), &(inteval->stack[((hsi*393120+20239884)*1+lsi)*1]), &(inteval->stack[((hsi*336960+31687632)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+7788372)*1+lsi)*1]), &(inteval->stack[((hsi*9360+168840)*1+lsi)*1]), &(inteval->stack[((hsi*7920+178200)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+7812132)*1+lsi)*1]), &(inteval->stack[((hsi*28080+18581244)*1+lsi)*1]), &(inteval->stack[((hsi*23760+7788372)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+7859652)*1+lsi)*1]), &(inteval->stack[((hsi*56160+18642084)*1+lsi)*1]), &(inteval->stack[((hsi*47520+7812132)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+32377392)*1+lsi)*1]), &(inteval->stack[((hsi*93600+18801564)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7859652)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+7788372)*1+lsi)*1]), &(inteval->stack[((hsi*140400+19123164)*1+lsi)*1]), &(inteval->stack[((hsi*118800+32377392)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+32377392)*1+lsi)*1]), &(inteval->stack[((hsi*196560+31138872)*1+lsi)*1]), &(inteval->stack[((hsi*166320+7788372)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+7788372)*1+lsi)*1]), &(inteval->stack[((hsi*262080+11511456)*1+lsi)*1]), &(inteval->stack[((hsi*221760+32377392)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+32377392)*1+lsi)*1]), &(inteval->stack[((hsi*336960+31687632)*1+lsi)*1]), &(inteval->stack[((hsi*285120+7788372)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+7788372)*1+lsi)*1]), &(inteval->stack[((hsi*421200+12324096)*1+lsi)*1]), &(inteval->stack[((hsi*356400+32377392)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+32377392)*1+lsi)*1]), &(inteval->stack[((hsi*27720+0)*1+lsi)*1]), &(inteval->stack[((hsi*25200+27720)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+20633004)*1+lsi)*1]), &(inteval->stack[((hsi*75600+32377392)*1+lsi)*1]), &(inteval->stack[((hsi*68400+19987884)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+32377392)*1+lsi)*1]), &(inteval->stack[((hsi*136800+20633004)*1+lsi)*1]), &(inteval->stack[((hsi*123120+7362852)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+20633004)*1+lsi)*1]), &(inteval->stack[((hsi*205200+32377392)*1+lsi)*1]), &(inteval->stack[((hsi*183600+20056284)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+32377392)*1+lsi)*1]), &(inteval->stack[((hsi*275400+20633004)*1+lsi)*1]), &(inteval->stack[((hsi*244800+12079296)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+20633004)*1+lsi)*1]), &(inteval->stack[((hsi*342720+32377392)*1+lsi)*1]), &(inteval->stack[((hsi*302400+7485972)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+32377392)*1+lsi)*1]), &(inteval->stack[((hsi*403200+20633004)*1+lsi)*1]), &(inteval->stack[((hsi*352800+32024592)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+20633004)*1+lsi)*1]), &(inteval->stack[((hsi*453600+32377392)*1+lsi)*1]), &(inteval->stack[((hsi*393120+20239884)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+31052472)*1+lsi)*1]), &(inteval->stack[((hsi*491400+20633004)*1+lsi)*1]), &(inteval->stack[((hsi*421200+12324096)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+18581244)*1+lsi)*1]), &(inteval->stack[((hsi*514800+31052472)*1+lsi)*1]), &(inteval->stack[((hsi*435600+7788372)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+19103964)*1+lsi)*1]), &(inteval->stack[((hsi*522720+18581244)*1+lsi)*1]), &(inteval->stack[((hsi*457380+9864888)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+19103964)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+10322268)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+8948148)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+22545204)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+18581244)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+8948148)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+24583812)*1+lsi)*1]),4356);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*5031180+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+18581244)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+27458772)*1+lsi)*1]),4356);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*5488560+18581244)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+6569772)*1+lsi)*1]), &(inteval->stack[((hsi*4116420+14464824)*1+lsi)*1]),4356);
HRRPart0bra0ket0kk(inteval, &(inteval->stack[((hsi*5645376+924396)*1+lsi)*1]), &(inteval->stack[((hsi*5488560+18581244)*1+lsi)*1]), &(inteval->stack[((hsi*4390848+34345608)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*5645376+924396)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
