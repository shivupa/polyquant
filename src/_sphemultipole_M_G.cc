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
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psp.h>
#include <_sphemultipole_M_G_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_M_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9875)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_M_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+9676)*1+lsi)*1]), &(inteval->stack[((hsi*66+9754)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+9585)*1+lsi)*1]), &(inteval->stack[((hsi*78+9676)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+9754)*1+lsi)*1]), &(inteval->stack[((hsi*55+9820)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+31823)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+9480)*1+lsi)*1]), &(inteval->stack[((hsi*91+9585)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+32841)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+29675)*1+lsi)*1]), &(inteval->stack[((hsi*660+32841)*1+lsi)*1]), &(inteval->stack[((hsi*550+31823)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+9281)*1+lsi)*1]), &(inteval->stack[((hsi*66+9359)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+9190)*1+lsi)*1]), &(inteval->stack[((hsi*78+9281)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+9359)*1+lsi)*1]), &(inteval->stack[((hsi*55+9425)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+9281)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+9085)*1+lsi)*1]), &(inteval->stack[((hsi*91+9190)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+33501)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+28850)*1+lsi)*1]), &(inteval->stack[((hsi*660+33501)*1+lsi)*1]), &(inteval->stack[((hsi*550+9281)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+8886)*1+lsi)*1]), &(inteval->stack[((hsi*66+8964)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+8795)*1+lsi)*1]), &(inteval->stack[((hsi*78+8886)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+8964)*1+lsi)*1]), &(inteval->stack[((hsi*55+9030)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+34161)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+8690)*1+lsi)*1]), &(inteval->stack[((hsi*91+8795)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+34711)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+28025)*1+lsi)*1]), &(inteval->stack[((hsi*660+34711)*1+lsi)*1]), &(inteval->stack[((hsi*550+34161)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+8491)*1+lsi)*1]), &(inteval->stack[((hsi*66+8569)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+8400)*1+lsi)*1]), &(inteval->stack[((hsi*78+8491)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+8690)*1+lsi)*1]), &(inteval->stack[((hsi*66+8569)*1+lsi)*1]), &(inteval->stack[((hsi*55+8635)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31328)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+8690)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+8491)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+8295)*1+lsi)*1]), &(inteval->stack[((hsi*91+8400)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+35371)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+27200)*1+lsi)*1]), &(inteval->stack[((hsi*660+35371)*1+lsi)*1]), &(inteval->stack[((hsi*550+8491)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+8096)*1+lsi)*1]), &(inteval->stack[((hsi*66+8174)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+8005)*1+lsi)*1]), &(inteval->stack[((hsi*78+8096)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+8174)*1+lsi)*1]), &(inteval->stack[((hsi*55+8240)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+36031)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+7900)*1+lsi)*1]), &(inteval->stack[((hsi*91+8005)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+36581)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+26375)*1+lsi)*1]), &(inteval->stack[((hsi*660+36581)*1+lsi)*1]), &(inteval->stack[((hsi*550+36031)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+7701)*1+lsi)*1]), &(inteval->stack[((hsi*66+7779)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+7610)*1+lsi)*1]), &(inteval->stack[((hsi*78+7701)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+7900)*1+lsi)*1]), &(inteval->stack[((hsi*66+7779)*1+lsi)*1]), &(inteval->stack[((hsi*55+7845)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31328)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+7900)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+7701)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+7505)*1+lsi)*1]), &(inteval->stack[((hsi*91+7610)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+37241)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+25550)*1+lsi)*1]), &(inteval->stack[((hsi*660+37241)*1+lsi)*1]), &(inteval->stack[((hsi*550+7701)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+7306)*1+lsi)*1]), &(inteval->stack[((hsi*66+7384)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+7215)*1+lsi)*1]), &(inteval->stack[((hsi*78+7306)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+7384)*1+lsi)*1]), &(inteval->stack[((hsi*55+7450)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+37901)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+7110)*1+lsi)*1]), &(inteval->stack[((hsi*91+7215)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+38451)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+24725)*1+lsi)*1]), &(inteval->stack[((hsi*660+38451)*1+lsi)*1]), &(inteval->stack[((hsi*550+37901)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+6911)*1+lsi)*1]), &(inteval->stack[((hsi*66+6989)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+6820)*1+lsi)*1]), &(inteval->stack[((hsi*78+6911)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+7110)*1+lsi)*1]), &(inteval->stack[((hsi*66+6989)*1+lsi)*1]), &(inteval->stack[((hsi*55+7055)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31328)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+7110)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+6911)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+6715)*1+lsi)*1]), &(inteval->stack[((hsi*91+6820)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+39111)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+23900)*1+lsi)*1]), &(inteval->stack[((hsi*660+39111)*1+lsi)*1]), &(inteval->stack[((hsi*550+6911)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+6516)*1+lsi)*1]), &(inteval->stack[((hsi*66+6594)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+6425)*1+lsi)*1]), &(inteval->stack[((hsi*78+6516)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+6594)*1+lsi)*1]), &(inteval->stack[((hsi*55+6660)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+39771)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+6320)*1+lsi)*1]), &(inteval->stack[((hsi*91+6425)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+40321)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+23075)*1+lsi)*1]), &(inteval->stack[((hsi*660+40321)*1+lsi)*1]), &(inteval->stack[((hsi*550+39771)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+6121)*1+lsi)*1]), &(inteval->stack[((hsi*66+6199)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+6030)*1+lsi)*1]), &(inteval->stack[((hsi*78+6121)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6320)*1+lsi)*1]), &(inteval->stack[((hsi*66+6199)*1+lsi)*1]), &(inteval->stack[((hsi*55+6265)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31328)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+6320)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+6121)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+5925)*1+lsi)*1]), &(inteval->stack[((hsi*91+6030)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+40981)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+22250)*1+lsi)*1]), &(inteval->stack[((hsi*660+40981)*1+lsi)*1]), &(inteval->stack[((hsi*550+6121)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+5726)*1+lsi)*1]), &(inteval->stack[((hsi*66+5804)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+5635)*1+lsi)*1]), &(inteval->stack[((hsi*78+5726)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+5804)*1+lsi)*1]), &(inteval->stack[((hsi*55+5870)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+41641)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+5530)*1+lsi)*1]), &(inteval->stack[((hsi*91+5635)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+42191)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+21425)*1+lsi)*1]), &(inteval->stack[((hsi*660+42191)*1+lsi)*1]), &(inteval->stack[((hsi*550+41641)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+5331)*1+lsi)*1]), &(inteval->stack[((hsi*66+5409)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+5240)*1+lsi)*1]), &(inteval->stack[((hsi*78+5331)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+5530)*1+lsi)*1]), &(inteval->stack[((hsi*66+5409)*1+lsi)*1]), &(inteval->stack[((hsi*55+5475)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31328)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+5530)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+5331)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+5135)*1+lsi)*1]), &(inteval->stack[((hsi*91+5240)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+42851)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+20600)*1+lsi)*1]), &(inteval->stack[((hsi*660+42851)*1+lsi)*1]), &(inteval->stack[((hsi*550+5331)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+4936)*1+lsi)*1]), &(inteval->stack[((hsi*66+5014)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+4845)*1+lsi)*1]), &(inteval->stack[((hsi*78+4936)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+5014)*1+lsi)*1]), &(inteval->stack[((hsi*55+5080)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+43511)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+4740)*1+lsi)*1]), &(inteval->stack[((hsi*91+4845)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+44061)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+19775)*1+lsi)*1]), &(inteval->stack[((hsi*660+44061)*1+lsi)*1]), &(inteval->stack[((hsi*550+43511)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+4541)*1+lsi)*1]), &(inteval->stack[((hsi*66+4619)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+4450)*1+lsi)*1]), &(inteval->stack[((hsi*78+4541)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4740)*1+lsi)*1]), &(inteval->stack[((hsi*66+4619)*1+lsi)*1]), &(inteval->stack[((hsi*55+4685)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31328)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+4740)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+4541)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+4345)*1+lsi)*1]), &(inteval->stack[((hsi*91+4450)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+44721)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+18950)*1+lsi)*1]), &(inteval->stack[((hsi*660+44721)*1+lsi)*1]), &(inteval->stack[((hsi*550+4541)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+4146)*1+lsi)*1]), &(inteval->stack[((hsi*66+4224)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+4055)*1+lsi)*1]), &(inteval->stack[((hsi*78+4146)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+4224)*1+lsi)*1]), &(inteval->stack[((hsi*55+4290)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+45381)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+3950)*1+lsi)*1]), &(inteval->stack[((hsi*91+4055)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+45931)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+18125)*1+lsi)*1]), &(inteval->stack[((hsi*660+45931)*1+lsi)*1]), &(inteval->stack[((hsi*550+45381)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+3751)*1+lsi)*1]), &(inteval->stack[((hsi*66+3829)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+3660)*1+lsi)*1]), &(inteval->stack[((hsi*78+3751)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3950)*1+lsi)*1]), &(inteval->stack[((hsi*66+3829)*1+lsi)*1]), &(inteval->stack[((hsi*55+3895)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31328)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+3950)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+3751)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+3555)*1+lsi)*1]), &(inteval->stack[((hsi*91+3660)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+46591)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+17300)*1+lsi)*1]), &(inteval->stack[((hsi*660+46591)*1+lsi)*1]), &(inteval->stack[((hsi*550+3751)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+3356)*1+lsi)*1]), &(inteval->stack[((hsi*66+3434)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+3265)*1+lsi)*1]), &(inteval->stack[((hsi*78+3356)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+3434)*1+lsi)*1]), &(inteval->stack[((hsi*55+3500)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+47251)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+3160)*1+lsi)*1]), &(inteval->stack[((hsi*91+3265)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+47801)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+16475)*1+lsi)*1]), &(inteval->stack[((hsi*660+47801)*1+lsi)*1]), &(inteval->stack[((hsi*550+47251)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+2961)*1+lsi)*1]), &(inteval->stack[((hsi*66+3039)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+2870)*1+lsi)*1]), &(inteval->stack[((hsi*78+2961)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3160)*1+lsi)*1]), &(inteval->stack[((hsi*66+3039)*1+lsi)*1]), &(inteval->stack[((hsi*55+3105)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31328)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+3160)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+2961)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+2765)*1+lsi)*1]), &(inteval->stack[((hsi*91+2870)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+48461)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+15650)*1+lsi)*1]), &(inteval->stack[((hsi*660+48461)*1+lsi)*1]), &(inteval->stack[((hsi*550+2961)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+2566)*1+lsi)*1]), &(inteval->stack[((hsi*66+2644)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+2475)*1+lsi)*1]), &(inteval->stack[((hsi*78+2566)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+2644)*1+lsi)*1]), &(inteval->stack[((hsi*55+2710)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+49121)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+2370)*1+lsi)*1]), &(inteval->stack[((hsi*91+2475)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+49671)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+14825)*1+lsi)*1]), &(inteval->stack[((hsi*660+49671)*1+lsi)*1]), &(inteval->stack[((hsi*550+49121)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+2171)*1+lsi)*1]), &(inteval->stack[((hsi*66+2249)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+2080)*1+lsi)*1]), &(inteval->stack[((hsi*78+2171)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+2370)*1+lsi)*1]), &(inteval->stack[((hsi*66+2249)*1+lsi)*1]), &(inteval->stack[((hsi*55+2315)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31328)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+2370)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+2171)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+1975)*1+lsi)*1]), &(inteval->stack[((hsi*91+2080)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+50331)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+14000)*1+lsi)*1]), &(inteval->stack[((hsi*660+50331)*1+lsi)*1]), &(inteval->stack[((hsi*550+2171)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+1776)*1+lsi)*1]), &(inteval->stack[((hsi*66+1854)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+1685)*1+lsi)*1]), &(inteval->stack[((hsi*78+1776)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+1854)*1+lsi)*1]), &(inteval->stack[((hsi*55+1920)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+50991)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+1580)*1+lsi)*1]), &(inteval->stack[((hsi*91+1685)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+51541)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+13175)*1+lsi)*1]), &(inteval->stack[((hsi*660+51541)*1+lsi)*1]), &(inteval->stack[((hsi*550+50991)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+1381)*1+lsi)*1]), &(inteval->stack[((hsi*66+1459)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+1290)*1+lsi)*1]), &(inteval->stack[((hsi*78+1381)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1580)*1+lsi)*1]), &(inteval->stack[((hsi*66+1459)*1+lsi)*1]), &(inteval->stack[((hsi*55+1525)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31328)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+1580)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+1381)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+1185)*1+lsi)*1]), &(inteval->stack[((hsi*91+1290)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+52201)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+12350)*1+lsi)*1]), &(inteval->stack[((hsi*660+52201)*1+lsi)*1]), &(inteval->stack[((hsi*550+1381)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+986)*1+lsi)*1]), &(inteval->stack[((hsi*66+1064)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+895)*1+lsi)*1]), &(inteval->stack[((hsi*78+986)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+1064)*1+lsi)*1]), &(inteval->stack[((hsi*55+1130)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+52861)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+790)*1+lsi)*1]), &(inteval->stack[((hsi*91+895)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+53411)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+11525)*1+lsi)*1]), &(inteval->stack[((hsi*660+53411)*1+lsi)*1]), &(inteval->stack[((hsi*550+52861)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+591)*1+lsi)*1]), &(inteval->stack[((hsi*66+669)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+500)*1+lsi)*1]), &(inteval->stack[((hsi*78+591)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+790)*1+lsi)*1]), &(inteval->stack[((hsi*66+669)*1+lsi)*1]), &(inteval->stack[((hsi*55+735)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31328)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+790)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+591)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+395)*1+lsi)*1]), &(inteval->stack[((hsi*91+500)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+54071)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+10700)*1+lsi)*1]), &(inteval->stack[((hsi*660+54071)*1+lsi)*1]), &(inteval->stack[((hsi*550+591)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*78+196)*1+lsi)*1]), &(inteval->stack[((hsi*66+274)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]), &(inteval->stack[((hsi*78+196)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31328)*1+lsi)*1]), &(inteval->stack[((hsi*66+274)*1+lsi)*1]), &(inteval->stack[((hsi*55+340)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31493)*1+lsi)*1]), &(inteval->stack[((hsi*198+30500)*1+lsi)*1]), &(inteval->stack[((hsi*165+31328)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+54731)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]), &(inteval->stack[((hsi*330+31493)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*105+0)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*273+31328)*1+lsi)*1]), &(inteval->stack[((hsi*234+30698)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+55281)*1+lsi)*1]), &(inteval->stack[((hsi*468+32373)*1+lsi)*1]), &(inteval->stack[((hsi*396+30932)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+9875)*1+lsi)*1]), &(inteval->stack[((hsi*660+55281)*1+lsi)*1]), &(inteval->stack[((hsi*550+54731)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*825+9875)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*825+10700)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*825+11525)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*825+12350)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*825+13175)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*825+14000)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*825+14825)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*825+15650)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*825+16475)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*825+17300)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*825+18125)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*825+18950)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*825+19775)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*825+20600)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*825+21425)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*825+22250)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*825+23075)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*825+23900)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*825+24725)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*825+25550)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*825+26375)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*825+27200)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*825+28025)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*825+28850)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*825+29675)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
