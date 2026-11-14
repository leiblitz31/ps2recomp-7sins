#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00124E90
// Address: 0x124e90 - 0x125750
void sub_00124E90_0x124e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124E90_0x124e90");
#endif

    switch (ctx->pc) {
        case 0x124e90u: goto label_124e90;
        case 0x124e94u: goto label_124e94;
        case 0x124e98u: goto label_124e98;
        case 0x124e9cu: goto label_124e9c;
        case 0x124ea0u: goto label_124ea0;
        case 0x124ea4u: goto label_124ea4;
        case 0x124ea8u: goto label_124ea8;
        case 0x124eacu: goto label_124eac;
        case 0x124eb0u: goto label_124eb0;
        case 0x124eb4u: goto label_124eb4;
        case 0x124eb8u: goto label_124eb8;
        case 0x124ebcu: goto label_124ebc;
        case 0x124ec0u: goto label_124ec0;
        case 0x124ec4u: goto label_124ec4;
        case 0x124ec8u: goto label_124ec8;
        case 0x124eccu: goto label_124ecc;
        case 0x124ed0u: goto label_124ed0;
        case 0x124ed4u: goto label_124ed4;
        case 0x124ed8u: goto label_124ed8;
        case 0x124edcu: goto label_124edc;
        case 0x124ee0u: goto label_124ee0;
        case 0x124ee4u: goto label_124ee4;
        case 0x124ee8u: goto label_124ee8;
        case 0x124eecu: goto label_124eec;
        case 0x124ef0u: goto label_124ef0;
        case 0x124ef4u: goto label_124ef4;
        case 0x124ef8u: goto label_124ef8;
        case 0x124efcu: goto label_124efc;
        case 0x124f00u: goto label_124f00;
        case 0x124f04u: goto label_124f04;
        case 0x124f08u: goto label_124f08;
        case 0x124f0cu: goto label_124f0c;
        case 0x124f10u: goto label_124f10;
        case 0x124f14u: goto label_124f14;
        case 0x124f18u: goto label_124f18;
        case 0x124f1cu: goto label_124f1c;
        case 0x124f20u: goto label_124f20;
        case 0x124f24u: goto label_124f24;
        case 0x124f28u: goto label_124f28;
        case 0x124f2cu: goto label_124f2c;
        case 0x124f30u: goto label_124f30;
        case 0x124f34u: goto label_124f34;
        case 0x124f38u: goto label_124f38;
        case 0x124f3cu: goto label_124f3c;
        case 0x124f40u: goto label_124f40;
        case 0x124f44u: goto label_124f44;
        case 0x124f48u: goto label_124f48;
        case 0x124f4cu: goto label_124f4c;
        case 0x124f50u: goto label_124f50;
        case 0x124f54u: goto label_124f54;
        case 0x124f58u: goto label_124f58;
        case 0x124f5cu: goto label_124f5c;
        case 0x124f60u: goto label_124f60;
        case 0x124f64u: goto label_124f64;
        case 0x124f68u: goto label_124f68;
        case 0x124f6cu: goto label_124f6c;
        case 0x124f70u: goto label_124f70;
        case 0x124f74u: goto label_124f74;
        case 0x124f78u: goto label_124f78;
        case 0x124f7cu: goto label_124f7c;
        case 0x124f80u: goto label_124f80;
        case 0x124f84u: goto label_124f84;
        case 0x124f88u: goto label_124f88;
        case 0x124f8cu: goto label_124f8c;
        case 0x124f90u: goto label_124f90;
        case 0x124f94u: goto label_124f94;
        case 0x124f98u: goto label_124f98;
        case 0x124f9cu: goto label_124f9c;
        case 0x124fa0u: goto label_124fa0;
        case 0x124fa4u: goto label_124fa4;
        case 0x124fa8u: goto label_124fa8;
        case 0x124facu: goto label_124fac;
        case 0x124fb0u: goto label_124fb0;
        case 0x124fb4u: goto label_124fb4;
        case 0x124fb8u: goto label_124fb8;
        case 0x124fbcu: goto label_124fbc;
        case 0x124fc0u: goto label_124fc0;
        case 0x124fc4u: goto label_124fc4;
        case 0x124fc8u: goto label_124fc8;
        case 0x124fccu: goto label_124fcc;
        case 0x124fd0u: goto label_124fd0;
        case 0x124fd4u: goto label_124fd4;
        case 0x124fd8u: goto label_124fd8;
        case 0x124fdcu: goto label_124fdc;
        case 0x124fe0u: goto label_124fe0;
        case 0x124fe4u: goto label_124fe4;
        case 0x124fe8u: goto label_124fe8;
        case 0x124fecu: goto label_124fec;
        case 0x124ff0u: goto label_124ff0;
        case 0x124ff4u: goto label_124ff4;
        case 0x124ff8u: goto label_124ff8;
        case 0x124ffcu: goto label_124ffc;
        case 0x125000u: goto label_125000;
        case 0x125004u: goto label_125004;
        case 0x125008u: goto label_125008;
        case 0x12500cu: goto label_12500c;
        case 0x125010u: goto label_125010;
        case 0x125014u: goto label_125014;
        case 0x125018u: goto label_125018;
        case 0x12501cu: goto label_12501c;
        case 0x125020u: goto label_125020;
        case 0x125024u: goto label_125024;
        case 0x125028u: goto label_125028;
        case 0x12502cu: goto label_12502c;
        case 0x125030u: goto label_125030;
        case 0x125034u: goto label_125034;
        case 0x125038u: goto label_125038;
        case 0x12503cu: goto label_12503c;
        case 0x125040u: goto label_125040;
        case 0x125044u: goto label_125044;
        case 0x125048u: goto label_125048;
        case 0x12504cu: goto label_12504c;
        case 0x125050u: goto label_125050;
        case 0x125054u: goto label_125054;
        case 0x125058u: goto label_125058;
        case 0x12505cu: goto label_12505c;
        case 0x125060u: goto label_125060;
        case 0x125064u: goto label_125064;
        case 0x125068u: goto label_125068;
        case 0x12506cu: goto label_12506c;
        case 0x125070u: goto label_125070;
        case 0x125074u: goto label_125074;
        case 0x125078u: goto label_125078;
        case 0x12507cu: goto label_12507c;
        case 0x125080u: goto label_125080;
        case 0x125084u: goto label_125084;
        case 0x125088u: goto label_125088;
        case 0x12508cu: goto label_12508c;
        case 0x125090u: goto label_125090;
        case 0x125094u: goto label_125094;
        case 0x125098u: goto label_125098;
        case 0x12509cu: goto label_12509c;
        case 0x1250a0u: goto label_1250a0;
        case 0x1250a4u: goto label_1250a4;
        case 0x1250a8u: goto label_1250a8;
        case 0x1250acu: goto label_1250ac;
        case 0x1250b0u: goto label_1250b0;
        case 0x1250b4u: goto label_1250b4;
        case 0x1250b8u: goto label_1250b8;
        case 0x1250bcu: goto label_1250bc;
        case 0x1250c0u: goto label_1250c0;
        case 0x1250c4u: goto label_1250c4;
        case 0x1250c8u: goto label_1250c8;
        case 0x1250ccu: goto label_1250cc;
        case 0x1250d0u: goto label_1250d0;
        case 0x1250d4u: goto label_1250d4;
        case 0x1250d8u: goto label_1250d8;
        case 0x1250dcu: goto label_1250dc;
        case 0x1250e0u: goto label_1250e0;
        case 0x1250e4u: goto label_1250e4;
        case 0x1250e8u: goto label_1250e8;
        case 0x1250ecu: goto label_1250ec;
        case 0x1250f0u: goto label_1250f0;
        case 0x1250f4u: goto label_1250f4;
        case 0x1250f8u: goto label_1250f8;
        case 0x1250fcu: goto label_1250fc;
        case 0x125100u: goto label_125100;
        case 0x125104u: goto label_125104;
        case 0x125108u: goto label_125108;
        case 0x12510cu: goto label_12510c;
        case 0x125110u: goto label_125110;
        case 0x125114u: goto label_125114;
        case 0x125118u: goto label_125118;
        case 0x12511cu: goto label_12511c;
        case 0x125120u: goto label_125120;
        case 0x125124u: goto label_125124;
        case 0x125128u: goto label_125128;
        case 0x12512cu: goto label_12512c;
        case 0x125130u: goto label_125130;
        case 0x125134u: goto label_125134;
        case 0x125138u: goto label_125138;
        case 0x12513cu: goto label_12513c;
        case 0x125140u: goto label_125140;
        case 0x125144u: goto label_125144;
        case 0x125148u: goto label_125148;
        case 0x12514cu: goto label_12514c;
        case 0x125150u: goto label_125150;
        case 0x125154u: goto label_125154;
        case 0x125158u: goto label_125158;
        case 0x12515cu: goto label_12515c;
        case 0x125160u: goto label_125160;
        case 0x125164u: goto label_125164;
        case 0x125168u: goto label_125168;
        case 0x12516cu: goto label_12516c;
        case 0x125170u: goto label_125170;
        case 0x125174u: goto label_125174;
        case 0x125178u: goto label_125178;
        case 0x12517cu: goto label_12517c;
        case 0x125180u: goto label_125180;
        case 0x125184u: goto label_125184;
        case 0x125188u: goto label_125188;
        case 0x12518cu: goto label_12518c;
        case 0x125190u: goto label_125190;
        case 0x125194u: goto label_125194;
        case 0x125198u: goto label_125198;
        case 0x12519cu: goto label_12519c;
        case 0x1251a0u: goto label_1251a0;
        case 0x1251a4u: goto label_1251a4;
        case 0x1251a8u: goto label_1251a8;
        case 0x1251acu: goto label_1251ac;
        case 0x1251b0u: goto label_1251b0;
        case 0x1251b4u: goto label_1251b4;
        case 0x1251b8u: goto label_1251b8;
        case 0x1251bcu: goto label_1251bc;
        case 0x1251c0u: goto label_1251c0;
        case 0x1251c4u: goto label_1251c4;
        case 0x1251c8u: goto label_1251c8;
        case 0x1251ccu: goto label_1251cc;
        case 0x1251d0u: goto label_1251d0;
        case 0x1251d4u: goto label_1251d4;
        case 0x1251d8u: goto label_1251d8;
        case 0x1251dcu: goto label_1251dc;
        case 0x1251e0u: goto label_1251e0;
        case 0x1251e4u: goto label_1251e4;
        case 0x1251e8u: goto label_1251e8;
        case 0x1251ecu: goto label_1251ec;
        case 0x1251f0u: goto label_1251f0;
        case 0x1251f4u: goto label_1251f4;
        case 0x1251f8u: goto label_1251f8;
        case 0x1251fcu: goto label_1251fc;
        case 0x125200u: goto label_125200;
        case 0x125204u: goto label_125204;
        case 0x125208u: goto label_125208;
        case 0x12520cu: goto label_12520c;
        case 0x125210u: goto label_125210;
        case 0x125214u: goto label_125214;
        case 0x125218u: goto label_125218;
        case 0x12521cu: goto label_12521c;
        case 0x125220u: goto label_125220;
        case 0x125224u: goto label_125224;
        case 0x125228u: goto label_125228;
        case 0x12522cu: goto label_12522c;
        case 0x125230u: goto label_125230;
        case 0x125234u: goto label_125234;
        case 0x125238u: goto label_125238;
        case 0x12523cu: goto label_12523c;
        case 0x125240u: goto label_125240;
        case 0x125244u: goto label_125244;
        case 0x125248u: goto label_125248;
        case 0x12524cu: goto label_12524c;
        case 0x125250u: goto label_125250;
        case 0x125254u: goto label_125254;
        case 0x125258u: goto label_125258;
        case 0x12525cu: goto label_12525c;
        case 0x125260u: goto label_125260;
        case 0x125264u: goto label_125264;
        case 0x125268u: goto label_125268;
        case 0x12526cu: goto label_12526c;
        case 0x125270u: goto label_125270;
        case 0x125274u: goto label_125274;
        case 0x125278u: goto label_125278;
        case 0x12527cu: goto label_12527c;
        case 0x125280u: goto label_125280;
        case 0x125284u: goto label_125284;
        case 0x125288u: goto label_125288;
        case 0x12528cu: goto label_12528c;
        case 0x125290u: goto label_125290;
        case 0x125294u: goto label_125294;
        case 0x125298u: goto label_125298;
        case 0x12529cu: goto label_12529c;
        case 0x1252a0u: goto label_1252a0;
        case 0x1252a4u: goto label_1252a4;
        case 0x1252a8u: goto label_1252a8;
        case 0x1252acu: goto label_1252ac;
        case 0x1252b0u: goto label_1252b0;
        case 0x1252b4u: goto label_1252b4;
        case 0x1252b8u: goto label_1252b8;
        case 0x1252bcu: goto label_1252bc;
        case 0x1252c0u: goto label_1252c0;
        case 0x1252c4u: goto label_1252c4;
        case 0x1252c8u: goto label_1252c8;
        case 0x1252ccu: goto label_1252cc;
        case 0x1252d0u: goto label_1252d0;
        case 0x1252d4u: goto label_1252d4;
        case 0x1252d8u: goto label_1252d8;
        case 0x1252dcu: goto label_1252dc;
        case 0x1252e0u: goto label_1252e0;
        case 0x1252e4u: goto label_1252e4;
        case 0x1252e8u: goto label_1252e8;
        case 0x1252ecu: goto label_1252ec;
        case 0x1252f0u: goto label_1252f0;
        case 0x1252f4u: goto label_1252f4;
        case 0x1252f8u: goto label_1252f8;
        case 0x1252fcu: goto label_1252fc;
        case 0x125300u: goto label_125300;
        case 0x125304u: goto label_125304;
        case 0x125308u: goto label_125308;
        case 0x12530cu: goto label_12530c;
        case 0x125310u: goto label_125310;
        case 0x125314u: goto label_125314;
        case 0x125318u: goto label_125318;
        case 0x12531cu: goto label_12531c;
        case 0x125320u: goto label_125320;
        case 0x125324u: goto label_125324;
        case 0x125328u: goto label_125328;
        case 0x12532cu: goto label_12532c;
        case 0x125330u: goto label_125330;
        case 0x125334u: goto label_125334;
        case 0x125338u: goto label_125338;
        case 0x12533cu: goto label_12533c;
        case 0x125340u: goto label_125340;
        case 0x125344u: goto label_125344;
        case 0x125348u: goto label_125348;
        case 0x12534cu: goto label_12534c;
        case 0x125350u: goto label_125350;
        case 0x125354u: goto label_125354;
        case 0x125358u: goto label_125358;
        case 0x12535cu: goto label_12535c;
        case 0x125360u: goto label_125360;
        case 0x125364u: goto label_125364;
        case 0x125368u: goto label_125368;
        case 0x12536cu: goto label_12536c;
        case 0x125370u: goto label_125370;
        case 0x125374u: goto label_125374;
        case 0x125378u: goto label_125378;
        case 0x12537cu: goto label_12537c;
        case 0x125380u: goto label_125380;
        case 0x125384u: goto label_125384;
        case 0x125388u: goto label_125388;
        case 0x12538cu: goto label_12538c;
        case 0x125390u: goto label_125390;
        case 0x125394u: goto label_125394;
        case 0x125398u: goto label_125398;
        case 0x12539cu: goto label_12539c;
        case 0x1253a0u: goto label_1253a0;
        case 0x1253a4u: goto label_1253a4;
        case 0x1253a8u: goto label_1253a8;
        case 0x1253acu: goto label_1253ac;
        case 0x1253b0u: goto label_1253b0;
        case 0x1253b4u: goto label_1253b4;
        case 0x1253b8u: goto label_1253b8;
        case 0x1253bcu: goto label_1253bc;
        case 0x1253c0u: goto label_1253c0;
        case 0x1253c4u: goto label_1253c4;
        case 0x1253c8u: goto label_1253c8;
        case 0x1253ccu: goto label_1253cc;
        case 0x1253d0u: goto label_1253d0;
        case 0x1253d4u: goto label_1253d4;
        case 0x1253d8u: goto label_1253d8;
        case 0x1253dcu: goto label_1253dc;
        case 0x1253e0u: goto label_1253e0;
        case 0x1253e4u: goto label_1253e4;
        case 0x1253e8u: goto label_1253e8;
        case 0x1253ecu: goto label_1253ec;
        case 0x1253f0u: goto label_1253f0;
        case 0x1253f4u: goto label_1253f4;
        case 0x1253f8u: goto label_1253f8;
        case 0x1253fcu: goto label_1253fc;
        case 0x125400u: goto label_125400;
        case 0x125404u: goto label_125404;
        case 0x125408u: goto label_125408;
        case 0x12540cu: goto label_12540c;
        case 0x125410u: goto label_125410;
        case 0x125414u: goto label_125414;
        case 0x125418u: goto label_125418;
        case 0x12541cu: goto label_12541c;
        case 0x125420u: goto label_125420;
        case 0x125424u: goto label_125424;
        case 0x125428u: goto label_125428;
        case 0x12542cu: goto label_12542c;
        case 0x125430u: goto label_125430;
        case 0x125434u: goto label_125434;
        case 0x125438u: goto label_125438;
        case 0x12543cu: goto label_12543c;
        case 0x125440u: goto label_125440;
        case 0x125444u: goto label_125444;
        case 0x125448u: goto label_125448;
        case 0x12544cu: goto label_12544c;
        case 0x125450u: goto label_125450;
        case 0x125454u: goto label_125454;
        case 0x125458u: goto label_125458;
        case 0x12545cu: goto label_12545c;
        case 0x125460u: goto label_125460;
        case 0x125464u: goto label_125464;
        case 0x125468u: goto label_125468;
        case 0x12546cu: goto label_12546c;
        case 0x125470u: goto label_125470;
        case 0x125474u: goto label_125474;
        case 0x125478u: goto label_125478;
        case 0x12547cu: goto label_12547c;
        case 0x125480u: goto label_125480;
        case 0x125484u: goto label_125484;
        case 0x125488u: goto label_125488;
        case 0x12548cu: goto label_12548c;
        case 0x125490u: goto label_125490;
        case 0x125494u: goto label_125494;
        case 0x125498u: goto label_125498;
        case 0x12549cu: goto label_12549c;
        case 0x1254a0u: goto label_1254a0;
        case 0x1254a4u: goto label_1254a4;
        case 0x1254a8u: goto label_1254a8;
        case 0x1254acu: goto label_1254ac;
        case 0x1254b0u: goto label_1254b0;
        case 0x1254b4u: goto label_1254b4;
        case 0x1254b8u: goto label_1254b8;
        case 0x1254bcu: goto label_1254bc;
        case 0x1254c0u: goto label_1254c0;
        case 0x1254c4u: goto label_1254c4;
        case 0x1254c8u: goto label_1254c8;
        case 0x1254ccu: goto label_1254cc;
        case 0x1254d0u: goto label_1254d0;
        case 0x1254d4u: goto label_1254d4;
        case 0x1254d8u: goto label_1254d8;
        case 0x1254dcu: goto label_1254dc;
        case 0x1254e0u: goto label_1254e0;
        case 0x1254e4u: goto label_1254e4;
        case 0x1254e8u: goto label_1254e8;
        case 0x1254ecu: goto label_1254ec;
        case 0x1254f0u: goto label_1254f0;
        case 0x1254f4u: goto label_1254f4;
        case 0x1254f8u: goto label_1254f8;
        case 0x1254fcu: goto label_1254fc;
        case 0x125500u: goto label_125500;
        case 0x125504u: goto label_125504;
        case 0x125508u: goto label_125508;
        case 0x12550cu: goto label_12550c;
        case 0x125510u: goto label_125510;
        case 0x125514u: goto label_125514;
        case 0x125518u: goto label_125518;
        case 0x12551cu: goto label_12551c;
        case 0x125520u: goto label_125520;
        case 0x125524u: goto label_125524;
        case 0x125528u: goto label_125528;
        case 0x12552cu: goto label_12552c;
        case 0x125530u: goto label_125530;
        case 0x125534u: goto label_125534;
        case 0x125538u: goto label_125538;
        case 0x12553cu: goto label_12553c;
        case 0x125540u: goto label_125540;
        case 0x125544u: goto label_125544;
        case 0x125548u: goto label_125548;
        case 0x12554cu: goto label_12554c;
        case 0x125550u: goto label_125550;
        case 0x125554u: goto label_125554;
        case 0x125558u: goto label_125558;
        case 0x12555cu: goto label_12555c;
        case 0x125560u: goto label_125560;
        case 0x125564u: goto label_125564;
        case 0x125568u: goto label_125568;
        case 0x12556cu: goto label_12556c;
        case 0x125570u: goto label_125570;
        case 0x125574u: goto label_125574;
        case 0x125578u: goto label_125578;
        case 0x12557cu: goto label_12557c;
        case 0x125580u: goto label_125580;
        case 0x125584u: goto label_125584;
        case 0x125588u: goto label_125588;
        case 0x12558cu: goto label_12558c;
        case 0x125590u: goto label_125590;
        case 0x125594u: goto label_125594;
        case 0x125598u: goto label_125598;
        case 0x12559cu: goto label_12559c;
        case 0x1255a0u: goto label_1255a0;
        case 0x1255a4u: goto label_1255a4;
        case 0x1255a8u: goto label_1255a8;
        case 0x1255acu: goto label_1255ac;
        case 0x1255b0u: goto label_1255b0;
        case 0x1255b4u: goto label_1255b4;
        case 0x1255b8u: goto label_1255b8;
        case 0x1255bcu: goto label_1255bc;
        case 0x1255c0u: goto label_1255c0;
        case 0x1255c4u: goto label_1255c4;
        case 0x1255c8u: goto label_1255c8;
        case 0x1255ccu: goto label_1255cc;
        case 0x1255d0u: goto label_1255d0;
        case 0x1255d4u: goto label_1255d4;
        case 0x1255d8u: goto label_1255d8;
        case 0x1255dcu: goto label_1255dc;
        case 0x1255e0u: goto label_1255e0;
        case 0x1255e4u: goto label_1255e4;
        case 0x1255e8u: goto label_1255e8;
        case 0x1255ecu: goto label_1255ec;
        case 0x1255f0u: goto label_1255f0;
        case 0x1255f4u: goto label_1255f4;
        case 0x1255f8u: goto label_1255f8;
        case 0x1255fcu: goto label_1255fc;
        case 0x125600u: goto label_125600;
        case 0x125604u: goto label_125604;
        case 0x125608u: goto label_125608;
        case 0x12560cu: goto label_12560c;
        case 0x125610u: goto label_125610;
        case 0x125614u: goto label_125614;
        case 0x125618u: goto label_125618;
        case 0x12561cu: goto label_12561c;
        case 0x125620u: goto label_125620;
        case 0x125624u: goto label_125624;
        case 0x125628u: goto label_125628;
        case 0x12562cu: goto label_12562c;
        case 0x125630u: goto label_125630;
        case 0x125634u: goto label_125634;
        case 0x125638u: goto label_125638;
        case 0x12563cu: goto label_12563c;
        case 0x125640u: goto label_125640;
        case 0x125644u: goto label_125644;
        case 0x125648u: goto label_125648;
        case 0x12564cu: goto label_12564c;
        case 0x125650u: goto label_125650;
        case 0x125654u: goto label_125654;
        case 0x125658u: goto label_125658;
        case 0x12565cu: goto label_12565c;
        case 0x125660u: goto label_125660;
        case 0x125664u: goto label_125664;
        case 0x125668u: goto label_125668;
        case 0x12566cu: goto label_12566c;
        case 0x125670u: goto label_125670;
        case 0x125674u: goto label_125674;
        case 0x125678u: goto label_125678;
        case 0x12567cu: goto label_12567c;
        case 0x125680u: goto label_125680;
        case 0x125684u: goto label_125684;
        case 0x125688u: goto label_125688;
        case 0x12568cu: goto label_12568c;
        case 0x125690u: goto label_125690;
        case 0x125694u: goto label_125694;
        case 0x125698u: goto label_125698;
        case 0x12569cu: goto label_12569c;
        case 0x1256a0u: goto label_1256a0;
        case 0x1256a4u: goto label_1256a4;
        case 0x1256a8u: goto label_1256a8;
        case 0x1256acu: goto label_1256ac;
        case 0x1256b0u: goto label_1256b0;
        case 0x1256b4u: goto label_1256b4;
        case 0x1256b8u: goto label_1256b8;
        case 0x1256bcu: goto label_1256bc;
        case 0x1256c0u: goto label_1256c0;
        case 0x1256c4u: goto label_1256c4;
        case 0x1256c8u: goto label_1256c8;
        case 0x1256ccu: goto label_1256cc;
        case 0x1256d0u: goto label_1256d0;
        case 0x1256d4u: goto label_1256d4;
        case 0x1256d8u: goto label_1256d8;
        case 0x1256dcu: goto label_1256dc;
        case 0x1256e0u: goto label_1256e0;
        case 0x1256e4u: goto label_1256e4;
        case 0x1256e8u: goto label_1256e8;
        case 0x1256ecu: goto label_1256ec;
        case 0x1256f0u: goto label_1256f0;
        case 0x1256f4u: goto label_1256f4;
        case 0x1256f8u: goto label_1256f8;
        case 0x1256fcu: goto label_1256fc;
        case 0x125700u: goto label_125700;
        case 0x125704u: goto label_125704;
        case 0x125708u: goto label_125708;
        case 0x12570cu: goto label_12570c;
        case 0x125710u: goto label_125710;
        case 0x125714u: goto label_125714;
        case 0x125718u: goto label_125718;
        case 0x12571cu: goto label_12571c;
        case 0x125720u: goto label_125720;
        case 0x125724u: goto label_125724;
        case 0x125728u: goto label_125728;
        case 0x12572cu: goto label_12572c;
        case 0x125730u: goto label_125730;
        case 0x125734u: goto label_125734;
        case 0x125738u: goto label_125738;
        case 0x12573cu: goto label_12573c;
        case 0x125740u: goto label_125740;
        case 0x125744u: goto label_125744;
        case 0x125748u: goto label_125748;
        case 0x12574cu: goto label_12574c;
        default: break;
    }

    ctx->pc = 0x124e90u;

label_124e90:
    // 0x124e90: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x124e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_124e94:
    // 0x124e94: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x124e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_124e98:
    // 0x124e98: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x124e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_124e9c:
    // 0x124e9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x124e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_124ea0:
    // 0x124ea0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x124ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_124ea4:
    // 0x124ea4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x124ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_124ea8:
    // 0x124ea8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x124ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_124eac:
    // 0x124eac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x124eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_124eb0:
    // 0x124eb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x124eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_124eb4:
    // 0x124eb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x124eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_124eb8:
    // 0x124eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x124eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_124ebc:
    // 0x124ebc: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x124ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
label_124ec0:
    // 0x124ec0: 0x8f84b9f0  lw          $a0, -0x4610($gp)
    ctx->pc = 0x124ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949360)));
label_124ec4:
    // 0x124ec4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x124ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_124ec8:
    // 0x124ec8: 0x10850121  beq         $a0, $a1, . + 4 + (0x121 << 2)
label_124ecc:
    if (ctx->pc == 0x124ECCu) {
        ctx->pc = 0x124ED0u;
        goto label_124ed0;
    }
    ctx->pc = 0x124EC8u;
    {
        const bool branch_taken_0x124ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x124ec8) {
            ctx->pc = 0x125350u;
            goto label_125350;
        }
    }
    ctx->pc = 0x124ED0u;
label_124ed0:
    // 0x124ed0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x124ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124ed4:
    // 0x124ed4: 0x10830079  beq         $a0, $v1, . + 4 + (0x79 << 2)
label_124ed8:
    if (ctx->pc == 0x124ED8u) {
        ctx->pc = 0x124EDCu;
        goto label_124edc;
    }
    ctx->pc = 0x124ED4u;
    {
        const bool branch_taken_0x124ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x124ed4) {
            ctx->pc = 0x1250BCu;
            goto label_1250bc;
        }
    }
    ctx->pc = 0x124EDCu;
label_124edc:
    // 0x124edc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124ee0:
    // 0x124ee0: 0x10830062  beq         $a0, $v1, . + 4 + (0x62 << 2)
label_124ee4:
    if (ctx->pc == 0x124EE4u) {
        ctx->pc = 0x124EE8u;
        goto label_124ee8;
    }
    ctx->pc = 0x124EE0u;
    {
        const bool branch_taken_0x124ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x124ee0) {
            ctx->pc = 0x12506Cu;
            goto label_12506c;
        }
    }
    ctx->pc = 0x124EE8u;
label_124ee8:
    // 0x124ee8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_124eec:
    if (ctx->pc == 0x124EECu) {
        ctx->pc = 0x124EF0u;
        goto label_124ef0;
    }
    ctx->pc = 0x124EE8u;
    {
        const bool branch_taken_0x124ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ee8) {
            ctx->pc = 0x124EF8u;
            goto label_124ef8;
        }
    }
    ctx->pc = 0x124EF0u;
label_124ef0:
    // 0x124ef0: 0x10000208  b           . + 4 + (0x208 << 2)
label_124ef4:
    if (ctx->pc == 0x124EF4u) {
        ctx->pc = 0x124EF8u;
        goto label_124ef8;
    }
    ctx->pc = 0x124EF0u;
    {
        const bool branch_taken_0x124ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ef0) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x124EF8u;
label_124ef8:
    // 0x124ef8: 0xaf80ba04  sw          $zero, -0x45FC($gp)
    ctx->pc = 0x124ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949380), GPR_U32(ctx, 0));
label_124efc:
    // 0x124efc: 0xaf80ba00  sw          $zero, -0x4600($gp)
    ctx->pc = 0x124efcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949376), GPR_U32(ctx, 0));
label_124f00:
    // 0x124f00: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x124f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_124f04:
    // 0x124f04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x124f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_124f08:
    // 0x124f08: 0xc049ec0  jal         func_127B00
label_124f0c:
    if (ctx->pc == 0x124F0Cu) {
        ctx->pc = 0x124F10u;
        goto label_124f10;
    }
    ctx->pc = 0x124F08u;
    SET_GPR_U32(ctx, 31, 0x124F10u);
    ctx->pc = 0x127B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B00u, 0x124F08u, 0x124F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F10u;
label_124f10:
    // 0x124f10: 0x8f84ba08  lw          $a0, -0x45F8($gp)
    ctx->pc = 0x124f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949384)));
label_124f14:
    // 0x124f14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x124f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124f18:
    // 0x124f18: 0x148301fe  bne         $a0, $v1, . + 4 + (0x1FE << 2)
label_124f1c:
    if (ctx->pc == 0x124F1Cu) {
        ctx->pc = 0x124F20u;
        goto label_124f20;
    }
    ctx->pc = 0x124F18u;
    {
        const bool branch_taken_0x124f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x124f18) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x124F20u;
label_124f20:
    // 0x124f20: 0x8f83ba0c  lw          $v1, -0x45F4($gp)
    ctx->pc = 0x124f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949388)));
label_124f24:
    // 0x124f24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x124f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124f28:
    // 0x124f28: 0x146401fa  bne         $v1, $a0, . + 4 + (0x1FA << 2)
label_124f2c:
    if (ctx->pc == 0x124F2Cu) {
        ctx->pc = 0x124F30u;
        goto label_124f30;
    }
    ctx->pc = 0x124F28u;
    {
        const bool branch_taken_0x124f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x124f28) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x124F30u;
label_124f30:
    // 0x124f30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x124f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124f34:
    // 0x124f34: 0xaf858b24  sw          $a1, -0x74DC($gp)
    ctx->pc = 0x124f34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937380), GPR_U32(ctx, 5));
label_124f38:
    // 0x124f38: 0xaf809d14  sw          $zero, -0x62EC($gp)
    ctx->pc = 0x124f38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941972), GPR_U32(ctx, 0));
label_124f3c:
    // 0x124f3c: 0xaf80bb90  sw          $zero, -0x4470($gp)
    ctx->pc = 0x124f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949776), GPR_U32(ctx, 0));
label_124f40:
    // 0x124f40: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x124f40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124f44:
    // 0x124f44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x124f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124f48:
    // 0x124f48: 0x10000025  b           . + 4 + (0x25 << 2)
label_124f4c:
    if (ctx->pc == 0x124F4Cu) {
        ctx->pc = 0x124F50u;
        goto label_124f50;
    }
    ctx->pc = 0x124F48u;
    {
        const bool branch_taken_0x124f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124f48) {
            ctx->pc = 0x124FE0u;
            goto label_124fe0;
        }
    }
    ctx->pc = 0x124F50u;
label_124f50:
    // 0x124f50: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x124f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_124f54:
    // 0x124f54: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x124f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_124f58:
    // 0x124f58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x124f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_124f5c:
    // 0x124f5c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x124f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_124f60:
    // 0x124f60: 0x2442b490  addiu       $v0, $v0, -0x4B70
    ctx->pc = 0x124f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
label_124f64:
    // 0x124f64: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x124f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_124f68:
    // 0x124f68: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x124f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_124f6c:
    // 0x124f6c: 0xc049fbc  jal         func_127EF0
label_124f70:
    if (ctx->pc == 0x124F70u) {
        ctx->pc = 0x124F74u;
        goto label_124f74;
    }
    ctx->pc = 0x124F6Cu;
    SET_GPR_U32(ctx, 31, 0x124F74u);
    ctx->pc = 0x127EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127EF0u, 0x124F6Cu, 0x124F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F74u;
label_124f74:
    // 0x124f74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x124f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_124f78:
    // 0x124f78: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_124f7c:
    if (ctx->pc == 0x124F7Cu) {
        ctx->pc = 0x124F80u;
        goto label_124f80;
    }
    ctx->pc = 0x124F78u;
    {
        const bool branch_taken_0x124f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124f78) {
            ctx->pc = 0x124F9Cu;
            goto label_124f9c;
        }
    }
    ctx->pc = 0x124F80u;
label_124f80:
    // 0x124f80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x124f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124f84:
    // 0x124f84: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x124f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_124f88:
    // 0x124f88: 0x2783ba00  addiu       $v1, $gp, -0x4600
    ctx->pc = 0x124f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949376));
label_124f8c:
    // 0x124f8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x124f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_124f90:
    // 0x124f90: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x124f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_124f94:
    // 0x124f94: 0x10000011  b           . + 4 + (0x11 << 2)
label_124f98:
    if (ctx->pc == 0x124F98u) {
        ctx->pc = 0x124F9Cu;
        goto label_124f9c;
    }
    ctx->pc = 0x124F94u;
    {
        const bool branch_taken_0x124f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124f94) {
            ctx->pc = 0x124FDCu;
            goto label_124fdc;
        }
    }
    ctx->pc = 0x124F9Cu;
label_124f9c:
    // 0x124f9c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x124f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_124fa0:
    // 0x124fa0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x124fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_124fa4:
    // 0x124fa4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x124fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_124fa8:
    // 0x124fa8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x124fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_124fac:
    // 0x124fac: 0x2463b490  addiu       $v1, $v1, -0x4B70
    ctx->pc = 0x124facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947984));
label_124fb0:
    // 0x124fb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x124fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_124fb4:
    // 0x124fb4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x124fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_124fb8:
    // 0x124fb8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_124fbc:
    if (ctx->pc == 0x124FBCu) {
        ctx->pc = 0x124FC0u;
        goto label_124fc0;
    }
    ctx->pc = 0x124FB8u;
    {
        const bool branch_taken_0x124fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124fb8) {
            ctx->pc = 0x124FDCu;
            goto label_124fdc;
        }
    }
    ctx->pc = 0x124FC0u;
label_124fc0:
    // 0x124fc0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x124fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_124fc4:
    // 0x124fc4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x124fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_124fc8:
    // 0x124fc8: 0x2783ba00  addiu       $v1, $gp, -0x4600
    ctx->pc = 0x124fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949376));
label_124fcc:
    // 0x124fcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x124fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_124fd0:
    // 0x124fd0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x124fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_124fd4:
    // 0x124fd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124fd8:
    // 0x124fd8: 0x307700ff  andi        $s7, $v1, 0xFF
    ctx->pc = 0x124fd8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_124fdc:
    // 0x124fdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x124fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_124fe0:
    // 0x124fe0: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x124fe0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_124fe4:
    // 0x124fe4: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_124fe8:
    if (ctx->pc == 0x124FE8u) {
        ctx->pc = 0x124FECu;
        goto label_124fec;
    }
    ctx->pc = 0x124FE4u;
    {
        const bool branch_taken_0x124fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124fe4) {
            ctx->pc = 0x124F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124f50;
        }
    }
    ctx->pc = 0x124FECu;
label_124fec:
    // 0x124fec: 0x8f84ba00  lw          $a0, -0x4600($gp)
    ctx->pc = 0x124fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949376)));
label_124ff0:
    // 0x124ff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124ff4:
    // 0x124ff4: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_124ff8:
    if (ctx->pc == 0x124FF8u) {
        ctx->pc = 0x124FFCu;
        goto label_124ffc;
    }
    ctx->pc = 0x124FF4u;
    {
        const bool branch_taken_0x124ff4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x124ff4) {
            ctx->pc = 0x125014u;
            goto label_125014;
        }
    }
    ctx->pc = 0x124FFCu;
label_124ffc:
    // 0x124ffc: 0x8f84ba04  lw          $a0, -0x45FC($gp)
    ctx->pc = 0x124ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949380)));
label_125000:
    // 0x125000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125004:
    // 0x125004: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_125008:
    if (ctx->pc == 0x125008u) {
        ctx->pc = 0x12500Cu;
        goto label_12500c;
    }
    ctx->pc = 0x125004u;
    {
        const bool branch_taken_0x125004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x125004) {
            ctx->pc = 0x125014u;
            goto label_125014;
        }
    }
    ctx->pc = 0x12500Cu;
label_12500c:
    // 0x12500c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12500cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125010:
    // 0x125010: 0xaf83bb90  sw          $v1, -0x4470($gp)
    ctx->pc = 0x125010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949776), GPR_U32(ctx, 3));
label_125014:
    // 0x125014: 0x8f84bb90  lw          $a0, -0x4470($gp)
    ctx->pc = 0x125014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949776)));
label_125018:
    // 0x125018: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12501c:
    // 0x12501c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_125020:
    if (ctx->pc == 0x125020u) {
        ctx->pc = 0x125024u;
        goto label_125024;
    }
    ctx->pc = 0x12501Cu;
    {
        const bool branch_taken_0x12501c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12501c) {
            ctx->pc = 0x12502Cu;
            goto label_12502c;
        }
    }
    ctx->pc = 0x125024u;
label_125024:
    // 0x125024: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_125028:
    if (ctx->pc == 0x125028u) {
        ctx->pc = 0x12502Cu;
        goto label_12502c;
    }
    ctx->pc = 0x125024u;
    {
        const bool branch_taken_0x125024 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x125024) {
            ctx->pc = 0x12503Cu;
            goto label_12503c;
        }
    }
    ctx->pc = 0x12502Cu;
label_12502c:
    // 0x12502c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_125030:
    // 0x125030: 0xaf83b9f0  sw          $v1, -0x4610($gp)
    ctx->pc = 0x125030u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 3));
label_125034:
    // 0x125034: 0x100001b7  b           . + 4 + (0x1B7 << 2)
label_125038:
    if (ctx->pc == 0x125038u) {
        ctx->pc = 0x12503Cu;
        goto label_12503c;
    }
    ctx->pc = 0x125034u;
    {
        const bool branch_taken_0x125034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125034) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x12503Cu;
label_12503c:
    // 0x12503c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12503cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125040:
    // 0x125040: 0xaf83b9f0  sw          $v1, -0x4610($gp)
    ctx->pc = 0x125040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 3));
label_125044:
    // 0x125044: 0x8f83ba00  lw          $v1, -0x4600($gp)
    ctx->pc = 0x125044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949376)));
label_125048:
    // 0x125048: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_12504c:
    if (ctx->pc == 0x12504Cu) {
        ctx->pc = 0x125050u;
        goto label_125050;
    }
    ctx->pc = 0x125048u;
    {
        const bool branch_taken_0x125048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x125048) {
            ctx->pc = 0x12505Cu;
            goto label_12505c;
        }
    }
    ctx->pc = 0x125050u;
label_125050:
    // 0x125050: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x125050u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125054:
    // 0x125054: 0x10000002  b           . + 4 + (0x2 << 2)
label_125058:
    if (ctx->pc == 0x125058u) {
        ctx->pc = 0x12505Cu;
        goto label_12505c;
    }
    ctx->pc = 0x125054u;
    {
        const bool branch_taken_0x125054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125054) {
            ctx->pc = 0x125060u;
            goto label_125060;
        }
    }
    ctx->pc = 0x12505Cu;
label_12505c:
    // 0x12505c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x12505cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125060:
    // 0x125060: 0xaf968b24  sw          $s6, -0x74DC($gp)
    ctx->pc = 0x125060u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937380), GPR_U32(ctx, 22));
label_125064:
    // 0x125064: 0x100001ab  b           . + 4 + (0x1AB << 2)
label_125068:
    if (ctx->pc == 0x125068u) {
        ctx->pc = 0x12506Cu;
        goto label_12506c;
    }
    ctx->pc = 0x125064u;
    {
        const bool branch_taken_0x125064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125064) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x12506Cu;
label_12506c:
    // 0x12506c: 0xc117bcc  jal         func_45EF30
label_125070:
    if (ctx->pc == 0x125070u) {
        ctx->pc = 0x125074u;
        goto label_125074;
    }
    ctx->pc = 0x12506Cu;
    SET_GPR_U32(ctx, 31, 0x125074u);
    ctx->pc = 0x45EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EF30u, 0x12506Cu, 0x125074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125074u;
label_125074:
    // 0x125074: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x125074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_125078:
    // 0x125078: 0xa380ba28  sb          $zero, -0x45D8($gp)
    ctx->pc = 0x125078u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949416), (uint8_t)GPR_U32(ctx, 0));
label_12507c:
    // 0x12507c: 0x8f858b24  lw          $a1, -0x74DC($gp)
    ctx->pc = 0x12507cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
label_125080:
    // 0x125080: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x125080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125084:
    // 0x125084: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x125084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_125088:
    // 0x125088: 0x24c62280  addiu       $a2, $a2, 0x2280
    ctx->pc = 0x125088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8832));
label_12508c:
    // 0x12508c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12508cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125090:
    // 0x125090: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x125090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_125094:
    // 0x125094: 0x2789ba14  addiu       $t1, $gp, -0x45EC
    ctx->pc = 0x125094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949396));
label_125098:
    // 0x125098: 0x3c0a0061  lui         $t2, 0x61
    ctx->pc = 0x125098u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)97 << 16));
label_12509c:
    // 0x12509c: 0x254ab840  addiu       $t2, $t2, -0x47C0
    ctx->pc = 0x12509cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294948928));
label_1250a0:
    // 0x1250a0: 0xc117dd8  jal         func_45F760
label_1250a4:
    if (ctx->pc == 0x1250A4u) {
        ctx->pc = 0x1250A8u;
        goto label_1250a8;
    }
    ctx->pc = 0x1250A0u;
    SET_GPR_U32(ctx, 31, 0x1250A8u);
    ctx->pc = 0x45F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F760u, 0x1250A0u, 0x1250A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1250A8u;
label_1250a8:
    // 0x1250a8: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1250a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_1250ac:
    // 0x1250ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1250acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1250b0:
    // 0x1250b0: 0xaf83b9f0  sw          $v1, -0x4610($gp)
    ctx->pc = 0x1250b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 3));
label_1250b4:
    // 0x1250b4: 0x10000197  b           . + 4 + (0x197 << 2)
label_1250b8:
    if (ctx->pc == 0x1250B8u) {
        ctx->pc = 0x1250BCu;
        goto label_1250bc;
    }
    ctx->pc = 0x1250B4u;
    {
        const bool branch_taken_0x1250b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1250b4) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x1250BCu;
label_1250bc:
    // 0x1250bc: 0xc117bcc  jal         func_45EF30
label_1250c0:
    if (ctx->pc == 0x1250C0u) {
        ctx->pc = 0x1250C4u;
        goto label_1250c4;
    }
    ctx->pc = 0x1250BCu;
    SET_GPR_U32(ctx, 31, 0x1250C4u);
    ctx->pc = 0x45EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EF30u, 0x1250BCu, 0x1250C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1250C4u;
label_1250c4:
    // 0x1250c4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1250c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1250c8:
    // 0x1250c8: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x1250c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1250cc:
    // 0x1250cc: 0xc0495e0  jal         func_125780
label_1250d0:
    if (ctx->pc == 0x1250D0u) {
        ctx->pc = 0x1250D4u;
        goto label_1250d4;
    }
    ctx->pc = 0x1250CCu;
    SET_GPR_U32(ctx, 31, 0x1250D4u);
    ctx->pc = 0x125780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125780u, 0x1250CCu, 0x1250D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1250D4u;
label_1250d4:
    // 0x1250d4: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x1250d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1250d8:
    // 0x1250d8: 0xc117c04  jal         func_45F010
label_1250dc:
    if (ctx->pc == 0x1250DCu) {
        ctx->pc = 0x1250E0u;
        goto label_1250e0;
    }
    ctx->pc = 0x1250D8u;
    SET_GPR_U32(ctx, 31, 0x1250E0u);
    ctx->pc = 0x45F010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F010u, 0x1250D8u, 0x1250E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1250E0u;
label_1250e0:
    // 0x1250e0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1250e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_1250e4:
    // 0x1250e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1250e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1250e8:
    // 0x1250e8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1250ec:
    if (ctx->pc == 0x1250ECu) {
        ctx->pc = 0x1250F0u;
        goto label_1250f0;
    }
    ctx->pc = 0x1250E8u;
    {
        const bool branch_taken_0x1250e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1250e8) {
            ctx->pc = 0x12512Cu;
            goto label_12512c;
        }
    }
    ctx->pc = 0x1250F0u;
label_1250f0:
    // 0x1250f0: 0x8f828b24  lw          $v0, -0x74DC($gp)
    ctx->pc = 0x1250f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
label_1250f4:
    // 0x1250f4: 0x1c40000b  bgtz        $v0, . + 4 + (0xB << 2)
label_1250f8:
    if (ctx->pc == 0x1250F8u) {
        ctx->pc = 0x1250FCu;
        goto label_1250fc;
    }
    ctx->pc = 0x1250F4u;
    {
        const bool branch_taken_0x1250f4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1250f4) {
            ctx->pc = 0x125124u;
            goto label_125124;
        }
    }
    ctx->pc = 0x1250FCu;
label_1250fc:
    // 0x1250fc: 0x8f83ba04  lw          $v1, -0x45FC($gp)
    ctx->pc = 0x1250fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949380)));
label_125100:
    // 0x125100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125104:
    // 0x125104: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_125108:
    if (ctx->pc == 0x125108u) {
        ctx->pc = 0x12510Cu;
        goto label_12510c;
    }
    ctx->pc = 0x125104u;
    {
        const bool branch_taken_0x125104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x125104) {
            ctx->pc = 0x125124u;
            goto label_125124;
        }
    }
    ctx->pc = 0x12510Cu;
label_12510c:
    // 0x12510c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125110:
    // 0x125110: 0xaf828b24  sw          $v0, -0x74DC($gp)
    ctx->pc = 0x125110u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937380), GPR_U32(ctx, 2));
label_125114:
    // 0x125114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125118:
    // 0x125118: 0xaf82b9f0  sw          $v0, -0x4610($gp)
    ctx->pc = 0x125118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 2));
label_12511c:
    // 0x12511c: 0x10000003  b           . + 4 + (0x3 << 2)
label_125120:
    if (ctx->pc == 0x125120u) {
        ctx->pc = 0x125124u;
        goto label_125124;
    }
    ctx->pc = 0x12511Cu;
    {
        const bool branch_taken_0x12511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12511c) {
            ctx->pc = 0x12512Cu;
            goto label_12512c;
        }
    }
    ctx->pc = 0x125124u;
label_125124:
    // 0x125124: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x125124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_125128:
    // 0x125128: 0xaf82b9f0  sw          $v0, -0x4610($gp)
    ctx->pc = 0x125128u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 2));
label_12512c:
    // 0x12512c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x12512cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_125130:
    // 0x125130: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x125130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_125134:
    // 0x125134: 0xc117c14  jal         func_45F050
label_125138:
    if (ctx->pc == 0x125138u) {
        ctx->pc = 0x12513Cu;
        goto label_12513c;
    }
    ctx->pc = 0x125134u;
    SET_GPR_U32(ctx, 31, 0x12513Cu);
    ctx->pc = 0x45F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F050u, 0x125134u, 0x12513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12513Cu;
label_12513c:
    // 0x12513c: 0x17c00175  bnez        $fp, . + 4 + (0x175 << 2)
label_125140:
    if (ctx->pc == 0x125140u) {
        ctx->pc = 0x125144u;
        goto label_125144;
    }
    ctx->pc = 0x12513Cu;
    {
        const bool branch_taken_0x12513c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x12513c) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x125144u;
label_125144:
    // 0x125144: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x125144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_125148:
    // 0x125148: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x125148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12514c:
    // 0x12514c: 0x10830171  beq         $a0, $v1, . + 4 + (0x171 << 2)
label_125150:
    if (ctx->pc == 0x125150u) {
        ctx->pc = 0x125154u;
        goto label_125154;
    }
    ctx->pc = 0x12514Cu;
    {
        const bool branch_taken_0x12514c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12514c) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x125154u;
label_125154:
    // 0x125154: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x125154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125158:
    // 0x125158: 0x1000000a  b           . + 4 + (0xA << 2)
label_12515c:
    if (ctx->pc == 0x12515Cu) {
        ctx->pc = 0x125160u;
        goto label_125160;
    }
    ctx->pc = 0x125158u;
    {
        const bool branch_taken_0x125158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125158) {
            ctx->pc = 0x125184u;
            goto label_125184;
        }
    }
    ctx->pc = 0x125160u;
label_125160:
    // 0x125160: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x125160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_125164:
    // 0x125164: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x125164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_125168:
    // 0x125168: 0x24632210  addiu       $v1, $v1, 0x2210
    ctx->pc = 0x125168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8720));
label_12516c:
    // 0x12516c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12516cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_125170:
    // 0x125170: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x125170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_125174:
    // 0x125174: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x125174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_125178:
    // 0x125178: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x125178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_12517c:
    // 0x12517c: 0xac6400a0  sw          $a0, 0xA0($v1)
    ctx->pc = 0x12517cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 4));
label_125180:
    // 0x125180: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x125180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_125184:
    // 0x125184: 0x2e430006  sltiu       $v1, $s2, 0x6
    ctx->pc = 0x125184u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_125188:
    // 0x125188: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_12518c:
    if (ctx->pc == 0x12518Cu) {
        ctx->pc = 0x125190u;
        goto label_125190;
    }
    ctx->pc = 0x125188u;
    {
        const bool branch_taken_0x125188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x125188) {
            ctx->pc = 0x125160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125160;
        }
    }
    ctx->pc = 0x125190u;
label_125190:
    // 0x125190: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x125190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_125194:
    // 0x125194: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x125194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125198:
    // 0x125198: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x125198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_12519c:
    // 0x12519c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_1251a0:
    if (ctx->pc == 0x1251A0u) {
        ctx->pc = 0x1251A4u;
        goto label_1251a4;
    }
    ctx->pc = 0x12519Cu;
    {
        const bool branch_taken_0x12519c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12519c) {
            ctx->pc = 0x125210u;
            goto label_125210;
        }
    }
    ctx->pc = 0x1251A4u;
label_1251a4:
    // 0x1251a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1251a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1251a8:
    // 0x1251a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1251a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1251ac:
    // 0x1251ac: 0xc04a018  jal         func_128060
label_1251b0:
    if (ctx->pc == 0x1251B0u) {
        ctx->pc = 0x1251B4u;
        goto label_1251b4;
    }
    ctx->pc = 0x1251ACu;
    SET_GPR_U32(ctx, 31, 0x1251B4u);
    ctx->pc = 0x128060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128060u, 0x1251ACu, 0x1251B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1251B4u;
label_1251b4:
    // 0x1251b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1251b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1251b8:
    // 0x1251b8: 0x26650003  addiu       $a1, $s3, 0x3
    ctx->pc = 0x1251b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_1251bc:
    // 0x1251bc: 0x8f848b24  lw          $a0, -0x74DC($gp)
    ctx->pc = 0x1251bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
label_1251c0:
    // 0x1251c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1251c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1251c4:
    // 0x1251c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1251c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1251c8:
    // 0x1251c8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1251c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1251cc:
    // 0x1251cc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1251ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1251d0:
    // 0x1251d0: 0x2463b490  addiu       $v1, $v1, -0x4B70
    ctx->pc = 0x1251d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947984));
label_1251d4:
    // 0x1251d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1251d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1251d8:
    // 0x1251d8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1251d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1251dc:
    // 0x1251dc: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x1251dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1251e0:
    // 0x1251e0: 0x14200044  bnez        $at, . + 4 + (0x44 << 2)
label_1251e4:
    if (ctx->pc == 0x1251E4u) {
        ctx->pc = 0x1251E8u;
        goto label_1251e8;
    }
    ctx->pc = 0x1251E0u;
    {
        const bool branch_taken_0x1251e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1251e0) {
            ctx->pc = 0x1252F4u;
            goto label_1252f4;
        }
    }
    ctx->pc = 0x1251E8u;
label_1251e8:
    // 0x1251e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1251e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1251ec:
    // 0x1251ec: 0x8f838b24  lw          $v1, -0x74DC($gp)
    ctx->pc = 0x1251ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
label_1251f0:
    // 0x1251f0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1251f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1251f4:
    // 0x1251f4: 0x2783ba00  addiu       $v1, $gp, -0x4600
    ctx->pc = 0x1251f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949376));
label_1251f8:
    // 0x1251f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1251f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1251fc:
    // 0x1251fc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1251fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_125200:
    // 0x125200: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x125200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_125204:
    // 0x125204: 0xaf83b9f0  sw          $v1, -0x4610($gp)
    ctx->pc = 0x125204u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 3));
label_125208:
    // 0x125208: 0x10000142  b           . + 4 + (0x142 << 2)
label_12520c:
    if (ctx->pc == 0x12520Cu) {
        ctx->pc = 0x125210u;
        goto label_125210;
    }
    ctx->pc = 0x125208u;
    {
        const bool branch_taken_0x125208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125208) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x125210u;
label_125210:
    // 0x125210: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x125210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_125214:
    // 0x125214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125218:
    // 0x125218: 0x14830036  bne         $a0, $v1, . + 4 + (0x36 << 2)
label_12521c:
    if (ctx->pc == 0x12521Cu) {
        ctx->pc = 0x125220u;
        goto label_125220;
    }
    ctx->pc = 0x125218u;
    {
        const bool branch_taken_0x125218 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x125218) {
            ctx->pc = 0x1252F4u;
            goto label_1252f4;
        }
    }
    ctx->pc = 0x125220u;
label_125220:
    // 0x125220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125224:
    // 0x125224: 0xa382ba28  sb          $v0, -0x45D8($gp)
    ctx->pc = 0x125224u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949416), (uint8_t)GPR_U32(ctx, 2));
label_125228:
    // 0x125228: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x125228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_12522c:
    // 0x12522c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x12522cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_125230:
    // 0x125230: 0x24a5b840  addiu       $a1, $a1, -0x47C0
    ctx->pc = 0x125230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948928));
label_125234:
    // 0x125234: 0xc04a108  jal         func_128420
label_125238:
    if (ctx->pc == 0x125238u) {
        ctx->pc = 0x12523Cu;
        goto label_12523c;
    }
    ctx->pc = 0x125234u;
    SET_GPR_U32(ctx, 31, 0x12523Cu);
    ctx->pc = 0x128420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128420u, 0x125234u, 0x12523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12523Cu;
label_12523c:
    // 0x12523c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_125240:
    if (ctx->pc == 0x125240u) {
        ctx->pc = 0x125244u;
        goto label_125244;
    }
    ctx->pc = 0x12523Cu;
    {
        const bool branch_taken_0x12523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12523c) {
            ctx->pc = 0x12526Cu;
            goto label_12526c;
        }
    }
    ctx->pc = 0x125244u;
label_125244:
    // 0x125244: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x125244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_125248:
    // 0x125248: 0x8f838b24  lw          $v1, -0x74DC($gp)
    ctx->pc = 0x125248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
label_12524c:
    // 0x12524c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x12524cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_125250:
    // 0x125250: 0x2783ba00  addiu       $v1, $gp, -0x4600
    ctx->pc = 0x125250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949376));
label_125254:
    // 0x125254: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x125254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_125258:
    // 0x125258: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x125258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_12525c:
    // 0x12525c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_125260:
    // 0x125260: 0xaf83b9f0  sw          $v1, -0x4610($gp)
    ctx->pc = 0x125260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 3));
label_125264:
    // 0x125264: 0x1000012b  b           . + 4 + (0x12B << 2)
label_125268:
    if (ctx->pc == 0x125268u) {
        ctx->pc = 0x12526Cu;
        goto label_12526c;
    }
    ctx->pc = 0x125264u;
    {
        const bool branch_taken_0x125264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125264) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x12526Cu;
label_12526c:
    // 0x12526c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12526cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125270:
    // 0x125270: 0x1000001d  b           . + 4 + (0x1D << 2)
label_125274:
    if (ctx->pc == 0x125274u) {
        ctx->pc = 0x125278u;
        goto label_125278;
    }
    ctx->pc = 0x125270u;
    {
        const bool branch_taken_0x125270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125270) {
            ctx->pc = 0x1252E8u;
            goto label_1252e8;
        }
    }
    ctx->pc = 0x125278u;
label_125278:
    // 0x125278: 0x9384ba28  lbu         $a0, -0x45D8($gp)
    ctx->pc = 0x125278u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949416)));
label_12527c:
    // 0x12527c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12527cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125280:
    // 0x125280: 0xc04a018  jal         func_128060
label_125284:
    if (ctx->pc == 0x125284u) {
        ctx->pc = 0x125288u;
        goto label_125288;
    }
    ctx->pc = 0x125280u;
    SET_GPR_U32(ctx, 31, 0x125288u);
    ctx->pc = 0x128060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128060u, 0x125280u, 0x125288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125288u;
label_125288:
    // 0x125288: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x125288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12528c:
    // 0x12528c: 0x26650003  addiu       $a1, $s3, 0x3
    ctx->pc = 0x12528cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_125290:
    // 0x125290: 0x8f848b24  lw          $a0, -0x74DC($gp)
    ctx->pc = 0x125290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
label_125294:
    // 0x125294: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x125294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_125298:
    // 0x125298: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x125298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12529c:
    // 0x12529c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x12529cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1252a0:
    // 0x1252a0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1252a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1252a4:
    // 0x1252a4: 0x2463b490  addiu       $v1, $v1, -0x4B70
    ctx->pc = 0x1252a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947984));
label_1252a8:
    // 0x1252a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1252a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1252ac:
    // 0x1252ac: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1252acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1252b0:
    // 0x1252b0: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x1252b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1252b4:
    // 0x1252b4: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_1252b8:
    if (ctx->pc == 0x1252B8u) {
        ctx->pc = 0x1252BCu;
        goto label_1252bc;
    }
    ctx->pc = 0x1252B4u;
    {
        const bool branch_taken_0x1252b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1252b4) {
            ctx->pc = 0x1252E4u;
            goto label_1252e4;
        }
    }
    ctx->pc = 0x1252BCu;
label_1252bc:
    // 0x1252bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1252bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1252c0:
    // 0x1252c0: 0x8f838b24  lw          $v1, -0x74DC($gp)
    ctx->pc = 0x1252c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
label_1252c4:
    // 0x1252c4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1252c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1252c8:
    // 0x1252c8: 0x2783ba00  addiu       $v1, $gp, -0x4600
    ctx->pc = 0x1252c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949376));
label_1252cc:
    // 0x1252cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1252ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1252d0:
    // 0x1252d0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1252d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1252d4:
    // 0x1252d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1252d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1252d8:
    // 0x1252d8: 0xaf83b9f0  sw          $v1, -0x4610($gp)
    ctx->pc = 0x1252d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 3));
label_1252dc:
    // 0x1252dc: 0x1000010d  b           . + 4 + (0x10D << 2)
label_1252e0:
    if (ctx->pc == 0x1252E0u) {
        ctx->pc = 0x1252E4u;
        goto label_1252e4;
    }
    ctx->pc = 0x1252DCu;
    {
        const bool branch_taken_0x1252dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1252dc) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x1252E4u;
label_1252e4:
    // 0x1252e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1252e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1252e8:
    // 0x1252e8: 0x2e830004  sltiu       $v1, $s4, 0x4
    ctx->pc = 0x1252e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1252ec:
    // 0x1252ec: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_1252f0:
    if (ctx->pc == 0x1252F0u) {
        ctx->pc = 0x1252F4u;
        goto label_1252f4;
    }
    ctx->pc = 0x1252ECu;
    {
        const bool branch_taken_0x1252ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1252ec) {
            ctx->pc = 0x125278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125278;
        }
    }
    ctx->pc = 0x1252F4u;
label_1252f4:
    // 0x1252f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1252f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1252f8:
    // 0x1252f8: 0x8f838b24  lw          $v1, -0x74DC($gp)
    ctx->pc = 0x1252f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
label_1252fc:
    // 0x1252fc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1252fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_125300:
    // 0x125300: 0x2783ba00  addiu       $v1, $gp, -0x4600
    ctx->pc = 0x125300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949376));
label_125304:
    // 0x125304: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x125304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_125308:
    // 0x125308: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x125308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_12530c:
    // 0x12530c: 0x8f838b24  lw          $v1, -0x74DC($gp)
    ctx->pc = 0x12530cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937380)));
label_125310:
    // 0x125310: 0x1c60000b  bgtz        $v1, . + 4 + (0xB << 2)
label_125314:
    if (ctx->pc == 0x125314u) {
        ctx->pc = 0x125318u;
        goto label_125318;
    }
    ctx->pc = 0x125310u;
    {
        const bool branch_taken_0x125310 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x125310) {
            ctx->pc = 0x125340u;
            goto label_125340;
        }
    }
    ctx->pc = 0x125318u;
label_125318:
    // 0x125318: 0x8f84ba04  lw          $a0, -0x45FC($gp)
    ctx->pc = 0x125318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949380)));
label_12531c:
    // 0x12531c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12531cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125320:
    // 0x125320: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_125324:
    if (ctx->pc == 0x125324u) {
        ctx->pc = 0x125328u;
        goto label_125328;
    }
    ctx->pc = 0x125320u;
    {
        const bool branch_taken_0x125320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x125320) {
            ctx->pc = 0x125340u;
            goto label_125340;
        }
    }
    ctx->pc = 0x125328u;
label_125328:
    // 0x125328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12532c:
    // 0x12532c: 0xaf838b24  sw          $v1, -0x74DC($gp)
    ctx->pc = 0x12532cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937380), GPR_U32(ctx, 3));
label_125330:
    // 0x125330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125334:
    // 0x125334: 0xaf83b9f0  sw          $v1, -0x4610($gp)
    ctx->pc = 0x125334u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 3));
label_125338:
    // 0x125338: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_12533c:
    if (ctx->pc == 0x12533Cu) {
        ctx->pc = 0x125340u;
        goto label_125340;
    }
    ctx->pc = 0x125338u;
    {
        const bool branch_taken_0x125338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125338) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x125340u;
label_125340:
    // 0x125340: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x125340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_125344:
    // 0x125344: 0xaf83b9f0  sw          $v1, -0x4610($gp)
    ctx->pc = 0x125344u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 3));
label_125348:
    // 0x125348: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_12534c:
    if (ctx->pc == 0x12534Cu) {
        ctx->pc = 0x125350u;
        goto label_125350;
    }
    ctx->pc = 0x125348u;
    {
        const bool branch_taken_0x125348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125348) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x125350u;
label_125350:
    // 0x125350: 0x8f83ba00  lw          $v1, -0x4600($gp)
    ctx->pc = 0x125350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949376)));
label_125354:
    // 0x125354: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x125354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_125358:
    // 0x125358: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_12535c:
    if (ctx->pc == 0x12535Cu) {
        ctx->pc = 0x125360u;
        goto label_125360;
    }
    ctx->pc = 0x125358u;
    {
        const bool branch_taken_0x125358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x125358) {
            ctx->pc = 0x125370u;
            goto label_125370;
        }
    }
    ctx->pc = 0x125360u;
label_125360:
    // 0x125360: 0x8f83ba04  lw          $v1, -0x45FC($gp)
    ctx->pc = 0x125360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949380)));
label_125364:
    // 0x125364: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x125364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_125368:
    // 0x125368: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_12536c:
    if (ctx->pc == 0x12536Cu) {
        ctx->pc = 0x125370u;
        goto label_125370;
    }
    ctx->pc = 0x125368u;
    {
        const bool branch_taken_0x125368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x125368) {
            ctx->pc = 0x125380u;
            goto label_125380;
        }
    }
    ctx->pc = 0x125370u;
label_125370:
    // 0x125370: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x125370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_125374:
    // 0x125374: 0xaf82bb90  sw          $v0, -0x4470($gp)
    ctx->pc = 0x125374u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949776), GPR_U32(ctx, 2));
label_125378:
    // 0x125378: 0x10000010  b           . + 4 + (0x10 << 2)
label_12537c:
    if (ctx->pc == 0x12537Cu) {
        ctx->pc = 0x125380u;
        goto label_125380;
    }
    ctx->pc = 0x125378u;
    {
        const bool branch_taken_0x125378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125378) {
            ctx->pc = 0x1253BCu;
            goto label_1253bc;
        }
    }
    ctx->pc = 0x125380u;
label_125380:
    // 0x125380: 0x8f83bb90  lw          $v1, -0x4470($gp)
    ctx->pc = 0x125380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949776)));
label_125384:
    // 0x125384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125388:
    // 0x125388: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_12538c:
    if (ctx->pc == 0x12538Cu) {
        ctx->pc = 0x125390u;
        goto label_125390;
    }
    ctx->pc = 0x125388u;
    {
        const bool branch_taken_0x125388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x125388) {
            ctx->pc = 0x1253BCu;
            goto label_1253bc;
        }
    }
    ctx->pc = 0x125390u;
label_125390:
    // 0x125390: 0x8f83ba00  lw          $v1, -0x4600($gp)
    ctx->pc = 0x125390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949376)));
label_125394:
    // 0x125394: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x125394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_125398:
    // 0x125398: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_12539c:
    if (ctx->pc == 0x12539Cu) {
        ctx->pc = 0x1253A0u;
        goto label_1253a0;
    }
    ctx->pc = 0x125398u;
    {
        const bool branch_taken_0x125398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x125398) {
            ctx->pc = 0x1253ACu;
            goto label_1253ac;
        }
    }
    ctx->pc = 0x1253A0u;
label_1253a0:
    // 0x1253a0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1253a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1253a4:
    // 0x1253a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1253a8:
    if (ctx->pc == 0x1253A8u) {
        ctx->pc = 0x1253ACu;
        goto label_1253ac;
    }
    ctx->pc = 0x1253A4u;
    {
        const bool branch_taken_0x1253a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1253a4) {
            ctx->pc = 0x1253B0u;
            goto label_1253b0;
        }
    }
    ctx->pc = 0x1253ACu;
label_1253ac:
    // 0x1253ac: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1253acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1253b0:
    // 0x1253b0: 0xaf959d14  sw          $s5, -0x62EC($gp)
    ctx->pc = 0x1253b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941972), GPR_U32(ctx, 21));
label_1253b4:
    // 0x1253b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1253b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1253b8:
    // 0x1253b8: 0xaf82bb90  sw          $v0, -0x4470($gp)
    ctx->pc = 0x1253b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949776), GPR_U32(ctx, 2));
label_1253bc:
    // 0x1253bc: 0xc05548c  jal         func_155230
label_1253c0:
    if (ctx->pc == 0x1253C0u) {
        ctx->pc = 0x1253C4u;
        goto label_1253c4;
    }
    ctx->pc = 0x1253BCu;
    SET_GPR_U32(ctx, 31, 0x1253C4u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x1253BCu, 0x1253C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253C4u;
label_1253c4:
    // 0x1253c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1253c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1253c8:
    // 0x1253c8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1253c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1253cc:
    // 0x1253cc: 0xc0553d4  jal         func_154F50
label_1253d0:
    if (ctx->pc == 0x1253D0u) {
        ctx->pc = 0x1253D4u;
        goto label_1253d4;
    }
    ctx->pc = 0x1253CCu;
    SET_GPR_U32(ctx, 31, 0x1253D4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1253CCu, 0x1253D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253D4u;
label_1253d4:
    // 0x1253d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1253d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1253d8:
    // 0x1253d8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1253dc:
    if (ctx->pc == 0x1253DCu) {
        ctx->pc = 0x1253E0u;
        goto label_1253e0;
    }
    ctx->pc = 0x1253D8u;
    {
        const bool branch_taken_0x1253d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1253d8) {
            ctx->pc = 0x125400u;
            goto label_125400;
        }
    }
    ctx->pc = 0x1253E0u;
label_1253e0:
    // 0x1253e0: 0xc08d32c  jal         func_234CB0
label_1253e4:
    if (ctx->pc == 0x1253E4u) {
        ctx->pc = 0x1253E8u;
        goto label_1253e8;
    }
    ctx->pc = 0x1253E0u;
    SET_GPR_U32(ctx, 31, 0x1253E8u);
    ctx->pc = 0x234CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234CB0u, 0x1253E0u, 0x1253E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253E8u;
label_1253e8:
    // 0x1253e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1253ec:
    if (ctx->pc == 0x1253ECu) {
        ctx->pc = 0x1253F0u;
        goto label_1253f0;
    }
    ctx->pc = 0x1253E8u;
    {
        const bool branch_taken_0x1253e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1253e8) {
            ctx->pc = 0x125400u;
            goto label_125400;
        }
    }
    ctx->pc = 0x1253F0u;
label_1253f0:
    // 0x1253f0: 0x8f84bb90  lw          $a0, -0x4470($gp)
    ctx->pc = 0x1253f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949776)));
label_1253f4:
    // 0x1253f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1253f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1253f8:
    // 0x1253f8: 0x108300c6  beq         $a0, $v1, . + 4 + (0xC6 << 2)
label_1253fc:
    if (ctx->pc == 0x1253FCu) {
        ctx->pc = 0x125400u;
        goto label_125400;
    }
    ctx->pc = 0x1253F8u;
    {
        const bool branch_taken_0x1253f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1253f8) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x125400u;
label_125400:
    // 0x125400: 0x9383ba4c  lbu         $v1, -0x45B4($gp)
    ctx->pc = 0x125400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949452)));
label_125404:
    // 0x125404: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_125408:
    if (ctx->pc == 0x125408u) {
        ctx->pc = 0x12540Cu;
        goto label_12540c;
    }
    ctx->pc = 0x125404u;
    {
        const bool branch_taken_0x125404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x125404) {
            ctx->pc = 0x12541Cu;
            goto label_12541c;
        }
    }
    ctx->pc = 0x12540Cu;
label_12540c:
    // 0x12540c: 0x8f84bb90  lw          $a0, -0x4470($gp)
    ctx->pc = 0x12540cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949776)));
label_125410:
    // 0x125410: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x125410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_125414:
    // 0x125414: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
label_125418:
    if (ctx->pc == 0x125418u) {
        ctx->pc = 0x12541Cu;
        goto label_12541c;
    }
    ctx->pc = 0x125414u;
    {
        const bool branch_taken_0x125414 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x125414) {
            ctx->pc = 0x1254A0u;
            goto label_1254a0;
        }
    }
    ctx->pc = 0x12541Cu;
label_12541c:
    // 0x12541c: 0x9382ba4c  lbu         $v0, -0x45B4($gp)
    ctx->pc = 0x12541cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949452)));
label_125420:
    // 0x125420: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_125424:
    if (ctx->pc == 0x125424u) {
        ctx->pc = 0x125428u;
        goto label_125428;
    }
    ctx->pc = 0x125420u;
    {
        const bool branch_taken_0x125420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125420) {
            ctx->pc = 0x125444u;
            goto label_125444;
        }
    }
    ctx->pc = 0x125428u;
label_125428:
    // 0x125428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12542c:
    // 0x12542c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12542cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_125430:
    // 0x125430: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x125430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_125434:
    // 0x125434: 0x320f809  jalr        $t9
label_125438:
    if (ctx->pc == 0x125438u) {
        ctx->pc = 0x12543Cu;
        goto label_12543c;
    }
    ctx->pc = 0x125434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12543Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125434u, 0x12543Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12543Cu;
label_12543c:
    // 0x12543c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_125440:
    if (ctx->pc == 0x125440u) {
        ctx->pc = 0x125444u;
        goto label_125444;
    }
    ctx->pc = 0x12543Cu;
    {
        const bool branch_taken_0x12543c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12543c) {
            ctx->pc = 0x12548Cu;
            goto label_12548c;
        }
    }
    ctx->pc = 0x125444u;
label_125444:
    // 0x125444: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x125444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125448:
    // 0x125448: 0xc08d230  jal         func_2348C0
label_12544c:
    if (ctx->pc == 0x12544Cu) {
        ctx->pc = 0x125450u;
        goto label_125450;
    }
    ctx->pc = 0x125448u;
    SET_GPR_U32(ctx, 31, 0x125450u);
    ctx->pc = 0x2348C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C0u, 0x125448u, 0x125450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125450u;
label_125450:
    // 0x125450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125454:
    // 0x125454: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x125454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_125458:
    // 0x125458: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x125458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_12545c:
    // 0x12545c: 0x320f809  jalr        $t9
label_125460:
    if (ctx->pc == 0x125460u) {
        ctx->pc = 0x125464u;
        goto label_125464;
    }
    ctx->pc = 0x12545Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x125464u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12545Cu, 0x125464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125464u;
label_125464:
    // 0x125464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125468:
    // 0x125468: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x125468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12546c:
    // 0x12546c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x12546cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_125470:
    // 0x125470: 0x320f809  jalr        $t9
label_125474:
    if (ctx->pc == 0x125474u) {
        ctx->pc = 0x125478u;
        goto label_125478;
    }
    ctx->pc = 0x125470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x125478u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125470u, 0x125478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125478u;
label_125478:
    // 0x125478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12547c:
    // 0x12547c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12547cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_125480:
    // 0x125480: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x125480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_125484:
    // 0x125484: 0x320f809  jalr        $t9
label_125488:
    if (ctx->pc == 0x125488u) {
        ctx->pc = 0x12548Cu;
        goto label_12548c;
    }
    ctx->pc = 0x125484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12548Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125484u, 0x12548Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12548Cu;
label_12548c:
    // 0x12548c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x12548cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_125490:
    // 0x125490: 0xc049cb8  jal         func_1272E0
label_125494:
    if (ctx->pc == 0x125494u) {
        ctx->pc = 0x125498u;
        goto label_125498;
    }
    ctx->pc = 0x125490u;
    SET_GPR_U32(ctx, 31, 0x125498u);
    ctx->pc = 0x1272E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272E0u, 0x125490u, 0x125498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125498u;
label_125498:
    // 0x125498: 0x1000009e  b           . + 4 + (0x9E << 2)
label_12549c:
    if (ctx->pc == 0x12549Cu) {
        ctx->pc = 0x1254A0u;
        goto label_1254a0;
    }
    ctx->pc = 0x125498u;
    {
        const bool branch_taken_0x125498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125498) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x1254A0u;
label_1254a0:
    // 0x1254a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1254a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1254a4:
    // 0x1254a4: 0xc780ba48  lwc1        $f0, -0x45B8($gp)
    ctx->pc = 0x1254a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1254a8:
    // 0x1254a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1254a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1254ac:
    // 0x1254ac: 0x4500007e  bc1f        . + 4 + (0x7E << 2)
label_1254b0:
    if (ctx->pc == 0x1254B0u) {
        ctx->pc = 0x1254B4u;
        goto label_1254b4;
    }
    ctx->pc = 0x1254ACu;
    {
        const bool branch_taken_0x1254ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1254ac) {
            ctx->pc = 0x1256A8u;
            goto label_1256a8;
        }
    }
    ctx->pc = 0x1254B4u;
label_1254b4:
    // 0x1254b4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1254b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1254b8:
    // 0x1254b8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1254b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1254bc:
    // 0x1254bc: 0x24a52308  addiu       $a1, $a1, 0x2308
    ctx->pc = 0x1254bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8968));
label_1254c0:
    // 0x1254c0: 0xc08e57c  jal         func_2395F0
label_1254c4:
    if (ctx->pc == 0x1254C4u) {
        ctx->pc = 0x1254C8u;
        goto label_1254c8;
    }
    ctx->pc = 0x1254C0u;
    SET_GPR_U32(ctx, 31, 0x1254C8u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1254C0u, 0x1254C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254C8u;
label_1254c8:
    // 0x1254c8: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1254c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1254cc:
    // 0x1254cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1254ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1254d0:
    // 0x1254d0: 0xc0406d0  jal         func_101B40
label_1254d4:
    if (ctx->pc == 0x1254D4u) {
        ctx->pc = 0x1254D8u;
        goto label_1254d8;
    }
    ctx->pc = 0x1254D0u;
    SET_GPR_U32(ctx, 31, 0x1254D8u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1254D0u, 0x1254D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254D8u;
label_1254d8:
    // 0x1254d8: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1254d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1254dc:
    // 0x1254dc: 0xc0495d4  jal         func_125750
label_1254e0:
    if (ctx->pc == 0x1254E0u) {
        ctx->pc = 0x1254E4u;
        goto label_1254e4;
    }
    ctx->pc = 0x1254DCu;
    SET_GPR_U32(ctx, 31, 0x1254E4u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x1254DCu, 0x1254E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254E4u;
label_1254e4:
    // 0x1254e4: 0x8f83bb90  lw          $v1, -0x4470($gp)
    ctx->pc = 0x1254e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949776)));
label_1254e8:
    // 0x1254e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1254e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1254ec:
    // 0x1254ec: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_1254f0:
    if (ctx->pc == 0x1254F0u) {
        ctx->pc = 0x1254F4u;
        goto label_1254f4;
    }
    ctx->pc = 0x1254ECu;
    {
        const bool branch_taken_0x1254ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1254ec) {
            ctx->pc = 0x12556Cu;
            goto label_12556c;
        }
    }
    ctx->pc = 0x1254F4u;
label_1254f4:
    // 0x1254f4: 0x8f83ba00  lw          $v1, -0x4600($gp)
    ctx->pc = 0x1254f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949376)));
label_1254f8:
    // 0x1254f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1254f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1254fc:
    // 0x1254fc: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_125500:
    if (ctx->pc == 0x125500u) {
        ctx->pc = 0x125504u;
        goto label_125504;
    }
    ctx->pc = 0x1254FCu;
    {
        const bool branch_taken_0x1254fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1254fc) {
            ctx->pc = 0x125540u;
            goto label_125540;
        }
    }
    ctx->pc = 0x125504u;
label_125504:
    // 0x125504: 0x8f83ba04  lw          $v1, -0x45FC($gp)
    ctx->pc = 0x125504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949380)));
label_125508:
    // 0x125508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12550c:
    // 0x12550c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_125510:
    if (ctx->pc == 0x125510u) {
        ctx->pc = 0x125514u;
        goto label_125514;
    }
    ctx->pc = 0x12550Cu;
    {
        const bool branch_taken_0x12550c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12550c) {
            ctx->pc = 0x125540u;
            goto label_125540;
        }
    }
    ctx->pc = 0x125514u;
label_125514:
    // 0x125514: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x125514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_125518:
    // 0x125518: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x125518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_12551c:
    // 0x12551c: 0x24a52320  addiu       $a1, $a1, 0x2320
    ctx->pc = 0x12551cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8992));
label_125520:
    // 0x125520: 0xc08e57c  jal         func_2395F0
label_125524:
    if (ctx->pc == 0x125524u) {
        ctx->pc = 0x125528u;
        goto label_125528;
    }
    ctx->pc = 0x125520u;
    SET_GPR_U32(ctx, 31, 0x125528u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x125520u, 0x125528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125528u;
label_125528:
    // 0x125528: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x125528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_12552c:
    // 0x12552c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12552cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125530:
    // 0x125530: 0xc0477e8  jal         func_11DFA0
label_125534:
    if (ctx->pc == 0x125534u) {
        ctx->pc = 0x125538u;
        goto label_125538;
    }
    ctx->pc = 0x125530u;
    SET_GPR_U32(ctx, 31, 0x125538u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x125530u, 0x125538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125538u;
label_125538:
    // 0x125538: 0x1000002c  b           . + 4 + (0x2C << 2)
label_12553c:
    if (ctx->pc == 0x12553Cu) {
        ctx->pc = 0x125540u;
        goto label_125540;
    }
    ctx->pc = 0x125538u;
    {
        const bool branch_taken_0x125538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125538) {
            ctx->pc = 0x1255ECu;
            goto label_1255ec;
        }
    }
    ctx->pc = 0x125540u;
label_125540:
    // 0x125540: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x125540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_125544:
    // 0x125544: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x125544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_125548:
    // 0x125548: 0x24a52350  addiu       $a1, $a1, 0x2350
    ctx->pc = 0x125548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9040));
label_12554c:
    // 0x12554c: 0xc08e57c  jal         func_2395F0
label_125550:
    if (ctx->pc == 0x125550u) {
        ctx->pc = 0x125554u;
        goto label_125554;
    }
    ctx->pc = 0x12554Cu;
    SET_GPR_U32(ctx, 31, 0x125554u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x12554Cu, 0x125554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125554u;
label_125554:
    // 0x125554: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x125554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_125558:
    // 0x125558: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12555c:
    // 0x12555c: 0xc0477e8  jal         func_11DFA0
label_125560:
    if (ctx->pc == 0x125560u) {
        ctx->pc = 0x125564u;
        goto label_125564;
    }
    ctx->pc = 0x12555Cu;
    SET_GPR_U32(ctx, 31, 0x125564u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x12555Cu, 0x125564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125564u;
label_125564:
    // 0x125564: 0x10000021  b           . + 4 + (0x21 << 2)
label_125568:
    if (ctx->pc == 0x125568u) {
        ctx->pc = 0x12556Cu;
        goto label_12556c;
    }
    ctx->pc = 0x125564u;
    {
        const bool branch_taken_0x125564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125564) {
            ctx->pc = 0x1255ECu;
            goto label_1255ec;
        }
    }
    ctx->pc = 0x12556Cu;
label_12556c:
    // 0x12556c: 0x8f83bb90  lw          $v1, -0x4470($gp)
    ctx->pc = 0x12556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949776)));
label_125570:
    // 0x125570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x125570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_125574:
    // 0x125574: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_125578:
    if (ctx->pc == 0x125578u) {
        ctx->pc = 0x12557Cu;
        goto label_12557c;
    }
    ctx->pc = 0x125574u;
    {
        const bool branch_taken_0x125574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x125574) {
            ctx->pc = 0x1255ECu;
            goto label_1255ec;
        }
    }
    ctx->pc = 0x12557Cu;
label_12557c:
    // 0x12557c: 0x8f83ba00  lw          $v1, -0x4600($gp)
    ctx->pc = 0x12557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949376)));
label_125580:
    // 0x125580: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x125580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_125584:
    // 0x125584: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_125588:
    if (ctx->pc == 0x125588u) {
        ctx->pc = 0x12558Cu;
        goto label_12558c;
    }
    ctx->pc = 0x125584u;
    {
        const bool branch_taken_0x125584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x125584) {
            ctx->pc = 0x1255C8u;
            goto label_1255c8;
        }
    }
    ctx->pc = 0x12558Cu;
label_12558c:
    // 0x12558c: 0x8f83ba04  lw          $v1, -0x45FC($gp)
    ctx->pc = 0x12558cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949380)));
label_125590:
    // 0x125590: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x125590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_125594:
    // 0x125594: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_125598:
    if (ctx->pc == 0x125598u) {
        ctx->pc = 0x12559Cu;
        goto label_12559c;
    }
    ctx->pc = 0x125594u;
    {
        const bool branch_taken_0x125594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x125594) {
            ctx->pc = 0x1255C8u;
            goto label_1255c8;
        }
    }
    ctx->pc = 0x12559Cu;
label_12559c:
    // 0x12559c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x12559cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1255a0:
    // 0x1255a0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1255a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1255a4:
    // 0x1255a4: 0x24a52370  addiu       $a1, $a1, 0x2370
    ctx->pc = 0x1255a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9072));
label_1255a8:
    // 0x1255a8: 0xc08e57c  jal         func_2395F0
label_1255ac:
    if (ctx->pc == 0x1255ACu) {
        ctx->pc = 0x1255B0u;
        goto label_1255b0;
    }
    ctx->pc = 0x1255A8u;
    SET_GPR_U32(ctx, 31, 0x1255B0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1255A8u, 0x1255B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1255B0u;
label_1255b0:
    // 0x1255b0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1255b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1255b4:
    // 0x1255b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1255b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1255b8:
    // 0x1255b8: 0xc0477e8  jal         func_11DFA0
label_1255bc:
    if (ctx->pc == 0x1255BCu) {
        ctx->pc = 0x1255C0u;
        goto label_1255c0;
    }
    ctx->pc = 0x1255B8u;
    SET_GPR_U32(ctx, 31, 0x1255C0u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x1255B8u, 0x1255C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1255C0u;
label_1255c0:
    // 0x1255c0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1255c4:
    if (ctx->pc == 0x1255C4u) {
        ctx->pc = 0x1255C8u;
        goto label_1255c8;
    }
    ctx->pc = 0x1255C0u;
    {
        const bool branch_taken_0x1255c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1255c0) {
            ctx->pc = 0x1255ECu;
            goto label_1255ec;
        }
    }
    ctx->pc = 0x1255C8u;
label_1255c8:
    // 0x1255c8: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1255c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1255cc:
    // 0x1255cc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1255ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1255d0:
    // 0x1255d0: 0x24a523a0  addiu       $a1, $a1, 0x23A0
    ctx->pc = 0x1255d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9120));
label_1255d4:
    // 0x1255d4: 0xc08e57c  jal         func_2395F0
label_1255d8:
    if (ctx->pc == 0x1255D8u) {
        ctx->pc = 0x1255DCu;
        goto label_1255dc;
    }
    ctx->pc = 0x1255D4u;
    SET_GPR_U32(ctx, 31, 0x1255DCu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1255D4u, 0x1255DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1255DCu;
label_1255dc:
    // 0x1255dc: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1255dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1255e0:
    // 0x1255e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1255e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1255e4:
    // 0x1255e4: 0xc0477e8  jal         func_11DFA0
label_1255e8:
    if (ctx->pc == 0x1255E8u) {
        ctx->pc = 0x1255ECu;
        goto label_1255ec;
    }
    ctx->pc = 0x1255E4u;
    SET_GPR_U32(ctx, 31, 0x1255ECu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x1255E4u, 0x1255ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1255ECu;
label_1255ec:
    // 0x1255ec: 0x8f829d14  lw          $v0, -0x62EC($gp)
    ctx->pc = 0x1255ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941972)));
label_1255f0:
    // 0x1255f0: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1255f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1255f4:
    // 0x1255f4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1255f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1255f8:
    // 0x1255f8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1255f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1255fc:
    // 0x1255fc: 0x24a523c8  addiu       $a1, $a1, 0x23C8
    ctx->pc = 0x1255fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9160));
label_125600:
    // 0x125600: 0xc119600  jal         func_465800
label_125604:
    if (ctx->pc == 0x125604u) {
        ctx->pc = 0x125608u;
        goto label_125608;
    }
    ctx->pc = 0x125600u;
    SET_GPR_U32(ctx, 31, 0x125608u);
    ctx->pc = 0x465800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465800u, 0x125600u, 0x125608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125608u;
label_125608:
    // 0x125608: 0xc04a418  jal         func_129060
label_12560c:
    if (ctx->pc == 0x12560Cu) {
        ctx->pc = 0x125610u;
        goto label_125610;
    }
    ctx->pc = 0x125608u;
    SET_GPR_U32(ctx, 31, 0x125610u);
    ctx->pc = 0x129060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129060u, 0x125608u, 0x125610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125610u;
label_125610:
    // 0x125610: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x125610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_125614:
    // 0x125614: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x125614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_125618:
    // 0x125618: 0x27858b58  addiu       $a1, $gp, -0x74A8
    ctx->pc = 0x125618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937432));
label_12561c:
    // 0x12561c: 0xc119600  jal         func_465800
label_125620:
    if (ctx->pc == 0x125620u) {
        ctx->pc = 0x125624u;
        goto label_125624;
    }
    ctx->pc = 0x12561Cu;
    SET_GPR_U32(ctx, 31, 0x125624u);
    ctx->pc = 0x465800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465800u, 0x12561Cu, 0x125624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125624u;
label_125624:
    // 0x125624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125628:
    // 0x125628: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x125628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12562c:
    // 0x12562c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x12562cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_125630:
    // 0x125630: 0x320f809  jalr        $t9
label_125634:
    if (ctx->pc == 0x125634u) {
        ctx->pc = 0x125638u;
        goto label_125638;
    }
    ctx->pc = 0x125630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x125638u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125630u, 0x125638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125638u;
label_125638:
    // 0x125638: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x125638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12563c:
    // 0x12563c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125640:
    // 0x125640: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_125644:
    if (ctx->pc == 0x125644u) {
        ctx->pc = 0x125648u;
        goto label_125648;
    }
    ctx->pc = 0x125640u;
    {
        const bool branch_taken_0x125640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x125640) {
            ctx->pc = 0x125654u;
            goto label_125654;
        }
    }
    ctx->pc = 0x125648u;
label_125648:
    // 0x125648: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x125648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12564c:
    // 0x12564c: 0xc08d230  jal         func_2348C0
label_125650:
    if (ctx->pc == 0x125650u) {
        ctx->pc = 0x125654u;
        goto label_125654;
    }
    ctx->pc = 0x12564Cu;
    SET_GPR_U32(ctx, 31, 0x125654u);
    ctx->pc = 0x2348C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C0u, 0x12564Cu, 0x125654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125654u;
label_125654:
    // 0x125654: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x125654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_125658:
    // 0x125658: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x125658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_12565c:
    // 0x12565c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x12565cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_125660:
    // 0x125660: 0x34460101  ori         $a2, $v0, 0x101
    ctx->pc = 0x125660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_125664:
    // 0x125664: 0x3c070013  lui         $a3, 0x13
    ctx->pc = 0x125664u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)19 << 16));
label_125668:
    // 0x125668: 0x24e79310  addiu       $a3, $a3, -0x6CF0
    ctx->pc = 0x125668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939408));
label_12566c:
    // 0x12566c: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x12566cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_125670:
    // 0x125670: 0xc08d218  jal         func_234860
label_125674:
    if (ctx->pc == 0x125674u) {
        ctx->pc = 0x125678u;
        goto label_125678;
    }
    ctx->pc = 0x125670u;
    SET_GPR_U32(ctx, 31, 0x125678u);
    ctx->pc = 0x234860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234860u, 0x125670u, 0x125678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125678u;
label_125678:
    // 0x125678: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x125678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_12567c:
    // 0x12567c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12567cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125680:
    // 0x125680: 0xc0406a0  jal         func_101A80
label_125684:
    if (ctx->pc == 0x125684u) {
        ctx->pc = 0x125688u;
        goto label_125688;
    }
    ctx->pc = 0x125680u;
    SET_GPR_U32(ctx, 31, 0x125688u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x125680u, 0x125688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125688u;
label_125688:
    // 0x125688: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x125688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12568c:
    // 0x12568c: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x12568cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_125690:
    // 0x125690: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x125690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_125694:
    // 0x125694: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x125694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125698:
    // 0x125698: 0xc0406a0  jal         func_101A80
label_12569c:
    if (ctx->pc == 0x12569Cu) {
        ctx->pc = 0x1256A0u;
        goto label_1256a0;
    }
    ctx->pc = 0x125698u;
    SET_GPR_U32(ctx, 31, 0x1256A0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x125698u, 0x1256A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1256A0u;
label_1256a0:
    // 0x1256a0: 0x10000017  b           . + 4 + (0x17 << 2)
label_1256a4:
    if (ctx->pc == 0x1256A4u) {
        ctx->pc = 0x1256A8u;
        goto label_1256a8;
    }
    ctx->pc = 0x1256A0u;
    {
        const bool branch_taken_0x1256a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1256a0) {
            ctx->pc = 0x125700u;
            goto label_125700;
        }
    }
    ctx->pc = 0x1256A8u;
label_1256a8:
    // 0x1256a8: 0xc781ba48  lwc1        $f1, -0x45B8($gp)
    ctx->pc = 0x1256a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1256ac:
    // 0x1256ac: 0xc7808b40  lwc1        $f0, -0x74C0($gp)
    ctx->pc = 0x1256acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1256b0:
    // 0x1256b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1256b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1256b4:
    // 0x1256b4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_1256b8:
    if (ctx->pc == 0x1256B8u) {
        ctx->pc = 0x1256BCu;
        goto label_1256bc;
    }
    ctx->pc = 0x1256B4u;
    {
        const bool branch_taken_0x1256b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1256b4) {
            ctx->pc = 0x125700u;
            goto label_125700;
        }
    }
    ctx->pc = 0x1256BCu;
label_1256bc:
    // 0x1256bc: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1256bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1256c0:
    // 0x1256c0: 0xc049e90  jal         func_127A40
label_1256c4:
    if (ctx->pc == 0x1256C4u) {
        ctx->pc = 0x1256C8u;
        goto label_1256c8;
    }
    ctx->pc = 0x1256C0u;
    SET_GPR_U32(ctx, 31, 0x1256C8u);
    ctx->pc = 0x127A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A40u, 0x1256C0u, 0x1256C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1256C8u;
label_1256c8:
    // 0x1256c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1256c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1256cc:
    // 0x1256cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1256ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1256d0:
    // 0x1256d0: 0xaf83ba10  sw          $v1, -0x45F0($gp)
    ctx->pc = 0x1256d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949392), GPR_U32(ctx, 3));
label_1256d4:
    // 0x1256d4: 0xaf80b9f0  sw          $zero, -0x4610($gp)
    ctx->pc = 0x1256d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 0));
label_1256d8:
    // 0x1256d8: 0xaf80bb90  sw          $zero, -0x4470($gp)
    ctx->pc = 0x1256d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949776), GPR_U32(ctx, 0));
label_1256dc:
    // 0x1256dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1256dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1256e0:
    // 0x1256e0: 0x0  nop
    ctx->pc = 0x1256e0u;
    // NOP
label_1256e4:
    // 0x1256e4: 0xe780ba48  swc1        $f0, -0x45B8($gp)
    ctx->pc = 0x1256e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949448), bits); }
label_1256e8:
    // 0x1256e8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1256e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1256ec:
    // 0x1256ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1256ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1256f0:
    // 0x1256f0: 0xc049f4c  jal         func_127D30
label_1256f4:
    if (ctx->pc == 0x1256F4u) {
        ctx->pc = 0x1256F8u;
        goto label_1256f8;
    }
    ctx->pc = 0x1256F0u;
    SET_GPR_U32(ctx, 31, 0x1256F8u);
    ctx->pc = 0x127D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D30u, 0x1256F0u, 0x1256F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1256F8u;
label_1256f8:
    // 0x1256f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1256fc:
    if (ctx->pc == 0x1256FCu) {
        ctx->pc = 0x125700u;
        goto label_125700;
    }
    ctx->pc = 0x1256F8u;
    {
        const bool branch_taken_0x1256f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1256f8) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x125700u;
label_125700:
    // 0x125700: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x125700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_125704:
    // 0x125704: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x125704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125708:
    // 0x125708: 0xc780ba48  lwc1        $f0, -0x45B8($gp)
    ctx->pc = 0x125708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12570c:
    // 0x12570c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12570cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_125710:
    // 0x125710: 0xe780ba48  swc1        $f0, -0x45B8($gp)
    ctx->pc = 0x125710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949448), bits); }
label_125714:
    // 0x125714: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x125714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_125718:
    // 0x125718: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x125718u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12571c:
    // 0x12571c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x12571cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_125720:
    // 0x125720: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x125720u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_125724:
    // 0x125724: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x125724u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_125728:
    // 0x125728: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x125728u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12572c:
    // 0x12572c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12572cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_125730:
    // 0x125730: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x125730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_125734:
    // 0x125734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x125734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_125738:
    // 0x125738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x125738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12573c:
    // 0x12573c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x12573cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_125740:
    // 0x125740: 0x3e00008  jr          $ra
label_125744:
    if (ctx->pc == 0x125744u) {
        ctx->pc = 0x125748u;
        goto label_125748;
    }
    ctx->pc = 0x125740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125748u;
label_125748:
    // 0x125748: 0x0  nop
    ctx->pc = 0x125748u;
    // NOP
label_12574c:
    // 0x12574c: 0x0  nop
    ctx->pc = 0x12574cu;
    // NOP
    ctx->pc = 0x125750u;
}
