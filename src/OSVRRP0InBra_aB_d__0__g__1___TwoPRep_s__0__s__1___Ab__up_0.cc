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
void OSVRRP0InBra_aB_d__0__g__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp393;
fp393 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp297;
fp297 = fp393 * src4[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp474;
fp474 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp397;
LIBINT2_REALTYPE fp396;
fp396 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+9)*1+lsi)*1], src2[((hsi*15+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp395;
fp395 = fp474 * fp396;
LIBINT2_REALTYPE fp300;
fp300 = inteval->WP_y[vi] * src1[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
LIBINT2_REALTYPE fp299;
fp299 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+24)*1+lsi)*1], fp300);
LIBINT2_REALTYPE fp298;
fp298 = fp299 - fp395;
LIBINT2_REALTYPE fp296;
fp296 = fp298 + fp297;
target[((hsi*90+24)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp387;
LIBINT2_REALTYPE fp386;
fp386 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+10)*1+lsi)*1], src2[((hsi*15+10)*1+lsi)*1]);
LIBINT2_REALTYPE fp385;
fp385 = fp474 * fp386;
LIBINT2_REALTYPE fp294;
fp294 = inteval->WP_y[vi] * src1[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
LIBINT2_REALTYPE fp293;
fp293 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+25)*1+lsi)*1], fp294);
LIBINT2_REALTYPE fp292;
fp292 = fp293 - fp385;
target[((hsi*90+25)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp287;
fp287 = fp393 * src4[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp378;
LIBINT2_REALTYPE fp377;
fp377 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+11)*1+lsi)*1], src2[((hsi*15+11)*1+lsi)*1]);
LIBINT2_REALTYPE fp376;
fp376 = fp474 * fp377;
LIBINT2_REALTYPE fp290;
fp290 = inteval->WP_y[vi] * src1[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
LIBINT2_REALTYPE fp289;
fp289 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+26)*1+lsi)*1], fp290);
LIBINT2_REALTYPE fp288;
fp288 = fp289 - fp376;
LIBINT2_REALTYPE fp286;
fp286 = fp288 + fp287;
target[((hsi*90+26)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp426;
fp426 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp281;
fp281 = fp426 * src4[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp371;
LIBINT2_REALTYPE fp370;
fp370 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+12)*1+lsi)*1], src2[((hsi*15+12)*1+lsi)*1]);
LIBINT2_REALTYPE fp369;
fp369 = fp474 * fp370;
LIBINT2_REALTYPE fp284;
fp284 = inteval->WP_y[vi] * src1[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
LIBINT2_REALTYPE fp283;
fp283 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+27)*1+lsi)*1], fp284);
LIBINT2_REALTYPE fp282;
fp282 = fp283 - fp369;
LIBINT2_REALTYPE fp280;
fp280 = fp282 + fp281;
target[((hsi*90+27)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp275;
fp275 = fp393 * src4[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp362;
LIBINT2_REALTYPE fp361;
fp361 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+13)*1+lsi)*1], src2[((hsi*15+13)*1+lsi)*1]);
LIBINT2_REALTYPE fp360;
fp360 = fp474 * fp361;
LIBINT2_REALTYPE fp278;
fp278 = inteval->WP_y[vi] * src1[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
LIBINT2_REALTYPE fp277;
fp277 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+28)*1+lsi)*1], fp278);
LIBINT2_REALTYPE fp276;
fp276 = fp277 - fp360;
LIBINT2_REALTYPE fp274;
fp274 = fp276 + fp275;
target[((hsi*90+28)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp269;
fp269 = fp426 * src4[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp353;
LIBINT2_REALTYPE fp352;
fp352 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+14)*1+lsi)*1], src2[((hsi*15+14)*1+lsi)*1]);
LIBINT2_REALTYPE fp351;
fp351 = fp474 * fp352;
LIBINT2_REALTYPE fp272;
fp272 = inteval->WP_y[vi] * src1[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
LIBINT2_REALTYPE fp271;
fp271 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+29)*1+lsi)*1], fp272);
LIBINT2_REALTYPE fp270;
fp270 = fp271 - fp351;
LIBINT2_REALTYPE fp268;
fp268 = fp270 + fp269;
target[((hsi*90+29)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp473;
LIBINT2_REALTYPE fp472;
fp472 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+0)*1+lsi)*1], src2[((hsi*15+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp471;
fp471 = fp474 * fp472;
LIBINT2_REALTYPE fp266;
fp266 = inteval->WP_z[vi] * src1[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
LIBINT2_REALTYPE fp265;
fp265 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+30)*1+lsi)*1], fp266);
LIBINT2_REALTYPE fp264;
fp264 = fp265 - fp471;
target[((hsi*90+30)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp463;
LIBINT2_REALTYPE fp462;
fp462 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+1)*1+lsi)*1], src2[((hsi*15+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp461;
fp461 = fp474 * fp462;
LIBINT2_REALTYPE fp262;
fp262 = inteval->WP_z[vi] * src1[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
LIBINT2_REALTYPE fp261;
fp261 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+31)*1+lsi)*1], fp262);
LIBINT2_REALTYPE fp260;
fp260 = fp261 - fp461;
target[((hsi*90+31)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp469;
fp469 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp255;
fp255 = fp469 * src4[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp456;
LIBINT2_REALTYPE fp455;
fp455 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+2)*1+lsi)*1], src2[((hsi*15+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp454;
fp454 = fp474 * fp455;
LIBINT2_REALTYPE fp258;
fp258 = inteval->WP_z[vi] * src1[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
LIBINT2_REALTYPE fp257;
fp257 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+32)*1+lsi)*1], fp258);
LIBINT2_REALTYPE fp256;
fp256 = fp257 - fp454;
LIBINT2_REALTYPE fp254;
fp254 = fp256 + fp255;
target[((hsi*90+32)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp449;
LIBINT2_REALTYPE fp448;
fp448 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+3)*1+lsi)*1], src2[((hsi*15+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp447;
fp447 = fp474 * fp448;
LIBINT2_REALTYPE fp252;
fp252 = inteval->WP_z[vi] * src1[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
LIBINT2_REALTYPE fp251;
fp251 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+33)*1+lsi)*1], fp252);
LIBINT2_REALTYPE fp250;
fp250 = fp251 - fp447;
target[((hsi*90+33)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp468;
fp468 = fp469 * src4[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp476;
fp476 = inteval->WP_x[vi] * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp477;
LIBINT2_REALTYPE fp475;
fp475 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+0)*1+lsi)*1], fp476);
LIBINT2_REALTYPE fp470;
fp470 = fp475 - fp471;
LIBINT2_REALTYPE fp467;
fp467 = fp470 + fp468;
target[((hsi*90+0)*1+lsi)*1] = fp467;
LIBINT2_REALTYPE fp430;
LIBINT2_REALTYPE fp429;
fp429 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+5)*1+lsi)*1], src2[((hsi*15+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp428;
fp428 = fp474 * fp429;
LIBINT2_REALTYPE fp242;
fp242 = inteval->WP_z[vi] * src1[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
LIBINT2_REALTYPE fp241;
fp241 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+35)*1+lsi)*1], fp242);
LIBINT2_REALTYPE fp240;
fp240 = fp241 - fp428;
target[((hsi*90+35)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp235;
fp235 = fp426 * src4[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp420;
LIBINT2_REALTYPE fp419;
fp419 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+6)*1+lsi)*1], src2[((hsi*15+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp418;
fp418 = fp474 * fp419;
LIBINT2_REALTYPE fp238;
fp238 = inteval->WP_z[vi] * src1[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
LIBINT2_REALTYPE fp237;
fp237 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+36)*1+lsi)*1], fp238);
LIBINT2_REALTYPE fp236;
fp236 = fp237 - fp418;
LIBINT2_REALTYPE fp234;
fp234 = fp236 + fp235;
target[((hsi*90+36)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp445;
fp445 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp229;
fp229 = fp445 * src4[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp413;
LIBINT2_REALTYPE fp412;
fp412 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+7)*1+lsi)*1], src2[((hsi*15+7)*1+lsi)*1]);
LIBINT2_REALTYPE fp411;
fp411 = fp474 * fp412;
LIBINT2_REALTYPE fp232;
fp232 = inteval->WP_z[vi] * src1[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
LIBINT2_REALTYPE fp231;
fp231 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+37)*1+lsi)*1], fp232);
LIBINT2_REALTYPE fp230;
fp230 = fp231 - fp411;
LIBINT2_REALTYPE fp228;
fp228 = fp230 + fp229;
target[((hsi*90+37)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp223;
fp223 = fp445 * src4[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp404;
LIBINT2_REALTYPE fp403;
fp403 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+8)*1+lsi)*1], src2[((hsi*15+8)*1+lsi)*1]);
LIBINT2_REALTYPE fp402;
fp402 = fp474 * fp403;
LIBINT2_REALTYPE fp226;
fp226 = inteval->WP_z[vi] * src1[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
LIBINT2_REALTYPE fp225;
fp225 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+38)*1+lsi)*1], fp226);
LIBINT2_REALTYPE fp224;
fp224 = fp225 - fp402;
LIBINT2_REALTYPE fp222;
fp222 = fp224 + fp223;
target[((hsi*90+38)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp220;
fp220 = inteval->WP_z[vi] * src1[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
LIBINT2_REALTYPE fp219;
fp219 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+39)*1+lsi)*1], fp220);
LIBINT2_REALTYPE fp218;
fp218 = fp219 - fp395;
target[((hsi*90+39)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp213;
fp213 = fp393 * src4[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = inteval->WP_z[vi] * src1[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+40)*1+lsi)*1], fp216);
LIBINT2_REALTYPE fp214;
fp214 = fp215 - fp385;
LIBINT2_REALTYPE fp212;
fp212 = fp214 + fp213;
target[((hsi*90+40)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp207;
fp207 = fp393 * src4[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = inteval->WP_z[vi] * src1[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
LIBINT2_REALTYPE fp209;
fp209 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+41)*1+lsi)*1], fp210);
LIBINT2_REALTYPE fp208;
fp208 = fp209 - fp376;
LIBINT2_REALTYPE fp206;
fp206 = fp208 + fp207;
target[((hsi*90+41)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp201;
fp201 = fp426 * src4[((hsi*30+23)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = inteval->WP_z[vi] * src1[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp203;
fp203 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+42)*1+lsi)*1], fp204);
LIBINT2_REALTYPE fp202;
fp202 = fp203 - fp369;
LIBINT2_REALTYPE fp200;
fp200 = fp202 + fp201;
target[((hsi*90+42)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp195;
fp195 = fp426 * src4[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = inteval->WP_z[vi] * src1[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+43)*1+lsi)*1], fp198);
LIBINT2_REALTYPE fp196;
fp196 = fp197 - fp360;
LIBINT2_REALTYPE fp194;
fp194 = fp196 + fp195;
target[((hsi*90+43)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp189;
fp189 = fp393 * src4[((hsi*30+29)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = inteval->WP_z[vi] * src1[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp191;
fp191 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+44)*1+lsi)*1], fp192);
LIBINT2_REALTYPE fp190;
fp190 = fp191 - fp351;
LIBINT2_REALTYPE fp188;
fp188 = fp190 + fp189;
target[((hsi*90+44)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp245;
fp245 = fp426 * src4[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp439;
LIBINT2_REALTYPE fp438;
fp438 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*15+4)*1+lsi)*1], src2[((hsi*15+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp437;
fp437 = fp474 * fp438;
LIBINT2_REALTYPE fp248;
fp248 = inteval->WP_z[vi] * src1[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp247;
fp247 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+34)*1+lsi)*1], fp248);
LIBINT2_REALTYPE fp246;
fp246 = fp247 - fp437;
LIBINT2_REALTYPE fp244;
fp244 = fp246 + fp245;
target[((hsi*90+34)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp465;
fp465 = inteval->WP_x[vi] * src1[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp466;
LIBINT2_REALTYPE fp464;
fp464 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+1)*1+lsi)*1], fp465);
LIBINT2_REALTYPE fp460;
fp460 = fp464 - fp461;
target[((hsi*90+1)*1+lsi)*1] = fp460;
LIBINT2_REALTYPE fp458;
fp458 = inteval->WP_x[vi] * src1[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp459;
LIBINT2_REALTYPE fp457;
fp457 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+2)*1+lsi)*1], fp458);
LIBINT2_REALTYPE fp453;
fp453 = fp457 - fp454;
target[((hsi*90+2)*1+lsi)*1] = fp453;
LIBINT2_REALTYPE fp444;
fp444 = fp445 * src4[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp451;
fp451 = inteval->WP_x[vi] * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp452;
LIBINT2_REALTYPE fp450;
fp450 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+3)*1+lsi)*1], fp451);
LIBINT2_REALTYPE fp446;
fp446 = fp450 - fp447;
LIBINT2_REALTYPE fp443;
fp443 = fp446 + fp444;
target[((hsi*90+3)*1+lsi)*1] = fp443;
LIBINT2_REALTYPE fp435;
fp435 = fp445 * src4[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp441;
fp441 = inteval->WP_x[vi] * src1[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp442;
LIBINT2_REALTYPE fp440;
fp440 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+4)*1+lsi)*1], fp441);
LIBINT2_REALTYPE fp436;
fp436 = fp440 - fp437;
LIBINT2_REALTYPE fp434;
fp434 = fp436 + fp435;
target[((hsi*90+4)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp425;
fp425 = fp426 * src4[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp432;
fp432 = inteval->WP_x[vi] * src1[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp433;
LIBINT2_REALTYPE fp431;
fp431 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+5)*1+lsi)*1], fp432);
LIBINT2_REALTYPE fp427;
fp427 = fp431 - fp428;
LIBINT2_REALTYPE fp424;
fp424 = fp427 + fp425;
target[((hsi*90+5)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp422;
fp422 = inteval->WP_x[vi] * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp423;
LIBINT2_REALTYPE fp421;
fp421 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+6)*1+lsi)*1], fp422);
LIBINT2_REALTYPE fp417;
fp417 = fp421 - fp418;
target[((hsi*90+6)*1+lsi)*1] = fp417;
LIBINT2_REALTYPE fp409;
fp409 = fp426 * src4[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp415;
fp415 = inteval->WP_x[vi] * src1[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp416;
LIBINT2_REALTYPE fp414;
fp414 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+7)*1+lsi)*1], fp415);
LIBINT2_REALTYPE fp410;
fp410 = fp414 - fp411;
LIBINT2_REALTYPE fp408;
fp408 = fp410 + fp409;
target[((hsi*90+7)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp406;
fp406 = inteval->WP_x[vi] * src1[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp407;
LIBINT2_REALTYPE fp405;
fp405 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+8)*1+lsi)*1], fp406);
LIBINT2_REALTYPE fp401;
fp401 = fp405 - fp402;
target[((hsi*90+8)*1+lsi)*1] = fp401;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * src4[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp399;
fp399 = inteval->WP_x[vi] * src1[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp400;
LIBINT2_REALTYPE fp398;
fp398 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+9)*1+lsi)*1], fp399);
LIBINT2_REALTYPE fp394;
fp394 = fp398 - fp395;
LIBINT2_REALTYPE fp391;
fp391 = fp394 + fp392;
target[((hsi*90+9)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp383;
fp383 = fp393 * src4[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp389;
fp389 = inteval->WP_x[vi] * src1[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp390;
LIBINT2_REALTYPE fp388;
fp388 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+10)*1+lsi)*1], fp389);
LIBINT2_REALTYPE fp384;
fp384 = fp388 - fp385;
LIBINT2_REALTYPE fp382;
fp382 = fp384 + fp383;
target[((hsi*90+10)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp303;
fp303 = fp426 * src4[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = inteval->WP_y[vi] * src1[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
LIBINT2_REALTYPE fp305;
fp305 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+23)*1+lsi)*1], fp306);
LIBINT2_REALTYPE fp304;
fp304 = fp305 - fp402;
LIBINT2_REALTYPE fp302;
fp302 = fp304 + fp303;
target[((hsi*90+23)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp367;
fp367 = fp393 * src4[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp373;
fp373 = inteval->WP_x[vi] * src1[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp374;
LIBINT2_REALTYPE fp372;
fp372 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+12)*1+lsi)*1], fp373);
LIBINT2_REALTYPE fp368;
fp368 = fp372 - fp369;
LIBINT2_REALTYPE fp366;
fp366 = fp368 + fp367;
target[((hsi*90+12)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp358;
fp358 = fp426 * src4[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = inteval->WP_x[vi] * src1[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp365;
LIBINT2_REALTYPE fp363;
fp363 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+13)*1+lsi)*1], fp364);
LIBINT2_REALTYPE fp359;
fp359 = fp363 - fp360;
LIBINT2_REALTYPE fp357;
fp357 = fp359 + fp358;
target[((hsi*90+13)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp349;
fp349 = fp426 * src4[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp355;
fp355 = inteval->WP_x[vi] * src1[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
LIBINT2_REALTYPE fp354;
fp354 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+14)*1+lsi)*1], fp355);
LIBINT2_REALTYPE fp350;
fp350 = fp354 - fp351;
LIBINT2_REALTYPE fp348;
fp348 = fp350 + fp349;
target[((hsi*90+14)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp346;
fp346 = inteval->WP_y[vi] * src1[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp347;
LIBINT2_REALTYPE fp345;
fp345 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+15)*1+lsi)*1], fp346);
LIBINT2_REALTYPE fp344;
fp344 = fp345 - fp471;
target[((hsi*90+15)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp339;
fp339 = fp469 * src4[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = inteval->WP_y[vi] * src1[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
LIBINT2_REALTYPE fp341;
fp341 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+16)*1+lsi)*1], fp342);
LIBINT2_REALTYPE fp340;
fp340 = fp341 - fp461;
LIBINT2_REALTYPE fp338;
fp338 = fp340 + fp339;
target[((hsi*90+16)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp336;
fp336 = inteval->WP_y[vi] * src1[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
LIBINT2_REALTYPE fp335;
fp335 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+17)*1+lsi)*1], fp336);
LIBINT2_REALTYPE fp334;
fp334 = fp335 - fp454;
target[((hsi*90+17)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp329;
fp329 = fp426 * src4[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp332;
fp332 = inteval->WP_y[vi] * src1[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
LIBINT2_REALTYPE fp331;
fp331 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+18)*1+lsi)*1], fp332);
LIBINT2_REALTYPE fp330;
fp330 = fp331 - fp447;
LIBINT2_REALTYPE fp328;
fp328 = fp330 + fp329;
target[((hsi*90+18)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp326;
fp326 = inteval->WP_y[vi] * src1[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
LIBINT2_REALTYPE fp325;
fp325 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+19)*1+lsi)*1], fp326);
LIBINT2_REALTYPE fp324;
fp324 = fp325 - fp437;
target[((hsi*90+19)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp319;
fp319 = fp445 * src4[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = inteval->WP_y[vi] * src1[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
LIBINT2_REALTYPE fp321;
fp321 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+20)*1+lsi)*1], fp322);
LIBINT2_REALTYPE fp320;
fp320 = fp321 - fp428;
LIBINT2_REALTYPE fp318;
fp318 = fp320 + fp319;
target[((hsi*90+20)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp313;
fp313 = fp445 * src4[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = inteval->WP_y[vi] * src1[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
LIBINT2_REALTYPE fp315;
fp315 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+21)*1+lsi)*1], fp316);
LIBINT2_REALTYPE fp314;
fp314 = fp315 - fp418;
LIBINT2_REALTYPE fp312;
fp312 = fp314 + fp313;
target[((hsi*90+21)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp310;
fp310 = inteval->WP_y[vi] * src1[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
LIBINT2_REALTYPE fp309;
fp309 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+22)*1+lsi)*1], fp310);
LIBINT2_REALTYPE fp308;
fp308 = fp309 - fp411;
target[((hsi*90+22)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp380;
fp380 = inteval->WP_x[vi] * src1[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp381;
LIBINT2_REALTYPE fp379;
fp379 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+11)*1+lsi)*1], fp380);
LIBINT2_REALTYPE fp375;
fp375 = fp379 - fp376;
target[((hsi*90+11)*1+lsi)*1] = fp375;
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_z[vi] * src1[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+9)*1+lsi)*1], fp88);
target[((hsi*90+69)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp83;
fp83 = fp393 * src4[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_z[vi] * src1[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+10)*1+lsi)*1], fp85);
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
target[((hsi*90+70)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp78;
fp78 = fp393 * src4[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->WP_z[vi] * src1[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+11)*1+lsi)*1], fp80);
LIBINT2_REALTYPE fp77;
fp77 = fp79 + fp78;
target[((hsi*90+71)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp73;
fp73 = fp426 * src4[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_z[vi] * src1[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+12)*1+lsi)*1], fp75);
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
target[((hsi*90+72)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp68;
fp68 = fp426 * src4[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_z[vi] * src1[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+13)*1+lsi)*1], fp70);
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
target[((hsi*90+73)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WP_z[vi] * src1[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+14)*1+lsi)*1], fp65);
LIBINT2_REALTYPE fp63;
fp63 = fp64 + fp367;
target[((hsi*90+74)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp61;
fp61 = inteval->WP_z[vi] * src1[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+15)*1+lsi)*1], fp61);
target[((hsi*90+75)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_z[vi] * src1[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+16)*1+lsi)*1], fp58);
target[((hsi*90+76)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp53;
fp53 = fp469 * src4[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_z[vi] * src1[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+17)*1+lsi)*1], fp55);
LIBINT2_REALTYPE fp52;
fp52 = fp54 + fp53;
target[((hsi*90+77)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_z[vi] * src1[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+18)*1+lsi)*1], fp50);
target[((hsi*90+78)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp186;
fp186 = inteval->WP_y[vi] * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp185;
fp185 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+0)*1+lsi)*1], fp186);
target[((hsi*90+45)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_z[vi] * src1[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+20)*1+lsi)*1], fp43);
target[((hsi*90+80)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp38;
fp38 = fp426 * src4[((hsi*30+11)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_z[vi] * src1[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+21)*1+lsi)*1], fp40);
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
target[((hsi*90+81)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp33;
fp33 = fp445 * src4[((hsi*30+17)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_z[vi] * src1[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+22)*1+lsi)*1], fp35);
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
target[((hsi*90+82)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp28;
fp28 = fp445 * src4[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_z[vi] * src1[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+23)*1+lsi)*1], fp30);
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
target[((hsi*90+83)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp25;
fp25 = inteval->WP_z[vi] * src1[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+24)*1+lsi)*1], fp25);
target[((hsi*90+84)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp20;
fp20 = fp393 * src4[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->WP_z[vi] * src1[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+25)*1+lsi)*1], fp22);
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
target[((hsi*90+85)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp15;
fp15 = fp393 * src4[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * src1[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+26)*1+lsi)*1], fp17);
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
target[((hsi*90+86)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp10;
fp10 = fp426 * src4[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->WP_z[vi] * src1[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+27)*1+lsi)*1], fp12);
LIBINT2_REALTYPE fp9;
fp9 = fp11 + fp10;
target[((hsi*90+87)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp5;
fp5 = fp426 * src4[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->WP_z[vi] * src1[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+28)*1+lsi)*1], fp7);
LIBINT2_REALTYPE fp4;
fp4 = fp6 + fp5;
target[((hsi*90+88)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp2;
fp2 = inteval->WP_z[vi] * src1[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp1;
fp1 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+29)*1+lsi)*1], fp2);
LIBINT2_REALTYPE fp0;
fp0 = fp1 + fp275;
target[((hsi*90+89)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_z[vi] * src1[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+19)*1+lsi)*1], fp47);
LIBINT2_REALTYPE fp45;
fp45 = fp46 + fp329;
target[((hsi*90+79)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp181;
fp181 = fp469 * src4[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = inteval->WP_y[vi] * src1[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+1)*1+lsi)*1], fp183);
LIBINT2_REALTYPE fp180;
fp180 = fp182 + fp181;
target[((hsi*90+46)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp178;
fp178 = inteval->WP_y[vi] * src1[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+2)*1+lsi)*1], fp178);
target[((hsi*90+47)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp173;
fp173 = fp426 * src4[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = inteval->WP_y[vi] * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+3)*1+lsi)*1], fp175);
LIBINT2_REALTYPE fp172;
fp172 = fp174 + fp173;
target[((hsi*90+48)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp170;
fp170 = inteval->WP_y[vi] * src1[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+4)*1+lsi)*1], fp170);
target[((hsi*90+49)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp165;
fp165 = fp445 * src4[((hsi*30+5)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = inteval->WP_y[vi] * src1[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+5)*1+lsi)*1], fp167);
LIBINT2_REALTYPE fp164;
fp164 = fp166 + fp165;
target[((hsi*90+50)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp160;
fp160 = fp445 * src4[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = inteval->WP_y[vi] * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+6)*1+lsi)*1], fp162);
LIBINT2_REALTYPE fp159;
fp159 = fp161 + fp160;
target[((hsi*90+51)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp157;
fp157 = inteval->WP_y[vi] * src1[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+7)*1+lsi)*1], fp157);
target[((hsi*90+52)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp154;
fp154 = inteval->WP_y[vi] * src1[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+8)*1+lsi)*1], fp154);
LIBINT2_REALTYPE fp152;
fp152 = fp153 + fp409;
target[((hsi*90+53)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp148;
fp148 = fp393 * src4[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = inteval->WP_y[vi] * src1[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+9)*1+lsi)*1], fp150);
LIBINT2_REALTYPE fp147;
fp147 = fp149 + fp148;
target[((hsi*90+54)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_y[vi] * src1[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+10)*1+lsi)*1], fp145);
target[((hsi*90+55)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp91;
fp91 = fp445 * src4[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_z[vi] * src1[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+8)*1+lsi)*1], fp93);
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
target[((hsi*90+68)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp135;
fp135 = fp426 * src4[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->WP_y[vi] * src1[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+12)*1+lsi)*1], fp137);
LIBINT2_REALTYPE fp134;
fp134 = fp136 + fp135;
target[((hsi*90+57)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp132;
fp132 = inteval->WP_y[vi] * src1[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+13)*1+lsi)*1], fp132);
LIBINT2_REALTYPE fp130;
fp130 = fp131 + fp367;
target[((hsi*90+58)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp126;
fp126 = fp426 * src4[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = inteval->WP_y[vi] * src1[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+14)*1+lsi)*1], fp128);
LIBINT2_REALTYPE fp125;
fp125 = fp127 + fp126;
target[((hsi*90+59)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_z[vi] * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+0)*1+lsi)*1], fp123);
target[((hsi*90+60)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp120;
fp120 = inteval->WP_z[vi] * src1[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+1)*1+lsi)*1], fp120);
target[((hsi*90+61)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp115;
fp115 = fp469 * src4[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = inteval->WP_z[vi] * src1[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+2)*1+lsi)*1], fp117);
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
target[((hsi*90+62)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp112;
fp112 = inteval->WP_z[vi] * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+3)*1+lsi)*1], fp112);
target[((hsi*90+63)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp109;
fp109 = inteval->WP_z[vi] * src1[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+4)*1+lsi)*1], fp109);
LIBINT2_REALTYPE fp107;
fp107 = fp108 + fp173;
target[((hsi*90+64)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_z[vi] * src1[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+5)*1+lsi)*1], fp105);
target[((hsi*90+65)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp102;
fp102 = inteval->WP_z[vi] * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+6)*1+lsi)*1], fp102);
LIBINT2_REALTYPE fp100;
fp100 = fp101 + fp425;
target[((hsi*90+66)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp96;
fp96 = fp445 * src4[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_z[vi] * src1[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+7)*1+lsi)*1], fp98);
LIBINT2_REALTYPE fp95;
fp95 = fp97 + fp96;
target[((hsi*90+67)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp140;
fp140 = fp393 * src4[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = inteval->WP_y[vi] * src1[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+11)*1+lsi)*1], fp142);
LIBINT2_REALTYPE fp139;
fp139 = fp141 + fp140;
target[((hsi*90+56)*1+lsi)*1] = fp139;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 478 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif