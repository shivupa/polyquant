/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
#include <_sphemultipole_F_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_F_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1850)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_F_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+1804)*1+lsi)*1]), &(inteval->stack[((hsi*15+1825)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+1825)*1+lsi)*1]), &(inteval->stack[((hsi*10+1840)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+4425)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+1776)*1+lsi)*1]), &(inteval->stack[((hsi*21+1804)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+4548)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+4250)*1+lsi)*1]), &(inteval->stack[((hsi*90+4548)*1+lsi)*1]), &(inteval->stack[((hsi*60+4425)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+1730)*1+lsi)*1]), &(inteval->stack[((hsi*15+1751)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+1751)*1+lsi)*1]), &(inteval->stack[((hsi*10+1766)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1751)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+1702)*1+lsi)*1]), &(inteval->stack[((hsi*21+1730)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+4638)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+4150)*1+lsi)*1]), &(inteval->stack[((hsi*90+4638)*1+lsi)*1]), &(inteval->stack[((hsi*60+1751)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+1656)*1+lsi)*1]), &(inteval->stack[((hsi*15+1677)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+1677)*1+lsi)*1]), &(inteval->stack[((hsi*10+1692)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1677)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+1628)*1+lsi)*1]), &(inteval->stack[((hsi*21+1656)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+4728)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+4050)*1+lsi)*1]), &(inteval->stack[((hsi*90+4728)*1+lsi)*1]), &(inteval->stack[((hsi*60+1677)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+1582)*1+lsi)*1]), &(inteval->stack[((hsi*15+1603)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+1603)*1+lsi)*1]), &(inteval->stack[((hsi*10+1618)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1603)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+1554)*1+lsi)*1]), &(inteval->stack[((hsi*21+1582)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+4818)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+3950)*1+lsi)*1]), &(inteval->stack[((hsi*90+4818)*1+lsi)*1]), &(inteval->stack[((hsi*60+1603)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+1508)*1+lsi)*1]), &(inteval->stack[((hsi*15+1529)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+1529)*1+lsi)*1]), &(inteval->stack[((hsi*10+1544)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1529)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+1480)*1+lsi)*1]), &(inteval->stack[((hsi*21+1508)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+4908)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+3850)*1+lsi)*1]), &(inteval->stack[((hsi*90+4908)*1+lsi)*1]), &(inteval->stack[((hsi*60+1529)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+1434)*1+lsi)*1]), &(inteval->stack[((hsi*15+1455)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+1455)*1+lsi)*1]), &(inteval->stack[((hsi*10+1470)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1455)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+1406)*1+lsi)*1]), &(inteval->stack[((hsi*21+1434)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+4998)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+3750)*1+lsi)*1]), &(inteval->stack[((hsi*90+4998)*1+lsi)*1]), &(inteval->stack[((hsi*60+1455)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+1360)*1+lsi)*1]), &(inteval->stack[((hsi*15+1381)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+1381)*1+lsi)*1]), &(inteval->stack[((hsi*10+1396)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1381)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+1332)*1+lsi)*1]), &(inteval->stack[((hsi*21+1360)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+5088)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+3650)*1+lsi)*1]), &(inteval->stack[((hsi*90+5088)*1+lsi)*1]), &(inteval->stack[((hsi*60+1381)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+1286)*1+lsi)*1]), &(inteval->stack[((hsi*15+1307)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+1307)*1+lsi)*1]), &(inteval->stack[((hsi*10+1322)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1307)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+1258)*1+lsi)*1]), &(inteval->stack[((hsi*21+1286)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+5178)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+3550)*1+lsi)*1]), &(inteval->stack[((hsi*90+5178)*1+lsi)*1]), &(inteval->stack[((hsi*60+1307)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+1212)*1+lsi)*1]), &(inteval->stack[((hsi*15+1233)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+1233)*1+lsi)*1]), &(inteval->stack[((hsi*10+1248)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1233)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+1184)*1+lsi)*1]), &(inteval->stack[((hsi*21+1212)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+5268)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+3450)*1+lsi)*1]), &(inteval->stack[((hsi*90+5268)*1+lsi)*1]), &(inteval->stack[((hsi*60+1233)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+1138)*1+lsi)*1]), &(inteval->stack[((hsi*15+1159)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+1159)*1+lsi)*1]), &(inteval->stack[((hsi*10+1174)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1159)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+1110)*1+lsi)*1]), &(inteval->stack[((hsi*21+1138)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+5358)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+3350)*1+lsi)*1]), &(inteval->stack[((hsi*90+5358)*1+lsi)*1]), &(inteval->stack[((hsi*60+1159)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+1064)*1+lsi)*1]), &(inteval->stack[((hsi*15+1085)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+1085)*1+lsi)*1]), &(inteval->stack[((hsi*10+1100)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1085)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+1036)*1+lsi)*1]), &(inteval->stack[((hsi*21+1064)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+5448)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+3250)*1+lsi)*1]), &(inteval->stack[((hsi*90+5448)*1+lsi)*1]), &(inteval->stack[((hsi*60+1085)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+990)*1+lsi)*1]), &(inteval->stack[((hsi*15+1011)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+1011)*1+lsi)*1]), &(inteval->stack[((hsi*10+1026)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+1011)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+962)*1+lsi)*1]), &(inteval->stack[((hsi*21+990)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+5538)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+3150)*1+lsi)*1]), &(inteval->stack[((hsi*90+5538)*1+lsi)*1]), &(inteval->stack[((hsi*60+1011)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+916)*1+lsi)*1]), &(inteval->stack[((hsi*15+937)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+937)*1+lsi)*1]), &(inteval->stack[((hsi*10+952)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+937)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+888)*1+lsi)*1]), &(inteval->stack[((hsi*21+916)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+5628)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+3050)*1+lsi)*1]), &(inteval->stack[((hsi*90+5628)*1+lsi)*1]), &(inteval->stack[((hsi*60+937)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+842)*1+lsi)*1]), &(inteval->stack[((hsi*15+863)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+863)*1+lsi)*1]), &(inteval->stack[((hsi*10+878)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+863)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+814)*1+lsi)*1]), &(inteval->stack[((hsi*21+842)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+5718)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+2950)*1+lsi)*1]), &(inteval->stack[((hsi*90+5718)*1+lsi)*1]), &(inteval->stack[((hsi*60+863)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+768)*1+lsi)*1]), &(inteval->stack[((hsi*15+789)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+789)*1+lsi)*1]), &(inteval->stack[((hsi*10+804)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+789)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+740)*1+lsi)*1]), &(inteval->stack[((hsi*21+768)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+5808)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+2850)*1+lsi)*1]), &(inteval->stack[((hsi*90+5808)*1+lsi)*1]), &(inteval->stack[((hsi*60+789)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+694)*1+lsi)*1]), &(inteval->stack[((hsi*15+715)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+715)*1+lsi)*1]), &(inteval->stack[((hsi*10+730)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+715)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+666)*1+lsi)*1]), &(inteval->stack[((hsi*21+694)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+5898)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+2750)*1+lsi)*1]), &(inteval->stack[((hsi*90+5898)*1+lsi)*1]), &(inteval->stack[((hsi*60+715)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+620)*1+lsi)*1]), &(inteval->stack[((hsi*15+641)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+641)*1+lsi)*1]), &(inteval->stack[((hsi*10+656)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+641)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+592)*1+lsi)*1]), &(inteval->stack[((hsi*21+620)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+5988)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+2650)*1+lsi)*1]), &(inteval->stack[((hsi*90+5988)*1+lsi)*1]), &(inteval->stack[((hsi*60+641)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+546)*1+lsi)*1]), &(inteval->stack[((hsi*15+567)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+567)*1+lsi)*1]), &(inteval->stack[((hsi*10+582)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+567)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+518)*1+lsi)*1]), &(inteval->stack[((hsi*21+546)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+6078)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+2550)*1+lsi)*1]), &(inteval->stack[((hsi*90+6078)*1+lsi)*1]), &(inteval->stack[((hsi*60+567)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+472)*1+lsi)*1]), &(inteval->stack[((hsi*15+493)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+493)*1+lsi)*1]), &(inteval->stack[((hsi*10+508)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+493)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+444)*1+lsi)*1]), &(inteval->stack[((hsi*21+472)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+6168)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+2450)*1+lsi)*1]), &(inteval->stack[((hsi*90+6168)*1+lsi)*1]), &(inteval->stack[((hsi*60+493)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+398)*1+lsi)*1]), &(inteval->stack[((hsi*15+419)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+419)*1+lsi)*1]), &(inteval->stack[((hsi*10+434)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+419)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+370)*1+lsi)*1]), &(inteval->stack[((hsi*21+398)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+6258)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+2350)*1+lsi)*1]), &(inteval->stack[((hsi*90+6258)*1+lsi)*1]), &(inteval->stack[((hsi*60+419)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+324)*1+lsi)*1]), &(inteval->stack[((hsi*15+345)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+345)*1+lsi)*1]), &(inteval->stack[((hsi*10+360)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+345)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+296)*1+lsi)*1]), &(inteval->stack[((hsi*21+324)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+6348)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+2250)*1+lsi)*1]), &(inteval->stack[((hsi*90+6348)*1+lsi)*1]), &(inteval->stack[((hsi*60+345)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+250)*1+lsi)*1]), &(inteval->stack[((hsi*15+271)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+271)*1+lsi)*1]), &(inteval->stack[((hsi*10+286)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+271)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+222)*1+lsi)*1]), &(inteval->stack[((hsi*21+250)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+6438)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+2150)*1+lsi)*1]), &(inteval->stack[((hsi*90+6438)*1+lsi)*1]), &(inteval->stack[((hsi*60+271)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+176)*1+lsi)*1]), &(inteval->stack[((hsi*15+197)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+197)*1+lsi)*1]), &(inteval->stack[((hsi*10+212)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+197)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+148)*1+lsi)*1]), &(inteval->stack[((hsi*21+176)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+6528)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+2050)*1+lsi)*1]), &(inteval->stack[((hsi*90+6528)*1+lsi)*1]), &(inteval->stack[((hsi*60+197)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+102)*1+lsi)*1]), &(inteval->stack[((hsi*15+123)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+123)*1+lsi)*1]), &(inteval->stack[((hsi*10+138)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+123)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+74)*1+lsi)*1]), &(inteval->stack[((hsi*21+102)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+6618)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+1950)*1+lsi)*1]), &(inteval->stack[((hsi*90+6618)*1+lsi)*1]), &(inteval->stack[((hsi*60+123)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]), &(inteval->stack[((hsi*15+49)*1+lsi)*1]),1);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*30+4395)*1+lsi)*1]), &(inteval->stack[((hsi*15+49)*1+lsi)*1]), &(inteval->stack[((hsi*10+64)*1+lsi)*1]),1);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*60+49)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]), &(inteval->stack[((hsi*30+4395)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+6708)*1+lsi)*1]), &(inteval->stack[((hsi*63+4485)*1+lsi)*1]), &(inteval->stack[((hsi*45+4350)*1+lsi)*1]),1);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*100+1850)*1+lsi)*1]), &(inteval->stack[((hsi*90+6708)*1+lsi)*1]), &(inteval->stack[((hsi*60+49)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*100+1850)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*100+1950)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*100+2050)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*100+2150)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*100+2250)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*100+2350)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*100+2450)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*100+2550)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*100+2650)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*100+2750)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*100+2850)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*100+2950)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*100+3050)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*100+3150)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*100+3250)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*100+3350)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*100+3450)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*100+3550)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*100+3650)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*100+3750)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*100+3850)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*100+3950)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*100+4050)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*100+4150)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*100+4250)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
