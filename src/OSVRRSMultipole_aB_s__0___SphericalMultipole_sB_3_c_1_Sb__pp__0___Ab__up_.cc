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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_3_c_1_Sb__pp__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp333;
LIBINT2_REALTYPE fp332;
fp332 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp331;
fp331 = fp332 + src5[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp330;
fp330 = inteval->oo2z[vi] * fp331;
LIBINT2_REALTYPE fp334;
LIBINT2_REALTYPE fp329;
fp329 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+11)*1+lsi)*1], fp330);
target[((hsi*78+21)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp325;
fp325 = 5.0000000000000000e-01 * src4[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
LIBINT2_REALTYPE fp326;
fp326 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp324;
fp324 = fp326 + fp325;
LIBINT2_REALTYPE fp323;
fp323 = inteval->oo2z[vi] * fp324;
LIBINT2_REALTYPE fp328;
LIBINT2_REALTYPE fp322;
fp322 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*66+22)*1+lsi)*1], fp323);
target[((hsi*78+22)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp320;
LIBINT2_REALTYPE fp319;
fp319 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp318;
fp318 = fp319 + src5[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = inteval->oo2z[vi] * fp318;
LIBINT2_REALTYPE fp321;
LIBINT2_REALTYPE fp316;
fp316 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+13)*1+lsi)*1], fp317);
target[((hsi*78+23)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp314;
fp314 = 0.0000000000000000e+00 + src5[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = inteval->oo2z[vi] * fp314;
LIBINT2_REALTYPE fp315;
LIBINT2_REALTYPE fp312;
fp312 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+12)*1+lsi)*1], fp313);
target[((hsi*78+24)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp310;
LIBINT2_REALTYPE fp309;
fp309 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp308;
fp308 = fp309 + src5[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
fp307 = inteval->oo2z[vi] * fp308;
LIBINT2_REALTYPE fp311;
LIBINT2_REALTYPE fp306;
fp306 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+14)*1+lsi)*1], fp307);
target[((hsi*78+25)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp304;
LIBINT2_REALTYPE fp303;
fp303 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+26)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp302;
fp302 = fp303 + src5[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = inteval->oo2z[vi] * fp302;
LIBINT2_REALTYPE fp305;
LIBINT2_REALTYPE fp300;
fp300 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+26)*1+lsi)*1], fp301);
target[((hsi*78+26)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp298;
LIBINT2_REALTYPE fp297;
fp297 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+27)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp296;
fp296 = fp297 + src5[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = inteval->oo2z[vi] * fp296;
LIBINT2_REALTYPE fp299;
LIBINT2_REALTYPE fp294;
fp294 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+27)*1+lsi)*1], fp295);
target[((hsi*78+27)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp292;
LIBINT2_REALTYPE fp291;
fp291 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp290;
fp290 = fp291 + src5[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = inteval->oo2z[vi] * fp290;
LIBINT2_REALTYPE fp293;
LIBINT2_REALTYPE fp288;
fp288 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+28)*1+lsi)*1], fp289);
target[((hsi*78+28)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp452;
fp452 = 5.0000000000000000e-01 * src3[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp454;
fp454 = 5.0000000000000000e-01 * src2[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp456;
LIBINT2_REALTYPE fp455;
fp455 = libint2::fma_plus(1.0000000000000000e+01, src1[((hsi*55+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp453;
fp453 = fp455 + fp454;
LIBINT2_REALTYPE fp451;
fp451 = fp453 - fp452;
LIBINT2_REALTYPE fp450;
fp450 = inteval->oo2z[vi] * fp451;
LIBINT2_REALTYPE fp457;
LIBINT2_REALTYPE fp449;
fp449 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*66+0)*1+lsi)*1], fp450);
target[((hsi*78+0)*1+lsi)*1] = fp449;
LIBINT2_REALTYPE fp278;
fp278 = 5.0000000000000000e-01 * src4[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
LIBINT2_REALTYPE fp279;
fp279 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp277;
fp277 = fp279 + fp278;
LIBINT2_REALTYPE fp276;
fp276 = inteval->oo2z[vi] * fp277;
LIBINT2_REALTYPE fp281;
LIBINT2_REALTYPE fp275;
fp275 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*66+18)*1+lsi)*1], fp276);
target[((hsi*78+30)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp273;
LIBINT2_REALTYPE fp272;
fp272 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp271;
fp271 = fp272 + src5[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = inteval->oo2z[vi] * fp271;
LIBINT2_REALTYPE fp274;
LIBINT2_REALTYPE fp269;
fp269 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+19)*1+lsi)*1], fp270);
target[((hsi*78+31)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp267;
fp267 = 0.0000000000000000e+00 + src5[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = inteval->oo2z[vi] * fp267;
LIBINT2_REALTYPE fp268;
LIBINT2_REALTYPE fp265;
fp265 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+18)*1+lsi)*1], fp266);
target[((hsi*78+32)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp263;
LIBINT2_REALTYPE fp262;
fp262 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp261;
fp261 = fp262 + src5[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = inteval->oo2z[vi] * fp261;
LIBINT2_REALTYPE fp264;
LIBINT2_REALTYPE fp259;
fp259 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+21)*1+lsi)*1], fp260);
target[((hsi*78+33)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp257;
LIBINT2_REALTYPE fp256;
fp256 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp255;
fp255 = fp256 + src5[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = inteval->oo2z[vi] * fp255;
LIBINT2_REALTYPE fp258;
LIBINT2_REALTYPE fp253;
fp253 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+20)*1+lsi)*1], fp254);
target[((hsi*78+34)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp249;
fp249 = 5.0000000000000000e-01 * src4[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
LIBINT2_REALTYPE fp250;
fp250 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+35)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp248;
fp248 = fp250 + fp249;
LIBINT2_REALTYPE fp247;
fp247 = inteval->oo2z[vi] * fp248;
LIBINT2_REALTYPE fp252;
LIBINT2_REALTYPE fp246;
fp246 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*66+35)*1+lsi)*1], fp247);
target[((hsi*78+35)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp244;
LIBINT2_REALTYPE fp243;
fp243 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp242;
fp242 = fp243 + src5[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = inteval->oo2z[vi] * fp242;
LIBINT2_REALTYPE fp245;
LIBINT2_REALTYPE fp240;
fp240 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+23)*1+lsi)*1], fp241);
target[((hsi*78+36)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp238;
fp238 = 0.0000000000000000e+00 + src5[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = inteval->oo2z[vi] * fp238;
LIBINT2_REALTYPE fp239;
LIBINT2_REALTYPE fp236;
fp236 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+22)*1+lsi)*1], fp237);
target[((hsi*78+37)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp234;
LIBINT2_REALTYPE fp233;
fp233 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp232;
fp232 = fp233 + src5[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = inteval->oo2z[vi] * fp232;
LIBINT2_REALTYPE fp235;
LIBINT2_REALTYPE fp230;
fp230 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+25)*1+lsi)*1], fp231);
target[((hsi*78+38)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp286;
LIBINT2_REALTYPE fp285;
fp285 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*55+29)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp284;
fp284 = fp285 + src5[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = inteval->oo2z[vi] * fp284;
LIBINT2_REALTYPE fp287;
LIBINT2_REALTYPE fp282;
fp282 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+29)*1+lsi)*1], fp283);
target[((hsi*78+29)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp445;
fp445 = 5.0000000000000000e-01 * src4[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp447;
LIBINT2_REALTYPE fp446;
fp446 = libint2::fma_plus(1.0000000000000000e+01, src1[((hsi*55+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp444;
fp444 = fp446 + fp445;
LIBINT2_REALTYPE fp443;
fp443 = inteval->oo2z[vi] * fp444;
LIBINT2_REALTYPE fp448;
LIBINT2_REALTYPE fp442;
fp442 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*66+1)*1+lsi)*1], fp443);
target[((hsi*78+1)*1+lsi)*1] = fp442;
LIBINT2_REALTYPE fp440;
LIBINT2_REALTYPE fp439;
fp439 = libint2::fma_plus(1.0000000000000000e+01, src1[((hsi*55+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp438;
fp438 = fp439 + src5[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp437;
fp437 = inteval->oo2z[vi] * fp438;
LIBINT2_REALTYPE fp441;
LIBINT2_REALTYPE fp436;
fp436 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+2)*1+lsi)*1], fp437);
target[((hsi*78+2)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp434;
LIBINT2_REALTYPE fp433;
fp433 = libint2::fma_plus(5.0000000000000000e-01, src4[((hsi*66+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp432;
fp432 = inteval->oo2z[vi] * fp433;
LIBINT2_REALTYPE fp435;
LIBINT2_REALTYPE fp431;
fp431 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*66+0)*1+lsi)*1], fp432);
target[((hsi*78+3)*1+lsi)*1] = fp431;
LIBINT2_REALTYPE fp429;
fp429 = 0.0000000000000000e+00 + src5[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp428;
fp428 = inteval->oo2z[vi] * fp429;
LIBINT2_REALTYPE fp430;
LIBINT2_REALTYPE fp427;
fp427 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+0)*1+lsi)*1], fp428);
target[((hsi*78+4)*1+lsi)*1] = fp427;
LIBINT2_REALTYPE fp423;
fp423 = 5.0000000000000000e-01 * src4[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp425;
LIBINT2_REALTYPE fp424;
fp424 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*55+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp422;
fp422 = fp424 + fp423;
LIBINT2_REALTYPE fp421;
fp421 = inteval->oo2z[vi] * fp422;
LIBINT2_REALTYPE fp426;
LIBINT2_REALTYPE fp420;
fp420 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*66+5)*1+lsi)*1], fp421);
target[((hsi*78+5)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp418;
fp418 = 0.0000000000000000e+00 + src5[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp417;
fp417 = inteval->oo2z[vi] * fp418;
LIBINT2_REALTYPE fp419;
LIBINT2_REALTYPE fp416;
fp416 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+1)*1+lsi)*1], fp417);
target[((hsi*78+6)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp414;
LIBINT2_REALTYPE fp413;
fp413 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*55+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp412;
fp412 = fp413 + src5[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp411;
fp411 = inteval->oo2z[vi] * fp412;
LIBINT2_REALTYPE fp415;
LIBINT2_REALTYPE fp410;
fp410 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+7)*1+lsi)*1], fp411);
target[((hsi*78+7)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp408;
LIBINT2_REALTYPE fp407;
fp407 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*55+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp406;
fp406 = fp407 + src5[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp405;
fp405 = inteval->oo2z[vi] * fp406;
LIBINT2_REALTYPE fp409;
LIBINT2_REALTYPE fp404;
fp404 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+8)*1+lsi)*1], fp405);
target[((hsi*78+8)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp400;
fp400 = 5.0000000000000000e-01 * src4[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp402;
LIBINT2_REALTYPE fp401;
fp401 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp399;
fp399 = fp401 + fp400;
LIBINT2_REALTYPE fp398;
fp398 = inteval->oo2z[vi] * fp399;
LIBINT2_REALTYPE fp403;
LIBINT2_REALTYPE fp397;
fp397 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*66+3)*1+lsi)*1], fp398);
target[((hsi*78+9)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp337;
fp337 = 0.0000000000000000e+00 + src5[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = inteval->oo2z[vi] * fp337;
LIBINT2_REALTYPE fp338;
LIBINT2_REALTYPE fp335;
fp335 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+9)*1+lsi)*1], fp336);
target[((hsi*78+20)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp389;
fp389 = 0.0000000000000000e+00 + src5[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp388;
fp388 = inteval->oo2z[vi] * fp389;
LIBINT2_REALTYPE fp390;
LIBINT2_REALTYPE fp387;
fp387 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+3)*1+lsi)*1], fp388);
target[((hsi*78+11)*1+lsi)*1] = fp387;
LIBINT2_REALTYPE fp383;
fp383 = 5.0000000000000000e-01 * src4[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
LIBINT2_REALTYPE fp384;
fp384 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp382;
fp382 = fp384 + fp383;
LIBINT2_REALTYPE fp381;
fp381 = inteval->oo2z[vi] * fp382;
LIBINT2_REALTYPE fp386;
LIBINT2_REALTYPE fp380;
fp380 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*66+12)*1+lsi)*1], fp381);
target[((hsi*78+12)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp378;
LIBINT2_REALTYPE fp377;
fp377 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp376;
fp376 = fp377 + src5[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp375;
fp375 = inteval->oo2z[vi] * fp376;
LIBINT2_REALTYPE fp379;
LIBINT2_REALTYPE fp374;
fp374 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+6)*1+lsi)*1], fp375);
target[((hsi*78+13)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp372;
fp372 = 0.0000000000000000e+00 + src5[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp371;
fp371 = inteval->oo2z[vi] * fp372;
LIBINT2_REALTYPE fp373;
LIBINT2_REALTYPE fp370;
fp370 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+5)*1+lsi)*1], fp371);
target[((hsi*78+14)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp368;
LIBINT2_REALTYPE fp367;
fp367 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp366;
fp366 = fp367 + src5[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp365;
fp365 = inteval->oo2z[vi] * fp366;
LIBINT2_REALTYPE fp369;
LIBINT2_REALTYPE fp364;
fp364 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+15)*1+lsi)*1], fp365);
target[((hsi*78+15)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp362;
LIBINT2_REALTYPE fp361;
fp361 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp360;
fp360 = fp361 + src5[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp359;
fp359 = inteval->oo2z[vi] * fp360;
LIBINT2_REALTYPE fp363;
LIBINT2_REALTYPE fp358;
fp358 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+16)*1+lsi)*1], fp359);
target[((hsi*78+16)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp356;
LIBINT2_REALTYPE fp355;
fp355 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*55+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp354;
fp354 = fp355 + src5[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp353;
fp353 = inteval->oo2z[vi] * fp354;
LIBINT2_REALTYPE fp357;
LIBINT2_REALTYPE fp352;
fp352 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+17)*1+lsi)*1], fp353);
target[((hsi*78+17)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp348;
fp348 = 5.0000000000000000e-01 * src4[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
LIBINT2_REALTYPE fp349;
fp349 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp347;
fp347 = fp349 + fp348;
LIBINT2_REALTYPE fp346;
fp346 = inteval->oo2z[vi] * fp347;
LIBINT2_REALTYPE fp351;
LIBINT2_REALTYPE fp345;
fp345 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*66+9)*1+lsi)*1], fp346);
target[((hsi*78+18)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp343;
LIBINT2_REALTYPE fp342;
fp342 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp341;
fp341 = fp342 + src5[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = inteval->oo2z[vi] * fp341;
LIBINT2_REALTYPE fp344;
LIBINT2_REALTYPE fp339;
fp339 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+10)*1+lsi)*1], fp340);
target[((hsi*78+19)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp395;
LIBINT2_REALTYPE fp394;
fp394 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp393;
fp393 = fp394 + src5[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp392;
fp392 = inteval->oo2z[vi] * fp393;
LIBINT2_REALTYPE fp396;
LIBINT2_REALTYPE fp391;
fp391 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+4)*1+lsi)*1], fp392);
target[((hsi*78+10)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+49)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp102;
fp102 = fp103 + src5[((hsi*66+57)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->oo2z[vi] * fp102;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+57)*1+lsi)*1], fp101);
target[((hsi*78+60)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+52)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp96;
fp96 = fp97 + src5[((hsi*66+58)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = inteval->oo2z[vi] * fp96;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+58)*1+lsi)*1], fp95);
target[((hsi*78+61)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+53)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp90;
fp90 = fp91 + src5[((hsi*66+59)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+59)*1+lsi)*1], fp89);
target[((hsi*78+62)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src5[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->oo2z[vi] * fp86;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+45)*1+lsi)*1], fp85);
target[((hsi*78+63)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+33)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp80;
fp80 = fp81 + src5[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+48)*1+lsi)*1], fp79);
target[((hsi*78+64)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+30)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp74;
fp74 = fp75 + src5[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->oo2z[vi] * fp74;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+47)*1+lsi)*1], fp73);
target[((hsi*78+65)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+34)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp68;
fp68 = fp69 + src5[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2z[vi] * fp68;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+50)*1+lsi)*1], fp67);
target[((hsi*78+66)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+32)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp62;
fp62 = fp63 + src5[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+49)*1+lsi)*1], fp61);
target[((hsi*78+67)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp228;
LIBINT2_REALTYPE fp227;
fp227 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp226;
fp226 = fp227 + src5[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = inteval->oo2z[vi] * fp226;
LIBINT2_REALTYPE fp229;
LIBINT2_REALTYPE fp224;
fp224 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+24)*1+lsi)*1], fp225);
target[((hsi*78+39)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+35)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp50;
fp50 = fp51 + src5[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+52)*1+lsi)*1], fp49);
target[((hsi*78+69)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+39)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp44;
fp44 = fp45 + src5[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+55)*1+lsi)*1], fp43);
target[((hsi*78+70)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+37)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp38;
fp38 = fp39 + src5[((hsi*66+54)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+54)*1+lsi)*1], fp37);
target[((hsi*78+71)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+48)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src5[((hsi*66+61)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+61)*1+lsi)*1], fp31);
target[((hsi*78+72)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+51)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src5[((hsi*66+63)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+63)*1+lsi)*1], fp25);
target[((hsi*78+73)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+54)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src5[((hsi*66+65)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+65)*1+lsi)*1], fp19);
target[((hsi*78+74)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+45)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src5[((hsi*66+60)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+60)*1+lsi)*1], fp13);
target[((hsi*78+75)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+47)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src5[((hsi*66+62)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+62)*1+lsi)*1], fp7);
target[((hsi*78+76)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+50)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src5[((hsi*66+64)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+64)*1+lsi)*1], fp1);
target[((hsi*78+77)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+38)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp56;
fp56 = fp57 + src5[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->oo2z[vi] * fp56;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+53)*1+lsi)*1], fp55);
target[((hsi*78+68)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp222;
LIBINT2_REALTYPE fp221;
fp221 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+40)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp220;
fp220 = fp221 + src5[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = inteval->oo2z[vi] * fp220;
LIBINT2_REALTYPE fp223;
LIBINT2_REALTYPE fp218;
fp218 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+40)*1+lsi)*1], fp219);
target[((hsi*78+40)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+41)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp214;
fp214 = fp215 + src5[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = inteval->oo2z[vi] * fp214;
LIBINT2_REALTYPE fp217;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+41)*1+lsi)*1], fp213);
target[((hsi*78+41)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp210;
LIBINT2_REALTYPE fp209;
fp209 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+42)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp208;
fp208 = fp209 + src5[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = inteval->oo2z[vi] * fp208;
LIBINT2_REALTYPE fp211;
LIBINT2_REALTYPE fp206;
fp206 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+42)*1+lsi)*1], fp207);
target[((hsi*78+42)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp204;
LIBINT2_REALTYPE fp203;
fp203 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+43)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp202;
fp202 = fp203 + src5[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = inteval->oo2z[vi] * fp202;
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp200;
fp200 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+43)*1+lsi)*1], fp201);
target[((hsi*78+43)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp198;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*55+44)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp196;
fp196 = fp197 + src5[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->oo2z[vi] * fp196;
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp194;
fp194 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+44)*1+lsi)*1], fp195);
target[((hsi*78+44)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp190;
fp190 = 5.0000000000000000e-01 * src4[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
LIBINT2_REALTYPE fp191;
fp191 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp189;
fp189 = fp191 + fp190;
LIBINT2_REALTYPE fp188;
fp188 = inteval->oo2z[vi] * fp189;
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*66+30)*1+lsi)*1], fp188);
target[((hsi*78+45)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp183;
fp183 = fp184 + src5[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = inteval->oo2z[vi] * fp183;
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp181;
fp181 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+31)*1+lsi)*1], fp182);
target[((hsi*78+46)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp179;
fp179 = 0.0000000000000000e+00 + src5[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = inteval->oo2z[vi] * fp179;
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+30)*1+lsi)*1], fp178);
target[((hsi*78+47)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp173;
fp173 = fp174 + src5[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->oo2z[vi] * fp173;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+33)*1+lsi)*1], fp172);
target[((hsi*78+48)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+46)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp108;
fp108 = fp109 + src5[((hsi*66+56)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->oo2z[vi] * fp108;
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+56)*1+lsi)*1], fp107);
target[((hsi*78+59)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp161;
fp161 = fp162 + src5[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = inteval->oo2z[vi] * fp161;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+34)*1+lsi)*1], fp160);
target[((hsi*78+50)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp155;
fp155 = 5.0000000000000000e-01 * src4[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+30)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
LIBINT2_REALTYPE fp153;
fp153 = inteval->oo2z[vi] * fp154;
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*66+45)*1+lsi)*1], fp153);
target[((hsi*78+51)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*55+23)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp148;
fp148 = fp149 + src5[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->oo2z[vi] * fp148;
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+36)*1+lsi)*1], fp147);
target[((hsi*78+52)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + src5[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->oo2z[vi] * fp144;
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+35)*1+lsi)*1], fp143);
target[((hsi*78+53)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*55+25)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp138;
fp138 = fp139 + src5[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->oo2z[vi] * fp138;
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+38)*1+lsi)*1], fp137);
target[((hsi*78+54)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp132;
fp132 = fp133 + src5[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->oo2z[vi] * fp132;
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+37)*1+lsi)*1], fp131);
target[((hsi*78+55)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*55+24)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp126;
fp126 = fp127 + src5[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->oo2z[vi] * fp126;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+39)*1+lsi)*1], fp125);
target[((hsi*78+56)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+31)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp120;
fp120 = fp121 + src5[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->oo2z[vi] * fp120;
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+46)*1+lsi)*1], fp119);
target[((hsi*78+57)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*55+36)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp114;
fp114 = fp115 + src5[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->oo2z[vi] * fp114;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+51)*1+lsi)*1], fp113);
target[((hsi*78+58)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*55+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp167;
fp167 = fp168 + src5[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->oo2z[vi] * fp167;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*66+32)*1+lsi)*1], fp166);
target[((hsi*78+49)*1+lsi)*1] = fp165;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 458 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif