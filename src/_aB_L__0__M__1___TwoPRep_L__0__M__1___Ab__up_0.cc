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
#include <_aB_L__0__M__1___TwoPRep_L__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_L__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,989085)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_L__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*4290+925715)*1+lsi)*1]), &(inteval->stack[((hsi*3630+930005)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+7125600)*1+lsi)*1]), &(inteval->stack[((hsi*5005+920710)*1+lsi)*1]), &(inteval->stack[((hsi*4290+925715)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+7138470)*1+lsi)*1]), &(inteval->stack[((hsi*12870+7125600)*1+lsi)*1]), &(inteval->stack[((hsi*10890+7114710)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+7160250)*1+lsi)*1]), &(inteval->stack[((hsi*5775+914935)*1+lsi)*1]), &(inteval->stack[((hsi*5005+920710)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+7175265)*1+lsi)*1]), &(inteval->stack[((hsi*15015+7160250)*1+lsi)*1]), &(inteval->stack[((hsi*12870+7125600)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+7201005)*1+lsi)*1]), &(inteval->stack[((hsi*25740+7175265)*1+lsi)*1]), &(inteval->stack[((hsi*21780+7138470)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+7237305)*1+lsi)*1]), &(inteval->stack[((hsi*6600+908335)*1+lsi)*1]), &(inteval->stack[((hsi*5775+914935)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+7254630)*1+lsi)*1]), &(inteval->stack[((hsi*17325+7237305)*1+lsi)*1]), &(inteval->stack[((hsi*15015+7160250)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+7284660)*1+lsi)*1]), &(inteval->stack[((hsi*30030+7254630)*1+lsi)*1]), &(inteval->stack[((hsi*25740+7175265)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+7327560)*1+lsi)*1]), &(inteval->stack[((hsi*42900+7284660)*1+lsi)*1]), &(inteval->stack[((hsi*36300+7201005)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+7160250)*1+lsi)*1]), &(inteval->stack[((hsi*7480+900855)*1+lsi)*1]), &(inteval->stack[((hsi*6600+908335)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+7382010)*1+lsi)*1]), &(inteval->stack[((hsi*19800+7160250)*1+lsi)*1]), &(inteval->stack[((hsi*17325+7237305)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+7416660)*1+lsi)*1]), &(inteval->stack[((hsi*34650+7382010)*1+lsi)*1]), &(inteval->stack[((hsi*30030+7254630)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+7466710)*1+lsi)*1]), &(inteval->stack[((hsi*50050+7416660)*1+lsi)*1]), &(inteval->stack[((hsi*42900+7284660)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+7237305)*1+lsi)*1]), &(inteval->stack[((hsi*64350+7466710)*1+lsi)*1]), &(inteval->stack[((hsi*54450+7327560)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+7531060)*1+lsi)*1]), &(inteval->stack[((hsi*8415+892440)*1+lsi)*1]), &(inteval->stack[((hsi*7480+900855)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+7553500)*1+lsi)*1]), &(inteval->stack[((hsi*22440+7531060)*1+lsi)*1]), &(inteval->stack[((hsi*19800+7160250)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+7593100)*1+lsi)*1]), &(inteval->stack[((hsi*39600+7553500)*1+lsi)*1]), &(inteval->stack[((hsi*34650+7382010)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+7650850)*1+lsi)*1]), &(inteval->stack[((hsi*57750+7593100)*1+lsi)*1]), &(inteval->stack[((hsi*50050+7416660)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+7725925)*1+lsi)*1]), &(inteval->stack[((hsi*75075+7650850)*1+lsi)*1]), &(inteval->stack[((hsi*64350+7466710)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+7382010)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7725925)*1+lsi)*1]), &(inteval->stack[((hsi*76230+7237305)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+7483650)*1+lsi)*1]), &(inteval->stack[((hsi*9405+883035)*1+lsi)*1]), &(inteval->stack[((hsi*8415+892440)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+7816015)*1+lsi)*1]), &(inteval->stack[((hsi*25245+7483650)*1+lsi)*1]), &(inteval->stack[((hsi*22440+7531060)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+7860895)*1+lsi)*1]), &(inteval->stack[((hsi*44880+7816015)*1+lsi)*1]), &(inteval->stack[((hsi*39600+7553500)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+7926895)*1+lsi)*1]), &(inteval->stack[((hsi*66000+7860895)*1+lsi)*1]), &(inteval->stack[((hsi*57750+7593100)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+7508895)*1+lsi)*1]), &(inteval->stack[((hsi*86625+7926895)*1+lsi)*1]), &(inteval->stack[((hsi*75075+7650850)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+8013520)*1+lsi)*1]), &(inteval->stack[((hsi*105105+7508895)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7725925)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+7614000)*1+lsi)*1]), &(inteval->stack[((hsi*120120+8013520)*1+lsi)*1]), &(inteval->stack[((hsi*101640+7382010)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+7744680)*1+lsi)*1]), &(inteval->stack[((hsi*3630+930005)*1+lsi)*1]), &(inteval->stack[((hsi*3025+933635)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+7753755)*1+lsi)*1]), &(inteval->stack[((hsi*10890+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*9075+7744680)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+892440)*1+lsi)*1]), &(inteval->stack[((hsi*21780+7138470)*1+lsi)*1]), &(inteval->stack[((hsi*18150+7753755)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*36300+7201005)*1+lsi)*1]), &(inteval->stack[((hsi*30250+892440)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+7160085)*1+lsi)*1]), &(inteval->stack[((hsi*54450+7327560)*1+lsi)*1]), &(inteval->stack[((hsi*45375+7114710)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+8133640)*1+lsi)*1]), &(inteval->stack[((hsi*76230+7237305)*1+lsi)*1]), &(inteval->stack[((hsi*63525+7160085)*1+lsi)*1]),55);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*108900+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*101640+7382010)*1+lsi)*1]), &(inteval->stack[((hsi*84700+8133640)*1+lsi)*1]),55);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*136125+7223610)*1+lsi)*1]), &(inteval->stack[((hsi*130680+7614000)*1+lsi)*1]), &(inteval->stack[((hsi*108900+7114710)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+7359735)*1+lsi)*1]), &(inteval->stack[((hsi*10450+872585)*1+lsi)*1]), &(inteval->stack[((hsi*9405+883035)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*28215+7359735)*1+lsi)*1]), &(inteval->stack[((hsi*25245+7483650)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+7359735)*1+lsi)*1]), &(inteval->stack[((hsi*50490+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*44880+7816015)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+7744680)*1+lsi)*1]), &(inteval->stack[((hsi*74800+7359735)*1+lsi)*1]), &(inteval->stack[((hsi*66000+7860895)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+7359735)*1+lsi)*1]), &(inteval->stack[((hsi*99000+7744680)*1+lsi)*1]), &(inteval->stack[((hsi*86625+7926895)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+7744680)*1+lsi)*1]), &(inteval->stack[((hsi*121275+7359735)*1+lsi)*1]), &(inteval->stack[((hsi*105105+7508895)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+7359735)*1+lsi)*1]), &(inteval->stack[((hsi*140140+7744680)*1+lsi)*1]), &(inteval->stack[((hsi*120120+8013520)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+7744680)*1+lsi)*1]), &(inteval->stack[((hsi*154440+7359735)*1+lsi)*1]), &(inteval->stack[((hsi*130680+7614000)*1+lsi)*1]),55);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*166375+7359735)*1+lsi)*1]), &(inteval->stack[((hsi*163350+7744680)*1+lsi)*1]), &(inteval->stack[((hsi*136125+7223610)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*5148+859451)*1+lsi)*1]), &(inteval->stack[((hsi*4356+864599)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+7127778)*1+lsi)*1]), &(inteval->stack[((hsi*6006+853445)*1+lsi)*1]), &(inteval->stack[((hsi*5148+859451)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+7143222)*1+lsi)*1]), &(inteval->stack[((hsi*15444+7127778)*1+lsi)*1]), &(inteval->stack[((hsi*13068+7114710)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+7169358)*1+lsi)*1]), &(inteval->stack[((hsi*6930+846515)*1+lsi)*1]), &(inteval->stack[((hsi*6006+853445)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+7187376)*1+lsi)*1]), &(inteval->stack[((hsi*18018+7169358)*1+lsi)*1]), &(inteval->stack[((hsi*15444+7127778)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+7218264)*1+lsi)*1]), &(inteval->stack[((hsi*30888+7187376)*1+lsi)*1]), &(inteval->stack[((hsi*26136+7143222)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+7261824)*1+lsi)*1]), &(inteval->stack[((hsi*7920+838595)*1+lsi)*1]), &(inteval->stack[((hsi*6930+846515)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+7282614)*1+lsi)*1]), &(inteval->stack[((hsi*20790+7261824)*1+lsi)*1]), &(inteval->stack[((hsi*18018+7169358)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+872585)*1+lsi)*1]), &(inteval->stack[((hsi*36036+7282614)*1+lsi)*1]), &(inteval->stack[((hsi*30888+7187376)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*51480+872585)*1+lsi)*1]), &(inteval->stack[((hsi*43560+7218264)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+7169358)*1+lsi)*1]), &(inteval->stack[((hsi*8976+829619)*1+lsi)*1]), &(inteval->stack[((hsi*7920+838595)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+7591450)*1+lsi)*1]), &(inteval->stack[((hsi*23760+7169358)*1+lsi)*1]), &(inteval->stack[((hsi*20790+7261824)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+7633030)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7591450)*1+lsi)*1]), &(inteval->stack[((hsi*36036+7282614)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+7261824)*1+lsi)*1]), &(inteval->stack[((hsi*60060+7633030)*1+lsi)*1]), &(inteval->stack[((hsi*51480+872585)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+7693090)*1+lsi)*1]), &(inteval->stack[((hsi*77220+7261824)*1+lsi)*1]), &(inteval->stack[((hsi*65340+7526110)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+872585)*1+lsi)*1]), &(inteval->stack[((hsi*10098+819521)*1+lsi)*1]), &(inteval->stack[((hsi*8976+829619)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+7784566)*1+lsi)*1]), &(inteval->stack[((hsi*26928+872585)*1+lsi)*1]), &(inteval->stack[((hsi*23760+7169358)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+7832086)*1+lsi)*1]), &(inteval->stack[((hsi*47520+7784566)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7591450)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+7901386)*1+lsi)*1]), &(inteval->stack[((hsi*69300+7832086)*1+lsi)*1]), &(inteval->stack[((hsi*60060+7633030)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+7991476)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7901386)*1+lsi)*1]), &(inteval->stack[((hsi*77220+7261824)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+8099584)*1+lsi)*1]), &(inteval->stack[((hsi*108108+7991476)*1+lsi)*1]), &(inteval->stack[((hsi*91476+7693090)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+7591450)*1+lsi)*1]), &(inteval->stack[((hsi*11286+808235)*1+lsi)*1]), &(inteval->stack[((hsi*10098+819521)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+7261824)*1+lsi)*1]), &(inteval->stack[((hsi*30294+7591450)*1+lsi)*1]), &(inteval->stack[((hsi*26928+872585)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+8221552)*1+lsi)*1]), &(inteval->stack[((hsi*53856+7261824)*1+lsi)*1]), &(inteval->stack[((hsi*47520+7784566)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+8300752)*1+lsi)*1]), &(inteval->stack[((hsi*79200+8221552)*1+lsi)*1]), &(inteval->stack[((hsi*69300+7832086)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+8404702)*1+lsi)*1]), &(inteval->stack[((hsi*103950+8300752)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7901386)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+7784566)*1+lsi)*1]), &(inteval->stack[((hsi*126126+8404702)*1+lsi)*1]), &(inteval->stack[((hsi*108108+7991476)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+7928710)*1+lsi)*1]), &(inteval->stack[((hsi*144144+7784566)*1+lsi)*1]), &(inteval->stack[((hsi*121968+8099584)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+7621744)*1+lsi)*1]), &(inteval->stack[((hsi*4356+864599)*1+lsi)*1]), &(inteval->stack[((hsi*3630+868955)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+819521)*1+lsi)*1]), &(inteval->stack[((hsi*13068+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*10890+7621744)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+841301)*1+lsi)*1]), &(inteval->stack[((hsi*26136+7143222)*1+lsi)*1]), &(inteval->stack[((hsi*21780+819521)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*43560+7218264)*1+lsi)*1]), &(inteval->stack[((hsi*36300+841301)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+819521)*1+lsi)*1]), &(inteval->stack[((hsi*65340+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*54450+7114710)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*91476+7693090)*1+lsi)*1]), &(inteval->stack[((hsi*76230+819521)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+7621744)*1+lsi)*1]), &(inteval->stack[((hsi*121968+8099584)*1+lsi)*1]), &(inteval->stack[((hsi*101640+7114710)*1+lsi)*1]),66);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*163350+8530828)*1+lsi)*1]), &(inteval->stack[((hsi*156816+7928710)*1+lsi)*1]), &(inteval->stack[((hsi*130680+7621744)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+7621744)*1+lsi)*1]), &(inteval->stack[((hsi*12540+795695)*1+lsi)*1]), &(inteval->stack[((hsi*11286+808235)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*33858+7621744)*1+lsi)*1]), &(inteval->stack[((hsi*30294+7591450)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*60588+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*53856+7261824)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*79200+8221552)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*103950+8300752)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+8085526)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*126126+8404702)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+8253694)*1+lsi)*1]), &(inteval->stack[((hsi*168168+8085526)*1+lsi)*1]), &(inteval->stack[((hsi*144144+7784566)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8253694)*1+lsi)*1]), &(inteval->stack[((hsi*156816+7928710)*1+lsi)*1]),66);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*199650+7722130)*1+lsi)*1]), &(inteval->stack[((hsi*196020+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*163350+8530828)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*499125+7921780)*1+lsi)*1]), &(inteval->stack[((hsi*199650+7722130)*1+lsi)*1]), &(inteval->stack[((hsi*166375+7359735)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*6084+780173)*1+lsi)*1]), &(inteval->stack[((hsi*5148+786257)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+7130154)*1+lsi)*1]), &(inteval->stack[((hsi*7098+773075)*1+lsi)*1]), &(inteval->stack[((hsi*6084+780173)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+7148406)*1+lsi)*1]), &(inteval->stack[((hsi*18252+7130154)*1+lsi)*1]), &(inteval->stack[((hsi*15444+7114710)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*8190+764885)*1+lsi)*1]), &(inteval->stack[((hsi*7098+773075)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+7179294)*1+lsi)*1]), &(inteval->stack[((hsi*21294+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*18252+7130154)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+7547404)*1+lsi)*1]), &(inteval->stack[((hsi*36504+7179294)*1+lsi)*1]), &(inteval->stack[((hsi*30888+7148406)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+7215798)*1+lsi)*1]), &(inteval->stack[((hsi*9360+755525)*1+lsi)*1]), &(inteval->stack[((hsi*8190+764885)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+795695)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7215798)*1+lsi)*1]), &(inteval->stack[((hsi*21294+7526110)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+7598884)*1+lsi)*1]), &(inteval->stack[((hsi*42588+795695)*1+lsi)*1]), &(inteval->stack[((hsi*36504+7179294)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+7240368)*1+lsi)*1]), &(inteval->stack[((hsi*60840+7598884)*1+lsi)*1]), &(inteval->stack[((hsi*51480+7547404)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+838283)*1+lsi)*1]), &(inteval->stack[((hsi*10608+744917)*1+lsi)*1]), &(inteval->stack[((hsi*9360+755525)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+866363)*1+lsi)*1]), &(inteval->stack[((hsi*28080+838283)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7215798)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*49140+866363)*1+lsi)*1]), &(inteval->stack[((hsi*42588+795695)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+8491885)*1+lsi)*1]), &(inteval->stack[((hsi*70980+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*60840+7598884)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+7598884)*1+lsi)*1]), &(inteval->stack[((hsi*91260+8491885)*1+lsi)*1]), &(inteval->stack[((hsi*77220+7240368)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+7179294)*1+lsi)*1]), &(inteval->stack[((hsi*11934+732983)*1+lsi)*1]), &(inteval->stack[((hsi*10608+744917)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+8583145)*1+lsi)*1]), &(inteval->stack[((hsi*31824+7179294)*1+lsi)*1]), &(inteval->stack[((hsi*28080+838283)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+8639305)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8583145)*1+lsi)*1]), &(inteval->stack[((hsi*49140+866363)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+795695)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8639305)*1+lsi)*1]), &(inteval->stack[((hsi*70980+8420905)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+8721205)*1+lsi)*1]), &(inteval->stack[((hsi*106470+795695)*1+lsi)*1]), &(inteval->stack[((hsi*91260+8491885)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*127764+8721205)*1+lsi)*1]), &(inteval->stack[((hsi*108108+7598884)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+7317588)*1+lsi)*1]), &(inteval->stack[((hsi*13338+719645)*1+lsi)*1]), &(inteval->stack[((hsi*11934+732983)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+8848969)*1+lsi)*1]), &(inteval->stack[((hsi*35802+7317588)*1+lsi)*1]), &(inteval->stack[((hsi*31824+7179294)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+8912617)*1+lsi)*1]), &(inteval->stack[((hsi*63648+8848969)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8583145)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+9006217)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8912617)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8639305)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+8565049)*1+lsi)*1]), &(inteval->stack[((hsi*122850+9006217)*1+lsi)*1]), &(inteval->stack[((hsi*106470+795695)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+9129067)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8565049)*1+lsi)*1]), &(inteval->stack[((hsi*127764+8721205)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+9299419)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9129067)*1+lsi)*1]), &(inteval->stack[((hsi*144144+8420905)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+795695)*1+lsi)*1]), &(inteval->stack[((hsi*5148+786257)*1+lsi)*1]), &(inteval->stack[((hsi*4290+791405)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+8714107)*1+lsi)*1]), &(inteval->stack[((hsi*15444+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*12870+795695)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+732983)*1+lsi)*1]), &(inteval->stack[((hsi*30888+7148406)*1+lsi)*1]), &(inteval->stack[((hsi*25740+8714107)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+775883)*1+lsi)*1]), &(inteval->stack[((hsi*51480+7547404)*1+lsi)*1]), &(inteval->stack[((hsi*42900+732983)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+8714107)*1+lsi)*1]), &(inteval->stack[((hsi*77220+7240368)*1+lsi)*1]), &(inteval->stack[((hsi*64350+775883)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+732983)*1+lsi)*1]), &(inteval->stack[((hsi*108108+7598884)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8714107)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*144144+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*120120+732983)*1+lsi)*1]),78);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*193050+732983)*1+lsi)*1]), &(inteval->stack[((hsi*185328+9299419)*1+lsi)*1]), &(inteval->stack[((hsi*154440+7114710)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*14820+704825)*1+lsi)*1]), &(inteval->stack[((hsi*13338+719645)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*40014+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*35802+7317588)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*71604+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*63648+8848969)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+8714107)*1+lsi)*1]), &(inteval->stack[((hsi*106080+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8912617)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*140400+8714107)*1+lsi)*1]), &(inteval->stack[((hsi*122850+9006217)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+8714107)*1+lsi)*1]), &(inteval->stack[((hsi*171990+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8565049)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8714107)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9129067)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+8639929)*1+lsi)*1]), &(inteval->stack[((hsi*219024+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*185328+9299419)*1+lsi)*1]),78);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*235950+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*231660+8639929)*1+lsi)*1]), &(inteval->stack[((hsi*193050+732983)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*598950+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*235950+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*199650+7722130)*1+lsi)*1]),3025);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*998250+9019855)*1+lsi)*1]), &(inteval->stack[((hsi*598950+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*499125+7921780)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*7098+686716)*1+lsi)*1]), &(inteval->stack[((hsi*6006+693814)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+7544128)*1+lsi)*1]), &(inteval->stack[((hsi*8281+678435)*1+lsi)*1]), &(inteval->stack[((hsi*7098+686716)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+7565422)*1+lsi)*1]), &(inteval->stack[((hsi*21294+7544128)*1+lsi)*1]), &(inteval->stack[((hsi*18018+7526110)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+7601458)*1+lsi)*1]), &(inteval->stack[((hsi*9555+668880)*1+lsi)*1]), &(inteval->stack[((hsi*8281+678435)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+7626301)*1+lsi)*1]), &(inteval->stack[((hsi*24843+7601458)*1+lsi)*1]), &(inteval->stack[((hsi*21294+7544128)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+7668889)*1+lsi)*1]), &(inteval->stack[((hsi*42588+7626301)*1+lsi)*1]), &(inteval->stack[((hsi*36036+7565422)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+704825)*1+lsi)*1]), &(inteval->stack[((hsi*10920+657960)*1+lsi)*1]), &(inteval->stack[((hsi*9555+668880)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+733490)*1+lsi)*1]), &(inteval->stack[((hsi*28665+704825)*1+lsi)*1]), &(inteval->stack[((hsi*24843+7601458)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+7728949)*1+lsi)*1]), &(inteval->stack[((hsi*49686+733490)*1+lsi)*1]), &(inteval->stack[((hsi*42588+7626301)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+783176)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7728949)*1+lsi)*1]), &(inteval->stack[((hsi*60060+7668889)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+7799929)*1+lsi)*1]), &(inteval->stack[((hsi*12376+645584)*1+lsi)*1]), &(inteval->stack[((hsi*10920+657960)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+7832689)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7799929)*1+lsi)*1]), &(inteval->stack[((hsi*28665+704825)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7832689)*1+lsi)*1]), &(inteval->stack[((hsi*49686+733490)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+10100915)*1+lsi)*1]), &(inteval->stack[((hsi*82810+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7728949)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+10207385)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10100915)*1+lsi)*1]), &(inteval->stack[((hsi*90090+783176)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+704825)*1+lsi)*1]), &(inteval->stack[((hsi*13923+631661)*1+lsi)*1]), &(inteval->stack[((hsi*12376+645584)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+7728949)*1+lsi)*1]), &(inteval->stack[((hsi*37128+704825)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7799929)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+10333511)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7728949)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7832689)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+7794469)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10333511)*1+lsi)*1]), &(inteval->stack[((hsi*82810+10018105)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+10429061)*1+lsi)*1]), &(inteval->stack[((hsi*124215+7794469)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10100915)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10429061)*1+lsi)*1]), &(inteval->stack[((hsi*126126+10207385)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+7601458)*1+lsi)*1]), &(inteval->stack[((hsi*15561+616100)*1+lsi)*1]), &(inteval->stack[((hsi*13923+631661)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+10578119)*1+lsi)*1]), &(inteval->stack[((hsi*41769+7601458)*1+lsi)*1]), &(inteval->stack[((hsi*37128+704825)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+10652375)*1+lsi)*1]), &(inteval->stack[((hsi*74256+10578119)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7728949)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+10761575)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10652375)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10333511)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+10904900)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10761575)*1+lsi)*1]), &(inteval->stack[((hsi*124215+7794469)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+11078801)*1+lsi)*1]), &(inteval->stack[((hsi*173901+10904900)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10429061)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+10333511)*1+lsi)*1]), &(inteval->stack[((hsi*198744+11078801)*1+lsi)*1]), &(inteval->stack[((hsi*168168+10018105)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+7728949)*1+lsi)*1]), &(inteval->stack[((hsi*6006+693814)*1+lsi)*1]), &(inteval->stack[((hsi*5005+699820)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+7743964)*1+lsi)*1]), &(inteval->stack[((hsi*18018+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*15015+7728949)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+631661)*1+lsi)*1]), &(inteval->stack[((hsi*36036+7565422)*1+lsi)*1]), &(inteval->stack[((hsi*30030+7743964)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+7728949)*1+lsi)*1]), &(inteval->stack[((hsi*60060+7668889)*1+lsi)*1]), &(inteval->stack[((hsi*50050+631661)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+631661)*1+lsi)*1]), &(inteval->stack[((hsi*90090+783176)*1+lsi)*1]), &(inteval->stack[((hsi*75075+7728949)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+7643227)*1+lsi)*1]), &(inteval->stack[((hsi*126126+10207385)*1+lsi)*1]), &(inteval->stack[((hsi*105105+631661)*1+lsi)*1]),91);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+631661)*1+lsi)*1]), &(inteval->stack[((hsi*168168+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*140140+7643227)*1+lsi)*1]),91);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*225225+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*216216+10333511)*1+lsi)*1]), &(inteval->stack[((hsi*180180+631661)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+631661)*1+lsi)*1]), &(inteval->stack[((hsi*17290+598810)*1+lsi)*1]), &(inteval->stack[((hsi*15561+616100)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+7643227)*1+lsi)*1]), &(inteval->stack[((hsi*46683+631661)*1+lsi)*1]), &(inteval->stack[((hsi*41769+7601458)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+598810)*1+lsi)*1]), &(inteval->stack[((hsi*83538+7643227)*1+lsi)*1]), &(inteval->stack[((hsi*74256+10578119)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*123760+598810)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10652375)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+598810)*1+lsi)*1]), &(inteval->stack[((hsi*163800+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10761575)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*200655+598810)*1+lsi)*1]), &(inteval->stack[((hsi*173901+10904900)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+10549727)*1+lsi)*1]), &(inteval->stack[((hsi*231868+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*198744+11078801)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10549727)*1+lsi)*1]), &(inteval->stack[((hsi*216216+10333511)*1+lsi)*1]),91);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*275275+598810)*1+lsi)*1]), &(inteval->stack[((hsi*270270+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*225225+10018105)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*707850+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*275275+598810)*1+lsi)*1]), &(inteval->stack[((hsi*235950+7114710)*1+lsi)*1]),3025);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1197900+10725955)*1+lsi)*1]), &(inteval->stack[((hsi*707850+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*598950+8420905)*1+lsi)*1]),3025);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*1663750+11923855)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+10725955)*1+lsi)*1]), &(inteval->stack[((hsi*998250+9019855)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*8190+577915)*1+lsi)*1]), &(inteval->stack[((hsi*6930+586105)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+8441695)*1+lsi)*1]), &(inteval->stack[((hsi*9555+568360)*1+lsi)*1]), &(inteval->stack[((hsi*8190+577915)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+8466265)*1+lsi)*1]), &(inteval->stack[((hsi*24570+8441695)*1+lsi)*1]), &(inteval->stack[((hsi*20790+8420905)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+8507845)*1+lsi)*1]), &(inteval->stack[((hsi*11025+557335)*1+lsi)*1]), &(inteval->stack[((hsi*9555+568360)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+8536510)*1+lsi)*1]), &(inteval->stack[((hsi*28665+8507845)*1+lsi)*1]), &(inteval->stack[((hsi*24570+8441695)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+8585650)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8536510)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8466265)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*12600+544735)*1+lsi)*1]), &(inteval->stack[((hsi*11025+557335)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+8654950)*1+lsi)*1]), &(inteval->stack[((hsi*33075+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*28665+8507845)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+7559185)*1+lsi)*1]), &(inteval->stack[((hsi*57330+8654950)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8536510)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+8712280)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7559185)*1+lsi)*1]), &(inteval->stack[((hsi*69300+8585650)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+7641085)*1+lsi)*1]), &(inteval->stack[((hsi*14280+530455)*1+lsi)*1]), &(inteval->stack[((hsi*12600+544735)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7641085)*1+lsi)*1]), &(inteval->stack[((hsi*33075+7526110)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+7678885)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*57330+8654950)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+8816230)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7678885)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7559185)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+7180860)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8816230)*1+lsi)*1]), &(inteval->stack[((hsi*103950+8712280)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+7774435)*1+lsi)*1]), &(inteval->stack[((hsi*16065+514390)*1+lsi)*1]), &(inteval->stack[((hsi*14280+530455)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*42840+7774435)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7641085)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+13587605)*1+lsi)*1]), &(inteval->stack[((hsi*75600+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7114710)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+13697855)*1+lsi)*1]), &(inteval->stack[((hsi*110250+13587605)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7678885)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+7601710)*1+lsi)*1]), &(inteval->stack[((hsi*143325+13697855)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8816230)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+8816230)*1+lsi)*1]), &(inteval->stack[((hsi*171990+7601710)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7180860)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+7817275)*1+lsi)*1]), &(inteval->stack[((hsi*17955+496435)*1+lsi)*1]), &(inteval->stack[((hsi*16065+514390)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+13841180)*1+lsi)*1]), &(inteval->stack[((hsi*48195+7817275)*1+lsi)*1]), &(inteval->stack[((hsi*42840+7774435)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+13926860)*1+lsi)*1]), &(inteval->stack[((hsi*85680+13841180)*1+lsi)*1]), &(inteval->stack[((hsi*75600+7526110)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+14052860)*1+lsi)*1]), &(inteval->stack[((hsi*126000+13926860)*1+lsi)*1]), &(inteval->stack[((hsi*110250+13587605)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+14218235)*1+lsi)*1]), &(inteval->stack[((hsi*165375+14052860)*1+lsi)*1]), &(inteval->stack[((hsi*143325+13697855)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+13587605)*1+lsi)*1]), &(inteval->stack[((hsi*200655+14218235)*1+lsi)*1]), &(inteval->stack[((hsi*171990+7601710)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13587605)*1+lsi)*1]), &(inteval->stack[((hsi*194040+8816230)*1+lsi)*1]),105);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+8507845)*1+lsi)*1]), &(inteval->stack[((hsi*6930+586105)*1+lsi)*1]), &(inteval->stack[((hsi*5775+593035)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+514390)*1+lsi)*1]), &(inteval->stack[((hsi*20790+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*17325+8507845)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+8507845)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8466265)*1+lsi)*1]), &(inteval->stack[((hsi*34650+514390)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*69300+8585650)*1+lsi)*1]), &(inteval->stack[((hsi*57750+8507845)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+8507530)*1+lsi)*1]), &(inteval->stack[((hsi*103950+8712280)*1+lsi)*1]), &(inteval->stack[((hsi*86625+8420905)*1+lsi)*1]),105);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+8628805)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7180860)*1+lsi)*1]), &(inteval->stack[((hsi*121275+8507530)*1+lsi)*1]),105);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*194040+8816230)*1+lsi)*1]), &(inteval->stack[((hsi*161700+8628805)*1+lsi)*1]),105);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*259875+8628805)*1+lsi)*1]), &(inteval->stack[((hsi*249480+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*207900+8420905)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*19950+476485)*1+lsi)*1]), &(inteval->stack[((hsi*17955+496435)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*53865+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*48195+7817275)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*96390+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*85680+13841180)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*142800+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*126000+13926860)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*189000+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*165375+14052860)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+13816925)*1+lsi)*1]), &(inteval->stack[((hsi*231525+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*200655+14218235)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+14084465)*1+lsi)*1]), &(inteval->stack[((hsi*267540+13816925)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13587605)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+13587605)*1+lsi)*1]), &(inteval->stack[((hsi*294840+14084465)*1+lsi)*1]), &(inteval->stack[((hsi*249480+7526110)*1+lsi)*1]),105);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*317625+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*311850+13587605)*1+lsi)*1]), &(inteval->stack[((hsi*259875+8628805)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*825825+13587605)*1+lsi)*1]), &(inteval->stack[((hsi*317625+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*275275+598810)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1415700+14413430)*1+lsi)*1]), &(inteval->stack[((hsi*825825+13587605)*1+lsi)*1]), &(inteval->stack[((hsi*707850+10018105)*1+lsi)*1]),3025);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1996500+15829130)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+14413430)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+10725955)*1+lsi)*1]),3025);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*2495625+17825630)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+15829130)*1+lsi)*1]), &(inteval->stack[((hsi*1663750+11923855)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*9360+452605)*1+lsi)*1]), &(inteval->stack[((hsi*7920+461965)*1+lsi)*1]),120);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+10041865)*1+lsi)*1]), &(inteval->stack[((hsi*10920+441685)*1+lsi)*1]), &(inteval->stack[((hsi*9360+452605)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+10069945)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10041865)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10018105)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+10117465)*1+lsi)*1]), &(inteval->stack[((hsi*12600+429085)*1+lsi)*1]), &(inteval->stack[((hsi*10920+441685)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+10150225)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10117465)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10041865)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+10206385)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10150225)*1+lsi)*1]), &(inteval->stack[((hsi*47520+10069945)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+10285585)*1+lsi)*1]), &(inteval->stack[((hsi*14400+414685)*1+lsi)*1]), &(inteval->stack[((hsi*12600+429085)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+10323385)*1+lsi)*1]), &(inteval->stack[((hsi*37800+10285585)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10117465)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+10388905)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10323385)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10150225)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+10482505)*1+lsi)*1]), &(inteval->stack[((hsi*93600+10388905)*1+lsi)*1]), &(inteval->stack[((hsi*79200+10206385)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+10601305)*1+lsi)*1]), &(inteval->stack[((hsi*16320+398365)*1+lsi)*1]), &(inteval->stack[((hsi*14400+414685)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+10644505)*1+lsi)*1]), &(inteval->stack[((hsi*43200+10601305)*1+lsi)*1]), &(inteval->stack[((hsi*37800+10285585)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+10720105)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10644505)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10323385)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+10829305)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10720105)*1+lsi)*1]), &(inteval->stack[((hsi*93600+10388905)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+10969705)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10829305)*1+lsi)*1]), &(inteval->stack[((hsi*118800+10482505)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+11136025)*1+lsi)*1]), &(inteval->stack[((hsi*18360+380005)*1+lsi)*1]), &(inteval->stack[((hsi*16320+398365)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+11184985)*1+lsi)*1]), &(inteval->stack[((hsi*48960+11136025)*1+lsi)*1]), &(inteval->stack[((hsi*43200+10601305)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+11271385)*1+lsi)*1]), &(inteval->stack[((hsi*86400+11184985)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10644505)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11271385)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10720105)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+11397385)*1+lsi)*1]), &(inteval->stack[((hsi*163800+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10829305)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+476485)*1+lsi)*1]), &(inteval->stack[((hsi*196560+11397385)*1+lsi)*1]), &(inteval->stack[((hsi*166320+10969705)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+8584705)*1+lsi)*1]), &(inteval->stack[((hsi*20520+359485)*1+lsi)*1]), &(inteval->stack[((hsi*18360+380005)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+8639785)*1+lsi)*1]), &(inteval->stack[((hsi*55080+8584705)*1+lsi)*1]), &(inteval->stack[((hsi*48960+11136025)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+10601305)*1+lsi)*1]), &(inteval->stack[((hsi*97920+8639785)*1+lsi)*1]), &(inteval->stack[((hsi*86400+11184985)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+11593945)*1+lsi)*1]), &(inteval->stack[((hsi*144000+10601305)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11271385)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+8737705)*1+lsi)*1]), &(inteval->stack[((hsi*189000+11593945)*1+lsi)*1]), &(inteval->stack[((hsi*163800+8420905)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+20321255)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8737705)*1+lsi)*1]), &(inteval->stack[((hsi*196560+11397385)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+11136025)*1+lsi)*1]), &(inteval->stack[((hsi*262080+20321255)*1+lsi)*1]), &(inteval->stack[((hsi*221760+476485)*1+lsi)*1]),120);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*7920+461965)*1+lsi)*1]), &(inteval->stack[((hsi*6600+469885)*1+lsi)*1]),120);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*39600+698245)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*19800+7114710)*1+lsi)*1]),120);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*47520+10069945)*1+lsi)*1]), &(inteval->stack[((hsi*39600+698245)*1+lsi)*1]),120);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+698245)*1+lsi)*1]), &(inteval->stack[((hsi*79200+10206385)*1+lsi)*1]), &(inteval->stack[((hsi*66000+7114710)*1+lsi)*1]),120);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*138600+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*118800+10482505)*1+lsi)*1]), &(inteval->stack[((hsi*99000+698245)*1+lsi)*1]),120);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*184800+10156705)*1+lsi)*1]), &(inteval->stack[((hsi*166320+10969705)*1+lsi)*1]), &(inteval->stack[((hsi*138600+10018105)*1+lsi)*1]),120);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*237600+10745305)*1+lsi)*1]), &(inteval->stack[((hsi*221760+476485)*1+lsi)*1]), &(inteval->stack[((hsi*184800+10156705)*1+lsi)*1]),120);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*297000+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*285120+11136025)*1+lsi)*1]), &(inteval->stack[((hsi*237600+10745305)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+380005)*1+lsi)*1]), &(inteval->stack[((hsi*22800+336685)*1+lsi)*1]), &(inteval->stack[((hsi*20520+359485)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+441565)*1+lsi)*1]), &(inteval->stack[((hsi*61560+380005)*1+lsi)*1]), &(inteval->stack[((hsi*55080+8584705)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+10745305)*1+lsi)*1]), &(inteval->stack[((hsi*110160+441565)*1+lsi)*1]), &(inteval->stack[((hsi*97920+8639785)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+336685)*1+lsi)*1]), &(inteval->stack[((hsi*163200+10745305)*1+lsi)*1]), &(inteval->stack[((hsi*144000+10601305)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+10315105)*1+lsi)*1]), &(inteval->stack[((hsi*216000+336685)*1+lsi)*1]), &(inteval->stack[((hsi*189000+11593945)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+336685)*1+lsi)*1]), &(inteval->stack[((hsi*264600+10315105)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8737705)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+10315105)*1+lsi)*1]), &(inteval->stack[((hsi*305760+336685)*1+lsi)*1]), &(inteval->stack[((hsi*262080+20321255)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+336685)*1+lsi)*1]), &(inteval->stack[((hsi*336960+10315105)*1+lsi)*1]), &(inteval->stack[((hsi*285120+11136025)*1+lsi)*1]),120);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*363000+10315105)*1+lsi)*1]), &(inteval->stack[((hsi*356400+336685)*1+lsi)*1]), &(inteval->stack[((hsi*297000+10018105)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*952875+10678105)*1+lsi)*1]), &(inteval->stack[((hsi*363000+10315105)*1+lsi)*1]), &(inteval->stack[((hsi*317625+7526110)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1651650+20321255)*1+lsi)*1]), &(inteval->stack[((hsi*952875+10678105)*1+lsi)*1]), &(inteval->stack[((hsi*825825+13587605)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2359500+21972905)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+20321255)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+14413430)*1+lsi)*1]),3025);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*2994750+24332405)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+21972905)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+15829130)*1+lsi)*1]),3025);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*3493875+13587605)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+24332405)*1+lsi)*1]), &(inteval->stack[((hsi*2495625+17825630)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+17081480)*1+lsi)*1]), &(inteval->stack[((hsi*10608+309621)*1+lsi)*1]), &(inteval->stack[((hsi*8976+320229)*1+lsi)*1]),136);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+17108408)*1+lsi)*1]), &(inteval->stack[((hsi*12376+297245)*1+lsi)*1]), &(inteval->stack[((hsi*10608+309621)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+17140232)*1+lsi)*1]), &(inteval->stack[((hsi*31824+17108408)*1+lsi)*1]), &(inteval->stack[((hsi*26928+17081480)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+17194088)*1+lsi)*1]), &(inteval->stack[((hsi*14280+282965)*1+lsi)*1]), &(inteval->stack[((hsi*12376+297245)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+336685)*1+lsi)*1]), &(inteval->stack[((hsi*37128+17194088)*1+lsi)*1]), &(inteval->stack[((hsi*31824+17108408)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*63648+336685)*1+lsi)*1]), &(inteval->stack[((hsi*53856+17140232)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+17231216)*1+lsi)*1]), &(inteval->stack[((hsi*16320+266645)*1+lsi)*1]), &(inteval->stack[((hsi*14280+282965)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+17274056)*1+lsi)*1]), &(inteval->stack[((hsi*42840+17231216)*1+lsi)*1]), &(inteval->stack[((hsi*37128+17194088)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+400333)*1+lsi)*1]), &(inteval->stack[((hsi*74256+17274056)*1+lsi)*1]), &(inteval->stack[((hsi*63648+336685)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+8510665)*1+lsi)*1]), &(inteval->stack[((hsi*106080+400333)*1+lsi)*1]), &(inteval->stack[((hsi*89760+8420905)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+17348312)*1+lsi)*1]), &(inteval->stack[((hsi*18496+248149)*1+lsi)*1]), &(inteval->stack[((hsi*16320+266645)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+506413)*1+lsi)*1]), &(inteval->stack[((hsi*48960+17348312)*1+lsi)*1]), &(inteval->stack[((hsi*42840+17231216)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+17397272)*1+lsi)*1]), &(inteval->stack[((hsi*85680+506413)*1+lsi)*1]), &(inteval->stack[((hsi*74256+17274056)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*123760+17397272)*1+lsi)*1]), &(inteval->stack[((hsi*106080+400333)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+8645305)*1+lsi)*1]), &(inteval->stack[((hsi*159120+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*134640+8510665)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+592093)*1+lsi)*1]), &(inteval->stack[((hsi*20808+227341)*1+lsi)*1]), &(inteval->stack[((hsi*18496+248149)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+17521032)*1+lsi)*1]), &(inteval->stack[((hsi*55488+592093)*1+lsi)*1]), &(inteval->stack[((hsi*48960+17348312)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*97920+17521032)*1+lsi)*1]), &(inteval->stack[((hsi*85680+506413)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+11630980)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*123760+17397272)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+17194088)*1+lsi)*1]), &(inteval->stack[((hsi*185640+11630980)*1+lsi)*1]), &(inteval->stack[((hsi*159120+7526110)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*222768+17194088)*1+lsi)*1]), &(inteval->stack[((hsi*188496+8645305)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+647581)*1+lsi)*1]), &(inteval->stack[((hsi*23256+204085)*1+lsi)*1]), &(inteval->stack[((hsi*20808+227341)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+336685)*1+lsi)*1]), &(inteval->stack[((hsi*62424+647581)*1+lsi)*1]), &(inteval->stack[((hsi*55488+592093)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*110976+336685)*1+lsi)*1]), &(inteval->stack[((hsi*97920+17521032)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+17416856)*1+lsi)*1]), &(inteval->stack[((hsi*163200+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10018105)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*214200+17416856)*1+lsi)*1]), &(inteval->stack[((hsi*185640+11630980)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+27327155)*1+lsi)*1]), &(inteval->stack[((hsi*259896+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*222768+17194088)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+27624179)*1+lsi)*1]), &(inteval->stack[((hsi*297024+27327155)*1+lsi)*1]), &(inteval->stack[((hsi*251328+7526110)*1+lsi)*1]),136);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*22440+11630980)*1+lsi)*1]), &(inteval->stack[((hsi*8976+320229)*1+lsi)*1]), &(inteval->stack[((hsi*7480+329205)*1+lsi)*1]),136);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*44880+11653420)*1+lsi)*1]), &(inteval->stack[((hsi*26928+17081480)*1+lsi)*1]), &(inteval->stack[((hsi*22440+11630980)*1+lsi)*1]),136);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*74800+710005)*1+lsi)*1]), &(inteval->stack[((hsi*53856+17140232)*1+lsi)*1]), &(inteval->stack[((hsi*44880+11653420)*1+lsi)*1]),136);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*112200+17081480)*1+lsi)*1]), &(inteval->stack[((hsi*89760+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*74800+710005)*1+lsi)*1]),136);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*157080+11630980)*1+lsi)*1]), &(inteval->stack[((hsi*134640+8510665)*1+lsi)*1]), &(inteval->stack[((hsi*112200+17081480)*1+lsi)*1]),136);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*209440+17081480)*1+lsi)*1]), &(inteval->stack[((hsi*188496+8645305)*1+lsi)*1]), &(inteval->stack[((hsi*157080+11630980)*1+lsi)*1]),136);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*269280+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*251328+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*209440+17081480)*1+lsi)*1]),136);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*336600+7526110)*1+lsi)*1]), &(inteval->stack[((hsi*323136+27624179)*1+lsi)*1]), &(inteval->stack[((hsi*269280+8420905)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*25840+178245)*1+lsi)*1]), &(inteval->stack[((hsi*23256+204085)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+8490673)*1+lsi)*1]), &(inteval->stack[((hsi*69768+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*62424+647581)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+447661)*1+lsi)*1]), &(inteval->stack[((hsi*124848+8490673)*1+lsi)*1]), &(inteval->stack[((hsi*110976+336685)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*184960+447661)*1+lsi)*1]), &(inteval->stack[((hsi*163200+7114710)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+178245)*1+lsi)*1]), &(inteval->stack[((hsi*244800+8420905)*1+lsi)*1]), &(inteval->stack[((hsi*214200+17416856)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+17081480)*1+lsi)*1]), &(inteval->stack[((hsi*299880+178245)*1+lsi)*1]), &(inteval->stack[((hsi*259896+10018105)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+178245)*1+lsi)*1]), &(inteval->stack[((hsi*346528+17081480)*1+lsi)*1]), &(inteval->stack[((hsi*297024+27327155)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+17081480)*1+lsi)*1]), &(inteval->stack[((hsi*381888+178245)*1+lsi)*1]), &(inteval->stack[((hsi*323136+27624179)*1+lsi)*1]),136);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*411400+178245)*1+lsi)*1]), &(inteval->stack[((hsi*403920+17081480)*1+lsi)*1]), &(inteval->stack[((hsi*336600+7526110)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1089000+27327155)*1+lsi)*1]), &(inteval->stack[((hsi*411400+178245)*1+lsi)*1]), &(inteval->stack[((hsi*363000+10315105)*1+lsi)*1]),3025);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*1905750+28416155)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+27327155)*1+lsi)*1]), &(inteval->stack[((hsi*952875+10678105)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*2752750+30321905)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+28416155)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+20321255)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*3539250+33074655)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+30321905)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+21972905)*1+lsi)*1]),3025);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*4192650+36613905)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+33074655)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+24332405)*1+lsi)*1]),3025);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*4658500+20321255)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+36613905)*1+lsi)*1]), &(inteval->stack[((hsi*3493875+13587605)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+24979755)*1+lsi)*1]), &(inteval->stack[((hsi*3510+980130)*1+lsi)*1]), &(inteval->stack[((hsi*2970+983640)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+24988665)*1+lsi)*1]), &(inteval->stack[((hsi*4095+976035)*1+lsi)*1]), &(inteval->stack[((hsi*3510+980130)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+24999195)*1+lsi)*1]), &(inteval->stack[((hsi*10530+24988665)*1+lsi)*1]), &(inteval->stack[((hsi*8910+24979755)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+25017015)*1+lsi)*1]), &(inteval->stack[((hsi*4725+971310)*1+lsi)*1]), &(inteval->stack[((hsi*4095+976035)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+25029300)*1+lsi)*1]), &(inteval->stack[((hsi*12285+25017015)*1+lsi)*1]), &(inteval->stack[((hsi*10530+24988665)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+25050360)*1+lsi)*1]), &(inteval->stack[((hsi*21060+25029300)*1+lsi)*1]), &(inteval->stack[((hsi*17820+24999195)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+25080060)*1+lsi)*1]), &(inteval->stack[((hsi*5400+965910)*1+lsi)*1]), &(inteval->stack[((hsi*4725+971310)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+25094235)*1+lsi)*1]), &(inteval->stack[((hsi*14175+25080060)*1+lsi)*1]), &(inteval->stack[((hsi*12285+25017015)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+25118805)*1+lsi)*1]), &(inteval->stack[((hsi*24570+25094235)*1+lsi)*1]), &(inteval->stack[((hsi*21060+25029300)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+25153905)*1+lsi)*1]), &(inteval->stack[((hsi*35100+25118805)*1+lsi)*1]), &(inteval->stack[((hsi*29700+25050360)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+25198455)*1+lsi)*1]), &(inteval->stack[((hsi*6120+959790)*1+lsi)*1]), &(inteval->stack[((hsi*5400+965910)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+25214655)*1+lsi)*1]), &(inteval->stack[((hsi*16200+25198455)*1+lsi)*1]), &(inteval->stack[((hsi*14175+25080060)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+25243005)*1+lsi)*1]), &(inteval->stack[((hsi*28350+25214655)*1+lsi)*1]), &(inteval->stack[((hsi*24570+25094235)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+25283955)*1+lsi)*1]), &(inteval->stack[((hsi*40950+25243005)*1+lsi)*1]), &(inteval->stack[((hsi*35100+25118805)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+25336605)*1+lsi)*1]), &(inteval->stack[((hsi*52650+25283955)*1+lsi)*1]), &(inteval->stack[((hsi*44550+25153905)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+25398975)*1+lsi)*1]), &(inteval->stack[((hsi*6885+952905)*1+lsi)*1]), &(inteval->stack[((hsi*6120+959790)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+25417335)*1+lsi)*1]), &(inteval->stack[((hsi*18360+25398975)*1+lsi)*1]), &(inteval->stack[((hsi*16200+25198455)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*32400+25417335)*1+lsi)*1]), &(inteval->stack[((hsi*28350+25214655)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+25449735)*1+lsi)*1]), &(inteval->stack[((hsi*47250+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*40950+25243005)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+10065355)*1+lsi)*1]), &(inteval->stack[((hsi*61425+25449735)*1+lsi)*1]), &(inteval->stack[((hsi*52650+25283955)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+25511160)*1+lsi)*1]), &(inteval->stack[((hsi*73710+10065355)*1+lsi)*1]), &(inteval->stack[((hsi*62370+25336605)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+10139065)*1+lsi)*1]), &(inteval->stack[((hsi*7695+945210)*1+lsi)*1]), &(inteval->stack[((hsi*6885+952905)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+10159720)*1+lsi)*1]), &(inteval->stack[((hsi*20655+10139065)*1+lsi)*1]), &(inteval->stack[((hsi*18360+25398975)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+25594320)*1+lsi)*1]), &(inteval->stack[((hsi*36720+10159720)*1+lsi)*1]), &(inteval->stack[((hsi*32400+25417335)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+10196440)*1+lsi)*1]), &(inteval->stack[((hsi*54000+25594320)*1+lsi)*1]), &(inteval->stack[((hsi*47250+10018105)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+25648320)*1+lsi)*1]), &(inteval->stack[((hsi*70875+10196440)*1+lsi)*1]), &(inteval->stack[((hsi*61425+25449735)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+10267315)*1+lsi)*1]), &(inteval->stack[((hsi*85995+25648320)*1+lsi)*1]), &(inteval->stack[((hsi*73710+10065355)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+25734315)*1+lsi)*1]), &(inteval->stack[((hsi*98280+10267315)*1+lsi)*1]), &(inteval->stack[((hsi*83160+25511160)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+10365595)*1+lsi)*1]), &(inteval->stack[((hsi*2970+983640)*1+lsi)*1]), &(inteval->stack[((hsi*2475+986610)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+10373020)*1+lsi)*1]), &(inteval->stack[((hsi*8910+24979755)*1+lsi)*1]), &(inteval->stack[((hsi*7425+10365595)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+10387870)*1+lsi)*1]), &(inteval->stack[((hsi*17820+24999195)*1+lsi)*1]), &(inteval->stack[((hsi*14850+10373020)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+10412620)*1+lsi)*1]), &(inteval->stack[((hsi*29700+25050360)*1+lsi)*1]), &(inteval->stack[((hsi*24750+10387870)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+25841235)*1+lsi)*1]), &(inteval->stack[((hsi*44550+25153905)*1+lsi)*1]), &(inteval->stack[((hsi*37125+10412620)*1+lsi)*1]),45);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*69300+10365595)*1+lsi)*1]), &(inteval->stack[((hsi*62370+25336605)*1+lsi)*1]), &(inteval->stack[((hsi*51975+25841235)*1+lsi)*1]),45);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*89100+10434895)*1+lsi)*1]), &(inteval->stack[((hsi*83160+25511160)*1+lsi)*1]), &(inteval->stack[((hsi*69300+10365595)*1+lsi)*1]),45);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*111375+25841235)*1+lsi)*1]), &(inteval->stack[((hsi*106920+25734315)*1+lsi)*1]), &(inteval->stack[((hsi*89100+10434895)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+10365595)*1+lsi)*1]), &(inteval->stack[((hsi*8550+936660)*1+lsi)*1]), &(inteval->stack[((hsi*7695+945210)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+10388680)*1+lsi)*1]), &(inteval->stack[((hsi*23085+10365595)*1+lsi)*1]), &(inteval->stack[((hsi*20655+10139065)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+10429990)*1+lsi)*1]), &(inteval->stack[((hsi*41310+10388680)*1+lsi)*1]), &(inteval->stack[((hsi*36720+10159720)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+10491190)*1+lsi)*1]), &(inteval->stack[((hsi*61200+10429990)*1+lsi)*1]), &(inteval->stack[((hsi*54000+25594320)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+25952610)*1+lsi)*1]), &(inteval->stack[((hsi*81000+10491190)*1+lsi)*1]), &(inteval->stack[((hsi*70875+10196440)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+10365595)*1+lsi)*1]), &(inteval->stack[((hsi*99225+25952610)*1+lsi)*1]), &(inteval->stack[((hsi*85995+25648320)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+10480255)*1+lsi)*1]), &(inteval->stack[((hsi*114660+10365595)*1+lsi)*1]), &(inteval->stack[((hsi*98280+10267315)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+25952610)*1+lsi)*1]), &(inteval->stack[((hsi*126360+10480255)*1+lsi)*1]), &(inteval->stack[((hsi*106920+25734315)*1+lsi)*1]),45);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*136125+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*133650+25952610)*1+lsi)*1]), &(inteval->stack[((hsi*111375+25841235)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*408375+24979755)*1+lsi)*1]), &(inteval->stack[((hsi*166375+7359735)*1+lsi)*1]), &(inteval->stack[((hsi*136125+10018105)*1+lsi)*1]),3025);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*816750+25388130)*1+lsi)*1]), &(inteval->stack[((hsi*499125+7921780)*1+lsi)*1]), &(inteval->stack[((hsi*408375+24979755)*1+lsi)*1]),3025);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*1361250+10018105)*1+lsi)*1]), &(inteval->stack[((hsi*998250+9019855)*1+lsi)*1]), &(inteval->stack[((hsi*816750+25388130)*1+lsi)*1]),3025);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*2041875+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*1663750+11923855)*1+lsi)*1]), &(inteval->stack[((hsi*1361250+10018105)*1+lsi)*1]),3025);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*2858625+9156585)*1+lsi)*1]), &(inteval->stack[((hsi*2495625+17825630)*1+lsi)*1]), &(inteval->stack[((hsi*2041875+7114710)*1+lsi)*1]),3025);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*3811500+40806555)*1+lsi)*1]), &(inteval->stack[((hsi*3493875+13587605)*1+lsi)*1]), &(inteval->stack[((hsi*2858625+9156585)*1+lsi)*1]),3025);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*4900500+7114710)*1+lsi)*1]), &(inteval->stack[((hsi*4658500+20321255)*1+lsi)*1]), &(inteval->stack[((hsi*3811500+40806555)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+12015210)*1+lsi)*1]), &(inteval->stack[((hsi*11934+147798)*1+lsi)*1]), &(inteval->stack[((hsi*10098+159732)*1+lsi)*1]),153);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+12045504)*1+lsi)*1]), &(inteval->stack[((hsi*13923+133875)*1+lsi)*1]), &(inteval->stack[((hsi*11934+147798)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+12081306)*1+lsi)*1]), &(inteval->stack[((hsi*35802+12045504)*1+lsi)*1]), &(inteval->stack[((hsi*30294+12015210)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+12141894)*1+lsi)*1]), &(inteval->stack[((hsi*16065+117810)*1+lsi)*1]), &(inteval->stack[((hsi*13923+133875)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+12183663)*1+lsi)*1]), &(inteval->stack[((hsi*41769+12141894)*1+lsi)*1]), &(inteval->stack[((hsi*35802+12045504)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+12255267)*1+lsi)*1]), &(inteval->stack[((hsi*71604+12183663)*1+lsi)*1]), &(inteval->stack[((hsi*60588+12081306)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+12356247)*1+lsi)*1]), &(inteval->stack[((hsi*18360+99450)*1+lsi)*1]), &(inteval->stack[((hsi*16065+117810)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+12404442)*1+lsi)*1]), &(inteval->stack[((hsi*48195+12356247)*1+lsi)*1]), &(inteval->stack[((hsi*41769+12141894)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+12487980)*1+lsi)*1]), &(inteval->stack[((hsi*83538+12404442)*1+lsi)*1]), &(inteval->stack[((hsi*71604+12183663)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+12607320)*1+lsi)*1]), &(inteval->stack[((hsi*119340+12487980)*1+lsi)*1]), &(inteval->stack[((hsi*100980+12255267)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+12758790)*1+lsi)*1]), &(inteval->stack[((hsi*20808+78642)*1+lsi)*1]), &(inteval->stack[((hsi*18360+99450)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+12813870)*1+lsi)*1]), &(inteval->stack[((hsi*55080+12758790)*1+lsi)*1]), &(inteval->stack[((hsi*48195+12356247)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+12910260)*1+lsi)*1]), &(inteval->stack[((hsi*96390+12813870)*1+lsi)*1]), &(inteval->stack[((hsi*83538+12404442)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+13049490)*1+lsi)*1]), &(inteval->stack[((hsi*139230+12910260)*1+lsi)*1]), &(inteval->stack[((hsi*119340+12487980)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+13228500)*1+lsi)*1]), &(inteval->stack[((hsi*179010+13049490)*1+lsi)*1]), &(inteval->stack[((hsi*151470+12607320)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+13440558)*1+lsi)*1]), &(inteval->stack[((hsi*23409+55233)*1+lsi)*1]), &(inteval->stack[((hsi*20808+78642)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+13502982)*1+lsi)*1]), &(inteval->stack[((hsi*62424+13440558)*1+lsi)*1]), &(inteval->stack[((hsi*55080+12758790)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+13613142)*1+lsi)*1]), &(inteval->stack[((hsi*110160+13502982)*1+lsi)*1]), &(inteval->stack[((hsi*96390+12813870)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+13773792)*1+lsi)*1]), &(inteval->stack[((hsi*160650+13613142)*1+lsi)*1]), &(inteval->stack[((hsi*139230+12910260)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+13982637)*1+lsi)*1]), &(inteval->stack[((hsi*208845+13773792)*1+lsi)*1]), &(inteval->stack[((hsi*179010+13049490)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+14233251)*1+lsi)*1]), &(inteval->stack[((hsi*250614+13982637)*1+lsi)*1]), &(inteval->stack[((hsi*212058+13228500)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+14515995)*1+lsi)*1]), &(inteval->stack[((hsi*26163+29070)*1+lsi)*1]), &(inteval->stack[((hsi*23409+55233)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+14586222)*1+lsi)*1]), &(inteval->stack[((hsi*70227+14515995)*1+lsi)*1]), &(inteval->stack[((hsi*62424+13440558)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+14711070)*1+lsi)*1]), &(inteval->stack[((hsi*124848+14586222)*1+lsi)*1]), &(inteval->stack[((hsi*110160+13502982)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+14894670)*1+lsi)*1]), &(inteval->stack[((hsi*183600+14711070)*1+lsi)*1]), &(inteval->stack[((hsi*160650+13613142)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+15135645)*1+lsi)*1]), &(inteval->stack[((hsi*240975+14894670)*1+lsi)*1]), &(inteval->stack[((hsi*208845+13773792)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+15428028)*1+lsi)*1]), &(inteval->stack[((hsi*292383+15135645)*1+lsi)*1]), &(inteval->stack[((hsi*250614+13982637)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+15762180)*1+lsi)*1]), &(inteval->stack[((hsi*334152+15428028)*1+lsi)*1]), &(inteval->stack[((hsi*282744+14233251)*1+lsi)*1]),153);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*25245+16125708)*1+lsi)*1]), &(inteval->stack[((hsi*10098+159732)*1+lsi)*1]), &(inteval->stack[((hsi*8415+169830)*1+lsi)*1]),153);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*50490+16150953)*1+lsi)*1]), &(inteval->stack[((hsi*30294+12015210)*1+lsi)*1]), &(inteval->stack[((hsi*25245+16125708)*1+lsi)*1]),153);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*84150+16201443)*1+lsi)*1]), &(inteval->stack[((hsi*60588+12081306)*1+lsi)*1]), &(inteval->stack[((hsi*50490+16150953)*1+lsi)*1]),153);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*126225+16285593)*1+lsi)*1]), &(inteval->stack[((hsi*100980+12255267)*1+lsi)*1]), &(inteval->stack[((hsi*84150+16201443)*1+lsi)*1]),153);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*176715+16411818)*1+lsi)*1]), &(inteval->stack[((hsi*151470+12607320)*1+lsi)*1]), &(inteval->stack[((hsi*126225+16285593)*1+lsi)*1]),153);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*235620+16588533)*1+lsi)*1]), &(inteval->stack[((hsi*212058+13228500)*1+lsi)*1]), &(inteval->stack[((hsi*176715+16411818)*1+lsi)*1]),153);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*302940+16824153)*1+lsi)*1]), &(inteval->stack[((hsi*282744+14233251)*1+lsi)*1]), &(inteval->stack[((hsi*235620+16588533)*1+lsi)*1]),153);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*378675+17127093)*1+lsi)*1]), &(inteval->stack[((hsi*363528+15762180)*1+lsi)*1]), &(inteval->stack[((hsi*302940+16824153)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+17505768)*1+lsi)*1]), &(inteval->stack[((hsi*29070+0)*1+lsi)*1]), &(inteval->stack[((hsi*26163+29070)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+17584257)*1+lsi)*1]), &(inteval->stack[((hsi*78489+17505768)*1+lsi)*1]), &(inteval->stack[((hsi*70227+14515995)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+17724711)*1+lsi)*1]), &(inteval->stack[((hsi*140454+17584257)*1+lsi)*1]), &(inteval->stack[((hsi*124848+14586222)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+12015210)*1+lsi)*1]), &(inteval->stack[((hsi*208080+17724711)*1+lsi)*1]), &(inteval->stack[((hsi*183600+14711070)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+17505768)*1+lsi)*1]), &(inteval->stack[((hsi*275400+12015210)*1+lsi)*1]), &(inteval->stack[((hsi*240975+14894670)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+12015210)*1+lsi)*1]), &(inteval->stack[((hsi*337365+17505768)*1+lsi)*1]), &(inteval->stack[((hsi*292383+15135645)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+12405054)*1+lsi)*1]), &(inteval->stack[((hsi*389844+12015210)*1+lsi)*1]), &(inteval->stack[((hsi*334152+15428028)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+12834678)*1+lsi)*1]), &(inteval->stack[((hsi*429624+12405054)*1+lsi)*1]), &(inteval->stack[((hsi*363528+15762180)*1+lsi)*1]),153);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*462825+13289088)*1+lsi)*1]), &(inteval->stack[((hsi*454410+12834678)*1+lsi)*1]), &(inteval->stack[((hsi*378675+17127093)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1234200+13751913)*1+lsi)*1]), &(inteval->stack[((hsi*462825+13289088)*1+lsi)*1]), &(inteval->stack[((hsi*411400+178245)*1+lsi)*1]),3025);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*2178000+14986113)*1+lsi)*1]), &(inteval->stack[((hsi*1234200+13751913)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+27327155)*1+lsi)*1]),3025);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*3176250+24979755)*1+lsi)*1]), &(inteval->stack[((hsi*2178000+14986113)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+28416155)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*4129125+12015210)*1+lsi)*1]), &(inteval->stack[((hsi*3176250+24979755)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+30321905)*1+lsi)*1]),3025);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*4954950+24979755)*1+lsi)*1]), &(inteval->stack[((hsi*4129125+12015210)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+33074655)*1+lsi)*1]),3025);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*5590200+12015210)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+24979755)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+36613905)*1+lsi)*1]),3025);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*5989500+24979755)*1+lsi)*1]), &(inteval->stack[((hsi*5590200+12015210)*1+lsi)*1]), &(inteval->stack[((hsi*4658500+20321255)*1+lsi)*1]),3025);
HRRPart0bra0ket0ll(inteval, &(inteval->stack[((hsi*6125625+989085)*1+lsi)*1]), &(inteval->stack[((hsi*5989500+24979755)*1+lsi)*1]), &(inteval->stack[((hsi*4900500+7114710)*1+lsi)*1]),3025);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6125625+989085)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
