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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__ps__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp192;
fp192 = 0.0000000000000000e+00 + src2[((hsi*55+18)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = inteval->oo2z[vi] * fp192;
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+18)*1+lsi)*1], fp191);
target[((hsi*66+32)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp198;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp196;
fp196 = fp197 + src2[((hsi*55+19)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->oo2z[vi] * fp196;
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp194;
fp194 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+19)*1+lsi)*1], fp195);
target[((hsi*66+31)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp202;
fp202 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp201;
fp201 = inteval->oo2z[vi] * fp202;
LIBINT2_REALTYPE fp204;
LIBINT2_REALTYPE fp200;
fp200 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+18)*1+lsi)*1], fp201);
target[((hsi*66+30)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp209;
LIBINT2_REALTYPE fp208;
fp208 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+29)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp207;
fp207 = fp208 + src2[((hsi*55+29)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = inteval->oo2z[vi] * fp207;
LIBINT2_REALTYPE fp210;
LIBINT2_REALTYPE fp205;
fp205 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+29)*1+lsi)*1], fp206);
target[((hsi*66+29)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp215;
LIBINT2_REALTYPE fp214;
fp214 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp213;
fp213 = fp214 + src2[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = inteval->oo2z[vi] * fp213;
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp211;
fp211 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+28)*1+lsi)*1], fp212);
target[((hsi*66+28)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp221;
LIBINT2_REALTYPE fp220;
fp220 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+27)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp219;
fp219 = fp220 + src2[((hsi*55+27)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = inteval->oo2z[vi] * fp219;
LIBINT2_REALTYPE fp222;
LIBINT2_REALTYPE fp217;
fp217 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+27)*1+lsi)*1], fp218);
target[((hsi*66+27)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp227;
LIBINT2_REALTYPE fp226;
fp226 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+26)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp225;
fp225 = fp226 + src2[((hsi*55+26)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = inteval->oo2z[vi] * fp225;
LIBINT2_REALTYPE fp228;
LIBINT2_REALTYPE fp223;
fp223 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+26)*1+lsi)*1], fp224);
target[((hsi*66+26)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp233;
LIBINT2_REALTYPE fp232;
fp232 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp231;
fp231 = fp232 + src2[((hsi*55+14)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = inteval->oo2z[vi] * fp231;
LIBINT2_REALTYPE fp234;
LIBINT2_REALTYPE fp229;
fp229 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+14)*1+lsi)*1], fp230);
target[((hsi*66+25)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp237;
fp237 = 0.0000000000000000e+00 + src2[((hsi*55+12)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = inteval->oo2z[vi] * fp237;
LIBINT2_REALTYPE fp238;
LIBINT2_REALTYPE fp235;
fp235 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+12)*1+lsi)*1], fp236);
target[((hsi*66+24)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp243;
LIBINT2_REALTYPE fp242;
fp242 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp241;
fp241 = fp242 + src2[((hsi*55+13)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = inteval->oo2z[vi] * fp241;
LIBINT2_REALTYPE fp244;
LIBINT2_REALTYPE fp239;
fp239 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+13)*1+lsi)*1], fp240);
target[((hsi*66+23)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp248;
LIBINT2_REALTYPE fp247;
fp247 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp246;
fp246 = inteval->oo2z[vi] * fp247;
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp245;
fp245 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+22)*1+lsi)*1], fp246);
target[((hsi*66+22)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp254;
LIBINT2_REALTYPE fp253;
fp253 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp252;
fp252 = fp253 + src2[((hsi*55+11)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = inteval->oo2z[vi] * fp252;
LIBINT2_REALTYPE fp255;
LIBINT2_REALTYPE fp250;
fp250 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+11)*1+lsi)*1], fp251);
target[((hsi*66+21)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp258;
fp258 = 0.0000000000000000e+00 + src2[((hsi*55+9)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = inteval->oo2z[vi] * fp258;
LIBINT2_REALTYPE fp259;
LIBINT2_REALTYPE fp256;
fp256 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+9)*1+lsi)*1], fp257);
target[((hsi*66+20)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp264;
LIBINT2_REALTYPE fp263;
fp263 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp262;
fp262 = fp263 + src2[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = inteval->oo2z[vi] * fp262;
LIBINT2_REALTYPE fp265;
LIBINT2_REALTYPE fp260;
fp260 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+10)*1+lsi)*1], fp261);
target[((hsi*66+19)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp269;
LIBINT2_REALTYPE fp268;
fp268 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp267;
fp267 = inteval->oo2z[vi] * fp268;
LIBINT2_REALTYPE fp270;
LIBINT2_REALTYPE fp266;
fp266 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+9)*1+lsi)*1], fp267);
target[((hsi*66+18)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp359;
LIBINT2_REALTYPE fp358;
fp358 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*45+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp357;
fp357 = inteval->oo2z[vi] * fp358;
LIBINT2_REALTYPE fp360;
LIBINT2_REALTYPE fp356;
fp356 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*55+0)*1+lsi)*1], fp357);
target[((hsi*66+0)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp354;
LIBINT2_REALTYPE fp353;
fp353 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*45+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp352;
fp352 = inteval->oo2z[vi] * fp353;
LIBINT2_REALTYPE fp355;
LIBINT2_REALTYPE fp351;
fp351 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+1)*1+lsi)*1], fp352);
target[((hsi*66+1)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp349;
LIBINT2_REALTYPE fp348;
fp348 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*45+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp347;
fp347 = fp348 + src2[((hsi*55+2)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = inteval->oo2z[vi] * fp347;
LIBINT2_REALTYPE fp350;
LIBINT2_REALTYPE fp345;
fp345 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+2)*1+lsi)*1], fp346);
target[((hsi*66+2)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp344;
fp344 = inteval->PB_y[vi] * src0[((hsi*55+0)*1+lsi)*1];
target[((hsi*66+3)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp342;
fp342 = 0.0000000000000000e+00 + src2[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp341;
fp341 = inteval->oo2z[vi] * fp342;
LIBINT2_REALTYPE fp343;
LIBINT2_REALTYPE fp340;
fp340 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+0)*1+lsi)*1], fp341);
target[((hsi*66+4)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp338;
LIBINT2_REALTYPE fp337;
fp337 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*45+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp336;
fp336 = inteval->oo2z[vi] * fp337;
LIBINT2_REALTYPE fp339;
LIBINT2_REALTYPE fp335;
fp335 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+5)*1+lsi)*1], fp336);
target[((hsi*66+5)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp333;
fp333 = 0.0000000000000000e+00 + src2[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp332;
fp332 = inteval->oo2z[vi] * fp333;
LIBINT2_REALTYPE fp334;
LIBINT2_REALTYPE fp331;
fp331 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+1)*1+lsi)*1], fp332);
target[((hsi*66+6)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp329;
LIBINT2_REALTYPE fp328;
fp328 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*45+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp327;
fp327 = fp328 + src2[((hsi*55+7)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = inteval->oo2z[vi] * fp327;
LIBINT2_REALTYPE fp330;
LIBINT2_REALTYPE fp325;
fp325 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+7)*1+lsi)*1], fp326);
target[((hsi*66+7)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp275;
LIBINT2_REALTYPE fp274;
fp274 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*45+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp273;
fp273 = fp274 + src2[((hsi*55+17)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = inteval->oo2z[vi] * fp273;
LIBINT2_REALTYPE fp276;
LIBINT2_REALTYPE fp271;
fp271 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+17)*1+lsi)*1], fp272);
target[((hsi*66+17)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp317;
LIBINT2_REALTYPE fp316;
fp316 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp315;
fp315 = inteval->oo2z[vi] * fp316;
LIBINT2_REALTYPE fp318;
LIBINT2_REALTYPE fp314;
fp314 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+3)*1+lsi)*1], fp315);
target[((hsi*66+9)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp312;
LIBINT2_REALTYPE fp311;
fp311 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp310;
fp310 = fp311 + src2[((hsi*55+4)*1+lsi)*1];
LIBINT2_REALTYPE fp309;
fp309 = inteval->oo2z[vi] * fp310;
LIBINT2_REALTYPE fp313;
LIBINT2_REALTYPE fp308;
fp308 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+4)*1+lsi)*1], fp309);
target[((hsi*66+10)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp306;
fp306 = 0.0000000000000000e+00 + src2[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = inteval->oo2z[vi] * fp306;
LIBINT2_REALTYPE fp307;
LIBINT2_REALTYPE fp304;
fp304 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+3)*1+lsi)*1], fp305);
target[((hsi*66+11)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp302;
LIBINT2_REALTYPE fp301;
fp301 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*45+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp300;
fp300 = inteval->oo2z[vi] * fp301;
LIBINT2_REALTYPE fp303;
LIBINT2_REALTYPE fp299;
fp299 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+12)*1+lsi)*1], fp300);
target[((hsi*66+12)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp297;
LIBINT2_REALTYPE fp296;
fp296 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp295;
fp295 = fp296 + src2[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = inteval->oo2z[vi] * fp295;
LIBINT2_REALTYPE fp298;
LIBINT2_REALTYPE fp293;
fp293 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+6)*1+lsi)*1], fp294);
target[((hsi*66+13)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp291;
fp291 = 0.0000000000000000e+00 + src2[((hsi*55+5)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = inteval->oo2z[vi] * fp291;
LIBINT2_REALTYPE fp292;
LIBINT2_REALTYPE fp289;
fp289 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+5)*1+lsi)*1], fp290);
target[((hsi*66+14)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp287;
LIBINT2_REALTYPE fp286;
fp286 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*45+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp285;
fp285 = fp286 + src2[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = inteval->oo2z[vi] * fp285;
LIBINT2_REALTYPE fp288;
LIBINT2_REALTYPE fp283;
fp283 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+15)*1+lsi)*1], fp284);
target[((hsi*66+15)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp281;
LIBINT2_REALTYPE fp280;
fp280 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*45+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp279;
fp279 = fp280 + src2[((hsi*55+16)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = inteval->oo2z[vi] * fp279;
LIBINT2_REALTYPE fp282;
LIBINT2_REALTYPE fp277;
fp277 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+16)*1+lsi)*1], fp278);
target[((hsi*66+16)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp323;
LIBINT2_REALTYPE fp322;
fp322 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*45+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp321;
fp321 = fp322 + src2[((hsi*55+8)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = inteval->oo2z[vi] * fp321;
LIBINT2_REALTYPE fp324;
LIBINT2_REALTYPE fp319;
fp319 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+8)*1+lsi)*1], fp320);
target[((hsi*66+8)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+42)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src2[((hsi*55+54)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+54)*1+lsi)*1], fp1);
target[((hsi*66+65)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+36)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src2[((hsi*55+50)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+50)*1+lsi)*1], fp7);
target[((hsi*66+64)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+38)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src2[((hsi*55+51)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+51)*1+lsi)*1], fp13);
target[((hsi*66+63)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+32)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src2[((hsi*55+47)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+47)*1+lsi)*1], fp19);
target[((hsi*66+62)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+34)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src2[((hsi*55+48)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+48)*1+lsi)*1], fp25);
target[((hsi*66+61)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+30)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src2[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+45)*1+lsi)*1], fp31);
target[((hsi*66+60)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+44)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp38;
fp38 = fp39 + src2[((hsi*55+53)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+53)*1+lsi)*1], fp37);
target[((hsi*66+59)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+43)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp44;
fp44 = fp45 + src2[((hsi*55+52)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+52)*1+lsi)*1], fp43);
target[((hsi*66+58)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+37)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp50;
fp50 = fp51 + src2[((hsi*55+49)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+49)*1+lsi)*1], fp49);
target[((hsi*66+57)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+33)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp56;
fp56 = fp57 + src2[((hsi*55+46)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->oo2z[vi] * fp56;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+46)*1+lsi)*1], fp55);
target[((hsi*66+56)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+24)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp62;
fp62 = fp63 + src2[((hsi*55+39)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+39)*1+lsi)*1], fp61);
target[((hsi*66+55)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp68;
fp68 = fp69 + src2[((hsi*55+37)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2z[vi] * fp68;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+37)*1+lsi)*1], fp67);
target[((hsi*66+54)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+25)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp74;
fp74 = fp75 + src2[((hsi*55+38)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->oo2z[vi] * fp74;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+38)*1+lsi)*1], fp73);
target[((hsi*66+53)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src2[((hsi*55+35)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+35)*1+lsi)*1], fp79);
target[((hsi*66+52)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+23)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp84;
fp84 = fp85 + src2[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->oo2z[vi] * fp84;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+36)*1+lsi)*1], fp83);
target[((hsi*66+51)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp186;
fp186 = fp187 + src2[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = inteval->oo2z[vi] * fp186;
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+21)*1+lsi)*1], fp185);
target[((hsi*66+33)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp181;
fp181 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp180;
fp180 = fp181 + src2[((hsi*55+20)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = inteval->oo2z[vi] * fp180;
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp178;
fp178 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+20)*1+lsi)*1], fp179);
target[((hsi*66+34)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+30)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp174;
fp174 = inteval->oo2z[vi] * fp175;
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+35)*1+lsi)*1], fp174);
target[((hsi*66+35)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp169;
fp169 = fp170 + src2[((hsi*55+23)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = inteval->oo2z[vi] * fp169;
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+23)*1+lsi)*1], fp168);
target[((hsi*66+36)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp165;
fp165 = 0.0000000000000000e+00 + src2[((hsi*55+22)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = inteval->oo2z[vi] * fp165;
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+22)*1+lsi)*1], fp164);
target[((hsi*66+37)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp159;
fp159 = fp160 + src2[((hsi*55+25)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = inteval->oo2z[vi] * fp159;
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+25)*1+lsi)*1], fp158);
target[((hsi*66+38)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp153;
fp153 = fp154 + src2[((hsi*55+24)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = inteval->oo2z[vi] * fp153;
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+24)*1+lsi)*1], fp152);
target[((hsi*66+39)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+31)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp147;
fp147 = fp148 + src2[((hsi*55+40)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = inteval->oo2z[vi] * fp147;
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+40)*1+lsi)*1], fp146);
target[((hsi*66+40)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp90;
fp90 = fp91 + src2[((hsi*55+34)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+34)*1+lsi)*1], fp89);
target[((hsi*66+50)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+39)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp135;
fp135 = fp136 + src2[((hsi*55+42)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = inteval->oo2z[vi] * fp135;
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+42)*1+lsi)*1], fp134);
target[((hsi*66+42)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+40)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp129;
fp129 = fp130 + src2[((hsi*55+43)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = inteval->oo2z[vi] * fp129;
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+43)*1+lsi)*1], fp128);
target[((hsi*66+43)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+41)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp123;
fp123 = fp124 + src2[((hsi*55+44)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->oo2z[vi] * fp123;
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+44)*1+lsi)*1], fp122);
target[((hsi*66+44)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*55+30)*1+lsi)*1], fp117);
target[((hsi*66+45)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp112;
fp112 = fp113 + src2[((hsi*55+31)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->oo2z[vi] * fp112;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+31)*1+lsi)*1], fp111);
target[((hsi*66+46)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src2[((hsi*55+30)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->oo2z[vi] * fp108;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+30)*1+lsi)*1], fp107);
target[((hsi*66+47)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp102;
fp102 = fp103 + src2[((hsi*55+33)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->oo2z[vi] * fp102;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+33)*1+lsi)*1], fp101);
target[((hsi*66+48)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp96;
fp96 = fp97 + src2[((hsi*55+32)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = inteval->oo2z[vi] * fp96;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+32)*1+lsi)*1], fp95);
target[((hsi*66+49)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+35)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp141;
fp141 = fp142 + src2[((hsi*55+41)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = inteval->oo2z[vi] * fp141;
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*55+41)*1+lsi)*1], fp140);
target[((hsi*66+41)*1+lsi)*1] = fp139;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 361 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif