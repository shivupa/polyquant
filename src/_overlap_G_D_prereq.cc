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
void _overlap_G_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp117;
fp117 = inteval->PA_z[vi] * fp130;
LIBINT2_REALTYPE fp224;
fp224 = 0.0000000000000000e+00 + fp117;
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp245;
fp245 = 0.0000000000000000e+00 + fp171;
LIBINT2_REALTYPE fp211;
fp211 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp172;
fp172 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp173;
fp173 = inteval->PA_x[vi] * fp172;
LIBINT2_REALTYPE fp185;
fp185 = fp211 * fp173;
LIBINT2_REALTYPE fp180;
fp180 = inteval->oo2z[vi] * fp172;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_plus(inteval->PA_x[vi], fp173, fp180);
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_plus(inteval->PB_x[vi], fp175, fp185);
LIBINT2_REALTYPE fp205;
fp205 = fp211 * fp184;
LIBINT2_REALTYPE fp174;
fp174 = inteval->PB_x[vi] * fp172;
LIBINT2_REALTYPE fp188;
fp188 = fp211 * fp174;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->PB_x[vi], fp174, fp180);
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(inteval->PA_x[vi], fp179, fp188);
LIBINT2_REALTYPE fp207;
fp207 = fp211 * fp187;
LIBINT2_REALTYPE fp178;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->PA_x[vi], fp174, fp180);
LIBINT2_REALTYPE fp200;
fp200 = fp211 * fp177;
LIBINT2_REALTYPE fp202;
fp202 = inteval->oo2z[vi] * fp179;
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp201;
fp201 = libint2::fma_plus(inteval->PA_x[vi], fp187, fp202);
LIBINT2_REALTYPE fp199;
fp199 = fp201 + fp200;
LIBINT2_REALTYPE fp208;
LIBINT2_REALTYPE fp206;
fp206 = libint2::fma_plus(inteval->PA_x[vi], fp199, fp207);
LIBINT2_REALTYPE fp204;
fp204 = fp206 + fp205;
LIBINT2_REALTYPE fp254;
fp254 = 0.0000000000000000e+00 + fp204;
LIBINT2_REALTYPE fp392;
fp392 = fp254 * fp245;
LIBINT2_REALTYPE fp391;
fp391 = fp392 * fp224;
LIBINT2_REALTYPE fp24;
fp24 = fp391;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->PA_x[vi], fp175, fp185);
LIBINT2_REALTYPE fp253;
fp253 = 0.0000000000000000e+00 + fp182;
LIBINT2_REALTYPE fp169;
fp169 = inteval->oo2z[vi] * fp171;
LIBINT2_REALTYPE fp167;
fp167 = inteval->PB_y[vi] * fp171;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(inteval->PB_y[vi], fp167, fp169);
LIBINT2_REALTYPE fp244;
fp244 = 0.0000000000000000e+00 + fp168;
LIBINT2_REALTYPE fp390;
fp390 = fp253 * fp244;
LIBINT2_REALTYPE fp389;
fp389 = fp390 * fp224;
LIBINT2_REALTYPE fp25;
fp25 = fp389;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp126;
fp126 = inteval->PB_z[vi] * fp130;
LIBINT2_REALTYPE fp95;
fp95 = fp211 * fp126;
LIBINT2_REALTYPE fp128;
fp128 = inteval->oo2z[vi] * fp130;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->PB_z[vi], fp126, fp128);
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->PA_z[vi], fp127, fp95);
LIBINT2_REALTYPE fp223;
fp223 = 0.0000000000000000e+00 + fp94;
LIBINT2_REALTYPE fp388;
fp388 = fp253 * fp245;
LIBINT2_REALTYPE fp387;
fp387 = fp388 * fp223;
LIBINT2_REALTYPE fp26;
fp26 = fp387;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp243;
fp243 = 0.0000000000000000e+00 + fp167;
LIBINT2_REALTYPE fp214;
fp214 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp197;
fp197 = fp214 * fp175;
LIBINT2_REALTYPE fp198;
LIBINT2_REALTYPE fp196;
fp196 = libint2::fma_plus(inteval->PB_x[vi], fp182, fp197);
LIBINT2_REALTYPE fp252;
fp252 = 0.0000000000000000e+00 + fp196;
LIBINT2_REALTYPE fp386;
fp386 = fp252 * fp243;
LIBINT2_REALTYPE fp385;
fp385 = fp386 * fp224;
LIBINT2_REALTYPE fp27;
fp27 = fp385;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->PA_z[vi], fp126, fp128);
LIBINT2_REALTYPE fp222;
fp222 = 0.0000000000000000e+00 + fp90;
LIBINT2_REALTYPE fp384;
fp384 = fp252 * fp245;
LIBINT2_REALTYPE fp383;
fp383 = fp384 * fp222;
LIBINT2_REALTYPE fp28;
fp28 = fp383;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp382;
fp382 = fp253 * fp243;
LIBINT2_REALTYPE fp381;
fp381 = fp382 * fp222;
LIBINT2_REALTYPE fp29;
fp29 = fp381;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp230;
fp230 = 0.0000000000000000e+00 + fp130;
LIBINT2_REALTYPE fp158;
fp158 = inteval->PA_y[vi] * fp171;
LIBINT2_REALTYPE fp162;
fp162 = fp211 * fp158;
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->PA_y[vi], fp158, fp169);
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(inteval->PA_y[vi], fp159, fp162);
LIBINT2_REALTYPE fp236;
fp236 = 0.0000000000000000e+00 + fp161;
LIBINT2_REALTYPE fp251;
fp251 = 0.0000000000000000e+00 + fp187;
LIBINT2_REALTYPE fp380;
fp380 = fp251 * fp236;
LIBINT2_REALTYPE fp379;
fp379 = fp380 * fp230;
LIBINT2_REALTYPE fp30;
fp30 = fp379;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp250;
fp250 = 0.0000000000000000e+00 + fp173;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(inteval->PB_y[vi], fp159, fp162);
LIBINT2_REALTYPE fp149;
fp149 = fp211 * fp133;
LIBINT2_REALTYPE fp136;
fp136 = fp211 * fp167;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->PA_y[vi], fp168, fp136);
LIBINT2_REALTYPE fp151;
fp151 = fp211 * fp135;
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->PA_y[vi], fp167, fp169);
LIBINT2_REALTYPE fp144;
fp144 = fp211 * fp131;
LIBINT2_REALTYPE fp146;
fp146 = inteval->oo2z[vi] * fp168;
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->PA_y[vi], fp135, fp146);
LIBINT2_REALTYPE fp143;
fp143 = fp145 + fp144;
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->PA_y[vi], fp143, fp151);
LIBINT2_REALTYPE fp148;
fp148 = fp150 + fp149;
LIBINT2_REALTYPE fp235;
fp235 = 0.0000000000000000e+00 + fp148;
LIBINT2_REALTYPE fp378;
fp378 = fp250 * fp235;
LIBINT2_REALTYPE fp377;
fp377 = fp378 * fp230;
LIBINT2_REALTYPE fp31;
fp31 = fp377;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp229;
fp229 = 0.0000000000000000e+00 + fp127;
LIBINT2_REALTYPE fp376;
fp376 = fp250 * fp236;
LIBINT2_REALTYPE fp375;
fp375 = fp376 * fp229;
LIBINT2_REALTYPE fp32;
fp32 = fp375;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp249;
fp249 = 0.0000000000000000e+00 + fp177;
LIBINT2_REALTYPE fp165;
fp165 = fp214 * fp159;
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->PB_y[vi], fp161, fp165);
LIBINT2_REALTYPE fp234;
fp234 = 0.0000000000000000e+00 + fp141;
LIBINT2_REALTYPE fp374;
fp374 = fp249 * fp234;
LIBINT2_REALTYPE fp373;
fp373 = fp374 * fp230;
LIBINT2_REALTYPE fp33;
fp33 = fp373;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp196;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp199;
LIBINT2_REALTYPE fp215;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_plus(inteval->PA_x[vi], fp204, fp213);
LIBINT2_REALTYPE fp209;
fp209 = fp212 + fp210;
LIBINT2_REALTYPE fp260;
fp260 = 0.0000000000000000e+00 + fp209;
LIBINT2_REALTYPE fp440;
fp440 = fp260 * fp245;
LIBINT2_REALTYPE fp439;
fp439 = fp440 * fp230;
LIBINT2_REALTYPE fp0;
fp0 = fp439;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+0)*1+lsi)*1]),&(fp0),1);
LIBINT2_REALTYPE fp228;
fp228 = 0.0000000000000000e+00 + fp126;
LIBINT2_REALTYPE fp370;
fp370 = fp250 * fp234;
LIBINT2_REALTYPE fp369;
fp369 = fp370 * fp228;
LIBINT2_REALTYPE fp35;
fp35 = fp369;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp257;
fp257 = 0.0000000000000000e+00 + fp179;
LIBINT2_REALTYPE fp368;
fp368 = fp257 * fp236;
LIBINT2_REALTYPE fp367;
fp367 = fp368 * fp224;
LIBINT2_REALTYPE fp36;
fp36 = fp367;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp256;
fp256 = 0.0000000000000000e+00 + fp172;
LIBINT2_REALTYPE fp366;
fp366 = fp256 * fp235;
LIBINT2_REALTYPE fp365;
fp365 = fp366 * fp224;
LIBINT2_REALTYPE fp37;
fp37 = fp365;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp364;
fp364 = fp256 * fp236;
LIBINT2_REALTYPE fp363;
fp363 = fp364 * fp223;
LIBINT2_REALTYPE fp38;
fp38 = fp363;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp255;
fp255 = 0.0000000000000000e+00 + fp174;
LIBINT2_REALTYPE fp362;
fp362 = fp255 * fp234;
LIBINT2_REALTYPE fp361;
fp361 = fp362 * fp224;
LIBINT2_REALTYPE fp39;
fp39 = fp361;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp360;
fp360 = fp255 * fp236;
LIBINT2_REALTYPE fp359;
fp359 = fp360 * fp222;
LIBINT2_REALTYPE fp40;
fp40 = fp359;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp358;
fp358 = fp256 * fp234;
LIBINT2_REALTYPE fp357;
fp357 = fp358 * fp222;
LIBINT2_REALTYPE fp41;
fp41 = fp357;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp121;
fp121 = fp211 * fp117;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->PA_z[vi], fp117, fp128);
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->PA_z[vi], fp118, fp121);
LIBINT2_REALTYPE fp221;
fp221 = 0.0000000000000000e+00 + fp120;
LIBINT2_REALTYPE fp356;
fp356 = fp251 * fp245;
LIBINT2_REALTYPE fp355;
fp355 = fp356 * fp221;
LIBINT2_REALTYPE fp42;
fp42 = fp355;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp354;
fp354 = fp250 * fp244;
LIBINT2_REALTYPE fp353;
fp353 = fp354 * fp221;
LIBINT2_REALTYPE fp43;
fp43 = fp353;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->PB_z[vi], fp118, fp121);
LIBINT2_REALTYPE fp108;
fp108 = fp211 * fp92;
LIBINT2_REALTYPE fp110;
fp110 = fp211 * fp94;
LIBINT2_REALTYPE fp103;
fp103 = fp211 * fp90;
LIBINT2_REALTYPE fp105;
fp105 = inteval->oo2z[vi] * fp127;
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->PA_z[vi], fp94, fp105);
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->PA_z[vi], fp102, fp110);
LIBINT2_REALTYPE fp107;
fp107 = fp109 + fp108;
LIBINT2_REALTYPE fp220;
fp220 = 0.0000000000000000e+00 + fp107;
LIBINT2_REALTYPE fp352;
fp352 = fp250 * fp245;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp220;
LIBINT2_REALTYPE fp44;
fp44 = fp351;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp372;
fp372 = fp249 * fp236;
LIBINT2_REALTYPE fp371;
fp371 = fp372 * fp228;
LIBINT2_REALTYPE fp34;
fp34 = fp371;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_plus(inteval->PA_x[vi], fp182, fp197);
LIBINT2_REALTYPE fp259;
fp259 = 0.0000000000000000e+00 + fp190;
LIBINT2_REALTYPE fp438;
fp438 = fp259 * fp244;
LIBINT2_REALTYPE fp437;
fp437 = fp438 * fp230;
LIBINT2_REALTYPE fp1;
fp1 = fp437;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp436;
fp436 = fp259 * fp245;
LIBINT2_REALTYPE fp435;
fp435 = fp436 * fp229;
LIBINT2_REALTYPE fp2;
fp2 = fp435;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp194;
fp194 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp182;
LIBINT2_REALTYPE fp195;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(inteval->PB_x[vi], fp190, fp193);
LIBINT2_REALTYPE fp258;
fp258 = 0.0000000000000000e+00 + fp192;
LIBINT2_REALTYPE fp434;
fp434 = fp258 * fp243;
LIBINT2_REALTYPE fp433;
fp433 = fp434 * fp230;
LIBINT2_REALTYPE fp3;
fp3 = fp433;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp432;
fp432 = fp258 * fp245;
LIBINT2_REALTYPE fp431;
fp431 = fp432 * fp228;
LIBINT2_REALTYPE fp4;
fp4 = fp431;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp430;
fp430 = fp259 * fp243;
LIBINT2_REALTYPE fp429;
fp429 = fp430 * fp228;
LIBINT2_REALTYPE fp5;
fp5 = fp429;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->PA_y[vi], fp161, fp165);
LIBINT2_REALTYPE fp242;
fp242 = 0.0000000000000000e+00 + fp164;
LIBINT2_REALTYPE fp428;
fp428 = fp257 * fp242;
LIBINT2_REALTYPE fp427;
fp427 = fp428 * fp230;
LIBINT2_REALTYPE fp6;
fp6 = fp427;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp154;
fp154 = fp211 * fp141;
LIBINT2_REALTYPE fp156;
fp156 = fp214 * fp143;
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_plus(inteval->PA_y[vi], fp148, fp156);
LIBINT2_REALTYPE fp153;
fp153 = fp155 + fp154;
LIBINT2_REALTYPE fp241;
fp241 = 0.0000000000000000e+00 + fp153;
LIBINT2_REALTYPE fp426;
fp426 = fp256 * fp241;
LIBINT2_REALTYPE fp425;
fp425 = fp426 * fp230;
LIBINT2_REALTYPE fp7;
fp7 = fp425;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp424;
fp424 = fp256 * fp242;
LIBINT2_REALTYPE fp423;
fp423 = fp424 * fp229;
LIBINT2_REALTYPE fp8;
fp8 = fp423;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp139;
fp139 = fp194 * fp161;
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->PB_y[vi], fp164, fp139);
LIBINT2_REALTYPE fp240;
fp240 = 0.0000000000000000e+00 + fp138;
LIBINT2_REALTYPE fp422;
fp422 = fp255 * fp240;
LIBINT2_REALTYPE fp421;
fp421 = fp422 * fp230;
LIBINT2_REALTYPE fp9;
fp9 = fp421;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp420;
fp420 = fp255 * fp242;
LIBINT2_REALTYPE fp419;
fp419 = fp420 * fp228;
LIBINT2_REALTYPE fp10;
fp10 = fp419;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp237;
fp237 = 0.0000000000000000e+00 + fp131;
LIBINT2_REALTYPE fp394;
fp394 = fp253 * fp237;
LIBINT2_REALTYPE fp393;
fp393 = fp394 * fp228;
LIBINT2_REALTYPE fp23;
fp23 = fp393;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp124;
fp124 = fp214 * fp118;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->PA_z[vi], fp120, fp124);
LIBINT2_REALTYPE fp227;
fp227 = 0.0000000000000000e+00 + fp123;
LIBINT2_REALTYPE fp416;
fp416 = fp257 * fp245;
LIBINT2_REALTYPE fp415;
fp415 = fp416 * fp227;
LIBINT2_REALTYPE fp12;
fp12 = fp415;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp414;
fp414 = fp256 * fp244;
LIBINT2_REALTYPE fp413;
fp413 = fp414 * fp227;
LIBINT2_REALTYPE fp13;
fp13 = fp413;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->PB_z[vi], fp120, fp124);
LIBINT2_REALTYPE fp113;
fp113 = fp211 * fp100;
LIBINT2_REALTYPE fp115;
fp115 = fp214 * fp102;
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->PA_z[vi], fp107, fp115);
LIBINT2_REALTYPE fp112;
fp112 = fp114 + fp113;
LIBINT2_REALTYPE fp226;
fp226 = 0.0000000000000000e+00 + fp112;
LIBINT2_REALTYPE fp412;
fp412 = fp256 * fp245;
LIBINT2_REALTYPE fp411;
fp411 = fp412 * fp226;
LIBINT2_REALTYPE fp14;
fp14 = fp411;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp410;
fp410 = fp255 * fp243;
LIBINT2_REALTYPE fp409;
fp409 = fp410 * fp227;
LIBINT2_REALTYPE fp15;
fp15 = fp409;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp98;
fp98 = fp194 * fp120;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->PB_z[vi], fp123, fp98);
LIBINT2_REALTYPE fp225;
fp225 = 0.0000000000000000e+00 + fp97;
LIBINT2_REALTYPE fp408;
fp408 = fp255 * fp245;
LIBINT2_REALTYPE fp407;
fp407 = fp408 * fp225;
LIBINT2_REALTYPE fp16;
fp16 = fp407;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp406;
fp406 = fp256 * fp243;
LIBINT2_REALTYPE fp405;
fp405 = fp406 * fp225;
LIBINT2_REALTYPE fp17;
fp17 = fp405;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp239;
fp239 = 0.0000000000000000e+00 + fp158;
LIBINT2_REALTYPE fp404;
fp404 = fp254 * fp239;
LIBINT2_REALTYPE fp403;
fp403 = fp404 * fp230;
LIBINT2_REALTYPE fp18;
fp18 = fp403;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp238;
fp238 = 0.0000000000000000e+00 + fp135;
LIBINT2_REALTYPE fp402;
fp402 = fp253 * fp238;
LIBINT2_REALTYPE fp401;
fp401 = fp402 * fp230;
LIBINT2_REALTYPE fp19;
fp19 = fp401;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp400;
fp400 = fp253 * fp239;
LIBINT2_REALTYPE fp399;
fp399 = fp400 * fp229;
LIBINT2_REALTYPE fp20;
fp20 = fp399;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp398;
fp398 = fp252 * fp237;
LIBINT2_REALTYPE fp397;
fp397 = fp398 * fp230;
LIBINT2_REALTYPE fp21;
fp21 = fp397;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp396;
fp396 = fp252 * fp239;
LIBINT2_REALTYPE fp395;
fp395 = fp396 * fp228;
LIBINT2_REALTYPE fp22;
fp22 = fp395;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp418;
fp418 = fp256 * fp240;
LIBINT2_REALTYPE fp417;
fp417 = fp418 * fp228;
LIBINT2_REALTYPE fp11;
fp11 = fp417;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp218;
fp218 = 0.0000000000000000e+00 + fp118;
LIBINT2_REALTYPE fp231;
fp231 = 0.0000000000000000e+00 + fp133;
LIBINT2_REALTYPE fp302;
fp302 = fp255 * fp231;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp218;
LIBINT2_REALTYPE fp69;
fp69 = fp301;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+69)*1+lsi)*1]),&(fp69),1);
LIBINT2_REALTYPE fp216;
fp216 = 0.0000000000000000e+00 + fp92;
LIBINT2_REALTYPE fp233;
fp233 = 0.0000000000000000e+00 + fp159;
LIBINT2_REALTYPE fp300;
fp300 = fp255 * fp233;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp216;
LIBINT2_REALTYPE fp70;
fp70 = fp299;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+70)*1+lsi)*1]),&(fp70),1);
LIBINT2_REALTYPE fp298;
fp298 = fp256 * fp231;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * fp216;
LIBINT2_REALTYPE fp71;
fp71 = fp297;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+71)*1+lsi)*1]),&(fp71),1);
LIBINT2_REALTYPE fp248;
fp248 = 0.0000000000000000e+00 + fp199;
LIBINT2_REALTYPE fp296;
fp296 = fp248 * fp239;
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp224;
LIBINT2_REALTYPE fp72;
fp72 = fp295;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+72)*1+lsi)*1]),&(fp72),1);
LIBINT2_REALTYPE fp247;
fp247 = 0.0000000000000000e+00 + fp175;
LIBINT2_REALTYPE fp294;
fp294 = fp247 * fp238;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp224;
LIBINT2_REALTYPE fp73;
fp73 = fp293;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+73)*1+lsi)*1]),&(fp73),1);
LIBINT2_REALTYPE fp292;
fp292 = fp247 * fp239;
LIBINT2_REALTYPE fp291;
fp291 = fp292 * fp223;
LIBINT2_REALTYPE fp74;
fp74 = fp291;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+74)*1+lsi)*1]),&(fp74),1);
LIBINT2_REALTYPE fp246;
fp246 = 0.0000000000000000e+00 + fp184;
LIBINT2_REALTYPE fp290;
fp290 = fp246 * fp237;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp224;
LIBINT2_REALTYPE fp75;
fp75 = fp289;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+75)*1+lsi)*1]),&(fp75),1);
LIBINT2_REALTYPE fp288;
fp288 = fp246 * fp239;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp222;
LIBINT2_REALTYPE fp76;
fp76 = fp287;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+76)*1+lsi)*1]),&(fp76),1);
LIBINT2_REALTYPE fp286;
fp286 = fp247 * fp237;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp222;
LIBINT2_REALTYPE fp77;
fp77 = fp285;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+77)*1+lsi)*1]),&(fp77),1);
LIBINT2_REALTYPE fp284;
fp284 = fp251 * fp233;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp224;
LIBINT2_REALTYPE fp78;
fp78 = fp283;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+78)*1+lsi)*1]),&(fp78),1);
LIBINT2_REALTYPE fp350;
fp350 = fp249 * fp243;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp221;
LIBINT2_REALTYPE fp45;
fp45 = fp349;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp280;
fp280 = fp250 * fp233;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp223;
LIBINT2_REALTYPE fp80;
fp80 = fp279;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+80)*1+lsi)*1]),&(fp80),1);
LIBINT2_REALTYPE fp278;
fp278 = fp249 * fp231;
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp224;
LIBINT2_REALTYPE fp81;
fp81 = fp277;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+81)*1+lsi)*1]),&(fp81),1);
LIBINT2_REALTYPE fp276;
fp276 = fp249 * fp233;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp222;
LIBINT2_REALTYPE fp82;
fp82 = fp275;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+82)*1+lsi)*1]),&(fp82),1);
LIBINT2_REALTYPE fp274;
fp274 = fp250 * fp231;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp222;
LIBINT2_REALTYPE fp83;
fp83 = fp273;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+83)*1+lsi)*1]),&(fp83),1);
LIBINT2_REALTYPE fp272;
fp272 = fp251 * fp239;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * fp218;
LIBINT2_REALTYPE fp84;
fp84 = fp271;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+84)*1+lsi)*1]),&(fp84),1);
LIBINT2_REALTYPE fp270;
fp270 = fp250 * fp238;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp218;
LIBINT2_REALTYPE fp85;
fp85 = fp269;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+85)*1+lsi)*1]),&(fp85),1);
LIBINT2_REALTYPE fp217;
fp217 = 0.0000000000000000e+00 + fp102;
LIBINT2_REALTYPE fp268;
fp268 = fp250 * fp239;
LIBINT2_REALTYPE fp267;
fp267 = fp268 * fp217;
LIBINT2_REALTYPE fp86;
fp86 = fp267;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+86)*1+lsi)*1]),&(fp86),1);
LIBINT2_REALTYPE fp266;
fp266 = fp249 * fp237;
LIBINT2_REALTYPE fp265;
fp265 = fp266 * fp218;
LIBINT2_REALTYPE fp87;
fp87 = fp265;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+87)*1+lsi)*1]),&(fp87),1);
LIBINT2_REALTYPE fp264;
fp264 = fp249 * fp239;
LIBINT2_REALTYPE fp263;
fp263 = fp264 * fp216;
LIBINT2_REALTYPE fp88;
fp88 = fp263;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+88)*1+lsi)*1]),&(fp88),1);
LIBINT2_REALTYPE fp262;
fp262 = fp250 * fp237;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * fp216;
LIBINT2_REALTYPE fp89;
fp89 = fp261;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+89)*1+lsi)*1]),&(fp89),1);
LIBINT2_REALTYPE fp232;
fp232 = 0.0000000000000000e+00 + fp143;
LIBINT2_REALTYPE fp282;
fp282 = fp250 * fp232;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp224;
LIBINT2_REALTYPE fp79;
fp79 = fp281;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+79)*1+lsi)*1]),&(fp79),1);
LIBINT2_REALTYPE fp219;
fp219 = 0.0000000000000000e+00 + fp100;
LIBINT2_REALTYPE fp348;
fp348 = fp249 * fp245;
LIBINT2_REALTYPE fp347;
fp347 = fp348 * fp219;
LIBINT2_REALTYPE fp46;
fp46 = fp347;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp346;
fp346 = fp250 * fp243;
LIBINT2_REALTYPE fp345;
fp345 = fp346 * fp219;
LIBINT2_REALTYPE fp47;
fp47 = fp345;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp344;
fp344 = fp257 * fp239;
LIBINT2_REALTYPE fp343;
fp343 = fp344 * fp221;
LIBINT2_REALTYPE fp48;
fp48 = fp343;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp342;
fp342 = fp256 * fp238;
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp221;
LIBINT2_REALTYPE fp49;
fp49 = fp341;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp340;
fp340 = fp256 * fp239;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp220;
LIBINT2_REALTYPE fp50;
fp50 = fp339;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp338;
fp338 = fp255 * fp237;
LIBINT2_REALTYPE fp337;
fp337 = fp338 * fp221;
LIBINT2_REALTYPE fp51;
fp51 = fp337;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp336;
fp336 = fp255 * fp239;
LIBINT2_REALTYPE fp335;
fp335 = fp336 * fp219;
LIBINT2_REALTYPE fp52;
fp52 = fp335;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp334;
fp334 = fp256 * fp237;
LIBINT2_REALTYPE fp333;
fp333 = fp334 * fp219;
LIBINT2_REALTYPE fp53;
fp53 = fp333;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp332;
fp332 = fp248 * fp233;
LIBINT2_REALTYPE fp331;
fp331 = fp332 * fp230;
LIBINT2_REALTYPE fp54;
fp54 = fp331;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+54)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp330;
fp330 = fp247 * fp232;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * fp230;
LIBINT2_REALTYPE fp55;
fp55 = fp329;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+55)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp304;
fp304 = fp256 * fp233;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp217;
LIBINT2_REALTYPE fp68;
fp68 = fp303;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+68)*1+lsi)*1]),&(fp68),1);
LIBINT2_REALTYPE fp326;
fp326 = fp246 * fp231;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp230;
LIBINT2_REALTYPE fp57;
fp57 = fp325;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+57)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp324;
fp324 = fp246 * fp233;
LIBINT2_REALTYPE fp323;
fp323 = fp324 * fp228;
LIBINT2_REALTYPE fp58;
fp58 = fp323;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+58)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp322;
fp322 = fp247 * fp231;
LIBINT2_REALTYPE fp321;
fp321 = fp322 * fp228;
LIBINT2_REALTYPE fp59;
fp59 = fp321;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+59)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp320;
fp320 = fp248 * fp245;
LIBINT2_REALTYPE fp319;
fp319 = fp320 * fp218;
LIBINT2_REALTYPE fp60;
fp60 = fp319;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+60)*1+lsi)*1]),&(fp60),1);
LIBINT2_REALTYPE fp318;
fp318 = fp247 * fp244;
LIBINT2_REALTYPE fp317;
fp317 = fp318 * fp218;
LIBINT2_REALTYPE fp61;
fp61 = fp317;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+61)*1+lsi)*1]),&(fp61),1);
LIBINT2_REALTYPE fp316;
fp316 = fp247 * fp245;
LIBINT2_REALTYPE fp315;
fp315 = fp316 * fp217;
LIBINT2_REALTYPE fp62;
fp62 = fp315;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+62)*1+lsi)*1]),&(fp62),1);
LIBINT2_REALTYPE fp314;
fp314 = fp246 * fp243;
LIBINT2_REALTYPE fp313;
fp313 = fp314 * fp218;
LIBINT2_REALTYPE fp63;
fp63 = fp313;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+63)*1+lsi)*1]),&(fp63),1);
LIBINT2_REALTYPE fp312;
fp312 = fp246 * fp245;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * fp216;
LIBINT2_REALTYPE fp64;
fp64 = fp311;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+64)*1+lsi)*1]),&(fp64),1);
LIBINT2_REALTYPE fp310;
fp310 = fp247 * fp243;
LIBINT2_REALTYPE fp309;
fp309 = fp310 * fp216;
LIBINT2_REALTYPE fp65;
fp65 = fp309;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+65)*1+lsi)*1]),&(fp65),1);
LIBINT2_REALTYPE fp308;
fp308 = fp257 * fp233;
LIBINT2_REALTYPE fp307;
fp307 = fp308 * fp218;
LIBINT2_REALTYPE fp66;
fp66 = fp307;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+66)*1+lsi)*1]),&(fp66),1);
LIBINT2_REALTYPE fp306;
fp306 = fp256 * fp232;
LIBINT2_REALTYPE fp305;
fp305 = fp306 * fp218;
LIBINT2_REALTYPE fp67;
fp67 = fp305;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+67)*1+lsi)*1]),&(fp67),1);
LIBINT2_REALTYPE fp328;
fp328 = fp247 * fp233;
LIBINT2_REALTYPE fp327;
fp327 = fp328 * fp229;
LIBINT2_REALTYPE fp56;
fp56 = fp327;
_libint2_static_api_inc1_short_(&(stack[((hsi*90+56)*1+lsi)*1]),&(fp56),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 441 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif