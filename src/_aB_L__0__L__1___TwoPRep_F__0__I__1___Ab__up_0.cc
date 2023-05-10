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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0li.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__L__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,136640)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+703640)*1+lsi)*1]), &(inteval->stack[((hsi*3630+102310)*1+lsi)*1]), &(inteval->stack[((hsi*3025+105940)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+712715)*1+lsi)*1]), &(inteval->stack[((hsi*4290+98020)*1+lsi)*1]), &(inteval->stack[((hsi*3630+102310)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+723605)*1+lsi)*1]), &(inteval->stack[((hsi*10890+712715)*1+lsi)*1]), &(inteval->stack[((hsi*9075+703640)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+741755)*1+lsi)*1]), &(inteval->stack[((hsi*5005+93015)*1+lsi)*1]), &(inteval->stack[((hsi*4290+98020)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+754625)*1+lsi)*1]), &(inteval->stack[((hsi*12870+741755)*1+lsi)*1]), &(inteval->stack[((hsi*10890+712715)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+776405)*1+lsi)*1]), &(inteval->stack[((hsi*21780+754625)*1+lsi)*1]), &(inteval->stack[((hsi*18150+723605)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+806655)*1+lsi)*1]), &(inteval->stack[((hsi*5775+87240)*1+lsi)*1]), &(inteval->stack[((hsi*5005+93015)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+821670)*1+lsi)*1]), &(inteval->stack[((hsi*15015+806655)*1+lsi)*1]), &(inteval->stack[((hsi*12870+741755)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+847410)*1+lsi)*1]), &(inteval->stack[((hsi*25740+821670)*1+lsi)*1]), &(inteval->stack[((hsi*21780+754625)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+883710)*1+lsi)*1]), &(inteval->stack[((hsi*36300+847410)*1+lsi)*1]), &(inteval->stack[((hsi*30250+776405)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+741755)*1+lsi)*1]), &(inteval->stack[((hsi*3025+105940)*1+lsi)*1]), &(inteval->stack[((hsi*2475+108965)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+749180)*1+lsi)*1]), &(inteval->stack[((hsi*9075+703640)*1+lsi)*1]), &(inteval->stack[((hsi*7425+741755)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+929085)*1+lsi)*1]), &(inteval->stack[((hsi*18150+723605)*1+lsi)*1]), &(inteval->stack[((hsi*14850+749180)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+703640)*1+lsi)*1]), &(inteval->stack[((hsi*30250+776405)*1+lsi)*1]), &(inteval->stack[((hsi*24750+929085)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+740765)*1+lsi)*1]), &(inteval->stack[((hsi*45375+883710)*1+lsi)*1]), &(inteval->stack[((hsi*37125+703640)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+703640)*1+lsi)*1]), &(inteval->stack[((hsi*6600+80640)*1+lsi)*1]), &(inteval->stack[((hsi*5775+87240)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+80640)*1+lsi)*1]), &(inteval->stack[((hsi*17325+703640)*1+lsi)*1]), &(inteval->stack[((hsi*15015+806655)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+929085)*1+lsi)*1]), &(inteval->stack[((hsi*30030+80640)*1+lsi)*1]), &(inteval->stack[((hsi*25740+821670)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+792740)*1+lsi)*1]), &(inteval->stack[((hsi*42900+929085)*1+lsi)*1]), &(inteval->stack[((hsi*36300+847410)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+929085)*1+lsi)*1]), &(inteval->stack[((hsi*54450+792740)*1+lsi)*1]), &(inteval->stack[((hsi*45375+883710)*1+lsi)*1]),55);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*69300+792740)*1+lsi)*1]), &(inteval->stack[((hsi*63525+929085)*1+lsi)*1]), &(inteval->stack[((hsi*51975+740765)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+703640)*1+lsi)*1]), &(inteval->stack[((hsi*4356+69684)*1+lsi)*1]), &(inteval->stack[((hsi*3630+74040)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+714530)*1+lsi)*1]), &(inteval->stack[((hsi*5148+64536)*1+lsi)*1]), &(inteval->stack[((hsi*4356+69684)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+727598)*1+lsi)*1]), &(inteval->stack[((hsi*13068+714530)*1+lsi)*1]), &(inteval->stack[((hsi*10890+703640)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+749378)*1+lsi)*1]), &(inteval->stack[((hsi*6006+58530)*1+lsi)*1]), &(inteval->stack[((hsi*5148+64536)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+80640)*1+lsi)*1]), &(inteval->stack[((hsi*15444+749378)*1+lsi)*1]), &(inteval->stack[((hsi*13068+714530)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+862040)*1+lsi)*1]), &(inteval->stack[((hsi*26136+80640)*1+lsi)*1]), &(inteval->stack[((hsi*21780+727598)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+764822)*1+lsi)*1]), &(inteval->stack[((hsi*6930+51600)*1+lsi)*1]), &(inteval->stack[((hsi*6006+58530)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+898340)*1+lsi)*1]), &(inteval->stack[((hsi*18018+764822)*1+lsi)*1]), &(inteval->stack[((hsi*15444+749378)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+929228)*1+lsi)*1]), &(inteval->stack[((hsi*30888+898340)*1+lsi)*1]), &(inteval->stack[((hsi*26136+80640)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+972788)*1+lsi)*1]), &(inteval->stack[((hsi*43560+929228)*1+lsi)*1]), &(inteval->stack[((hsi*36300+862040)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+80640)*1+lsi)*1]), &(inteval->stack[((hsi*3630+74040)*1+lsi)*1]), &(inteval->stack[((hsi*2970+77670)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+58530)*1+lsi)*1]), &(inteval->stack[((hsi*10890+703640)*1+lsi)*1]), &(inteval->stack[((hsi*8910+80640)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+76350)*1+lsi)*1]), &(inteval->stack[((hsi*21780+727598)*1+lsi)*1]), &(inteval->stack[((hsi*17820+58530)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+703640)*1+lsi)*1]), &(inteval->stack[((hsi*36300+862040)*1+lsi)*1]), &(inteval->stack[((hsi*29700+76350)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+1027238)*1+lsi)*1]), &(inteval->stack[((hsi*54450+972788)*1+lsi)*1]), &(inteval->stack[((hsi*44550+703640)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+703640)*1+lsi)*1]), &(inteval->stack[((hsi*7920+43680)*1+lsi)*1]), &(inteval->stack[((hsi*6930+51600)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+43680)*1+lsi)*1]), &(inteval->stack[((hsi*20790+703640)*1+lsi)*1]), &(inteval->stack[((hsi*18018+764822)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+703640)*1+lsi)*1]), &(inteval->stack[((hsi*36036+43680)*1+lsi)*1]), &(inteval->stack[((hsi*30888+898340)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+43680)*1+lsi)*1]), &(inteval->stack[((hsi*51480+703640)*1+lsi)*1]), &(inteval->stack[((hsi*43560+929228)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+862040)*1+lsi)*1]), &(inteval->stack[((hsi*65340+43680)*1+lsi)*1]), &(inteval->stack[((hsi*54450+972788)*1+lsi)*1]),66);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*83160+703640)*1+lsi)*1]), &(inteval->stack[((hsi*76230+862040)*1+lsi)*1]), &(inteval->stack[((hsi*62370+1027238)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*207900+862040)*1+lsi)*1]), &(inteval->stack[((hsi*83160+703640)*1+lsi)*1]), &(inteval->stack[((hsi*69300+792740)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+43680)*1+lsi)*1]), &(inteval->stack[((hsi*2970+129170)*1+lsi)*1]), &(inteval->stack[((hsi*2475+132140)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+51105)*1+lsi)*1]), &(inteval->stack[((hsi*3510+125660)*1+lsi)*1]), &(inteval->stack[((hsi*2970+129170)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+60015)*1+lsi)*1]), &(inteval->stack[((hsi*8910+51105)*1+lsi)*1]), &(inteval->stack[((hsi*7425+43680)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+74865)*1+lsi)*1]), &(inteval->stack[((hsi*4095+121565)*1+lsi)*1]), &(inteval->stack[((hsi*3510+125660)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+85395)*1+lsi)*1]), &(inteval->stack[((hsi*10530+74865)*1+lsi)*1]), &(inteval->stack[((hsi*8910+51105)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+1069940)*1+lsi)*1]), &(inteval->stack[((hsi*17820+85395)*1+lsi)*1]), &(inteval->stack[((hsi*14850+60015)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+1094690)*1+lsi)*1]), &(inteval->stack[((hsi*4725+116840)*1+lsi)*1]), &(inteval->stack[((hsi*4095+121565)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+1106975)*1+lsi)*1]), &(inteval->stack[((hsi*12285+1094690)*1+lsi)*1]), &(inteval->stack[((hsi*10530+74865)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+1128035)*1+lsi)*1]), &(inteval->stack[((hsi*21060+1106975)*1+lsi)*1]), &(inteval->stack[((hsi*17820+85395)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+1157735)*1+lsi)*1]), &(inteval->stack[((hsi*29700+1128035)*1+lsi)*1]), &(inteval->stack[((hsi*24750+1069940)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+74865)*1+lsi)*1]), &(inteval->stack[((hsi*2475+132140)*1+lsi)*1]), &(inteval->stack[((hsi*2025+134615)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+80940)*1+lsi)*1]), &(inteval->stack[((hsi*7425+43680)*1+lsi)*1]), &(inteval->stack[((hsi*6075+74865)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+1194860)*1+lsi)*1]), &(inteval->stack[((hsi*14850+60015)*1+lsi)*1]), &(inteval->stack[((hsi*12150+80940)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+43680)*1+lsi)*1]), &(inteval->stack[((hsi*24750+1069940)*1+lsi)*1]), &(inteval->stack[((hsi*20250+1194860)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+1194860)*1+lsi)*1]), &(inteval->stack[((hsi*37125+1157735)*1+lsi)*1]), &(inteval->stack[((hsi*30375+43680)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+43680)*1+lsi)*1]), &(inteval->stack[((hsi*5400+111440)*1+lsi)*1]), &(inteval->stack[((hsi*4725+116840)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+57855)*1+lsi)*1]), &(inteval->stack[((hsi*14175+43680)*1+lsi)*1]), &(inteval->stack[((hsi*12285+1094690)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+82425)*1+lsi)*1]), &(inteval->stack[((hsi*24570+57855)*1+lsi)*1]), &(inteval->stack[((hsi*21060+1106975)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+1069940)*1+lsi)*1]), &(inteval->stack[((hsi*35100+82425)*1+lsi)*1]), &(inteval->stack[((hsi*29700+1128035)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+43680)*1+lsi)*1]), &(inteval->stack[((hsi*44550+1069940)*1+lsi)*1]), &(inteval->stack[((hsi*37125+1157735)*1+lsi)*1]),45);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*56700+1069940)*1+lsi)*1]), &(inteval->stack[((hsi*51975+43680)*1+lsi)*1]), &(inteval->stack[((hsi*42525+1194860)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*170100+1126640)*1+lsi)*1]), &(inteval->stack[((hsi*69300+792740)*1+lsi)*1]), &(inteval->stack[((hsi*56700+1069940)*1+lsi)*1]),1260);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*340200+1296740)*1+lsi)*1]), &(inteval->stack[((hsi*207900+862040)*1+lsi)*1]), &(inteval->stack[((hsi*170100+1126640)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+1069940)*1+lsi)*1]), &(inteval->stack[((hsi*5148+30732)*1+lsi)*1]), &(inteval->stack[((hsi*4290+35880)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+1082810)*1+lsi)*1]), &(inteval->stack[((hsi*6084+24648)*1+lsi)*1]), &(inteval->stack[((hsi*5148+30732)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+1098254)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1082810)*1+lsi)*1]), &(inteval->stack[((hsi*12870+1069940)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1123994)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17550)*1+lsi)*1]), &(inteval->stack[((hsi*6084+24648)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1142246)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1123994)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1082810)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+1173134)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1142246)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1098254)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+43680)*1+lsi)*1]), &(inteval->stack[((hsi*8190+9360)*1+lsi)*1]), &(inteval->stack[((hsi*7098+17550)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1216034)*1+lsi)*1]), &(inteval->stack[((hsi*21294+43680)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1123994)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+786800)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1216034)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1142246)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+64974)*1+lsi)*1]), &(inteval->stack[((hsi*51480+786800)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1173134)*1+lsi)*1]),78);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+1123994)*1+lsi)*1]), &(inteval->stack[((hsi*4290+35880)*1+lsi)*1]), &(inteval->stack[((hsi*3510+40170)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+1252538)*1+lsi)*1]), &(inteval->stack[((hsi*12870+1069940)*1+lsi)*1]), &(inteval->stack[((hsi*10530+1123994)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+1123994)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1098254)*1+lsi)*1]), &(inteval->stack[((hsi*21060+1252538)*1+lsi)*1]),78);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+1069940)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1173134)*1+lsi)*1]), &(inteval->stack[((hsi*35100+1123994)*1+lsi)*1]),78);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*73710+1122590)*1+lsi)*1]), &(inteval->stack[((hsi*64350+64974)*1+lsi)*1]), &(inteval->stack[((hsi*52650+1069940)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1069940)*1+lsi)*1]), &(inteval->stack[((hsi*9360+0)*1+lsi)*1]), &(inteval->stack[((hsi*8190+9360)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1252538)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1069940)*1+lsi)*1]), &(inteval->stack[((hsi*21294+43680)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+0)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1252538)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1216034)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1196300)*1+lsi)*1]), &(inteval->stack[((hsi*60840+0)*1+lsi)*1]), &(inteval->stack[((hsi*51480+786800)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+1636940)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1196300)*1+lsi)*1]), &(inteval->stack[((hsi*64350+64974)*1+lsi)*1]),78);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*98280+0)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1636940)*1+lsi)*1]), &(inteval->stack[((hsi*73710+1122590)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*249480+1636940)*1+lsi)*1]), &(inteval->stack[((hsi*98280+0)*1+lsi)*1]), &(inteval->stack[((hsi*83160+703640)*1+lsi)*1]),1260);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*415800+1886420)*1+lsi)*1]), &(inteval->stack[((hsi*249480+1636940)*1+lsi)*1]), &(inteval->stack[((hsi*207900+862040)*1+lsi)*1]),1260);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*567000+136640)*1+lsi)*1]), &(inteval->stack[((hsi*415800+1886420)*1+lsi)*1]), &(inteval->stack[((hsi*340200+1296740)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*567000+136640)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
