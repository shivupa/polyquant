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
void CR_aB_m__0___CartesianMultipole_sB_1_c_0_c_2_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src2[((hsi*50+7)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src2[((hsi*50+6)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->BO_z[vi], fp104, fp103);
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src2[((hsi*50+5)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->BO_z[vi], fp105, fp104);
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BO_z[vi], fp108, fp106);
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + src1[((hsi*50+10)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = 0.0000000000000000e+00 + src0[((hsi*50+31)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = inteval->BO_x[vi] * fp185;
LIBINT2_REALTYPE fp184;
fp184 = 0.0000000000000000e+00 + src0[((hsi*50+32)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp184 + fp187;
LIBINT2_REALTYPE fp439;
fp439 = fp186 * fp151;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp110;
target[((hsi*165+60)*1+lsi)*1] = fp438;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*50+17)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src2[((hsi*50+16)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_z[vi], fp48, fp47);
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_z[vi] * fp50;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_z[vi] * fp47;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*50+18)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp45;
fp45 = fp43 + fp46;
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + src1[((hsi*50+0)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + src0[((hsi*50+30)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->BO_x[vi], fp181, fp185);
LIBINT2_REALTYPE fp441;
fp441 = fp182 * fp159;
LIBINT2_REALTYPE fp440;
fp440 = fp441 * fp45;
target[((hsi*165+59)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*50+15)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_z[vi], fp49, fp48);
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_z[vi], fp52, fp50);
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + src1[((hsi*50+1)*1+lsi)*1];
LIBINT2_REALTYPE fp443;
fp443 = fp182 * fp158;
LIBINT2_REALTYPE fp442;
fp442 = fp443 * fp54;
target[((hsi*165+58)*1+lsi)*1] = fp442;
LIBINT2_REALTYPE fp445;
fp445 = fp186 * fp159;
LIBINT2_REALTYPE fp444;
fp444 = fp445 * fp54;
target[((hsi*165+57)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + src2[((hsi*50+2)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + src2[((hsi*50+1)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->BO_z[vi], fp132, fp131);
LIBINT2_REALTYPE fp130;
fp130 = inteval->BO_z[vi] * fp134;
LIBINT2_REALTYPE fp128;
fp128 = inteval->BO_z[vi] * fp131;
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src2[((hsi*50+3)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp126 + fp128;
LIBINT2_REALTYPE fp129;
fp129 = fp127 + fp130;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src1[((hsi*50+15)*1+lsi)*1];
LIBINT2_REALTYPE fp447;
fp447 = fp182 * fp147;
LIBINT2_REALTYPE fp446;
fp446 = fp447 * fp129;
target[((hsi*165+56)*1+lsi)*1] = fp446;
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src2[((hsi*50+0)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->BO_z[vi], fp133, fp132);
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->BO_z[vi], fp136, fp134);
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src1[((hsi*50+16)*1+lsi)*1];
LIBINT2_REALTYPE fp449;
fp449 = fp182 * fp146;
LIBINT2_REALTYPE fp448;
fp448 = fp449 * fp138;
target[((hsi*165+55)*1+lsi)*1] = fp448;
LIBINT2_REALTYPE fp451;
fp451 = fp186 * fp147;
LIBINT2_REALTYPE fp450;
fp450 = fp451 * fp138;
target[((hsi*165+54)*1+lsi)*1] = fp450;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src2[((hsi*50+37)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src2[((hsi*50+36)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_z[vi], fp62, fp61);
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_z[vi] * fp64;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_z[vi] * fp61;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*50+38)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp56 + fp58;
LIBINT2_REALTYPE fp59;
fp59 = fp57 + fp60;
LIBINT2_REALTYPE fp155;
fp155 = 0.0000000000000000e+00 + src1[((hsi*50+5)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = 0.0000000000000000e+00 + src0[((hsi*50+6)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = 0.0000000000000000e+00 + src0[((hsi*50+5)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
LIBINT2_REALTYPE fp203;
fp203 = libint2::fma_plus(inteval->BO_x[vi], fp202, fp206);
LIBINT2_REALTYPE fp453;
fp453 = fp203 * fp155;
LIBINT2_REALTYPE fp452;
fp452 = fp453 * fp59;
target[((hsi*165+53)*1+lsi)*1] = fp452;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src2[((hsi*50+35)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_z[vi], fp63, fp62);
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BO_z[vi], fp66, fp64);
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + src1[((hsi*50+6)*1+lsi)*1];
LIBINT2_REALTYPE fp455;
fp455 = fp203 * fp154;
LIBINT2_REALTYPE fp454;
fp454 = fp455 * fp68;
target[((hsi*165+52)*1+lsi)*1] = fp454;
LIBINT2_REALTYPE fp227;
fp227 = 0.0000000000000000e+00 + src0[((hsi*50+46)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = inteval->BO_x[vi] * fp227;
LIBINT2_REALTYPE fp226;
fp226 = 0.0000000000000000e+00 + src0[((hsi*50+47)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp226 + fp229;
LIBINT2_REALTYPE fp559;
fp559 = fp228 * fp159;
LIBINT2_REALTYPE fp558;
fp558 = fp559 * fp138;
target[((hsi*165+0)*1+lsi)*1] = fp558;
LIBINT2_REALTYPE fp220;
fp220 = 0.0000000000000000e+00 + src0[((hsi*50+1)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = 0.0000000000000000e+00 + src0[((hsi*50+0)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
LIBINT2_REALTYPE fp217;
fp217 = libint2::fma_plus(inteval->BO_x[vi], fp216, fp220);
LIBINT2_REALTYPE fp459;
fp459 = fp217 * fp151;
LIBINT2_REALTYPE fp458;
fp458 = fp459 * fp59;
target[((hsi*165+50)*1+lsi)*1] = fp458;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src1[((hsi*50+11)*1+lsi)*1];
LIBINT2_REALTYPE fp461;
fp461 = fp217 * fp150;
LIBINT2_REALTYPE fp460;
fp460 = fp461 * fp68;
target[((hsi*165+49)*1+lsi)*1] = fp460;
LIBINT2_REALTYPE fp222;
fp222 = inteval->BO_x[vi] * fp220;
LIBINT2_REALTYPE fp219;
fp219 = 0.0000000000000000e+00 + src0[((hsi*50+2)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp219 + fp222;
LIBINT2_REALTYPE fp463;
fp463 = fp221 * fp151;
LIBINT2_REALTYPE fp462;
fp462 = fp463 * fp68;
target[((hsi*165+48)*1+lsi)*1] = fp462;
LIBINT2_REALTYPE fp192;
fp192 = 0.0000000000000000e+00 + src0[((hsi*50+11)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = 0.0000000000000000e+00 + src0[((hsi*50+10)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(inteval->BO_x[vi], fp188, fp192);
LIBINT2_REALTYPE fp465;
fp465 = fp189 * fp159;
LIBINT2_REALTYPE fp464;
fp464 = fp465 * fp59;
target[((hsi*165+47)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp467;
fp467 = fp189 * fp158;
LIBINT2_REALTYPE fp466;
fp466 = fp467 * fp68;
target[((hsi*165+46)*1+lsi)*1] = fp466;
LIBINT2_REALTYPE fp194;
fp194 = inteval->BO_x[vi] * fp192;
LIBINT2_REALTYPE fp191;
fp191 = 0.0000000000000000e+00 + src0[((hsi*50+12)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp191 + fp194;
LIBINT2_REALTYPE fp469;
fp469 = fp193 * fp159;
LIBINT2_REALTYPE fp468;
fp468 = fp469 * fp68;
target[((hsi*165+45)*1+lsi)*1] = fp468;
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_z[vi] * fp106;
LIBINT2_REALTYPE fp100;
fp100 = inteval->BO_z[vi] * fp103;
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src2[((hsi*50+8)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp98 + fp100;
LIBINT2_REALTYPE fp101;
fp101 = fp99 + fp102;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src1[((hsi*50+35)*1+lsi)*1];
LIBINT2_REALTYPE fp471;
fp471 = fp203 * fp149;
LIBINT2_REALTYPE fp470;
fp470 = fp471 * fp101;
target[((hsi*165+44)*1+lsi)*1] = fp470;
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src1[((hsi*50+36)*1+lsi)*1];
LIBINT2_REALTYPE fp473;
fp473 = fp203 * fp148;
LIBINT2_REALTYPE fp472;
fp472 = fp473 * fp110;
target[((hsi*165+43)*1+lsi)*1] = fp472;
LIBINT2_REALTYPE fp208;
fp208 = inteval->BO_x[vi] * fp206;
LIBINT2_REALTYPE fp205;
fp205 = 0.0000000000000000e+00 + src0[((hsi*50+7)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp205 + fp208;
LIBINT2_REALTYPE fp475;
fp475 = fp207 * fp149;
LIBINT2_REALTYPE fp474;
fp474 = fp475 * fp110;
target[((hsi*165+42)*1+lsi)*1] = fp474;
LIBINT2_REALTYPE fp457;
fp457 = fp207 * fp155;
LIBINT2_REALTYPE fp456;
fp456 = fp457 * fp68;
target[((hsi*165+51)*1+lsi)*1] = fp456;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*50+32)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*50+31)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_z[vi], fp34, fp33);
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*50+30)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp35, fp34);
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_z[vi], fp38, fp36);
LIBINT2_REALTYPE fp397;
fp397 = fp221 * fp147;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp40;
target[((hsi*165+81)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp33;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*50+33)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp31;
fp31 = fp29 + fp32;
LIBINT2_REALTYPE fp178;
fp178 = 0.0000000000000000e+00 + src0[((hsi*50+16)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = 0.0000000000000000e+00 + src0[((hsi*50+15)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_plus(inteval->BO_x[vi], fp174, fp178);
LIBINT2_REALTYPE fp399;
fp399 = fp175 * fp159;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp31;
target[((hsi*165+80)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp401;
fp401 = fp175 * fp158;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp40;
target[((hsi*165+79)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp180;
fp180 = inteval->BO_x[vi] * fp178;
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + src0[((hsi*50+17)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = fp177 + fp180;
LIBINT2_REALTYPE fp403;
fp403 = fp179 * fp159;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp40;
target[((hsi*165+78)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src2[((hsi*50+12)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src2[((hsi*50+11)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_z[vi], fp76, fp75);
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_z[vi] * fp78;
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_z[vi] * fp75;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src2[((hsi*50+13)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp73;
fp73 = fp71 + fp74;
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + src1[((hsi*50+30)*1+lsi)*1];
LIBINT2_REALTYPE fp405;
fp405 = fp203 * fp145;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp73;
target[((hsi*165+77)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src2[((hsi*50+10)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_z[vi], fp77, fp76);
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BO_z[vi], fp80, fp78);
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + src1[((hsi*50+31)*1+lsi)*1];
LIBINT2_REALTYPE fp407;
fp407 = fp203 * fp144;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp82;
target[((hsi*165+76)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp409;
fp409 = fp207 * fp145;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp82;
target[((hsi*165+75)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp411;
fp411 = fp189 * fp145;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp101;
target[((hsi*165+74)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp413;
fp413 = fp189 * fp144;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp110;
target[((hsi*165+73)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp437;
fp437 = fp182 * fp150;
LIBINT2_REALTYPE fp436;
fp436 = fp437 * fp110;
target[((hsi*165+61)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp417;
fp417 = fp217 * fp145;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp45;
target[((hsi*165+71)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp419;
fp419 = fp217 * fp144;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp54;
target[((hsi*165+70)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp421;
fp421 = fp221 * fp145;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp54;
target[((hsi*165+69)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp423;
fp423 = fp175 * fp145;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp129;
target[((hsi*165+68)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp425;
fp425 = fp175 * fp144;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp138;
target[((hsi*165+67)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp427;
fp427 = fp179 * fp145;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp138;
target[((hsi*165+66)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp429;
fp429 = fp182 * fp155;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp73;
target[((hsi*165+65)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp431;
fp431 = fp182 * fp154;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp82;
target[((hsi*165+64)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp433;
fp433 = fp186 * fp155;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp82;
target[((hsi*165+63)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp435;
fp435 = fp182 * fp151;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp101;
target[((hsi*165+62)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp415;
fp415 = fp193 * fp145;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp110;
target[((hsi*165+72)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp152;
fp152 = 0.0000000000000000e+00 + src1[((hsi*50+41)*1+lsi)*1];
LIBINT2_REALTYPE fp521;
fp521 = fp217 * fp152;
LIBINT2_REALTYPE fp520;
fp520 = fp521 * fp110;
target[((hsi*165+19)*1+lsi)*1] = fp520;
LIBINT2_REALTYPE fp153;
fp153 = 0.0000000000000000e+00 + src1[((hsi*50+40)*1+lsi)*1];
LIBINT2_REALTYPE fp523;
fp523 = fp221 * fp153;
LIBINT2_REALTYPE fp522;
fp522 = fp523 * fp110;
target[((hsi*165+18)*1+lsi)*1] = fp522;
LIBINT2_REALTYPE fp525;
fp525 = fp203 * fp153;
LIBINT2_REALTYPE fp524;
fp524 = fp525 * fp129;
target[((hsi*165+17)*1+lsi)*1] = fp524;
LIBINT2_REALTYPE fp527;
fp527 = fp203 * fp152;
LIBINT2_REALTYPE fp526;
fp526 = fp527 * fp138;
target[((hsi*165+16)*1+lsi)*1] = fp526;
LIBINT2_REALTYPE fp529;
fp529 = fp207 * fp153;
LIBINT2_REALTYPE fp528;
fp528 = fp529 * fp138;
target[((hsi*165+15)*1+lsi)*1] = fp528;
LIBINT2_REALTYPE fp213;
fp213 = 0.0000000000000000e+00 + src0[((hsi*50+41)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = 0.0000000000000000e+00 + src0[((hsi*50+40)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
LIBINT2_REALTYPE fp210;
fp210 = libint2::fma_plus(inteval->BO_x[vi], fp209, fp213);
LIBINT2_REALTYPE fp531;
fp531 = fp210 * fp159;
LIBINT2_REALTYPE fp530;
fp530 = fp531 * fp101;
target[((hsi*165+14)*1+lsi)*1] = fp530;
LIBINT2_REALTYPE fp533;
fp533 = fp210 * fp158;
LIBINT2_REALTYPE fp532;
fp532 = fp533 * fp110;
target[((hsi*165+13)*1+lsi)*1] = fp532;
LIBINT2_REALTYPE fp215;
fp215 = inteval->BO_x[vi] * fp213;
LIBINT2_REALTYPE fp212;
fp212 = 0.0000000000000000e+00 + src0[((hsi*50+42)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp212 + fp215;
LIBINT2_REALTYPE fp535;
fp535 = fp214 * fp159;
LIBINT2_REALTYPE fp534;
fp534 = fp535 * fp110;
target[((hsi*165+12)*1+lsi)*1] = fp534;
LIBINT2_REALTYPE fp537;
fp537 = fp210 * fp155;
LIBINT2_REALTYPE fp536;
fp536 = fp537 * fp129;
target[((hsi*165+11)*1+lsi)*1] = fp536;
LIBINT2_REALTYPE fp477;
fp477 = fp217 * fp149;
LIBINT2_REALTYPE fp476;
fp476 = fp477 * fp73;
target[((hsi*165+41)*1+lsi)*1] = fp476;
LIBINT2_REALTYPE fp541;
fp541 = fp214 * fp155;
LIBINT2_REALTYPE fp540;
fp540 = fp541 * fp138;
target[((hsi*165+9)*1+lsi)*1] = fp540;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src2[((hsi*50+47)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src2[((hsi*50+46)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->BO_z[vi], fp118, fp117);
LIBINT2_REALTYPE fp116;
fp116 = inteval->BO_z[vi] * fp120;
LIBINT2_REALTYPE fp114;
fp114 = inteval->BO_z[vi] * fp117;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src2[((hsi*50+48)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp112 + fp114;
LIBINT2_REALTYPE fp115;
fp115 = fp113 + fp116;
LIBINT2_REALTYPE fp543;
fp543 = fp217 * fp159;
LIBINT2_REALTYPE fp542;
fp542 = fp543 * fp115;
target[((hsi*165+8)*1+lsi)*1] = fp542;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src2[((hsi*50+45)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->BO_z[vi], fp119, fp118);
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->BO_z[vi], fp122, fp120);
LIBINT2_REALTYPE fp545;
fp545 = fp217 * fp158;
LIBINT2_REALTYPE fp544;
fp544 = fp545 * fp124;
target[((hsi*165+7)*1+lsi)*1] = fp544;
LIBINT2_REALTYPE fp547;
fp547 = fp221 * fp159;
LIBINT2_REALTYPE fp546;
fp546 = fp547 * fp124;
target[((hsi*165+6)*1+lsi)*1] = fp546;
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + src1[((hsi*50+45)*1+lsi)*1];
LIBINT2_REALTYPE fp549;
fp549 = fp217 * fp157;
LIBINT2_REALTYPE fp548;
fp548 = fp549 * fp129;
target[((hsi*165+5)*1+lsi)*1] = fp548;
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + src1[((hsi*50+46)*1+lsi)*1];
LIBINT2_REALTYPE fp551;
fp551 = fp217 * fp156;
LIBINT2_REALTYPE fp550;
fp550 = fp551 * fp138;
target[((hsi*165+4)*1+lsi)*1] = fp550;
LIBINT2_REALTYPE fp553;
fp553 = fp221 * fp157;
LIBINT2_REALTYPE fp552;
fp552 = fp553 * fp138;
target[((hsi*165+3)*1+lsi)*1] = fp552;
LIBINT2_REALTYPE fp223;
fp223 = 0.0000000000000000e+00 + src0[((hsi*50+45)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
LIBINT2_REALTYPE fp224;
fp224 = libint2::fma_plus(inteval->BO_x[vi], fp223, fp227);
LIBINT2_REALTYPE fp555;
fp555 = fp224 * fp159;
LIBINT2_REALTYPE fp554;
fp554 = fp555 * fp129;
target[((hsi*165+2)*1+lsi)*1] = fp554;
LIBINT2_REALTYPE fp557;
fp557 = fp224 * fp158;
LIBINT2_REALTYPE fp556;
fp556 = fp557 * fp138;
target[((hsi*165+1)*1+lsi)*1] = fp556;
LIBINT2_REALTYPE fp539;
fp539 = fp210 * fp154;
LIBINT2_REALTYPE fp538;
fp538 = fp539 * fp138;
target[((hsi*165+10)*1+lsi)*1] = fp538;
LIBINT2_REALTYPE fp479;
fp479 = fp217 * fp148;
LIBINT2_REALTYPE fp478;
fp478 = fp479 * fp82;
target[((hsi*165+40)*1+lsi)*1] = fp478;
LIBINT2_REALTYPE fp481;
fp481 = fp221 * fp149;
LIBINT2_REALTYPE fp480;
fp480 = fp481 * fp82;
target[((hsi*165+39)*1+lsi)*1] = fp480;
LIBINT2_REALTYPE fp483;
fp483 = fp189 * fp149;
LIBINT2_REALTYPE fp482;
fp482 = fp483 * fp129;
target[((hsi*165+38)*1+lsi)*1] = fp482;
LIBINT2_REALTYPE fp485;
fp485 = fp189 * fp148;
LIBINT2_REALTYPE fp484;
fp484 = fp485 * fp138;
target[((hsi*165+37)*1+lsi)*1] = fp484;
LIBINT2_REALTYPE fp487;
fp487 = fp193 * fp149;
LIBINT2_REALTYPE fp486;
fp486 = fp487 * fp138;
target[((hsi*165+36)*1+lsi)*1] = fp486;
LIBINT2_REALTYPE fp199;
fp199 = 0.0000000000000000e+00 + src0[((hsi*50+36)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = 0.0000000000000000e+00 + src0[((hsi*50+35)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp196;
fp196 = libint2::fma_plus(inteval->BO_x[vi], fp195, fp199);
LIBINT2_REALTYPE fp489;
fp489 = fp196 * fp155;
LIBINT2_REALTYPE fp488;
fp488 = fp489 * fp101;
target[((hsi*165+35)*1+lsi)*1] = fp488;
LIBINT2_REALTYPE fp491;
fp491 = fp196 * fp154;
LIBINT2_REALTYPE fp490;
fp490 = fp491 * fp110;
target[((hsi*165+34)*1+lsi)*1] = fp490;
LIBINT2_REALTYPE fp201;
fp201 = inteval->BO_x[vi] * fp199;
LIBINT2_REALTYPE fp198;
fp198 = 0.0000000000000000e+00 + src0[((hsi*50+37)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp198 + fp201;
LIBINT2_REALTYPE fp493;
fp493 = fp200 * fp155;
LIBINT2_REALTYPE fp492;
fp492 = fp493 * fp110;
target[((hsi*165+33)*1+lsi)*1] = fp492;
LIBINT2_REALTYPE fp495;
fp495 = fp196 * fp159;
LIBINT2_REALTYPE fp494;
fp494 = fp495 * fp73;
target[((hsi*165+32)*1+lsi)*1] = fp494;
LIBINT2_REALTYPE fp519;
fp519 = fp217 * fp153;
LIBINT2_REALTYPE fp518;
fp518 = fp519 * fp101;
target[((hsi*165+20)*1+lsi)*1] = fp518;
LIBINT2_REALTYPE fp499;
fp499 = fp200 * fp159;
LIBINT2_REALTYPE fp498;
fp498 = fp499 * fp82;
target[((hsi*165+30)*1+lsi)*1] = fp498;
LIBINT2_REALTYPE fp501;
fp501 = fp196 * fp151;
LIBINT2_REALTYPE fp500;
fp500 = fp501 * fp129;
target[((hsi*165+29)*1+lsi)*1] = fp500;
LIBINT2_REALTYPE fp503;
fp503 = fp196 * fp150;
LIBINT2_REALTYPE fp502;
fp502 = fp503 * fp138;
target[((hsi*165+28)*1+lsi)*1] = fp502;
LIBINT2_REALTYPE fp505;
fp505 = fp200 * fp151;
LIBINT2_REALTYPE fp504;
fp504 = fp505 * fp138;
target[((hsi*165+27)*1+lsi)*1] = fp504;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src2[((hsi*50+42)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src2[((hsi*50+41)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->BO_z[vi], fp90, fp89);
LIBINT2_REALTYPE fp88;
fp88 = inteval->BO_z[vi] * fp92;
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_z[vi] * fp89;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src2[((hsi*50+43)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp84 + fp86;
LIBINT2_REALTYPE fp87;
fp87 = fp85 + fp88;
LIBINT2_REALTYPE fp507;
fp507 = fp217 * fp155;
LIBINT2_REALTYPE fp506;
fp506 = fp507 * fp87;
target[((hsi*165+26)*1+lsi)*1] = fp506;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src2[((hsi*50+40)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->BO_z[vi], fp91, fp90);
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->BO_z[vi], fp94, fp92);
LIBINT2_REALTYPE fp509;
fp509 = fp217 * fp154;
LIBINT2_REALTYPE fp508;
fp508 = fp509 * fp96;
target[((hsi*165+25)*1+lsi)*1] = fp508;
LIBINT2_REALTYPE fp511;
fp511 = fp221 * fp155;
LIBINT2_REALTYPE fp510;
fp510 = fp511 * fp96;
target[((hsi*165+24)*1+lsi)*1] = fp510;
LIBINT2_REALTYPE fp513;
fp513 = fp203 * fp159;
LIBINT2_REALTYPE fp512;
fp512 = fp513 * fp87;
target[((hsi*165+23)*1+lsi)*1] = fp512;
LIBINT2_REALTYPE fp515;
fp515 = fp203 * fp158;
LIBINT2_REALTYPE fp514;
fp514 = fp515 * fp96;
target[((hsi*165+22)*1+lsi)*1] = fp514;
LIBINT2_REALTYPE fp517;
fp517 = fp207 * fp159;
LIBINT2_REALTYPE fp516;
fp516 = fp517 * fp96;
target[((hsi*165+21)*1+lsi)*1] = fp516;
LIBINT2_REALTYPE fp497;
fp497 = fp196 * fp158;
LIBINT2_REALTYPE fp496;
fp496 = fp497 * fp82;
target[((hsi*165+31)*1+lsi)*1] = fp496;
LIBINT2_REALTYPE fp164;
fp164 = 0.0000000000000000e+00 + src0[((hsi*50+21)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + src0[((hsi*50+20)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(inteval->BO_x[vi], fp160, fp164);
LIBINT2_REALTYPE fp273;
fp273 = fp161 * fp147;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp73;
target[((hsi*165+143)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp161 * fp146;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp82;
target[((hsi*165+142)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp166;
fp166 = inteval->BO_x[vi] * fp164;
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + src0[((hsi*50+22)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp163 + fp166;
LIBINT2_REALTYPE fp277;
fp277 = fp165 * fp147;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp82;
target[((hsi*165+141)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*50+22)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*50+21)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_z[vi], fp20, fp19);
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*50+23)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp17;
fp17 = fp15 + fp18;
LIBINT2_REALTYPE fp279;
fp279 = fp161 * fp155;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp17;
target[((hsi*165+140)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*50+20)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp21, fp20);
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_z[vi], fp24, fp22);
LIBINT2_REALTYPE fp281;
fp281 = fp161 * fp154;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp26;
target[((hsi*165+139)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp165 * fp155;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp26;
target[((hsi*165+138)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + src1[((hsi*50+20)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = fp161 * fp143;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp101;
target[((hsi*165+137)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + src1[((hsi*50+21)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = fp161 * fp142;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp110;
target[((hsi*165+136)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp165 * fp143;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp110;
target[((hsi*165+135)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp395;
fp395 = fp217 * fp146;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp40;
target[((hsi*165+82)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*50+27)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*50+26)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp5);
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*50+25)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp6);
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_z[vi], fp10, fp8);
LIBINT2_REALTYPE fp293;
fp293 = fp189 * fp150;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp12;
target[((hsi*165+133)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp193 * fp151;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp12;
target[((hsi*165+132)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*50+28)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp297;
fp297 = fp203 * fp147;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp3;
target[((hsi*165+131)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp203 * fp146;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp12;
target[((hsi*165+130)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp207 * fp147;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp12;
target[((hsi*165+129)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp175 * fp155;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp3;
target[((hsi*165+128)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp175 * fp154;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp12;
target[((hsi*165+127)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp179 * fp155;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp12;
target[((hsi*165+126)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp217 * fp143;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp3;
target[((hsi*165+125)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp291;
fp291 = fp189 * fp151;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp3;
target[((hsi*165+134)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp231;
fp231 = fp175 * fp147;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp45;
target[((hsi*165+164)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp175 * fp146;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp54;
target[((hsi*165+163)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp179 * fp147;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp54;
target[((hsi*165+162)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp189 * fp147;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp17;
target[((hsi*165+161)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp189 * fp146;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp26;
target[((hsi*165+160)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp193 * fp147;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp26;
target[((hsi*165+159)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp175 * fp151;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp17;
target[((hsi*165+158)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp175 * fp150;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp26;
target[((hsi*165+157)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp179 * fp151;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp26;
target[((hsi*165+156)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp271;
fp271 = fp165 * fp151;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp54;
target[((hsi*165+144)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp251;
fp251 = fp189 * fp142;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp54;
target[((hsi*165+154)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp193 * fp143;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp54;
target[((hsi*165+153)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp175 * fp143;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp73;
target[((hsi*165+152)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp175 * fp142;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp82;
target[((hsi*165+151)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp179 * fp143;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp82;
target[((hsi*165+150)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp203 * fp143;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp17;
target[((hsi*165+149)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp203 * fp142;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp26;
target[((hsi*165+148)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp207 * fp143;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp26;
target[((hsi*165+147)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp161 * fp151;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp45;
target[((hsi*165+146)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp269;
fp269 = fp161 * fp150;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp54;
target[((hsi*165+145)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp249;
fp249 = fp189 * fp143;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp45;
target[((hsi*165+155)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + src0[((hsi*50+26)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->BO_x[vi] * fp171;
LIBINT2_REALTYPE fp170;
fp170 = 0.0000000000000000e+00 + src0[((hsi*50+27)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp170 + fp173;
LIBINT2_REALTYPE fp355;
fp355 = fp172 * fp151;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp82;
target[((hsi*165+102)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + src0[((hsi*50+25)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(inteval->BO_x[vi], fp167, fp171);
LIBINT2_REALTYPE fp357;
fp357 = fp168 * fp155;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp45;
target[((hsi*165+101)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp359;
fp359 = fp168 * fp154;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp54;
target[((hsi*165+100)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp361;
fp361 = fp172 * fp155;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp54;
target[((hsi*165+99)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp363;
fp363 = fp168 * fp147;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp101;
target[((hsi*165+98)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp365;
fp365 = fp168 * fp146;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp110;
target[((hsi*165+97)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp367;
fp367 = fp172 * fp147;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp110;
target[((hsi*165+96)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp369;
fp369 = fp168 * fp159;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp17;
target[((hsi*165+95)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp371;
fp371 = fp168 * fp158;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp26;
target[((hsi*165+94)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp311;
fp311 = fp217 * fp142;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp12;
target[((hsi*165+124)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp375;
fp375 = fp168 * fp143;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp129;
target[((hsi*165+92)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp377;
fp377 = fp168 * fp142;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp138;
target[((hsi*165+91)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp379;
fp379 = fp172 * fp143;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp138;
target[((hsi*165+90)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp381;
fp381 = fp203 * fp151;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp31;
target[((hsi*165+89)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp383;
fp383 = fp203 * fp150;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp40;
target[((hsi*165+88)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp385;
fp385 = fp207 * fp151;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp40;
target[((hsi*165+87)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp387;
fp387 = fp189 * fp155;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp31;
target[((hsi*165+86)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp389;
fp389 = fp189 * fp154;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp40;
target[((hsi*165+85)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp391;
fp391 = fp193 * fp155;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp40;
target[((hsi*165+84)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp393;
fp393 = fp217 * fp147;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp31;
target[((hsi*165+83)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp373;
fp373 = fp172 * fp159;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp26;
target[((hsi*165+93)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp313;
fp313 = fp221 * fp143;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp12;
target[((hsi*165+123)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = fp161 * fp159;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp3;
target[((hsi*165+122)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp161 * fp158;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp12;
target[((hsi*165+121)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
fp319 = fp165 * fp159;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp12;
target[((hsi*165+120)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + src1[((hsi*50+25)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = fp189 * fp141;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp73;
target[((hsi*165+119)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src1[((hsi*50+26)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
fp323 = fp189 * fp140;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp82;
target[((hsi*165+118)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp193 * fp141;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp82;
target[((hsi*165+117)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp203 * fp141;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp45;
target[((hsi*165+116)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp203 * fp140;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp54;
target[((hsi*165+115)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp353;
fp353 = fp168 * fp150;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp82;
target[((hsi*165+103)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp333;
fp333 = fp175 * fp141;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp101;
target[((hsi*165+113)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp335;
fp335 = fp175 * fp140;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp110;
target[((hsi*165+112)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp337;
fp337 = fp179 * fp141;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp110;
target[((hsi*165+111)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = fp217 * fp141;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp17;
target[((hsi*165+110)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp217 * fp140;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp26;
target[((hsi*165+109)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp343;
fp343 = fp221 * fp141;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp26;
target[((hsi*165+108)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = fp161 * fp141;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp129;
target[((hsi*165+107)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = fp161 * fp140;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp138;
target[((hsi*165+106)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp349;
fp349 = fp165 * fp141;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp138;
target[((hsi*165+105)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = fp168 * fp151;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp73;
target[((hsi*165+104)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp331;
fp331 = fp207 * fp141;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp54;
target[((hsi*165+114)*1+lsi)*1] = fp330;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 560 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif