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

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_3_Sb__i__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src2[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src2[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_z[vi], fp100, fp77);
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src2[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->BO_z[vi], fp103, fp100);
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_z[vi], fp101, fp78);
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src2[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->BO_z[vi], fp104, fp103);
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BO_z[vi], fp106, fp101);
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BO_z[vi], fp110, fp80);
LIBINT2_REALTYPE fp207;
fp207 = 0.0000000000000000e+00 + src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = 0.0000000000000000e+00 + src1[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp427;
fp427 = fp207 * fp191;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp82;
target[((hsi*168+62)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src2[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->BO_z[vi], fp105, fp104);
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BO_z[vi], fp108, fp106);
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->BO_z[vi], fp112, fp110);
LIBINT2_REALTYPE fp205;
fp205 = 0.0000000000000000e+00 + src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp429;
fp429 = fp205 * fp191;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp114;
target[((hsi*168+61)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp194;
fp194 = 0.0000000000000000e+00 + src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = 0.0000000000000000e+00 + src0[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp431;
fp431 = fp206 * fp194;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp82;
target[((hsi*168+60)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp192;
fp192 = 0.0000000000000000e+00 + src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp433;
fp433 = fp206 * fp192;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp114;
target[((hsi*168+59)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src2[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src2[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->BO_z[vi], fp88, fp87);
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src2[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->BO_z[vi], fp89, fp88);
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->BO_z[vi], fp92, fp90);
LIBINT2_REALTYPE fp99;
fp99 = inteval->BO_z[vi] * fp96;
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_z[vi] * fp90;
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_z[vi] * fp87;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src2[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp84 + fp86;
LIBINT2_REALTYPE fp94;
fp94 = fp85 + fp95;
LIBINT2_REALTYPE fp98;
fp98 = fp94 + fp99;
LIBINT2_REALTYPE fp435;
fp435 = fp207 * fp194;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp98;
target[((hsi*168+58)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp193;
fp193 = 0.0000000000000000e+00 + src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp437;
fp437 = fp207 * fp193;
LIBINT2_REALTYPE fp436;
fp436 = fp437 * fp114;
target[((hsi*168+57)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp208;
fp208 = 0.0000000000000000e+00 + src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp439;
fp439 = fp208 * fp194;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp114;
target[((hsi*168+56)*1+lsi)*1] = fp438;
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src2[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = 0.0000000000000000e+00 + src2[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->BO_z[vi], fp135, fp128);
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + src2[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->BO_z[vi], fp158, fp135);
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->BO_z[vi], fp136, fp122);
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + src2[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->BO_z[vi], fp161, fp158);
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->BO_z[vi], fp159, fp136);
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->BO_z[vi], fp138, fp124);
LIBINT2_REALTYPE fp203;
fp203 = 0.0000000000000000e+00 + src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = 0.0000000000000000e+00 + src1[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp441;
fp441 = fp203 * fp183;
LIBINT2_REALTYPE fp440;
fp440 = fp441 * fp126;
target[((hsi*168+55)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src2[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->BO_z[vi], fp128, fp147);
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->BO_z[vi], fp122, fp129);
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->BO_z[vi], fp124, fp118);
LIBINT2_REALTYPE fp443;
fp443 = fp205 * fp183;
LIBINT2_REALTYPE fp442;
fp442 = fp443 * fp116;
target[((hsi*168+54)*1+lsi)*1] = fp442;
LIBINT2_REALTYPE fp162;
fp162 = 0.0000000000000000e+00 + src2[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->BO_z[vi], fp162, fp161);
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(inteval->BO_z[vi], fp164, fp159);
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + src2[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->BO_z[vi], fp163, fp162);
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(inteval->BO_z[vi], fp166, fp164);
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(inteval->BO_z[vi], fp170, fp168);
LIBINT2_REALTYPE fp215;
fp215 = 0.0000000000000000e+00 + src0[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp551;
fp551 = fp215 * fp194;
LIBINT2_REALTYPE fp550;
fp550 = fp551 * fp172;
target[((hsi*168+0)*1+lsi)*1] = fp550;
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + src1[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp447;
fp447 = fp205 * fp181;
LIBINT2_REALTYPE fp446;
fp446 = fp447 * fp126;
target[((hsi*168+52)*1+lsi)*1] = fp446;
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->BO_z[vi], fp168, fp138);
LIBINT2_REALTYPE fp449;
fp449 = fp203 * fp181;
LIBINT2_REALTYPE fp448;
fp448 = fp449 * fp140;
target[((hsi*168+51)*1+lsi)*1] = fp448;
LIBINT2_REALTYPE fp451;
fp451 = fp207 * fp181;
LIBINT2_REALTYPE fp450;
fp450 = fp451 * fp116;
target[((hsi*168+50)*1+lsi)*1] = fp450;
LIBINT2_REALTYPE fp202;
fp202 = 0.0000000000000000e+00 + src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = 0.0000000000000000e+00 + src1[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp453;
fp453 = fp202 * fp185;
LIBINT2_REALTYPE fp452;
fp452 = fp453 * fp126;
target[((hsi*168+49)*1+lsi)*1] = fp452;
LIBINT2_REALTYPE fp455;
fp455 = fp202 * fp183;
LIBINT2_REALTYPE fp454;
fp454 = fp455 * fp140;
target[((hsi*168+48)*1+lsi)*1] = fp454;
LIBINT2_REALTYPE fp187;
fp187 = 0.0000000000000000e+00 + src1[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp457;
fp457 = fp202 * fp187;
LIBINT2_REALTYPE fp456;
fp456 = fp457 * fp116;
target[((hsi*168+47)*1+lsi)*1] = fp456;
LIBINT2_REALTYPE fp459;
fp459 = fp202 * fp181;
LIBINT2_REALTYPE fp458;
fp458 = fp459 * fp172;
target[((hsi*168+46)*1+lsi)*1] = fp458;
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src2[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->BO_z[vi], fp147, fp146);
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->BO_z[vi], fp129, fp150);
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->BO_z[vi], fp118, fp131);
LIBINT2_REALTYPE fp461;
fp461 = fp205 * fp185;
LIBINT2_REALTYPE fp460;
fp460 = fp461 * fp120;
target[((hsi*168+45)*1+lsi)*1] = fp460;
LIBINT2_REALTYPE fp463;
fp463 = fp207 * fp183;
LIBINT2_REALTYPE fp462;
fp462 = fp463 * fp120;
target[((hsi*168+44)*1+lsi)*1] = fp462;
LIBINT2_REALTYPE fp465;
fp465 = fp203 * fp187;
LIBINT2_REALTYPE fp464;
fp464 = fp465 * fp120;
target[((hsi*168+43)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp445;
fp445 = fp203 * fp185;
LIBINT2_REALTYPE fp444;
fp444 = fp445 * fp116;
target[((hsi*168+53)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src2[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_z[vi], fp77, fp70);
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_z[vi], fp78, fp64);
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BO_z[vi], fp80, fp66);
LIBINT2_REALTYPE fp190;
fp190 = 0.0000000000000000e+00 + src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
fp385 = fp203 * fp190;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp68;
target[((hsi*168+83)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->BO_z[vi], fp70, fp89);
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_z[vi], fp64, fp71);
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->BO_z[vi], fp66, fp60);
LIBINT2_REALTYPE fp387;
fp387 = fp205 * fp190;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp58;
target[((hsi*168+82)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp389;
fp389 = fp203 * fp192;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp58;
target[((hsi*168+81)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp188;
fp188 = 0.0000000000000000e+00 + src1[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp391;
fp391 = fp205 * fp188;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp68;
target[((hsi*168+80)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp393;
fp393 = fp203 * fp188;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp82;
target[((hsi*168+79)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp395;
fp395 = fp207 * fp188;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp58;
target[((hsi*168+78)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp397;
fp397 = fp202 * fp192;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp68;
target[((hsi*168+77)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp399;
fp399 = fp202 * fp190;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp82;
target[((hsi*168+76)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp401;
fp401 = fp202 * fp194;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp58;
target[((hsi*168+75)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->BO_z[vi], fp71, fp92);
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->BO_z[vi], fp73, fp96);
LIBINT2_REALTYPE fp425;
fp425 = fp205 * fp194;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp75;
target[((hsi*168+63)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->BO_z[vi], fp60, fp73);
LIBINT2_REALTYPE fp405;
fp405 = fp205 * fp192;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp62;
target[((hsi*168+73)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp407;
fp407 = fp207 * fp190;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp62;
target[((hsi*168+72)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp409;
fp409 = fp203 * fp194;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp62;
target[((hsi*168+71)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp189;
fp189 = 0.0000000000000000e+00 + src1[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp411;
fp411 = fp205 * fp189;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp82;
target[((hsi*168+70)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp413;
fp413 = fp207 * fp189;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp68;
target[((hsi*168+69)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp415;
fp415 = fp203 * fp189;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp114;
target[((hsi*168+68)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp204;
fp204 = 0.0000000000000000e+00 + src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp417;
fp417 = fp204 * fp192;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp82;
target[((hsi*168+67)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp419;
fp419 = fp204 * fp194;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp68;
target[((hsi*168+66)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp421;
fp421 = fp204 * fp190;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp114;
target[((hsi*168+65)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp423;
fp423 = fp207 * fp192;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp75;
target[((hsi*168+64)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp403;
fp403 = fp202 * fp188;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp114;
target[((hsi*168+74)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp209;
fp209 = 0.0000000000000000e+00 + src0[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp511;
fp511 = fp209 * fp190;
LIBINT2_REALTYPE fp510;
fp510 = fp511 * fp140;
target[((hsi*168+20)*1+lsi)*1] = fp510;
LIBINT2_REALTYPE fp513;
fp513 = fp209 * fp194;
LIBINT2_REALTYPE fp512;
fp512 = fp513 * fp116;
target[((hsi*168+19)*1+lsi)*1] = fp512;
LIBINT2_REALTYPE fp515;
fp515 = fp209 * fp188;
LIBINT2_REALTYPE fp514;
fp514 = fp515 * fp172;
target[((hsi*168+18)*1+lsi)*1] = fp514;
LIBINT2_REALTYPE fp212;
fp212 = 0.0000000000000000e+00 + src0[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp517;
fp517 = fp212 * fp192;
LIBINT2_REALTYPE fp516;
fp516 = fp517 * fp120;
target[((hsi*168+17)*1+lsi)*1] = fp516;
LIBINT2_REALTYPE fp214;
fp214 = 0.0000000000000000e+00 + src0[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp519;
fp519 = fp214 * fp190;
LIBINT2_REALTYPE fp518;
fp518 = fp519 * fp120;
target[((hsi*168+16)*1+lsi)*1] = fp518;
LIBINT2_REALTYPE fp210;
fp210 = 0.0000000000000000e+00 + src0[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp521;
fp521 = fp210 * fp194;
LIBINT2_REALTYPE fp520;
fp520 = fp521 * fp120;
target[((hsi*168+15)*1+lsi)*1] = fp520;
LIBINT2_REALTYPE fp523;
fp523 = fp212 * fp189;
LIBINT2_REALTYPE fp522;
fp522 = fp523 * fp140;
target[((hsi*168+14)*1+lsi)*1] = fp522;
LIBINT2_REALTYPE fp525;
fp525 = fp214 * fp189;
LIBINT2_REALTYPE fp524;
fp524 = fp525 * fp126;
target[((hsi*168+13)*1+lsi)*1] = fp524;
LIBINT2_REALTYPE fp527;
fp527 = fp210 * fp189;
LIBINT2_REALTYPE fp526;
fp526 = fp527 * fp172;
target[((hsi*168+12)*1+lsi)*1] = fp526;
LIBINT2_REALTYPE fp182;
fp182 = 0.0000000000000000e+00 + src1[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp467;
fp467 = fp205 * fp182;
LIBINT2_REALTYPE fp466;
fp466 = fp467 * fp140;
target[((hsi*168+42)*1+lsi)*1] = fp466;
LIBINT2_REALTYPE fp211;
fp211 = 0.0000000000000000e+00 + src0[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp531;
fp531 = fp211 * fp194;
LIBINT2_REALTYPE fp530;
fp530 = fp531 * fp126;
target[((hsi*168+10)*1+lsi)*1] = fp530;
LIBINT2_REALTYPE fp533;
fp533 = fp211 * fp190;
LIBINT2_REALTYPE fp532;
fp532 = fp533 * fp172;
target[((hsi*168+9)*1+lsi)*1] = fp532;
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + src2[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->BO_z[vi], fp146, fp145);
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->BO_z[vi], fp150, fp148);
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(inteval->BO_z[vi], fp131, fp154);
LIBINT2_REALTYPE fp535;
fp535 = fp214 * fp192;
LIBINT2_REALTYPE fp534;
fp534 = fp535 * fp133;
target[((hsi*168+8)*1+lsi)*1] = fp534;
LIBINT2_REALTYPE fp537;
fp537 = fp212 * fp194;
LIBINT2_REALTYPE fp536;
fp536 = fp537 * fp133;
target[((hsi*168+7)*1+lsi)*1] = fp536;
LIBINT2_REALTYPE fp539;
fp539 = fp214 * fp191;
LIBINT2_REALTYPE fp538;
fp538 = fp539 * fp140;
target[((hsi*168+6)*1+lsi)*1] = fp538;
LIBINT2_REALTYPE fp541;
fp541 = fp212 * fp191;
LIBINT2_REALTYPE fp540;
fp540 = fp541 * fp172;
target[((hsi*168+5)*1+lsi)*1] = fp540;
LIBINT2_REALTYPE fp213;
fp213 = 0.0000000000000000e+00 + src0[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp543;
fp543 = fp213 * fp194;
LIBINT2_REALTYPE fp542;
fp542 = fp543 * fp140;
target[((hsi*168+4)*1+lsi)*1] = fp542;
LIBINT2_REALTYPE fp545;
fp545 = fp213 * fp192;
LIBINT2_REALTYPE fp544;
fp544 = fp545 * fp172;
target[((hsi*168+3)*1+lsi)*1] = fp544;
LIBINT2_REALTYPE fp157;
fp157 = inteval->BO_z[vi] * fp154;
LIBINT2_REALTYPE fp153;
fp153 = inteval->BO_z[vi] * fp148;
LIBINT2_REALTYPE fp144;
fp144 = inteval->BO_z[vi] * fp145;
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + src2[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp142 + fp144;
LIBINT2_REALTYPE fp152;
fp152 = fp143 + fp153;
LIBINT2_REALTYPE fp156;
fp156 = fp152 + fp157;
LIBINT2_REALTYPE fp547;
fp547 = fp214 * fp194;
LIBINT2_REALTYPE fp546;
fp546 = fp547 * fp156;
target[((hsi*168+2)*1+lsi)*1] = fp546;
LIBINT2_REALTYPE fp549;
fp549 = fp214 * fp193;
LIBINT2_REALTYPE fp548;
fp548 = fp549 * fp172;
target[((hsi*168+1)*1+lsi)*1] = fp548;
LIBINT2_REALTYPE fp529;
fp529 = fp211 * fp192;
LIBINT2_REALTYPE fp528;
fp528 = fp529 * fp140;
target[((hsi*168+11)*1+lsi)*1] = fp528;
LIBINT2_REALTYPE fp469;
fp469 = fp207 * fp182;
LIBINT2_REALTYPE fp468;
fp468 = fp469 * fp126;
target[((hsi*168+41)*1+lsi)*1] = fp468;
LIBINT2_REALTYPE fp471;
fp471 = fp203 * fp182;
LIBINT2_REALTYPE fp470;
fp470 = fp471 * fp172;
target[((hsi*168+40)*1+lsi)*1] = fp470;
LIBINT2_REALTYPE fp473;
fp473 = fp204 * fp185;
LIBINT2_REALTYPE fp472;
fp472 = fp473 * fp140;
target[((hsi*168+39)*1+lsi)*1] = fp472;
LIBINT2_REALTYPE fp475;
fp475 = fp204 * fp187;
LIBINT2_REALTYPE fp474;
fp474 = fp475 * fp126;
target[((hsi*168+38)*1+lsi)*1] = fp474;
LIBINT2_REALTYPE fp477;
fp477 = fp204 * fp183;
LIBINT2_REALTYPE fp476;
fp476 = fp477 * fp172;
target[((hsi*168+37)*1+lsi)*1] = fp476;
LIBINT2_REALTYPE fp479;
fp479 = fp207 * fp185;
LIBINT2_REALTYPE fp478;
fp478 = fp479 * fp133;
target[((hsi*168+36)*1+lsi)*1] = fp478;
LIBINT2_REALTYPE fp481;
fp481 = fp205 * fp187;
LIBINT2_REALTYPE fp480;
fp480 = fp481 * fp133;
target[((hsi*168+35)*1+lsi)*1] = fp480;
LIBINT2_REALTYPE fp184;
fp184 = 0.0000000000000000e+00 + src1[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp483;
fp483 = fp207 * fp184;
LIBINT2_REALTYPE fp482;
fp482 = fp483 * fp140;
target[((hsi*168+34)*1+lsi)*1] = fp482;
LIBINT2_REALTYPE fp485;
fp485 = fp205 * fp184;
LIBINT2_REALTYPE fp484;
fp484 = fp485 * fp172;
target[((hsi*168+33)*1+lsi)*1] = fp484;
LIBINT2_REALTYPE fp509;
fp509 = fp209 * fp192;
LIBINT2_REALTYPE fp508;
fp508 = fp509 * fp126;
target[((hsi*168+21)*1+lsi)*1] = fp508;
LIBINT2_REALTYPE fp489;
fp489 = fp206 * fp185;
LIBINT2_REALTYPE fp488;
fp488 = fp489 * fp172;
target[((hsi*168+31)*1+lsi)*1] = fp488;
LIBINT2_REALTYPE fp491;
fp491 = fp207 * fp187;
LIBINT2_REALTYPE fp490;
fp490 = fp491 * fp156;
target[((hsi*168+30)*1+lsi)*1] = fp490;
LIBINT2_REALTYPE fp186;
fp186 = 0.0000000000000000e+00 + src1[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp493;
fp493 = fp207 * fp186;
LIBINT2_REALTYPE fp492;
fp492 = fp493 * fp172;
target[((hsi*168+29)*1+lsi)*1] = fp492;
LIBINT2_REALTYPE fp495;
fp495 = fp208 * fp187;
LIBINT2_REALTYPE fp494;
fp494 = fp495 * fp172;
target[((hsi*168+28)*1+lsi)*1] = fp494;
LIBINT2_REALTYPE fp497;
fp497 = fp210 * fp190;
LIBINT2_REALTYPE fp496;
fp496 = fp497 * fp126;
target[((hsi*168+27)*1+lsi)*1] = fp496;
LIBINT2_REALTYPE fp499;
fp499 = fp212 * fp190;
LIBINT2_REALTYPE fp498;
fp498 = fp499 * fp116;
target[((hsi*168+26)*1+lsi)*1] = fp498;
LIBINT2_REALTYPE fp501;
fp501 = fp210 * fp192;
LIBINT2_REALTYPE fp500;
fp500 = fp501 * fp116;
target[((hsi*168+25)*1+lsi)*1] = fp500;
LIBINT2_REALTYPE fp503;
fp503 = fp212 * fp188;
LIBINT2_REALTYPE fp502;
fp502 = fp503 * fp126;
target[((hsi*168+24)*1+lsi)*1] = fp502;
LIBINT2_REALTYPE fp505;
fp505 = fp210 * fp188;
LIBINT2_REALTYPE fp504;
fp504 = fp505 * fp140;
target[((hsi*168+23)*1+lsi)*1] = fp504;
LIBINT2_REALTYPE fp507;
fp507 = fp214 * fp188;
LIBINT2_REALTYPE fp506;
fp506 = fp507 * fp116;
target[((hsi*168+22)*1+lsi)*1] = fp506;
LIBINT2_REALTYPE fp487;
fp487 = fp206 * fp187;
LIBINT2_REALTYPE fp486;
fp486 = fp487 * fp140;
target[((hsi*168+32)*1+lsi)*1] = fp486;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_z[vi], fp42, fp19);
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src2[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_z[vi], fp45, fp42);
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_z[vi], fp43, fp20);
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_z[vi], fp46, fp45);
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_z[vi], fp48, fp43);
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp52, fp22);
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + src1[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = fp207 * fp177;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp24;
target[((hsi*168+146)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_z[vi], fp47, fp46);
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_z[vi], fp50, fp48);
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_z[vi], fp54, fp52);
LIBINT2_REALTYPE fp261;
fp261 = fp205 * fp177;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp56;
target[((hsi*168+145)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + src1[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = fp206 * fp180;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp24;
target[((hsi*168+144)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp178;
fp178 = 0.0000000000000000e+00 + src1[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp206 * fp178;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp56;
target[((hsi*168+143)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src2[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src2[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_z[vi], fp30, fp29);
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_z[vi], fp31, fp30);
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp34, fp32);
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_z[vi] * fp32;
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_z[vi] * fp29;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp26 + fp28;
LIBINT2_REALTYPE fp36;
fp36 = fp27 + fp37;
LIBINT2_REALTYPE fp40;
fp40 = fp36 + fp41;
LIBINT2_REALTYPE fp267;
fp267 = fp207 * fp180;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp40;
target[((hsi*168+142)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp179;
fp179 = 0.0000000000000000e+00 + src1[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp207 * fp179;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp56;
target[((hsi*168+141)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp208 * fp180;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp56;
target[((hsi*168+140)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->BO_z[vi], fp19, fp12);
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp20, fp6);
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp22, fp8);
LIBINT2_REALTYPE fp196;
fp196 = 0.0000000000000000e+00 + src0[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = fp196 * fp190;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp10;
target[((hsi*168+139)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_z[vi], fp12, fp31);
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp13);
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->BO_z[vi], fp8, fp2);
LIBINT2_REALTYPE fp198;
fp198 = 0.0000000000000000e+00 + src0[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp198 * fp190;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp0;
target[((hsi*168+138)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp201;
fp201 = 0.0000000000000000e+00 + src0[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
fp383 = fp201 * fp180;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp172;
target[((hsi*168+84)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp279;
fp279 = fp198 * fp188;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp10;
target[((hsi*168+136)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp196 * fp188;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp24;
target[((hsi*168+135)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp200;
fp200 = 0.0000000000000000e+00 + src0[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = fp200 * fp188;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp0;
target[((hsi*168+134)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp195;
fp195 = 0.0000000000000000e+00 + src0[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = fp195 * fp192;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp10;
target[((hsi*168+133)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp195 * fp190;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp24;
target[((hsi*168+132)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp195 * fp194;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp0;
target[((hsi*168+131)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp195 * fp188;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp56;
target[((hsi*168+130)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->BO_z[vi], fp13, fp34);
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp2, fp15);
LIBINT2_REALTYPE fp293;
fp293 = fp198 * fp192;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp4;
target[((hsi*168+129)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp200 * fp190;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp4;
target[((hsi*168+128)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp196 * fp194;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp4;
target[((hsi*168+127)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp277;
fp277 = fp196 * fp192;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp0;
target[((hsi*168+137)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp176;
fp176 = 0.0000000000000000e+00 + src1[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp203 * fp176;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp10;
target[((hsi*168+167)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp205 * fp176;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp0;
target[((hsi*168+166)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp203 * fp178;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp0;
target[((hsi*168+165)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp174;
fp174 = 0.0000000000000000e+00 + src1[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp205 * fp174;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp10;
target[((hsi*168+164)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp203 * fp174;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp24;
target[((hsi*168+163)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp207 * fp174;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp0;
target[((hsi*168+162)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp202 * fp178;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp10;
target[((hsi*168+161)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp202 * fp176;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp24;
target[((hsi*168+160)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp202 * fp180;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp0;
target[((hsi*168+159)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_z[vi], fp15, fp38);
LIBINT2_REALTYPE fp257;
fp257 = fp205 * fp180;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp17;
target[((hsi*168+147)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp237;
fp237 = fp205 * fp178;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp4;
target[((hsi*168+157)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp207 * fp176;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp4;
target[((hsi*168+156)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp203 * fp180;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp4;
target[((hsi*168+155)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp175;
fp175 = 0.0000000000000000e+00 + src1[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp205 * fp175;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp24;
target[((hsi*168+154)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp207 * fp175;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp10;
target[((hsi*168+153)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp203 * fp175;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp56;
target[((hsi*168+152)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp204 * fp178;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp24;
target[((hsi*168+151)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp204 * fp180;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp10;
target[((hsi*168+150)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp204 * fp176;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp56;
target[((hsi*168+149)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp207 * fp178;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp17;
target[((hsi*168+148)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp235;
fp235 = fp202 * fp174;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp56;
target[((hsi*168+158)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp343;
fp343 = fp195 * fp176;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp140;
target[((hsi*168+104)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = fp195 * fp180;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp116;
target[((hsi*168+103)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = fp195 * fp174;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp172;
target[((hsi*168+102)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp349;
fp349 = fp198 * fp178;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp120;
target[((hsi*168+101)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = fp200 * fp176;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp120;
target[((hsi*168+100)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = fp196 * fp180;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp120;
target[((hsi*168+99)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp355;
fp355 = fp198 * fp175;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp140;
target[((hsi*168+98)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp357;
fp357 = fp200 * fp175;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp126;
target[((hsi*168+97)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp359;
fp359 = fp196 * fp175;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp172;
target[((hsi*168+96)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp299;
fp299 = fp198 * fp189;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp24;
target[((hsi*168+126)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp197;
fp197 = 0.0000000000000000e+00 + src0[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = fp197 * fp180;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp126;
target[((hsi*168+94)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp365;
fp365 = fp197 * fp176;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp172;
target[((hsi*168+93)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp367;
fp367 = fp200 * fp178;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp133;
target[((hsi*168+92)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp369;
fp369 = fp198 * fp180;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp133;
target[((hsi*168+91)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp371;
fp371 = fp200 * fp177;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp140;
target[((hsi*168+90)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp373;
fp373 = fp198 * fp177;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp172;
target[((hsi*168+89)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp199;
fp199 = 0.0000000000000000e+00 + src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp375;
fp375 = fp199 * fp180;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp140;
target[((hsi*168+88)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp377;
fp377 = fp199 * fp178;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp172;
target[((hsi*168+87)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp379;
fp379 = fp200 * fp180;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp156;
target[((hsi*168+86)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp381;
fp381 = fp200 * fp179;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp172;
target[((hsi*168+85)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp361;
fp361 = fp197 * fp178;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp140;
target[((hsi*168+95)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp301;
fp301 = fp200 * fp189;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp10;
target[((hsi*168+125)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp196 * fp189;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp56;
target[((hsi*168+124)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp197 * fp192;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp24;
target[((hsi*168+123)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp197 * fp194;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp10;
target[((hsi*168+122)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp197 * fp190;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp56;
target[((hsi*168+121)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp200 * fp192;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp17;
target[((hsi*168+120)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp313;
fp313 = fp198 * fp194;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp17;
target[((hsi*168+119)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = fp200 * fp191;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp24;
target[((hsi*168+118)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp198 * fp191;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp56;
target[((hsi*168+117)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp341;
fp341 = fp195 * fp178;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp126;
target[((hsi*168+105)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp321;
fp321 = fp199 * fp192;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp56;
target[((hsi*168+115)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = fp200 * fp194;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp40;
target[((hsi*168+114)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp200 * fp193;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp56;
target[((hsi*168+113)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp201 * fp194;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp56;
target[((hsi*168+112)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp196 * fp176;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp126;
target[((hsi*168+111)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp331;
fp331 = fp198 * fp176;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp116;
target[((hsi*168+110)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp196 * fp178;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp116;
target[((hsi*168+109)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp335;
fp335 = fp198 * fp174;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp126;
target[((hsi*168+108)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp337;
fp337 = fp196 * fp174;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp140;
target[((hsi*168+107)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = fp200 * fp174;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp116;
target[((hsi*168+106)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp319;
fp319 = fp199 * fp194;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp24;
target[((hsi*168+116)*1+lsi)*1] = fp318;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 552 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif