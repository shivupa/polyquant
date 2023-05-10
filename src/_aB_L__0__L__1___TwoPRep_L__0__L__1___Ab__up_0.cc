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
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lh.h>
#include <HRRPart0bra0ket0li.h>
#include <HRRPart0bra0ket0lk.h>
#include <HRRPart0bra0ket0ll.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mi.h>
#include <HRRPart0bra0ket0mk.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdf.h>
#include <HRRPart0bra0ket0pdg.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pff.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgd.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0php.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0pph.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psi.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0li.h>
#include <HRRPart1bra0ket0lk.h>
#include <HRRPart1bra0ket0ll.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mk.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__L__1___TwoPRep_L__0__L__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__L__1___TwoPRep_L__0__L__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,720801)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__L__1___TwoPRep_L__0__L__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*3630+673466)*1+lsi)*1]), &(inteval->stack[((hsi*3025+677096)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+4830501)*1+lsi)*1]), &(inteval->stack[((hsi*4290+669176)*1+lsi)*1]), &(inteval->stack[((hsi*3630+673466)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+4841391)*1+lsi)*1]), &(inteval->stack[((hsi*10890+4830501)*1+lsi)*1]), &(inteval->stack[((hsi*9075+4821426)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+4859541)*1+lsi)*1]), &(inteval->stack[((hsi*5005+664171)*1+lsi)*1]), &(inteval->stack[((hsi*4290+669176)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+4872411)*1+lsi)*1]), &(inteval->stack[((hsi*12870+4859541)*1+lsi)*1]), &(inteval->stack[((hsi*10890+4830501)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+4894191)*1+lsi)*1]), &(inteval->stack[((hsi*21780+4872411)*1+lsi)*1]), &(inteval->stack[((hsi*18150+4841391)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+4924441)*1+lsi)*1]), &(inteval->stack[((hsi*5775+658396)*1+lsi)*1]), &(inteval->stack[((hsi*5005+664171)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+4939456)*1+lsi)*1]), &(inteval->stack[((hsi*15015+4924441)*1+lsi)*1]), &(inteval->stack[((hsi*12870+4859541)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+4965196)*1+lsi)*1]), &(inteval->stack[((hsi*25740+4939456)*1+lsi)*1]), &(inteval->stack[((hsi*21780+4872411)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+5001496)*1+lsi)*1]), &(inteval->stack[((hsi*36300+4965196)*1+lsi)*1]), &(inteval->stack[((hsi*30250+4894191)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+4859541)*1+lsi)*1]), &(inteval->stack[((hsi*6600+651796)*1+lsi)*1]), &(inteval->stack[((hsi*5775+658396)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+5046871)*1+lsi)*1]), &(inteval->stack[((hsi*17325+4859541)*1+lsi)*1]), &(inteval->stack[((hsi*15015+4924441)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+5076901)*1+lsi)*1]), &(inteval->stack[((hsi*30030+5046871)*1+lsi)*1]), &(inteval->stack[((hsi*25740+4939456)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+5119801)*1+lsi)*1]), &(inteval->stack[((hsi*42900+5076901)*1+lsi)*1]), &(inteval->stack[((hsi*36300+4965196)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+4924441)*1+lsi)*1]), &(inteval->stack[((hsi*54450+5119801)*1+lsi)*1]), &(inteval->stack[((hsi*45375+5001496)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+5174251)*1+lsi)*1]), &(inteval->stack[((hsi*7480+644316)*1+lsi)*1]), &(inteval->stack[((hsi*6600+651796)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+5194051)*1+lsi)*1]), &(inteval->stack[((hsi*19800+5174251)*1+lsi)*1]), &(inteval->stack[((hsi*17325+4859541)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+5228701)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5194051)*1+lsi)*1]), &(inteval->stack[((hsi*30030+5046871)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+5278751)*1+lsi)*1]), &(inteval->stack[((hsi*50050+5228701)*1+lsi)*1]), &(inteval->stack[((hsi*42900+5076901)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+5343101)*1+lsi)*1]), &(inteval->stack[((hsi*64350+5278751)*1+lsi)*1]), &(inteval->stack[((hsi*54450+5119801)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+5046871)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5343101)*1+lsi)*1]), &(inteval->stack[((hsi*63525+4924441)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+5131571)*1+lsi)*1]), &(inteval->stack[((hsi*3025+677096)*1+lsi)*1]), &(inteval->stack[((hsi*2475+680121)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+5138996)*1+lsi)*1]), &(inteval->stack[((hsi*9075+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*7425+5131571)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+4859541)*1+lsi)*1]), &(inteval->stack[((hsi*18150+4841391)*1+lsi)*1]), &(inteval->stack[((hsi*14850+5138996)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+5131571)*1+lsi)*1]), &(inteval->stack[((hsi*30250+4894191)*1+lsi)*1]), &(inteval->stack[((hsi*24750+4859541)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*45375+5001496)*1+lsi)*1]), &(inteval->stack[((hsi*37125+5131571)*1+lsi)*1]),55);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*69300+5419331)*1+lsi)*1]), &(inteval->stack[((hsi*63525+4924441)*1+lsi)*1]), &(inteval->stack[((hsi*51975+4821426)*1+lsi)*1]),55);
HRRPart1bra0ket0lk(inteval, &(inteval->stack[((hsi*89100+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*84700+5046871)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5419331)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+4910526)*1+lsi)*1]), &(inteval->stack[((hsi*8415+635901)*1+lsi)*1]), &(inteval->stack[((hsi*7480+644316)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+4932966)*1+lsi)*1]), &(inteval->stack[((hsi*22440+4910526)*1+lsi)*1]), &(inteval->stack[((hsi*19800+5174251)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+4972566)*1+lsi)*1]), &(inteval->stack[((hsi*39600+4932966)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5194051)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+5131571)*1+lsi)*1]), &(inteval->stack[((hsi*57750+4972566)*1+lsi)*1]), &(inteval->stack[((hsi*50050+5228701)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+4910526)*1+lsi)*1]), &(inteval->stack[((hsi*75075+5131571)*1+lsi)*1]), &(inteval->stack[((hsi*64350+5278751)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+5131571)*1+lsi)*1]), &(inteval->stack[((hsi*90090+4910526)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5343101)*1+lsi)*1]),55);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*108900+4910526)*1+lsi)*1]), &(inteval->stack[((hsi*101640+5131571)*1+lsi)*1]), &(inteval->stack[((hsi*84700+5046871)*1+lsi)*1]),55);
HRRPart1bra0ket0ll(inteval, &(inteval->stack[((hsi*111375+5019426)*1+lsi)*1]), &(inteval->stack[((hsi*108900+4910526)*1+lsi)*1]), &(inteval->stack[((hsi*89100+4821426)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*4356+624945)*1+lsi)*1]), &(inteval->stack[((hsi*3630+629301)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+4832316)*1+lsi)*1]), &(inteval->stack[((hsi*5148+619797)*1+lsi)*1]), &(inteval->stack[((hsi*4356+624945)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+4845384)*1+lsi)*1]), &(inteval->stack[((hsi*13068+4832316)*1+lsi)*1]), &(inteval->stack[((hsi*10890+4821426)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+4867164)*1+lsi)*1]), &(inteval->stack[((hsi*6006+613791)*1+lsi)*1]), &(inteval->stack[((hsi*5148+619797)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+4882608)*1+lsi)*1]), &(inteval->stack[((hsi*15444+4867164)*1+lsi)*1]), &(inteval->stack[((hsi*13068+4832316)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+4908744)*1+lsi)*1]), &(inteval->stack[((hsi*26136+4882608)*1+lsi)*1]), &(inteval->stack[((hsi*21780+4845384)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+4945044)*1+lsi)*1]), &(inteval->stack[((hsi*6930+606861)*1+lsi)*1]), &(inteval->stack[((hsi*6006+613791)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+4963062)*1+lsi)*1]), &(inteval->stack[((hsi*18018+4945044)*1+lsi)*1]), &(inteval->stack[((hsi*15444+4867164)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+635901)*1+lsi)*1]), &(inteval->stack[((hsi*30888+4963062)*1+lsi)*1]), &(inteval->stack[((hsi*26136+4882608)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*43560+635901)*1+lsi)*1]), &(inteval->stack[((hsi*36300+4908744)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+4867164)*1+lsi)*1]), &(inteval->stack[((hsi*7920+598941)*1+lsi)*1]), &(inteval->stack[((hsi*6930+606861)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+5185251)*1+lsi)*1]), &(inteval->stack[((hsi*20790+4867164)*1+lsi)*1]), &(inteval->stack[((hsi*18018+4945044)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+5221287)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5185251)*1+lsi)*1]), &(inteval->stack[((hsi*30888+4963062)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+4945044)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5221287)*1+lsi)*1]), &(inteval->stack[((hsi*43560+635901)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+5272767)*1+lsi)*1]), &(inteval->stack[((hsi*65340+4945044)*1+lsi)*1]), &(inteval->stack[((hsi*54450+5130801)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+635901)*1+lsi)*1]), &(inteval->stack[((hsi*8976+589965)*1+lsi)*1]), &(inteval->stack[((hsi*7920+598941)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+5348997)*1+lsi)*1]), &(inteval->stack[((hsi*23760+635901)*1+lsi)*1]), &(inteval->stack[((hsi*20790+4867164)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+5390577)*1+lsi)*1]), &(inteval->stack[((hsi*41580+5348997)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5185251)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+5450637)*1+lsi)*1]), &(inteval->stack[((hsi*60060+5390577)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5221287)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+5527857)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5450637)*1+lsi)*1]), &(inteval->stack[((hsi*65340+4945044)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+5619333)*1+lsi)*1]), &(inteval->stack[((hsi*91476+5527857)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5272767)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+5185251)*1+lsi)*1]), &(inteval->stack[((hsi*3630+629301)*1+lsi)*1]), &(inteval->stack[((hsi*2970+632931)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+5194161)*1+lsi)*1]), &(inteval->stack[((hsi*10890+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*8910+5185251)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+4945044)*1+lsi)*1]), &(inteval->stack[((hsi*21780+4845384)*1+lsi)*1]), &(inteval->stack[((hsi*17820+5194161)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+5185251)*1+lsi)*1]), &(inteval->stack[((hsi*36300+4908744)*1+lsi)*1]), &(inteval->stack[((hsi*29700+4945044)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*54450+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*44550+5185251)*1+lsi)*1]),66);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*83160+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5272767)*1+lsi)*1]), &(inteval->stack[((hsi*62370+4821426)*1+lsi)*1]),66);
HRRPart1bra0ket0lk(inteval, &(inteval->stack[((hsi*106920+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*101640+5619333)*1+lsi)*1]), &(inteval->stack[((hsi*83160+5130801)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*10098+579867)*1+lsi)*1]), &(inteval->stack[((hsi*8976+589965)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+5157729)*1+lsi)*1]), &(inteval->stack[((hsi*26928+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*23760+635901)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+5205249)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5157729)*1+lsi)*1]), &(inteval->stack[((hsi*41580+5348997)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+5274549)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5205249)*1+lsi)*1]), &(inteval->stack[((hsi*60060+5390577)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5274549)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5450637)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+5238909)*1+lsi)*1]), &(inteval->stack[((hsi*108108+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*91476+5527857)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+5360877)*1+lsi)*1]), &(inteval->stack[((hsi*121968+5238909)*1+lsi)*1]), &(inteval->stack[((hsi*101640+5619333)*1+lsi)*1]),66);
HRRPart1bra0ket0ll(inteval, &(inteval->stack[((hsi*133650+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*130680+5360877)*1+lsi)*1]), &(inteval->stack[((hsi*106920+4821426)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*334125+5264451)*1+lsi)*1]), &(inteval->stack[((hsi*133650+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*111375+5019426)*1+lsi)*1]),2025);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*5148+566919)*1+lsi)*1]), &(inteval->stack[((hsi*4290+572067)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+4834296)*1+lsi)*1]), &(inteval->stack[((hsi*6084+560835)*1+lsi)*1]), &(inteval->stack[((hsi*5148+566919)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+4849740)*1+lsi)*1]), &(inteval->stack[((hsi*15444+4834296)*1+lsi)*1]), &(inteval->stack[((hsi*12870+4821426)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+4875480)*1+lsi)*1]), &(inteval->stack[((hsi*7098+553737)*1+lsi)*1]), &(inteval->stack[((hsi*6084+560835)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+4893732)*1+lsi)*1]), &(inteval->stack[((hsi*18252+4875480)*1+lsi)*1]), &(inteval->stack[((hsi*15444+4834296)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+579867)*1+lsi)*1]), &(inteval->stack[((hsi*30888+4893732)*1+lsi)*1]), &(inteval->stack[((hsi*25740+4849740)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+4924620)*1+lsi)*1]), &(inteval->stack[((hsi*8190+545547)*1+lsi)*1]), &(inteval->stack[((hsi*7098+553737)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+4945914)*1+lsi)*1]), &(inteval->stack[((hsi*21294+4924620)*1+lsi)*1]), &(inteval->stack[((hsi*18252+4875480)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+622767)*1+lsi)*1]), &(inteval->stack[((hsi*36504+4945914)*1+lsi)*1]), &(inteval->stack[((hsi*30888+4893732)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*51480+622767)*1+lsi)*1]), &(inteval->stack[((hsi*42900+579867)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+4875480)*1+lsi)*1]), &(inteval->stack[((hsi*9360+536187)*1+lsi)*1]), &(inteval->stack[((hsi*8190+545547)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+5662926)*1+lsi)*1]), &(inteval->stack[((hsi*24570+4875480)*1+lsi)*1]), &(inteval->stack[((hsi*21294+4924620)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+5705514)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5662926)*1+lsi)*1]), &(inteval->stack[((hsi*36504+4945914)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+4900050)*1+lsi)*1]), &(inteval->stack[((hsi*60840+5705514)*1+lsi)*1]), &(inteval->stack[((hsi*51480+622767)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+5766354)*1+lsi)*1]), &(inteval->stack[((hsi*77220+4900050)*1+lsi)*1]), &(inteval->stack[((hsi*64350+5598576)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+622767)*1+lsi)*1]), &(inteval->stack[((hsi*10608+525579)*1+lsi)*1]), &(inteval->stack[((hsi*9360+536187)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+5856444)*1+lsi)*1]), &(inteval->stack[((hsi*28080+622767)*1+lsi)*1]), &(inteval->stack[((hsi*24570+4875480)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+5905584)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5856444)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5662926)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+5976564)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5905584)*1+lsi)*1]), &(inteval->stack[((hsi*60840+5705514)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+6067824)*1+lsi)*1]), &(inteval->stack[((hsi*91260+5976564)*1+lsi)*1]), &(inteval->stack[((hsi*77220+4900050)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+4875480)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6067824)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5766354)*1+lsi)*1]),78);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+5662926)*1+lsi)*1]), &(inteval->stack[((hsi*4290+572067)*1+lsi)*1]), &(inteval->stack[((hsi*3510+576357)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+5673456)*1+lsi)*1]), &(inteval->stack[((hsi*12870+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*10530+5662926)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+5694516)*1+lsi)*1]), &(inteval->stack[((hsi*25740+4849740)*1+lsi)*1]), &(inteval->stack[((hsi*21060+5673456)*1+lsi)*1]),78);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*42900+579867)*1+lsi)*1]), &(inteval->stack[((hsi*35100+5694516)*1+lsi)*1]),78);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*73710+5662926)*1+lsi)*1]), &(inteval->stack[((hsi*64350+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*52650+4821426)*1+lsi)*1]),78);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*98280+6175932)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5766354)*1+lsi)*1]), &(inteval->stack[((hsi*73710+5662926)*1+lsi)*1]),78);
HRRPart1bra0ket0lk(inteval, &(inteval->stack[((hsi*126360+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*120120+4875480)*1+lsi)*1]), &(inteval->stack[((hsi*98280+6175932)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+5724936)*1+lsi)*1]), &(inteval->stack[((hsi*11934+513645)*1+lsi)*1]), &(inteval->stack[((hsi*10608+525579)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+513645)*1+lsi)*1]), &(inteval->stack[((hsi*31824+5724936)*1+lsi)*1]), &(inteval->stack[((hsi*28080+622767)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+5724936)*1+lsi)*1]), &(inteval->stack[((hsi*56160+513645)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5856444)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+513645)*1+lsi)*1]), &(inteval->stack[((hsi*81900+5724936)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5905584)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+5724936)*1+lsi)*1]), &(inteval->stack[((hsi*106470+513645)*1+lsi)*1]), &(inteval->stack[((hsi*91260+5976564)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+5852700)*1+lsi)*1]), &(inteval->stack[((hsi*127764+5724936)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6067824)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+513645)*1+lsi)*1]), &(inteval->stack[((hsi*144144+5852700)*1+lsi)*1]), &(inteval->stack[((hsi*120120+4875480)*1+lsi)*1]),78);
HRRPart1bra0ket0ll(inteval, &(inteval->stack[((hsi*157950+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*154440+513645)*1+lsi)*1]), &(inteval->stack[((hsi*126360+5598576)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*400950+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*157950+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*133650+5130801)*1+lsi)*1]),2025);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*668250+5999526)*1+lsi)*1]), &(inteval->stack[((hsi*400950+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*334125+5264451)*1+lsi)*1]),2025);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+513645)*1+lsi)*1]), &(inteval->stack[((hsi*6006+498539)*1+lsi)*1]), &(inteval->stack[((hsi*5005+504545)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+528660)*1+lsi)*1]), &(inteval->stack[((hsi*7098+491441)*1+lsi)*1]), &(inteval->stack[((hsi*6006+498539)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+546678)*1+lsi)*1]), &(inteval->stack[((hsi*18018+528660)*1+lsi)*1]), &(inteval->stack[((hsi*15015+513645)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*8281+483160)*1+lsi)*1]), &(inteval->stack[((hsi*7098+491441)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+5152095)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*18018+528660)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+576708)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5152095)*1+lsi)*1]), &(inteval->stack[((hsi*30030+546678)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+5188131)*1+lsi)*1]), &(inteval->stack[((hsi*9555+473605)*1+lsi)*1]), &(inteval->stack[((hsi*8281+483160)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+626758)*1+lsi)*1]), &(inteval->stack[((hsi*24843+5188131)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5130801)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*42588+626758)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5152095)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+6727836)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*50050+576708)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*10920+462685)*1+lsi)*1]), &(inteval->stack[((hsi*9555+473605)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+5212974)*1+lsi)*1]), &(inteval->stack[((hsi*28665+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*24843+5188131)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+6802911)*1+lsi)*1]), &(inteval->stack[((hsi*49686+5212974)*1+lsi)*1]), &(inteval->stack[((hsi*42588+626758)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+6873891)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6802911)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6667776)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+6963981)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6873891)*1+lsi)*1]), &(inteval->stack[((hsi*75075+6727836)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*12376+450309)*1+lsi)*1]), &(inteval->stack[((hsi*10920+462685)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+7069086)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*28665+5130801)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+7126416)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7069086)*1+lsi)*1]), &(inteval->stack[((hsi*49686+5212974)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7126416)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6802911)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+7209226)*1+lsi)*1]), &(inteval->stack[((hsi*106470+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6873891)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+6802911)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7209226)*1+lsi)*1]), &(inteval->stack[((hsi*105105+6963981)*1+lsi)*1]),91);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+626758)*1+lsi)*1]), &(inteval->stack[((hsi*5005+504545)*1+lsi)*1]), &(inteval->stack[((hsi*4095+509550)*1+lsi)*1]),91);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+462685)*1+lsi)*1]), &(inteval->stack[((hsi*15015+513645)*1+lsi)*1]), &(inteval->stack[((hsi*12285+626758)*1+lsi)*1]),91);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*40950+487255)*1+lsi)*1]), &(inteval->stack[((hsi*30030+546678)*1+lsi)*1]), &(inteval->stack[((hsi*24570+462685)*1+lsi)*1]),91);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*61425+7335352)*1+lsi)*1]), &(inteval->stack[((hsi*50050+576708)*1+lsi)*1]), &(inteval->stack[((hsi*40950+487255)*1+lsi)*1]),91);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*85995+462685)*1+lsi)*1]), &(inteval->stack[((hsi*75075+6727836)*1+lsi)*1]), &(inteval->stack[((hsi*61425+7335352)*1+lsi)*1]),91);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*114660+548680)*1+lsi)*1]), &(inteval->stack[((hsi*105105+6963981)*1+lsi)*1]), &(inteval->stack[((hsi*85995+462685)*1+lsi)*1]),91);
HRRPart1bra0ket0lk(inteval, &(inteval->stack[((hsi*147420+7335352)*1+lsi)*1]), &(inteval->stack[((hsi*140140+6802911)*1+lsi)*1]), &(inteval->stack[((hsi*114660+548680)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+462685)*1+lsi)*1]), &(inteval->stack[((hsi*13923+436386)*1+lsi)*1]), &(inteval->stack[((hsi*12376+450309)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+499813)*1+lsi)*1]), &(inteval->stack[((hsi*37128+462685)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6667776)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*65520+499813)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7069086)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+436386)*1+lsi)*1]), &(inteval->stack[((hsi*95550+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7126416)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+6943051)*1+lsi)*1]), &(inteval->stack[((hsi*124215+436386)*1+lsi)*1]), &(inteval->stack[((hsi*106470+5130801)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+436386)*1+lsi)*1]), &(inteval->stack[((hsi*149058+6943051)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7209226)*1+lsi)*1]),91);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+6943051)*1+lsi)*1]), &(inteval->stack[((hsi*168168+436386)*1+lsi)*1]), &(inteval->stack[((hsi*140140+6802911)*1+lsi)*1]),91);
HRRPart1bra0ket0ll(inteval, &(inteval->stack[((hsi*184275+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*180180+6943051)*1+lsi)*1]), &(inteval->stack[((hsi*147420+7335352)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*473850+6852051)*1+lsi)*1]), &(inteval->stack[((hsi*184275+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*157950+4821426)*1+lsi)*1]),2025);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*801900+7325901)*1+lsi)*1]), &(inteval->stack[((hsi*473850+6852051)*1+lsi)*1]), &(inteval->stack[((hsi*400950+5598576)*1+lsi)*1]),2025);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*1113750+8127801)*1+lsi)*1]), &(inteval->stack[((hsi*801900+7325901)*1+lsi)*1]), &(inteval->stack[((hsi*668250+5999526)*1+lsi)*1]),2025);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*6930+418956)*1+lsi)*1]), &(inteval->stack[((hsi*5775+425886)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+5615901)*1+lsi)*1]), &(inteval->stack[((hsi*8190+410766)*1+lsi)*1]), &(inteval->stack[((hsi*6930+418956)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+5636691)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5615901)*1+lsi)*1]), &(inteval->stack[((hsi*17325+5598576)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+5671341)*1+lsi)*1]), &(inteval->stack[((hsi*9555+401211)*1+lsi)*1]), &(inteval->stack[((hsi*8190+410766)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+5695911)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5671341)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5615901)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+5737491)*1+lsi)*1]), &(inteval->stack[((hsi*41580+5695911)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5636691)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+436386)*1+lsi)*1]), &(inteval->stack[((hsi*11025+390186)*1+lsi)*1]), &(inteval->stack[((hsi*9555+401211)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+465051)*1+lsi)*1]), &(inteval->stack[((hsi*28665+436386)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5671341)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+5795241)*1+lsi)*1]), &(inteval->stack[((hsi*49140+465051)*1+lsi)*1]), &(inteval->stack[((hsi*41580+5695911)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5795241)*1+lsi)*1]), &(inteval->stack[((hsi*57750+5737491)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+514191)*1+lsi)*1]), &(inteval->stack[((hsi*12600+377586)*1+lsi)*1]), &(inteval->stack[((hsi*11025+390186)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+547266)*1+lsi)*1]), &(inteval->stack[((hsi*33075+514191)*1+lsi)*1]), &(inteval->stack[((hsi*28665+436386)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+5864541)*1+lsi)*1]), &(inteval->stack[((hsi*57330+547266)*1+lsi)*1]), &(inteval->stack[((hsi*49140+465051)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*81900+5864541)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5795241)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+9241551)*1+lsi)*1]), &(inteval->stack[((hsi*103950+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*86625+4821426)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+4908051)*1+lsi)*1]), &(inteval->stack[((hsi*14280+363306)*1+lsi)*1]), &(inteval->stack[((hsi*12600+377586)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+5671341)*1+lsi)*1]), &(inteval->stack[((hsi*37800+4908051)*1+lsi)*1]), &(inteval->stack[((hsi*33075+514191)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+436386)*1+lsi)*1]), &(inteval->stack[((hsi*66150+5671341)*1+lsi)*1]), &(inteval->stack[((hsi*57330+547266)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+531936)*1+lsi)*1]), &(inteval->stack[((hsi*95550+436386)*1+lsi)*1]), &(inteval->stack[((hsi*81900+5864541)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+5795241)*1+lsi)*1]), &(inteval->stack[((hsi*122850+531936)*1+lsi)*1]), &(inteval->stack[((hsi*103950+5130801)*1+lsi)*1]),105);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+9362826)*1+lsi)*1]), &(inteval->stack[((hsi*145530+5795241)*1+lsi)*1]), &(inteval->stack[((hsi*121275+9241551)*1+lsi)*1]),105);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*14175+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*5775+425886)*1+lsi)*1]), &(inteval->stack[((hsi*4725+431661)*1+lsi)*1]),105);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*28350+5144976)*1+lsi)*1]), &(inteval->stack[((hsi*17325+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*14175+5130801)*1+lsi)*1]),105);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*47250+5173326)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5636691)*1+lsi)*1]), &(inteval->stack[((hsi*28350+5144976)*1+lsi)*1]),105);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*70875+4945851)*1+lsi)*1]), &(inteval->stack[((hsi*57750+5737491)*1+lsi)*1]), &(inteval->stack[((hsi*47250+5173326)*1+lsi)*1]),105);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*99225+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*86625+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*70875+4945851)*1+lsi)*1]),105);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*132300+9524526)*1+lsi)*1]), &(inteval->stack[((hsi*121275+9241551)*1+lsi)*1]), &(inteval->stack[((hsi*99225+5130801)*1+lsi)*1]),105);
HRRPart1bra0ket0lk(inteval, &(inteval->stack[((hsi*170100+9656826)*1+lsi)*1]), &(inteval->stack[((hsi*161700+9362826)*1+lsi)*1]), &(inteval->stack[((hsi*132300+9524526)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*16065+347241)*1+lsi)*1]), &(inteval->stack[((hsi*14280+363306)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+9524526)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5130801)*1+lsi)*1]), &(inteval->stack[((hsi*37800+4908051)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*75600+9524526)*1+lsi)*1]), &(inteval->stack[((hsi*66150+5671341)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*110250+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*95550+436386)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*143325+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*122850+531936)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+347241)*1+lsi)*1]), &(inteval->stack[((hsi*171990+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*145530+5795241)*1+lsi)*1]),105);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*194040+347241)*1+lsi)*1]), &(inteval->stack[((hsi*161700+9362826)*1+lsi)*1]),105);
HRRPart1bra0ket0ll(inteval, &(inteval->stack[((hsi*212625+9241551)*1+lsi)*1]), &(inteval->stack[((hsi*207900+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*170100+9656826)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*552825+9454176)*1+lsi)*1]), &(inteval->stack[((hsi*212625+9241551)*1+lsi)*1]), &(inteval->stack[((hsi*184275+6667776)*1+lsi)*1]),2025);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*947700+10007001)*1+lsi)*1]), &(inteval->stack[((hsi*552825+9454176)*1+lsi)*1]), &(inteval->stack[((hsi*473850+6852051)*1+lsi)*1]),2025);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1336500+10954701)*1+lsi)*1]), &(inteval->stack[((hsi*947700+10007001)*1+lsi)*1]), &(inteval->stack[((hsi*801900+7325901)*1+lsi)*1]),2025);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*1670625+12291201)*1+lsi)*1]), &(inteval->stack[((hsi*1336500+10954701)*1+lsi)*1]), &(inteval->stack[((hsi*1113750+8127801)*1+lsi)*1]),2025);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*7920+327321)*1+lsi)*1]), &(inteval->stack[((hsi*6600+335241)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+6687576)*1+lsi)*1]), &(inteval->stack[((hsi*9360+317961)*1+lsi)*1]), &(inteval->stack[((hsi*7920+327321)*1+lsi)*1]),120);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*39600+6711336)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6687576)*1+lsi)*1]), &(inteval->stack[((hsi*19800+6667776)*1+lsi)*1]),120);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+6750936)*1+lsi)*1]), &(inteval->stack[((hsi*10920+307041)*1+lsi)*1]), &(inteval->stack[((hsi*9360+317961)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+6779016)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6750936)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6687576)*1+lsi)*1]),120);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+6826536)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6779016)*1+lsi)*1]), &(inteval->stack[((hsi*39600+6711336)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+6892536)*1+lsi)*1]), &(inteval->stack[((hsi*12600+294441)*1+lsi)*1]), &(inteval->stack[((hsi*10920+307041)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+6925296)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6892536)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6750936)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+6981456)*1+lsi)*1]), &(inteval->stack[((hsi*56160+6925296)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6779016)*1+lsi)*1]),120);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+7060656)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6981456)*1+lsi)*1]), &(inteval->stack[((hsi*66000+6826536)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+7159656)*1+lsi)*1]), &(inteval->stack[((hsi*14400+280041)*1+lsi)*1]), &(inteval->stack[((hsi*12600+294441)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+7197456)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7159656)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6892536)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+7262976)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7197456)*1+lsi)*1]), &(inteval->stack[((hsi*56160+6925296)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+7356576)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7262976)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6981456)*1+lsi)*1]),120);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*138600+7475376)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7356576)*1+lsi)*1]), &(inteval->stack[((hsi*99000+7060656)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+7613976)*1+lsi)*1]), &(inteval->stack[((hsi*16320+263721)*1+lsi)*1]), &(inteval->stack[((hsi*14400+280041)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+6750936)*1+lsi)*1]), &(inteval->stack[((hsi*43200+7613976)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7159656)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+7657176)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6750936)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7197456)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7657176)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7262976)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+7766376)*1+lsi)*1]), &(inteval->stack[((hsi*140400+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7356576)*1+lsi)*1]),120);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*184800+347241)*1+lsi)*1]), &(inteval->stack[((hsi*166320+7766376)*1+lsi)*1]), &(inteval->stack[((hsi*138600+7475376)*1+lsi)*1]),120);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*16200+7159656)*1+lsi)*1]), &(inteval->stack[((hsi*6600+335241)*1+lsi)*1]), &(inteval->stack[((hsi*5400+341841)*1+lsi)*1]),120);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*32400+7175856)*1+lsi)*1]), &(inteval->stack[((hsi*19800+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*16200+7159656)*1+lsi)*1]),120);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*54000+7208256)*1+lsi)*1]), &(inteval->stack[((hsi*39600+6711336)*1+lsi)*1]), &(inteval->stack[((hsi*32400+7175856)*1+lsi)*1]),120);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*81000+5738976)*1+lsi)*1]), &(inteval->stack[((hsi*66000+6826536)*1+lsi)*1]), &(inteval->stack[((hsi*54000+7208256)*1+lsi)*1]),120);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*113400+7159656)*1+lsi)*1]), &(inteval->stack[((hsi*99000+7060656)*1+lsi)*1]), &(inteval->stack[((hsi*81000+5738976)*1+lsi)*1]),120);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*151200+6826536)*1+lsi)*1]), &(inteval->stack[((hsi*138600+7475376)*1+lsi)*1]), &(inteval->stack[((hsi*113400+7159656)*1+lsi)*1]),120);
HRRPart1bra0ket0lk(inteval, &(inteval->stack[((hsi*194400+6977736)*1+lsi)*1]), &(inteval->stack[((hsi*184800+347241)*1+lsi)*1]), &(inteval->stack[((hsi*151200+6826536)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+7172136)*1+lsi)*1]), &(inteval->stack[((hsi*18360+245361)*1+lsi)*1]), &(inteval->stack[((hsi*16320+263721)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+7221096)*1+lsi)*1]), &(inteval->stack[((hsi*48960+7172136)*1+lsi)*1]), &(inteval->stack[((hsi*43200+7613976)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+7307496)*1+lsi)*1]), &(inteval->stack[((hsi*86400+7221096)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6750936)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*126000+7307496)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7657176)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+7172136)*1+lsi)*1]), &(inteval->stack[((hsi*163800+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*140400+5598576)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*196560+7172136)*1+lsi)*1]), &(inteval->stack[((hsi*166320+7766376)*1+lsi)*1]),120);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*237600+7172136)*1+lsi)*1]), &(inteval->stack[((hsi*221760+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*184800+347241)*1+lsi)*1]),120);
HRRPart1bra0ket0ll(inteval, &(inteval->stack[((hsi*243000+7409736)*1+lsi)*1]), &(inteval->stack[((hsi*237600+7172136)*1+lsi)*1]), &(inteval->stack[((hsi*194400+6977736)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*637875+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*243000+7409736)*1+lsi)*1]), &(inteval->stack[((hsi*212625+9241551)*1+lsi)*1]),2025);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1105650+13961826)*1+lsi)*1]), &(inteval->stack[((hsi*637875+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*552825+9454176)*1+lsi)*1]),2025);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*1579500+15067476)*1+lsi)*1]), &(inteval->stack[((hsi*1105650+13961826)*1+lsi)*1]), &(inteval->stack[((hsi*947700+10007001)*1+lsi)*1]),2025);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*2004750+16646976)*1+lsi)*1]), &(inteval->stack[((hsi*1579500+15067476)*1+lsi)*1]), &(inteval->stack[((hsi*1336500+10954701)*1+lsi)*1]),2025);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*2338875+9241551)*1+lsi)*1]), &(inteval->stack[((hsi*2004750+16646976)*1+lsi)*1]), &(inteval->stack[((hsi*1670625+12291201)*1+lsi)*1]),2025);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*22440+11580426)*1+lsi)*1]), &(inteval->stack[((hsi*8976+222785)*1+lsi)*1]), &(inteval->stack[((hsi*7480+231761)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+11602866)*1+lsi)*1]), &(inteval->stack[((hsi*10608+212177)*1+lsi)*1]), &(inteval->stack[((hsi*8976+222785)*1+lsi)*1]),136);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*44880+11629794)*1+lsi)*1]), &(inteval->stack[((hsi*26928+11602866)*1+lsi)*1]), &(inteval->stack[((hsi*22440+11580426)*1+lsi)*1]),136);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+11674674)*1+lsi)*1]), &(inteval->stack[((hsi*12376+199801)*1+lsi)*1]), &(inteval->stack[((hsi*10608+212177)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+11706498)*1+lsi)*1]), &(inteval->stack[((hsi*31824+11674674)*1+lsi)*1]), &(inteval->stack[((hsi*26928+11602866)*1+lsi)*1]),136);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*74800+11760354)*1+lsi)*1]), &(inteval->stack[((hsi*53856+11706498)*1+lsi)*1]), &(inteval->stack[((hsi*44880+11629794)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+7652736)*1+lsi)*1]), &(inteval->stack[((hsi*14280+185521)*1+lsi)*1]), &(inteval->stack[((hsi*12376+199801)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+11835154)*1+lsi)*1]), &(inteval->stack[((hsi*37128+7652736)*1+lsi)*1]), &(inteval->stack[((hsi*31824+11674674)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+7689864)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11835154)*1+lsi)*1]), &(inteval->stack[((hsi*53856+11706498)*1+lsi)*1]),136);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*112200+245361)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7689864)*1+lsi)*1]), &(inteval->stack[((hsi*74800+11760354)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*16320+169201)*1+lsi)*1]), &(inteval->stack[((hsi*14280+185521)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+11898802)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*37128+7652736)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+5641416)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11898802)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11835154)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+7779624)*1+lsi)*1]), &(inteval->stack[((hsi*106080+5641416)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7689864)*1+lsi)*1]),136);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*157080+357561)*1+lsi)*1]), &(inteval->stack[((hsi*134640+7779624)*1+lsi)*1]), &(inteval->stack[((hsi*112200+245361)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+11973058)*1+lsi)*1]), &(inteval->stack[((hsi*18496+150705)*1+lsi)*1]), &(inteval->stack[((hsi*16320+169201)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+11674674)*1+lsi)*1]), &(inteval->stack[((hsi*48960+11973058)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5598576)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+12022018)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11674674)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11898802)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+5747496)*1+lsi)*1]), &(inteval->stack[((hsi*123760+12022018)*1+lsi)*1]), &(inteval->stack[((hsi*106080+5641416)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+7914264)*1+lsi)*1]), &(inteval->stack[((hsi*159120+5747496)*1+lsi)*1]), &(inteval->stack[((hsi*134640+7779624)*1+lsi)*1]),136);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*209440+7652736)*1+lsi)*1]), &(inteval->stack[((hsi*188496+7914264)*1+lsi)*1]), &(inteval->stack[((hsi*157080+357561)*1+lsi)*1]),136);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*18360+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*7480+231761)*1+lsi)*1]), &(inteval->stack[((hsi*6120+239241)*1+lsi)*1]),136);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*36720+4839786)*1+lsi)*1]), &(inteval->stack[((hsi*22440+11580426)*1+lsi)*1]), &(inteval->stack[((hsi*18360+4821426)*1+lsi)*1]),136);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*61200+514641)*1+lsi)*1]), &(inteval->stack[((hsi*44880+11629794)*1+lsi)*1]), &(inteval->stack[((hsi*36720+4839786)*1+lsi)*1]),136);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*91800+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*74800+11760354)*1+lsi)*1]), &(inteval->stack[((hsi*61200+514641)*1+lsi)*1]),136);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*128520+11760354)*1+lsi)*1]), &(inteval->stack[((hsi*112200+245361)*1+lsi)*1]), &(inteval->stack[((hsi*91800+4821426)*1+lsi)*1]),136);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*171360+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*157080+357561)*1+lsi)*1]), &(inteval->stack[((hsi*128520+11760354)*1+lsi)*1]),136);
HRRPart1bra0ket0lk(inteval, &(inteval->stack[((hsi*220320+169201)*1+lsi)*1]), &(inteval->stack[((hsi*209440+7652736)*1+lsi)*1]), &(inteval->stack[((hsi*171360+4821426)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+389521)*1+lsi)*1]), &(inteval->stack[((hsi*20808+129897)*1+lsi)*1]), &(inteval->stack[((hsi*18496+150705)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+445009)*1+lsi)*1]), &(inteval->stack[((hsi*55488+389521)*1+lsi)*1]), &(inteval->stack[((hsi*48960+11973058)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+11760354)*1+lsi)*1]), &(inteval->stack[((hsi*97920+445009)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11674674)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+389521)*1+lsi)*1]), &(inteval->stack[((hsi*142800+11760354)*1+lsi)*1]), &(inteval->stack[((hsi*123760+12022018)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+11580426)*1+lsi)*1]), &(inteval->stack[((hsi*185640+389521)*1+lsi)*1]), &(inteval->stack[((hsi*159120+5747496)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+11803194)*1+lsi)*1]), &(inteval->stack[((hsi*222768+11580426)*1+lsi)*1]), &(inteval->stack[((hsi*188496+7914264)*1+lsi)*1]),136);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*269280+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*251328+11803194)*1+lsi)*1]), &(inteval->stack[((hsi*209440+7652736)*1+lsi)*1]),136);
HRRPart1bra0ket0ll(inteval, &(inteval->stack[((hsi*275400+11580426)*1+lsi)*1]), &(inteval->stack[((hsi*269280+5598576)*1+lsi)*1]), &(inteval->stack[((hsi*220320+169201)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*729000+18651726)*1+lsi)*1]), &(inteval->stack[((hsi*275400+11580426)*1+lsi)*1]), &(inteval->stack[((hsi*243000+7409736)*1+lsi)*1]),2025);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*1275750+19380726)*1+lsi)*1]), &(inteval->stack[((hsi*729000+18651726)*1+lsi)*1]), &(inteval->stack[((hsi*637875+6667776)*1+lsi)*1]),2025);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*1842750+20656476)*1+lsi)*1]), &(inteval->stack[((hsi*1275750+19380726)*1+lsi)*1]), &(inteval->stack[((hsi*1105650+13961826)*1+lsi)*1]),2025);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*2369250+22499226)*1+lsi)*1]), &(inteval->stack[((hsi*1842750+20656476)*1+lsi)*1]), &(inteval->stack[((hsi*1579500+15067476)*1+lsi)*1]),2025);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*2806650+24868476)*1+lsi)*1]), &(inteval->stack[((hsi*2369250+22499226)*1+lsi)*1]), &(inteval->stack[((hsi*2004750+16646976)*1+lsi)*1]),2025);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*3118500+13961826)*1+lsi)*1]), &(inteval->stack[((hsi*2806650+24868476)*1+lsi)*1]), &(inteval->stack[((hsi*2338875+9241551)*1+lsi)*1]),2025);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+17080326)*1+lsi)*1]), &(inteval->stack[((hsi*2970+713331)*1+lsi)*1]), &(inteval->stack[((hsi*2475+716301)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+17087751)*1+lsi)*1]), &(inteval->stack[((hsi*3510+709821)*1+lsi)*1]), &(inteval->stack[((hsi*2970+713331)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+17096661)*1+lsi)*1]), &(inteval->stack[((hsi*8910+17087751)*1+lsi)*1]), &(inteval->stack[((hsi*7425+17080326)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+17111511)*1+lsi)*1]), &(inteval->stack[((hsi*4095+705726)*1+lsi)*1]), &(inteval->stack[((hsi*3510+709821)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+17122041)*1+lsi)*1]), &(inteval->stack[((hsi*10530+17111511)*1+lsi)*1]), &(inteval->stack[((hsi*8910+17087751)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+17139861)*1+lsi)*1]), &(inteval->stack[((hsi*17820+17122041)*1+lsi)*1]), &(inteval->stack[((hsi*14850+17096661)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+17164611)*1+lsi)*1]), &(inteval->stack[((hsi*4725+701001)*1+lsi)*1]), &(inteval->stack[((hsi*4095+705726)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+17176896)*1+lsi)*1]), &(inteval->stack[((hsi*12285+17164611)*1+lsi)*1]), &(inteval->stack[((hsi*10530+17111511)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*21060+17176896)*1+lsi)*1]), &(inteval->stack[((hsi*17820+17122041)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+17197956)*1+lsi)*1]), &(inteval->stack[((hsi*29700+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*24750+17139861)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+6697476)*1+lsi)*1]), &(inteval->stack[((hsi*5400+695601)*1+lsi)*1]), &(inteval->stack[((hsi*4725+701001)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+17235081)*1+lsi)*1]), &(inteval->stack[((hsi*14175+6697476)*1+lsi)*1]), &(inteval->stack[((hsi*12285+17164611)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+6711651)*1+lsi)*1]), &(inteval->stack[((hsi*24570+17235081)*1+lsi)*1]), &(inteval->stack[((hsi*21060+17176896)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+17259651)*1+lsi)*1]), &(inteval->stack[((hsi*35100+6711651)*1+lsi)*1]), &(inteval->stack[((hsi*29700+6667776)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+6746751)*1+lsi)*1]), &(inteval->stack[((hsi*44550+17259651)*1+lsi)*1]), &(inteval->stack[((hsi*37125+17197956)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+17304201)*1+lsi)*1]), &(inteval->stack[((hsi*6120+689481)*1+lsi)*1]), &(inteval->stack[((hsi*5400+695601)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+17111511)*1+lsi)*1]), &(inteval->stack[((hsi*16200+17304201)*1+lsi)*1]), &(inteval->stack[((hsi*14175+6697476)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+17320401)*1+lsi)*1]), &(inteval->stack[((hsi*28350+17111511)*1+lsi)*1]), &(inteval->stack[((hsi*24570+17235081)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+6798726)*1+lsi)*1]), &(inteval->stack[((hsi*40950+17320401)*1+lsi)*1]), &(inteval->stack[((hsi*35100+6711651)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+17361351)*1+lsi)*1]), &(inteval->stack[((hsi*52650+6798726)*1+lsi)*1]), &(inteval->stack[((hsi*44550+17259651)*1+lsi)*1]),45);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*69300+6851376)*1+lsi)*1]), &(inteval->stack[((hsi*62370+17361351)*1+lsi)*1]), &(inteval->stack[((hsi*51975+6746751)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+17423721)*1+lsi)*1]), &(inteval->stack[((hsi*2475+716301)*1+lsi)*1]), &(inteval->stack[((hsi*2025+718776)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+17429796)*1+lsi)*1]), &(inteval->stack[((hsi*7425+17080326)*1+lsi)*1]), &(inteval->stack[((hsi*6075+17423721)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+17441946)*1+lsi)*1]), &(inteval->stack[((hsi*14850+17096661)*1+lsi)*1]), &(inteval->stack[((hsi*12150+17429796)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+6920676)*1+lsi)*1]), &(inteval->stack[((hsi*24750+17139861)*1+lsi)*1]), &(inteval->stack[((hsi*20250+17441946)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+17423721)*1+lsi)*1]), &(inteval->stack[((hsi*37125+17197956)*1+lsi)*1]), &(inteval->stack[((hsi*30375+6920676)*1+lsi)*1]),45);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*56700+6920676)*1+lsi)*1]), &(inteval->stack[((hsi*51975+6746751)*1+lsi)*1]), &(inteval->stack[((hsi*42525+17423721)*1+lsi)*1]),45);
HRRPart1bra0ket0lk(inteval, &(inteval->stack[((hsi*72900+17423721)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6851376)*1+lsi)*1]), &(inteval->stack[((hsi*56700+6920676)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+6920676)*1+lsi)*1]), &(inteval->stack[((hsi*6885+682596)*1+lsi)*1]), &(inteval->stack[((hsi*6120+689481)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+6939036)*1+lsi)*1]), &(inteval->stack[((hsi*18360+6920676)*1+lsi)*1]), &(inteval->stack[((hsi*16200+17304201)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+6971436)*1+lsi)*1]), &(inteval->stack[((hsi*32400+6939036)*1+lsi)*1]), &(inteval->stack[((hsi*28350+17111511)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+17496621)*1+lsi)*1]), &(inteval->stack[((hsi*47250+6971436)*1+lsi)*1]), &(inteval->stack[((hsi*40950+17320401)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+6920676)*1+lsi)*1]), &(inteval->stack[((hsi*61425+17496621)*1+lsi)*1]), &(inteval->stack[((hsi*52650+6798726)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+17496621)*1+lsi)*1]), &(inteval->stack[((hsi*73710+6920676)*1+lsi)*1]), &(inteval->stack[((hsi*62370+17361351)*1+lsi)*1]),45);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*89100+6920676)*1+lsi)*1]), &(inteval->stack[((hsi*83160+17496621)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6851376)*1+lsi)*1]),45);
HRRPart1bra0ket0ll(inteval, &(inteval->stack[((hsi*91125+17496621)*1+lsi)*1]), &(inteval->stack[((hsi*89100+6920676)*1+lsi)*1]), &(inteval->stack[((hsi*72900+17423721)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*273375+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*111375+5019426)*1+lsi)*1]), &(inteval->stack[((hsi*91125+17496621)*1+lsi)*1]),2025);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*546750+17080326)*1+lsi)*1]), &(inteval->stack[((hsi*334125+5264451)*1+lsi)*1]), &(inteval->stack[((hsi*273375+6667776)*1+lsi)*1]),2025);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*911250+6667776)*1+lsi)*1]), &(inteval->stack[((hsi*668250+5999526)*1+lsi)*1]), &(inteval->stack[((hsi*546750+17080326)*1+lsi)*1]),2025);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*1366875+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*1113750+8127801)*1+lsi)*1]), &(inteval->stack[((hsi*911250+6667776)*1+lsi)*1]),2025);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*1913625+6188301)*1+lsi)*1]), &(inteval->stack[((hsi*1670625+12291201)*1+lsi)*1]), &(inteval->stack[((hsi*1366875+4821426)*1+lsi)*1]),2025);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*2551500+27675126)*1+lsi)*1]), &(inteval->stack[((hsi*2338875+9241551)*1+lsi)*1]), &(inteval->stack[((hsi*1913625+6188301)*1+lsi)*1]),2025);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*3280500+4821426)*1+lsi)*1]), &(inteval->stack[((hsi*3118500+13961826)*1+lsi)*1]), &(inteval->stack[((hsi*2551500+27675126)*1+lsi)*1]),2025);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*25245+8101926)*1+lsi)*1]), &(inteval->stack[((hsi*10098+104499)*1+lsi)*1]), &(inteval->stack[((hsi*8415+114597)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+8127171)*1+lsi)*1]), &(inteval->stack[((hsi*11934+92565)*1+lsi)*1]), &(inteval->stack[((hsi*10098+104499)*1+lsi)*1]),153);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*50490+8157465)*1+lsi)*1]), &(inteval->stack[((hsi*30294+8127171)*1+lsi)*1]), &(inteval->stack[((hsi*25245+8101926)*1+lsi)*1]),153);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+8207955)*1+lsi)*1]), &(inteval->stack[((hsi*13923+78642)*1+lsi)*1]), &(inteval->stack[((hsi*11934+92565)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+8243757)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8207955)*1+lsi)*1]), &(inteval->stack[((hsi*30294+8127171)*1+lsi)*1]),153);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*84150+8304345)*1+lsi)*1]), &(inteval->stack[((hsi*60588+8243757)*1+lsi)*1]), &(inteval->stack[((hsi*50490+8157465)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+8388495)*1+lsi)*1]), &(inteval->stack[((hsi*16065+62577)*1+lsi)*1]), &(inteval->stack[((hsi*13923+78642)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+8430264)*1+lsi)*1]), &(inteval->stack[((hsi*41769+8388495)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8207955)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+8501868)*1+lsi)*1]), &(inteval->stack[((hsi*71604+8430264)*1+lsi)*1]), &(inteval->stack[((hsi*60588+8243757)*1+lsi)*1]),153);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*126225+8602848)*1+lsi)*1]), &(inteval->stack[((hsi*100980+8501868)*1+lsi)*1]), &(inteval->stack[((hsi*84150+8304345)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+8729073)*1+lsi)*1]), &(inteval->stack[((hsi*18360+44217)*1+lsi)*1]), &(inteval->stack[((hsi*16065+62577)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+8777268)*1+lsi)*1]), &(inteval->stack[((hsi*48195+8729073)*1+lsi)*1]), &(inteval->stack[((hsi*41769+8388495)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+8860806)*1+lsi)*1]), &(inteval->stack[((hsi*83538+8777268)*1+lsi)*1]), &(inteval->stack[((hsi*71604+8430264)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+8980146)*1+lsi)*1]), &(inteval->stack[((hsi*119340+8860806)*1+lsi)*1]), &(inteval->stack[((hsi*100980+8501868)*1+lsi)*1]),153);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*176715+9131616)*1+lsi)*1]), &(inteval->stack[((hsi*151470+8980146)*1+lsi)*1]), &(inteval->stack[((hsi*126225+8602848)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+9308331)*1+lsi)*1]), &(inteval->stack[((hsi*20808+23409)*1+lsi)*1]), &(inteval->stack[((hsi*18360+44217)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+8207955)*1+lsi)*1]), &(inteval->stack[((hsi*55080+9308331)*1+lsi)*1]), &(inteval->stack[((hsi*48195+8729073)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+9363411)*1+lsi)*1]), &(inteval->stack[((hsi*96390+8207955)*1+lsi)*1]), &(inteval->stack[((hsi*83538+8777268)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+11855826)*1+lsi)*1]), &(inteval->stack[((hsi*139230+9363411)*1+lsi)*1]), &(inteval->stack[((hsi*119340+8860806)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+9502641)*1+lsi)*1]), &(inteval->stack[((hsi*179010+11855826)*1+lsi)*1]), &(inteval->stack[((hsi*151470+8980146)*1+lsi)*1]),153);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*235620+12034836)*1+lsi)*1]), &(inteval->stack[((hsi*212058+9502641)*1+lsi)*1]), &(inteval->stack[((hsi*176715+9131616)*1+lsi)*1]),153);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*20655+9714699)*1+lsi)*1]), &(inteval->stack[((hsi*8415+114597)*1+lsi)*1]), &(inteval->stack[((hsi*6885+123012)*1+lsi)*1]),153);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*41310+9735354)*1+lsi)*1]), &(inteval->stack[((hsi*25245+8101926)*1+lsi)*1]), &(inteval->stack[((hsi*20655+9714699)*1+lsi)*1]),153);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*68850+9776664)*1+lsi)*1]), &(inteval->stack[((hsi*50490+8157465)*1+lsi)*1]), &(inteval->stack[((hsi*41310+9735354)*1+lsi)*1]),153);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*103275+9845514)*1+lsi)*1]), &(inteval->stack[((hsi*84150+8304345)*1+lsi)*1]), &(inteval->stack[((hsi*68850+9776664)*1+lsi)*1]),153);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*144585+12270456)*1+lsi)*1]), &(inteval->stack[((hsi*126225+8602848)*1+lsi)*1]), &(inteval->stack[((hsi*103275+9845514)*1+lsi)*1]),153);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*192780+9714699)*1+lsi)*1]), &(inteval->stack[((hsi*176715+9131616)*1+lsi)*1]), &(inteval->stack[((hsi*144585+12270456)*1+lsi)*1]),153);
HRRPart1bra0ket0lk(inteval, &(inteval->stack[((hsi*247860+12270456)*1+lsi)*1]), &(inteval->stack[((hsi*235620+12034836)*1+lsi)*1]), &(inteval->stack[((hsi*192780+9714699)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+9714699)*1+lsi)*1]), &(inteval->stack[((hsi*23409+0)*1+lsi)*1]), &(inteval->stack[((hsi*20808+23409)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+9777123)*1+lsi)*1]), &(inteval->stack[((hsi*62424+9714699)*1+lsi)*1]), &(inteval->stack[((hsi*55080+9308331)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+9887283)*1+lsi)*1]), &(inteval->stack[((hsi*110160+9777123)*1+lsi)*1]), &(inteval->stack[((hsi*96390+8207955)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+17080326)*1+lsi)*1]), &(inteval->stack[((hsi*160650+9887283)*1+lsi)*1]), &(inteval->stack[((hsi*139230+9363411)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+9714699)*1+lsi)*1]), &(inteval->stack[((hsi*208845+17080326)*1+lsi)*1]), &(inteval->stack[((hsi*179010+11855826)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+9965313)*1+lsi)*1]), &(inteval->stack[((hsi*250614+9714699)*1+lsi)*1]), &(inteval->stack[((hsi*212058+9502641)*1+lsi)*1]),153);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*302940+8101926)*1+lsi)*1]), &(inteval->stack[((hsi*282744+9965313)*1+lsi)*1]), &(inteval->stack[((hsi*235620+12034836)*1+lsi)*1]),153);
HRRPart1bra0ket0ll(inteval, &(inteval->stack[((hsi*309825+8404866)*1+lsi)*1]), &(inteval->stack[((hsi*302940+8101926)*1+lsi)*1]), &(inteval->stack[((hsi*247860+12270456)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*826200+8714691)*1+lsi)*1]), &(inteval->stack[((hsi*309825+8404866)*1+lsi)*1]), &(inteval->stack[((hsi*275400+11580426)*1+lsi)*1]),2025);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*1458000+9540891)*1+lsi)*1]), &(inteval->stack[((hsi*826200+8714691)*1+lsi)*1]), &(inteval->stack[((hsi*729000+18651726)*1+lsi)*1]),2025);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*2126250+10998891)*1+lsi)*1]), &(inteval->stack[((hsi*1458000+9540891)*1+lsi)*1]), &(inteval->stack[((hsi*1275750+19380726)*1+lsi)*1]),2025);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*2764125+17080326)*1+lsi)*1]), &(inteval->stack[((hsi*2126250+10998891)*1+lsi)*1]), &(inteval->stack[((hsi*1842750+20656476)*1+lsi)*1]),2025);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*3316950+8101926)*1+lsi)*1]), &(inteval->stack[((hsi*2764125+17080326)*1+lsi)*1]), &(inteval->stack[((hsi*2369250+22499226)*1+lsi)*1]),2025);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*3742200+17080326)*1+lsi)*1]), &(inteval->stack[((hsi*3316950+8101926)*1+lsi)*1]), &(inteval->stack[((hsi*2806650+24868476)*1+lsi)*1]),2025);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*4009500+8101926)*1+lsi)*1]), &(inteval->stack[((hsi*3742200+17080326)*1+lsi)*1]), &(inteval->stack[((hsi*3118500+13961826)*1+lsi)*1]),2025);
HRRPart0bra0ket0ll(inteval, &(inteval->stack[((hsi*4100625+720801)*1+lsi)*1]), &(inteval->stack[((hsi*4009500+8101926)*1+lsi)*1]), &(inteval->stack[((hsi*3280500+4821426)*1+lsi)*1]),2025);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4100625+720801)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
