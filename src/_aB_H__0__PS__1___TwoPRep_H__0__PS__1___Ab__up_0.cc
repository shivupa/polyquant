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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hg.h>
#include <HRRPart0bra0ket0hh.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ig.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
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
#include <_aB_H__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,389301)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*2548+350150)*1+lsi)*1]), &(inteval->stack[((hsi*2184+352698)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+2316849)*1+lsi)*1]), &(inteval->stack[((hsi*2940+347210)*1+lsi)*1]), &(inteval->stack[((hsi*2548+350150)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+2324493)*1+lsi)*1]), &(inteval->stack[((hsi*7644+2316849)*1+lsi)*1]), &(inteval->stack[((hsi*6552+2310297)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+2337597)*1+lsi)*1]), &(inteval->stack[((hsi*3360+343850)*1+lsi)*1]), &(inteval->stack[((hsi*2940+347210)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+2346417)*1+lsi)*1]), &(inteval->stack[((hsi*8820+2337597)*1+lsi)*1]), &(inteval->stack[((hsi*7644+2316849)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+2361705)*1+lsi)*1]), &(inteval->stack[((hsi*15288+2346417)*1+lsi)*1]), &(inteval->stack[((hsi*13104+2324493)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+2383545)*1+lsi)*1]), &(inteval->stack[((hsi*3808+340042)*1+lsi)*1]), &(inteval->stack[((hsi*3360+343850)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+2393625)*1+lsi)*1]), &(inteval->stack[((hsi*10080+2383545)*1+lsi)*1]), &(inteval->stack[((hsi*8820+2337597)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+2411265)*1+lsi)*1]), &(inteval->stack[((hsi*17640+2393625)*1+lsi)*1]), &(inteval->stack[((hsi*15288+2346417)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+2436745)*1+lsi)*1]), &(inteval->stack[((hsi*25480+2411265)*1+lsi)*1]), &(inteval->stack[((hsi*21840+2361705)*1+lsi)*1]),28);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*11424+2337597)*1+lsi)*1]), &(inteval->stack[((hsi*4284+335758)*1+lsi)*1]), &(inteval->stack[((hsi*3808+340042)*1+lsi)*1]),28);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*20160+2469505)*1+lsi)*1]), &(inteval->stack[((hsi*11424+2337597)*1+lsi)*1]), &(inteval->stack[((hsi*10080+2383545)*1+lsi)*1]),28);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*29400+2489665)*1+lsi)*1]), &(inteval->stack[((hsi*20160+2469505)*1+lsi)*1]), &(inteval->stack[((hsi*17640+2393625)*1+lsi)*1]),28);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*38220+2519065)*1+lsi)*1]), &(inteval->stack[((hsi*29400+2489665)*1+lsi)*1]), &(inteval->stack[((hsi*25480+2411265)*1+lsi)*1]),28);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*45864+2383545)*1+lsi)*1]), &(inteval->stack[((hsi*38220+2519065)*1+lsi)*1]), &(inteval->stack[((hsi*32760+2436745)*1+lsi)*1]),28);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*12852+2557285)*1+lsi)*1]), &(inteval->stack[((hsi*4788+330970)*1+lsi)*1]), &(inteval->stack[((hsi*4284+335758)*1+lsi)*1]),28);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*22848+2570137)*1+lsi)*1]), &(inteval->stack[((hsi*12852+2557285)*1+lsi)*1]), &(inteval->stack[((hsi*11424+2337597)*1+lsi)*1]),28);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*33600+2592985)*1+lsi)*1]), &(inteval->stack[((hsi*22848+2570137)*1+lsi)*1]), &(inteval->stack[((hsi*20160+2469505)*1+lsi)*1]),28);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*44100+2626585)*1+lsi)*1]), &(inteval->stack[((hsi*33600+2592985)*1+lsi)*1]), &(inteval->stack[((hsi*29400+2489665)*1+lsi)*1]),28);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*53508+2670685)*1+lsi)*1]), &(inteval->stack[((hsi*44100+2626585)*1+lsi)*1]), &(inteval->stack[((hsi*38220+2519065)*1+lsi)*1]),28);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*61152+2469505)*1+lsi)*1]), &(inteval->stack[((hsi*53508+2670685)*1+lsi)*1]), &(inteval->stack[((hsi*45864+2383545)*1+lsi)*1]),28);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*14364+2530657)*1+lsi)*1]), &(inteval->stack[((hsi*5320+325650)*1+lsi)*1]), &(inteval->stack[((hsi*4788+330970)*1+lsi)*1]),28);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*25704+2724193)*1+lsi)*1]), &(inteval->stack[((hsi*14364+2530657)*1+lsi)*1]), &(inteval->stack[((hsi*12852+2557285)*1+lsi)*1]),28);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*38080+2749897)*1+lsi)*1]), &(inteval->stack[((hsi*25704+2724193)*1+lsi)*1]), &(inteval->stack[((hsi*22848+2570137)*1+lsi)*1]),28);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*50400+2787977)*1+lsi)*1]), &(inteval->stack[((hsi*38080+2749897)*1+lsi)*1]), &(inteval->stack[((hsi*33600+2592985)*1+lsi)*1]),28);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*61740+2545021)*1+lsi)*1]), &(inteval->stack[((hsi*50400+2787977)*1+lsi)*1]), &(inteval->stack[((hsi*44100+2626585)*1+lsi)*1]),28);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*71344+2838377)*1+lsi)*1]), &(inteval->stack[((hsi*61740+2545021)*1+lsi)*1]), &(inteval->stack[((hsi*53508+2670685)*1+lsi)*1]),28);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*78624+2606761)*1+lsi)*1]), &(inteval->stack[((hsi*71344+2838377)*1+lsi)*1]), &(inteval->stack[((hsi*61152+2469505)*1+lsi)*1]),28);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*15960+2685385)*1+lsi)*1]), &(inteval->stack[((hsi*5880+319770)*1+lsi)*1]), &(inteval->stack[((hsi*5320+325650)*1+lsi)*1]),28);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*28728+2909721)*1+lsi)*1]), &(inteval->stack[((hsi*15960+2685385)*1+lsi)*1]), &(inteval->stack[((hsi*14364+2530657)*1+lsi)*1]),28);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*42840+2938449)*1+lsi)*1]), &(inteval->stack[((hsi*28728+2909721)*1+lsi)*1]), &(inteval->stack[((hsi*25704+2724193)*1+lsi)*1]),28);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*57120+2981289)*1+lsi)*1]), &(inteval->stack[((hsi*42840+2938449)*1+lsi)*1]), &(inteval->stack[((hsi*38080+2749897)*1+lsi)*1]),28);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*70560+2701345)*1+lsi)*1]), &(inteval->stack[((hsi*57120+2981289)*1+lsi)*1]), &(inteval->stack[((hsi*50400+2787977)*1+lsi)*1]),28);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*82320+3038409)*1+lsi)*1]), &(inteval->stack[((hsi*70560+2701345)*1+lsi)*1]), &(inteval->stack[((hsi*61740+2545021)*1+lsi)*1]),28);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*91728+3120729)*1+lsi)*1]), &(inteval->stack[((hsi*82320+3038409)*1+lsi)*1]), &(inteval->stack[((hsi*71344+2838377)*1+lsi)*1]),28);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*98280+2771905)*1+lsi)*1]), &(inteval->stack[((hsi*91728+3120729)*1+lsi)*1]), &(inteval->stack[((hsi*78624+2606761)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+2530657)*1+lsi)*1]), &(inteval->stack[((hsi*2184+352698)*1+lsi)*1]), &(inteval->stack[((hsi*1848+354882)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+2536201)*1+lsi)*1]), &(inteval->stack[((hsi*6552+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*5544+2530657)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+2547289)*1+lsi)*1]), &(inteval->stack[((hsi*13104+2324493)*1+lsi)*1]), &(inteval->stack[((hsi*11088+2536201)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*21840+2361705)*1+lsi)*1]), &(inteval->stack[((hsi*18480+2547289)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+2530657)*1+lsi)*1]), &(inteval->stack[((hsi*32760+2436745)*1+lsi)*1]), &(inteval->stack[((hsi*27720+2310297)*1+lsi)*1]),28);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*51744+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*45864+2383545)*1+lsi)*1]), &(inteval->stack[((hsi*38808+2530657)*1+lsi)*1]),28);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*66528+2362041)*1+lsi)*1]), &(inteval->stack[((hsi*61152+2469505)*1+lsi)*1]), &(inteval->stack[((hsi*51744+2310297)*1+lsi)*1]),28);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*83160+2428569)*1+lsi)*1]), &(inteval->stack[((hsi*78624+2606761)*1+lsi)*1]), &(inteval->stack[((hsi*66528+2362041)*1+lsi)*1]),28);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*101640+2511729)*1+lsi)*1]), &(inteval->stack[((hsi*98280+2771905)*1+lsi)*1]), &(inteval->stack[((hsi*83160+2428569)*1+lsi)*1]),28);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*17640+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*6468+313302)*1+lsi)*1]), &(inteval->stack[((hsi*5880+319770)*1+lsi)*1]),28);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*31920+2327937)*1+lsi)*1]), &(inteval->stack[((hsi*17640+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*15960+2685385)*1+lsi)*1]),28);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*47880+2359857)*1+lsi)*1]), &(inteval->stack[((hsi*31920+2327937)*1+lsi)*1]), &(inteval->stack[((hsi*28728+2909721)*1+lsi)*1]),28);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*64260+2407737)*1+lsi)*1]), &(inteval->stack[((hsi*47880+2359857)*1+lsi)*1]), &(inteval->stack[((hsi*42840+2938449)*1+lsi)*1]),28);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*79968+2870185)*1+lsi)*1]), &(inteval->stack[((hsi*64260+2407737)*1+lsi)*1]), &(inteval->stack[((hsi*57120+2981289)*1+lsi)*1]),28);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*94080+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*79968+2870185)*1+lsi)*1]), &(inteval->stack[((hsi*70560+2701345)*1+lsi)*1]),28);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*105840+2870185)*1+lsi)*1]), &(inteval->stack[((hsi*94080+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*82320+3038409)*1+lsi)*1]),28);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*114660+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*105840+2870185)*1+lsi)*1]), &(inteval->stack[((hsi*91728+3120729)*1+lsi)*1]),28);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*120120+2613369)*1+lsi)*1]), &(inteval->stack[((hsi*114660+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*98280+2771905)*1+lsi)*1]),28);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*121968+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*120120+2613369)*1+lsi)*1]), &(inteval->stack[((hsi*101640+2511729)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+313302)*1+lsi)*1]), &(inteval->stack[((hsi*3276+304842)*1+lsi)*1]), &(inteval->stack[((hsi*2808+308118)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+321726)*1+lsi)*1]), &(inteval->stack[((hsi*3780+301062)*1+lsi)*1]), &(inteval->stack[((hsi*3276+304842)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+331554)*1+lsi)*1]), &(inteval->stack[((hsi*9828+321726)*1+lsi)*1]), &(inteval->stack[((hsi*8424+313302)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*4320+296742)*1+lsi)*1]), &(inteval->stack[((hsi*3780+301062)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+2443605)*1+lsi)*1]), &(inteval->stack[((hsi*11340+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*9828+321726)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+2463261)*1+lsi)*1]), &(inteval->stack[((hsi*19656+2443605)*1+lsi)*1]), &(inteval->stack[((hsi*16848+331554)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+2491341)*1+lsi)*1]), &(inteval->stack[((hsi*4896+291846)*1+lsi)*1]), &(inteval->stack[((hsi*4320+296742)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+2504301)*1+lsi)*1]), &(inteval->stack[((hsi*12960+2491341)*1+lsi)*1]), &(inteval->stack[((hsi*11340+2432265)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+2526981)*1+lsi)*1]), &(inteval->stack[((hsi*22680+2504301)*1+lsi)*1]), &(inteval->stack[((hsi*19656+2443605)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+2559741)*1+lsi)*1]), &(inteval->stack[((hsi*32760+2526981)*1+lsi)*1]), &(inteval->stack[((hsi*28080+2463261)*1+lsi)*1]),36);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*14688+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*5508+286338)*1+lsi)*1]), &(inteval->stack[((hsi*4896+291846)*1+lsi)*1]),36);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*25920+2601861)*1+lsi)*1]), &(inteval->stack[((hsi*14688+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*12960+2491341)*1+lsi)*1]),36);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*37800+2627781)*1+lsi)*1]), &(inteval->stack[((hsi*25920+2601861)*1+lsi)*1]), &(inteval->stack[((hsi*22680+2504301)*1+lsi)*1]),36);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*49140+2665581)*1+lsi)*1]), &(inteval->stack[((hsi*37800+2627781)*1+lsi)*1]), &(inteval->stack[((hsi*32760+2526981)*1+lsi)*1]),36);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*58968+2491341)*1+lsi)*1]), &(inteval->stack[((hsi*49140+2665581)*1+lsi)*1]), &(inteval->stack[((hsi*42120+2559741)*1+lsi)*1]),36);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*16524+2714721)*1+lsi)*1]), &(inteval->stack[((hsi*6156+280182)*1+lsi)*1]), &(inteval->stack[((hsi*5508+286338)*1+lsi)*1]),36);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*29376+2731245)*1+lsi)*1]), &(inteval->stack[((hsi*16524+2714721)*1+lsi)*1]), &(inteval->stack[((hsi*14688+2432265)*1+lsi)*1]),36);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*43200+2760621)*1+lsi)*1]), &(inteval->stack[((hsi*29376+2731245)*1+lsi)*1]), &(inteval->stack[((hsi*25920+2601861)*1+lsi)*1]),36);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*56700+2803821)*1+lsi)*1]), &(inteval->stack[((hsi*43200+2760621)*1+lsi)*1]), &(inteval->stack[((hsi*37800+2627781)*1+lsi)*1]),36);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*68796+2860521)*1+lsi)*1]), &(inteval->stack[((hsi*56700+2803821)*1+lsi)*1]), &(inteval->stack[((hsi*49140+2665581)*1+lsi)*1]),36);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*78624+2601861)*1+lsi)*1]), &(inteval->stack[((hsi*68796+2860521)*1+lsi)*1]), &(inteval->stack[((hsi*58968+2491341)*1+lsi)*1]),36);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*18468+2680485)*1+lsi)*1]), &(inteval->stack[((hsi*6840+273342)*1+lsi)*1]), &(inteval->stack[((hsi*6156+280182)*1+lsi)*1]),36);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*33048+2929317)*1+lsi)*1]), &(inteval->stack[((hsi*18468+2680485)*1+lsi)*1]), &(inteval->stack[((hsi*16524+2714721)*1+lsi)*1]),36);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*48960+2962365)*1+lsi)*1]), &(inteval->stack[((hsi*33048+2929317)*1+lsi)*1]), &(inteval->stack[((hsi*29376+2731245)*1+lsi)*1]),36);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*64800+3011325)*1+lsi)*1]), &(inteval->stack[((hsi*48960+2962365)*1+lsi)*1]), &(inteval->stack[((hsi*43200+2760621)*1+lsi)*1]),36);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*79380+2698953)*1+lsi)*1]), &(inteval->stack[((hsi*64800+3011325)*1+lsi)*1]), &(inteval->stack[((hsi*56700+2803821)*1+lsi)*1]),36);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*91728+3076125)*1+lsi)*1]), &(inteval->stack[((hsi*79380+2698953)*1+lsi)*1]), &(inteval->stack[((hsi*68796+2860521)*1+lsi)*1]),36);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*101088+2778333)*1+lsi)*1]), &(inteval->stack[((hsi*91728+3076125)*1+lsi)*1]), &(inteval->stack[((hsi*78624+2601861)*1+lsi)*1]),36);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*20520+2879421)*1+lsi)*1]), &(inteval->stack[((hsi*7560+265782)*1+lsi)*1]), &(inteval->stack[((hsi*6840+273342)*1+lsi)*1]),36);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*36936+3167853)*1+lsi)*1]), &(inteval->stack[((hsi*20520+2879421)*1+lsi)*1]), &(inteval->stack[((hsi*18468+2680485)*1+lsi)*1]),36);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*55080+3204789)*1+lsi)*1]), &(inteval->stack[((hsi*36936+3167853)*1+lsi)*1]), &(inteval->stack[((hsi*33048+2929317)*1+lsi)*1]),36);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*73440+3259869)*1+lsi)*1]), &(inteval->stack[((hsi*55080+3204789)*1+lsi)*1]), &(inteval->stack[((hsi*48960+2962365)*1+lsi)*1]),36);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*90720+2899941)*1+lsi)*1]), &(inteval->stack[((hsi*73440+3259869)*1+lsi)*1]), &(inteval->stack[((hsi*64800+3011325)*1+lsi)*1]),36);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*105840+3333309)*1+lsi)*1]), &(inteval->stack[((hsi*90720+2899941)*1+lsi)*1]), &(inteval->stack[((hsi*79380+2698953)*1+lsi)*1]),36);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*117936+3439149)*1+lsi)*1]), &(inteval->stack[((hsi*105840+3333309)*1+lsi)*1]), &(inteval->stack[((hsi*91728+3076125)*1+lsi)*1]),36);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*126360+2990661)*1+lsi)*1]), &(inteval->stack[((hsi*117936+3439149)*1+lsi)*1]), &(inteval->stack[((hsi*101088+2778333)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+2680485)*1+lsi)*1]), &(inteval->stack[((hsi*2808+308118)*1+lsi)*1]), &(inteval->stack[((hsi*2376+310926)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+2687613)*1+lsi)*1]), &(inteval->stack[((hsi*8424+313302)*1+lsi)*1]), &(inteval->stack[((hsi*7128+2680485)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+2701869)*1+lsi)*1]), &(inteval->stack[((hsi*16848+331554)*1+lsi)*1]), &(inteval->stack[((hsi*14256+2687613)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+273342)*1+lsi)*1]), &(inteval->stack[((hsi*28080+2463261)*1+lsi)*1]), &(inteval->stack[((hsi*23760+2701869)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+2680485)*1+lsi)*1]), &(inteval->stack[((hsi*42120+2559741)*1+lsi)*1]), &(inteval->stack[((hsi*35640+273342)*1+lsi)*1]),36);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*66528+273342)*1+lsi)*1]), &(inteval->stack[((hsi*58968+2491341)*1+lsi)*1]), &(inteval->stack[((hsi*49896+2680485)*1+lsi)*1]),36);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*85536+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*78624+2601861)*1+lsi)*1]), &(inteval->stack[((hsi*66528+273342)*1+lsi)*1]),36);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*106920+2517801)*1+lsi)*1]), &(inteval->stack[((hsi*101088+2778333)*1+lsi)*1]), &(inteval->stack[((hsi*85536+2432265)*1+lsi)*1]),36);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*130680+2624721)*1+lsi)*1]), &(inteval->stack[((hsi*126360+2990661)*1+lsi)*1]), &(inteval->stack[((hsi*106920+2517801)*1+lsi)*1]),36);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*22680+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*8316+257466)*1+lsi)*1]), &(inteval->stack[((hsi*7560+265782)*1+lsi)*1]),36);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*41040+2454945)*1+lsi)*1]), &(inteval->stack[((hsi*22680+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*20520+2879421)*1+lsi)*1]),36);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*61560+2755401)*1+lsi)*1]), &(inteval->stack[((hsi*41040+2454945)*1+lsi)*1]), &(inteval->stack[((hsi*36936+3167853)*1+lsi)*1]),36);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*82620+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*61560+2755401)*1+lsi)*1]), &(inteval->stack[((hsi*55080+3204789)*1+lsi)*1]),36);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*102816+2755401)*1+lsi)*1]), &(inteval->stack[((hsi*82620+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*73440+3259869)*1+lsi)*1]),36);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*120960+3117021)*1+lsi)*1]), &(inteval->stack[((hsi*102816+2755401)*1+lsi)*1]), &(inteval->stack[((hsi*90720+2899941)*1+lsi)*1]),36);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*136080+2755401)*1+lsi)*1]), &(inteval->stack[((hsi*120960+3117021)*1+lsi)*1]), &(inteval->stack[((hsi*105840+3333309)*1+lsi)*1]),36);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*147420+3117021)*1+lsi)*1]), &(inteval->stack[((hsi*136080+2755401)*1+lsi)*1]), &(inteval->stack[((hsi*117936+3439149)*1+lsi)*1]),36);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*154440+2755401)*1+lsi)*1]), &(inteval->stack[((hsi*147420+3117021)*1+lsi)*1]), &(inteval->stack[((hsi*126360+2990661)*1+lsi)*1]),36);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*156816+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*154440+2755401)*1+lsi)*1]), &(inteval->stack[((hsi*130680+2624721)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*365904+2589081)*1+lsi)*1]), &(inteval->stack[((hsi*156816+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*121968+2310297)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+257466)*1+lsi)*1]), &(inteval->stack[((hsi*4095+246891)*1+lsi)*1]), &(inteval->stack[((hsi*3510+250986)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+267996)*1+lsi)*1]), &(inteval->stack[((hsi*4725+242166)*1+lsi)*1]), &(inteval->stack[((hsi*4095+246891)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+280281)*1+lsi)*1]), &(inteval->stack[((hsi*12285+267996)*1+lsi)*1]), &(inteval->stack[((hsi*10530+257466)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+301341)*1+lsi)*1]), &(inteval->stack[((hsi*5400+236766)*1+lsi)*1]), &(inteval->stack[((hsi*4725+242166)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+315516)*1+lsi)*1]), &(inteval->stack[((hsi*14175+301341)*1+lsi)*1]), &(inteval->stack[((hsi*12285+267996)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*24570+315516)*1+lsi)*1]), &(inteval->stack[((hsi*21060+280281)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+340086)*1+lsi)*1]), &(inteval->stack[((hsi*6120+230646)*1+lsi)*1]), &(inteval->stack[((hsi*5400+236766)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+2990085)*1+lsi)*1]), &(inteval->stack[((hsi*16200+340086)*1+lsi)*1]), &(inteval->stack[((hsi*14175+301341)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+3018435)*1+lsi)*1]), &(inteval->stack[((hsi*28350+2990085)*1+lsi)*1]), &(inteval->stack[((hsi*24570+315516)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+3059385)*1+lsi)*1]), &(inteval->stack[((hsi*40950+3018435)*1+lsi)*1]), &(inteval->stack[((hsi*35100+2954985)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+301341)*1+lsi)*1]), &(inteval->stack[((hsi*6885+223761)*1+lsi)*1]), &(inteval->stack[((hsi*6120+230646)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+3112035)*1+lsi)*1]), &(inteval->stack[((hsi*18360+301341)*1+lsi)*1]), &(inteval->stack[((hsi*16200+340086)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+3144435)*1+lsi)*1]), &(inteval->stack[((hsi*32400+3112035)*1+lsi)*1]), &(inteval->stack[((hsi*28350+2990085)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+3191685)*1+lsi)*1]), &(inteval->stack[((hsi*47250+3144435)*1+lsi)*1]), &(inteval->stack[((hsi*40950+3018435)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+3253110)*1+lsi)*1]), &(inteval->stack[((hsi*61425+3191685)*1+lsi)*1]), &(inteval->stack[((hsi*52650+3059385)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+2990085)*1+lsi)*1]), &(inteval->stack[((hsi*7695+216066)*1+lsi)*1]), &(inteval->stack[((hsi*6885+223761)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+3010740)*1+lsi)*1]), &(inteval->stack[((hsi*20655+2990085)*1+lsi)*1]), &(inteval->stack[((hsi*18360+301341)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+301341)*1+lsi)*1]), &(inteval->stack[((hsi*36720+3010740)*1+lsi)*1]), &(inteval->stack[((hsi*32400+3112035)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+3326820)*1+lsi)*1]), &(inteval->stack[((hsi*54000+301341)*1+lsi)*1]), &(inteval->stack[((hsi*47250+3144435)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+3397695)*1+lsi)*1]), &(inteval->stack[((hsi*70875+3326820)*1+lsi)*1]), &(inteval->stack[((hsi*61425+3191685)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+3112035)*1+lsi)*1]), &(inteval->stack[((hsi*85995+3397695)*1+lsi)*1]), &(inteval->stack[((hsi*73710+3253110)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+3210315)*1+lsi)*1]), &(inteval->stack[((hsi*8550+207516)*1+lsi)*1]), &(inteval->stack[((hsi*7695+216066)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+3483690)*1+lsi)*1]), &(inteval->stack[((hsi*23085+3210315)*1+lsi)*1]), &(inteval->stack[((hsi*20655+2990085)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+3525000)*1+lsi)*1]), &(inteval->stack[((hsi*41310+3483690)*1+lsi)*1]), &(inteval->stack[((hsi*36720+3010740)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+3586200)*1+lsi)*1]), &(inteval->stack[((hsi*61200+3525000)*1+lsi)*1]), &(inteval->stack[((hsi*54000+301341)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+3667200)*1+lsi)*1]), &(inteval->stack[((hsi*81000+3586200)*1+lsi)*1]), &(inteval->stack[((hsi*70875+3326820)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+3766425)*1+lsi)*1]), &(inteval->stack[((hsi*99225+3667200)*1+lsi)*1]), &(inteval->stack[((hsi*85995+3397695)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+3326820)*1+lsi)*1]), &(inteval->stack[((hsi*114660+3766425)*1+lsi)*1]), &(inteval->stack[((hsi*98280+3112035)*1+lsi)*1]),45);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*25650+2990085)*1+lsi)*1]), &(inteval->stack[((hsi*9450+198066)*1+lsi)*1]), &(inteval->stack[((hsi*8550+207516)*1+lsi)*1]),45);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*46170+301341)*1+lsi)*1]), &(inteval->stack[((hsi*25650+2990085)*1+lsi)*1]), &(inteval->stack[((hsi*23085+3210315)*1+lsi)*1]),45);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*68850+3881085)*1+lsi)*1]), &(inteval->stack[((hsi*46170+301341)*1+lsi)*1]), &(inteval->stack[((hsi*41310+3483690)*1+lsi)*1]),45);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*91800+3949935)*1+lsi)*1]), &(inteval->stack[((hsi*68850+3881085)*1+lsi)*1]), &(inteval->stack[((hsi*61200+3525000)*1+lsi)*1]),45);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*113400+3453180)*1+lsi)*1]), &(inteval->stack[((hsi*91800+3949935)*1+lsi)*1]), &(inteval->stack[((hsi*81000+3586200)*1+lsi)*1]),45);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*132300+4041735)*1+lsi)*1]), &(inteval->stack[((hsi*113400+3453180)*1+lsi)*1]), &(inteval->stack[((hsi*99225+3667200)*1+lsi)*1]),45);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*147420+3566580)*1+lsi)*1]), &(inteval->stack[((hsi*132300+4041735)*1+lsi)*1]), &(inteval->stack[((hsi*114660+3766425)*1+lsi)*1]),45);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*157950+3714000)*1+lsi)*1]), &(inteval->stack[((hsi*147420+3566580)*1+lsi)*1]), &(inteval->stack[((hsi*126360+3326820)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+3015735)*1+lsi)*1]), &(inteval->stack[((hsi*3510+250986)*1+lsi)*1]), &(inteval->stack[((hsi*2970+254496)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+207516)*1+lsi)*1]), &(inteval->stack[((hsi*10530+257466)*1+lsi)*1]), &(inteval->stack[((hsi*8910+3015735)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+225336)*1+lsi)*1]), &(inteval->stack[((hsi*21060+280281)*1+lsi)*1]), &(inteval->stack[((hsi*17820+207516)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+255036)*1+lsi)*1]), &(inteval->stack[((hsi*35100+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*29700+225336)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+4174035)*1+lsi)*1]), &(inteval->stack[((hsi*52650+3059385)*1+lsi)*1]), &(inteval->stack[((hsi*44550+255036)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+3015735)*1+lsi)*1]), &(inteval->stack[((hsi*73710+3253110)*1+lsi)*1]), &(inteval->stack[((hsi*62370+4174035)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+3210315)*1+lsi)*1]), &(inteval->stack[((hsi*98280+3112035)*1+lsi)*1]), &(inteval->stack[((hsi*83160+3015735)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+3015735)*1+lsi)*1]), &(inteval->stack[((hsi*126360+3326820)*1+lsi)*1]), &(inteval->stack[((hsi*106920+3210315)*1+lsi)*1]),45);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*163350+3149385)*1+lsi)*1]), &(inteval->stack[((hsi*157950+3714000)*1+lsi)*1]), &(inteval->stack[((hsi*133650+3015735)*1+lsi)*1]),45);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*28350+3312735)*1+lsi)*1]), &(inteval->stack[((hsi*10395+187671)*1+lsi)*1]), &(inteval->stack[((hsi*9450+198066)*1+lsi)*1]),45);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*51300+3015735)*1+lsi)*1]), &(inteval->stack[((hsi*28350+3312735)*1+lsi)*1]), &(inteval->stack[((hsi*25650+2990085)*1+lsi)*1]),45);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*76950+3312735)*1+lsi)*1]), &(inteval->stack[((hsi*51300+3015735)*1+lsi)*1]), &(inteval->stack[((hsi*46170+301341)*1+lsi)*1]),45);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*103275+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*76950+3312735)*1+lsi)*1]), &(inteval->stack[((hsi*68850+3881085)*1+lsi)*1]),45);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*128520+187671)*1+lsi)*1]), &(inteval->stack[((hsi*103275+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*91800+3949935)*1+lsi)*1]),45);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*151200+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*128520+187671)*1+lsi)*1]), &(inteval->stack[((hsi*113400+3453180)*1+lsi)*1]),45);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*170100+3312735)*1+lsi)*1]), &(inteval->stack[((hsi*151200+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*132300+4041735)*1+lsi)*1]),45);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*184275+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*170100+3312735)*1+lsi)*1]), &(inteval->stack[((hsi*147420+3566580)*1+lsi)*1]),45);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*193050+3312735)*1+lsi)*1]), &(inteval->stack[((hsi*184275+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*157950+3714000)*1+lsi)*1]),45);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*196020+3505785)*1+lsi)*1]), &(inteval->stack[((hsi*193050+3312735)*1+lsi)*1]), &(inteval->stack[((hsi*163350+3149385)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*470448+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*196020+3505785)*1+lsi)*1]), &(inteval->stack[((hsi*156816+2432265)*1+lsi)*1]),4356);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*731808+3701805)*1+lsi)*1]), &(inteval->stack[((hsi*470448+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*365904+2589081)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+187671)*1+lsi)*1]), &(inteval->stack[((hsi*5005+174746)*1+lsi)*1]), &(inteval->stack[((hsi*4290+179751)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*5775+168971)*1+lsi)*1]), &(inteval->stack[((hsi*5005+174746)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+200541)*1+lsi)*1]), &(inteval->stack[((hsi*15015+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*12870+187671)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+2447280)*1+lsi)*1]), &(inteval->stack[((hsi*6600+162371)*1+lsi)*1]), &(inteval->stack[((hsi*5775+168971)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+226281)*1+lsi)*1]), &(inteval->stack[((hsi*17325+2447280)*1+lsi)*1]), &(inteval->stack[((hsi*15015+2432265)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+2464605)*1+lsi)*1]), &(inteval->stack[((hsi*30030+226281)*1+lsi)*1]), &(inteval->stack[((hsi*25740+200541)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+256311)*1+lsi)*1]), &(inteval->stack[((hsi*7480+154891)*1+lsi)*1]), &(inteval->stack[((hsi*6600+162371)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+2507505)*1+lsi)*1]), &(inteval->stack[((hsi*19800+256311)*1+lsi)*1]), &(inteval->stack[((hsi*17325+2447280)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+276111)*1+lsi)*1]), &(inteval->stack[((hsi*34650+2507505)*1+lsi)*1]), &(inteval->stack[((hsi*30030+226281)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+3425433)*1+lsi)*1]), &(inteval->stack[((hsi*50050+276111)*1+lsi)*1]), &(inteval->stack[((hsi*42900+2464605)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+2542155)*1+lsi)*1]), &(inteval->stack[((hsi*8415+146476)*1+lsi)*1]), &(inteval->stack[((hsi*7480+154891)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*22440+2542155)*1+lsi)*1]), &(inteval->stack[((hsi*19800+256311)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+4473213)*1+lsi)*1]), &(inteval->stack[((hsi*39600+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*34650+2507505)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+4530963)*1+lsi)*1]), &(inteval->stack[((hsi*57750+4473213)*1+lsi)*1]), &(inteval->stack[((hsi*50050+276111)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+226281)*1+lsi)*1]), &(inteval->stack[((hsi*75075+4530963)*1+lsi)*1]), &(inteval->stack[((hsi*64350+3425433)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+316371)*1+lsi)*1]), &(inteval->stack[((hsi*9405+137071)*1+lsi)*1]), &(inteval->stack[((hsi*8415+146476)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+4606038)*1+lsi)*1]), &(inteval->stack[((hsi*25245+316371)*1+lsi)*1]), &(inteval->stack[((hsi*22440+2542155)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+2507505)*1+lsi)*1]), &(inteval->stack[((hsi*44880+4606038)*1+lsi)*1]), &(inteval->stack[((hsi*39600+4433613)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+4650918)*1+lsi)*1]), &(inteval->stack[((hsi*66000+2507505)*1+lsi)*1]), &(inteval->stack[((hsi*57750+4473213)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+4737543)*1+lsi)*1]), &(inteval->stack[((hsi*86625+4650918)*1+lsi)*1]), &(inteval->stack[((hsi*75075+4530963)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*105105+4737543)*1+lsi)*1]), &(inteval->stack[((hsi*90090+226281)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+4553733)*1+lsi)*1]), &(inteval->stack[((hsi*10450+126621)*1+lsi)*1]), &(inteval->stack[((hsi*9405+137071)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+4842648)*1+lsi)*1]), &(inteval->stack[((hsi*28215+4553733)*1+lsi)*1]), &(inteval->stack[((hsi*25245+316371)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+4893138)*1+lsi)*1]), &(inteval->stack[((hsi*50490+4842648)*1+lsi)*1]), &(inteval->stack[((hsi*44880+4606038)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+4967938)*1+lsi)*1]), &(inteval->stack[((hsi*74800+4893138)*1+lsi)*1]), &(inteval->stack[((hsi*66000+2507505)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+5066938)*1+lsi)*1]), &(inteval->stack[((hsi*99000+4967938)*1+lsi)*1]), &(inteval->stack[((hsi*86625+4650918)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+4581948)*1+lsi)*1]), &(inteval->stack[((hsi*121275+5066938)*1+lsi)*1]), &(inteval->stack[((hsi*105105+4737543)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+5188213)*1+lsi)*1]), &(inteval->stack[((hsi*140140+4581948)*1+lsi)*1]), &(inteval->stack[((hsi*120120+4433613)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+4722088)*1+lsi)*1]), &(inteval->stack[((hsi*11550+115071)*1+lsi)*1]), &(inteval->stack[((hsi*10450+126621)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+4753438)*1+lsi)*1]), &(inteval->stack[((hsi*31350+4722088)*1+lsi)*1]), &(inteval->stack[((hsi*28215+4553733)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+5342653)*1+lsi)*1]), &(inteval->stack[((hsi*56430+4753438)*1+lsi)*1]), &(inteval->stack[((hsi*50490+4842648)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+5426803)*1+lsi)*1]), &(inteval->stack[((hsi*84150+5342653)*1+lsi)*1]), &(inteval->stack[((hsi*74800+4893138)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+4809868)*1+lsi)*1]), &(inteval->stack[((hsi*112200+5426803)*1+lsi)*1]), &(inteval->stack[((hsi*99000+4967938)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+5539003)*1+lsi)*1]), &(inteval->stack[((hsi*138600+4809868)*1+lsi)*1]), &(inteval->stack[((hsi*121275+5066938)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+4948468)*1+lsi)*1]), &(inteval->stack[((hsi*161700+5539003)*1+lsi)*1]), &(inteval->stack[((hsi*140140+4581948)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+5700703)*1+lsi)*1]), &(inteval->stack[((hsi*180180+4948468)*1+lsi)*1]), &(inteval->stack[((hsi*154440+5188213)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+4553733)*1+lsi)*1]), &(inteval->stack[((hsi*4290+179751)*1+lsi)*1]), &(inteval->stack[((hsi*3630+184041)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+4564623)*1+lsi)*1]), &(inteval->stack[((hsi*12870+187671)*1+lsi)*1]), &(inteval->stack[((hsi*10890+4553733)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+4586403)*1+lsi)*1]), &(inteval->stack[((hsi*25740+200541)*1+lsi)*1]), &(inteval->stack[((hsi*21780+4564623)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+126621)*1+lsi)*1]), &(inteval->stack[((hsi*42900+2464605)*1+lsi)*1]), &(inteval->stack[((hsi*36300+4586403)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+4553733)*1+lsi)*1]), &(inteval->stack[((hsi*64350+3425433)*1+lsi)*1]), &(inteval->stack[((hsi*54450+126621)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*90090+226281)*1+lsi)*1]), &(inteval->stack[((hsi*76230+4553733)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+126621)*1+lsi)*1]), &(inteval->stack[((hsi*120120+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*101640+2432265)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*154440+5188213)*1+lsi)*1]), &(inteval->stack[((hsi*130680+126621)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+126621)*1+lsi)*1]), &(inteval->stack[((hsi*193050+5700703)*1+lsi)*1]), &(inteval->stack[((hsi*163350+4433613)*1+lsi)*1]),55);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*34650+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*12705+102366)*1+lsi)*1]), &(inteval->stack[((hsi*11550+115071)*1+lsi)*1]),55);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*62700+4468263)*1+lsi)*1]), &(inteval->stack[((hsi*34650+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*31350+4722088)*1+lsi)*1]),55);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*94050+4530963)*1+lsi)*1]), &(inteval->stack[((hsi*62700+4468263)*1+lsi)*1]), &(inteval->stack[((hsi*56430+4753438)*1+lsi)*1]),55);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*126225+5128648)*1+lsi)*1]), &(inteval->stack[((hsi*94050+4530963)*1+lsi)*1]), &(inteval->stack[((hsi*84150+5342653)*1+lsi)*1]),55);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*157080+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*126225+5128648)*1+lsi)*1]), &(inteval->stack[((hsi*112200+5426803)*1+lsi)*1]),55);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*184800+5128648)*1+lsi)*1]), &(inteval->stack[((hsi*157080+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*138600+4809868)*1+lsi)*1]),55);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*207900+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*184800+5128648)*1+lsi)*1]), &(inteval->stack[((hsi*161700+5539003)*1+lsi)*1]),55);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*225225+5128648)*1+lsi)*1]), &(inteval->stack[((hsi*207900+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*180180+4948468)*1+lsi)*1]),55);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*235950+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*225225+5128648)*1+lsi)*1]), &(inteval->stack[((hsi*193050+5700703)*1+lsi)*1]),55);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*239580+4669563)*1+lsi)*1]), &(inteval->stack[((hsi*235950+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*199650+126621)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*588060+4909143)*1+lsi)*1]), &(inteval->stack[((hsi*239580+4669563)*1+lsi)*1]), &(inteval->stack[((hsi*196020+3505785)*1+lsi)*1]),4356);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*940896+5497203)*1+lsi)*1]), &(inteval->stack[((hsi*588060+4909143)*1+lsi)*1]), &(inteval->stack[((hsi*470448+2954985)*1+lsi)*1]),4356);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*1219680+6438099)*1+lsi)*1]), &(inteval->stack[((hsi*940896+5497203)*1+lsi)*1]), &(inteval->stack[((hsi*731808+3701805)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*1911+384366)*1+lsi)*1]), &(inteval->stack[((hsi*1638+386277)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+2959899)*1+lsi)*1]), &(inteval->stack[((hsi*2205+382161)*1+lsi)*1]), &(inteval->stack[((hsi*1911+384366)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+2965632)*1+lsi)*1]), &(inteval->stack[((hsi*5733+2959899)*1+lsi)*1]), &(inteval->stack[((hsi*4914+2954985)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+2975460)*1+lsi)*1]), &(inteval->stack[((hsi*2520+379641)*1+lsi)*1]), &(inteval->stack[((hsi*2205+382161)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+2982075)*1+lsi)*1]), &(inteval->stack[((hsi*6615+2975460)*1+lsi)*1]), &(inteval->stack[((hsi*5733+2959899)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+2993541)*1+lsi)*1]), &(inteval->stack[((hsi*11466+2982075)*1+lsi)*1]), &(inteval->stack[((hsi*9828+2965632)*1+lsi)*1]),21);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*7560+3009921)*1+lsi)*1]), &(inteval->stack[((hsi*2856+376785)*1+lsi)*1]), &(inteval->stack[((hsi*2520+379641)*1+lsi)*1]),21);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*13230+3017481)*1+lsi)*1]), &(inteval->stack[((hsi*7560+3009921)*1+lsi)*1]), &(inteval->stack[((hsi*6615+2975460)*1+lsi)*1]),21);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*19110+3030711)*1+lsi)*1]), &(inteval->stack[((hsi*13230+3017481)*1+lsi)*1]), &(inteval->stack[((hsi*11466+2982075)*1+lsi)*1]),21);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*24570+3049821)*1+lsi)*1]), &(inteval->stack[((hsi*19110+3030711)*1+lsi)*1]), &(inteval->stack[((hsi*16380+2993541)*1+lsi)*1]),21);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*8568+3074391)*1+lsi)*1]), &(inteval->stack[((hsi*3213+373572)*1+lsi)*1]), &(inteval->stack[((hsi*2856+376785)*1+lsi)*1]),21);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*15120+3082959)*1+lsi)*1]), &(inteval->stack[((hsi*8568+3074391)*1+lsi)*1]), &(inteval->stack[((hsi*7560+3009921)*1+lsi)*1]),21);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*22050+3098079)*1+lsi)*1]), &(inteval->stack[((hsi*15120+3082959)*1+lsi)*1]), &(inteval->stack[((hsi*13230+3017481)*1+lsi)*1]),21);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*28665+3120129)*1+lsi)*1]), &(inteval->stack[((hsi*22050+3098079)*1+lsi)*1]), &(inteval->stack[((hsi*19110+3030711)*1+lsi)*1]),21);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*34398+3148794)*1+lsi)*1]), &(inteval->stack[((hsi*28665+3120129)*1+lsi)*1]), &(inteval->stack[((hsi*24570+3049821)*1+lsi)*1]),21);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*9639+3183192)*1+lsi)*1]), &(inteval->stack[((hsi*3591+369981)*1+lsi)*1]), &(inteval->stack[((hsi*3213+373572)*1+lsi)*1]),21);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*17136+3192831)*1+lsi)*1]), &(inteval->stack[((hsi*9639+3183192)*1+lsi)*1]), &(inteval->stack[((hsi*8568+3074391)*1+lsi)*1]),21);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*25200+3209967)*1+lsi)*1]), &(inteval->stack[((hsi*17136+3192831)*1+lsi)*1]), &(inteval->stack[((hsi*15120+3082959)*1+lsi)*1]),21);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*33075+3235167)*1+lsi)*1]), &(inteval->stack[((hsi*25200+3209967)*1+lsi)*1]), &(inteval->stack[((hsi*22050+3098079)*1+lsi)*1]),21);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*40131+3268242)*1+lsi)*1]), &(inteval->stack[((hsi*33075+3235167)*1+lsi)*1]), &(inteval->stack[((hsi*28665+3120129)*1+lsi)*1]),21);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*45864+3308373)*1+lsi)*1]), &(inteval->stack[((hsi*40131+3268242)*1+lsi)*1]), &(inteval->stack[((hsi*34398+3148794)*1+lsi)*1]),21);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*10773+3354237)*1+lsi)*1]), &(inteval->stack[((hsi*3990+365991)*1+lsi)*1]), &(inteval->stack[((hsi*3591+369981)*1+lsi)*1]),21);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*19278+3365010)*1+lsi)*1]), &(inteval->stack[((hsi*10773+3354237)*1+lsi)*1]), &(inteval->stack[((hsi*9639+3183192)*1+lsi)*1]),21);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*28560+3384288)*1+lsi)*1]), &(inteval->stack[((hsi*19278+3365010)*1+lsi)*1]), &(inteval->stack[((hsi*17136+3192831)*1+lsi)*1]),21);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*37800+3412848)*1+lsi)*1]), &(inteval->stack[((hsi*28560+3384288)*1+lsi)*1]), &(inteval->stack[((hsi*25200+3209967)*1+lsi)*1]),21);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*46305+102366)*1+lsi)*1]), &(inteval->stack[((hsi*37800+3412848)*1+lsi)*1]), &(inteval->stack[((hsi*33075+3235167)*1+lsi)*1]),21);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*53508+3450648)*1+lsi)*1]), &(inteval->stack[((hsi*46305+102366)*1+lsi)*1]), &(inteval->stack[((hsi*40131+3268242)*1+lsi)*1]),21);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*58968+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*53508+3450648)*1+lsi)*1]), &(inteval->stack[((hsi*45864+3308373)*1+lsi)*1]),21);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*11970+148671)*1+lsi)*1]), &(inteval->stack[((hsi*4410+361581)*1+lsi)*1]), &(inteval->stack[((hsi*3990+365991)*1+lsi)*1]),21);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*21546+3504156)*1+lsi)*1]), &(inteval->stack[((hsi*11970+148671)*1+lsi)*1]), &(inteval->stack[((hsi*10773+3354237)*1+lsi)*1]),21);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*32130+160641)*1+lsi)*1]), &(inteval->stack[((hsi*21546+3504156)*1+lsi)*1]), &(inteval->stack[((hsi*19278+3365010)*1+lsi)*1]),21);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*42840+4492581)*1+lsi)*1]), &(inteval->stack[((hsi*32130+160641)*1+lsi)*1]), &(inteval->stack[((hsi*28560+3384288)*1+lsi)*1]),21);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*52920+3525702)*1+lsi)*1]), &(inteval->stack[((hsi*42840+4492581)*1+lsi)*1]), &(inteval->stack[((hsi*37800+3412848)*1+lsi)*1]),21);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*61740+192771)*1+lsi)*1]), &(inteval->stack[((hsi*52920+3525702)*1+lsi)*1]), &(inteval->stack[((hsi*46305+102366)*1+lsi)*1]),21);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*68796+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*61740+192771)*1+lsi)*1]), &(inteval->stack[((hsi*53508+3450648)*1+lsi)*1]),21);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*73710+3354237)*1+lsi)*1]), &(inteval->stack[((hsi*68796+2432265)*1+lsi)*1]), &(inteval->stack[((hsi*58968+4433613)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+4535421)*1+lsi)*1]), &(inteval->stack[((hsi*1638+386277)*1+lsi)*1]), &(inteval->stack[((hsi*1386+387915)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+4539579)*1+lsi)*1]), &(inteval->stack[((hsi*4914+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*4158+4535421)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+3183192)*1+lsi)*1]), &(inteval->stack[((hsi*9828+2965632)*1+lsi)*1]), &(inteval->stack[((hsi*8316+4539579)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+4535421)*1+lsi)*1]), &(inteval->stack[((hsi*16380+2993541)*1+lsi)*1]), &(inteval->stack[((hsi*13860+3183192)*1+lsi)*1]),21);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*29106+3183192)*1+lsi)*1]), &(inteval->stack[((hsi*24570+3049821)*1+lsi)*1]), &(inteval->stack[((hsi*20790+4535421)*1+lsi)*1]),21);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*38808+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*34398+3148794)*1+lsi)*1]), &(inteval->stack[((hsi*29106+3183192)*1+lsi)*1]),21);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*49896+2993793)*1+lsi)*1]), &(inteval->stack[((hsi*45864+3308373)*1+lsi)*1]), &(inteval->stack[((hsi*38808+2954985)*1+lsi)*1]),21);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*62370+3043689)*1+lsi)*1]), &(inteval->stack[((hsi*58968+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*49896+2993793)*1+lsi)*1]),21);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*76230+3106059)*1+lsi)*1]), &(inteval->stack[((hsi*73710+3354237)*1+lsi)*1]), &(inteval->stack[((hsi*62370+3043689)*1+lsi)*1]),21);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*13230+3182289)*1+lsi)*1]), &(inteval->stack[((hsi*4851+356730)*1+lsi)*1]), &(inteval->stack[((hsi*4410+361581)*1+lsi)*1]),21);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*23940+3195519)*1+lsi)*1]), &(inteval->stack[((hsi*13230+3182289)*1+lsi)*1]), &(inteval->stack[((hsi*11970+148671)*1+lsi)*1]),21);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*35910+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*23940+3195519)*1+lsi)*1]), &(inteval->stack[((hsi*21546+3504156)*1+lsi)*1]),21);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*48195+3182289)*1+lsi)*1]), &(inteval->stack[((hsi*35910+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*32130+160641)*1+lsi)*1]),21);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*59976+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*48195+3182289)*1+lsi)*1]), &(inteval->stack[((hsi*42840+4492581)*1+lsi)*1]),21);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*70560+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*59976+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*52920+3525702)*1+lsi)*1]),21);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*79380+3427947)*1+lsi)*1]), &(inteval->stack[((hsi*70560+4433613)*1+lsi)*1]), &(inteval->stack[((hsi*61740+192771)*1+lsi)*1]),21);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*85995+102366)*1+lsi)*1]), &(inteval->stack[((hsi*79380+3427947)*1+lsi)*1]), &(inteval->stack[((hsi*68796+2432265)*1+lsi)*1]),21);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*90090+3427947)*1+lsi)*1]), &(inteval->stack[((hsi*85995+102366)*1+lsi)*1]), &(inteval->stack[((hsi*73710+3354237)*1+lsi)*1]),21);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*91476+102366)*1+lsi)*1]), &(inteval->stack[((hsi*90090+3427947)*1+lsi)*1]), &(inteval->stack[((hsi*76230+3106059)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*274428+2954985)*1+lsi)*1]), &(inteval->stack[((hsi*121968+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*91476+102366)*1+lsi)*1]),4356);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*548856+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*365904+2589081)*1+lsi)*1]), &(inteval->stack[((hsi*274428+2954985)*1+lsi)*1]),4356);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*914760+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*731808+3701805)*1+lsi)*1]), &(inteval->stack[((hsi*548856+7657779)*1+lsi)*1]),4356);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*1372140+3225057)*1+lsi)*1]), &(inteval->stack[((hsi*1219680+6438099)*1+lsi)*1]), &(inteval->stack[((hsi*914760+2310297)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*6006+86856)*1+lsi)*1]), &(inteval->stack[((hsi*5148+92862)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+2325741)*1+lsi)*1]), &(inteval->stack[((hsi*6930+79926)*1+lsi)*1]), &(inteval->stack[((hsi*6006+86856)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+2343759)*1+lsi)*1]), &(inteval->stack[((hsi*18018+2325741)*1+lsi)*1]), &(inteval->stack[((hsi*15444+2310297)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+2374647)*1+lsi)*1]), &(inteval->stack[((hsi*7920+72006)*1+lsi)*1]), &(inteval->stack[((hsi*6930+79926)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+2395437)*1+lsi)*1]), &(inteval->stack[((hsi*20790+2374647)*1+lsi)*1]), &(inteval->stack[((hsi*18018+2325741)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+2431473)*1+lsi)*1]), &(inteval->stack[((hsi*36036+2395437)*1+lsi)*1]), &(inteval->stack[((hsi*30888+2343759)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+2482953)*1+lsi)*1]), &(inteval->stack[((hsi*8976+63030)*1+lsi)*1]), &(inteval->stack[((hsi*7920+72006)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+2506713)*1+lsi)*1]), &(inteval->stack[((hsi*23760+2482953)*1+lsi)*1]), &(inteval->stack[((hsi*20790+2374647)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+2548293)*1+lsi)*1]), &(inteval->stack[((hsi*41580+2506713)*1+lsi)*1]), &(inteval->stack[((hsi*36036+2395437)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+2608353)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2548293)*1+lsi)*1]), &(inteval->stack[((hsi*51480+2431473)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+2685573)*1+lsi)*1]), &(inteval->stack[((hsi*10098+52932)*1+lsi)*1]), &(inteval->stack[((hsi*8976+63030)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+2712501)*1+lsi)*1]), &(inteval->stack[((hsi*26928+2685573)*1+lsi)*1]), &(inteval->stack[((hsi*23760+2482953)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+2760021)*1+lsi)*1]), &(inteval->stack[((hsi*47520+2712501)*1+lsi)*1]), &(inteval->stack[((hsi*41580+2506713)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+2829321)*1+lsi)*1]), &(inteval->stack[((hsi*69300+2760021)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2548293)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+2919411)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2829321)*1+lsi)*1]), &(inteval->stack[((hsi*77220+2608353)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+102366)*1+lsi)*1]), &(inteval->stack[((hsi*11286+41646)*1+lsi)*1]), &(inteval->stack[((hsi*10098+52932)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+132660)*1+lsi)*1]), &(inteval->stack[((hsi*30294+102366)*1+lsi)*1]), &(inteval->stack[((hsi*26928+2685573)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+186516)*1+lsi)*1]), &(inteval->stack[((hsi*53856+132660)*1+lsi)*1]), &(inteval->stack[((hsi*47520+2712501)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+3027519)*1+lsi)*1]), &(inteval->stack[((hsi*79200+186516)*1+lsi)*1]), &(inteval->stack[((hsi*69300+2760021)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+2685573)*1+lsi)*1]), &(inteval->stack[((hsi*103950+3027519)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2829321)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*126126+2685573)*1+lsi)*1]), &(inteval->stack[((hsi*108108+2919411)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+2482953)*1+lsi)*1]), &(inteval->stack[((hsi*12540+29106)*1+lsi)*1]), &(inteval->stack[((hsi*11286+41646)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+265716)*1+lsi)*1]), &(inteval->stack[((hsi*33858+2482953)*1+lsi)*1]), &(inteval->stack[((hsi*30294+102366)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+2811699)*1+lsi)*1]), &(inteval->stack[((hsi*60588+265716)*1+lsi)*1]), &(inteval->stack[((hsi*53856+132660)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+7801923)*1+lsi)*1]), &(inteval->stack[((hsi*89760+2811699)*1+lsi)*1]), &(inteval->stack[((hsi*79200+186516)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+102366)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7801923)*1+lsi)*1]), &(inteval->stack[((hsi*103950+3027519)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+3027519)*1+lsi)*1]), &(inteval->stack[((hsi*145530+102366)*1+lsi)*1]), &(inteval->stack[((hsi*126126+2685573)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+7920723)*1+lsi)*1]), &(inteval->stack[((hsi*168168+3027519)*1+lsi)*1]), &(inteval->stack[((hsi*144144+7657779)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+2685573)*1+lsi)*1]), &(inteval->stack[((hsi*13860+15246)*1+lsi)*1]), &(inteval->stack[((hsi*12540+29106)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+2516811)*1+lsi)*1]), &(inteval->stack[((hsi*37620+2685573)*1+lsi)*1]), &(inteval->stack[((hsi*33858+2482953)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+8106051)*1+lsi)*1]), &(inteval->stack[((hsi*67716+2516811)*1+lsi)*1]), &(inteval->stack[((hsi*60588+265716)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+247896)*1+lsi)*1]), &(inteval->stack[((hsi*100980+8106051)*1+lsi)*1]), &(inteval->stack[((hsi*89760+2811699)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+2723193)*1+lsi)*1]), &(inteval->stack[((hsi*134640+247896)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7801923)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+8207031)*1+lsi)*1]), &(inteval->stack[((hsi*166320+2723193)*1+lsi)*1]), &(inteval->stack[((hsi*145530+102366)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+8401071)*1+lsi)*1]), &(inteval->stack[((hsi*194040+8207031)*1+lsi)*1]), &(inteval->stack[((hsi*168168+3027519)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+8617287)*1+lsi)*1]), &(inteval->stack[((hsi*216216+8401071)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7920723)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+3027519)*1+lsi)*1]), &(inteval->stack[((hsi*5148+92862)*1+lsi)*1]), &(inteval->stack[((hsi*4356+98010)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+29106)*1+lsi)*1]), &(inteval->stack[((hsi*15444+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*13068+3027519)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+3027519)*1+lsi)*1]), &(inteval->stack[((hsi*30888+2343759)*1+lsi)*1]), &(inteval->stack[((hsi*26136+29106)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+29106)*1+lsi)*1]), &(inteval->stack[((hsi*51480+2431473)*1+lsi)*1]), &(inteval->stack[((hsi*43560+3027519)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*77220+2608353)*1+lsi)*1]), &(inteval->stack[((hsi*65340+29106)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+29106)*1+lsi)*1]), &(inteval->stack[((hsi*108108+2919411)*1+lsi)*1]), &(inteval->stack[((hsi*91476+2310297)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+2889513)*1+lsi)*1]), &(inteval->stack[((hsi*144144+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*121968+29106)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7920723)*1+lsi)*1]), &(inteval->stack[((hsi*156816+2889513)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+2889513)*1+lsi)*1]), &(inteval->stack[((hsi*231660+8617287)*1+lsi)*1]), &(inteval->stack[((hsi*196020+7657779)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*15246+0)*1+lsi)*1]), &(inteval->stack[((hsi*13860+15246)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+7699359)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*37620+2685573)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+7774599)*1+lsi)*1]), &(inteval->stack[((hsi*75240+7699359)*1+lsi)*1]), &(inteval->stack[((hsi*67716+2516811)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*112860+7774599)*1+lsi)*1]), &(inteval->stack[((hsi*100980+8106051)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*151470+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*134640+247896)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*188496+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*166320+2723193)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*221760+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*194040+8207031)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*249480+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*216216+8401071)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*270270+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*231660+8617287)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*283140+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*239580+2889513)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*718740+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*287496+2310297)*1+lsi)*1]), &(inteval->stack[((hsi*239580+4669563)*1+lsi)*1]),4356);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*1176120+8376519)*1+lsi)*1]), &(inteval->stack[((hsi*718740+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*588060+4909143)*1+lsi)*1]),4356);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*1568160+9552639)*1+lsi)*1]), &(inteval->stack[((hsi*1176120+8376519)*1+lsi)*1]), &(inteval->stack[((hsi*940896+5497203)*1+lsi)*1]),4356);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*1829520+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+9552639)*1+lsi)*1]), &(inteval->stack[((hsi*1219680+6438099)*1+lsi)*1]),4356);
HRRPart0bra0ket0hh(inteval, &(inteval->stack[((hsi*1920996+389301)*1+lsi)*1]), &(inteval->stack[((hsi*1829520+7657779)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+3225057)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1920996+389301)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
