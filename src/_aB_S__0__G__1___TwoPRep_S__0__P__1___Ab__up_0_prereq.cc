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
void _aB_S__0__G__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp385;
LIBINT2_REALTYPE fp384;
fp384 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp383;
fp383 = inteval->oo2e[vi] * fp384;
LIBINT2_REALTYPE fp163;
fp163 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp163);
LIBINT2_REALTYPE fp167;
fp167 = inteval->WQ_z[vi] * fp162;
LIBINT2_REALTYPE fp170;
fp170 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp170);
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->QC_z[vi], fp169, fp167);
LIBINT2_REALTYPE fp165;
fp165 = fp166 - fp383;
LIBINT2_REALTYPE fp215;
fp215 = inteval->WQ_x[vi] * fp165;
LIBINT2_REALTYPE fp401;
LIBINT2_REALTYPE fp400;
fp400 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp399;
fp399 = inteval->oo2e[vi] * fp400;
LIBINT2_REALTYPE fp180;
fp180 = inteval->WQ_z[vi] * fp169;
LIBINT2_REALTYPE fp173;
fp173 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp174;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp173);
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->QC_z[vi], fp172, fp180);
LIBINT2_REALTYPE fp178;
fp178 = fp179 - fp399;
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp214;
fp214 = libint2::fma_plus(inteval->QC_x[vi], fp178, fp215);
LIBINT2_REALTYPE fp53;
fp53 = inteval->WQ_y[vi] * fp214;
LIBINT2_REALTYPE fp218;
fp218 = inteval->WQ_x[vi] * fp178;
LIBINT2_REALTYPE fp408;
LIBINT2_REALTYPE fp407;
fp407 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi]);
LIBINT2_REALTYPE fp406;
fp406 = inteval->oo2e[vi] * fp407;
LIBINT2_REALTYPE fp184;
fp184 = inteval->WQ_z[vi] * fp172;
LIBINT2_REALTYPE fp176;
fp176 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp176);
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_plus(inteval->QC_z[vi], fp175, fp184);
LIBINT2_REALTYPE fp182;
fp182 = fp183 - fp406;
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp217;
fp217 = libint2::fma_plus(inteval->QC_x[vi], fp182, fp218);
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->QC_y[vi], fp217, fp53);
LIBINT2_REALTYPE fp31;
fp31 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+35)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp266;
fp266 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp267;
LIBINT2_REALTYPE fp265;
fp265 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp266);
LIBINT2_REALTYPE fp270;
fp270 = inteval->WQ_y[vi] * fp265;
LIBINT2_REALTYPE fp273;
fp273 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp274;
LIBINT2_REALTYPE fp272;
fp272 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp273);
LIBINT2_REALTYPE fp271;
LIBINT2_REALTYPE fp269;
fp269 = libint2::fma_plus(inteval->QC_y[vi], fp272, fp270);
LIBINT2_REALTYPE fp268;
fp268 = fp269 - fp383;
LIBINT2_REALTYPE fp318;
fp318 = inteval->WQ_x[vi] * fp268;
LIBINT2_REALTYPE fp283;
fp283 = inteval->WQ_y[vi] * fp272;
LIBINT2_REALTYPE fp276;
fp276 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp277;
LIBINT2_REALTYPE fp275;
fp275 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp276);
LIBINT2_REALTYPE fp284;
LIBINT2_REALTYPE fp282;
fp282 = libint2::fma_plus(inteval->QC_y[vi], fp275, fp283);
LIBINT2_REALTYPE fp281;
fp281 = fp282 - fp399;
LIBINT2_REALTYPE fp319;
LIBINT2_REALTYPE fp317;
fp317 = libint2::fma_plus(inteval->QC_x[vi], fp281, fp318);
LIBINT2_REALTYPE fp84;
fp84 = inteval->WQ_z[vi] * fp317;
LIBINT2_REALTYPE fp321;
fp321 = inteval->WQ_x[vi] * fp281;
LIBINT2_REALTYPE fp287;
fp287 = inteval->WQ_y[vi] * fp275;
LIBINT2_REALTYPE fp279;
fp279 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp280;
LIBINT2_REALTYPE fp278;
fp278 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp279);
LIBINT2_REALTYPE fp288;
LIBINT2_REALTYPE fp286;
fp286 = libint2::fma_plus(inteval->QC_y[vi], fp278, fp287);
LIBINT2_REALTYPE fp285;
fp285 = fp286 - fp406;
LIBINT2_REALTYPE fp322;
LIBINT2_REALTYPE fp320;
fp320 = libint2::fma_plus(inteval->QC_x[vi], fp285, fp321);
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->QC_z[vi], fp320, fp84);
LIBINT2_REALTYPE fp26;
fp26 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+34)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp380;
fp380 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp381;
LIBINT2_REALTYPE fp379;
fp379 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp380);
LIBINT2_REALTYPE fp387;
fp387 = inteval->WQ_x[vi] * fp379;
LIBINT2_REALTYPE fp390;
fp390 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp391;
LIBINT2_REALTYPE fp389;
fp389 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp390);
LIBINT2_REALTYPE fp388;
LIBINT2_REALTYPE fp386;
fp386 = libint2::fma_plus(inteval->QC_x[vi], fp389, fp387);
LIBINT2_REALTYPE fp382;
fp382 = fp386 - fp383;
LIBINT2_REALTYPE fp348;
fp348 = inteval->WQ_y[vi] * fp382;
LIBINT2_REALTYPE fp403;
fp403 = inteval->WQ_x[vi] * fp389;
LIBINT2_REALTYPE fp393;
fp393 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp394;
LIBINT2_REALTYPE fp392;
fp392 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp393);
LIBINT2_REALTYPE fp404;
LIBINT2_REALTYPE fp402;
fp402 = libint2::fma_plus(inteval->QC_x[vi], fp392, fp403);
LIBINT2_REALTYPE fp398;
fp398 = fp402 - fp399;
LIBINT2_REALTYPE fp349;
LIBINT2_REALTYPE fp347;
fp347 = libint2::fma_plus(inteval->QC_y[vi], fp398, fp348);
LIBINT2_REALTYPE fp112;
fp112 = inteval->WQ_z[vi] * fp347;
LIBINT2_REALTYPE fp351;
fp351 = inteval->WQ_y[vi] * fp398;
LIBINT2_REALTYPE fp410;
fp410 = inteval->WQ_x[vi] * fp392;
LIBINT2_REALTYPE fp396;
fp396 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp397;
LIBINT2_REALTYPE fp395;
fp395 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp396);
LIBINT2_REALTYPE fp411;
LIBINT2_REALTYPE fp409;
fp409 = libint2::fma_plus(inteval->QC_x[vi], fp395, fp410);
LIBINT2_REALTYPE fp405;
fp405 = fp409 - fp406;
LIBINT2_REALTYPE fp352;
LIBINT2_REALTYPE fp350;
fp350 = libint2::fma_plus(inteval->QC_y[vi], fp405, fp351);
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->QC_z[vi], fp350, fp112);
LIBINT2_REALTYPE fp21;
fp21 = fp111;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+33)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp313;
LIBINT2_REALTYPE fp312;
fp312 = libint2::fma_minus(inteval->roe[vi], fp281, fp285);
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2e[vi] * fp312;
LIBINT2_REALTYPE fp230;
fp230 = inteval->WQ_z[vi] * fp268;
LIBINT2_REALTYPE fp231;
LIBINT2_REALTYPE fp229;
fp229 = libint2::fma_plus(inteval->QC_z[vi], fp281, fp230);
LIBINT2_REALTYPE fp76;
fp76 = inteval->WQ_z[vi] * fp229;
LIBINT2_REALTYPE fp233;
fp233 = inteval->WQ_z[vi] * fp281;
LIBINT2_REALTYPE fp234;
LIBINT2_REALTYPE fp232;
fp232 = libint2::fma_plus(inteval->QC_z[vi], fp285, fp233);
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->QC_z[vi], fp232, fp76);
LIBINT2_REALTYPE fp73;
fp73 = fp75 - fp74;
LIBINT2_REALTYPE fp28;
fp28 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+32)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp306;
LIBINT2_REALTYPE fp305;
fp305 = libint2::fma_minus(inteval->roe[vi], fp268, fp281);
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2e[vi] * fp305;
LIBINT2_REALTYPE fp368;
LIBINT2_REALTYPE fp367;
fp367 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi]);
LIBINT2_REALTYPE fp366;
fp366 = inteval->oo2e[vi] * fp367;
LIBINT2_REALTYPE fp252;
fp252 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp253;
LIBINT2_REALTYPE fp251;
fp251 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp252);
LIBINT2_REALTYPE fp256;
fp256 = inteval->WQ_y[vi] * fp251;
LIBINT2_REALTYPE fp257;
LIBINT2_REALTYPE fp255;
fp255 = libint2::fma_plus(inteval->QC_y[vi], fp265, fp256);
LIBINT2_REALTYPE fp254;
fp254 = fp255 - fp366;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WQ_z[vi] * fp254;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->QC_z[vi], fp268, fp66);
LIBINT2_REALTYPE fp71;
fp71 = inteval->WQ_z[vi] * fp65;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->QC_z[vi], fp229, fp71);
LIBINT2_REALTYPE fp68;
fp68 = fp70 - fp69;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WQ_x[vi] * fp68;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->QC_x[vi], fp28, fp37);
LIBINT2_REALTYPE fp35;
fp35 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+31)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp430;
LIBINT2_REALTYPE fp429;
fp429 = libint2::fma_minus(inteval->roe[vi], fp382, fp398);
LIBINT2_REALTYPE fp121;
fp121 = inteval->oo2e[vi] * fp429;
LIBINT2_REALTYPE fp363;
fp363 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp364;
LIBINT2_REALTYPE fp362;
fp362 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp363);
LIBINT2_REALTYPE fp370;
fp370 = inteval->WQ_x[vi] * fp362;
LIBINT2_REALTYPE fp371;
LIBINT2_REALTYPE fp369;
fp369 = libint2::fma_plus(inteval->QC_x[vi], fp379, fp370);
LIBINT2_REALTYPE fp365;
fp365 = fp369 - fp366;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WQ_z[vi] * fp365;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->QC_z[vi], fp382, fp97);
LIBINT2_REALTYPE fp101;
fp101 = inteval->WQ_z[vi] * fp96;
LIBINT2_REALTYPE fp333;
fp333 = inteval->WQ_z[vi] * fp382;
LIBINT2_REALTYPE fp334;
LIBINT2_REALTYPE fp332;
fp332 = libint2::fma_plus(inteval->QC_z[vi], fp398, fp333);
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->QC_z[vi], fp332, fp101);
LIBINT2_REALTYPE fp99;
fp99 = fp100 - fp121;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WQ_y[vi] * fp99;
LIBINT2_REALTYPE fp437;
LIBINT2_REALTYPE fp436;
fp436 = libint2::fma_minus(inteval->roe[vi], fp398, fp405);
LIBINT2_REALTYPE fp126;
fp126 = inteval->oo2e[vi] * fp436;
LIBINT2_REALTYPE fp105;
fp105 = inteval->WQ_z[vi] * fp332;
LIBINT2_REALTYPE fp336;
fp336 = inteval->WQ_z[vi] * fp398;
LIBINT2_REALTYPE fp337;
LIBINT2_REALTYPE fp335;
fp335 = libint2::fma_plus(inteval->QC_z[vi], fp405, fp336);
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->QC_z[vi], fp335, fp105);
LIBINT2_REALTYPE fp103;
fp103 = fp104 - fp126;
LIBINT2_REALTYPE fp23;
fp23 = fp103;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->QC_y[vi], fp23, fp40);
LIBINT2_REALTYPE fp34;
fp34 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+30)*1+lsi)*1]),&(fp34),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+29)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp118;
fp118 = inteval->WQ_y[vi] * fp365;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->QC_y[vi], fp382, fp118);
LIBINT2_REALTYPE fp123;
fp123 = inteval->WQ_y[vi] * fp117;
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->QC_y[vi], fp347, fp123);
LIBINT2_REALTYPE fp120;
fp120 = fp122 - fp121;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WQ_z[vi] * fp120;
LIBINT2_REALTYPE fp128;
fp128 = inteval->WQ_y[vi] * fp347;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->QC_y[vi], fp350, fp128);
LIBINT2_REALTYPE fp125;
fp125 = fp127 - fp126;
LIBINT2_REALTYPE fp19;
fp19 = fp125;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->QC_z[vi], fp19, fp43);
LIBINT2_REALTYPE fp33;
fp33 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+28)*1+lsi)*1]),&(fp33),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+27)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp423;
fp423 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_minus(inteval->roe[vi], fp229, fp232);
LIBINT2_REALTYPE fp46;
fp46 = fp423 * fp47;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WQ_z[vi] * fp68;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->QC_z[vi], fp28, fp50);
LIBINT2_REALTYPE fp45;
fp45 = fp49 - fp46;
LIBINT2_REALTYPE fp32;
fp32 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+26)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_minus(inteval->roe[vi], fp169, fp172);
LIBINT2_REALTYPE fp187;
fp187 = fp423 * fp188;
LIBINT2_REALTYPE fp191;
fp191 = inteval->WQ_z[vi] * fp165;
LIBINT2_REALTYPE fp192;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_plus(inteval->QC_z[vi], fp178, fp191);
LIBINT2_REALTYPE fp186;
fp186 = fp190 - fp187;
LIBINT2_REALTYPE fp143;
fp143 = inteval->WQ_y[vi] * fp186;
LIBINT2_REALTYPE fp196;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_minus(inteval->roe[vi], fp172, fp175);
LIBINT2_REALTYPE fp194;
fp194 = fp423 * fp195;
LIBINT2_REALTYPE fp198;
fp198 = inteval->WQ_z[vi] * fp178;
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(inteval->QC_z[vi], fp182, fp198);
LIBINT2_REALTYPE fp193;
fp193 = fp197 - fp194;
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->QC_y[vi], fp193, fp143);
LIBINT2_REALTYPE fp16;
fp16 = fp142;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+25)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_minus(inteval->roe[vi], fp162, fp169);
LIBINT2_REALTYPE fp156;
fp156 = fp423 * fp157;
LIBINT2_REALTYPE fp149;
fp149 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp149);
LIBINT2_REALTYPE fp153;
fp153 = inteval->WQ_z[vi] * fp148;
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->QC_z[vi], fp162, fp153);
LIBINT2_REALTYPE fp151;
fp151 = fp152 - fp366;
LIBINT2_REALTYPE fp160;
fp160 = inteval->WQ_z[vi] * fp151;
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->QC_z[vi], fp165, fp160);
LIBINT2_REALTYPE fp155;
fp155 = fp159 - fp156;
LIBINT2_REALTYPE fp221;
fp221 = inteval->WQ_x[vi] * fp155;
LIBINT2_REALTYPE fp222;
LIBINT2_REALTYPE fp220;
fp220 = libint2::fma_plus(inteval->QC_x[vi], fp186, fp221);
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_y[vi] * fp220;
LIBINT2_REALTYPE fp224;
fp224 = inteval->WQ_x[vi] * fp186;
LIBINT2_REALTYPE fp225;
LIBINT2_REALTYPE fp223;
fp223 = libint2::fma_plus(inteval->QC_x[vi], fp193, fp224);
LIBINT2_REALTYPE fp13;
fp13 = fp223;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->QC_y[vi], fp13, fp56);
LIBINT2_REALTYPE fp30;
fp30 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+24)*1+lsi)*1]),&(fp30),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+23)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_minus(inteval->roe[vi], fp332, fp335);
LIBINT2_REALTYPE fp59;
fp59 = fp423 * fp60;
LIBINT2_REALTYPE fp63;
fp63 = inteval->WQ_z[vi] * fp99;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->QC_z[vi], fp23, fp63);
LIBINT2_REALTYPE fp58;
fp58 = fp62 - fp59;
LIBINT2_REALTYPE fp29;
fp29 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+22)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp299;
LIBINT2_REALTYPE fp298;
fp298 = libint2::fma_minus(inteval->roe[vi], fp275, fp278);
LIBINT2_REALTYPE fp297;
fp297 = fp423 * fp298;
LIBINT2_REALTYPE fp301;
fp301 = inteval->WQ_y[vi] * fp281;
LIBINT2_REALTYPE fp302;
LIBINT2_REALTYPE fp300;
fp300 = libint2::fma_plus(inteval->QC_y[vi], fp285, fp301);
LIBINT2_REALTYPE fp296;
fp296 = fp300 - fp297;
LIBINT2_REALTYPE fp292;
LIBINT2_REALTYPE fp291;
fp291 = libint2::fma_minus(inteval->roe[vi], fp272, fp275);
LIBINT2_REALTYPE fp290;
fp290 = fp423 * fp291;
LIBINT2_REALTYPE fp294;
fp294 = inteval->WQ_y[vi] * fp268;
LIBINT2_REALTYPE fp295;
LIBINT2_REALTYPE fp293;
fp293 = libint2::fma_plus(inteval->QC_y[vi], fp281, fp294);
LIBINT2_REALTYPE fp289;
fp289 = fp293 - fp290;
LIBINT2_REALTYPE fp247;
LIBINT2_REALTYPE fp246;
fp246 = libint2::fma_minus(inteval->roe[vi], fp289, fp296);
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2e[vi] * fp246;
LIBINT2_REALTYPE fp261;
LIBINT2_REALTYPE fp260;
fp260 = libint2::fma_minus(inteval->roe[vi], fp265, fp272);
LIBINT2_REALTYPE fp259;
fp259 = fp423 * fp260;
LIBINT2_REALTYPE fp263;
fp263 = inteval->WQ_y[vi] * fp254;
LIBINT2_REALTYPE fp264;
LIBINT2_REALTYPE fp262;
fp262 = libint2::fma_plus(inteval->QC_y[vi], fp268, fp263);
LIBINT2_REALTYPE fp258;
fp258 = fp262 - fp259;
LIBINT2_REALTYPE fp236;
fp236 = inteval->WQ_z[vi] * fp258;
LIBINT2_REALTYPE fp237;
LIBINT2_REALTYPE fp235;
fp235 = libint2::fma_plus(inteval->QC_z[vi], fp289, fp236);
LIBINT2_REALTYPE fp81;
fp81 = inteval->WQ_z[vi] * fp235;
LIBINT2_REALTYPE fp239;
fp239 = inteval->WQ_z[vi] * fp289;
LIBINT2_REALTYPE fp240;
LIBINT2_REALTYPE fp238;
fp238 = libint2::fma_plus(inteval->QC_z[vi], fp296, fp239);
LIBINT2_REALTYPE fp11;
fp11 = fp238;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->QC_z[vi], fp11, fp81);
LIBINT2_REALTYPE fp78;
fp78 = fp80 - fp79;
LIBINT2_REALTYPE fp27;
fp27 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+21)*1+lsi)*1]),&(fp27),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp324;
fp324 = inteval->WQ_x[vi] * fp258;
LIBINT2_REALTYPE fp325;
LIBINT2_REALTYPE fp323;
fp323 = libint2::fma_plus(inteval->QC_x[vi], fp289, fp324);
LIBINT2_REALTYPE fp87;
fp87 = inteval->WQ_z[vi] * fp323;
LIBINT2_REALTYPE fp327;
fp327 = inteval->WQ_x[vi] * fp289;
LIBINT2_REALTYPE fp328;
LIBINT2_REALTYPE fp326;
fp326 = libint2::fma_plus(inteval->QC_x[vi], fp296, fp327);
LIBINT2_REALTYPE fp7;
fp7 = fp326;
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->QC_z[vi], fp7, fp87);
LIBINT2_REALTYPE fp25;
fp25 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp25),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_minus(inteval->roe[vi], fp347, fp350);
LIBINT2_REALTYPE fp90;
fp90 = fp423 * fp91;
LIBINT2_REALTYPE fp94;
fp94 = inteval->WQ_y[vi] * fp120;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->QC_y[vi], fp19, fp94);
LIBINT2_REALTYPE fp89;
fp89 = fp93 - fp90;
LIBINT2_REALTYPE fp24;
fp24 = fp89;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp422;
LIBINT2_REALTYPE fp421;
fp421 = libint2::fma_minus(inteval->roe[vi], fp392, fp395);
LIBINT2_REALTYPE fp420;
fp420 = fp423 * fp421;
LIBINT2_REALTYPE fp425;
fp425 = inteval->WQ_x[vi] * fp398;
LIBINT2_REALTYPE fp426;
LIBINT2_REALTYPE fp424;
fp424 = libint2::fma_plus(inteval->QC_x[vi], fp405, fp425);
LIBINT2_REALTYPE fp419;
fp419 = fp424 - fp420;
LIBINT2_REALTYPE fp415;
LIBINT2_REALTYPE fp414;
fp414 = libint2::fma_minus(inteval->roe[vi], fp389, fp392);
LIBINT2_REALTYPE fp413;
fp413 = fp423 * fp414;
LIBINT2_REALTYPE fp417;
fp417 = inteval->WQ_x[vi] * fp382;
LIBINT2_REALTYPE fp418;
LIBINT2_REALTYPE fp416;
fp416 = libint2::fma_plus(inteval->QC_x[vi], fp398, fp417);
LIBINT2_REALTYPE fp412;
fp412 = fp416 - fp413;
LIBINT2_REALTYPE fp445;
LIBINT2_REALTYPE fp444;
fp444 = libint2::fma_minus(inteval->roe[vi], fp412, fp419);
LIBINT2_REALTYPE fp131;
fp131 = inteval->oo2e[vi] * fp444;
LIBINT2_REALTYPE fp375;
LIBINT2_REALTYPE fp374;
fp374 = libint2::fma_minus(inteval->roe[vi], fp379, fp389);
LIBINT2_REALTYPE fp373;
fp373 = fp423 * fp374;
LIBINT2_REALTYPE fp377;
fp377 = inteval->WQ_x[vi] * fp365;
LIBINT2_REALTYPE fp378;
LIBINT2_REALTYPE fp376;
fp376 = libint2::fma_plus(inteval->QC_x[vi], fp382, fp377);
LIBINT2_REALTYPE fp372;
fp372 = fp376 - fp373;
LIBINT2_REALTYPE fp339;
fp339 = inteval->WQ_z[vi] * fp372;
LIBINT2_REALTYPE fp340;
LIBINT2_REALTYPE fp338;
fp338 = libint2::fma_plus(inteval->QC_z[vi], fp412, fp339);
LIBINT2_REALTYPE fp109;
fp109 = inteval->WQ_z[vi] * fp338;
LIBINT2_REALTYPE fp342;
fp342 = inteval->WQ_z[vi] * fp412;
LIBINT2_REALTYPE fp343;
LIBINT2_REALTYPE fp341;
fp341 = libint2::fma_plus(inteval->QC_z[vi], fp419, fp342);
LIBINT2_REALTYPE fp5;
fp5 = fp341;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->QC_z[vi], fp5, fp109);
LIBINT2_REALTYPE fp107;
fp107 = fp108 - fp131;
LIBINT2_REALTYPE fp22;
fp22 = fp107;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp22),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp354;
fp354 = inteval->WQ_y[vi] * fp372;
LIBINT2_REALTYPE fp355;
LIBINT2_REALTYPE fp353;
fp353 = libint2::fma_plus(inteval->QC_y[vi], fp412, fp354);
LIBINT2_REALTYPE fp115;
fp115 = inteval->WQ_z[vi] * fp353;
LIBINT2_REALTYPE fp357;
fp357 = inteval->WQ_y[vi] * fp412;
LIBINT2_REALTYPE fp358;
LIBINT2_REALTYPE fp356;
fp356 = libint2::fma_plus(inteval->QC_y[vi], fp419, fp357);
LIBINT2_REALTYPE fp3;
fp3 = fp356;
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->QC_z[vi], fp3, fp115);
LIBINT2_REALTYPE fp20;
fp20 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp133;
fp133 = inteval->WQ_y[vi] * fp353;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->QC_y[vi], fp3, fp133);
LIBINT2_REALTYPE fp130;
fp130 = fp132 - fp131;
LIBINT2_REALTYPE fp18;
fp18 = fp130;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp18),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp446;
fp446 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_minus(inteval->roe[vi], fp186, fp193);
LIBINT2_REALTYPE fp136;
fp136 = fp446 * fp137;
LIBINT2_REALTYPE fp438;
fp438 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp202;
fp202 = libint2::fma_minus(inteval->roe[vi], fp165, fp178);
LIBINT2_REALTYPE fp201;
fp201 = fp438 * fp202;
LIBINT2_REALTYPE fp205;
fp205 = inteval->WQ_z[vi] * fp155;
LIBINT2_REALTYPE fp206;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(inteval->QC_z[vi], fp186, fp205);
LIBINT2_REALTYPE fp200;
fp200 = fp204 - fp201;
LIBINT2_REALTYPE fp140;
fp140 = inteval->WQ_z[vi] * fp200;
LIBINT2_REALTYPE fp210;
LIBINT2_REALTYPE fp209;
fp209 = libint2::fma_minus(inteval->roe[vi], fp178, fp182);
LIBINT2_REALTYPE fp208;
fp208 = fp438 * fp209;
LIBINT2_REALTYPE fp212;
fp212 = inteval->WQ_z[vi] * fp186;
LIBINT2_REALTYPE fp213;
LIBINT2_REALTYPE fp211;
fp211 = libint2::fma_plus(inteval->QC_z[vi], fp193, fp212);
LIBINT2_REALTYPE fp207;
fp207 = fp211 - fp208;
LIBINT2_REALTYPE fp14;
fp14 = fp207;
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->QC_z[vi], fp14, fp140);
LIBINT2_REALTYPE fp135;
fp135 = fp139 - fp136;
LIBINT2_REALTYPE fp17;
fp17 = fp135;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp146;
fp146 = inteval->WQ_y[vi] * fp200;
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->QC_y[vi], fp14, fp146);
LIBINT2_REALTYPE fp15;
fp15 = fp145;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp15),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp227;
fp227 = inteval->WQ_x[vi] * fp200;
LIBINT2_REALTYPE fp228;
LIBINT2_REALTYPE fp226;
fp226 = libint2::fma_plus(inteval->QC_x[vi], fp14, fp227);
LIBINT2_REALTYPE fp12;
fp12 = fp226;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp304;
fp304 = fp438 * fp305;
LIBINT2_REALTYPE fp308;
fp308 = inteval->WQ_y[vi] * fp258;
LIBINT2_REALTYPE fp309;
LIBINT2_REALTYPE fp307;
fp307 = libint2::fma_plus(inteval->QC_y[vi], fp289, fp308);
LIBINT2_REALTYPE fp303;
fp303 = fp307 - fp304;
LIBINT2_REALTYPE fp242;
fp242 = inteval->WQ_z[vi] * fp303;
LIBINT2_REALTYPE fp311;
fp311 = fp438 * fp312;
LIBINT2_REALTYPE fp315;
fp315 = inteval->WQ_y[vi] * fp289;
LIBINT2_REALTYPE fp316;
LIBINT2_REALTYPE fp314;
fp314 = libint2::fma_plus(inteval->QC_y[vi], fp296, fp315);
LIBINT2_REALTYPE fp310;
fp310 = fp314 - fp311;
LIBINT2_REALTYPE fp8;
fp8 = fp310;
LIBINT2_REALTYPE fp243;
LIBINT2_REALTYPE fp241;
fp241 = libint2::fma_plus(inteval->QC_z[vi], fp8, fp242);
LIBINT2_REALTYPE fp10;
fp10 = fp241;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp245;
fp245 = fp446 * fp246;
LIBINT2_REALTYPE fp249;
fp249 = inteval->WQ_y[vi] * fp303;
LIBINT2_REALTYPE fp250;
LIBINT2_REALTYPE fp248;
fp248 = libint2::fma_plus(inteval->QC_y[vi], fp8, fp249);
LIBINT2_REALTYPE fp244;
fp244 = fp248 - fp245;
LIBINT2_REALTYPE fp9;
fp9 = fp244;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp9),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp330;
fp330 = inteval->WQ_x[vi] * fp303;
LIBINT2_REALTYPE fp331;
LIBINT2_REALTYPE fp329;
fp329 = libint2::fma_plus(inteval->QC_x[vi], fp8, fp330);
LIBINT2_REALTYPE fp6;
fp6 = fp329;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp428;
fp428 = fp438 * fp429;
LIBINT2_REALTYPE fp432;
fp432 = inteval->WQ_x[vi] * fp372;
LIBINT2_REALTYPE fp433;
LIBINT2_REALTYPE fp431;
fp431 = libint2::fma_plus(inteval->QC_x[vi], fp412, fp432);
LIBINT2_REALTYPE fp427;
fp427 = fp431 - fp428;
LIBINT2_REALTYPE fp345;
fp345 = inteval->WQ_z[vi] * fp427;
LIBINT2_REALTYPE fp435;
fp435 = fp438 * fp436;
LIBINT2_REALTYPE fp440;
fp440 = inteval->WQ_x[vi] * fp412;
LIBINT2_REALTYPE fp441;
LIBINT2_REALTYPE fp439;
fp439 = libint2::fma_plus(inteval->QC_x[vi], fp419, fp440);
LIBINT2_REALTYPE fp434;
fp434 = fp439 - fp435;
LIBINT2_REALTYPE fp1;
fp1 = fp434;
LIBINT2_REALTYPE fp346;
LIBINT2_REALTYPE fp344;
fp344 = libint2::fma_plus(inteval->QC_z[vi], fp1, fp345);
LIBINT2_REALTYPE fp4;
fp4 = fp344;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp360;
fp360 = inteval->WQ_y[vi] * fp427;
LIBINT2_REALTYPE fp361;
LIBINT2_REALTYPE fp359;
fp359 = libint2::fma_plus(inteval->QC_y[vi], fp1, fp360);
LIBINT2_REALTYPE fp2;
fp2 = fp359;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp443;
fp443 = fp446 * fp444;
LIBINT2_REALTYPE fp448;
fp448 = inteval->WQ_x[vi] * fp427;
LIBINT2_REALTYPE fp449;
LIBINT2_REALTYPE fp447;
fp447 = libint2::fma_plus(inteval->QC_x[vi], fp1, fp448);
LIBINT2_REALTYPE fp442;
fp442 = fp447 - fp443;
LIBINT2_REALTYPE fp0;
fp0 = fp442;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 450 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif