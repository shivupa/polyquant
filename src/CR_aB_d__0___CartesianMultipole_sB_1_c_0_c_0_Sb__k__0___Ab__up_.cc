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
void CR_aB_d__0___CartesianMultipole_sB_1_c_0_c_0_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*27+24)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src0[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->BO_x[vi], fp91, fp90);
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp394;
fp394 = fp92 * fp45;
LIBINT2_REALTYPE fp393;
fp393 = fp394 * fp12;
target[((hsi*216+80)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src1[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src0[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->BO_x[vi], fp90, fp84);
LIBINT2_REALTYPE fp396;
fp396 = fp85 * fp47;
LIBINT2_REALTYPE fp395;
fp395 = fp396 * fp12;
target[((hsi*216+79)*1+lsi)*1] = fp395;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp398;
fp398 = fp92 * fp44;
LIBINT2_REALTYPE fp397;
fp397 = fp398 * fp13;
target[((hsi*216+78)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*27+18)*1+lsi)*1];
LIBINT2_REALTYPE fp400;
fp400 = fp85 * fp44;
LIBINT2_REALTYPE fp399;
fp399 = fp400 * fp15;
target[((hsi*216+77)*1+lsi)*1] = fp399;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src0[((hsi*27+7)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->BO_x[vi], fp87, fp95);
LIBINT2_REALTYPE fp402;
fp402 = fp88 * fp47;
LIBINT2_REALTYPE fp401;
fp401 = fp402 * fp13;
target[((hsi*216+76)*1+lsi)*1] = fp401;
LIBINT2_REALTYPE fp404;
fp404 = fp88 * fp45;
LIBINT2_REALTYPE fp403;
fp403 = fp404 * fp15;
target[((hsi*216+75)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*27+25)*1+lsi)*1];
LIBINT2_REALTYPE fp406;
fp406 = fp92 * fp47;
LIBINT2_REALTYPE fp405;
fp405 = fp406 * fp14;
target[((hsi*216+74)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*27+7)*1+lsi)*1];
LIBINT2_REALTYPE fp408;
fp408 = fp92 * fp46;
LIBINT2_REALTYPE fp407;
fp407 = fp408 * fp15;
target[((hsi*216+73)*1+lsi)*1] = fp407;
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_x[vi] * fp95;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src0[((hsi*27+8)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp94 + fp97;
LIBINT2_REALTYPE fp410;
fp410 = fp96 * fp47;
LIBINT2_REALTYPE fp409;
fp409 = fp410 * fp15;
target[((hsi*216+72)*1+lsi)*1] = fp409;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->BO_x[vi], fp84, fp78);
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp412;
fp412 = fp79 * fp35;
LIBINT2_REALTYPE fp411;
fp411 = fp412 * fp17;
target[((hsi*216+71)*1+lsi)*1] = fp411;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp414;
fp414 = fp79 * fp33;
LIBINT2_REALTYPE fp413;
fp413 = fp414 * fp19;
target[((hsi*216+70)*1+lsi)*1] = fp413;
LIBINT2_REALTYPE fp416;
fp416 = fp85 * fp33;
LIBINT2_REALTYPE fp415;
fp415 = fp416 * fp17;
target[((hsi*216+69)*1+lsi)*1] = fp415;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*27+0)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src0[((hsi*27+25)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->BO_x[vi] * fp120;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src0[((hsi*27+26)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp119 + fp122;
LIBINT2_REALTYPE fp554;
fp554 = fp121 * fp47;
LIBINT2_REALTYPE fp553;
fp553 = fp554 * fp23;
target[((hsi*216+0)*1+lsi)*1] = fp553;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->BO_x[vi], fp78, fp75);
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp420;
fp420 = fp73 * fp37;
LIBINT2_REALTYPE fp419;
fp419 = fp420 * fp17;
target[((hsi*216+67)*1+lsi)*1] = fp419;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*27+1)*1+lsi)*1];
LIBINT2_REALTYPE fp422;
fp422 = fp73 * fp33;
LIBINT2_REALTYPE fp421;
fp421 = fp422 * fp21;
target[((hsi*216+66)*1+lsi)*1] = fp421;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp424;
fp424 = fp85 * fp35;
LIBINT2_REALTYPE fp423;
fp423 = fp424 * fp16;
target[((hsi*216+65)*1+lsi)*1] = fp423;
LIBINT2_REALTYPE fp426;
fp426 = fp79 * fp37;
LIBINT2_REALTYPE fp425;
fp425 = fp426 * fp16;
target[((hsi*216+64)*1+lsi)*1] = fp425;
LIBINT2_REALTYPE fp428;
fp428 = fp92 * fp33;
LIBINT2_REALTYPE fp427;
fp427 = fp428 * fp16;
target[((hsi*216+63)*1+lsi)*1] = fp427;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*27+18)*1+lsi)*1];
LIBINT2_REALTYPE fp430;
fp430 = fp73 * fp39;
LIBINT2_REALTYPE fp429;
fp429 = fp430 * fp16;
target[((hsi*216+62)*1+lsi)*1] = fp429;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp432;
fp432 = fp85 * fp32;
LIBINT2_REALTYPE fp431;
fp431 = fp432 * fp19;
target[((hsi*216+61)*1+lsi)*1] = fp431;
LIBINT2_REALTYPE fp434;
fp434 = fp79 * fp32;
LIBINT2_REALTYPE fp433;
fp433 = fp434 * fp21;
target[((hsi*216+60)*1+lsi)*1] = fp433;
LIBINT2_REALTYPE fp436;
fp436 = fp92 * fp32;
LIBINT2_REALTYPE fp435;
fp435 = fp436 * fp17;
target[((hsi*216+59)*1+lsi)*1] = fp435;
LIBINT2_REALTYPE fp438;
fp438 = fp73 * fp32;
LIBINT2_REALTYPE fp437;
fp437 = fp438 * fp23;
target[((hsi*216+58)*1+lsi)*1] = fp437;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src0[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BO_x[vi], fp75, fp81);
LIBINT2_REALTYPE fp440;
fp440 = fp76 * fp37;
LIBINT2_REALTYPE fp439;
fp439 = fp440 * fp19;
target[((hsi*216+57)*1+lsi)*1] = fp439;
LIBINT2_REALTYPE fp442;
fp442 = fp76 * fp35;
LIBINT2_REALTYPE fp441;
fp441 = fp442 * fp21;
target[((hsi*216+56)*1+lsi)*1] = fp441;
LIBINT2_REALTYPE fp444;
fp444 = fp76 * fp39;
LIBINT2_REALTYPE fp443;
fp443 = fp444 * fp17;
target[((hsi*216+55)*1+lsi)*1] = fp443;
LIBINT2_REALTYPE fp418;
fp418 = fp73 * fp35;
LIBINT2_REALTYPE fp417;
fp417 = fp418 * fp19;
target[((hsi*216+68)*1+lsi)*1] = fp417;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*27+2)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = fp79 * fp43;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp9;
target[((hsi*216+107)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*27+3)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = fp79 * fp41;
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp11;
target[((hsi*216+106)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp344;
fp344 = fp85 * fp41;
LIBINT2_REALTYPE fp343;
fp343 = fp344 * fp9;
target[((hsi*216+105)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp346;
fp346 = fp73 * fp43;
LIBINT2_REALTYPE fp345;
fp345 = fp346 * fp11;
target[((hsi*216+104)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp348;
fp348 = fp73 * fp45;
LIBINT2_REALTYPE fp347;
fp347 = fp348 * fp9;
target[((hsi*216+103)*1+lsi)*1] = fp347;
LIBINT2_REALTYPE fp350;
fp350 = fp73 * fp41;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp13;
target[((hsi*216+102)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = fp85 * fp43;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp8;
target[((hsi*216+101)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp354;
fp354 = fp79 * fp45;
LIBINT2_REALTYPE fp353;
fp353 = fp354 * fp8;
target[((hsi*216+100)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp356;
fp356 = fp92 * fp41;
LIBINT2_REALTYPE fp355;
fp355 = fp356 * fp8;
target[((hsi*216+99)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp358;
fp358 = fp73 * fp47;
LIBINT2_REALTYPE fp357;
fp357 = fp358 * fp8;
target[((hsi*216+98)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*27+4)*1+lsi)*1];
LIBINT2_REALTYPE fp360;
fp360 = fp85 * fp40;
LIBINT2_REALTYPE fp359;
fp359 = fp360 * fp11;
target[((hsi*216+97)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp362;
fp362 = fp79 * fp40;
LIBINT2_REALTYPE fp361;
fp361 = fp362 * fp13;
target[((hsi*216+96)*1+lsi)*1] = fp361;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BO_x[vi], fp81, fp87);
LIBINT2_REALTYPE fp392;
fp392 = fp82 * fp43;
LIBINT2_REALTYPE fp391;
fp391 = fp392 * fp15;
target[((hsi*216+81)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp366;
fp366 = fp73 * fp40;
LIBINT2_REALTYPE fp365;
fp365 = fp366 * fp15;
target[((hsi*216+94)*1+lsi)*1] = fp365;
LIBINT2_REALTYPE fp368;
fp368 = fp76 * fp45;
LIBINT2_REALTYPE fp367;
fp367 = fp368 * fp11;
target[((hsi*216+93)*1+lsi)*1] = fp367;
LIBINT2_REALTYPE fp370;
fp370 = fp76 * fp43;
LIBINT2_REALTYPE fp369;
fp369 = fp370 * fp13;
target[((hsi*216+92)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp372;
fp372 = fp76 * fp47;
LIBINT2_REALTYPE fp371;
fp371 = fp372 * fp9;
target[((hsi*216+91)*1+lsi)*1] = fp371;
LIBINT2_REALTYPE fp374;
fp374 = fp76 * fp41;
LIBINT2_REALTYPE fp373;
fp373 = fp374 * fp15;
target[((hsi*216+90)*1+lsi)*1] = fp373;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp376;
fp376 = fp85 * fp45;
LIBINT2_REALTYPE fp375;
fp375 = fp376 * fp10;
target[((hsi*216+89)*1+lsi)*1] = fp375;
LIBINT2_REALTYPE fp378;
fp378 = fp92 * fp43;
LIBINT2_REALTYPE fp377;
fp377 = fp378 * fp10;
target[((hsi*216+88)*1+lsi)*1] = fp377;
LIBINT2_REALTYPE fp380;
fp380 = fp79 * fp47;
LIBINT2_REALTYPE fp379;
fp379 = fp380 * fp10;
target[((hsi*216+87)*1+lsi)*1] = fp379;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp382;
fp382 = fp85 * fp42;
LIBINT2_REALTYPE fp381;
fp381 = fp382 * fp13;
target[((hsi*216+86)*1+lsi)*1] = fp381;
LIBINT2_REALTYPE fp384;
fp384 = fp92 * fp42;
LIBINT2_REALTYPE fp383;
fp383 = fp384 * fp11;
target[((hsi*216+85)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp386;
fp386 = fp79 * fp42;
LIBINT2_REALTYPE fp385;
fp385 = fp386 * fp15;
target[((hsi*216+84)*1+lsi)*1] = fp385;
LIBINT2_REALTYPE fp388;
fp388 = fp82 * fp45;
LIBINT2_REALTYPE fp387;
fp387 = fp388 * fp13;
target[((hsi*216+83)*1+lsi)*1] = fp387;
LIBINT2_REALTYPE fp390;
fp390 = fp82 * fp47;
LIBINT2_REALTYPE fp389;
fp389 = fp390 * fp11;
target[((hsi*216+82)*1+lsi)*1] = fp389;
LIBINT2_REALTYPE fp364;
fp364 = fp92 * fp40;
LIBINT2_REALTYPE fp363;
fp363 = fp364 * fp9;
target[((hsi*216+95)*1+lsi)*1] = fp363;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src0[((hsi*27+22)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src0[((hsi*27+21)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BO_x[vi], fp103, fp100);
LIBINT2_REALTYPE fp502;
fp502 = fp98 * fp47;
LIBINT2_REALTYPE fp501;
fp501 = fp502 * fp16;
target[((hsi*216+26)*1+lsi)*1] = fp501;
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src0[((hsi*27+20)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src0[((hsi*27+19)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BO_x[vi], fp115, fp109);
LIBINT2_REALTYPE fp504;
fp504 = fp110 * fp40;
LIBINT2_REALTYPE fp503;
fp503 = fp504 * fp19;
target[((hsi*216+25)*1+lsi)*1] = fp503;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->BO_x[vi], fp109, fp103);
LIBINT2_REALTYPE fp506;
fp506 = fp104 * fp40;
LIBINT2_REALTYPE fp505;
fp505 = fp506 * fp21;
target[((hsi*216+24)*1+lsi)*1] = fp505;
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src0[((hsi*27+18)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->BO_x[vi], fp116, fp115);
LIBINT2_REALTYPE fp508;
fp508 = fp117 * fp40;
LIBINT2_REALTYPE fp507;
fp507 = fp508 * fp17;
target[((hsi*216+23)*1+lsi)*1] = fp507;
LIBINT2_REALTYPE fp510;
fp510 = fp98 * fp40;
LIBINT2_REALTYPE fp509;
fp509 = fp510 * fp23;
target[((hsi*216+22)*1+lsi)*1] = fp509;
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src0[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->BO_x[vi], fp100, fp106);
LIBINT2_REALTYPE fp512;
fp512 = fp101 * fp45;
LIBINT2_REALTYPE fp511;
fp511 = fp512 * fp19;
target[((hsi*216+21)*1+lsi)*1] = fp511;
LIBINT2_REALTYPE fp514;
fp514 = fp101 * fp43;
LIBINT2_REALTYPE fp513;
fp513 = fp514 * fp21;
target[((hsi*216+20)*1+lsi)*1] = fp513;
LIBINT2_REALTYPE fp516;
fp516 = fp101 * fp47;
LIBINT2_REALTYPE fp515;
fp515 = fp516 * fp17;
target[((hsi*216+19)*1+lsi)*1] = fp515;
LIBINT2_REALTYPE fp518;
fp518 = fp101 * fp41;
LIBINT2_REALTYPE fp517;
fp517 = fp518 * fp23;
target[((hsi*216+18)*1+lsi)*1] = fp517;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*27+5)*1+lsi)*1];
LIBINT2_REALTYPE fp520;
fp520 = fp110 * fp45;
LIBINT2_REALTYPE fp519;
fp519 = fp520 * fp18;
target[((hsi*216+17)*1+lsi)*1] = fp519;
LIBINT2_REALTYPE fp522;
fp522 = fp117 * fp43;
LIBINT2_REALTYPE fp521;
fp521 = fp522 * fp18;
target[((hsi*216+16)*1+lsi)*1] = fp521;
LIBINT2_REALTYPE fp524;
fp524 = fp104 * fp47;
LIBINT2_REALTYPE fp523;
fp523 = fp524 * fp18;
target[((hsi*216+15)*1+lsi)*1] = fp523;
LIBINT2_REALTYPE fp446;
fp446 = fp76 * fp33;
LIBINT2_REALTYPE fp445;
fp445 = fp446 * fp23;
target[((hsi*216+54)*1+lsi)*1] = fp445;
LIBINT2_REALTYPE fp528;
fp528 = fp117 * fp42;
LIBINT2_REALTYPE fp527;
fp527 = fp528 * fp19;
target[((hsi*216+13)*1+lsi)*1] = fp527;
LIBINT2_REALTYPE fp530;
fp530 = fp104 * fp42;
LIBINT2_REALTYPE fp529;
fp529 = fp530 * fp23;
target[((hsi*216+12)*1+lsi)*1] = fp529;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src0[((hsi*27+24)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->BO_x[vi], fp106, fp112);
LIBINT2_REALTYPE fp532;
fp532 = fp107 * fp45;
LIBINT2_REALTYPE fp531;
fp531 = fp532 * fp21;
target[((hsi*216+11)*1+lsi)*1] = fp531;
LIBINT2_REALTYPE fp534;
fp534 = fp107 * fp47;
LIBINT2_REALTYPE fp533;
fp533 = fp534 * fp19;
target[((hsi*216+10)*1+lsi)*1] = fp533;
LIBINT2_REALTYPE fp536;
fp536 = fp107 * fp43;
LIBINT2_REALTYPE fp535;
fp535 = fp536 * fp23;
target[((hsi*216+9)*1+lsi)*1] = fp535;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*27+6)*1+lsi)*1];
LIBINT2_REALTYPE fp538;
fp538 = fp117 * fp45;
LIBINT2_REALTYPE fp537;
fp537 = fp538 * fp20;
target[((hsi*216+8)*1+lsi)*1] = fp537;
LIBINT2_REALTYPE fp540;
fp540 = fp110 * fp47;
LIBINT2_REALTYPE fp539;
fp539 = fp540 * fp20;
target[((hsi*216+7)*1+lsi)*1] = fp539;
LIBINT2_REALTYPE fp542;
fp542 = fp117 * fp44;
LIBINT2_REALTYPE fp541;
fp541 = fp542 * fp21;
target[((hsi*216+6)*1+lsi)*1] = fp541;
LIBINT2_REALTYPE fp544;
fp544 = fp110 * fp44;
LIBINT2_REALTYPE fp543;
fp543 = fp544 * fp23;
target[((hsi*216+5)*1+lsi)*1] = fp543;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->BO_x[vi], fp112, fp120);
LIBINT2_REALTYPE fp546;
fp546 = fp113 * fp47;
LIBINT2_REALTYPE fp545;
fp545 = fp546 * fp21;
target[((hsi*216+4)*1+lsi)*1] = fp545;
LIBINT2_REALTYPE fp548;
fp548 = fp113 * fp45;
LIBINT2_REALTYPE fp547;
fp547 = fp548 * fp23;
target[((hsi*216+3)*1+lsi)*1] = fp547;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*27+7)*1+lsi)*1];
LIBINT2_REALTYPE fp550;
fp550 = fp117 * fp47;
LIBINT2_REALTYPE fp549;
fp549 = fp550 * fp22;
target[((hsi*216+2)*1+lsi)*1] = fp549;
LIBINT2_REALTYPE fp552;
fp552 = fp117 * fp46;
LIBINT2_REALTYPE fp551;
fp551 = fp552 * fp23;
target[((hsi*216+1)*1+lsi)*1] = fp551;
LIBINT2_REALTYPE fp526;
fp526 = fp110 * fp42;
LIBINT2_REALTYPE fp525;
fp525 = fp526 * fp21;
target[((hsi*216+14)*1+lsi)*1] = fp525;
LIBINT2_REALTYPE fp448;
fp448 = fp85 * fp37;
LIBINT2_REALTYPE fp447;
fp447 = fp448 * fp18;
target[((hsi*216+53)*1+lsi)*1] = fp447;
LIBINT2_REALTYPE fp450;
fp450 = fp92 * fp35;
LIBINT2_REALTYPE fp449;
fp449 = fp450 * fp18;
target[((hsi*216+52)*1+lsi)*1] = fp449;
LIBINT2_REALTYPE fp452;
fp452 = fp79 * fp39;
LIBINT2_REALTYPE fp451;
fp451 = fp452 * fp18;
target[((hsi*216+51)*1+lsi)*1] = fp451;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*27+23)*1+lsi)*1];
LIBINT2_REALTYPE fp454;
fp454 = fp85 * fp34;
LIBINT2_REALTYPE fp453;
fp453 = fp454 * fp21;
target[((hsi*216+50)*1+lsi)*1] = fp453;
LIBINT2_REALTYPE fp456;
fp456 = fp92 * fp34;
LIBINT2_REALTYPE fp455;
fp455 = fp456 * fp19;
target[((hsi*216+49)*1+lsi)*1] = fp455;
LIBINT2_REALTYPE fp458;
fp458 = fp79 * fp34;
LIBINT2_REALTYPE fp457;
fp457 = fp458 * fp23;
target[((hsi*216+48)*1+lsi)*1] = fp457;
LIBINT2_REALTYPE fp460;
fp460 = fp82 * fp37;
LIBINT2_REALTYPE fp459;
fp459 = fp460 * fp21;
target[((hsi*216+47)*1+lsi)*1] = fp459;
LIBINT2_REALTYPE fp462;
fp462 = fp82 * fp39;
LIBINT2_REALTYPE fp461;
fp461 = fp462 * fp19;
target[((hsi*216+46)*1+lsi)*1] = fp461;
LIBINT2_REALTYPE fp464;
fp464 = fp82 * fp35;
LIBINT2_REALTYPE fp463;
fp463 = fp464 * fp23;
target[((hsi*216+45)*1+lsi)*1] = fp463;
LIBINT2_REALTYPE fp466;
fp466 = fp92 * fp37;
LIBINT2_REALTYPE fp465;
fp465 = fp466 * fp20;
target[((hsi*216+44)*1+lsi)*1] = fp465;
LIBINT2_REALTYPE fp468;
fp468 = fp85 * fp39;
LIBINT2_REALTYPE fp467;
fp467 = fp468 * fp20;
target[((hsi*216+43)*1+lsi)*1] = fp467;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*27+24)*1+lsi)*1];
LIBINT2_REALTYPE fp470;
fp470 = fp92 * fp36;
LIBINT2_REALTYPE fp469;
fp469 = fp470 * fp21;
target[((hsi*216+42)*1+lsi)*1] = fp469;
LIBINT2_REALTYPE fp500;
fp500 = fp117 * fp41;
LIBINT2_REALTYPE fp499;
fp499 = fp500 * fp16;
target[((hsi*216+27)*1+lsi)*1] = fp499;
LIBINT2_REALTYPE fp474;
fp474 = fp88 * fp39;
LIBINT2_REALTYPE fp473;
fp473 = fp474 * fp21;
target[((hsi*216+40)*1+lsi)*1] = fp473;
LIBINT2_REALTYPE fp476;
fp476 = fp88 * fp37;
LIBINT2_REALTYPE fp475;
fp475 = fp476 * fp23;
target[((hsi*216+39)*1+lsi)*1] = fp475;
LIBINT2_REALTYPE fp478;
fp478 = fp92 * fp39;
LIBINT2_REALTYPE fp477;
fp477 = fp478 * fp22;
target[((hsi*216+38)*1+lsi)*1] = fp477;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*27+25)*1+lsi)*1];
LIBINT2_REALTYPE fp480;
fp480 = fp92 * fp38;
LIBINT2_REALTYPE fp479;
fp479 = fp480 * fp23;
target[((hsi*216+37)*1+lsi)*1] = fp479;
LIBINT2_REALTYPE fp482;
fp482 = fp96 * fp39;
LIBINT2_REALTYPE fp481;
fp481 = fp482 * fp23;
target[((hsi*216+36)*1+lsi)*1] = fp481;
LIBINT2_REALTYPE fp484;
fp484 = fp104 * fp43;
LIBINT2_REALTYPE fp483;
fp483 = fp484 * fp17;
target[((hsi*216+35)*1+lsi)*1] = fp483;
LIBINT2_REALTYPE fp486;
fp486 = fp104 * fp41;
LIBINT2_REALTYPE fp485;
fp485 = fp486 * fp19;
target[((hsi*216+34)*1+lsi)*1] = fp485;
LIBINT2_REALTYPE fp488;
fp488 = fp110 * fp41;
LIBINT2_REALTYPE fp487;
fp487 = fp488 * fp17;
target[((hsi*216+33)*1+lsi)*1] = fp487;
LIBINT2_REALTYPE fp490;
fp490 = fp98 * fp43;
LIBINT2_REALTYPE fp489;
fp489 = fp490 * fp19;
target[((hsi*216+32)*1+lsi)*1] = fp489;
LIBINT2_REALTYPE fp492;
fp492 = fp98 * fp45;
LIBINT2_REALTYPE fp491;
fp491 = fp492 * fp17;
target[((hsi*216+31)*1+lsi)*1] = fp491;
LIBINT2_REALTYPE fp494;
fp494 = fp98 * fp41;
LIBINT2_REALTYPE fp493;
fp493 = fp494 * fp21;
target[((hsi*216+30)*1+lsi)*1] = fp493;
LIBINT2_REALTYPE fp496;
fp496 = fp110 * fp43;
LIBINT2_REALTYPE fp495;
fp495 = fp496 * fp16;
target[((hsi*216+29)*1+lsi)*1] = fp495;
LIBINT2_REALTYPE fp498;
fp498 = fp104 * fp45;
LIBINT2_REALTYPE fp497;
fp497 = fp498 * fp16;
target[((hsi*216+28)*1+lsi)*1] = fp497;
LIBINT2_REALTYPE fp472;
fp472 = fp85 * fp36;
LIBINT2_REALTYPE fp471;
fp471 = fp472 * fp23;
target[((hsi*216+41)*1+lsi)*1] = fp471;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp92 * fp29;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp4;
target[((hsi*216+188)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp85 * fp31;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp4;
target[((hsi*216+187)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp92 * fp28;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp5;
target[((hsi*216+186)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp85 * fp28;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp7;
target[((hsi*216+185)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp186;
fp186 = fp88 * fp31;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp5;
target[((hsi*216+184)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp188;
fp188 = fp88 * fp29;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp7;
target[((hsi*216+183)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*27+16)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp92 * fp31;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp6;
target[((hsi*216+182)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*27+16)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp92 * fp30;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp7;
target[((hsi*216+181)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp194;
fp194 = fp96 * fp31;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp7;
target[((hsi*216+180)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src0[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_x[vi], fp59, fp53);
LIBINT2_REALTYPE fp196;
fp196 = fp54 * fp43;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp1;
target[((hsi*216+179)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp54 * fp41;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp3;
target[((hsi*216+178)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*27+10)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_x[vi], fp65, fp59);
LIBINT2_REALTYPE fp200;
fp200 = fp60 * fp41;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp1;
target[((hsi*216+177)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*27+16)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_x[vi] * fp70;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*27+17)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp69 + fp72;
LIBINT2_REALTYPE fp338;
fp338 = fp71 * fp31;
LIBINT2_REALTYPE fp337;
fp337 = fp338 * fp23;
target[((hsi*216+108)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src0[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_x[vi], fp53, fp50);
LIBINT2_REALTYPE fp204;
fp204 = fp48 * fp45;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp1;
target[((hsi*216+175)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp206;
fp206 = fp48 * fp41;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp5;
target[((hsi*216+174)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp60 * fp43;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * fp0;
target[((hsi*216+173)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp210;
fp210 = fp54 * fp45;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp0;
target[((hsi*216+172)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*27+9)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->BO_x[vi], fp66, fp65);
LIBINT2_REALTYPE fp212;
fp212 = fp67 * fp41;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp0;
target[((hsi*216+171)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp214;
fp214 = fp48 * fp47;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp0;
target[((hsi*216+170)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp216;
fp216 = fp60 * fp40;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp3;
target[((hsi*216+169)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp218;
fp218 = fp54 * fp40;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp5;
target[((hsi*216+168)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp220;
fp220 = fp67 * fp40;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp1;
target[((hsi*216+167)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp222;
fp222 = fp48 * fp40;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp7;
target[((hsi*216+166)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_x[vi], fp50, fp56);
LIBINT2_REALTYPE fp224;
fp224 = fp51 * fp45;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp3;
target[((hsi*216+165)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp226;
fp226 = fp51 * fp43;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp5;
target[((hsi*216+164)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp228;
fp228 = fp51 * fp47;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp1;
target[((hsi*216+163)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp202;
fp202 = fp48 * fp43;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp3;
target[((hsi*216+176)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*27+11)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp79 * fp27;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp1;
target[((hsi*216+215)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*27+12)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp79 * fp25;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp3;
target[((hsi*216+214)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp128;
fp128 = fp85 * fp25;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp1;
target[((hsi*216+213)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp130;
fp130 = fp73 * fp27;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp3;
target[((hsi*216+212)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp132;
fp132 = fp73 * fp29;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp1;
target[((hsi*216+211)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp134;
fp134 = fp73 * fp25;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp5;
target[((hsi*216+210)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp136;
fp136 = fp85 * fp27;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp0;
target[((hsi*216+209)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp138;
fp138 = fp79 * fp29;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp0;
target[((hsi*216+208)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp140;
fp140 = fp92 * fp25;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp0;
target[((hsi*216+207)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp142;
fp142 = fp73 * fp31;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp0;
target[((hsi*216+206)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*27+13)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp85 * fp24;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp3;
target[((hsi*216+205)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp146;
fp146 = fp79 * fp24;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp5;
target[((hsi*216+204)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp176;
fp176 = fp82 * fp27;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp7;
target[((hsi*216+189)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp150;
fp150 = fp73 * fp24;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp7;
target[((hsi*216+202)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp152;
fp152 = fp76 * fp29;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp3;
target[((hsi*216+201)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp154;
fp154 = fp76 * fp27;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp5;
target[((hsi*216+200)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp156;
fp156 = fp76 * fp31;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp1;
target[((hsi*216+199)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp158;
fp158 = fp76 * fp25;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp7;
target[((hsi*216+198)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = fp85 * fp29;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp2;
target[((hsi*216+197)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp162;
fp162 = fp92 * fp27;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp2;
target[((hsi*216+196)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp164;
fp164 = fp79 * fp31;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp2;
target[((hsi*216+195)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*27+14)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp85 * fp26;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp5;
target[((hsi*216+194)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp168;
fp168 = fp92 * fp26;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp3;
target[((hsi*216+193)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp170;
fp170 = fp79 * fp26;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp7;
target[((hsi*216+192)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp172;
fp172 = fp82 * fp29;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp5;
target[((hsi*216+191)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp174;
fp174 = fp82 * fp31;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp3;
target[((hsi*216+190)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp148;
fp148 = fp92 * fp24;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp1;
target[((hsi*216+203)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp286;
fp286 = fp48 * fp31;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp16;
target[((hsi*216+134)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp288;
fp288 = fp60 * fp24;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp19;
target[((hsi*216+133)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp290;
fp290 = fp54 * fp24;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp21;
target[((hsi*216+132)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp292;
fp292 = fp67 * fp24;
LIBINT2_REALTYPE fp291;
fp291 = fp292 * fp17;
target[((hsi*216+131)*1+lsi)*1] = fp291;
LIBINT2_REALTYPE fp294;
fp294 = fp48 * fp24;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp23;
target[((hsi*216+130)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp296;
fp296 = fp51 * fp29;
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp19;
target[((hsi*216+129)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp298;
fp298 = fp51 * fp27;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * fp21;
target[((hsi*216+128)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp300;
fp300 = fp51 * fp31;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp17;
target[((hsi*216+127)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp302;
fp302 = fp51 * fp25;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp23;
target[((hsi*216+126)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp304;
fp304 = fp60 * fp29;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp18;
target[((hsi*216+125)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp306;
fp306 = fp67 * fp27;
LIBINT2_REALTYPE fp305;
fp305 = fp306 * fp18;
target[((hsi*216+124)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp308;
fp308 = fp54 * fp31;
LIBINT2_REALTYPE fp307;
fp307 = fp308 * fp18;
target[((hsi*216+123)*1+lsi)*1] = fp307;
LIBINT2_REALTYPE fp230;
fp230 = fp51 * fp41;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp7;
target[((hsi*216+162)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp312;
fp312 = fp67 * fp26;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * fp19;
target[((hsi*216+121)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp314;
fp314 = fp54 * fp26;
LIBINT2_REALTYPE fp313;
fp313 = fp314 * fp23;
target[((hsi*216+120)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*27+15)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_x[vi], fp56, fp62);
LIBINT2_REALTYPE fp316;
fp316 = fp57 * fp29;
LIBINT2_REALTYPE fp315;
fp315 = fp316 * fp21;
target[((hsi*216+119)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp318;
fp318 = fp57 * fp31;
LIBINT2_REALTYPE fp317;
fp317 = fp318 * fp19;
target[((hsi*216+118)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp320;
fp320 = fp57 * fp27;
LIBINT2_REALTYPE fp319;
fp319 = fp320 * fp23;
target[((hsi*216+117)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp322;
fp322 = fp67 * fp29;
LIBINT2_REALTYPE fp321;
fp321 = fp322 * fp20;
target[((hsi*216+116)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp324;
fp324 = fp60 * fp31;
LIBINT2_REALTYPE fp323;
fp323 = fp324 * fp20;
target[((hsi*216+115)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp326;
fp326 = fp67 * fp28;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp21;
target[((hsi*216+114)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp328;
fp328 = fp60 * fp28;
LIBINT2_REALTYPE fp327;
fp327 = fp328 * fp23;
target[((hsi*216+113)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_x[vi], fp62, fp70);
LIBINT2_REALTYPE fp330;
fp330 = fp63 * fp31;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * fp21;
target[((hsi*216+112)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp332;
fp332 = fp63 * fp29;
LIBINT2_REALTYPE fp331;
fp331 = fp332 * fp23;
target[((hsi*216+111)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp334;
fp334 = fp67 * fp31;
LIBINT2_REALTYPE fp333;
fp333 = fp334 * fp22;
target[((hsi*216+110)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp336;
fp336 = fp67 * fp30;
LIBINT2_REALTYPE fp335;
fp335 = fp336 * fp23;
target[((hsi*216+109)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp310;
fp310 = fp60 * fp26;
LIBINT2_REALTYPE fp309;
fp309 = fp310 * fp21;
target[((hsi*216+122)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp232;
fp232 = fp60 * fp45;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * fp2;
target[((hsi*216+161)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp234;
fp234 = fp67 * fp43;
LIBINT2_REALTYPE fp233;
fp233 = fp234 * fp2;
target[((hsi*216+160)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp236;
fp236 = fp54 * fp47;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * fp2;
target[((hsi*216+159)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp238;
fp238 = fp60 * fp42;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp5;
target[((hsi*216+158)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp240;
fp240 = fp67 * fp42;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp3;
target[((hsi*216+157)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp242;
fp242 = fp54 * fp42;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp7;
target[((hsi*216+156)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp244;
fp244 = fp57 * fp45;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * fp5;
target[((hsi*216+155)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp246;
fp246 = fp57 * fp47;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp3;
target[((hsi*216+154)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp248;
fp248 = fp57 * fp43;
LIBINT2_REALTYPE fp247;
fp247 = fp248 * fp7;
target[((hsi*216+153)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp250;
fp250 = fp67 * fp45;
LIBINT2_REALTYPE fp249;
fp249 = fp250 * fp4;
target[((hsi*216+152)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp252;
fp252 = fp60 * fp47;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * fp4;
target[((hsi*216+151)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp254;
fp254 = fp67 * fp44;
LIBINT2_REALTYPE fp253;
fp253 = fp254 * fp5;
target[((hsi*216+150)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp284;
fp284 = fp67 * fp25;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp16;
target[((hsi*216+135)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp258;
fp258 = fp63 * fp47;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * fp5;
target[((hsi*216+148)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp260;
fp260 = fp63 * fp45;
LIBINT2_REALTYPE fp259;
fp259 = fp260 * fp7;
target[((hsi*216+147)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp262;
fp262 = fp67 * fp47;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * fp6;
target[((hsi*216+146)*1+lsi)*1] = fp261;
LIBINT2_REALTYPE fp264;
fp264 = fp67 * fp46;
LIBINT2_REALTYPE fp263;
fp263 = fp264 * fp7;
target[((hsi*216+145)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp266;
fp266 = fp71 * fp47;
LIBINT2_REALTYPE fp265;
fp265 = fp266 * fp7;
target[((hsi*216+144)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp268;
fp268 = fp54 * fp27;
LIBINT2_REALTYPE fp267;
fp267 = fp268 * fp17;
target[((hsi*216+143)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp270;
fp270 = fp54 * fp25;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp19;
target[((hsi*216+142)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp272;
fp272 = fp60 * fp25;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * fp17;
target[((hsi*216+141)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp274;
fp274 = fp48 * fp27;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp19;
target[((hsi*216+140)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp276;
fp276 = fp48 * fp29;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp17;
target[((hsi*216+139)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp278;
fp278 = fp48 * fp25;
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp21;
target[((hsi*216+138)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp280;
fp280 = fp60 * fp27;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp16;
target[((hsi*216+137)*1+lsi)*1] = fp279;
LIBINT2_REALTYPE fp282;
fp282 = fp54 * fp29;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp16;
target[((hsi*216+136)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp256;
fp256 = fp60 * fp44;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * fp7;
target[((hsi*216+149)*1+lsi)*1] = fp255;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 555 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif