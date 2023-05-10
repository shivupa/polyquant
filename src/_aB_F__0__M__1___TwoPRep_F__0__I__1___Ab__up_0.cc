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
#include <HRRPart0bra0ket0ff.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
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
#include <_aB_F__0__M__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__M__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,48174)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__M__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+202174)*1+lsi)*1]), &(inteval->stack[((hsi*1170+38679)*1+lsi)*1]), &(inteval->stack[((hsi*990+39849)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+205144)*1+lsi)*1]), &(inteval->stack[((hsi*1365+37314)*1+lsi)*1]), &(inteval->stack[((hsi*1170+38679)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+208654)*1+lsi)*1]), &(inteval->stack[((hsi*3510+205144)*1+lsi)*1]), &(inteval->stack[((hsi*2970+202174)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+214594)*1+lsi)*1]), &(inteval->stack[((hsi*1575+35739)*1+lsi)*1]), &(inteval->stack[((hsi*1365+37314)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+218689)*1+lsi)*1]), &(inteval->stack[((hsi*4095+214594)*1+lsi)*1]), &(inteval->stack[((hsi*3510+205144)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+225709)*1+lsi)*1]), &(inteval->stack[((hsi*7020+218689)*1+lsi)*1]), &(inteval->stack[((hsi*5940+208654)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+235609)*1+lsi)*1]), &(inteval->stack[((hsi*1800+33939)*1+lsi)*1]), &(inteval->stack[((hsi*1575+35739)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+240334)*1+lsi)*1]), &(inteval->stack[((hsi*4725+235609)*1+lsi)*1]), &(inteval->stack[((hsi*4095+214594)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+248524)*1+lsi)*1]), &(inteval->stack[((hsi*8190+240334)*1+lsi)*1]), &(inteval->stack[((hsi*7020+218689)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+260224)*1+lsi)*1]), &(inteval->stack[((hsi*11700+248524)*1+lsi)*1]), &(inteval->stack[((hsi*9900+225709)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+214594)*1+lsi)*1]), &(inteval->stack[((hsi*990+39849)*1+lsi)*1]), &(inteval->stack[((hsi*825+40839)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+217069)*1+lsi)*1]), &(inteval->stack[((hsi*2970+202174)*1+lsi)*1]), &(inteval->stack[((hsi*2475+214594)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+275074)*1+lsi)*1]), &(inteval->stack[((hsi*5940+208654)*1+lsi)*1]), &(inteval->stack[((hsi*4950+217069)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+202174)*1+lsi)*1]), &(inteval->stack[((hsi*9900+225709)*1+lsi)*1]), &(inteval->stack[((hsi*8250+275074)*1+lsi)*1]),15);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*17325+214549)*1+lsi)*1]), &(inteval->stack[((hsi*14850+260224)*1+lsi)*1]), &(inteval->stack[((hsi*12375+202174)*1+lsi)*1]),15);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*5400+202174)*1+lsi)*1]), &(inteval->stack[((hsi*2040+31899)*1+lsi)*1]), &(inteval->stack[((hsi*1800+33939)*1+lsi)*1]),15);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*9450+31899)*1+lsi)*1]), &(inteval->stack[((hsi*5400+202174)*1+lsi)*1]), &(inteval->stack[((hsi*4725+235609)*1+lsi)*1]),15);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*13650+275074)*1+lsi)*1]), &(inteval->stack[((hsi*9450+31899)*1+lsi)*1]), &(inteval->stack[((hsi*8190+240334)*1+lsi)*1]),15);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*17550+288724)*1+lsi)*1]), &(inteval->stack[((hsi*13650+275074)*1+lsi)*1]), &(inteval->stack[((hsi*11700+248524)*1+lsi)*1]),15);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*20790+231874)*1+lsi)*1]), &(inteval->stack[((hsi*17550+288724)*1+lsi)*1]), &(inteval->stack[((hsi*14850+260224)*1+lsi)*1]),15);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*23100+252664)*1+lsi)*1]), &(inteval->stack[((hsi*20790+231874)*1+lsi)*1]), &(inteval->stack[((hsi*17325+214549)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+202174)*1+lsi)*1]), &(inteval->stack[((hsi*1638+27720)*1+lsi)*1]), &(inteval->stack[((hsi*1386+29358)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+206332)*1+lsi)*1]), &(inteval->stack[((hsi*1911+25809)*1+lsi)*1]), &(inteval->stack[((hsi*1638+27720)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+211246)*1+lsi)*1]), &(inteval->stack[((hsi*4914+206332)*1+lsi)*1]), &(inteval->stack[((hsi*4158+202174)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+219562)*1+lsi)*1]), &(inteval->stack[((hsi*2205+23604)*1+lsi)*1]), &(inteval->stack[((hsi*1911+25809)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+225295)*1+lsi)*1]), &(inteval->stack[((hsi*5733+219562)*1+lsi)*1]), &(inteval->stack[((hsi*4914+206332)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+235123)*1+lsi)*1]), &(inteval->stack[((hsi*9828+225295)*1+lsi)*1]), &(inteval->stack[((hsi*8316+211246)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+31899)*1+lsi)*1]), &(inteval->stack[((hsi*2520+21084)*1+lsi)*1]), &(inteval->stack[((hsi*2205+23604)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+275764)*1+lsi)*1]), &(inteval->stack[((hsi*6615+31899)*1+lsi)*1]), &(inteval->stack[((hsi*5733+219562)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+287230)*1+lsi)*1]), &(inteval->stack[((hsi*11466+275764)*1+lsi)*1]), &(inteval->stack[((hsi*9828+225295)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+303610)*1+lsi)*1]), &(inteval->stack[((hsi*16380+287230)*1+lsi)*1]), &(inteval->stack[((hsi*13860+235123)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+219562)*1+lsi)*1]), &(inteval->stack[((hsi*1386+29358)*1+lsi)*1]), &(inteval->stack[((hsi*1155+30744)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+223027)*1+lsi)*1]), &(inteval->stack[((hsi*4158+202174)*1+lsi)*1]), &(inteval->stack[((hsi*3465+219562)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+324400)*1+lsi)*1]), &(inteval->stack[((hsi*8316+211246)*1+lsi)*1]), &(inteval->stack[((hsi*6930+223027)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+202174)*1+lsi)*1]), &(inteval->stack[((hsi*13860+235123)*1+lsi)*1]), &(inteval->stack[((hsi*11550+324400)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+219499)*1+lsi)*1]), &(inteval->stack[((hsi*20790+303610)*1+lsi)*1]), &(inteval->stack[((hsi*17325+202174)*1+lsi)*1]),21);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*7560+202174)*1+lsi)*1]), &(inteval->stack[((hsi*2856+18228)*1+lsi)*1]), &(inteval->stack[((hsi*2520+21084)*1+lsi)*1]),21);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*13230+18228)*1+lsi)*1]), &(inteval->stack[((hsi*7560+202174)*1+lsi)*1]), &(inteval->stack[((hsi*6615+31899)*1+lsi)*1]),21);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*19110+324400)*1+lsi)*1]), &(inteval->stack[((hsi*13230+18228)*1+lsi)*1]), &(inteval->stack[((hsi*11466+275764)*1+lsi)*1]),21);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*24570+343510)*1+lsi)*1]), &(inteval->stack[((hsi*19110+324400)*1+lsi)*1]), &(inteval->stack[((hsi*16380+287230)*1+lsi)*1]),21);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*29106+368080)*1+lsi)*1]), &(inteval->stack[((hsi*24570+343510)*1+lsi)*1]), &(inteval->stack[((hsi*20790+303610)*1+lsi)*1]),21);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*32340+275764)*1+lsi)*1]), &(inteval->stack[((hsi*29106+368080)*1+lsi)*1]), &(inteval->stack[((hsi*24255+219499)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*69300+308104)*1+lsi)*1]), &(inteval->stack[((hsi*32340+275764)*1+lsi)*1]), &(inteval->stack[((hsi*23100+252664)*1+lsi)*1]),1540);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+202174)*1+lsi)*1]), &(inteval->stack[((hsi*780+46184)*1+lsi)*1]), &(inteval->stack[((hsi*660+46964)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+204154)*1+lsi)*1]), &(inteval->stack[((hsi*910+45274)*1+lsi)*1]), &(inteval->stack[((hsi*780+46184)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+206494)*1+lsi)*1]), &(inteval->stack[((hsi*2340+204154)*1+lsi)*1]), &(inteval->stack[((hsi*1980+202174)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+210454)*1+lsi)*1]), &(inteval->stack[((hsi*1050+44224)*1+lsi)*1]), &(inteval->stack[((hsi*910+45274)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+213184)*1+lsi)*1]), &(inteval->stack[((hsi*2730+210454)*1+lsi)*1]), &(inteval->stack[((hsi*2340+204154)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+217864)*1+lsi)*1]), &(inteval->stack[((hsi*4680+213184)*1+lsi)*1]), &(inteval->stack[((hsi*3960+206494)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+224464)*1+lsi)*1]), &(inteval->stack[((hsi*1200+43024)*1+lsi)*1]), &(inteval->stack[((hsi*1050+44224)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+227614)*1+lsi)*1]), &(inteval->stack[((hsi*3150+224464)*1+lsi)*1]), &(inteval->stack[((hsi*2730+210454)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+18228)*1+lsi)*1]), &(inteval->stack[((hsi*5460+227614)*1+lsi)*1]), &(inteval->stack[((hsi*4680+213184)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+233074)*1+lsi)*1]), &(inteval->stack[((hsi*7800+18228)*1+lsi)*1]), &(inteval->stack[((hsi*6600+217864)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+26028)*1+lsi)*1]), &(inteval->stack[((hsi*660+46964)*1+lsi)*1]), &(inteval->stack[((hsi*550+47624)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+27678)*1+lsi)*1]), &(inteval->stack[((hsi*1980+202174)*1+lsi)*1]), &(inteval->stack[((hsi*1650+26028)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+30978)*1+lsi)*1]), &(inteval->stack[((hsi*3960+206494)*1+lsi)*1]), &(inteval->stack[((hsi*3300+27678)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+202174)*1+lsi)*1]), &(inteval->stack[((hsi*6600+217864)*1+lsi)*1]), &(inteval->stack[((hsi*5500+30978)*1+lsi)*1]),10);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*11550+26028)*1+lsi)*1]), &(inteval->stack[((hsi*9900+233074)*1+lsi)*1]), &(inteval->stack[((hsi*8250+202174)*1+lsi)*1]),10);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*3600+202174)*1+lsi)*1]), &(inteval->stack[((hsi*1360+41664)*1+lsi)*1]), &(inteval->stack[((hsi*1200+43024)*1+lsi)*1]),10);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*6300+205774)*1+lsi)*1]), &(inteval->stack[((hsi*3600+202174)*1+lsi)*1]), &(inteval->stack[((hsi*3150+224464)*1+lsi)*1]),10);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*9100+212074)*1+lsi)*1]), &(inteval->stack[((hsi*6300+205774)*1+lsi)*1]), &(inteval->stack[((hsi*5460+227614)*1+lsi)*1]),10);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*11700+221174)*1+lsi)*1]), &(inteval->stack[((hsi*9100+212074)*1+lsi)*1]), &(inteval->stack[((hsi*7800+18228)*1+lsi)*1]),10);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*13860+202174)*1+lsi)*1]), &(inteval->stack[((hsi*11700+221174)*1+lsi)*1]), &(inteval->stack[((hsi*9900+233074)*1+lsi)*1]),10);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*15400+216034)*1+lsi)*1]), &(inteval->stack[((hsi*13860+202174)*1+lsi)*1]), &(inteval->stack[((hsi*11550+26028)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*46200+377404)*1+lsi)*1]), &(inteval->stack[((hsi*23100+252664)*1+lsi)*1]), &(inteval->stack[((hsi*15400+216034)*1+lsi)*1]),1540);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*92400+423604)*1+lsi)*1]), &(inteval->stack[((hsi*69300+308104)*1+lsi)*1]), &(inteval->stack[((hsi*46200+377404)*1+lsi)*1]),1540);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+202174)*1+lsi)*1]), &(inteval->stack[((hsi*2184+12656)*1+lsi)*1]), &(inteval->stack[((hsi*1848+14840)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+207718)*1+lsi)*1]), &(inteval->stack[((hsi*2548+10108)*1+lsi)*1]), &(inteval->stack[((hsi*2184+12656)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+214270)*1+lsi)*1]), &(inteval->stack[((hsi*6552+207718)*1+lsi)*1]), &(inteval->stack[((hsi*5544+202174)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+225358)*1+lsi)*1]), &(inteval->stack[((hsi*2940+7168)*1+lsi)*1]), &(inteval->stack[((hsi*2548+10108)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+377404)*1+lsi)*1]), &(inteval->stack[((hsi*7644+225358)*1+lsi)*1]), &(inteval->stack[((hsi*6552+207718)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+233002)*1+lsi)*1]), &(inteval->stack[((hsi*13104+377404)*1+lsi)*1]), &(inteval->stack[((hsi*11088+214270)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+390508)*1+lsi)*1]), &(inteval->stack[((hsi*3360+3808)*1+lsi)*1]), &(inteval->stack[((hsi*2940+7168)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+18228)*1+lsi)*1]), &(inteval->stack[((hsi*8820+390508)*1+lsi)*1]), &(inteval->stack[((hsi*7644+225358)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+251482)*1+lsi)*1]), &(inteval->stack[((hsi*15288+18228)*1+lsi)*1]), &(inteval->stack[((hsi*13104+377404)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+516004)*1+lsi)*1]), &(inteval->stack[((hsi*21840+251482)*1+lsi)*1]), &(inteval->stack[((hsi*18480+233002)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+399328)*1+lsi)*1]), &(inteval->stack[((hsi*1848+14840)*1+lsi)*1]), &(inteval->stack[((hsi*1540+16688)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+403948)*1+lsi)*1]), &(inteval->stack[((hsi*5544+202174)*1+lsi)*1]), &(inteval->stack[((hsi*4620+399328)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+543724)*1+lsi)*1]), &(inteval->stack[((hsi*11088+214270)*1+lsi)*1]), &(inteval->stack[((hsi*9240+403948)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+202174)*1+lsi)*1]), &(inteval->stack[((hsi*18480+233002)*1+lsi)*1]), &(inteval->stack[((hsi*15400+543724)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+543724)*1+lsi)*1]), &(inteval->stack[((hsi*27720+516004)*1+lsi)*1]), &(inteval->stack[((hsi*23100+202174)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+202174)*1+lsi)*1]), &(inteval->stack[((hsi*3808+0)*1+lsi)*1]), &(inteval->stack[((hsi*3360+3808)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+212254)*1+lsi)*1]), &(inteval->stack[((hsi*10080+202174)*1+lsi)*1]), &(inteval->stack[((hsi*8820+390508)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+377404)*1+lsi)*1]), &(inteval->stack[((hsi*17640+212254)*1+lsi)*1]), &(inteval->stack[((hsi*15288+18228)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+202174)*1+lsi)*1]), &(inteval->stack[((hsi*25480+377404)*1+lsi)*1]), &(inteval->stack[((hsi*21840+251482)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+0)*1+lsi)*1]), &(inteval->stack[((hsi*32760+202174)*1+lsi)*1]), &(inteval->stack[((hsi*27720+516004)*1+lsi)*1]),28);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*43120+202174)*1+lsi)*1]), &(inteval->stack[((hsi*38808+0)*1+lsi)*1]), &(inteval->stack[((hsi*32340+543724)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*97020+516004)*1+lsi)*1]), &(inteval->stack[((hsi*43120+202174)*1+lsi)*1]), &(inteval->stack[((hsi*32340+275764)*1+lsi)*1]),1540);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*138600+613024)*1+lsi)*1]), &(inteval->stack[((hsi*97020+516004)*1+lsi)*1]), &(inteval->stack[((hsi*69300+308104)*1+lsi)*1]),1540);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*154000+48174)*1+lsi)*1]), &(inteval->stack[((hsi*138600+613024)*1+lsi)*1]), &(inteval->stack[((hsi*92400+423604)*1+lsi)*1]),1540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*154000+48174)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
