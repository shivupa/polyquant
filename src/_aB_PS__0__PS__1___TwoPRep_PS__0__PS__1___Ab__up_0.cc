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
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdf.h>
#include <HRRPart0bra0ket0pdg.h>
#include <HRRPart0bra0ket0pdh.h>
#include <HRRPart0bra0ket0pdi.h>
#include <HRRPart0bra0ket0pdk.h>
#include <HRRPart0bra0ket0pdl.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pff.h>
#include <HRRPart0bra0ket0pfg.h>
#include <HRRPart0bra0ket0pfh.h>
#include <HRRPart0bra0ket0pfi.h>
#include <HRRPart0bra0ket0pfk.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgd.h>
#include <HRRPart0bra0ket0pgf.h>
#include <HRRPart0bra0ket0pgg.h>
#include <HRRPart0bra0ket0pgh.h>
#include <HRRPart0bra0ket0pgi.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0phd.h>
#include <HRRPart0bra0ket0phf.h>
#include <HRRPart0bra0ket0phg.h>
#include <HRRPart0bra0ket0phh.h>
#include <HRRPart0bra0ket0php.h>
#include <HRRPart0bra0ket0pid.h>
#include <HRRPart0bra0ket0pif.h>
#include <HRRPart0bra0ket0pig.h>
#include <HRRPart0bra0ket0pip.h>
#include <HRRPart0bra0ket0pkd.h>
#include <HRRPart0bra0ket0pkf.h>
#include <HRRPart0bra0ket0pkp.h>
#include <HRRPart0bra0ket0pld.h>
#include <HRRPart0bra0ket0plp.h>
#include <HRRPart0bra0ket0pmp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0pph.h>
#include <HRRPart0bra0ket0ppi.h>
#include <HRRPart0bra0ket0ppk.h>
#include <HRRPart0bra0ket0ppl.h>
#include <HRRPart0bra0ket0ppm.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psi.h>
#include <HRRPart0bra0ket0psk.h>
#include <HRRPart0bra0ket0psl.h>
#include <HRRPart0bra0ket0psm.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart0bra0ket0psps.h>
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
#include <_aB_PS__0__PS__1___TwoPRep_PS__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_PS__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2405601)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_PS__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*7098+2284905)*1+lsi)*1]), &(inteval->stack[((hsi*6084+2292003)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+21398589)*1+lsi)*1]), &(inteval->stack[((hsi*8190+2276715)*1+lsi)*1]), &(inteval->stack[((hsi*7098+2284905)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+21419883)*1+lsi)*1]), &(inteval->stack[((hsi*21294+21398589)*1+lsi)*1]), &(inteval->stack[((hsi*18252+21380337)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+21456387)*1+lsi)*1]), &(inteval->stack[((hsi*9360+2267355)*1+lsi)*1]), &(inteval->stack[((hsi*8190+2276715)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+21480957)*1+lsi)*1]), &(inteval->stack[((hsi*24570+21456387)*1+lsi)*1]), &(inteval->stack[((hsi*21294+21398589)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+21523545)*1+lsi)*1]), &(inteval->stack[((hsi*42588+21480957)*1+lsi)*1]), &(inteval->stack[((hsi*36504+21419883)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+21584385)*1+lsi)*1]), &(inteval->stack[((hsi*10608+2256747)*1+lsi)*1]), &(inteval->stack[((hsi*9360+2267355)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+21612465)*1+lsi)*1]), &(inteval->stack[((hsi*28080+21584385)*1+lsi)*1]), &(inteval->stack[((hsi*24570+21456387)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+21661605)*1+lsi)*1]), &(inteval->stack[((hsi*49140+21612465)*1+lsi)*1]), &(inteval->stack[((hsi*42588+21480957)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+21732585)*1+lsi)*1]), &(inteval->stack[((hsi*70980+21661605)*1+lsi)*1]), &(inteval->stack[((hsi*60840+21523545)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+21456387)*1+lsi)*1]), &(inteval->stack[((hsi*11934+2244813)*1+lsi)*1]), &(inteval->stack[((hsi*10608+2256747)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+21823845)*1+lsi)*1]), &(inteval->stack[((hsi*31824+21456387)*1+lsi)*1]), &(inteval->stack[((hsi*28080+21584385)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+21880005)*1+lsi)*1]), &(inteval->stack[((hsi*56160+21823845)*1+lsi)*1]), &(inteval->stack[((hsi*49140+21612465)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+21961905)*1+lsi)*1]), &(inteval->stack[((hsi*81900+21880005)*1+lsi)*1]), &(inteval->stack[((hsi*70980+21661605)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+21584385)*1+lsi)*1]), &(inteval->stack[((hsi*106470+21961905)*1+lsi)*1]), &(inteval->stack[((hsi*91260+21732585)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+22068375)*1+lsi)*1]), &(inteval->stack[((hsi*13338+2231475)*1+lsi)*1]), &(inteval->stack[((hsi*11934+2244813)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+22104177)*1+lsi)*1]), &(inteval->stack[((hsi*35802+22068375)*1+lsi)*1]), &(inteval->stack[((hsi*31824+21456387)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+22167825)*1+lsi)*1]), &(inteval->stack[((hsi*63648+22104177)*1+lsi)*1]), &(inteval->stack[((hsi*56160+21823845)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+22261425)*1+lsi)*1]), &(inteval->stack[((hsi*93600+22167825)*1+lsi)*1]), &(inteval->stack[((hsi*81900+21880005)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+22384275)*1+lsi)*1]), &(inteval->stack[((hsi*122850+22261425)*1+lsi)*1]), &(inteval->stack[((hsi*106470+21961905)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+21823845)*1+lsi)*1]), &(inteval->stack[((hsi*149058+22384275)*1+lsi)*1]), &(inteval->stack[((hsi*127764+21584385)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+21994197)*1+lsi)*1]), &(inteval->stack[((hsi*14820+2216655)*1+lsi)*1]), &(inteval->stack[((hsi*13338+2231475)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+22533333)*1+lsi)*1]), &(inteval->stack[((hsi*40014+21994197)*1+lsi)*1]), &(inteval->stack[((hsi*35802+22068375)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+22604937)*1+lsi)*1]), &(inteval->stack[((hsi*71604+22533333)*1+lsi)*1]), &(inteval->stack[((hsi*63648+22104177)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+22711017)*1+lsi)*1]), &(inteval->stack[((hsi*106080+22604937)*1+lsi)*1]), &(inteval->stack[((hsi*93600+22167825)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+22034211)*1+lsi)*1]), &(inteval->stack[((hsi*140400+22711017)*1+lsi)*1]), &(inteval->stack[((hsi*122850+22261425)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+22851417)*1+lsi)*1]), &(inteval->stack[((hsi*171990+22034211)*1+lsi)*1]), &(inteval->stack[((hsi*149058+22384275)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+22206201)*1+lsi)*1]), &(inteval->stack[((hsi*198744+22851417)*1+lsi)*1]), &(inteval->stack[((hsi*170352+21823845)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+22425225)*1+lsi)*1]), &(inteval->stack[((hsi*16380+2200275)*1+lsi)*1]), &(inteval->stack[((hsi*14820+2216655)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+23050161)*1+lsi)*1]), &(inteval->stack[((hsi*44460+22425225)*1+lsi)*1]), &(inteval->stack[((hsi*40014+21994197)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+23130189)*1+lsi)*1]), &(inteval->stack[((hsi*80028+23050161)*1+lsi)*1]), &(inteval->stack[((hsi*71604+22533333)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+23249529)*1+lsi)*1]), &(inteval->stack[((hsi*119340+23130189)*1+lsi)*1]), &(inteval->stack[((hsi*106080+22604937)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+22469685)*1+lsi)*1]), &(inteval->stack[((hsi*159120+23249529)*1+lsi)*1]), &(inteval->stack[((hsi*140400+22711017)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+23408649)*1+lsi)*1]), &(inteval->stack[((hsi*196560+22469685)*1+lsi)*1]), &(inteval->stack[((hsi*171990+22034211)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+23637969)*1+lsi)*1]), &(inteval->stack[((hsi*229320+23408649)*1+lsi)*1]), &(inteval->stack[((hsi*198744+22851417)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+22666245)*1+lsi)*1]), &(inteval->stack[((hsi*255528+23637969)*1+lsi)*1]), &(inteval->stack[((hsi*219024+22206201)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+21994197)*1+lsi)*1]), &(inteval->stack[((hsi*6084+2292003)*1+lsi)*1]), &(inteval->stack[((hsi*5148+2298087)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+22009641)*1+lsi)*1]), &(inteval->stack[((hsi*18252+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*15444+21994197)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+22040529)*1+lsi)*1]), &(inteval->stack[((hsi*36504+21419883)*1+lsi)*1]), &(inteval->stack[((hsi*30888+22009641)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*60840+21523545)*1+lsi)*1]), &(inteval->stack[((hsi*51480+22040529)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+21994197)*1+lsi)*1]), &(inteval->stack[((hsi*91260+21732585)*1+lsi)*1]), &(inteval->stack[((hsi*77220+21380337)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*127764+21584385)*1+lsi)*1]), &(inteval->stack[((hsi*108108+21994197)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+21524481)*1+lsi)*1]), &(inteval->stack[((hsi*170352+21823845)*1+lsi)*1]), &(inteval->stack[((hsi*144144+21380337)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+21709809)*1+lsi)*1]), &(inteval->stack[((hsi*219024+22206201)*1+lsi)*1]), &(inteval->stack[((hsi*185328+21524481)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+21941469)*1+lsi)*1]), &(inteval->stack[((hsi*273780+22666245)*1+lsi)*1]), &(inteval->stack[((hsi*231660+21709809)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*18018+2182257)*1+lsi)*1]), &(inteval->stack[((hsi*16380+2200275)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+21429477)*1+lsi)*1]), &(inteval->stack[((hsi*49140+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*44460+22425225)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+21518397)*1+lsi)*1]), &(inteval->stack[((hsi*88920+21429477)*1+lsi)*1]), &(inteval->stack[((hsi*80028+23050161)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+21651777)*1+lsi)*1]), &(inteval->stack[((hsi*133380+21518397)*1+lsi)*1]), &(inteval->stack[((hsi*119340+23130189)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+22940025)*1+lsi)*1]), &(inteval->stack[((hsi*179010+21651777)*1+lsi)*1]), &(inteval->stack[((hsi*159120+23249529)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*222768+22940025)*1+lsi)*1]), &(inteval->stack[((hsi*196560+22469685)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+22940025)*1+lsi)*1]), &(inteval->stack[((hsi*262080+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*229320+23408649)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*294840+22940025)*1+lsi)*1]), &(inteval->stack[((hsi*255528+23637969)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+22224609)*1+lsi)*1]), &(inteval->stack[((hsi*319410+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*273780+22666245)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*334620+22224609)*1+lsi)*1]), &(inteval->stack[((hsi*283140+21941469)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+2182257)*1+lsi)*1]), &(inteval->stack[((hsi*8281+2160872)*1+lsi)*1]), &(inteval->stack[((hsi*7098+2169153)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+2203551)*1+lsi)*1]), &(inteval->stack[((hsi*9555+2151317)*1+lsi)*1]), &(inteval->stack[((hsi*8281+2160872)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+2228394)*1+lsi)*1]), &(inteval->stack[((hsi*24843+2203551)*1+lsi)*1]), &(inteval->stack[((hsi*21294+2182257)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+2270982)*1+lsi)*1]), &(inteval->stack[((hsi*10920+2140397)*1+lsi)*1]), &(inteval->stack[((hsi*9555+2151317)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2270982)*1+lsi)*1]), &(inteval->stack[((hsi*24843+2203551)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+21769791)*1+lsi)*1]), &(inteval->stack[((hsi*49686+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*42588+2228394)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+21840771)*1+lsi)*1]), &(inteval->stack[((hsi*12376+2128021)*1+lsi)*1]), &(inteval->stack[((hsi*10920+2140397)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+21873531)*1+lsi)*1]), &(inteval->stack[((hsi*32760+21840771)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2270982)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+21930861)*1+lsi)*1]), &(inteval->stack[((hsi*57330+21873531)*1+lsi)*1]), &(inteval->stack[((hsi*49686+21720105)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+22013671)*1+lsi)*1]), &(inteval->stack[((hsi*82810+21930861)*1+lsi)*1]), &(inteval->stack[((hsi*70980+21769791)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*13923+2114098)*1+lsi)*1]), &(inteval->stack[((hsi*12376+2128021)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+22120141)*1+lsi)*1]), &(inteval->stack[((hsi*37128+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*32760+21840771)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+22185661)*1+lsi)*1]), &(inteval->stack[((hsi*65520+22120141)*1+lsi)*1]), &(inteval->stack[((hsi*57330+21873531)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+22281211)*1+lsi)*1]), &(inteval->stack[((hsi*95550+22185661)*1+lsi)*1]), &(inteval->stack[((hsi*82810+21930861)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+21840771)*1+lsi)*1]), &(inteval->stack[((hsi*124215+22281211)*1+lsi)*1]), &(inteval->stack[((hsi*106470+22013671)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+22405426)*1+lsi)*1]), &(inteval->stack[((hsi*15561+2098537)*1+lsi)*1]), &(inteval->stack[((hsi*13923+2114098)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+22447195)*1+lsi)*1]), &(inteval->stack[((hsi*41769+22405426)*1+lsi)*1]), &(inteval->stack[((hsi*37128+21720105)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+22521451)*1+lsi)*1]), &(inteval->stack[((hsi*74256+22447195)*1+lsi)*1]), &(inteval->stack[((hsi*65520+22120141)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+22630651)*1+lsi)*1]), &(inteval->stack[((hsi*109200+22521451)*1+lsi)*1]), &(inteval->stack[((hsi*95550+22185661)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+22773976)*1+lsi)*1]), &(inteval->stack[((hsi*143325+22630651)*1+lsi)*1]), &(inteval->stack[((hsi*124215+22281211)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+22120141)*1+lsi)*1]), &(inteval->stack[((hsi*173901+22773976)*1+lsi)*1]), &(inteval->stack[((hsi*149058+21840771)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+22318885)*1+lsi)*1]), &(inteval->stack[((hsi*17290+2081247)*1+lsi)*1]), &(inteval->stack[((hsi*15561+2098537)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+22947877)*1+lsi)*1]), &(inteval->stack[((hsi*46683+22318885)*1+lsi)*1]), &(inteval->stack[((hsi*41769+22405426)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+23031415)*1+lsi)*1]), &(inteval->stack[((hsi*83538+22947877)*1+lsi)*1]), &(inteval->stack[((hsi*74256+22447195)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+23155175)*1+lsi)*1]), &(inteval->stack[((hsi*123760+23031415)*1+lsi)*1]), &(inteval->stack[((hsi*109200+22521451)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+22365568)*1+lsi)*1]), &(inteval->stack[((hsi*163800+23155175)*1+lsi)*1]), &(inteval->stack[((hsi*143325+22630651)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+23318975)*1+lsi)*1]), &(inteval->stack[((hsi*200655+22365568)*1+lsi)*1]), &(inteval->stack[((hsi*173901+22773976)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+22566223)*1+lsi)*1]), &(inteval->stack[((hsi*231868+23318975)*1+lsi)*1]), &(inteval->stack[((hsi*198744+22120141)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+22821751)*1+lsi)*1]), &(inteval->stack[((hsi*19110+2062137)*1+lsi)*1]), &(inteval->stack[((hsi*17290+2081247)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+23550843)*1+lsi)*1]), &(inteval->stack[((hsi*51870+22821751)*1+lsi)*1]), &(inteval->stack[((hsi*46683+22318885)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+23644209)*1+lsi)*1]), &(inteval->stack[((hsi*93366+23550843)*1+lsi)*1]), &(inteval->stack[((hsi*83538+22947877)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+23783439)*1+lsi)*1]), &(inteval->stack[((hsi*139230+23644209)*1+lsi)*1]), &(inteval->stack[((hsi*123760+23031415)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+22873621)*1+lsi)*1]), &(inteval->stack[((hsi*185640+23783439)*1+lsi)*1]), &(inteval->stack[((hsi*163800+23155175)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+23969079)*1+lsi)*1]), &(inteval->stack[((hsi*229320+22873621)*1+lsi)*1]), &(inteval->stack[((hsi*200655+22365568)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+24236619)*1+lsi)*1]), &(inteval->stack[((hsi*267540+23969079)*1+lsi)*1]), &(inteval->stack[((hsi*231868+23318975)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+23102941)*1+lsi)*1]), &(inteval->stack[((hsi*298116+24236619)*1+lsi)*1]), &(inteval->stack[((hsi*255528+22566223)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+22318885)*1+lsi)*1]), &(inteval->stack[((hsi*7098+2169153)*1+lsi)*1]), &(inteval->stack[((hsi*6006+2176251)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+22336903)*1+lsi)*1]), &(inteval->stack[((hsi*21294+2182257)*1+lsi)*1]), &(inteval->stack[((hsi*18018+22318885)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+22372939)*1+lsi)*1]), &(inteval->stack[((hsi*42588+2228394)*1+lsi)*1]), &(inteval->stack[((hsi*36036+22336903)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+2081247)*1+lsi)*1]), &(inteval->stack[((hsi*70980+21769791)*1+lsi)*1]), &(inteval->stack[((hsi*60060+22372939)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+22318885)*1+lsi)*1]), &(inteval->stack[((hsi*106470+22013671)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2081247)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+2081247)*1+lsi)*1]), &(inteval->stack[((hsi*149058+21840771)*1+lsi)*1]), &(inteval->stack[((hsi*126126+22318885)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*198744+22120141)*1+lsi)*1]), &(inteval->stack[((hsi*168168+2081247)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+21936321)*1+lsi)*1]), &(inteval->stack[((hsi*255528+22566223)*1+lsi)*1]), &(inteval->stack[((hsi*216216+21720105)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+22206591)*1+lsi)*1]), &(inteval->stack[((hsi*319410+23102941)*1+lsi)*1]), &(inteval->stack[((hsi*270270+21936321)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*21021+2041116)*1+lsi)*1]), &(inteval->stack[((hsi*19110+2062137)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+21777435)*1+lsi)*1]), &(inteval->stack[((hsi*57330+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*51870+22821751)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+22536921)*1+lsi)*1]), &(inteval->stack[((hsi*103740+21777435)*1+lsi)*1]), &(inteval->stack[((hsi*93366+23550843)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*155610+22536921)*1+lsi)*1]), &(inteval->stack[((hsi*139230+23644209)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+23422351)*1+lsi)*1]), &(inteval->stack[((hsi*208845+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*185640+23783439)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*259896+23422351)*1+lsi)*1]), &(inteval->stack[((hsi*229320+22873621)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+22536921)*1+lsi)*1]), &(inteval->stack[((hsi*305760+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*267540+23969079)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+23422351)*1+lsi)*1]), &(inteval->stack[((hsi*343980+22536921)*1+lsi)*1]), &(inteval->stack[((hsi*298116+24236619)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+22536921)*1+lsi)*1]), &(inteval->stack[((hsi*372645+23422351)*1+lsi)*1]), &(inteval->stack[((hsi*319410+23102941)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*390390+22536921)*1+lsi)*1]), &(inteval->stack[((hsi*330330+22206591)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+22116501)*1+lsi)*1]), &(inteval->stack[((hsi*396396+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*339768+21380337)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+2041116)*1+lsi)*1]), &(inteval->stack[((hsi*9555+2016441)*1+lsi)*1]), &(inteval->stack[((hsi*8190+2025996)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+2065686)*1+lsi)*1]), &(inteval->stack[((hsi*11025+2005416)*1+lsi)*1]), &(inteval->stack[((hsi*9555+2016441)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+2094351)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2065686)*1+lsi)*1]), &(inteval->stack[((hsi*24570+2041116)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+2143491)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1992816)*1+lsi)*1]), &(inteval->stack[((hsi*11025+2005416)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+2176566)*1+lsi)*1]), &(inteval->stack[((hsi*33075+2143491)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2065686)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*57330+2176566)*1+lsi)*1]), &(inteval->stack[((hsi*49140+2094351)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+2233896)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1978536)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1992816)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+23217705)*1+lsi)*1]), &(inteval->stack[((hsi*37800+2233896)*1+lsi)*1]), &(inteval->stack[((hsi*33075+2143491)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+23283855)*1+lsi)*1]), &(inteval->stack[((hsi*66150+23217705)*1+lsi)*1]), &(inteval->stack[((hsi*57330+2176566)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+23379405)*1+lsi)*1]), &(inteval->stack[((hsi*95550+23283855)*1+lsi)*1]), &(inteval->stack[((hsi*81900+23135805)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+2143491)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1962471)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1978536)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+23502255)*1+lsi)*1]), &(inteval->stack[((hsi*42840+2143491)*1+lsi)*1]), &(inteval->stack[((hsi*37800+2233896)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+2186331)*1+lsi)*1]), &(inteval->stack[((hsi*75600+23502255)*1+lsi)*1]), &(inteval->stack[((hsi*66150+23217705)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+23577855)*1+lsi)*1]), &(inteval->stack[((hsi*110250+2186331)*1+lsi)*1]), &(inteval->stack[((hsi*95550+23283855)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+23721180)*1+lsi)*1]), &(inteval->stack[((hsi*143325+23577855)*1+lsi)*1]), &(inteval->stack[((hsi*122850+23379405)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+23217705)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1944516)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1962471)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+23265900)*1+lsi)*1]), &(inteval->stack[((hsi*48195+23217705)*1+lsi)*1]), &(inteval->stack[((hsi*42840+2143491)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+23893170)*1+lsi)*1]), &(inteval->stack[((hsi*85680+23265900)*1+lsi)*1]), &(inteval->stack[((hsi*75600+23502255)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+24019170)*1+lsi)*1]), &(inteval->stack[((hsi*126000+23893170)*1+lsi)*1]), &(inteval->stack[((hsi*110250+2186331)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+24184545)*1+lsi)*1]), &(inteval->stack[((hsi*165375+24019170)*1+lsi)*1]), &(inteval->stack[((hsi*143325+23577855)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+24385200)*1+lsi)*1]), &(inteval->stack[((hsi*200655+24184545)*1+lsi)*1]), &(inteval->stack[((hsi*171990+23721180)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+23502255)*1+lsi)*1]), &(inteval->stack[((hsi*19950+1924566)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1944516)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+23556120)*1+lsi)*1]), &(inteval->stack[((hsi*53865+23502255)*1+lsi)*1]), &(inteval->stack[((hsi*48195+23217705)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+2143491)*1+lsi)*1]), &(inteval->stack[((hsi*96390+23556120)*1+lsi)*1]), &(inteval->stack[((hsi*85680+23265900)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+24614520)*1+lsi)*1]), &(inteval->stack[((hsi*142800+2143491)*1+lsi)*1]), &(inteval->stack[((hsi*126000+23893170)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+24803520)*1+lsi)*1]), &(inteval->stack[((hsi*189000+24614520)*1+lsi)*1]), &(inteval->stack[((hsi*165375+24019170)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+23893170)*1+lsi)*1]), &(inteval->stack[((hsi*231525+24803520)*1+lsi)*1]), &(inteval->stack[((hsi*200655+24184545)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+25035045)*1+lsi)*1]), &(inteval->stack[((hsi*267540+23893170)*1+lsi)*1]), &(inteval->stack[((hsi*229320+24385200)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+24160710)*1+lsi)*1]), &(inteval->stack[((hsi*22050+1902516)*1+lsi)*1]), &(inteval->stack[((hsi*19950+1924566)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+24220560)*1+lsi)*1]), &(inteval->stack[((hsi*59850+24160710)*1+lsi)*1]), &(inteval->stack[((hsi*53865+23502255)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+23217705)*1+lsi)*1]), &(inteval->stack[((hsi*107730+24220560)*1+lsi)*1]), &(inteval->stack[((hsi*96390+23556120)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+23502255)*1+lsi)*1]), &(inteval->stack[((hsi*160650+23217705)*1+lsi)*1]), &(inteval->stack[((hsi*142800+2143491)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+25329885)*1+lsi)*1]), &(inteval->stack[((hsi*214200+23502255)*1+lsi)*1]), &(inteval->stack[((hsi*189000+24614520)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+25594485)*1+lsi)*1]), &(inteval->stack[((hsi*264600+25329885)*1+lsi)*1]), &(inteval->stack[((hsi*231525+24803520)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+24614520)*1+lsi)*1]), &(inteval->stack[((hsi*308700+25594485)*1+lsi)*1]), &(inteval->stack[((hsi*267540+23893170)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+25903185)*1+lsi)*1]), &(inteval->stack[((hsi*343980+24614520)*1+lsi)*1]), &(inteval->stack[((hsi*294840+25035045)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+23893170)*1+lsi)*1]), &(inteval->stack[((hsi*8190+2025996)*1+lsi)*1]), &(inteval->stack[((hsi*6930+2034186)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+23913960)*1+lsi)*1]), &(inteval->stack[((hsi*24570+2041116)*1+lsi)*1]), &(inteval->stack[((hsi*20790+23893170)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+23955540)*1+lsi)*1]), &(inteval->stack[((hsi*49140+2094351)*1+lsi)*1]), &(inteval->stack[((hsi*41580+23913960)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+1924566)*1+lsi)*1]), &(inteval->stack[((hsi*81900+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*69300+23955540)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+2028516)*1+lsi)*1]), &(inteval->stack[((hsi*122850+23379405)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1924566)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+23893170)*1+lsi)*1]), &(inteval->stack[((hsi*171990+23721180)*1+lsi)*1]), &(inteval->stack[((hsi*145530+2028516)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+1924566)*1+lsi)*1]), &(inteval->stack[((hsi*229320+24385200)*1+lsi)*1]), &(inteval->stack[((hsi*194040+23893170)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+23716455)*1+lsi)*1]), &(inteval->stack[((hsi*294840+25035045)*1+lsi)*1]), &(inteval->stack[((hsi*249480+1924566)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+26271735)*1+lsi)*1]), &(inteval->stack[((hsi*368550+25903185)*1+lsi)*1]), &(inteval->stack[((hsi*311850+23716455)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+23716455)*1+lsi)*1]), &(inteval->stack[((hsi*24255+1878261)*1+lsi)*1]), &(inteval->stack[((hsi*22050+1902516)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+1878261)*1+lsi)*1]), &(inteval->stack[((hsi*66150+23716455)*1+lsi)*1]), &(inteval->stack[((hsi*59850+24160710)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+23716455)*1+lsi)*1]), &(inteval->stack[((hsi*119700+1878261)*1+lsi)*1]), &(inteval->stack[((hsi*107730+24220560)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+23896005)*1+lsi)*1]), &(inteval->stack[((hsi*179550+23716455)*1+lsi)*1]), &(inteval->stack[((hsi*160650+23217705)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+24136980)*1+lsi)*1]), &(inteval->stack[((hsi*240975+23896005)*1+lsi)*1]), &(inteval->stack[((hsi*214200+23502255)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*299880+24136980)*1+lsi)*1]), &(inteval->stack[((hsi*264600+25329885)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+23488605)*1+lsi)*1]), &(inteval->stack[((hsi*352800+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*308700+25594485)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+24958500)*1+lsi)*1]), &(inteval->stack[((hsi*396900+23488605)*1+lsi)*1]), &(inteval->stack[((hsi*343980+24614520)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*429975+24958500)*1+lsi)*1]), &(inteval->stack[((hsi*368550+25903185)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+23586255)*1+lsi)*1]), &(inteval->stack[((hsi*450450+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*381150+26271735)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+24043635)*1+lsi)*1]), &(inteval->stack[((hsi*457380+23586255)*1+lsi)*1]), &(inteval->stack[((hsi*396396+21720105)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+25232823)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+24043635)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+22116501)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1850061)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1860981)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+1878261)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1837461)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1850061)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+23163885)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1878261)*1+lsi)*1]), &(inteval->stack[((hsi*28080+23135805)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*14400+1823061)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1837461)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+1911021)*1+lsi)*1]), &(inteval->stack[((hsi*37800+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1878261)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+23220045)*1+lsi)*1]), &(inteval->stack[((hsi*65520+1911021)*1+lsi)*1]), &(inteval->stack[((hsi*56160+23163885)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+21757905)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1806741)*1+lsi)*1]), &(inteval->stack[((hsi*14400+1823061)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+1976541)*1+lsi)*1]), &(inteval->stack[((hsi*43200+21757905)*1+lsi)*1]), &(inteval->stack[((hsi*37800+21720105)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+21801105)*1+lsi)*1]), &(inteval->stack[((hsi*75600+1976541)*1+lsi)*1]), &(inteval->stack[((hsi*65520+1911021)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+23313645)*1+lsi)*1]), &(inteval->stack[((hsi*109200+21801105)*1+lsi)*1]), &(inteval->stack[((hsi*93600+23220045)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+2052141)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1788381)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1806741)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+21910305)*1+lsi)*1]), &(inteval->stack[((hsi*48960+2052141)*1+lsi)*1]), &(inteval->stack[((hsi*43200+21757905)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+2101101)*1+lsi)*1]), &(inteval->stack[((hsi*86400+21910305)*1+lsi)*1]), &(inteval->stack[((hsi*75600+1976541)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+1878261)*1+lsi)*1]), &(inteval->stack[((hsi*126000+2101101)*1+lsi)*1]), &(inteval->stack[((hsi*109200+21801105)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*163800+1878261)*1+lsi)*1]), &(inteval->stack[((hsi*140400+23313645)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*20520+1767861)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1788381)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+21775185)*1+lsi)*1]), &(inteval->stack[((hsi*55080+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*48960+2052141)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+27467991)*1+lsi)*1]), &(inteval->stack[((hsi*97920+21775185)*1+lsi)*1]), &(inteval->stack[((hsi*86400+21910305)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+21873105)*1+lsi)*1]), &(inteval->stack[((hsi*144000+27467991)*1+lsi)*1]), &(inteval->stack[((hsi*126000+2101101)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+2042061)*1+lsi)*1]), &(inteval->stack[((hsi*189000+21873105)*1+lsi)*1]), &(inteval->stack[((hsi*163800+1878261)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+27611991)*1+lsi)*1]), &(inteval->stack[((hsi*229320+2042061)*1+lsi)*1]), &(inteval->stack[((hsi*196560+27271431)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+1878261)*1+lsi)*1]), &(inteval->stack[((hsi*22800+1745061)*1+lsi)*1]), &(inteval->stack[((hsi*20520+1767861)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+23454045)*1+lsi)*1]), &(inteval->stack[((hsi*61560+1878261)*1+lsi)*1]), &(inteval->stack[((hsi*55080+21720105)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+27874071)*1+lsi)*1]), &(inteval->stack[((hsi*110160+23454045)*1+lsi)*1]), &(inteval->stack[((hsi*97920+21775185)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+28037271)*1+lsi)*1]), &(inteval->stack[((hsi*163200+27874071)*1+lsi)*1]), &(inteval->stack[((hsi*144000+27467991)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+28253271)*1+lsi)*1]), &(inteval->stack[((hsi*216000+28037271)*1+lsi)*1]), &(inteval->stack[((hsi*189000+21873105)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*264600+28253271)*1+lsi)*1]), &(inteval->stack[((hsi*229320+2042061)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+1939821)*1+lsi)*1]), &(inteval->stack[((hsi*305760+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*262080+27611991)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+27467991)*1+lsi)*1]), &(inteval->stack[((hsi*25200+1719861)*1+lsi)*1]), &(inteval->stack[((hsi*22800+1745061)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+28517871)*1+lsi)*1]), &(inteval->stack[((hsi*68400+27467991)*1+lsi)*1]), &(inteval->stack[((hsi*61560+1878261)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+28640991)*1+lsi)*1]), &(inteval->stack[((hsi*123120+28517871)*1+lsi)*1]), &(inteval->stack[((hsi*110160+23454045)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+28824591)*1+lsi)*1]), &(inteval->stack[((hsi*183600+28640991)*1+lsi)*1]), &(inteval->stack[((hsi*163200+27874071)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+29069391)*1+lsi)*1]), &(inteval->stack[((hsi*244800+28824591)*1+lsi)*1]), &(inteval->stack[((hsi*216000+28037271)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+27874071)*1+lsi)*1]), &(inteval->stack[((hsi*302400+29069391)*1+lsi)*1]), &(inteval->stack[((hsi*264600+28253271)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+29371791)*1+lsi)*1]), &(inteval->stack[((hsi*352800+27874071)*1+lsi)*1]), &(inteval->stack[((hsi*305760+21720105)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+29764911)*1+lsi)*1]), &(inteval->stack[((hsi*393120+29371791)*1+lsi)*1]), &(inteval->stack[((hsi*336960+1939821)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1860981)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1870341)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+21743865)*1+lsi)*1]), &(inteval->stack[((hsi*28080+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*23760+21720105)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+21791385)*1+lsi)*1]), &(inteval->stack[((hsi*56160+23163885)*1+lsi)*1]), &(inteval->stack[((hsi*47520+21743865)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+28226871)*1+lsi)*1]), &(inteval->stack[((hsi*93600+23220045)*1+lsi)*1]), &(inteval->stack[((hsi*79200+21791385)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*140400+23313645)*1+lsi)*1]), &(inteval->stack[((hsi*118800+28226871)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*196560+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*166320+21720105)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*262080+27611991)*1+lsi)*1]), &(inteval->stack[((hsi*221760+23135805)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*336960+1939821)*1+lsi)*1]), &(inteval->stack[((hsi*285120+21720105)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+1745061)*1+lsi)*1]), &(inteval->stack[((hsi*421200+29764911)*1+lsi)*1]), &(inteval->stack[((hsi*356400+23135805)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*27720+1692141)*1+lsi)*1]), &(inteval->stack[((hsi*25200+1719861)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*75600+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*68400+27467991)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*136800+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*123120+28517871)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*205200+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*183600+28640991)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*275400+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*244800+28824591)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+28226871)*1+lsi)*1]), &(inteval->stack[((hsi*342720+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*302400+29069391)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+28630071)*1+lsi)*1]), &(inteval->stack[((hsi*403200+28226871)*1+lsi)*1]), &(inteval->stack[((hsi*352800+27874071)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*453600+28630071)*1+lsi)*1]), &(inteval->stack[((hsi*393120+29371791)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+27762831)*1+lsi)*1]), &(inteval->stack[((hsi*491400+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*421200+29764911)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+28277631)*1+lsi)*1]), &(inteval->stack[((hsi*514800+27762831)*1+lsi)*1]), &(inteval->stack[((hsi*435600+1745061)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+28800351)*1+lsi)*1]), &(inteval->stack[((hsi*522720+28277631)*1+lsi)*1]), &(inteval->stack[((hsi*457380+23586255)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+30172491)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+28800351)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+24043635)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+32550867)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+30172491)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+25232823)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1660181)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1672557)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+23167629)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1645901)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1660181)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+23204757)*1+lsi)*1]), &(inteval->stack[((hsi*37128+23167629)*1+lsi)*1]), &(inteval->stack[((hsi*31824+23135805)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+23268405)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1629581)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1645901)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+23311245)*1+lsi)*1]), &(inteval->stack[((hsi*42840+23268405)*1+lsi)*1]), &(inteval->stack[((hsi*37128+23167629)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+23385501)*1+lsi)*1]), &(inteval->stack[((hsi*74256+23311245)*1+lsi)*1]), &(inteval->stack[((hsi*63648+23204757)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+23491581)*1+lsi)*1]), &(inteval->stack[((hsi*18496+1611085)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1629581)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+23540541)*1+lsi)*1]), &(inteval->stack[((hsi*48960+23491581)*1+lsi)*1]), &(inteval->stack[((hsi*42840+23268405)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+23626221)*1+lsi)*1]), &(inteval->stack[((hsi*85680+23540541)*1+lsi)*1]), &(inteval->stack[((hsi*74256+23311245)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+23749981)*1+lsi)*1]), &(inteval->stack[((hsi*123760+23626221)*1+lsi)*1]), &(inteval->stack[((hsi*106080+23385501)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+23909101)*1+lsi)*1]), &(inteval->stack[((hsi*20808+1590277)*1+lsi)*1]), &(inteval->stack[((hsi*18496+1611085)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+23964589)*1+lsi)*1]), &(inteval->stack[((hsi*55488+23909101)*1+lsi)*1]), &(inteval->stack[((hsi*48960+23491581)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+24062509)*1+lsi)*1]), &(inteval->stack[((hsi*97920+23964589)*1+lsi)*1]), &(inteval->stack[((hsi*85680+23540541)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+24205309)*1+lsi)*1]), &(inteval->stack[((hsi*142800+24062509)*1+lsi)*1]), &(inteval->stack[((hsi*123760+23626221)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*185640+24205309)*1+lsi)*1]), &(inteval->stack[((hsi*159120+23749981)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+24390949)*1+lsi)*1]), &(inteval->stack[((hsi*23256+1567021)*1+lsi)*1]), &(inteval->stack[((hsi*20808+1590277)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+27494199)*1+lsi)*1]), &(inteval->stack[((hsi*62424+24390949)*1+lsi)*1]), &(inteval->stack[((hsi*55488+23909101)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+24453373)*1+lsi)*1]), &(inteval->stack[((hsi*110976+27494199)*1+lsi)*1]), &(inteval->stack[((hsi*97920+23964589)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+27605175)*1+lsi)*1]), &(inteval->stack[((hsi*163200+24453373)*1+lsi)*1]), &(inteval->stack[((hsi*142800+24062509)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+24616573)*1+lsi)*1]), &(inteval->stack[((hsi*214200+27605175)*1+lsi)*1]), &(inteval->stack[((hsi*185640+24205309)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+1692141)*1+lsi)*1]), &(inteval->stack[((hsi*259896+24616573)*1+lsi)*1]), &(inteval->stack[((hsi*222768+27271431)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+23909101)*1+lsi)*1]), &(inteval->stack[((hsi*25840+1541181)*1+lsi)*1]), &(inteval->stack[((hsi*23256+1567021)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+27819375)*1+lsi)*1]), &(inteval->stack[((hsi*69768+23909101)*1+lsi)*1]), &(inteval->stack[((hsi*62424+24390949)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+23978869)*1+lsi)*1]), &(inteval->stack[((hsi*124848+27819375)*1+lsi)*1]), &(inteval->stack[((hsi*110976+27494199)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*184960+23978869)*1+lsi)*1]), &(inteval->stack[((hsi*163200+24453373)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+24163829)*1+lsi)*1]), &(inteval->stack[((hsi*244800+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*214200+27605175)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+24876469)*1+lsi)*1]), &(inteval->stack[((hsi*299880+24163829)*1+lsi)*1]), &(inteval->stack[((hsi*259896+24616573)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+24463709)*1+lsi)*1]), &(inteval->stack[((hsi*346528+24876469)*1+lsi)*1]), &(inteval->stack[((hsi*297024+1692141)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+27944223)*1+lsi)*1]), &(inteval->stack[((hsi*28560+1512621)*1+lsi)*1]), &(inteval->stack[((hsi*25840+1541181)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+27494199)*1+lsi)*1]), &(inteval->stack[((hsi*77520+27944223)*1+lsi)*1]), &(inteval->stack[((hsi*69768+23909101)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+1989165)*1+lsi)*1]), &(inteval->stack[((hsi*139536+27494199)*1+lsi)*1]), &(inteval->stack[((hsi*124848+27819375)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+27633735)*1+lsi)*1]), &(inteval->stack[((hsi*208080+1989165)*1+lsi)*1]), &(inteval->stack[((hsi*184960+23978869)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+35948547)*1+lsi)*1]), &(inteval->stack[((hsi*277440+27633735)*1+lsi)*1]), &(inteval->stack[((hsi*244800+21720105)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+36291267)*1+lsi)*1]), &(inteval->stack[((hsi*342720+35948547)*1+lsi)*1]), &(inteval->stack[((hsi*299880+24163829)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+23909101)*1+lsi)*1]), &(inteval->stack[((hsi*399840+36291267)*1+lsi)*1]), &(inteval->stack[((hsi*346528+24876469)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+36691107)*1+lsi)*1]), &(inteval->stack[((hsi*445536+23909101)*1+lsi)*1]), &(inteval->stack[((hsi*381888+24463709)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1672557)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1683165)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+24845597)*1+lsi)*1]), &(inteval->stack[((hsi*31824+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*26928+21720105)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*63648+23204757)*1+lsi)*1]), &(inteval->stack[((hsi*53856+24845597)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+24845597)*1+lsi)*1]), &(inteval->stack[((hsi*106080+23385501)*1+lsi)*1]), &(inteval->stack[((hsi*89760+21720105)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*159120+23749981)*1+lsi)*1]), &(inteval->stack[((hsi*134640+24845597)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+23324301)*1+lsi)*1]), &(inteval->stack[((hsi*222768+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*188496+23135805)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*297024+1692141)*1+lsi)*1]), &(inteval->stack[((hsi*251328+23324301)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*381888+24463709)*1+lsi)*1]), &(inteval->stack[((hsi*323136+21720105)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+24354637)*1+lsi)*1]), &(inteval->stack[((hsi*477360+36691107)*1+lsi)*1]), &(inteval->stack[((hsi*403920+23135805)*1+lsi)*1]),136);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*85680+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*31416+1481205)*1+lsi)*1]), &(inteval->stack[((hsi*28560+1512621)*1+lsi)*1]),136);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*155040+23221485)*1+lsi)*1]), &(inteval->stack[((hsi*85680+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*77520+27944223)*1+lsi)*1]),136);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*232560+23376525)*1+lsi)*1]), &(inteval->stack[((hsi*155040+23221485)*1+lsi)*1]), &(inteval->stack[((hsi*139536+27494199)*1+lsi)*1]),136);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*312120+1481205)*1+lsi)*1]), &(inteval->stack[((hsi*232560+23376525)*1+lsi)*1]), &(inteval->stack[((hsi*208080+1989165)*1+lsi)*1]),136);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*388416+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*312120+1481205)*1+lsi)*1]), &(inteval->stack[((hsi*277440+27633735)*1+lsi)*1]),136);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*456960+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*388416+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*342720+35948547)*1+lsi)*1]),136);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*514080+1481205)*1+lsi)*1]), &(inteval->stack[((hsi*456960+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*399840+36291267)*1+lsi)*1]),136);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*556920+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*514080+1481205)*1+lsi)*1]), &(inteval->stack[((hsi*445536+23909101)*1+lsi)*1]),136);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*583440+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*556920+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*477360+36691107)*1+lsi)*1]),136);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*592416+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*583440+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*493680+24354637)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1568160+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*592416+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*522720+28277631)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2744280+35948547)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+28800351)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3963960+38692827)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+35948547)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+30172491)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*5096520+42656787)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+38692827)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+32550867)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+27863847)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1445250)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1459173)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+27899649)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1429185)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1445250)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+27941418)*1+lsi)*1]), &(inteval->stack[((hsi*41769+27899649)*1+lsi)*1]), &(inteval->stack[((hsi*35802+27863847)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+28013022)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1410825)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1429185)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+28061217)*1+lsi)*1]), &(inteval->stack[((hsi*48195+28013022)*1+lsi)*1]), &(inteval->stack[((hsi*41769+27899649)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+28144755)*1+lsi)*1]), &(inteval->stack[((hsi*83538+28061217)*1+lsi)*1]), &(inteval->stack[((hsi*71604+27941418)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+28264095)*1+lsi)*1]), &(inteval->stack[((hsi*20808+1390017)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1410825)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+28319175)*1+lsi)*1]), &(inteval->stack[((hsi*55080+28264095)*1+lsi)*1]), &(inteval->stack[((hsi*48195+28013022)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+28415565)*1+lsi)*1]), &(inteval->stack[((hsi*96390+28319175)*1+lsi)*1]), &(inteval->stack[((hsi*83538+28061217)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+28554795)*1+lsi)*1]), &(inteval->stack[((hsi*139230+28415565)*1+lsi)*1]), &(inteval->stack[((hsi*119340+28144755)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+28733805)*1+lsi)*1]), &(inteval->stack[((hsi*23409+1366608)*1+lsi)*1]), &(inteval->stack[((hsi*20808+1390017)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+28796229)*1+lsi)*1]), &(inteval->stack[((hsi*62424+28733805)*1+lsi)*1]), &(inteval->stack[((hsi*55080+28264095)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+28906389)*1+lsi)*1]), &(inteval->stack[((hsi*110160+28796229)*1+lsi)*1]), &(inteval->stack[((hsi*96390+28319175)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+29067039)*1+lsi)*1]), &(inteval->stack[((hsi*160650+28906389)*1+lsi)*1]), &(inteval->stack[((hsi*139230+28415565)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+29275884)*1+lsi)*1]), &(inteval->stack[((hsi*208845+29067039)*1+lsi)*1]), &(inteval->stack[((hsi*179010+28554795)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+29526498)*1+lsi)*1]), &(inteval->stack[((hsi*26163+1340445)*1+lsi)*1]), &(inteval->stack[((hsi*23409+1366608)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+29596725)*1+lsi)*1]), &(inteval->stack[((hsi*70227+29526498)*1+lsi)*1]), &(inteval->stack[((hsi*62424+28733805)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+29721573)*1+lsi)*1]), &(inteval->stack[((hsi*124848+29596725)*1+lsi)*1]), &(inteval->stack[((hsi*110160+28796229)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+29905173)*1+lsi)*1]), &(inteval->stack[((hsi*183600+29721573)*1+lsi)*1]), &(inteval->stack[((hsi*160650+28906389)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+30146148)*1+lsi)*1]), &(inteval->stack[((hsi*240975+29905173)*1+lsi)*1]), &(inteval->stack[((hsi*208845+29067039)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+30438531)*1+lsi)*1]), &(inteval->stack[((hsi*292383+30146148)*1+lsi)*1]), &(inteval->stack[((hsi*250614+29275884)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+30772683)*1+lsi)*1]), &(inteval->stack[((hsi*29070+1311375)*1+lsi)*1]), &(inteval->stack[((hsi*26163+1340445)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+30851172)*1+lsi)*1]), &(inteval->stack[((hsi*78489+30772683)*1+lsi)*1]), &(inteval->stack[((hsi*70227+29526498)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+30991626)*1+lsi)*1]), &(inteval->stack[((hsi*140454+30851172)*1+lsi)*1]), &(inteval->stack[((hsi*124848+29596725)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+31199706)*1+lsi)*1]), &(inteval->stack[((hsi*208080+30991626)*1+lsi)*1]), &(inteval->stack[((hsi*183600+29721573)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+31475106)*1+lsi)*1]), &(inteval->stack[((hsi*275400+31199706)*1+lsi)*1]), &(inteval->stack[((hsi*240975+29905173)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+1481205)*1+lsi)*1]), &(inteval->stack[((hsi*337365+31475106)*1+lsi)*1]), &(inteval->stack[((hsi*292383+30146148)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+29526498)*1+lsi)*1]), &(inteval->stack[((hsi*389844+1481205)*1+lsi)*1]), &(inteval->stack[((hsi*334152+30438531)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+31812471)*1+lsi)*1]), &(inteval->stack[((hsi*32130+1279245)*1+lsi)*1]), &(inteval->stack[((hsi*29070+1311375)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+31899681)*1+lsi)*1]), &(inteval->stack[((hsi*87210+31812471)*1+lsi)*1]), &(inteval->stack[((hsi*78489+30772683)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+28733805)*1+lsi)*1]), &(inteval->stack[((hsi*156978+31899681)*1+lsi)*1]), &(inteval->stack[((hsi*140454+30851172)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+24703965)*1+lsi)*1]), &(inteval->stack[((hsi*234090+28733805)*1+lsi)*1]), &(inteval->stack[((hsi*208080+30991626)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+32056659)*1+lsi)*1]), &(inteval->stack[((hsi*312120+24703965)*1+lsi)*1]), &(inteval->stack[((hsi*275400+31199706)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+30772683)*1+lsi)*1]), &(inteval->stack[((hsi*385560+32056659)*1+lsi)*1]), &(inteval->stack[((hsi*337365+31475106)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+31222503)*1+lsi)*1]), &(inteval->stack[((hsi*449820+30772683)*1+lsi)*1]), &(inteval->stack[((hsi*389844+1481205)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+1481205)*1+lsi)*1]), &(inteval->stack[((hsi*501228+31222503)*1+lsi)*1]), &(inteval->stack[((hsi*429624+29526498)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+29956122)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1459173)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1471107)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+29986416)*1+lsi)*1]), &(inteval->stack[((hsi*35802+27863847)*1+lsi)*1]), &(inteval->stack[((hsi*30294+29956122)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+21720105)*1+lsi)*1]), &(inteval->stack[((hsi*71604+27941418)*1+lsi)*1]), &(inteval->stack[((hsi*60588+29986416)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+29956122)*1+lsi)*1]), &(inteval->stack[((hsi*119340+28144755)*1+lsi)*1]), &(inteval->stack[((hsi*100980+21720105)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+27863847)*1+lsi)*1]), &(inteval->stack[((hsi*179010+28554795)*1+lsi)*1]), &(inteval->stack[((hsi*151470+29956122)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+28075905)*1+lsi)*1]), &(inteval->stack[((hsi*250614+29275884)*1+lsi)*1]), &(inteval->stack[((hsi*212058+27863847)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+28967895)*1+lsi)*1]), &(inteval->stack[((hsi*334152+30438531)*1+lsi)*1]), &(inteval->stack[((hsi*282744+28075905)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+27863847)*1+lsi)*1]), &(inteval->stack[((hsi*429624+29526498)*1+lsi)*1]), &(inteval->stack[((hsi*363528+28967895)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+28967895)*1+lsi)*1]), &(inteval->stack[((hsi*537030+1481205)*1+lsi)*1]), &(inteval->stack[((hsi*454410+27863847)*1+lsi)*1]),153);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*96390+29523285)*1+lsi)*1]), &(inteval->stack[((hsi*35343+1243902)*1+lsi)*1]), &(inteval->stack[((hsi*32130+1279245)*1+lsi)*1]),153);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*174420+29619675)*1+lsi)*1]), &(inteval->stack[((hsi*96390+29523285)*1+lsi)*1]), &(inteval->stack[((hsi*87210+31812471)*1+lsi)*1]),153);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*261630+29794095)*1+lsi)*1]), &(inteval->stack[((hsi*174420+29619675)*1+lsi)*1]), &(inteval->stack[((hsi*156978+31899681)*1+lsi)*1]),153);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*351135+27863847)*1+lsi)*1]), &(inteval->stack[((hsi*261630+29794095)*1+lsi)*1]), &(inteval->stack[((hsi*234090+28733805)*1+lsi)*1]),153);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*436968+29523285)*1+lsi)*1]), &(inteval->stack[((hsi*351135+27863847)*1+lsi)*1]), &(inteval->stack[((hsi*312120+24703965)*1+lsi)*1]),153);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*514080+27863847)*1+lsi)*1]), &(inteval->stack[((hsi*436968+29523285)*1+lsi)*1]), &(inteval->stack[((hsi*385560+32056659)*1+lsi)*1]),153);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*578340+29523285)*1+lsi)*1]), &(inteval->stack[((hsi*514080+27863847)*1+lsi)*1]), &(inteval->stack[((hsi*449820+30772683)*1+lsi)*1]),153);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*626535+30101625)*1+lsi)*1]), &(inteval->stack[((hsi*578340+29523285)*1+lsi)*1]), &(inteval->stack[((hsi*501228+31222503)*1+lsi)*1]),153);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*656370+30728160)*1+lsi)*1]), &(inteval->stack[((hsi*626535+30101625)*1+lsi)*1]), &(inteval->stack[((hsi*537030+1481205)*1+lsi)*1]),153);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*666468+29523285)*1+lsi)*1]), &(inteval->stack[((hsi*656370+30728160)*1+lsi)*1]), &(inteval->stack[((hsi*555390+28967895)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1777248+30189753)*1+lsi)*1]), &(inteval->stack[((hsi*666468+29523285)*1+lsi)*1]), &(inteval->stack[((hsi*592416+27271431)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*3136320+47753307)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+30189753)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+23135805)*1+lsi)*1]),4356);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*4573800+50889627)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+47753307)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+35948547)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*5945940+55463427)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+50889627)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+38692827)*1+lsi)*1]),4356);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*7135128+61409367)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+55463427)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+42656787)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+35948547)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1203717)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1219278)*1+lsi)*1]),171);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+35988561)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1185762)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1203717)*1+lsi)*1]),171);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+36035244)*1+lsi)*1]), &(inteval->stack[((hsi*46683+35988561)*1+lsi)*1]), &(inteval->stack[((hsi*40014+35948547)*1+lsi)*1]),171);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+36115272)*1+lsi)*1]), &(inteval->stack[((hsi*20520+1165242)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1185762)*1+lsi)*1]),171);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+36169137)*1+lsi)*1]), &(inteval->stack[((hsi*53865+36115272)*1+lsi)*1]), &(inteval->stack[((hsi*46683+35988561)*1+lsi)*1]),171);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+36262503)*1+lsi)*1]), &(inteval->stack[((hsi*93366+36169137)*1+lsi)*1]), &(inteval->stack[((hsi*80028+36035244)*1+lsi)*1]),171);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+36395883)*1+lsi)*1]), &(inteval->stack[((hsi*23256+1141986)*1+lsi)*1]), &(inteval->stack[((hsi*20520+1165242)*1+lsi)*1]),171);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+36457443)*1+lsi)*1]), &(inteval->stack[((hsi*61560+36395883)*1+lsi)*1]), &(inteval->stack[((hsi*53865+36115272)*1+lsi)*1]),171);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+36565173)*1+lsi)*1]), &(inteval->stack[((hsi*107730+36457443)*1+lsi)*1]), &(inteval->stack[((hsi*93366+36169137)*1+lsi)*1]),171);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+36720783)*1+lsi)*1]), &(inteval->stack[((hsi*155610+36565173)*1+lsi)*1]), &(inteval->stack[((hsi*133380+36262503)*1+lsi)*1]),171);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*69768+36920853)*1+lsi)*1]), &(inteval->stack[((hsi*26163+1115823)*1+lsi)*1]), &(inteval->stack[((hsi*23256+1141986)*1+lsi)*1]),171);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+36990621)*1+lsi)*1]), &(inteval->stack[((hsi*69768+36920853)*1+lsi)*1]), &(inteval->stack[((hsi*61560+36395883)*1+lsi)*1]),171);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+37113741)*1+lsi)*1]), &(inteval->stack[((hsi*123120+36990621)*1+lsi)*1]), &(inteval->stack[((hsi*107730+36457443)*1+lsi)*1]),171);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+37293291)*1+lsi)*1]), &(inteval->stack[((hsi*179550+37113741)*1+lsi)*1]), &(inteval->stack[((hsi*155610+36565173)*1+lsi)*1]),171);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+37526706)*1+lsi)*1]), &(inteval->stack[((hsi*233415+37293291)*1+lsi)*1]), &(inteval->stack[((hsi*200070+36720783)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*78489+37806804)*1+lsi)*1]), &(inteval->stack[((hsi*29241+1086582)*1+lsi)*1]), &(inteval->stack[((hsi*26163+1115823)*1+lsi)*1]),171);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*139536+37885293)*1+lsi)*1]), &(inteval->stack[((hsi*78489+37806804)*1+lsi)*1]), &(inteval->stack[((hsi*69768+36920853)*1+lsi)*1]),171);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*205200+38024829)*1+lsi)*1]), &(inteval->stack[((hsi*139536+37885293)*1+lsi)*1]), &(inteval->stack[((hsi*123120+36990621)*1+lsi)*1]),171);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*269325+38230029)*1+lsi)*1]), &(inteval->stack[((hsi*205200+38024829)*1+lsi)*1]), &(inteval->stack[((hsi*179550+37113741)*1+lsi)*1]),171);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*326781+38499354)*1+lsi)*1]), &(inteval->stack[((hsi*269325+38230029)*1+lsi)*1]), &(inteval->stack[((hsi*233415+37293291)*1+lsi)*1]),171);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*373464+38826135)*1+lsi)*1]), &(inteval->stack[((hsi*326781+38499354)*1+lsi)*1]), &(inteval->stack[((hsi*280098+37526706)*1+lsi)*1]),171);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*87723+39199599)*1+lsi)*1]), &(inteval->stack[((hsi*32490+1054092)*1+lsi)*1]), &(inteval->stack[((hsi*29241+1086582)*1+lsi)*1]),171);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*156978+39287322)*1+lsi)*1]), &(inteval->stack[((hsi*87723+39199599)*1+lsi)*1]), &(inteval->stack[((hsi*78489+37806804)*1+lsi)*1]),171);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*232560+39444300)*1+lsi)*1]), &(inteval->stack[((hsi*156978+39287322)*1+lsi)*1]), &(inteval->stack[((hsi*139536+37885293)*1+lsi)*1]),171);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*307800+39676860)*1+lsi)*1]), &(inteval->stack[((hsi*232560+39444300)*1+lsi)*1]), &(inteval->stack[((hsi*205200+38024829)*1+lsi)*1]),171);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*377055+39984660)*1+lsi)*1]), &(inteval->stack[((hsi*307800+39676860)*1+lsi)*1]), &(inteval->stack[((hsi*269325+38230029)*1+lsi)*1]),171);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*435708+40361715)*1+lsi)*1]), &(inteval->stack[((hsi*377055+39984660)*1+lsi)*1]), &(inteval->stack[((hsi*326781+38499354)*1+lsi)*1]),171);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*480168+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*435708+40361715)*1+lsi)*1]), &(inteval->stack[((hsi*373464+38826135)*1+lsi)*1]),171);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*97470+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*35910+1018182)*1+lsi)*1]), &(inteval->stack[((hsi*32490+1054092)*1+lsi)*1]),171);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*175446+23233275)*1+lsi)*1]), &(inteval->stack[((hsi*97470+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*87723+39199599)*1+lsi)*1]),171);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*261630+40797423)*1+lsi)*1]), &(inteval->stack[((hsi*175446+23233275)*1+lsi)*1]), &(inteval->stack[((hsi*156978+39287322)*1+lsi)*1]),171);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*348840+23408721)*1+lsi)*1]), &(inteval->stack[((hsi*261630+40797423)*1+lsi)*1]), &(inteval->stack[((hsi*232560+39444300)*1+lsi)*1]),171);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*430920+27751599)*1+lsi)*1]), &(inteval->stack[((hsi*348840+23408721)*1+lsi)*1]), &(inteval->stack[((hsi*307800+39676860)*1+lsi)*1]),171);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*502740+41059053)*1+lsi)*1]), &(inteval->stack[((hsi*430920+27751599)*1+lsi)*1]), &(inteval->stack[((hsi*377055+39984660)*1+lsi)*1]),171);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*560196+23757561)*1+lsi)*1]), &(inteval->stack[((hsi*502740+41059053)*1+lsi)*1]), &(inteval->stack[((hsi*435708+40361715)*1+lsi)*1]),171);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*600210+39199599)*1+lsi)*1]), &(inteval->stack[((hsi*560196+23757561)*1+lsi)*1]), &(inteval->stack[((hsi*480168+27271431)*1+lsi)*1]),171);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+28182519)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1219278)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1232616)*1+lsi)*1]),171);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+28216377)*1+lsi)*1]), &(inteval->stack[((hsi*40014+35948547)*1+lsi)*1]), &(inteval->stack[((hsi*33858+28182519)*1+lsi)*1]),171);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+1054092)*1+lsi)*1]), &(inteval->stack[((hsi*80028+36035244)*1+lsi)*1]), &(inteval->stack[((hsi*67716+28216377)*1+lsi)*1]),171);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+28182519)*1+lsi)*1]), &(inteval->stack[((hsi*133380+36262503)*1+lsi)*1]), &(inteval->stack[((hsi*112860+1054092)*1+lsi)*1]),171);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+1054092)*1+lsi)*1]), &(inteval->stack[((hsi*200070+36720783)*1+lsi)*1]), &(inteval->stack[((hsi*169290+28182519)*1+lsi)*1]),171);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+35948547)*1+lsi)*1]), &(inteval->stack[((hsi*280098+37526706)*1+lsi)*1]), &(inteval->stack[((hsi*237006+1054092)*1+lsi)*1]),171);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*406296+36264555)*1+lsi)*1]), &(inteval->stack[((hsi*373464+38826135)*1+lsi)*1]), &(inteval->stack[((hsi*316008+35948547)*1+lsi)*1]),171);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*507870+36670851)*1+lsi)*1]), &(inteval->stack[((hsi*480168+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*406296+36264555)*1+lsi)*1]),171);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*620730+37178721)*1+lsi)*1]), &(inteval->stack[((hsi*600210+39199599)*1+lsi)*1]), &(inteval->stack[((hsi*507870+36670851)*1+lsi)*1]),171);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*107730+37799451)*1+lsi)*1]), &(inteval->stack[((hsi*39501+978681)*1+lsi)*1]), &(inteval->stack[((hsi*35910+1018182)*1+lsi)*1]),171);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*194940+28182519)*1+lsi)*1]), &(inteval->stack[((hsi*107730+37799451)*1+lsi)*1]), &(inteval->stack[((hsi*97470+23135805)*1+lsi)*1]),171);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*292410+37799451)*1+lsi)*1]), &(inteval->stack[((hsi*194940+28182519)*1+lsi)*1]), &(inteval->stack[((hsi*175446+23233275)*1+lsi)*1]),171);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*392445+28182519)*1+lsi)*1]), &(inteval->stack[((hsi*292410+37799451)*1+lsi)*1]), &(inteval->stack[((hsi*261630+40797423)*1+lsi)*1]),171);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*488376+37799451)*1+lsi)*1]), &(inteval->stack[((hsi*392445+28182519)*1+lsi)*1]), &(inteval->stack[((hsi*348840+23408721)*1+lsi)*1]),171);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*574560+28182519)*1+lsi)*1]), &(inteval->stack[((hsi*488376+37799451)*1+lsi)*1]), &(inteval->stack[((hsi*430920+27751599)*1+lsi)*1]),171);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*646380+37799451)*1+lsi)*1]), &(inteval->stack[((hsi*574560+28182519)*1+lsi)*1]), &(inteval->stack[((hsi*502740+41059053)*1+lsi)*1]),171);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*700245+39799809)*1+lsi)*1]), &(inteval->stack[((hsi*646380+37799451)*1+lsi)*1]), &(inteval->stack[((hsi*560196+23757561)*1+lsi)*1]),171);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*733590+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*700245+39799809)*1+lsi)*1]), &(inteval->stack[((hsi*600210+39199599)*1+lsi)*1]),171);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*744876+37799451)*1+lsi)*1]), &(inteval->stack[((hsi*733590+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*620730+37178721)*1+lsi)*1]),171);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*1999404+38544327)*1+lsi)*1]), &(inteval->stack[((hsi*744876+37799451)*1+lsi)*1]), &(inteval->stack[((hsi*666468+29523285)*1+lsi)*1]),4356);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*3554496+68544495)*1+lsi)*1]), &(inteval->stack[((hsi*1999404+38544327)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+30189753)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*5227200+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*3554496+68544495)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+47753307)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*6860700+72098991)*1+lsi)*1]), &(inteval->stack[((hsi*5227200+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+50889627)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*8324316+78959691)*1+lsi)*1]), &(inteval->stack[((hsi*6860700+72098991)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+55463427)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*9513504+47753307)*1+lsi)*1]), &(inteval->stack[((hsi*8324316+78959691)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+61409367)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*44460+57266811)*1+lsi)*1]), &(inteval->stack[((hsi*17290+934031)*1+lsi)*1]), &(inteval->stack[((hsi*14820+951321)*1+lsi)*1]),190);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*51870+57311271)*1+lsi)*1]), &(inteval->stack[((hsi*19950+914081)*1+lsi)*1]), &(inteval->stack[((hsi*17290+934031)*1+lsi)*1]),190);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*88920+57363141)*1+lsi)*1]), &(inteval->stack[((hsi*51870+57311271)*1+lsi)*1]), &(inteval->stack[((hsi*44460+57266811)*1+lsi)*1]),190);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*59850+57452061)*1+lsi)*1]), &(inteval->stack[((hsi*22800+891281)*1+lsi)*1]), &(inteval->stack[((hsi*19950+914081)*1+lsi)*1]),190);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*103740+57511911)*1+lsi)*1]), &(inteval->stack[((hsi*59850+57452061)*1+lsi)*1]), &(inteval->stack[((hsi*51870+57311271)*1+lsi)*1]),190);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*148200+57615651)*1+lsi)*1]), &(inteval->stack[((hsi*103740+57511911)*1+lsi)*1]), &(inteval->stack[((hsi*88920+57363141)*1+lsi)*1]),190);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*68400+57763851)*1+lsi)*1]), &(inteval->stack[((hsi*25840+865441)*1+lsi)*1]), &(inteval->stack[((hsi*22800+891281)*1+lsi)*1]),190);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*119700+57832251)*1+lsi)*1]), &(inteval->stack[((hsi*68400+57763851)*1+lsi)*1]), &(inteval->stack[((hsi*59850+57452061)*1+lsi)*1]),190);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*172900+57951951)*1+lsi)*1]), &(inteval->stack[((hsi*119700+57832251)*1+lsi)*1]), &(inteval->stack[((hsi*103740+57511911)*1+lsi)*1]),190);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*222300+58124851)*1+lsi)*1]), &(inteval->stack[((hsi*172900+57951951)*1+lsi)*1]), &(inteval->stack[((hsi*148200+57615651)*1+lsi)*1]),190);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*77520+58347151)*1+lsi)*1]), &(inteval->stack[((hsi*29070+836371)*1+lsi)*1]), &(inteval->stack[((hsi*25840+865441)*1+lsi)*1]),190);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*136800+58424671)*1+lsi)*1]), &(inteval->stack[((hsi*77520+58347151)*1+lsi)*1]), &(inteval->stack[((hsi*68400+57763851)*1+lsi)*1]),190);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*199500+58561471)*1+lsi)*1]), &(inteval->stack[((hsi*136800+58424671)*1+lsi)*1]), &(inteval->stack[((hsi*119700+57832251)*1+lsi)*1]),190);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*259350+58760971)*1+lsi)*1]), &(inteval->stack[((hsi*199500+58561471)*1+lsi)*1]), &(inteval->stack[((hsi*172900+57951951)*1+lsi)*1]),190);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*311220+59020321)*1+lsi)*1]), &(inteval->stack[((hsi*259350+58760971)*1+lsi)*1]), &(inteval->stack[((hsi*222300+58124851)*1+lsi)*1]),190);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*87210+40543731)*1+lsi)*1]), &(inteval->stack[((hsi*32490+803881)*1+lsi)*1]), &(inteval->stack[((hsi*29070+836371)*1+lsi)*1]),190);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*155040+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*87210+40543731)*1+lsi)*1]), &(inteval->stack[((hsi*77520+58347151)*1+lsi)*1]),190);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*228000+59331541)*1+lsi)*1]), &(inteval->stack[((hsi*155040+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*136800+58424671)*1+lsi)*1]),190);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*299250+40630941)*1+lsi)*1]), &(inteval->stack[((hsi*228000+59331541)*1+lsi)*1]), &(inteval->stack[((hsi*199500+58561471)*1+lsi)*1]),190);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*363090+23290845)*1+lsi)*1]), &(inteval->stack[((hsi*299250+40630941)*1+lsi)*1]), &(inteval->stack[((hsi*259350+58760971)*1+lsi)*1]),190);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*414960+35948547)*1+lsi)*1]), &(inteval->stack[((hsi*363090+23290845)*1+lsi)*1]), &(inteval->stack[((hsi*311220+59020321)*1+lsi)*1]),190);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*97470+59559541)*1+lsi)*1]), &(inteval->stack[((hsi*36100+767781)*1+lsi)*1]), &(inteval->stack[((hsi*32490+803881)*1+lsi)*1]),190);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*174420+59657011)*1+lsi)*1]), &(inteval->stack[((hsi*97470+59559541)*1+lsi)*1]), &(inteval->stack[((hsi*87210+40543731)*1+lsi)*1]),190);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*258400+40930191)*1+lsi)*1]), &(inteval->stack[((hsi*174420+59657011)*1+lsi)*1]), &(inteval->stack[((hsi*155040+23135805)*1+lsi)*1]),190);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*342000+23653935)*1+lsi)*1]), &(inteval->stack[((hsi*258400+40930191)*1+lsi)*1]), &(inteval->stack[((hsi*228000+59331541)*1+lsi)*1]),190);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*418950+59831431)*1+lsi)*1]), &(inteval->stack[((hsi*342000+23653935)*1+lsi)*1]), &(inteval->stack[((hsi*299250+40630941)*1+lsi)*1]),190);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*484120+41188591)*1+lsi)*1]), &(inteval->stack[((hsi*418950+59831431)*1+lsi)*1]), &(inteval->stack[((hsi*363090+23290845)*1+lsi)*1]),190);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*533520+36363507)*1+lsi)*1]), &(inteval->stack[((hsi*484120+41188591)*1+lsi)*1]), &(inteval->stack[((hsi*414960+35948547)*1+lsi)*1]),190);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*108300+978681)*1+lsi)*1]), &(inteval->stack[((hsi*39900+727881)*1+lsi)*1]), &(inteval->stack[((hsi*36100+767781)*1+lsi)*1]),190);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*194940+23995935)*1+lsi)*1]), &(inteval->stack[((hsi*108300+978681)*1+lsi)*1]), &(inteval->stack[((hsi*97470+59559541)*1+lsi)*1]),190);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*290700+1086981)*1+lsi)*1]), &(inteval->stack[((hsi*194940+23995935)*1+lsi)*1]), &(inteval->stack[((hsi*174420+59657011)*1+lsi)*1]),190);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*387600+60250381)*1+lsi)*1]), &(inteval->stack[((hsi*290700+1086981)*1+lsi)*1]), &(inteval->stack[((hsi*258400+40930191)*1+lsi)*1]),190);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*478800+24190875)*1+lsi)*1]), &(inteval->stack[((hsi*387600+60250381)*1+lsi)*1]), &(inteval->stack[((hsi*342000+23653935)*1+lsi)*1]),190);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*558600+41672711)*1+lsi)*1]), &(inteval->stack[((hsi*478800+24190875)*1+lsi)*1]), &(inteval->stack[((hsi*418950+59831431)*1+lsi)*1]),190);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*622440+1377681)*1+lsi)*1]), &(inteval->stack[((hsi*558600+41672711)*1+lsi)*1]), &(inteval->stack[((hsi*484120+41188591)*1+lsi)*1]),190);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*666900+40543731)*1+lsi)*1]), &(inteval->stack[((hsi*622440+1377681)*1+lsi)*1]), &(inteval->stack[((hsi*533520+36363507)*1+lsi)*1]),190);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*37620+59331541)*1+lsi)*1]), &(inteval->stack[((hsi*14820+951321)*1+lsi)*1]), &(inteval->stack[((hsi*12540+966141)*1+lsi)*1]),190);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*75240+36897027)*1+lsi)*1]), &(inteval->stack[((hsi*44460+57266811)*1+lsi)*1]), &(inteval->stack[((hsi*37620+59331541)*1+lsi)*1]),190);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*125400+59331541)*1+lsi)*1]), &(inteval->stack[((hsi*88920+57363141)*1+lsi)*1]), &(inteval->stack[((hsi*75240+36897027)*1+lsi)*1]),190);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*188100+36897027)*1+lsi)*1]), &(inteval->stack[((hsi*148200+57615651)*1+lsi)*1]), &(inteval->stack[((hsi*125400+59331541)*1+lsi)*1]),190);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*263340+59331541)*1+lsi)*1]), &(inteval->stack[((hsi*222300+58124851)*1+lsi)*1]), &(inteval->stack[((hsi*188100+36897027)*1+lsi)*1]),190);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*351120+57266811)*1+lsi)*1]), &(inteval->stack[((hsi*311220+59020321)*1+lsi)*1]), &(inteval->stack[((hsi*263340+59331541)*1+lsi)*1]),190);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*451440+57617931)*1+lsi)*1]), &(inteval->stack[((hsi*414960+35948547)*1+lsi)*1]), &(inteval->stack[((hsi*351120+57266811)*1+lsi)*1]),190);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*564300+58069371)*1+lsi)*1]), &(inteval->stack[((hsi*533520+36363507)*1+lsi)*1]), &(inteval->stack[((hsi*451440+57617931)*1+lsi)*1]),190);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*689700+35948547)*1+lsi)*1]), &(inteval->stack[((hsi*666900+40543731)*1+lsi)*1]), &(inteval->stack[((hsi*564300+58069371)*1+lsi)*1]),190);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*119700+57266811)*1+lsi)*1]), &(inteval->stack[((hsi*43890+683991)*1+lsi)*1]), &(inteval->stack[((hsi*39900+727881)*1+lsi)*1]),190);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*216600+57386511)*1+lsi)*1]), &(inteval->stack[((hsi*119700+57266811)*1+lsi)*1]), &(inteval->stack[((hsi*108300+978681)*1+lsi)*1]),190);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*324900+57603111)*1+lsi)*1]), &(inteval->stack[((hsi*216600+57386511)*1+lsi)*1]), &(inteval->stack[((hsi*194940+23995935)*1+lsi)*1]),190);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*436050+57928011)*1+lsi)*1]), &(inteval->stack[((hsi*324900+57603111)*1+lsi)*1]), &(inteval->stack[((hsi*290700+1086981)*1+lsi)*1]),190);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*542640+58364061)*1+lsi)*1]), &(inteval->stack[((hsi*436050+57928011)*1+lsi)*1]), &(inteval->stack[((hsi*387600+60250381)*1+lsi)*1]),190);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*638400+58906701)*1+lsi)*1]), &(inteval->stack[((hsi*542640+58364061)*1+lsi)*1]), &(inteval->stack[((hsi*478800+24190875)*1+lsi)*1]),190);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*718200+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*638400+58906701)*1+lsi)*1]), &(inteval->stack[((hsi*558600+41672711)*1+lsi)*1]),190);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*778050+57266811)*1+lsi)*1]), &(inteval->stack[((hsi*718200+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*622440+1377681)*1+lsi)*1]),190);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*815100+58044861)*1+lsi)*1]), &(inteval->stack[((hsi*778050+57266811)*1+lsi)*1]), &(inteval->stack[((hsi*666900+40543731)*1+lsi)*1]),190);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*827640+58859961)*1+lsi)*1]), &(inteval->stack[((hsi*815100+58044861)*1+lsi)*1]), &(inteval->stack[((hsi*689700+35948547)*1+lsi)*1]),190);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*2234628+87284007)*1+lsi)*1]), &(inteval->stack[((hsi*827640+58859961)*1+lsi)*1]), &(inteval->stack[((hsi*744876+37799451)*1+lsi)*1]),4356);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*3998808+89518635)*1+lsi)*1]), &(inteval->stack[((hsi*2234628+87284007)*1+lsi)*1]), &(inteval->stack[((hsi*1999404+38544327)*1+lsi)*1]),4356);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*5924160+35948547)*1+lsi)*1]), &(inteval->stack[((hsi*3998808+89518635)*1+lsi)*1]), &(inteval->stack[((hsi*3554496+68544495)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*7840800+93517443)*1+lsi)*1]), &(inteval->stack[((hsi*5924160+35948547)*1+lsi)*1]), &(inteval->stack[((hsi*5227200+27271431)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*9604980+101358243)*1+lsi)*1]), &(inteval->stack[((hsi*7840800+93517443)*1+lsi)*1]), &(inteval->stack[((hsi*6860700+72098991)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*11099088+110963223)*1+lsi)*1]), &(inteval->stack[((hsi*9604980+101358243)*1+lsi)*1]), &(inteval->stack[((hsi*8324316+78959691)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*12231648+68544495)*1+lsi)*1]), &(inteval->stack[((hsi*11099088+110963223)*1+lsi)*1]), &(inteval->stack[((hsi*9513504+47753307)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*49140+80776143)*1+lsi)*1]), &(inteval->stack[((hsi*19110+634641)*1+lsi)*1]), &(inteval->stack[((hsi*16380+653751)*1+lsi)*1]),210);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*57330+80825283)*1+lsi)*1]), &(inteval->stack[((hsi*22050+612591)*1+lsi)*1]), &(inteval->stack[((hsi*19110+634641)*1+lsi)*1]),210);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*98280+80882613)*1+lsi)*1]), &(inteval->stack[((hsi*57330+80825283)*1+lsi)*1]), &(inteval->stack[((hsi*49140+80776143)*1+lsi)*1]),210);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*66150+80980893)*1+lsi)*1]), &(inteval->stack[((hsi*25200+587391)*1+lsi)*1]), &(inteval->stack[((hsi*22050+612591)*1+lsi)*1]),210);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*114660+81047043)*1+lsi)*1]), &(inteval->stack[((hsi*66150+80980893)*1+lsi)*1]), &(inteval->stack[((hsi*57330+80825283)*1+lsi)*1]),210);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*163800+81161703)*1+lsi)*1]), &(inteval->stack[((hsi*114660+81047043)*1+lsi)*1]), &(inteval->stack[((hsi*98280+80882613)*1+lsi)*1]),210);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*75600+81325503)*1+lsi)*1]), &(inteval->stack[((hsi*28560+558831)*1+lsi)*1]), &(inteval->stack[((hsi*25200+587391)*1+lsi)*1]),210);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*132300+81401103)*1+lsi)*1]), &(inteval->stack[((hsi*75600+81325503)*1+lsi)*1]), &(inteval->stack[((hsi*66150+80980893)*1+lsi)*1]),210);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*191100+81533403)*1+lsi)*1]), &(inteval->stack[((hsi*132300+81401103)*1+lsi)*1]), &(inteval->stack[((hsi*114660+81047043)*1+lsi)*1]),210);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*245700+81724503)*1+lsi)*1]), &(inteval->stack[((hsi*191100+81533403)*1+lsi)*1]), &(inteval->stack[((hsi*163800+81161703)*1+lsi)*1]),210);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*85680+81970203)*1+lsi)*1]), &(inteval->stack[((hsi*32130+526701)*1+lsi)*1]), &(inteval->stack[((hsi*28560+558831)*1+lsi)*1]),210);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*151200+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*85680+81970203)*1+lsi)*1]), &(inteval->stack[((hsi*75600+81325503)*1+lsi)*1]),210);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*220500+82055883)*1+lsi)*1]), &(inteval->stack[((hsi*151200+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*132300+81401103)*1+lsi)*1]),210);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*286650+27422631)*1+lsi)*1]), &(inteval->stack[((hsi*220500+82055883)*1+lsi)*1]), &(inteval->stack[((hsi*191100+81533403)*1+lsi)*1]),210);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*343980+82276383)*1+lsi)*1]), &(inteval->stack[((hsi*286650+27422631)*1+lsi)*1]), &(inteval->stack[((hsi*245700+81724503)*1+lsi)*1]),210);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*96390+27709281)*1+lsi)*1]), &(inteval->stack[((hsi*35910+490791)*1+lsi)*1]), &(inteval->stack[((hsi*32130+526701)*1+lsi)*1]),210);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*171360+27805671)*1+lsi)*1]), &(inteval->stack[((hsi*96390+27709281)*1+lsi)*1]), &(inteval->stack[((hsi*85680+81970203)*1+lsi)*1]),210);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*252000+82620363)*1+lsi)*1]), &(inteval->stack[((hsi*171360+27805671)*1+lsi)*1]), &(inteval->stack[((hsi*151200+27271431)*1+lsi)*1]),210);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*330750+27977031)*1+lsi)*1]), &(inteval->stack[((hsi*252000+82620363)*1+lsi)*1]), &(inteval->stack[((hsi*220500+82055883)*1+lsi)*1]),210);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*401310+82872363)*1+lsi)*1]), &(inteval->stack[((hsi*330750+27977031)*1+lsi)*1]), &(inteval->stack[((hsi*286650+27422631)*1+lsi)*1]),210);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*458640+28307781)*1+lsi)*1]), &(inteval->stack[((hsi*401310+82872363)*1+lsi)*1]), &(inteval->stack[((hsi*343980+82276383)*1+lsi)*1]),210);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*107730+83273673)*1+lsi)*1]), &(inteval->stack[((hsi*39900+450891)*1+lsi)*1]), &(inteval->stack[((hsi*35910+490791)*1+lsi)*1]),210);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*192780+83381403)*1+lsi)*1]), &(inteval->stack[((hsi*107730+83273673)*1+lsi)*1]), &(inteval->stack[((hsi*96390+27709281)*1+lsi)*1]),210);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*285600+28766421)*1+lsi)*1]), &(inteval->stack[((hsi*192780+83381403)*1+lsi)*1]), &(inteval->stack[((hsi*171360+27805671)*1+lsi)*1]),210);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*378000+83574183)*1+lsi)*1]), &(inteval->stack[((hsi*285600+28766421)*1+lsi)*1]), &(inteval->stack[((hsi*252000+82620363)*1+lsi)*1]),210);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*463050+29052021)*1+lsi)*1]), &(inteval->stack[((hsi*378000+83574183)*1+lsi)*1]), &(inteval->stack[((hsi*330750+27977031)*1+lsi)*1]),210);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*535080+83952183)*1+lsi)*1]), &(inteval->stack[((hsi*463050+29052021)*1+lsi)*1]), &(inteval->stack[((hsi*401310+82872363)*1+lsi)*1]),210);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*589680+29515071)*1+lsi)*1]), &(inteval->stack[((hsi*535080+83952183)*1+lsi)*1]), &(inteval->stack[((hsi*458640+28307781)*1+lsi)*1]),210);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*119700+84487263)*1+lsi)*1]), &(inteval->stack[((hsi*44100+406791)*1+lsi)*1]), &(inteval->stack[((hsi*39900+450891)*1+lsi)*1]),210);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*215460+84606963)*1+lsi)*1]), &(inteval->stack[((hsi*119700+84487263)*1+lsi)*1]), &(inteval->stack[((hsi*107730+83273673)*1+lsi)*1]),210);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*321300+84822423)*1+lsi)*1]), &(inteval->stack[((hsi*215460+84606963)*1+lsi)*1]), &(inteval->stack[((hsi*192780+83381403)*1+lsi)*1]),210);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*428400+30104751)*1+lsi)*1]), &(inteval->stack[((hsi*321300+84822423)*1+lsi)*1]), &(inteval->stack[((hsi*285600+28766421)*1+lsi)*1]),210);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*529200+85143723)*1+lsi)*1]), &(inteval->stack[((hsi*428400+30104751)*1+lsi)*1]), &(inteval->stack[((hsi*378000+83574183)*1+lsi)*1]),210);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*617400+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*529200+85143723)*1+lsi)*1]), &(inteval->stack[((hsi*463050+29052021)*1+lsi)*1]),210);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*687960+30533151)*1+lsi)*1]), &(inteval->stack[((hsi*617400+23135805)*1+lsi)*1]), &(inteval->stack[((hsi*535080+83952183)*1+lsi)*1]),210);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*737100+82620363)*1+lsi)*1]), &(inteval->stack[((hsi*687960+30533151)*1+lsi)*1]), &(inteval->stack[((hsi*589680+29515071)*1+lsi)*1]),210);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*41580+59687601)*1+lsi)*1]), &(inteval->stack[((hsi*16380+653751)*1+lsi)*1]), &(inteval->stack[((hsi*13860+670131)*1+lsi)*1]),210);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*83160+450891)*1+lsi)*1]), &(inteval->stack[((hsi*49140+80776143)*1+lsi)*1]), &(inteval->stack[((hsi*41580+59687601)*1+lsi)*1]),210);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*138600+534051)*1+lsi)*1]), &(inteval->stack[((hsi*98280+80882613)*1+lsi)*1]), &(inteval->stack[((hsi*83160+450891)*1+lsi)*1]),210);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*207900+59687601)*1+lsi)*1]), &(inteval->stack[((hsi*163800+81161703)*1+lsi)*1]), &(inteval->stack[((hsi*138600+534051)*1+lsi)*1]),210);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*291060+450891)*1+lsi)*1]), &(inteval->stack[((hsi*245700+81724503)*1+lsi)*1]), &(inteval->stack[((hsi*207900+59687601)*1+lsi)*1]),210);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*388080+59687601)*1+lsi)*1]), &(inteval->stack[((hsi*343980+82276383)*1+lsi)*1]), &(inteval->stack[((hsi*291060+450891)*1+lsi)*1]),210);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*498960+450891)*1+lsi)*1]), &(inteval->stack[((hsi*458640+28307781)*1+lsi)*1]), &(inteval->stack[((hsi*388080+59687601)*1+lsi)*1]),210);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*623700+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*589680+29515071)*1+lsi)*1]), &(inteval->stack[((hsi*498960+450891)*1+lsi)*1]),210);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*762300+27895131)*1+lsi)*1]), &(inteval->stack[((hsi*737100+82620363)*1+lsi)*1]), &(inteval->stack[((hsi*623700+27271431)*1+lsi)*1]),210);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*132300+450891)*1+lsi)*1]), &(inteval->stack[((hsi*48510+358281)*1+lsi)*1]), &(inteval->stack[((hsi*44100+406791)*1+lsi)*1]),210);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*239400+80776143)*1+lsi)*1]), &(inteval->stack[((hsi*132300+450891)*1+lsi)*1]), &(inteval->stack[((hsi*119700+84487263)*1+lsi)*1]),210);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*359100+358281)*1+lsi)*1]), &(inteval->stack[((hsi*239400+80776143)*1+lsi)*1]), &(inteval->stack[((hsi*215460+84606963)*1+lsi)*1]),210);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*481950+80776143)*1+lsi)*1]), &(inteval->stack[((hsi*359100+358281)*1+lsi)*1]), &(inteval->stack[((hsi*321300+84822423)*1+lsi)*1]),210);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*599760+358281)*1+lsi)*1]), &(inteval->stack[((hsi*481950+80776143)*1+lsi)*1]), &(inteval->stack[((hsi*428400+30104751)*1+lsi)*1]),210);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*705600+28657431)*1+lsi)*1]), &(inteval->stack[((hsi*599760+358281)*1+lsi)*1]), &(inteval->stack[((hsi*529200+85143723)*1+lsi)*1]),210);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*793800+83357463)*1+lsi)*1]), &(inteval->stack[((hsi*705600+28657431)*1+lsi)*1]), &(inteval->stack[((hsi*617400+23135805)*1+lsi)*1]),210);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*859950+84151263)*1+lsi)*1]), &(inteval->stack[((hsi*793800+83357463)*1+lsi)*1]), &(inteval->stack[((hsi*687960+30533151)*1+lsi)*1]),210);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*900900+28657431)*1+lsi)*1]), &(inteval->stack[((hsi*859950+84151263)*1+lsi)*1]), &(inteval->stack[((hsi*737100+82620363)*1+lsi)*1]),210);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*914760+80776143)*1+lsi)*1]), &(inteval->stack[((hsi*900900+28657431)*1+lsi)*1]), &(inteval->stack[((hsi*762300+27895131)*1+lsi)*1]),210);
HRRPart0bra0ket0plp(inteval, &(inteval->stack[((hsi*2482920+81690903)*1+lsi)*1]), &(inteval->stack[((hsi*914760+80776143)*1+lsi)*1]), &(inteval->stack[((hsi*827640+58859961)*1+lsi)*1]),4356);
HRRPart0bra0ket0pkd(inteval, &(inteval->stack[((hsi*4469256+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*2482920+81690903)*1+lsi)*1]), &(inteval->stack[((hsi*2234628+87284007)*1+lsi)*1]),4356);
HRRPart0bra0ket0pif(inteval, &(inteval->stack[((hsi*6664680+122062311)*1+lsi)*1]), &(inteval->stack[((hsi*4469256+27271431)*1+lsi)*1]), &(inteval->stack[((hsi*3998808+89518635)*1+lsi)*1]),4356);
HRRPart0bra0ket0phg(inteval, &(inteval->stack[((hsi*8886240+84173823)*1+lsi)*1]), &(inteval->stack[((hsi*6664680+122062311)*1+lsi)*1]), &(inteval->stack[((hsi*5924160+35948547)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgh(inteval, &(inteval->stack[((hsi*10977120+128726991)*1+lsi)*1]), &(inteval->stack[((hsi*8886240+84173823)*1+lsi)*1]), &(inteval->stack[((hsi*7840800+93517443)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfi(inteval, &(inteval->stack[((hsi*12806640+139704111)*1+lsi)*1]), &(inteval->stack[((hsi*10977120+128726991)*1+lsi)*1]), &(inteval->stack[((hsi*9604980+101358243)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdk(inteval, &(inteval->stack[((hsi*14270256+93060063)*1+lsi)*1]), &(inteval->stack[((hsi*12806640+139704111)*1+lsi)*1]), &(inteval->stack[((hsi*11099088+110963223)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppl(inteval, &(inteval->stack[((hsi*15289560+152510751)*1+lsi)*1]), &(inteval->stack[((hsi*14270256+93060063)*1+lsi)*1]), &(inteval->stack[((hsi*12231648+68544495)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+107330319)*1+lsi)*1]), &(inteval->stack[((hsi*6006+2390091)*1+lsi)*1]), &(inteval->stack[((hsi*5148+2396097)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+107345763)*1+lsi)*1]), &(inteval->stack[((hsi*6930+2383161)*1+lsi)*1]), &(inteval->stack[((hsi*6006+2390091)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+107363781)*1+lsi)*1]), &(inteval->stack[((hsi*18018+107345763)*1+lsi)*1]), &(inteval->stack[((hsi*15444+107330319)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+107394669)*1+lsi)*1]), &(inteval->stack[((hsi*7920+2375241)*1+lsi)*1]), &(inteval->stack[((hsi*6930+2383161)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+107415459)*1+lsi)*1]), &(inteval->stack[((hsi*20790+107394669)*1+lsi)*1]), &(inteval->stack[((hsi*18018+107345763)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+107451495)*1+lsi)*1]), &(inteval->stack[((hsi*36036+107415459)*1+lsi)*1]), &(inteval->stack[((hsi*30888+107363781)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+107502975)*1+lsi)*1]), &(inteval->stack[((hsi*8976+2366265)*1+lsi)*1]), &(inteval->stack[((hsi*7920+2375241)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+107526735)*1+lsi)*1]), &(inteval->stack[((hsi*23760+107502975)*1+lsi)*1]), &(inteval->stack[((hsi*20790+107394669)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+107568315)*1+lsi)*1]), &(inteval->stack[((hsi*41580+107526735)*1+lsi)*1]), &(inteval->stack[((hsi*36036+107415459)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+107628375)*1+lsi)*1]), &(inteval->stack[((hsi*60060+107568315)*1+lsi)*1]), &(inteval->stack[((hsi*51480+107451495)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+107705595)*1+lsi)*1]), &(inteval->stack[((hsi*10098+2356167)*1+lsi)*1]), &(inteval->stack[((hsi*8976+2366265)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+107732523)*1+lsi)*1]), &(inteval->stack[((hsi*26928+107705595)*1+lsi)*1]), &(inteval->stack[((hsi*23760+107502975)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+107780043)*1+lsi)*1]), &(inteval->stack[((hsi*47520+107732523)*1+lsi)*1]), &(inteval->stack[((hsi*41580+107526735)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+107849343)*1+lsi)*1]), &(inteval->stack[((hsi*69300+107780043)*1+lsi)*1]), &(inteval->stack[((hsi*60060+107568315)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+107939433)*1+lsi)*1]), &(inteval->stack[((hsi*90090+107849343)*1+lsi)*1]), &(inteval->stack[((hsi*77220+107628375)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+108047541)*1+lsi)*1]), &(inteval->stack[((hsi*11286+2344881)*1+lsi)*1]), &(inteval->stack[((hsi*10098+2356167)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+108077835)*1+lsi)*1]), &(inteval->stack[((hsi*30294+108047541)*1+lsi)*1]), &(inteval->stack[((hsi*26928+107705595)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+108131691)*1+lsi)*1]), &(inteval->stack[((hsi*53856+108077835)*1+lsi)*1]), &(inteval->stack[((hsi*47520+107732523)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+108210891)*1+lsi)*1]), &(inteval->stack[((hsi*79200+108131691)*1+lsi)*1]), &(inteval->stack[((hsi*69300+107780043)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+108314841)*1+lsi)*1]), &(inteval->stack[((hsi*103950+108210891)*1+lsi)*1]), &(inteval->stack[((hsi*90090+107849343)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+108440967)*1+lsi)*1]), &(inteval->stack[((hsi*126126+108314841)*1+lsi)*1]), &(inteval->stack[((hsi*108108+107939433)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+108585111)*1+lsi)*1]), &(inteval->stack[((hsi*12540+2332341)*1+lsi)*1]), &(inteval->stack[((hsi*11286+2344881)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+108618969)*1+lsi)*1]), &(inteval->stack[((hsi*33858+108585111)*1+lsi)*1]), &(inteval->stack[((hsi*30294+108047541)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+108679557)*1+lsi)*1]), &(inteval->stack[((hsi*60588+108618969)*1+lsi)*1]), &(inteval->stack[((hsi*53856+108077835)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+108769317)*1+lsi)*1]), &(inteval->stack[((hsi*89760+108679557)*1+lsi)*1]), &(inteval->stack[((hsi*79200+108131691)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+108888117)*1+lsi)*1]), &(inteval->stack[((hsi*118800+108769317)*1+lsi)*1]), &(inteval->stack[((hsi*103950+108210891)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+109033647)*1+lsi)*1]), &(inteval->stack[((hsi*145530+108888117)*1+lsi)*1]), &(inteval->stack[((hsi*126126+108314841)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+109201815)*1+lsi)*1]), &(inteval->stack[((hsi*168168+109033647)*1+lsi)*1]), &(inteval->stack[((hsi*144144+108440967)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+109387143)*1+lsi)*1]), &(inteval->stack[((hsi*13860+2318481)*1+lsi)*1]), &(inteval->stack[((hsi*12540+2332341)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+109424763)*1+lsi)*1]), &(inteval->stack[((hsi*37620+109387143)*1+lsi)*1]), &(inteval->stack[((hsi*33858+108585111)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+109492479)*1+lsi)*1]), &(inteval->stack[((hsi*67716+109424763)*1+lsi)*1]), &(inteval->stack[((hsi*60588+108618969)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+109593459)*1+lsi)*1]), &(inteval->stack[((hsi*100980+109492479)*1+lsi)*1]), &(inteval->stack[((hsi*89760+108679557)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+109728099)*1+lsi)*1]), &(inteval->stack[((hsi*134640+109593459)*1+lsi)*1]), &(inteval->stack[((hsi*118800+108769317)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+109894419)*1+lsi)*1]), &(inteval->stack[((hsi*166320+109728099)*1+lsi)*1]), &(inteval->stack[((hsi*145530+108888117)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+110088459)*1+lsi)*1]), &(inteval->stack[((hsi*194040+109894419)*1+lsi)*1]), &(inteval->stack[((hsi*168168+109033647)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+110304675)*1+lsi)*1]), &(inteval->stack[((hsi*216216+110088459)*1+lsi)*1]), &(inteval->stack[((hsi*185328+109201815)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+110536335)*1+lsi)*1]), &(inteval->stack[((hsi*5148+2396097)*1+lsi)*1]), &(inteval->stack[((hsi*4356+2401245)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+110549403)*1+lsi)*1]), &(inteval->stack[((hsi*15444+107330319)*1+lsi)*1]), &(inteval->stack[((hsi*13068+110536335)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+110575539)*1+lsi)*1]), &(inteval->stack[((hsi*30888+107363781)*1+lsi)*1]), &(inteval->stack[((hsi*26136+110549403)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+110619099)*1+lsi)*1]), &(inteval->stack[((hsi*51480+107451495)*1+lsi)*1]), &(inteval->stack[((hsi*43560+110575539)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+110684439)*1+lsi)*1]), &(inteval->stack[((hsi*77220+107628375)*1+lsi)*1]), &(inteval->stack[((hsi*65340+110619099)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+110775915)*1+lsi)*1]), &(inteval->stack[((hsi*108108+107939433)*1+lsi)*1]), &(inteval->stack[((hsi*91476+110684439)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+110897883)*1+lsi)*1]), &(inteval->stack[((hsi*144144+108440967)*1+lsi)*1]), &(inteval->stack[((hsi*121968+110775915)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+111054699)*1+lsi)*1]), &(inteval->stack[((hsi*185328+109201815)*1+lsi)*1]), &(inteval->stack[((hsi*156816+110897883)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+111250719)*1+lsi)*1]), &(inteval->stack[((hsi*231660+110304675)*1+lsi)*1]), &(inteval->stack[((hsi*196020+111054699)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+111490299)*1+lsi)*1]), &(inteval->stack[((hsi*15246+2303235)*1+lsi)*1]), &(inteval->stack[((hsi*13860+2318481)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+111531879)*1+lsi)*1]), &(inteval->stack[((hsi*41580+111490299)*1+lsi)*1]), &(inteval->stack[((hsi*37620+109387143)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+111607119)*1+lsi)*1]), &(inteval->stack[((hsi*75240+111531879)*1+lsi)*1]), &(inteval->stack[((hsi*67716+109424763)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+111719979)*1+lsi)*1]), &(inteval->stack[((hsi*112860+111607119)*1+lsi)*1]), &(inteval->stack[((hsi*100980+109492479)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+111871449)*1+lsi)*1]), &(inteval->stack[((hsi*151470+111719979)*1+lsi)*1]), &(inteval->stack[((hsi*134640+109593459)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+112059945)*1+lsi)*1]), &(inteval->stack[((hsi*188496+111871449)*1+lsi)*1]), &(inteval->stack[((hsi*166320+109728099)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+112281705)*1+lsi)*1]), &(inteval->stack[((hsi*221760+112059945)*1+lsi)*1]), &(inteval->stack[((hsi*194040+109894419)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+112531185)*1+lsi)*1]), &(inteval->stack[((hsi*249480+112281705)*1+lsi)*1]), &(inteval->stack[((hsi*216216+110088459)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+112801455)*1+lsi)*1]), &(inteval->stack[((hsi*270270+112531185)*1+lsi)*1]), &(inteval->stack[((hsi*231660+110304675)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+113084595)*1+lsi)*1]), &(inteval->stack[((hsi*283140+112801455)*1+lsi)*1]), &(inteval->stack[((hsi*239580+111250719)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+113372091)*1+lsi)*1]), &(inteval->stack[((hsi*339768+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*287496+113084595)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+114234579)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+22116501)*1+lsi)*1]), &(inteval->stack[((hsi*862488+113372091)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+107330319)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+25232823)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+114234579)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+110205279)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+32550867)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+107330319)*1+lsi)*1]),4356);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*6037416+31740687)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+42656787)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+110205279)*1+lsi)*1]),4356);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*8049888+107330319)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+61409367)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+31740687)*1+lsi)*1]),4356);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*10349856+31740687)*1+lsi)*1]), &(inteval->stack[((hsi*9513504+47753307)*1+lsi)*1]), &(inteval->stack[((hsi*8049888+107330319)*1+lsi)*1]),4356);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*12937320+42090543)*1+lsi)*1]), &(inteval->stack[((hsi*12231648+68544495)*1+lsi)*1]), &(inteval->stack[((hsi*10349856+31740687)*1+lsi)*1]),4356);
HRRPart0bra0ket0psm(inteval, &(inteval->stack[((hsi*15812280+55027863)*1+lsi)*1]), &(inteval->stack[((hsi*15289560+152510751)*1+lsi)*1]), &(inteval->stack[((hsi*12937320+42090543)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*54054+31740687)*1+lsi)*1]), &(inteval->stack[((hsi*21021+303996)*1+lsi)*1]), &(inteval->stack[((hsi*18018+325017)*1+lsi)*1]),231);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*63063+31794741)*1+lsi)*1]), &(inteval->stack[((hsi*24255+279741)*1+lsi)*1]), &(inteval->stack[((hsi*21021+303996)*1+lsi)*1]),231);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*108108+31857804)*1+lsi)*1]), &(inteval->stack[((hsi*63063+31794741)*1+lsi)*1]), &(inteval->stack[((hsi*54054+31740687)*1+lsi)*1]),231);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*72765+31965912)*1+lsi)*1]), &(inteval->stack[((hsi*27720+252021)*1+lsi)*1]), &(inteval->stack[((hsi*24255+279741)*1+lsi)*1]),231);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*126126+32038677)*1+lsi)*1]), &(inteval->stack[((hsi*72765+31965912)*1+lsi)*1]), &(inteval->stack[((hsi*63063+31794741)*1+lsi)*1]),231);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*180180+32164803)*1+lsi)*1]), &(inteval->stack[((hsi*126126+32038677)*1+lsi)*1]), &(inteval->stack[((hsi*108108+31857804)*1+lsi)*1]),231);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*83160+32344983)*1+lsi)*1]), &(inteval->stack[((hsi*31416+220605)*1+lsi)*1]), &(inteval->stack[((hsi*27720+252021)*1+lsi)*1]),231);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*145530+32428143)*1+lsi)*1]), &(inteval->stack[((hsi*83160+32344983)*1+lsi)*1]), &(inteval->stack[((hsi*72765+31965912)*1+lsi)*1]),231);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*210210+32573673)*1+lsi)*1]), &(inteval->stack[((hsi*145530+32428143)*1+lsi)*1]), &(inteval->stack[((hsi*126126+32038677)*1+lsi)*1]),231);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*270270+32783883)*1+lsi)*1]), &(inteval->stack[((hsi*210210+32573673)*1+lsi)*1]), &(inteval->stack[((hsi*180180+32164803)*1+lsi)*1]),231);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*94248+33054153)*1+lsi)*1]), &(inteval->stack[((hsi*35343+185262)*1+lsi)*1]), &(inteval->stack[((hsi*31416+220605)*1+lsi)*1]),231);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*166320+33148401)*1+lsi)*1]), &(inteval->stack[((hsi*94248+33054153)*1+lsi)*1]), &(inteval->stack[((hsi*83160+32344983)*1+lsi)*1]),231);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*242550+33314721)*1+lsi)*1]), &(inteval->stack[((hsi*166320+33148401)*1+lsi)*1]), &(inteval->stack[((hsi*145530+32428143)*1+lsi)*1]),231);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*315315+33557271)*1+lsi)*1]), &(inteval->stack[((hsi*242550+33314721)*1+lsi)*1]), &(inteval->stack[((hsi*210210+32573673)*1+lsi)*1]),231);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*378378+33872586)*1+lsi)*1]), &(inteval->stack[((hsi*315315+33557271)*1+lsi)*1]), &(inteval->stack[((hsi*270270+32783883)*1+lsi)*1]),231);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*106029+34250964)*1+lsi)*1]), &(inteval->stack[((hsi*39501+145761)*1+lsi)*1]), &(inteval->stack[((hsi*35343+185262)*1+lsi)*1]),231);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*188496+34356993)*1+lsi)*1]), &(inteval->stack[((hsi*106029+34250964)*1+lsi)*1]), &(inteval->stack[((hsi*94248+33054153)*1+lsi)*1]),231);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*277200+34545489)*1+lsi)*1]), &(inteval->stack[((hsi*188496+34356993)*1+lsi)*1]), &(inteval->stack[((hsi*166320+33148401)*1+lsi)*1]),231);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*363825+34822689)*1+lsi)*1]), &(inteval->stack[((hsi*277200+34545489)*1+lsi)*1]), &(inteval->stack[((hsi*242550+33314721)*1+lsi)*1]),231);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*441441+35186514)*1+lsi)*1]), &(inteval->stack[((hsi*363825+34822689)*1+lsi)*1]), &(inteval->stack[((hsi*315315+33557271)*1+lsi)*1]),231);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*504504+35627955)*1+lsi)*1]), &(inteval->stack[((hsi*441441+35186514)*1+lsi)*1]), &(inteval->stack[((hsi*378378+33872586)*1+lsi)*1]),231);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*118503+36132459)*1+lsi)*1]), &(inteval->stack[((hsi*43890+101871)*1+lsi)*1]), &(inteval->stack[((hsi*39501+145761)*1+lsi)*1]),231);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*212058+36250962)*1+lsi)*1]), &(inteval->stack[((hsi*118503+36132459)*1+lsi)*1]), &(inteval->stack[((hsi*106029+34250964)*1+lsi)*1]),231);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*314160+36463020)*1+lsi)*1]), &(inteval->stack[((hsi*212058+36250962)*1+lsi)*1]), &(inteval->stack[((hsi*188496+34356993)*1+lsi)*1]),231);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*415800+36777180)*1+lsi)*1]), &(inteval->stack[((hsi*314160+36463020)*1+lsi)*1]), &(inteval->stack[((hsi*277200+34545489)*1+lsi)*1]),231);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*509355+37192980)*1+lsi)*1]), &(inteval->stack[((hsi*415800+36777180)*1+lsi)*1]), &(inteval->stack[((hsi*363825+34822689)*1+lsi)*1]),231);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*588588+37702335)*1+lsi)*1]), &(inteval->stack[((hsi*509355+37192980)*1+lsi)*1]), &(inteval->stack[((hsi*441441+35186514)*1+lsi)*1]),231);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*648648+38290923)*1+lsi)*1]), &(inteval->stack[((hsi*588588+37702335)*1+lsi)*1]), &(inteval->stack[((hsi*504504+35627955)*1+lsi)*1]),231);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*131670+38939571)*1+lsi)*1]), &(inteval->stack[((hsi*48510+53361)*1+lsi)*1]), &(inteval->stack[((hsi*43890+101871)*1+lsi)*1]),231);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*237006+39071241)*1+lsi)*1]), &(inteval->stack[((hsi*131670+38939571)*1+lsi)*1]), &(inteval->stack[((hsi*118503+36132459)*1+lsi)*1]),231);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*353430+39308247)*1+lsi)*1]), &(inteval->stack[((hsi*237006+39071241)*1+lsi)*1]), &(inteval->stack[((hsi*212058+36250962)*1+lsi)*1]),231);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*471240+39661677)*1+lsi)*1]), &(inteval->stack[((hsi*353430+39308247)*1+lsi)*1]), &(inteval->stack[((hsi*314160+36463020)*1+lsi)*1]),231);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*582120+40132917)*1+lsi)*1]), &(inteval->stack[((hsi*471240+39661677)*1+lsi)*1]), &(inteval->stack[((hsi*415800+36777180)*1+lsi)*1]),231);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*679140+107330319)*1+lsi)*1]), &(inteval->stack[((hsi*582120+40132917)*1+lsi)*1]), &(inteval->stack[((hsi*509355+37192980)*1+lsi)*1]),231);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*756756+40715037)*1+lsi)*1]), &(inteval->stack[((hsi*679140+107330319)*1+lsi)*1]), &(inteval->stack[((hsi*588588+37702335)*1+lsi)*1]),231);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*810810+108009459)*1+lsi)*1]), &(inteval->stack[((hsi*756756+40715037)*1+lsi)*1]), &(inteval->stack[((hsi*648648+38290923)*1+lsi)*1]),231);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*45738+41471793)*1+lsi)*1]), &(inteval->stack[((hsi*18018+325017)*1+lsi)*1]), &(inteval->stack[((hsi*15246+343035)*1+lsi)*1]),231);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*91476+41517531)*1+lsi)*1]), &(inteval->stack[((hsi*54054+31740687)*1+lsi)*1]), &(inteval->stack[((hsi*45738+41471793)*1+lsi)*1]),231);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*152460+41609007)*1+lsi)*1]), &(inteval->stack[((hsi*108108+31857804)*1+lsi)*1]), &(inteval->stack[((hsi*91476+41517531)*1+lsi)*1]),231);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*228690+41761467)*1+lsi)*1]), &(inteval->stack[((hsi*180180+32164803)*1+lsi)*1]), &(inteval->stack[((hsi*152460+41609007)*1+lsi)*1]),231);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*320166+108820269)*1+lsi)*1]), &(inteval->stack[((hsi*270270+32783883)*1+lsi)*1]), &(inteval->stack[((hsi*228690+41761467)*1+lsi)*1]),231);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*426888+41471793)*1+lsi)*1]), &(inteval->stack[((hsi*378378+33872586)*1+lsi)*1]), &(inteval->stack[((hsi*320166+108820269)*1+lsi)*1]),231);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*548856+108820269)*1+lsi)*1]), &(inteval->stack[((hsi*504504+35627955)*1+lsi)*1]), &(inteval->stack[((hsi*426888+41471793)*1+lsi)*1]),231);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*686070+41471793)*1+lsi)*1]), &(inteval->stack[((hsi*648648+38290923)*1+lsi)*1]), &(inteval->stack[((hsi*548856+108820269)*1+lsi)*1]),231);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*838530+108820269)*1+lsi)*1]), &(inteval->stack[((hsi*810810+108009459)*1+lsi)*1]), &(inteval->stack[((hsi*686070+41471793)*1+lsi)*1]),231);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*145530+41471793)*1+lsi)*1]), &(inteval->stack[((hsi*53361+0)*1+lsi)*1]), &(inteval->stack[((hsi*48510+53361)*1+lsi)*1]),231);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*263340+41617323)*1+lsi)*1]), &(inteval->stack[((hsi*145530+41471793)*1+lsi)*1]), &(inteval->stack[((hsi*131670+38939571)*1+lsi)*1]),231);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*395010+41880663)*1+lsi)*1]), &(inteval->stack[((hsi*263340+41617323)*1+lsi)*1]), &(inteval->stack[((hsi*237006+39071241)*1+lsi)*1]),231);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*530145+42275673)*1+lsi)*1]), &(inteval->stack[((hsi*395010+41880663)*1+lsi)*1]), &(inteval->stack[((hsi*353430+39308247)*1+lsi)*1]),231);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*659736+109658799)*1+lsi)*1]), &(inteval->stack[((hsi*530145+42275673)*1+lsi)*1]), &(inteval->stack[((hsi*471240+39661677)*1+lsi)*1]),231);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*776160+41471793)*1+lsi)*1]), &(inteval->stack[((hsi*659736+109658799)*1+lsi)*1]), &(inteval->stack[((hsi*582120+40132917)*1+lsi)*1]),231);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*873180+42247953)*1+lsi)*1]), &(inteval->stack[((hsi*776160+41471793)*1+lsi)*1]), &(inteval->stack[((hsi*679140+107330319)*1+lsi)*1]),231);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*945945+109658799)*1+lsi)*1]), &(inteval->stack[((hsi*873180+42247953)*1+lsi)*1]), &(inteval->stack[((hsi*756756+40715037)*1+lsi)*1]),231);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*990990+31740687)*1+lsi)*1]), &(inteval->stack[((hsi*945945+109658799)*1+lsi)*1]), &(inteval->stack[((hsi*810810+108009459)*1+lsi)*1]),231);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*1006236+32731677)*1+lsi)*1]), &(inteval->stack[((hsi*990990+31740687)*1+lsi)*1]), &(inteval->stack[((hsi*838530+108820269)*1+lsi)*1]),231);
HRRPart0bra0ket0pmp(inteval, &(inteval->stack[((hsi*2744280+33737913)*1+lsi)*1]), &(inteval->stack[((hsi*1006236+32731677)*1+lsi)*1]), &(inteval->stack[((hsi*914760+80776143)*1+lsi)*1]),4356);
HRRPart0bra0ket0pld(inteval, &(inteval->stack[((hsi*4965840+36482193)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+33737913)*1+lsi)*1]), &(inteval->stack[((hsi*2482920+81690903)*1+lsi)*1]),4356);
HRRPart0bra0ket0pkf(inteval, &(inteval->stack[((hsi*7448760+107330319)*1+lsi)*1]), &(inteval->stack[((hsi*4965840+36482193)*1+lsi)*1]), &(inteval->stack[((hsi*4469256+27271431)*1+lsi)*1]),4356);
HRRPart0bra0ket0pig(inteval, &(inteval->stack[((hsi*9997020+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*7448760+107330319)*1+lsi)*1]), &(inteval->stack[((hsi*6664680+122062311)*1+lsi)*1]),4356);
HRRPart0bra0ket0phh(inteval, &(inteval->stack[((hsi*12440736+31377357)*1+lsi)*1]), &(inteval->stack[((hsi*9997020+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*8886240+84173823)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgi(inteval, &(inteval->stack[((hsi*14636160+70840143)*1+lsi)*1]), &(inteval->stack[((hsi*12440736+31377357)*1+lsi)*1]), &(inteval->stack[((hsi*10977120+128726991)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfk(inteval, &(inteval->stack[((hsi*16465680+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*14636160+70840143)*1+lsi)*1]), &(inteval->stack[((hsi*12806640+139704111)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdl(inteval, &(inteval->stack[((hsi*17837820+107330319)*1+lsi)*1]), &(inteval->stack[((hsi*16465680+21380337)*1+lsi)*1]), &(inteval->stack[((hsi*14270256+93060063)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppm(inteval, &(inteval->stack[((hsi*18687240+70840143)*1+lsi)*1]), &(inteval->stack[((hsi*17837820+107330319)*1+lsi)*1]), &(inteval->stack[((hsi*15289560+152510751)*1+lsi)*1]),4356);
HRRPart0bra0ket0psps(inteval, &(inteval->stack[((hsi*18974736+2405601)*1+lsi)*1]), &(inteval->stack[((hsi*18687240+70840143)*1+lsi)*1]), &(inteval->stack[((hsi*15812280+55027863)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*18974736+2405601)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
