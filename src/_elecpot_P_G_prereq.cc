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
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_P_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp421;
fp421 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp401;
fp401 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp216;
fp216 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp217;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp216);
LIBINT2_REALTYPE fp219;
fp219 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp220;
LIBINT2_REALTYPE fp218;
fp218 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp219);
LIBINT2_REALTYPE fp234;
fp234 = fp218 - fp215;
LIBINT2_REALTYPE fp233;
fp233 = fp401 * fp234;
LIBINT2_REALTYPE fp367;
fp367 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp366;
fp366 = inteval->oo2z[vi] * fp367;
LIBINT2_REALTYPE fp209;
fp209 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi];
LIBINT2_REALTYPE fp210;
LIBINT2_REALTYPE fp208;
fp208 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi], fp209);
LIBINT2_REALTYPE fp213;
fp213 = inteval->PC_z[vi] * fp208;
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_minus(inteval->PB_z[vi], fp215, fp213);
LIBINT2_REALTYPE fp211;
fp211 = fp212 + fp366;
LIBINT2_REALTYPE fp236;
fp236 = inteval->PC_z[vi] * fp211;
LIBINT2_REALTYPE fp382;
fp382 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp381;
fp381 = inteval->oo2z[vi] * fp382;
LIBINT2_REALTYPE fp226;
fp226 = inteval->PC_z[vi] * fp215;
LIBINT2_REALTYPE fp227;
LIBINT2_REALTYPE fp225;
fp225 = libint2::fma_minus(inteval->PB_z[vi], fp218, fp226);
LIBINT2_REALTYPE fp224;
fp224 = fp225 + fp381;
LIBINT2_REALTYPE fp237;
LIBINT2_REALTYPE fp235;
fp235 = libint2::fma_minus(inteval->PB_z[vi], fp224, fp236);
LIBINT2_REALTYPE fp232;
fp232 = fp235 + fp233;
LIBINT2_REALTYPE fp222;
fp222 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp223;
LIBINT2_REALTYPE fp221;
fp221 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp222);
LIBINT2_REALTYPE fp240;
fp240 = fp221 - fp218;
LIBINT2_REALTYPE fp239;
fp239 = fp401 * fp240;
LIBINT2_REALTYPE fp242;
fp242 = inteval->PC_z[vi] * fp224;
LIBINT2_REALTYPE fp388;
fp388 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp387;
fp387 = inteval->oo2z[vi] * fp388;
LIBINT2_REALTYPE fp230;
fp230 = inteval->PC_z[vi] * fp218;
LIBINT2_REALTYPE fp231;
LIBINT2_REALTYPE fp229;
fp229 = libint2::fma_minus(inteval->PB_z[vi], fp221, fp230);
LIBINT2_REALTYPE fp228;
fp228 = fp229 + fp387;
LIBINT2_REALTYPE fp243;
LIBINT2_REALTYPE fp241;
fp241 = libint2::fma_minus(inteval->PB_z[vi], fp228, fp242);
LIBINT2_REALTYPE fp238;
fp238 = fp241 + fp239;
LIBINT2_REALTYPE fp38;
fp38 = fp238 - fp232;
LIBINT2_REALTYPE fp37;
fp37 = fp421 * fp38;
LIBINT2_REALTYPE fp414;
fp414 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp246;
fp246 = fp224 - fp211;
LIBINT2_REALTYPE fp245;
fp245 = fp414 * fp246;
LIBINT2_REALTYPE fp204;
fp204 = fp215 - fp208;
LIBINT2_REALTYPE fp203;
fp203 = fp401 * fp204;
LIBINT2_REALTYPE fp352;
fp352 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi];
LIBINT2_REALTYPE fp351;
fp351 = inteval->oo2z[vi] * fp352;
LIBINT2_REALTYPE fp196;
fp196 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi];
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_minus(inteval->PB_z[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi], fp196);
LIBINT2_REALTYPE fp200;
fp200 = inteval->PC_z[vi] * fp195;
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_minus(inteval->PB_z[vi], fp208, fp200);
LIBINT2_REALTYPE fp198;
fp198 = fp199 + fp351;
LIBINT2_REALTYPE fp206;
fp206 = inteval->PC_z[vi] * fp198;
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp205;
fp205 = libint2::fma_minus(inteval->PB_z[vi], fp211, fp206);
LIBINT2_REALTYPE fp202;
fp202 = fp205 + fp203;
LIBINT2_REALTYPE fp248;
fp248 = inteval->PC_z[vi] * fp202;
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp247;
fp247 = libint2::fma_minus(inteval->PB_z[vi], fp232, fp248);
LIBINT2_REALTYPE fp244;
fp244 = fp247 + fp245;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PC_z[vi] * fp244;
LIBINT2_REALTYPE fp261;
fp261 = fp228 - fp224;
LIBINT2_REALTYPE fp260;
fp260 = fp414 * fp261;
LIBINT2_REALTYPE fp263;
fp263 = inteval->PC_z[vi] * fp232;
LIBINT2_REALTYPE fp264;
LIBINT2_REALTYPE fp262;
fp262 = libint2::fma_minus(inteval->PB_z[vi], fp238, fp263);
LIBINT2_REALTYPE fp259;
fp259 = fp262 + fp260;
LIBINT2_REALTYPE fp7;
fp7 = fp259;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(inteval->PB_z[vi], fp7, fp40);
LIBINT2_REALTYPE fp36;
fp36 = fp39 + fp37;
LIBINT2_REALTYPE fp35;
fp35 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp292;
fp292 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp293;
LIBINT2_REALTYPE fp291;
fp291 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp292);
LIBINT2_REALTYPE fp295;
fp295 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp296;
LIBINT2_REALTYPE fp294;
fp294 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp295);
LIBINT2_REALTYPE fp310;
fp310 = fp294 - fp291;
LIBINT2_REALTYPE fp309;
fp309 = fp401 * fp310;
LIBINT2_REALTYPE fp285;
fp285 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi];
LIBINT2_REALTYPE fp286;
LIBINT2_REALTYPE fp284;
fp284 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi], fp285);
LIBINT2_REALTYPE fp289;
fp289 = inteval->PC_y[vi] * fp284;
LIBINT2_REALTYPE fp290;
LIBINT2_REALTYPE fp288;
fp288 = libint2::fma_minus(inteval->PB_y[vi], fp291, fp289);
LIBINT2_REALTYPE fp287;
fp287 = fp288 + fp366;
LIBINT2_REALTYPE fp312;
fp312 = inteval->PC_y[vi] * fp287;
LIBINT2_REALTYPE fp302;
fp302 = inteval->PC_y[vi] * fp291;
LIBINT2_REALTYPE fp303;
LIBINT2_REALTYPE fp301;
fp301 = libint2::fma_minus(inteval->PB_y[vi], fp294, fp302);
LIBINT2_REALTYPE fp300;
fp300 = fp301 + fp381;
LIBINT2_REALTYPE fp313;
LIBINT2_REALTYPE fp311;
fp311 = libint2::fma_minus(inteval->PB_y[vi], fp300, fp312);
LIBINT2_REALTYPE fp308;
fp308 = fp311 + fp309;
LIBINT2_REALTYPE fp298;
fp298 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp299;
LIBINT2_REALTYPE fp297;
fp297 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp298);
LIBINT2_REALTYPE fp316;
fp316 = fp297 - fp294;
LIBINT2_REALTYPE fp315;
fp315 = fp401 * fp316;
LIBINT2_REALTYPE fp318;
fp318 = inteval->PC_y[vi] * fp300;
LIBINT2_REALTYPE fp306;
fp306 = inteval->PC_y[vi] * fp294;
LIBINT2_REALTYPE fp307;
LIBINT2_REALTYPE fp305;
fp305 = libint2::fma_minus(inteval->PB_y[vi], fp297, fp306);
LIBINT2_REALTYPE fp304;
fp304 = fp305 + fp387;
LIBINT2_REALTYPE fp319;
LIBINT2_REALTYPE fp317;
fp317 = libint2::fma_minus(inteval->PB_y[vi], fp304, fp318);
LIBINT2_REALTYPE fp314;
fp314 = fp317 + fp315;
LIBINT2_REALTYPE fp61;
fp61 = fp314 - fp308;
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp61;
LIBINT2_REALTYPE fp280;
fp280 = fp291 - fp284;
LIBINT2_REALTYPE fp279;
fp279 = fp401 * fp280;
LIBINT2_REALTYPE fp272;
fp272 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi];
LIBINT2_REALTYPE fp273;
LIBINT2_REALTYPE fp271;
fp271 = libint2::fma_minus(inteval->PB_y[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi], fp272);
LIBINT2_REALTYPE fp276;
fp276 = inteval->PC_y[vi] * fp271;
LIBINT2_REALTYPE fp277;
LIBINT2_REALTYPE fp275;
fp275 = libint2::fma_minus(inteval->PB_y[vi], fp284, fp276);
LIBINT2_REALTYPE fp274;
fp274 = fp275 + fp351;
LIBINT2_REALTYPE fp282;
fp282 = inteval->PC_y[vi] * fp274;
LIBINT2_REALTYPE fp283;
LIBINT2_REALTYPE fp281;
fp281 = libint2::fma_minus(inteval->PB_y[vi], fp287, fp282);
LIBINT2_REALTYPE fp278;
fp278 = fp281 + fp279;
LIBINT2_REALTYPE fp135;
fp135 = inteval->PC_z[vi] * fp278;
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_minus(inteval->PB_z[vi], fp308, fp135);
LIBINT2_REALTYPE fp45;
fp45 = inteval->PC_z[vi] * fp134;
LIBINT2_REALTYPE fp138;
fp138 = inteval->PC_z[vi] * fp308;
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_minus(inteval->PB_z[vi], fp314, fp138);
LIBINT2_REALTYPE fp16;
fp16 = fp137;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_minus(inteval->PB_z[vi], fp16, fp45);
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
LIBINT2_REALTYPE fp34;
fp34 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp129;
fp129 = inteval->PC_z[vi] * fp287;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_minus(inteval->PB_z[vi], fp300, fp129);
LIBINT2_REALTYPE fp132;
fp132 = inteval->PC_z[vi] * fp300;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_minus(inteval->PB_z[vi], fp304, fp132);
LIBINT2_REALTYPE fp49;
fp49 = fp131 - fp128;
LIBINT2_REALTYPE fp48;
fp48 = fp401 * fp49;
LIBINT2_REALTYPE fp322;
fp322 = fp300 - fp287;
LIBINT2_REALTYPE fp81;
fp81 = inteval->oo2z[vi] * fp322;
LIBINT2_REALTYPE fp78;
fp78 = inteval->PC_z[vi] * fp274;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_minus(inteval->PB_z[vi], fp287, fp78);
LIBINT2_REALTYPE fp83;
fp83 = inteval->PC_z[vi] * fp77;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_minus(inteval->PB_z[vi], fp128, fp83);
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
LIBINT2_REALTYPE fp51;
fp51 = inteval->PC_z[vi] * fp80;
LIBINT2_REALTYPE fp337;
fp337 = fp304 - fp300;
LIBINT2_REALTYPE fp86;
fp86 = inteval->oo2z[vi] * fp337;
LIBINT2_REALTYPE fp88;
fp88 = inteval->PC_z[vi] * fp128;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_minus(inteval->PB_z[vi], fp131, fp88);
LIBINT2_REALTYPE fp85;
fp85 = fp87 + fp86;
LIBINT2_REALTYPE fp25;
fp25 = fp85;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_minus(inteval->PB_z[vi], fp25, fp51);
LIBINT2_REALTYPE fp47;
fp47 = fp50 + fp48;
LIBINT2_REALTYPE fp33;
fp33 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp321;
fp321 = fp414 * fp322;
LIBINT2_REALTYPE fp324;
fp324 = inteval->PC_y[vi] * fp278;
LIBINT2_REALTYPE fp325;
LIBINT2_REALTYPE fp323;
fp323 = libint2::fma_minus(inteval->PB_y[vi], fp308, fp324);
LIBINT2_REALTYPE fp320;
fp320 = fp323 + fp321;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PC_z[vi] * fp320;
LIBINT2_REALTYPE fp336;
fp336 = fp414 * fp337;
LIBINT2_REALTYPE fp339;
fp339 = inteval->PC_y[vi] * fp308;
LIBINT2_REALTYPE fp340;
LIBINT2_REALTYPE fp338;
fp338 = libint2::fma_minus(inteval->PB_y[vi], fp314, fp339);
LIBINT2_REALTYPE fp335;
fp335 = fp338 + fp336;
LIBINT2_REALTYPE fp4;
fp4 = fp335;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_minus(inteval->PB_z[vi], fp4, fp54);
LIBINT2_REALTYPE fp32;
fp32 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->PC_y[vi] * fp244;
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->PB_y[vi], fp7, fp57);
LIBINT2_REALTYPE fp31;
fp31 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp60;
fp60 = fp421 * fp61;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PC_y[vi] * fp320;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_minus(inteval->PB_y[vi], fp4, fp63);
LIBINT2_REALTYPE fp59;
fp59 = fp62 + fp60;
LIBINT2_REALTYPE fp30;
fp30 = fp59;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp372;
fp372 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp373;
LIBINT2_REALTYPE fp371;
fp371 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi], fp372);
LIBINT2_REALTYPE fp384;
fp384 = inteval->PC_x[vi] * fp371;
LIBINT2_REALTYPE fp375;
fp375 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp376;
LIBINT2_REALTYPE fp374;
fp374 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi], fp375);
LIBINT2_REALTYPE fp385;
LIBINT2_REALTYPE fp383;
fp383 = libint2::fma_minus(inteval->PB_x[vi], fp374, fp384);
LIBINT2_REALTYPE fp380;
fp380 = fp383 + fp381;
LIBINT2_REALTYPE fp363;
fp363 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi];
LIBINT2_REALTYPE fp364;
LIBINT2_REALTYPE fp362;
fp362 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi], fp363);
LIBINT2_REALTYPE fp369;
fp369 = inteval->PC_x[vi] * fp362;
LIBINT2_REALTYPE fp370;
LIBINT2_REALTYPE fp368;
fp368 = libint2::fma_minus(inteval->PB_x[vi], fp371, fp369);
LIBINT2_REALTYPE fp365;
fp365 = fp368 + fp366;
LIBINT2_REALTYPE fp407;
fp407 = fp380 - fp365;
LIBINT2_REALTYPE fp150;
fp150 = inteval->oo2z[vi] * fp407;
LIBINT2_REALTYPE fp348;
fp348 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi];
LIBINT2_REALTYPE fp349;
LIBINT2_REALTYPE fp347;
fp347 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi], fp348);
LIBINT2_REALTYPE fp354;
fp354 = inteval->PC_x[vi] * fp347;
LIBINT2_REALTYPE fp355;
LIBINT2_REALTYPE fp353;
fp353 = libint2::fma_minus(inteval->PB_x[vi], fp362, fp354);
LIBINT2_REALTYPE fp350;
fp350 = fp353 + fp351;
LIBINT2_REALTYPE fp112;
fp112 = inteval->PC_z[vi] * fp350;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_minus(inteval->PB_z[vi], fp365, fp112);
LIBINT2_REALTYPE fp116;
fp116 = inteval->PC_z[vi] * fp111;
LIBINT2_REALTYPE fp166;
fp166 = inteval->PC_z[vi] * fp365;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_minus(inteval->PB_z[vi], fp380, fp166);
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_minus(inteval->PB_z[vi], fp165, fp116);
LIBINT2_REALTYPE fp114;
fp114 = fp115 + fp150;
LIBINT2_REALTYPE fp66;
fp66 = inteval->PC_y[vi] * fp114;
LIBINT2_REALTYPE fp390;
fp390 = inteval->PC_x[vi] * fp374;
LIBINT2_REALTYPE fp378;
fp378 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp379;
LIBINT2_REALTYPE fp377;
fp377 = libint2::fma_minus(inteval->PB_x[vi], inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi], fp378);
LIBINT2_REALTYPE fp391;
LIBINT2_REALTYPE fp389;
fp389 = libint2::fma_minus(inteval->PB_x[vi], fp377, fp390);
LIBINT2_REALTYPE fp386;
fp386 = fp389 + fp387;
LIBINT2_REALTYPE fp413;
fp413 = fp386 - fp380;
LIBINT2_REALTYPE fp155;
fp155 = inteval->oo2z[vi] * fp413;
LIBINT2_REALTYPE fp120;
fp120 = inteval->PC_z[vi] * fp165;
LIBINT2_REALTYPE fp169;
fp169 = inteval->PC_z[vi] * fp380;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_minus(inteval->PB_z[vi], fp386, fp169);
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_minus(inteval->PB_z[vi], fp168, fp120);
LIBINT2_REALTYPE fp118;
fp118 = fp119 + fp155;
LIBINT2_REALTYPE fp18;
fp18 = fp118;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_minus(inteval->PB_y[vi], fp18, fp66);
LIBINT2_REALTYPE fp29;
fp29 = fp65;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp147;
fp147 = inteval->PC_y[vi] * fp350;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_minus(inteval->PB_y[vi], fp365, fp147);
LIBINT2_REALTYPE fp152;
fp152 = inteval->PC_y[vi] * fp146;
LIBINT2_REALTYPE fp181;
fp181 = inteval->PC_y[vi] * fp365;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_minus(inteval->PB_y[vi], fp380, fp181);
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_minus(inteval->PB_y[vi], fp180, fp152);
LIBINT2_REALTYPE fp149;
fp149 = fp151 + fp150;
LIBINT2_REALTYPE fp69;
fp69 = inteval->PC_z[vi] * fp149;
LIBINT2_REALTYPE fp157;
fp157 = inteval->PC_y[vi] * fp180;
LIBINT2_REALTYPE fp184;
fp184 = inteval->PC_y[vi] * fp380;
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_minus(inteval->PB_y[vi], fp386, fp184);
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_minus(inteval->PB_y[vi], fp183, fp157);
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
LIBINT2_REALTYPE fp13;
fp13 = fp154;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_minus(inteval->PB_z[vi], fp13, fp69);
LIBINT2_REALTYPE fp28;
fp28 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp72;
fp72 = inteval->PC_z[vi] * fp180;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_minus(inteval->PB_z[vi], fp183, fp72);
LIBINT2_REALTYPE fp27;
fp27 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp358;
fp358 = fp371 - fp362;
LIBINT2_REALTYPE fp357;
fp357 = fp401 * fp358;
LIBINT2_REALTYPE fp360;
fp360 = inteval->PC_x[vi] * fp350;
LIBINT2_REALTYPE fp361;
LIBINT2_REALTYPE fp359;
fp359 = libint2::fma_minus(inteval->PB_x[vi], fp365, fp360);
LIBINT2_REALTYPE fp356;
fp356 = fp359 + fp357;
LIBINT2_REALTYPE fp187;
fp187 = inteval->PC_y[vi] * fp356;
LIBINT2_REALTYPE fp394;
fp394 = fp374 - fp371;
LIBINT2_REALTYPE fp393;
fp393 = fp401 * fp394;
LIBINT2_REALTYPE fp396;
fp396 = inteval->PC_x[vi] * fp365;
LIBINT2_REALTYPE fp397;
LIBINT2_REALTYPE fp395;
fp395 = libint2::fma_minus(inteval->PB_x[vi], fp380, fp396);
LIBINT2_REALTYPE fp392;
fp392 = fp395 + fp393;
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_minus(inteval->PB_y[vi], fp392, fp187);
LIBINT2_REALTYPE fp75;
fp75 = inteval->PC_z[vi] * fp186;
LIBINT2_REALTYPE fp190;
fp190 = inteval->PC_y[vi] * fp392;
LIBINT2_REALTYPE fp400;
fp400 = fp377 - fp374;
LIBINT2_REALTYPE fp399;
fp399 = fp401 * fp400;
LIBINT2_REALTYPE fp403;
fp403 = inteval->PC_x[vi] * fp380;
LIBINT2_REALTYPE fp404;
LIBINT2_REALTYPE fp402;
fp402 = libint2::fma_minus(inteval->PB_x[vi], fp386, fp403);
LIBINT2_REALTYPE fp398;
fp398 = fp402 + fp399;
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_minus(inteval->PB_y[vi], fp398, fp190);
LIBINT2_REALTYPE fp9;
fp9 = fp189;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_minus(inteval->PB_z[vi], fp9, fp75);
LIBINT2_REALTYPE fp26;
fp26 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+26)*1+lsi)*1]),&(fp26),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp91;
fp91 = inteval->PC_x[vi] * fp80;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_minus(inteval->PB_x[vi], fp25, fp91);
LIBINT2_REALTYPE fp24;
fp24 = fp90;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp420;
fp420 = fp398 - fp392;
LIBINT2_REALTYPE fp98;
fp98 = inteval->oo2z[vi] * fp420;
LIBINT2_REALTYPE fp172;
fp172 = inteval->PC_z[vi] * fp356;
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_minus(inteval->PB_z[vi], fp392, fp172);
LIBINT2_REALTYPE fp95;
fp95 = inteval->PC_z[vi] * fp171;
LIBINT2_REALTYPE fp175;
fp175 = inteval->PC_z[vi] * fp392;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_minus(inteval->PB_z[vi], fp398, fp175);
LIBINT2_REALTYPE fp11;
fp11 = fp174;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_minus(inteval->PB_z[vi], fp11, fp95);
LIBINT2_REALTYPE fp93;
fp93 = fp94 + fp98;
LIBINT2_REALTYPE fp23;
fp23 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp100;
fp100 = inteval->PC_y[vi] * fp186;
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_minus(inteval->PB_y[vi], fp9, fp100);
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
LIBINT2_REALTYPE fp22;
fp22 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp251;
fp251 = inteval->PC_x[vi] * fp211;
LIBINT2_REALTYPE fp252;
LIBINT2_REALTYPE fp250;
fp250 = libint2::fma_minus(inteval->PB_x[vi], fp224, fp251);
LIBINT2_REALTYPE fp106;
fp106 = inteval->PC_y[vi] * fp250;
LIBINT2_REALTYPE fp254;
fp254 = inteval->PC_x[vi] * fp224;
LIBINT2_REALTYPE fp255;
LIBINT2_REALTYPE fp253;
fp253 = libint2::fma_minus(inteval->PB_x[vi], fp228, fp254);
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_minus(inteval->PB_y[vi], fp253, fp106);
LIBINT2_REALTYPE fp20;
fp20 = fp105;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+21)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp103;
fp103 = inteval->PC_y[vi] * fp232;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_minus(inteval->PB_y[vi], fp238, fp103);
LIBINT2_REALTYPE fp21;
fp21 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp257;
fp257 = inteval->PC_x[vi] * fp202;
LIBINT2_REALTYPE fp258;
LIBINT2_REALTYPE fp256;
fp256 = libint2::fma_minus(inteval->PB_x[vi], fp232, fp257);
LIBINT2_REALTYPE fp109;
fp109 = inteval->PC_y[vi] * fp256;
LIBINT2_REALTYPE fp266;
fp266 = inteval->PC_x[vi] * fp232;
LIBINT2_REALTYPE fp267;
LIBINT2_REALTYPE fp265;
fp265 = libint2::fma_minus(inteval->PB_x[vi], fp238, fp266);
LIBINT2_REALTYPE fp6;
fp6 = fp265;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_minus(inteval->PB_y[vi], fp6, fp109);
LIBINT2_REALTYPE fp19;
fp19 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp19),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp124;
fp124 = fp168 - fp165;
LIBINT2_REALTYPE fp123;
fp123 = fp401 * fp124;
LIBINT2_REALTYPE fp126;
fp126 = inteval->PC_z[vi] * fp114;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_minus(inteval->PB_z[vi], fp18, fp126);
LIBINT2_REALTYPE fp122;
fp122 = fp125 + fp123;
LIBINT2_REALTYPE fp17;
fp17 = fp122;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp327;
fp327 = inteval->PC_x[vi] * fp287;
LIBINT2_REALTYPE fp328;
LIBINT2_REALTYPE fp326;
fp326 = libint2::fma_minus(inteval->PB_x[vi], fp300, fp327);
LIBINT2_REALTYPE fp141;
fp141 = inteval->PC_z[vi] * fp326;
LIBINT2_REALTYPE fp330;
fp330 = inteval->PC_x[vi] * fp300;
LIBINT2_REALTYPE fp331;
LIBINT2_REALTYPE fp329;
fp329 = libint2::fma_minus(inteval->PB_x[vi], fp304, fp330);
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_minus(inteval->PB_z[vi], fp329, fp141);
LIBINT2_REALTYPE fp15;
fp15 = fp140;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp15),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp333;
fp333 = inteval->PC_x[vi] * fp278;
LIBINT2_REALTYPE fp334;
LIBINT2_REALTYPE fp332;
fp332 = libint2::fma_minus(inteval->PB_x[vi], fp308, fp333);
LIBINT2_REALTYPE fp144;
fp144 = inteval->PC_z[vi] * fp332;
LIBINT2_REALTYPE fp342;
fp342 = inteval->PC_x[vi] * fp308;
LIBINT2_REALTYPE fp343;
LIBINT2_REALTYPE fp341;
fp341 = libint2::fma_minus(inteval->PB_x[vi], fp314, fp342);
LIBINT2_REALTYPE fp3;
fp3 = fp341;
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_minus(inteval->PB_z[vi], fp3, fp144);
LIBINT2_REALTYPE fp14;
fp14 = fp143;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp14),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp161;
fp161 = fp183 - fp180;
LIBINT2_REALTYPE fp160;
fp160 = fp401 * fp161;
LIBINT2_REALTYPE fp163;
fp163 = inteval->PC_y[vi] * fp149;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_minus(inteval->PB_y[vi], fp13, fp163);
LIBINT2_REALTYPE fp159;
fp159 = fp162 + fp160;
LIBINT2_REALTYPE fp12;
fp12 = fp159;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp12),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp406;
fp406 = fp414 * fp407;
LIBINT2_REALTYPE fp409;
fp409 = inteval->PC_x[vi] * fp356;
LIBINT2_REALTYPE fp410;
LIBINT2_REALTYPE fp408;
fp408 = libint2::fma_minus(inteval->PB_x[vi], fp392, fp409);
LIBINT2_REALTYPE fp405;
fp405 = fp408 + fp406;
LIBINT2_REALTYPE fp178;
fp178 = inteval->PC_z[vi] * fp405;
LIBINT2_REALTYPE fp412;
fp412 = fp414 * fp413;
LIBINT2_REALTYPE fp416;
fp416 = inteval->PC_x[vi] * fp392;
LIBINT2_REALTYPE fp417;
LIBINT2_REALTYPE fp415;
fp415 = libint2::fma_minus(inteval->PB_x[vi], fp398, fp416);
LIBINT2_REALTYPE fp411;
fp411 = fp415 + fp412;
LIBINT2_REALTYPE fp1;
fp1 = fp411;
LIBINT2_REALTYPE fp179;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_minus(inteval->PB_z[vi], fp1, fp178);
LIBINT2_REALTYPE fp10;
fp10 = fp177;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp10),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp193;
fp193 = inteval->PC_y[vi] * fp405;
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_minus(inteval->PB_y[vi], fp1, fp193);
LIBINT2_REALTYPE fp8;
fp8 = fp192;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp6),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp269;
fp269 = inteval->PC_x[vi] * fp244;
LIBINT2_REALTYPE fp270;
LIBINT2_REALTYPE fp268;
fp268 = libint2::fma_minus(inteval->PB_x[vi], fp7, fp269);
LIBINT2_REALTYPE fp5;
fp5 = fp268;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp3),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp345;
fp345 = inteval->PC_x[vi] * fp320;
LIBINT2_REALTYPE fp346;
LIBINT2_REALTYPE fp344;
fp344 = libint2::fma_minus(inteval->PB_x[vi], fp4, fp345);
LIBINT2_REALTYPE fp2;
fp2 = fp344;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp419;
fp419 = fp421 * fp420;
LIBINT2_REALTYPE fp423;
fp423 = inteval->PC_x[vi] * fp405;
LIBINT2_REALTYPE fp424;
LIBINT2_REALTYPE fp422;
fp422 = libint2::fma_minus(inteval->PB_x[vi], fp1, fp423);
LIBINT2_REALTYPE fp418;
fp418 = fp422 + fp419;
LIBINT2_REALTYPE fp0;
fp0 = fp418;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 425 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif