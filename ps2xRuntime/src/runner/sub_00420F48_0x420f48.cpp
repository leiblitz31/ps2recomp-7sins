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

// Function: sub_00420F48
// Address: 0x420f48 - 0x4245f0
void sub_00420F48_0x420f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420F48_0x420f48");
#endif

    switch (ctx->pc) {
        case 0x420f48u: goto label_420f48;
        case 0x420f4cu: goto label_420f4c;
        case 0x420f50u: goto label_420f50;
        case 0x420f54u: goto label_420f54;
        case 0x420f58u: goto label_420f58;
        case 0x420f5cu: goto label_420f5c;
        case 0x420f60u: goto label_420f60;
        case 0x420f64u: goto label_420f64;
        case 0x420f68u: goto label_420f68;
        case 0x420f6cu: goto label_420f6c;
        case 0x420f70u: goto label_420f70;
        case 0x420f74u: goto label_420f74;
        case 0x420f78u: goto label_420f78;
        case 0x420f7cu: goto label_420f7c;
        case 0x420f80u: goto label_420f80;
        case 0x420f84u: goto label_420f84;
        case 0x420f88u: goto label_420f88;
        case 0x420f8cu: goto label_420f8c;
        case 0x420f90u: goto label_420f90;
        case 0x420f94u: goto label_420f94;
        case 0x420f98u: goto label_420f98;
        case 0x420f9cu: goto label_420f9c;
        case 0x420fa0u: goto label_420fa0;
        case 0x420fa4u: goto label_420fa4;
        case 0x420fa8u: goto label_420fa8;
        case 0x420facu: goto label_420fac;
        case 0x420fb0u: goto label_420fb0;
        case 0x420fb4u: goto label_420fb4;
        case 0x420fb8u: goto label_420fb8;
        case 0x420fbcu: goto label_420fbc;
        case 0x420fc0u: goto label_420fc0;
        case 0x420fc4u: goto label_420fc4;
        case 0x420fc8u: goto label_420fc8;
        case 0x420fccu: goto label_420fcc;
        case 0x420fd0u: goto label_420fd0;
        case 0x420fd4u: goto label_420fd4;
        case 0x420fd8u: goto label_420fd8;
        case 0x420fdcu: goto label_420fdc;
        case 0x420fe0u: goto label_420fe0;
        case 0x420fe4u: goto label_420fe4;
        case 0x420fe8u: goto label_420fe8;
        case 0x420fecu: goto label_420fec;
        case 0x420ff0u: goto label_420ff0;
        case 0x420ff4u: goto label_420ff4;
        case 0x420ff8u: goto label_420ff8;
        case 0x420ffcu: goto label_420ffc;
        case 0x421000u: goto label_421000;
        case 0x421004u: goto label_421004;
        case 0x421008u: goto label_421008;
        case 0x42100cu: goto label_42100c;
        case 0x421010u: goto label_421010;
        case 0x421014u: goto label_421014;
        case 0x421018u: goto label_421018;
        case 0x42101cu: goto label_42101c;
        case 0x421020u: goto label_421020;
        case 0x421024u: goto label_421024;
        case 0x421028u: goto label_421028;
        case 0x42102cu: goto label_42102c;
        case 0x421030u: goto label_421030;
        case 0x421034u: goto label_421034;
        case 0x421038u: goto label_421038;
        case 0x42103cu: goto label_42103c;
        case 0x421040u: goto label_421040;
        case 0x421044u: goto label_421044;
        case 0x421048u: goto label_421048;
        case 0x42104cu: goto label_42104c;
        case 0x421050u: goto label_421050;
        case 0x421054u: goto label_421054;
        case 0x421058u: goto label_421058;
        case 0x42105cu: goto label_42105c;
        case 0x421060u: goto label_421060;
        case 0x421064u: goto label_421064;
        case 0x421068u: goto label_421068;
        case 0x42106cu: goto label_42106c;
        case 0x421070u: goto label_421070;
        case 0x421074u: goto label_421074;
        case 0x421078u: goto label_421078;
        case 0x42107cu: goto label_42107c;
        case 0x421080u: goto label_421080;
        case 0x421084u: goto label_421084;
        case 0x421088u: goto label_421088;
        case 0x42108cu: goto label_42108c;
        case 0x421090u: goto label_421090;
        case 0x421094u: goto label_421094;
        case 0x421098u: goto label_421098;
        case 0x42109cu: goto label_42109c;
        case 0x4210a0u: goto label_4210a0;
        case 0x4210a4u: goto label_4210a4;
        case 0x4210a8u: goto label_4210a8;
        case 0x4210acu: goto label_4210ac;
        case 0x4210b0u: goto label_4210b0;
        case 0x4210b4u: goto label_4210b4;
        case 0x4210b8u: goto label_4210b8;
        case 0x4210bcu: goto label_4210bc;
        case 0x4210c0u: goto label_4210c0;
        case 0x4210c4u: goto label_4210c4;
        case 0x4210c8u: goto label_4210c8;
        case 0x4210ccu: goto label_4210cc;
        case 0x4210d0u: goto label_4210d0;
        case 0x4210d4u: goto label_4210d4;
        case 0x4210d8u: goto label_4210d8;
        case 0x4210dcu: goto label_4210dc;
        case 0x4210e0u: goto label_4210e0;
        case 0x4210e4u: goto label_4210e4;
        case 0x4210e8u: goto label_4210e8;
        case 0x4210ecu: goto label_4210ec;
        case 0x4210f0u: goto label_4210f0;
        case 0x4210f4u: goto label_4210f4;
        case 0x4210f8u: goto label_4210f8;
        case 0x4210fcu: goto label_4210fc;
        case 0x421100u: goto label_421100;
        case 0x421104u: goto label_421104;
        case 0x421108u: goto label_421108;
        case 0x42110cu: goto label_42110c;
        case 0x421110u: goto label_421110;
        case 0x421114u: goto label_421114;
        case 0x421118u: goto label_421118;
        case 0x42111cu: goto label_42111c;
        case 0x421120u: goto label_421120;
        case 0x421124u: goto label_421124;
        case 0x421128u: goto label_421128;
        case 0x42112cu: goto label_42112c;
        case 0x421130u: goto label_421130;
        case 0x421134u: goto label_421134;
        case 0x421138u: goto label_421138;
        case 0x42113cu: goto label_42113c;
        case 0x421140u: goto label_421140;
        case 0x421144u: goto label_421144;
        case 0x421148u: goto label_421148;
        case 0x42114cu: goto label_42114c;
        case 0x421150u: goto label_421150;
        case 0x421154u: goto label_421154;
        case 0x421158u: goto label_421158;
        case 0x42115cu: goto label_42115c;
        case 0x421160u: goto label_421160;
        case 0x421164u: goto label_421164;
        case 0x421168u: goto label_421168;
        case 0x42116cu: goto label_42116c;
        case 0x421170u: goto label_421170;
        case 0x421174u: goto label_421174;
        case 0x421178u: goto label_421178;
        case 0x42117cu: goto label_42117c;
        case 0x421180u: goto label_421180;
        case 0x421184u: goto label_421184;
        case 0x421188u: goto label_421188;
        case 0x42118cu: goto label_42118c;
        case 0x421190u: goto label_421190;
        case 0x421194u: goto label_421194;
        case 0x421198u: goto label_421198;
        case 0x42119cu: goto label_42119c;
        case 0x4211a0u: goto label_4211a0;
        case 0x4211a4u: goto label_4211a4;
        case 0x4211a8u: goto label_4211a8;
        case 0x4211acu: goto label_4211ac;
        case 0x4211b0u: goto label_4211b0;
        case 0x4211b4u: goto label_4211b4;
        case 0x4211b8u: goto label_4211b8;
        case 0x4211bcu: goto label_4211bc;
        case 0x4211c0u: goto label_4211c0;
        case 0x4211c4u: goto label_4211c4;
        case 0x4211c8u: goto label_4211c8;
        case 0x4211ccu: goto label_4211cc;
        case 0x4211d0u: goto label_4211d0;
        case 0x4211d4u: goto label_4211d4;
        case 0x4211d8u: goto label_4211d8;
        case 0x4211dcu: goto label_4211dc;
        case 0x4211e0u: goto label_4211e0;
        case 0x4211e4u: goto label_4211e4;
        case 0x4211e8u: goto label_4211e8;
        case 0x4211ecu: goto label_4211ec;
        case 0x4211f0u: goto label_4211f0;
        case 0x4211f4u: goto label_4211f4;
        case 0x4211f8u: goto label_4211f8;
        case 0x4211fcu: goto label_4211fc;
        case 0x421200u: goto label_421200;
        case 0x421204u: goto label_421204;
        case 0x421208u: goto label_421208;
        case 0x42120cu: goto label_42120c;
        case 0x421210u: goto label_421210;
        case 0x421214u: goto label_421214;
        case 0x421218u: goto label_421218;
        case 0x42121cu: goto label_42121c;
        case 0x421220u: goto label_421220;
        case 0x421224u: goto label_421224;
        case 0x421228u: goto label_421228;
        case 0x42122cu: goto label_42122c;
        case 0x421230u: goto label_421230;
        case 0x421234u: goto label_421234;
        case 0x421238u: goto label_421238;
        case 0x42123cu: goto label_42123c;
        case 0x421240u: goto label_421240;
        case 0x421244u: goto label_421244;
        case 0x421248u: goto label_421248;
        case 0x42124cu: goto label_42124c;
        case 0x421250u: goto label_421250;
        case 0x421254u: goto label_421254;
        case 0x421258u: goto label_421258;
        case 0x42125cu: goto label_42125c;
        case 0x421260u: goto label_421260;
        case 0x421264u: goto label_421264;
        case 0x421268u: goto label_421268;
        case 0x42126cu: goto label_42126c;
        case 0x421270u: goto label_421270;
        case 0x421274u: goto label_421274;
        case 0x421278u: goto label_421278;
        case 0x42127cu: goto label_42127c;
        case 0x421280u: goto label_421280;
        case 0x421284u: goto label_421284;
        case 0x421288u: goto label_421288;
        case 0x42128cu: goto label_42128c;
        case 0x421290u: goto label_421290;
        case 0x421294u: goto label_421294;
        case 0x421298u: goto label_421298;
        case 0x42129cu: goto label_42129c;
        case 0x4212a0u: goto label_4212a0;
        case 0x4212a4u: goto label_4212a4;
        case 0x4212a8u: goto label_4212a8;
        case 0x4212acu: goto label_4212ac;
        case 0x4212b0u: goto label_4212b0;
        case 0x4212b4u: goto label_4212b4;
        case 0x4212b8u: goto label_4212b8;
        case 0x4212bcu: goto label_4212bc;
        case 0x4212c0u: goto label_4212c0;
        case 0x4212c4u: goto label_4212c4;
        case 0x4212c8u: goto label_4212c8;
        case 0x4212ccu: goto label_4212cc;
        case 0x4212d0u: goto label_4212d0;
        case 0x4212d4u: goto label_4212d4;
        case 0x4212d8u: goto label_4212d8;
        case 0x4212dcu: goto label_4212dc;
        case 0x4212e0u: goto label_4212e0;
        case 0x4212e4u: goto label_4212e4;
        case 0x4212e8u: goto label_4212e8;
        case 0x4212ecu: goto label_4212ec;
        case 0x4212f0u: goto label_4212f0;
        case 0x4212f4u: goto label_4212f4;
        case 0x4212f8u: goto label_4212f8;
        case 0x4212fcu: goto label_4212fc;
        case 0x421300u: goto label_421300;
        case 0x421304u: goto label_421304;
        case 0x421308u: goto label_421308;
        case 0x42130cu: goto label_42130c;
        case 0x421310u: goto label_421310;
        case 0x421314u: goto label_421314;
        case 0x421318u: goto label_421318;
        case 0x42131cu: goto label_42131c;
        case 0x421320u: goto label_421320;
        case 0x421324u: goto label_421324;
        case 0x421328u: goto label_421328;
        case 0x42132cu: goto label_42132c;
        case 0x421330u: goto label_421330;
        case 0x421334u: goto label_421334;
        case 0x421338u: goto label_421338;
        case 0x42133cu: goto label_42133c;
        case 0x421340u: goto label_421340;
        case 0x421344u: goto label_421344;
        case 0x421348u: goto label_421348;
        case 0x42134cu: goto label_42134c;
        case 0x421350u: goto label_421350;
        case 0x421354u: goto label_421354;
        case 0x421358u: goto label_421358;
        case 0x42135cu: goto label_42135c;
        case 0x421360u: goto label_421360;
        case 0x421364u: goto label_421364;
        case 0x421368u: goto label_421368;
        case 0x42136cu: goto label_42136c;
        case 0x421370u: goto label_421370;
        case 0x421374u: goto label_421374;
        case 0x421378u: goto label_421378;
        case 0x42137cu: goto label_42137c;
        case 0x421380u: goto label_421380;
        case 0x421384u: goto label_421384;
        case 0x421388u: goto label_421388;
        case 0x42138cu: goto label_42138c;
        case 0x421390u: goto label_421390;
        case 0x421394u: goto label_421394;
        case 0x421398u: goto label_421398;
        case 0x42139cu: goto label_42139c;
        case 0x4213a0u: goto label_4213a0;
        case 0x4213a4u: goto label_4213a4;
        case 0x4213a8u: goto label_4213a8;
        case 0x4213acu: goto label_4213ac;
        case 0x4213b0u: goto label_4213b0;
        case 0x4213b4u: goto label_4213b4;
        case 0x4213b8u: goto label_4213b8;
        case 0x4213bcu: goto label_4213bc;
        case 0x4213c0u: goto label_4213c0;
        case 0x4213c4u: goto label_4213c4;
        case 0x4213c8u: goto label_4213c8;
        case 0x4213ccu: goto label_4213cc;
        case 0x4213d0u: goto label_4213d0;
        case 0x4213d4u: goto label_4213d4;
        case 0x4213d8u: goto label_4213d8;
        case 0x4213dcu: goto label_4213dc;
        case 0x4213e0u: goto label_4213e0;
        case 0x4213e4u: goto label_4213e4;
        case 0x4213e8u: goto label_4213e8;
        case 0x4213ecu: goto label_4213ec;
        case 0x4213f0u: goto label_4213f0;
        case 0x4213f4u: goto label_4213f4;
        case 0x4213f8u: goto label_4213f8;
        case 0x4213fcu: goto label_4213fc;
        case 0x421400u: goto label_421400;
        case 0x421404u: goto label_421404;
        case 0x421408u: goto label_421408;
        case 0x42140cu: goto label_42140c;
        case 0x421410u: goto label_421410;
        case 0x421414u: goto label_421414;
        case 0x421418u: goto label_421418;
        case 0x42141cu: goto label_42141c;
        case 0x421420u: goto label_421420;
        case 0x421424u: goto label_421424;
        case 0x421428u: goto label_421428;
        case 0x42142cu: goto label_42142c;
        case 0x421430u: goto label_421430;
        case 0x421434u: goto label_421434;
        case 0x421438u: goto label_421438;
        case 0x42143cu: goto label_42143c;
        case 0x421440u: goto label_421440;
        case 0x421444u: goto label_421444;
        case 0x421448u: goto label_421448;
        case 0x42144cu: goto label_42144c;
        case 0x421450u: goto label_421450;
        case 0x421454u: goto label_421454;
        case 0x421458u: goto label_421458;
        case 0x42145cu: goto label_42145c;
        case 0x421460u: goto label_421460;
        case 0x421464u: goto label_421464;
        case 0x421468u: goto label_421468;
        case 0x42146cu: goto label_42146c;
        case 0x421470u: goto label_421470;
        case 0x421474u: goto label_421474;
        case 0x421478u: goto label_421478;
        case 0x42147cu: goto label_42147c;
        case 0x421480u: goto label_421480;
        case 0x421484u: goto label_421484;
        case 0x421488u: goto label_421488;
        case 0x42148cu: goto label_42148c;
        case 0x421490u: goto label_421490;
        case 0x421494u: goto label_421494;
        case 0x421498u: goto label_421498;
        case 0x42149cu: goto label_42149c;
        case 0x4214a0u: goto label_4214a0;
        case 0x4214a4u: goto label_4214a4;
        case 0x4214a8u: goto label_4214a8;
        case 0x4214acu: goto label_4214ac;
        case 0x4214b0u: goto label_4214b0;
        case 0x4214b4u: goto label_4214b4;
        case 0x4214b8u: goto label_4214b8;
        case 0x4214bcu: goto label_4214bc;
        case 0x4214c0u: goto label_4214c0;
        case 0x4214c4u: goto label_4214c4;
        case 0x4214c8u: goto label_4214c8;
        case 0x4214ccu: goto label_4214cc;
        case 0x4214d0u: goto label_4214d0;
        case 0x4214d4u: goto label_4214d4;
        case 0x4214d8u: goto label_4214d8;
        case 0x4214dcu: goto label_4214dc;
        case 0x4214e0u: goto label_4214e0;
        case 0x4214e4u: goto label_4214e4;
        case 0x4214e8u: goto label_4214e8;
        case 0x4214ecu: goto label_4214ec;
        case 0x4214f0u: goto label_4214f0;
        case 0x4214f4u: goto label_4214f4;
        case 0x4214f8u: goto label_4214f8;
        case 0x4214fcu: goto label_4214fc;
        case 0x421500u: goto label_421500;
        case 0x421504u: goto label_421504;
        case 0x421508u: goto label_421508;
        case 0x42150cu: goto label_42150c;
        case 0x421510u: goto label_421510;
        case 0x421514u: goto label_421514;
        case 0x421518u: goto label_421518;
        case 0x42151cu: goto label_42151c;
        case 0x421520u: goto label_421520;
        case 0x421524u: goto label_421524;
        case 0x421528u: goto label_421528;
        case 0x42152cu: goto label_42152c;
        case 0x421530u: goto label_421530;
        case 0x421534u: goto label_421534;
        case 0x421538u: goto label_421538;
        case 0x42153cu: goto label_42153c;
        case 0x421540u: goto label_421540;
        case 0x421544u: goto label_421544;
        case 0x421548u: goto label_421548;
        case 0x42154cu: goto label_42154c;
        case 0x421550u: goto label_421550;
        case 0x421554u: goto label_421554;
        case 0x421558u: goto label_421558;
        case 0x42155cu: goto label_42155c;
        case 0x421560u: goto label_421560;
        case 0x421564u: goto label_421564;
        case 0x421568u: goto label_421568;
        case 0x42156cu: goto label_42156c;
        case 0x421570u: goto label_421570;
        case 0x421574u: goto label_421574;
        case 0x421578u: goto label_421578;
        case 0x42157cu: goto label_42157c;
        case 0x421580u: goto label_421580;
        case 0x421584u: goto label_421584;
        case 0x421588u: goto label_421588;
        case 0x42158cu: goto label_42158c;
        case 0x421590u: goto label_421590;
        case 0x421594u: goto label_421594;
        case 0x421598u: goto label_421598;
        case 0x42159cu: goto label_42159c;
        case 0x4215a0u: goto label_4215a0;
        case 0x4215a4u: goto label_4215a4;
        case 0x4215a8u: goto label_4215a8;
        case 0x4215acu: goto label_4215ac;
        case 0x4215b0u: goto label_4215b0;
        case 0x4215b4u: goto label_4215b4;
        case 0x4215b8u: goto label_4215b8;
        case 0x4215bcu: goto label_4215bc;
        case 0x4215c0u: goto label_4215c0;
        case 0x4215c4u: goto label_4215c4;
        case 0x4215c8u: goto label_4215c8;
        case 0x4215ccu: goto label_4215cc;
        case 0x4215d0u: goto label_4215d0;
        case 0x4215d4u: goto label_4215d4;
        case 0x4215d8u: goto label_4215d8;
        case 0x4215dcu: goto label_4215dc;
        case 0x4215e0u: goto label_4215e0;
        case 0x4215e4u: goto label_4215e4;
        case 0x4215e8u: goto label_4215e8;
        case 0x4215ecu: goto label_4215ec;
        case 0x4215f0u: goto label_4215f0;
        case 0x4215f4u: goto label_4215f4;
        case 0x4215f8u: goto label_4215f8;
        case 0x4215fcu: goto label_4215fc;
        case 0x421600u: goto label_421600;
        case 0x421604u: goto label_421604;
        case 0x421608u: goto label_421608;
        case 0x42160cu: goto label_42160c;
        case 0x421610u: goto label_421610;
        case 0x421614u: goto label_421614;
        case 0x421618u: goto label_421618;
        case 0x42161cu: goto label_42161c;
        case 0x421620u: goto label_421620;
        case 0x421624u: goto label_421624;
        case 0x421628u: goto label_421628;
        case 0x42162cu: goto label_42162c;
        case 0x421630u: goto label_421630;
        case 0x421634u: goto label_421634;
        case 0x421638u: goto label_421638;
        case 0x42163cu: goto label_42163c;
        case 0x421640u: goto label_421640;
        case 0x421644u: goto label_421644;
        case 0x421648u: goto label_421648;
        case 0x42164cu: goto label_42164c;
        case 0x421650u: goto label_421650;
        case 0x421654u: goto label_421654;
        case 0x421658u: goto label_421658;
        case 0x42165cu: goto label_42165c;
        case 0x421660u: goto label_421660;
        case 0x421664u: goto label_421664;
        case 0x421668u: goto label_421668;
        case 0x42166cu: goto label_42166c;
        case 0x421670u: goto label_421670;
        case 0x421674u: goto label_421674;
        case 0x421678u: goto label_421678;
        case 0x42167cu: goto label_42167c;
        case 0x421680u: goto label_421680;
        case 0x421684u: goto label_421684;
        case 0x421688u: goto label_421688;
        case 0x42168cu: goto label_42168c;
        case 0x421690u: goto label_421690;
        case 0x421694u: goto label_421694;
        case 0x421698u: goto label_421698;
        case 0x42169cu: goto label_42169c;
        case 0x4216a0u: goto label_4216a0;
        case 0x4216a4u: goto label_4216a4;
        case 0x4216a8u: goto label_4216a8;
        case 0x4216acu: goto label_4216ac;
        case 0x4216b0u: goto label_4216b0;
        case 0x4216b4u: goto label_4216b4;
        case 0x4216b8u: goto label_4216b8;
        case 0x4216bcu: goto label_4216bc;
        case 0x4216c0u: goto label_4216c0;
        case 0x4216c4u: goto label_4216c4;
        case 0x4216c8u: goto label_4216c8;
        case 0x4216ccu: goto label_4216cc;
        case 0x4216d0u: goto label_4216d0;
        case 0x4216d4u: goto label_4216d4;
        case 0x4216d8u: goto label_4216d8;
        case 0x4216dcu: goto label_4216dc;
        case 0x4216e0u: goto label_4216e0;
        case 0x4216e4u: goto label_4216e4;
        case 0x4216e8u: goto label_4216e8;
        case 0x4216ecu: goto label_4216ec;
        case 0x4216f0u: goto label_4216f0;
        case 0x4216f4u: goto label_4216f4;
        case 0x4216f8u: goto label_4216f8;
        case 0x4216fcu: goto label_4216fc;
        case 0x421700u: goto label_421700;
        case 0x421704u: goto label_421704;
        case 0x421708u: goto label_421708;
        case 0x42170cu: goto label_42170c;
        case 0x421710u: goto label_421710;
        case 0x421714u: goto label_421714;
        case 0x421718u: goto label_421718;
        case 0x42171cu: goto label_42171c;
        case 0x421720u: goto label_421720;
        case 0x421724u: goto label_421724;
        case 0x421728u: goto label_421728;
        case 0x42172cu: goto label_42172c;
        case 0x421730u: goto label_421730;
        case 0x421734u: goto label_421734;
        case 0x421738u: goto label_421738;
        case 0x42173cu: goto label_42173c;
        case 0x421740u: goto label_421740;
        case 0x421744u: goto label_421744;
        case 0x421748u: goto label_421748;
        case 0x42174cu: goto label_42174c;
        case 0x421750u: goto label_421750;
        case 0x421754u: goto label_421754;
        case 0x421758u: goto label_421758;
        case 0x42175cu: goto label_42175c;
        case 0x421760u: goto label_421760;
        case 0x421764u: goto label_421764;
        case 0x421768u: goto label_421768;
        case 0x42176cu: goto label_42176c;
        case 0x421770u: goto label_421770;
        case 0x421774u: goto label_421774;
        case 0x421778u: goto label_421778;
        case 0x42177cu: goto label_42177c;
        case 0x421780u: goto label_421780;
        case 0x421784u: goto label_421784;
        case 0x421788u: goto label_421788;
        case 0x42178cu: goto label_42178c;
        case 0x421790u: goto label_421790;
        case 0x421794u: goto label_421794;
        case 0x421798u: goto label_421798;
        case 0x42179cu: goto label_42179c;
        case 0x4217a0u: goto label_4217a0;
        case 0x4217a4u: goto label_4217a4;
        case 0x4217a8u: goto label_4217a8;
        case 0x4217acu: goto label_4217ac;
        case 0x4217b0u: goto label_4217b0;
        case 0x4217b4u: goto label_4217b4;
        case 0x4217b8u: goto label_4217b8;
        case 0x4217bcu: goto label_4217bc;
        case 0x4217c0u: goto label_4217c0;
        case 0x4217c4u: goto label_4217c4;
        case 0x4217c8u: goto label_4217c8;
        case 0x4217ccu: goto label_4217cc;
        case 0x4217d0u: goto label_4217d0;
        case 0x4217d4u: goto label_4217d4;
        case 0x4217d8u: goto label_4217d8;
        case 0x4217dcu: goto label_4217dc;
        case 0x4217e0u: goto label_4217e0;
        case 0x4217e4u: goto label_4217e4;
        case 0x4217e8u: goto label_4217e8;
        case 0x4217ecu: goto label_4217ec;
        case 0x4217f0u: goto label_4217f0;
        case 0x4217f4u: goto label_4217f4;
        case 0x4217f8u: goto label_4217f8;
        case 0x4217fcu: goto label_4217fc;
        case 0x421800u: goto label_421800;
        case 0x421804u: goto label_421804;
        case 0x421808u: goto label_421808;
        case 0x42180cu: goto label_42180c;
        case 0x421810u: goto label_421810;
        case 0x421814u: goto label_421814;
        case 0x421818u: goto label_421818;
        case 0x42181cu: goto label_42181c;
        case 0x421820u: goto label_421820;
        case 0x421824u: goto label_421824;
        case 0x421828u: goto label_421828;
        case 0x42182cu: goto label_42182c;
        case 0x421830u: goto label_421830;
        case 0x421834u: goto label_421834;
        case 0x421838u: goto label_421838;
        case 0x42183cu: goto label_42183c;
        case 0x421840u: goto label_421840;
        case 0x421844u: goto label_421844;
        case 0x421848u: goto label_421848;
        case 0x42184cu: goto label_42184c;
        case 0x421850u: goto label_421850;
        case 0x421854u: goto label_421854;
        case 0x421858u: goto label_421858;
        case 0x42185cu: goto label_42185c;
        case 0x421860u: goto label_421860;
        case 0x421864u: goto label_421864;
        case 0x421868u: goto label_421868;
        case 0x42186cu: goto label_42186c;
        case 0x421870u: goto label_421870;
        case 0x421874u: goto label_421874;
        case 0x421878u: goto label_421878;
        case 0x42187cu: goto label_42187c;
        case 0x421880u: goto label_421880;
        case 0x421884u: goto label_421884;
        case 0x421888u: goto label_421888;
        case 0x42188cu: goto label_42188c;
        case 0x421890u: goto label_421890;
        case 0x421894u: goto label_421894;
        case 0x421898u: goto label_421898;
        case 0x42189cu: goto label_42189c;
        case 0x4218a0u: goto label_4218a0;
        case 0x4218a4u: goto label_4218a4;
        case 0x4218a8u: goto label_4218a8;
        case 0x4218acu: goto label_4218ac;
        case 0x4218b0u: goto label_4218b0;
        case 0x4218b4u: goto label_4218b4;
        case 0x4218b8u: goto label_4218b8;
        case 0x4218bcu: goto label_4218bc;
        case 0x4218c0u: goto label_4218c0;
        case 0x4218c4u: goto label_4218c4;
        case 0x4218c8u: goto label_4218c8;
        case 0x4218ccu: goto label_4218cc;
        case 0x4218d0u: goto label_4218d0;
        case 0x4218d4u: goto label_4218d4;
        case 0x4218d8u: goto label_4218d8;
        case 0x4218dcu: goto label_4218dc;
        case 0x4218e0u: goto label_4218e0;
        case 0x4218e4u: goto label_4218e4;
        case 0x4218e8u: goto label_4218e8;
        case 0x4218ecu: goto label_4218ec;
        case 0x4218f0u: goto label_4218f0;
        case 0x4218f4u: goto label_4218f4;
        case 0x4218f8u: goto label_4218f8;
        case 0x4218fcu: goto label_4218fc;
        case 0x421900u: goto label_421900;
        case 0x421904u: goto label_421904;
        case 0x421908u: goto label_421908;
        case 0x42190cu: goto label_42190c;
        case 0x421910u: goto label_421910;
        case 0x421914u: goto label_421914;
        case 0x421918u: goto label_421918;
        case 0x42191cu: goto label_42191c;
        case 0x421920u: goto label_421920;
        case 0x421924u: goto label_421924;
        case 0x421928u: goto label_421928;
        case 0x42192cu: goto label_42192c;
        case 0x421930u: goto label_421930;
        case 0x421934u: goto label_421934;
        case 0x421938u: goto label_421938;
        case 0x42193cu: goto label_42193c;
        case 0x421940u: goto label_421940;
        case 0x421944u: goto label_421944;
        case 0x421948u: goto label_421948;
        case 0x42194cu: goto label_42194c;
        case 0x421950u: goto label_421950;
        case 0x421954u: goto label_421954;
        case 0x421958u: goto label_421958;
        case 0x42195cu: goto label_42195c;
        case 0x421960u: goto label_421960;
        case 0x421964u: goto label_421964;
        case 0x421968u: goto label_421968;
        case 0x42196cu: goto label_42196c;
        case 0x421970u: goto label_421970;
        case 0x421974u: goto label_421974;
        case 0x421978u: goto label_421978;
        case 0x42197cu: goto label_42197c;
        case 0x421980u: goto label_421980;
        case 0x421984u: goto label_421984;
        case 0x421988u: goto label_421988;
        case 0x42198cu: goto label_42198c;
        case 0x421990u: goto label_421990;
        case 0x421994u: goto label_421994;
        case 0x421998u: goto label_421998;
        case 0x42199cu: goto label_42199c;
        case 0x4219a0u: goto label_4219a0;
        case 0x4219a4u: goto label_4219a4;
        case 0x4219a8u: goto label_4219a8;
        case 0x4219acu: goto label_4219ac;
        case 0x4219b0u: goto label_4219b0;
        case 0x4219b4u: goto label_4219b4;
        case 0x4219b8u: goto label_4219b8;
        case 0x4219bcu: goto label_4219bc;
        case 0x4219c0u: goto label_4219c0;
        case 0x4219c4u: goto label_4219c4;
        case 0x4219c8u: goto label_4219c8;
        case 0x4219ccu: goto label_4219cc;
        case 0x4219d0u: goto label_4219d0;
        case 0x4219d4u: goto label_4219d4;
        case 0x4219d8u: goto label_4219d8;
        case 0x4219dcu: goto label_4219dc;
        case 0x4219e0u: goto label_4219e0;
        case 0x4219e4u: goto label_4219e4;
        case 0x4219e8u: goto label_4219e8;
        case 0x4219ecu: goto label_4219ec;
        case 0x4219f0u: goto label_4219f0;
        case 0x4219f4u: goto label_4219f4;
        case 0x4219f8u: goto label_4219f8;
        case 0x4219fcu: goto label_4219fc;
        case 0x421a00u: goto label_421a00;
        case 0x421a04u: goto label_421a04;
        case 0x421a08u: goto label_421a08;
        case 0x421a0cu: goto label_421a0c;
        case 0x421a10u: goto label_421a10;
        case 0x421a14u: goto label_421a14;
        case 0x421a18u: goto label_421a18;
        case 0x421a1cu: goto label_421a1c;
        case 0x421a20u: goto label_421a20;
        case 0x421a24u: goto label_421a24;
        case 0x421a28u: goto label_421a28;
        case 0x421a2cu: goto label_421a2c;
        case 0x421a30u: goto label_421a30;
        case 0x421a34u: goto label_421a34;
        case 0x421a38u: goto label_421a38;
        case 0x421a3cu: goto label_421a3c;
        case 0x421a40u: goto label_421a40;
        case 0x421a44u: goto label_421a44;
        case 0x421a48u: goto label_421a48;
        case 0x421a4cu: goto label_421a4c;
        case 0x421a50u: goto label_421a50;
        case 0x421a54u: goto label_421a54;
        case 0x421a58u: goto label_421a58;
        case 0x421a5cu: goto label_421a5c;
        case 0x421a60u: goto label_421a60;
        case 0x421a64u: goto label_421a64;
        case 0x421a68u: goto label_421a68;
        case 0x421a6cu: goto label_421a6c;
        case 0x421a70u: goto label_421a70;
        case 0x421a74u: goto label_421a74;
        case 0x421a78u: goto label_421a78;
        case 0x421a7cu: goto label_421a7c;
        case 0x421a80u: goto label_421a80;
        case 0x421a84u: goto label_421a84;
        case 0x421a88u: goto label_421a88;
        case 0x421a8cu: goto label_421a8c;
        case 0x421a90u: goto label_421a90;
        case 0x421a94u: goto label_421a94;
        case 0x421a98u: goto label_421a98;
        case 0x421a9cu: goto label_421a9c;
        case 0x421aa0u: goto label_421aa0;
        case 0x421aa4u: goto label_421aa4;
        case 0x421aa8u: goto label_421aa8;
        case 0x421aacu: goto label_421aac;
        case 0x421ab0u: goto label_421ab0;
        case 0x421ab4u: goto label_421ab4;
        case 0x421ab8u: goto label_421ab8;
        case 0x421abcu: goto label_421abc;
        case 0x421ac0u: goto label_421ac0;
        case 0x421ac4u: goto label_421ac4;
        case 0x421ac8u: goto label_421ac8;
        case 0x421accu: goto label_421acc;
        case 0x421ad0u: goto label_421ad0;
        case 0x421ad4u: goto label_421ad4;
        case 0x421ad8u: goto label_421ad8;
        case 0x421adcu: goto label_421adc;
        case 0x421ae0u: goto label_421ae0;
        case 0x421ae4u: goto label_421ae4;
        case 0x421ae8u: goto label_421ae8;
        case 0x421aecu: goto label_421aec;
        case 0x421af0u: goto label_421af0;
        case 0x421af4u: goto label_421af4;
        case 0x421af8u: goto label_421af8;
        case 0x421afcu: goto label_421afc;
        case 0x421b00u: goto label_421b00;
        case 0x421b04u: goto label_421b04;
        case 0x421b08u: goto label_421b08;
        case 0x421b0cu: goto label_421b0c;
        case 0x421b10u: goto label_421b10;
        case 0x421b14u: goto label_421b14;
        case 0x421b18u: goto label_421b18;
        case 0x421b1cu: goto label_421b1c;
        case 0x421b20u: goto label_421b20;
        case 0x421b24u: goto label_421b24;
        case 0x421b28u: goto label_421b28;
        case 0x421b2cu: goto label_421b2c;
        case 0x421b30u: goto label_421b30;
        case 0x421b34u: goto label_421b34;
        case 0x421b38u: goto label_421b38;
        case 0x421b3cu: goto label_421b3c;
        case 0x421b40u: goto label_421b40;
        case 0x421b44u: goto label_421b44;
        case 0x421b48u: goto label_421b48;
        case 0x421b4cu: goto label_421b4c;
        case 0x421b50u: goto label_421b50;
        case 0x421b54u: goto label_421b54;
        case 0x421b58u: goto label_421b58;
        case 0x421b5cu: goto label_421b5c;
        case 0x421b60u: goto label_421b60;
        case 0x421b64u: goto label_421b64;
        case 0x421b68u: goto label_421b68;
        case 0x421b6cu: goto label_421b6c;
        case 0x421b70u: goto label_421b70;
        case 0x421b74u: goto label_421b74;
        case 0x421b78u: goto label_421b78;
        case 0x421b7cu: goto label_421b7c;
        case 0x421b80u: goto label_421b80;
        case 0x421b84u: goto label_421b84;
        case 0x421b88u: goto label_421b88;
        case 0x421b8cu: goto label_421b8c;
        case 0x421b90u: goto label_421b90;
        case 0x421b94u: goto label_421b94;
        case 0x421b98u: goto label_421b98;
        case 0x421b9cu: goto label_421b9c;
        case 0x421ba0u: goto label_421ba0;
        case 0x421ba4u: goto label_421ba4;
        case 0x421ba8u: goto label_421ba8;
        case 0x421bacu: goto label_421bac;
        case 0x421bb0u: goto label_421bb0;
        case 0x421bb4u: goto label_421bb4;
        case 0x421bb8u: goto label_421bb8;
        case 0x421bbcu: goto label_421bbc;
        case 0x421bc0u: goto label_421bc0;
        case 0x421bc4u: goto label_421bc4;
        case 0x421bc8u: goto label_421bc8;
        case 0x421bccu: goto label_421bcc;
        case 0x421bd0u: goto label_421bd0;
        case 0x421bd4u: goto label_421bd4;
        case 0x421bd8u: goto label_421bd8;
        case 0x421bdcu: goto label_421bdc;
        case 0x421be0u: goto label_421be0;
        case 0x421be4u: goto label_421be4;
        case 0x421be8u: goto label_421be8;
        case 0x421becu: goto label_421bec;
        case 0x421bf0u: goto label_421bf0;
        case 0x421bf4u: goto label_421bf4;
        case 0x421bf8u: goto label_421bf8;
        case 0x421bfcu: goto label_421bfc;
        case 0x421c00u: goto label_421c00;
        case 0x421c04u: goto label_421c04;
        case 0x421c08u: goto label_421c08;
        case 0x421c0cu: goto label_421c0c;
        case 0x421c10u: goto label_421c10;
        case 0x421c14u: goto label_421c14;
        case 0x421c18u: goto label_421c18;
        case 0x421c1cu: goto label_421c1c;
        case 0x421c20u: goto label_421c20;
        case 0x421c24u: goto label_421c24;
        case 0x421c28u: goto label_421c28;
        case 0x421c2cu: goto label_421c2c;
        case 0x421c30u: goto label_421c30;
        case 0x421c34u: goto label_421c34;
        case 0x421c38u: goto label_421c38;
        case 0x421c3cu: goto label_421c3c;
        case 0x421c40u: goto label_421c40;
        case 0x421c44u: goto label_421c44;
        case 0x421c48u: goto label_421c48;
        case 0x421c4cu: goto label_421c4c;
        case 0x421c50u: goto label_421c50;
        case 0x421c54u: goto label_421c54;
        case 0x421c58u: goto label_421c58;
        case 0x421c5cu: goto label_421c5c;
        case 0x421c60u: goto label_421c60;
        case 0x421c64u: goto label_421c64;
        case 0x421c68u: goto label_421c68;
        case 0x421c6cu: goto label_421c6c;
        case 0x421c70u: goto label_421c70;
        case 0x421c74u: goto label_421c74;
        case 0x421c78u: goto label_421c78;
        case 0x421c7cu: goto label_421c7c;
        case 0x421c80u: goto label_421c80;
        case 0x421c84u: goto label_421c84;
        case 0x421c88u: goto label_421c88;
        case 0x421c8cu: goto label_421c8c;
        case 0x421c90u: goto label_421c90;
        case 0x421c94u: goto label_421c94;
        case 0x421c98u: goto label_421c98;
        case 0x421c9cu: goto label_421c9c;
        case 0x421ca0u: goto label_421ca0;
        case 0x421ca4u: goto label_421ca4;
        case 0x421ca8u: goto label_421ca8;
        case 0x421cacu: goto label_421cac;
        case 0x421cb0u: goto label_421cb0;
        case 0x421cb4u: goto label_421cb4;
        case 0x421cb8u: goto label_421cb8;
        case 0x421cbcu: goto label_421cbc;
        case 0x421cc0u: goto label_421cc0;
        case 0x421cc4u: goto label_421cc4;
        case 0x421cc8u: goto label_421cc8;
        case 0x421cccu: goto label_421ccc;
        case 0x421cd0u: goto label_421cd0;
        case 0x421cd4u: goto label_421cd4;
        case 0x421cd8u: goto label_421cd8;
        case 0x421cdcu: goto label_421cdc;
        case 0x421ce0u: goto label_421ce0;
        case 0x421ce4u: goto label_421ce4;
        case 0x421ce8u: goto label_421ce8;
        case 0x421cecu: goto label_421cec;
        case 0x421cf0u: goto label_421cf0;
        case 0x421cf4u: goto label_421cf4;
        case 0x421cf8u: goto label_421cf8;
        case 0x421cfcu: goto label_421cfc;
        case 0x421d00u: goto label_421d00;
        case 0x421d04u: goto label_421d04;
        case 0x421d08u: goto label_421d08;
        case 0x421d0cu: goto label_421d0c;
        case 0x421d10u: goto label_421d10;
        case 0x421d14u: goto label_421d14;
        case 0x421d18u: goto label_421d18;
        case 0x421d1cu: goto label_421d1c;
        case 0x421d20u: goto label_421d20;
        case 0x421d24u: goto label_421d24;
        case 0x421d28u: goto label_421d28;
        case 0x421d2cu: goto label_421d2c;
        case 0x421d30u: goto label_421d30;
        case 0x421d34u: goto label_421d34;
        case 0x421d38u: goto label_421d38;
        case 0x421d3cu: goto label_421d3c;
        case 0x421d40u: goto label_421d40;
        case 0x421d44u: goto label_421d44;
        case 0x421d48u: goto label_421d48;
        case 0x421d4cu: goto label_421d4c;
        case 0x421d50u: goto label_421d50;
        case 0x421d54u: goto label_421d54;
        case 0x421d58u: goto label_421d58;
        case 0x421d5cu: goto label_421d5c;
        case 0x421d60u: goto label_421d60;
        case 0x421d64u: goto label_421d64;
        case 0x421d68u: goto label_421d68;
        case 0x421d6cu: goto label_421d6c;
        case 0x421d70u: goto label_421d70;
        case 0x421d74u: goto label_421d74;
        case 0x421d78u: goto label_421d78;
        case 0x421d7cu: goto label_421d7c;
        case 0x421d80u: goto label_421d80;
        case 0x421d84u: goto label_421d84;
        case 0x421d88u: goto label_421d88;
        case 0x421d8cu: goto label_421d8c;
        case 0x421d90u: goto label_421d90;
        case 0x421d94u: goto label_421d94;
        case 0x421d98u: goto label_421d98;
        case 0x421d9cu: goto label_421d9c;
        case 0x421da0u: goto label_421da0;
        case 0x421da4u: goto label_421da4;
        case 0x421da8u: goto label_421da8;
        case 0x421dacu: goto label_421dac;
        case 0x421db0u: goto label_421db0;
        case 0x421db4u: goto label_421db4;
        case 0x421db8u: goto label_421db8;
        case 0x421dbcu: goto label_421dbc;
        case 0x421dc0u: goto label_421dc0;
        case 0x421dc4u: goto label_421dc4;
        case 0x421dc8u: goto label_421dc8;
        case 0x421dccu: goto label_421dcc;
        case 0x421dd0u: goto label_421dd0;
        case 0x421dd4u: goto label_421dd4;
        case 0x421dd8u: goto label_421dd8;
        case 0x421ddcu: goto label_421ddc;
        case 0x421de0u: goto label_421de0;
        case 0x421de4u: goto label_421de4;
        case 0x421de8u: goto label_421de8;
        case 0x421decu: goto label_421dec;
        case 0x421df0u: goto label_421df0;
        case 0x421df4u: goto label_421df4;
        case 0x421df8u: goto label_421df8;
        case 0x421dfcu: goto label_421dfc;
        case 0x421e00u: goto label_421e00;
        case 0x421e04u: goto label_421e04;
        case 0x421e08u: goto label_421e08;
        case 0x421e0cu: goto label_421e0c;
        case 0x421e10u: goto label_421e10;
        case 0x421e14u: goto label_421e14;
        case 0x421e18u: goto label_421e18;
        case 0x421e1cu: goto label_421e1c;
        case 0x421e20u: goto label_421e20;
        case 0x421e24u: goto label_421e24;
        case 0x421e28u: goto label_421e28;
        case 0x421e2cu: goto label_421e2c;
        case 0x421e30u: goto label_421e30;
        case 0x421e34u: goto label_421e34;
        case 0x421e38u: goto label_421e38;
        case 0x421e3cu: goto label_421e3c;
        case 0x421e40u: goto label_421e40;
        case 0x421e44u: goto label_421e44;
        case 0x421e48u: goto label_421e48;
        case 0x421e4cu: goto label_421e4c;
        case 0x421e50u: goto label_421e50;
        case 0x421e54u: goto label_421e54;
        case 0x421e58u: goto label_421e58;
        case 0x421e5cu: goto label_421e5c;
        case 0x421e60u: goto label_421e60;
        case 0x421e64u: goto label_421e64;
        case 0x421e68u: goto label_421e68;
        case 0x421e6cu: goto label_421e6c;
        case 0x421e70u: goto label_421e70;
        case 0x421e74u: goto label_421e74;
        case 0x421e78u: goto label_421e78;
        case 0x421e7cu: goto label_421e7c;
        case 0x421e80u: goto label_421e80;
        case 0x421e84u: goto label_421e84;
        case 0x421e88u: goto label_421e88;
        case 0x421e8cu: goto label_421e8c;
        case 0x421e90u: goto label_421e90;
        case 0x421e94u: goto label_421e94;
        case 0x421e98u: goto label_421e98;
        case 0x421e9cu: goto label_421e9c;
        case 0x421ea0u: goto label_421ea0;
        case 0x421ea4u: goto label_421ea4;
        case 0x421ea8u: goto label_421ea8;
        case 0x421eacu: goto label_421eac;
        case 0x421eb0u: goto label_421eb0;
        case 0x421eb4u: goto label_421eb4;
        case 0x421eb8u: goto label_421eb8;
        case 0x421ebcu: goto label_421ebc;
        case 0x421ec0u: goto label_421ec0;
        case 0x421ec4u: goto label_421ec4;
        case 0x421ec8u: goto label_421ec8;
        case 0x421eccu: goto label_421ecc;
        case 0x421ed0u: goto label_421ed0;
        case 0x421ed4u: goto label_421ed4;
        case 0x421ed8u: goto label_421ed8;
        case 0x421edcu: goto label_421edc;
        case 0x421ee0u: goto label_421ee0;
        case 0x421ee4u: goto label_421ee4;
        case 0x421ee8u: goto label_421ee8;
        case 0x421eecu: goto label_421eec;
        case 0x421ef0u: goto label_421ef0;
        case 0x421ef4u: goto label_421ef4;
        case 0x421ef8u: goto label_421ef8;
        case 0x421efcu: goto label_421efc;
        case 0x421f00u: goto label_421f00;
        case 0x421f04u: goto label_421f04;
        case 0x421f08u: goto label_421f08;
        case 0x421f0cu: goto label_421f0c;
        case 0x421f10u: goto label_421f10;
        case 0x421f14u: goto label_421f14;
        case 0x421f18u: goto label_421f18;
        case 0x421f1cu: goto label_421f1c;
        case 0x421f20u: goto label_421f20;
        case 0x421f24u: goto label_421f24;
        case 0x421f28u: goto label_421f28;
        case 0x421f2cu: goto label_421f2c;
        case 0x421f30u: goto label_421f30;
        case 0x421f34u: goto label_421f34;
        case 0x421f38u: goto label_421f38;
        case 0x421f3cu: goto label_421f3c;
        case 0x421f40u: goto label_421f40;
        case 0x421f44u: goto label_421f44;
        case 0x421f48u: goto label_421f48;
        case 0x421f4cu: goto label_421f4c;
        case 0x421f50u: goto label_421f50;
        case 0x421f54u: goto label_421f54;
        case 0x421f58u: goto label_421f58;
        case 0x421f5cu: goto label_421f5c;
        case 0x421f60u: goto label_421f60;
        case 0x421f64u: goto label_421f64;
        case 0x421f68u: goto label_421f68;
        case 0x421f6cu: goto label_421f6c;
        case 0x421f70u: goto label_421f70;
        case 0x421f74u: goto label_421f74;
        case 0x421f78u: goto label_421f78;
        case 0x421f7cu: goto label_421f7c;
        case 0x421f80u: goto label_421f80;
        case 0x421f84u: goto label_421f84;
        case 0x421f88u: goto label_421f88;
        case 0x421f8cu: goto label_421f8c;
        case 0x421f90u: goto label_421f90;
        case 0x421f94u: goto label_421f94;
        case 0x421f98u: goto label_421f98;
        case 0x421f9cu: goto label_421f9c;
        case 0x421fa0u: goto label_421fa0;
        case 0x421fa4u: goto label_421fa4;
        case 0x421fa8u: goto label_421fa8;
        case 0x421facu: goto label_421fac;
        case 0x421fb0u: goto label_421fb0;
        case 0x421fb4u: goto label_421fb4;
        case 0x421fb8u: goto label_421fb8;
        case 0x421fbcu: goto label_421fbc;
        case 0x421fc0u: goto label_421fc0;
        case 0x421fc4u: goto label_421fc4;
        case 0x421fc8u: goto label_421fc8;
        case 0x421fccu: goto label_421fcc;
        case 0x421fd0u: goto label_421fd0;
        case 0x421fd4u: goto label_421fd4;
        case 0x421fd8u: goto label_421fd8;
        case 0x421fdcu: goto label_421fdc;
        case 0x421fe0u: goto label_421fe0;
        case 0x421fe4u: goto label_421fe4;
        case 0x421fe8u: goto label_421fe8;
        case 0x421fecu: goto label_421fec;
        case 0x421ff0u: goto label_421ff0;
        case 0x421ff4u: goto label_421ff4;
        case 0x421ff8u: goto label_421ff8;
        case 0x421ffcu: goto label_421ffc;
        case 0x422000u: goto label_422000;
        case 0x422004u: goto label_422004;
        case 0x422008u: goto label_422008;
        case 0x42200cu: goto label_42200c;
        case 0x422010u: goto label_422010;
        case 0x422014u: goto label_422014;
        case 0x422018u: goto label_422018;
        case 0x42201cu: goto label_42201c;
        case 0x422020u: goto label_422020;
        case 0x422024u: goto label_422024;
        case 0x422028u: goto label_422028;
        case 0x42202cu: goto label_42202c;
        case 0x422030u: goto label_422030;
        case 0x422034u: goto label_422034;
        case 0x422038u: goto label_422038;
        case 0x42203cu: goto label_42203c;
        case 0x422040u: goto label_422040;
        case 0x422044u: goto label_422044;
        case 0x422048u: goto label_422048;
        case 0x42204cu: goto label_42204c;
        case 0x422050u: goto label_422050;
        case 0x422054u: goto label_422054;
        case 0x422058u: goto label_422058;
        case 0x42205cu: goto label_42205c;
        case 0x422060u: goto label_422060;
        case 0x422064u: goto label_422064;
        case 0x422068u: goto label_422068;
        case 0x42206cu: goto label_42206c;
        case 0x422070u: goto label_422070;
        case 0x422074u: goto label_422074;
        case 0x422078u: goto label_422078;
        case 0x42207cu: goto label_42207c;
        case 0x422080u: goto label_422080;
        case 0x422084u: goto label_422084;
        case 0x422088u: goto label_422088;
        case 0x42208cu: goto label_42208c;
        case 0x422090u: goto label_422090;
        case 0x422094u: goto label_422094;
        case 0x422098u: goto label_422098;
        case 0x42209cu: goto label_42209c;
        case 0x4220a0u: goto label_4220a0;
        case 0x4220a4u: goto label_4220a4;
        case 0x4220a8u: goto label_4220a8;
        case 0x4220acu: goto label_4220ac;
        case 0x4220b0u: goto label_4220b0;
        case 0x4220b4u: goto label_4220b4;
        case 0x4220b8u: goto label_4220b8;
        case 0x4220bcu: goto label_4220bc;
        case 0x4220c0u: goto label_4220c0;
        case 0x4220c4u: goto label_4220c4;
        case 0x4220c8u: goto label_4220c8;
        case 0x4220ccu: goto label_4220cc;
        case 0x4220d0u: goto label_4220d0;
        case 0x4220d4u: goto label_4220d4;
        case 0x4220d8u: goto label_4220d8;
        case 0x4220dcu: goto label_4220dc;
        case 0x4220e0u: goto label_4220e0;
        case 0x4220e4u: goto label_4220e4;
        case 0x4220e8u: goto label_4220e8;
        case 0x4220ecu: goto label_4220ec;
        case 0x4220f0u: goto label_4220f0;
        case 0x4220f4u: goto label_4220f4;
        case 0x4220f8u: goto label_4220f8;
        case 0x4220fcu: goto label_4220fc;
        case 0x422100u: goto label_422100;
        case 0x422104u: goto label_422104;
        case 0x422108u: goto label_422108;
        case 0x42210cu: goto label_42210c;
        case 0x422110u: goto label_422110;
        case 0x422114u: goto label_422114;
        case 0x422118u: goto label_422118;
        case 0x42211cu: goto label_42211c;
        case 0x422120u: goto label_422120;
        case 0x422124u: goto label_422124;
        case 0x422128u: goto label_422128;
        case 0x42212cu: goto label_42212c;
        case 0x422130u: goto label_422130;
        case 0x422134u: goto label_422134;
        case 0x422138u: goto label_422138;
        case 0x42213cu: goto label_42213c;
        case 0x422140u: goto label_422140;
        case 0x422144u: goto label_422144;
        case 0x422148u: goto label_422148;
        case 0x42214cu: goto label_42214c;
        case 0x422150u: goto label_422150;
        case 0x422154u: goto label_422154;
        case 0x422158u: goto label_422158;
        case 0x42215cu: goto label_42215c;
        case 0x422160u: goto label_422160;
        case 0x422164u: goto label_422164;
        case 0x422168u: goto label_422168;
        case 0x42216cu: goto label_42216c;
        case 0x422170u: goto label_422170;
        case 0x422174u: goto label_422174;
        case 0x422178u: goto label_422178;
        case 0x42217cu: goto label_42217c;
        case 0x422180u: goto label_422180;
        case 0x422184u: goto label_422184;
        case 0x422188u: goto label_422188;
        case 0x42218cu: goto label_42218c;
        case 0x422190u: goto label_422190;
        case 0x422194u: goto label_422194;
        case 0x422198u: goto label_422198;
        case 0x42219cu: goto label_42219c;
        case 0x4221a0u: goto label_4221a0;
        case 0x4221a4u: goto label_4221a4;
        case 0x4221a8u: goto label_4221a8;
        case 0x4221acu: goto label_4221ac;
        case 0x4221b0u: goto label_4221b0;
        case 0x4221b4u: goto label_4221b4;
        case 0x4221b8u: goto label_4221b8;
        case 0x4221bcu: goto label_4221bc;
        case 0x4221c0u: goto label_4221c0;
        case 0x4221c4u: goto label_4221c4;
        case 0x4221c8u: goto label_4221c8;
        case 0x4221ccu: goto label_4221cc;
        case 0x4221d0u: goto label_4221d0;
        case 0x4221d4u: goto label_4221d4;
        case 0x4221d8u: goto label_4221d8;
        case 0x4221dcu: goto label_4221dc;
        case 0x4221e0u: goto label_4221e0;
        case 0x4221e4u: goto label_4221e4;
        case 0x4221e8u: goto label_4221e8;
        case 0x4221ecu: goto label_4221ec;
        case 0x4221f0u: goto label_4221f0;
        case 0x4221f4u: goto label_4221f4;
        case 0x4221f8u: goto label_4221f8;
        case 0x4221fcu: goto label_4221fc;
        case 0x422200u: goto label_422200;
        case 0x422204u: goto label_422204;
        case 0x422208u: goto label_422208;
        case 0x42220cu: goto label_42220c;
        case 0x422210u: goto label_422210;
        case 0x422214u: goto label_422214;
        case 0x422218u: goto label_422218;
        case 0x42221cu: goto label_42221c;
        case 0x422220u: goto label_422220;
        case 0x422224u: goto label_422224;
        case 0x422228u: goto label_422228;
        case 0x42222cu: goto label_42222c;
        case 0x422230u: goto label_422230;
        case 0x422234u: goto label_422234;
        case 0x422238u: goto label_422238;
        case 0x42223cu: goto label_42223c;
        case 0x422240u: goto label_422240;
        case 0x422244u: goto label_422244;
        case 0x422248u: goto label_422248;
        case 0x42224cu: goto label_42224c;
        case 0x422250u: goto label_422250;
        case 0x422254u: goto label_422254;
        case 0x422258u: goto label_422258;
        case 0x42225cu: goto label_42225c;
        case 0x422260u: goto label_422260;
        case 0x422264u: goto label_422264;
        case 0x422268u: goto label_422268;
        case 0x42226cu: goto label_42226c;
        case 0x422270u: goto label_422270;
        case 0x422274u: goto label_422274;
        case 0x422278u: goto label_422278;
        case 0x42227cu: goto label_42227c;
        case 0x422280u: goto label_422280;
        case 0x422284u: goto label_422284;
        case 0x422288u: goto label_422288;
        case 0x42228cu: goto label_42228c;
        case 0x422290u: goto label_422290;
        case 0x422294u: goto label_422294;
        case 0x422298u: goto label_422298;
        case 0x42229cu: goto label_42229c;
        case 0x4222a0u: goto label_4222a0;
        case 0x4222a4u: goto label_4222a4;
        case 0x4222a8u: goto label_4222a8;
        case 0x4222acu: goto label_4222ac;
        case 0x4222b0u: goto label_4222b0;
        case 0x4222b4u: goto label_4222b4;
        case 0x4222b8u: goto label_4222b8;
        case 0x4222bcu: goto label_4222bc;
        case 0x4222c0u: goto label_4222c0;
        case 0x4222c4u: goto label_4222c4;
        case 0x4222c8u: goto label_4222c8;
        case 0x4222ccu: goto label_4222cc;
        case 0x4222d0u: goto label_4222d0;
        case 0x4222d4u: goto label_4222d4;
        case 0x4222d8u: goto label_4222d8;
        case 0x4222dcu: goto label_4222dc;
        case 0x4222e0u: goto label_4222e0;
        case 0x4222e4u: goto label_4222e4;
        case 0x4222e8u: goto label_4222e8;
        case 0x4222ecu: goto label_4222ec;
        case 0x4222f0u: goto label_4222f0;
        case 0x4222f4u: goto label_4222f4;
        case 0x4222f8u: goto label_4222f8;
        case 0x4222fcu: goto label_4222fc;
        case 0x422300u: goto label_422300;
        case 0x422304u: goto label_422304;
        case 0x422308u: goto label_422308;
        case 0x42230cu: goto label_42230c;
        case 0x422310u: goto label_422310;
        case 0x422314u: goto label_422314;
        case 0x422318u: goto label_422318;
        case 0x42231cu: goto label_42231c;
        case 0x422320u: goto label_422320;
        case 0x422324u: goto label_422324;
        case 0x422328u: goto label_422328;
        case 0x42232cu: goto label_42232c;
        case 0x422330u: goto label_422330;
        case 0x422334u: goto label_422334;
        case 0x422338u: goto label_422338;
        case 0x42233cu: goto label_42233c;
        case 0x422340u: goto label_422340;
        case 0x422344u: goto label_422344;
        case 0x422348u: goto label_422348;
        case 0x42234cu: goto label_42234c;
        case 0x422350u: goto label_422350;
        case 0x422354u: goto label_422354;
        case 0x422358u: goto label_422358;
        case 0x42235cu: goto label_42235c;
        case 0x422360u: goto label_422360;
        case 0x422364u: goto label_422364;
        case 0x422368u: goto label_422368;
        case 0x42236cu: goto label_42236c;
        case 0x422370u: goto label_422370;
        case 0x422374u: goto label_422374;
        case 0x422378u: goto label_422378;
        case 0x42237cu: goto label_42237c;
        case 0x422380u: goto label_422380;
        case 0x422384u: goto label_422384;
        case 0x422388u: goto label_422388;
        case 0x42238cu: goto label_42238c;
        case 0x422390u: goto label_422390;
        case 0x422394u: goto label_422394;
        case 0x422398u: goto label_422398;
        case 0x42239cu: goto label_42239c;
        case 0x4223a0u: goto label_4223a0;
        case 0x4223a4u: goto label_4223a4;
        case 0x4223a8u: goto label_4223a8;
        case 0x4223acu: goto label_4223ac;
        case 0x4223b0u: goto label_4223b0;
        case 0x4223b4u: goto label_4223b4;
        case 0x4223b8u: goto label_4223b8;
        case 0x4223bcu: goto label_4223bc;
        case 0x4223c0u: goto label_4223c0;
        case 0x4223c4u: goto label_4223c4;
        case 0x4223c8u: goto label_4223c8;
        case 0x4223ccu: goto label_4223cc;
        case 0x4223d0u: goto label_4223d0;
        case 0x4223d4u: goto label_4223d4;
        case 0x4223d8u: goto label_4223d8;
        case 0x4223dcu: goto label_4223dc;
        case 0x4223e0u: goto label_4223e0;
        case 0x4223e4u: goto label_4223e4;
        case 0x4223e8u: goto label_4223e8;
        case 0x4223ecu: goto label_4223ec;
        case 0x4223f0u: goto label_4223f0;
        case 0x4223f4u: goto label_4223f4;
        case 0x4223f8u: goto label_4223f8;
        case 0x4223fcu: goto label_4223fc;
        case 0x422400u: goto label_422400;
        case 0x422404u: goto label_422404;
        case 0x422408u: goto label_422408;
        case 0x42240cu: goto label_42240c;
        case 0x422410u: goto label_422410;
        case 0x422414u: goto label_422414;
        case 0x422418u: goto label_422418;
        case 0x42241cu: goto label_42241c;
        case 0x422420u: goto label_422420;
        case 0x422424u: goto label_422424;
        case 0x422428u: goto label_422428;
        case 0x42242cu: goto label_42242c;
        case 0x422430u: goto label_422430;
        case 0x422434u: goto label_422434;
        case 0x422438u: goto label_422438;
        case 0x42243cu: goto label_42243c;
        case 0x422440u: goto label_422440;
        case 0x422444u: goto label_422444;
        case 0x422448u: goto label_422448;
        case 0x42244cu: goto label_42244c;
        case 0x422450u: goto label_422450;
        case 0x422454u: goto label_422454;
        case 0x422458u: goto label_422458;
        case 0x42245cu: goto label_42245c;
        case 0x422460u: goto label_422460;
        case 0x422464u: goto label_422464;
        case 0x422468u: goto label_422468;
        case 0x42246cu: goto label_42246c;
        case 0x422470u: goto label_422470;
        case 0x422474u: goto label_422474;
        case 0x422478u: goto label_422478;
        case 0x42247cu: goto label_42247c;
        case 0x422480u: goto label_422480;
        case 0x422484u: goto label_422484;
        case 0x422488u: goto label_422488;
        case 0x42248cu: goto label_42248c;
        case 0x422490u: goto label_422490;
        case 0x422494u: goto label_422494;
        case 0x422498u: goto label_422498;
        case 0x42249cu: goto label_42249c;
        case 0x4224a0u: goto label_4224a0;
        case 0x4224a4u: goto label_4224a4;
        case 0x4224a8u: goto label_4224a8;
        case 0x4224acu: goto label_4224ac;
        case 0x4224b0u: goto label_4224b0;
        case 0x4224b4u: goto label_4224b4;
        case 0x4224b8u: goto label_4224b8;
        case 0x4224bcu: goto label_4224bc;
        case 0x4224c0u: goto label_4224c0;
        case 0x4224c4u: goto label_4224c4;
        case 0x4224c8u: goto label_4224c8;
        case 0x4224ccu: goto label_4224cc;
        case 0x4224d0u: goto label_4224d0;
        case 0x4224d4u: goto label_4224d4;
        case 0x4224d8u: goto label_4224d8;
        case 0x4224dcu: goto label_4224dc;
        case 0x4224e0u: goto label_4224e0;
        case 0x4224e4u: goto label_4224e4;
        case 0x4224e8u: goto label_4224e8;
        case 0x4224ecu: goto label_4224ec;
        case 0x4224f0u: goto label_4224f0;
        case 0x4224f4u: goto label_4224f4;
        case 0x4224f8u: goto label_4224f8;
        case 0x4224fcu: goto label_4224fc;
        case 0x422500u: goto label_422500;
        case 0x422504u: goto label_422504;
        case 0x422508u: goto label_422508;
        case 0x42250cu: goto label_42250c;
        case 0x422510u: goto label_422510;
        case 0x422514u: goto label_422514;
        case 0x422518u: goto label_422518;
        case 0x42251cu: goto label_42251c;
        case 0x422520u: goto label_422520;
        case 0x422524u: goto label_422524;
        case 0x422528u: goto label_422528;
        case 0x42252cu: goto label_42252c;
        case 0x422530u: goto label_422530;
        case 0x422534u: goto label_422534;
        case 0x422538u: goto label_422538;
        case 0x42253cu: goto label_42253c;
        case 0x422540u: goto label_422540;
        case 0x422544u: goto label_422544;
        case 0x422548u: goto label_422548;
        case 0x42254cu: goto label_42254c;
        case 0x422550u: goto label_422550;
        case 0x422554u: goto label_422554;
        case 0x422558u: goto label_422558;
        case 0x42255cu: goto label_42255c;
        case 0x422560u: goto label_422560;
        case 0x422564u: goto label_422564;
        case 0x422568u: goto label_422568;
        case 0x42256cu: goto label_42256c;
        case 0x422570u: goto label_422570;
        case 0x422574u: goto label_422574;
        case 0x422578u: goto label_422578;
        case 0x42257cu: goto label_42257c;
        case 0x422580u: goto label_422580;
        case 0x422584u: goto label_422584;
        case 0x422588u: goto label_422588;
        case 0x42258cu: goto label_42258c;
        case 0x422590u: goto label_422590;
        case 0x422594u: goto label_422594;
        case 0x422598u: goto label_422598;
        case 0x42259cu: goto label_42259c;
        case 0x4225a0u: goto label_4225a0;
        case 0x4225a4u: goto label_4225a4;
        case 0x4225a8u: goto label_4225a8;
        case 0x4225acu: goto label_4225ac;
        case 0x4225b0u: goto label_4225b0;
        case 0x4225b4u: goto label_4225b4;
        case 0x4225b8u: goto label_4225b8;
        case 0x4225bcu: goto label_4225bc;
        case 0x4225c0u: goto label_4225c0;
        case 0x4225c4u: goto label_4225c4;
        case 0x4225c8u: goto label_4225c8;
        case 0x4225ccu: goto label_4225cc;
        case 0x4225d0u: goto label_4225d0;
        case 0x4225d4u: goto label_4225d4;
        case 0x4225d8u: goto label_4225d8;
        case 0x4225dcu: goto label_4225dc;
        case 0x4225e0u: goto label_4225e0;
        case 0x4225e4u: goto label_4225e4;
        case 0x4225e8u: goto label_4225e8;
        case 0x4225ecu: goto label_4225ec;
        case 0x4225f0u: goto label_4225f0;
        case 0x4225f4u: goto label_4225f4;
        case 0x4225f8u: goto label_4225f8;
        case 0x4225fcu: goto label_4225fc;
        case 0x422600u: goto label_422600;
        case 0x422604u: goto label_422604;
        case 0x422608u: goto label_422608;
        case 0x42260cu: goto label_42260c;
        case 0x422610u: goto label_422610;
        case 0x422614u: goto label_422614;
        case 0x422618u: goto label_422618;
        case 0x42261cu: goto label_42261c;
        case 0x422620u: goto label_422620;
        case 0x422624u: goto label_422624;
        case 0x422628u: goto label_422628;
        case 0x42262cu: goto label_42262c;
        case 0x422630u: goto label_422630;
        case 0x422634u: goto label_422634;
        case 0x422638u: goto label_422638;
        case 0x42263cu: goto label_42263c;
        case 0x422640u: goto label_422640;
        case 0x422644u: goto label_422644;
        case 0x422648u: goto label_422648;
        case 0x42264cu: goto label_42264c;
        case 0x422650u: goto label_422650;
        case 0x422654u: goto label_422654;
        case 0x422658u: goto label_422658;
        case 0x42265cu: goto label_42265c;
        case 0x422660u: goto label_422660;
        case 0x422664u: goto label_422664;
        case 0x422668u: goto label_422668;
        case 0x42266cu: goto label_42266c;
        case 0x422670u: goto label_422670;
        case 0x422674u: goto label_422674;
        case 0x422678u: goto label_422678;
        case 0x42267cu: goto label_42267c;
        case 0x422680u: goto label_422680;
        case 0x422684u: goto label_422684;
        case 0x422688u: goto label_422688;
        case 0x42268cu: goto label_42268c;
        case 0x422690u: goto label_422690;
        case 0x422694u: goto label_422694;
        case 0x422698u: goto label_422698;
        case 0x42269cu: goto label_42269c;
        case 0x4226a0u: goto label_4226a0;
        case 0x4226a4u: goto label_4226a4;
        case 0x4226a8u: goto label_4226a8;
        case 0x4226acu: goto label_4226ac;
        case 0x4226b0u: goto label_4226b0;
        case 0x4226b4u: goto label_4226b4;
        case 0x4226b8u: goto label_4226b8;
        case 0x4226bcu: goto label_4226bc;
        case 0x4226c0u: goto label_4226c0;
        case 0x4226c4u: goto label_4226c4;
        case 0x4226c8u: goto label_4226c8;
        case 0x4226ccu: goto label_4226cc;
        case 0x4226d0u: goto label_4226d0;
        case 0x4226d4u: goto label_4226d4;
        case 0x4226d8u: goto label_4226d8;
        case 0x4226dcu: goto label_4226dc;
        case 0x4226e0u: goto label_4226e0;
        case 0x4226e4u: goto label_4226e4;
        case 0x4226e8u: goto label_4226e8;
        case 0x4226ecu: goto label_4226ec;
        case 0x4226f0u: goto label_4226f0;
        case 0x4226f4u: goto label_4226f4;
        case 0x4226f8u: goto label_4226f8;
        case 0x4226fcu: goto label_4226fc;
        case 0x422700u: goto label_422700;
        case 0x422704u: goto label_422704;
        case 0x422708u: goto label_422708;
        case 0x42270cu: goto label_42270c;
        case 0x422710u: goto label_422710;
        case 0x422714u: goto label_422714;
        case 0x422718u: goto label_422718;
        case 0x42271cu: goto label_42271c;
        case 0x422720u: goto label_422720;
        case 0x422724u: goto label_422724;
        case 0x422728u: goto label_422728;
        case 0x42272cu: goto label_42272c;
        case 0x422730u: goto label_422730;
        case 0x422734u: goto label_422734;
        case 0x422738u: goto label_422738;
        case 0x42273cu: goto label_42273c;
        case 0x422740u: goto label_422740;
        case 0x422744u: goto label_422744;
        case 0x422748u: goto label_422748;
        case 0x42274cu: goto label_42274c;
        case 0x422750u: goto label_422750;
        case 0x422754u: goto label_422754;
        case 0x422758u: goto label_422758;
        case 0x42275cu: goto label_42275c;
        case 0x422760u: goto label_422760;
        case 0x422764u: goto label_422764;
        case 0x422768u: goto label_422768;
        case 0x42276cu: goto label_42276c;
        case 0x422770u: goto label_422770;
        case 0x422774u: goto label_422774;
        case 0x422778u: goto label_422778;
        case 0x42277cu: goto label_42277c;
        case 0x422780u: goto label_422780;
        case 0x422784u: goto label_422784;
        case 0x422788u: goto label_422788;
        case 0x42278cu: goto label_42278c;
        case 0x422790u: goto label_422790;
        case 0x422794u: goto label_422794;
        case 0x422798u: goto label_422798;
        case 0x42279cu: goto label_42279c;
        case 0x4227a0u: goto label_4227a0;
        case 0x4227a4u: goto label_4227a4;
        case 0x4227a8u: goto label_4227a8;
        case 0x4227acu: goto label_4227ac;
        case 0x4227b0u: goto label_4227b0;
        case 0x4227b4u: goto label_4227b4;
        case 0x4227b8u: goto label_4227b8;
        case 0x4227bcu: goto label_4227bc;
        case 0x4227c0u: goto label_4227c0;
        case 0x4227c4u: goto label_4227c4;
        case 0x4227c8u: goto label_4227c8;
        case 0x4227ccu: goto label_4227cc;
        case 0x4227d0u: goto label_4227d0;
        case 0x4227d4u: goto label_4227d4;
        case 0x4227d8u: goto label_4227d8;
        case 0x4227dcu: goto label_4227dc;
        case 0x4227e0u: goto label_4227e0;
        case 0x4227e4u: goto label_4227e4;
        case 0x4227e8u: goto label_4227e8;
        case 0x4227ecu: goto label_4227ec;
        case 0x4227f0u: goto label_4227f0;
        case 0x4227f4u: goto label_4227f4;
        case 0x4227f8u: goto label_4227f8;
        case 0x4227fcu: goto label_4227fc;
        case 0x422800u: goto label_422800;
        case 0x422804u: goto label_422804;
        case 0x422808u: goto label_422808;
        case 0x42280cu: goto label_42280c;
        case 0x422810u: goto label_422810;
        case 0x422814u: goto label_422814;
        case 0x422818u: goto label_422818;
        case 0x42281cu: goto label_42281c;
        case 0x422820u: goto label_422820;
        case 0x422824u: goto label_422824;
        case 0x422828u: goto label_422828;
        case 0x42282cu: goto label_42282c;
        case 0x422830u: goto label_422830;
        case 0x422834u: goto label_422834;
        case 0x422838u: goto label_422838;
        case 0x42283cu: goto label_42283c;
        case 0x422840u: goto label_422840;
        case 0x422844u: goto label_422844;
        case 0x422848u: goto label_422848;
        case 0x42284cu: goto label_42284c;
        case 0x422850u: goto label_422850;
        case 0x422854u: goto label_422854;
        case 0x422858u: goto label_422858;
        case 0x42285cu: goto label_42285c;
        case 0x422860u: goto label_422860;
        case 0x422864u: goto label_422864;
        case 0x422868u: goto label_422868;
        case 0x42286cu: goto label_42286c;
        case 0x422870u: goto label_422870;
        case 0x422874u: goto label_422874;
        case 0x422878u: goto label_422878;
        case 0x42287cu: goto label_42287c;
        case 0x422880u: goto label_422880;
        case 0x422884u: goto label_422884;
        case 0x422888u: goto label_422888;
        case 0x42288cu: goto label_42288c;
        case 0x422890u: goto label_422890;
        case 0x422894u: goto label_422894;
        case 0x422898u: goto label_422898;
        case 0x42289cu: goto label_42289c;
        case 0x4228a0u: goto label_4228a0;
        case 0x4228a4u: goto label_4228a4;
        case 0x4228a8u: goto label_4228a8;
        case 0x4228acu: goto label_4228ac;
        case 0x4228b0u: goto label_4228b0;
        case 0x4228b4u: goto label_4228b4;
        case 0x4228b8u: goto label_4228b8;
        case 0x4228bcu: goto label_4228bc;
        case 0x4228c0u: goto label_4228c0;
        case 0x4228c4u: goto label_4228c4;
        case 0x4228c8u: goto label_4228c8;
        case 0x4228ccu: goto label_4228cc;
        case 0x4228d0u: goto label_4228d0;
        case 0x4228d4u: goto label_4228d4;
        case 0x4228d8u: goto label_4228d8;
        case 0x4228dcu: goto label_4228dc;
        case 0x4228e0u: goto label_4228e0;
        case 0x4228e4u: goto label_4228e4;
        case 0x4228e8u: goto label_4228e8;
        case 0x4228ecu: goto label_4228ec;
        case 0x4228f0u: goto label_4228f0;
        case 0x4228f4u: goto label_4228f4;
        case 0x4228f8u: goto label_4228f8;
        case 0x4228fcu: goto label_4228fc;
        case 0x422900u: goto label_422900;
        case 0x422904u: goto label_422904;
        case 0x422908u: goto label_422908;
        case 0x42290cu: goto label_42290c;
        case 0x422910u: goto label_422910;
        case 0x422914u: goto label_422914;
        case 0x422918u: goto label_422918;
        case 0x42291cu: goto label_42291c;
        case 0x422920u: goto label_422920;
        case 0x422924u: goto label_422924;
        case 0x422928u: goto label_422928;
        case 0x42292cu: goto label_42292c;
        case 0x422930u: goto label_422930;
        case 0x422934u: goto label_422934;
        case 0x422938u: goto label_422938;
        case 0x42293cu: goto label_42293c;
        case 0x422940u: goto label_422940;
        case 0x422944u: goto label_422944;
        case 0x422948u: goto label_422948;
        case 0x42294cu: goto label_42294c;
        case 0x422950u: goto label_422950;
        case 0x422954u: goto label_422954;
        case 0x422958u: goto label_422958;
        case 0x42295cu: goto label_42295c;
        case 0x422960u: goto label_422960;
        case 0x422964u: goto label_422964;
        case 0x422968u: goto label_422968;
        case 0x42296cu: goto label_42296c;
        case 0x422970u: goto label_422970;
        case 0x422974u: goto label_422974;
        case 0x422978u: goto label_422978;
        case 0x42297cu: goto label_42297c;
        case 0x422980u: goto label_422980;
        case 0x422984u: goto label_422984;
        case 0x422988u: goto label_422988;
        case 0x42298cu: goto label_42298c;
        case 0x422990u: goto label_422990;
        case 0x422994u: goto label_422994;
        case 0x422998u: goto label_422998;
        case 0x42299cu: goto label_42299c;
        case 0x4229a0u: goto label_4229a0;
        case 0x4229a4u: goto label_4229a4;
        case 0x4229a8u: goto label_4229a8;
        case 0x4229acu: goto label_4229ac;
        case 0x4229b0u: goto label_4229b0;
        case 0x4229b4u: goto label_4229b4;
        case 0x4229b8u: goto label_4229b8;
        case 0x4229bcu: goto label_4229bc;
        case 0x4229c0u: goto label_4229c0;
        case 0x4229c4u: goto label_4229c4;
        case 0x4229c8u: goto label_4229c8;
        case 0x4229ccu: goto label_4229cc;
        case 0x4229d0u: goto label_4229d0;
        case 0x4229d4u: goto label_4229d4;
        case 0x4229d8u: goto label_4229d8;
        case 0x4229dcu: goto label_4229dc;
        case 0x4229e0u: goto label_4229e0;
        case 0x4229e4u: goto label_4229e4;
        case 0x4229e8u: goto label_4229e8;
        case 0x4229ecu: goto label_4229ec;
        case 0x4229f0u: goto label_4229f0;
        case 0x4229f4u: goto label_4229f4;
        case 0x4229f8u: goto label_4229f8;
        case 0x4229fcu: goto label_4229fc;
        case 0x422a00u: goto label_422a00;
        case 0x422a04u: goto label_422a04;
        case 0x422a08u: goto label_422a08;
        case 0x422a0cu: goto label_422a0c;
        case 0x422a10u: goto label_422a10;
        case 0x422a14u: goto label_422a14;
        case 0x422a18u: goto label_422a18;
        case 0x422a1cu: goto label_422a1c;
        case 0x422a20u: goto label_422a20;
        case 0x422a24u: goto label_422a24;
        case 0x422a28u: goto label_422a28;
        case 0x422a2cu: goto label_422a2c;
        case 0x422a30u: goto label_422a30;
        case 0x422a34u: goto label_422a34;
        case 0x422a38u: goto label_422a38;
        case 0x422a3cu: goto label_422a3c;
        case 0x422a40u: goto label_422a40;
        case 0x422a44u: goto label_422a44;
        case 0x422a48u: goto label_422a48;
        case 0x422a4cu: goto label_422a4c;
        case 0x422a50u: goto label_422a50;
        case 0x422a54u: goto label_422a54;
        case 0x422a58u: goto label_422a58;
        case 0x422a5cu: goto label_422a5c;
        case 0x422a60u: goto label_422a60;
        case 0x422a64u: goto label_422a64;
        case 0x422a68u: goto label_422a68;
        case 0x422a6cu: goto label_422a6c;
        case 0x422a70u: goto label_422a70;
        case 0x422a74u: goto label_422a74;
        case 0x422a78u: goto label_422a78;
        case 0x422a7cu: goto label_422a7c;
        case 0x422a80u: goto label_422a80;
        case 0x422a84u: goto label_422a84;
        case 0x422a88u: goto label_422a88;
        case 0x422a8cu: goto label_422a8c;
        case 0x422a90u: goto label_422a90;
        case 0x422a94u: goto label_422a94;
        case 0x422a98u: goto label_422a98;
        case 0x422a9cu: goto label_422a9c;
        case 0x422aa0u: goto label_422aa0;
        case 0x422aa4u: goto label_422aa4;
        case 0x422aa8u: goto label_422aa8;
        case 0x422aacu: goto label_422aac;
        case 0x422ab0u: goto label_422ab0;
        case 0x422ab4u: goto label_422ab4;
        case 0x422ab8u: goto label_422ab8;
        case 0x422abcu: goto label_422abc;
        case 0x422ac0u: goto label_422ac0;
        case 0x422ac4u: goto label_422ac4;
        case 0x422ac8u: goto label_422ac8;
        case 0x422accu: goto label_422acc;
        case 0x422ad0u: goto label_422ad0;
        case 0x422ad4u: goto label_422ad4;
        case 0x422ad8u: goto label_422ad8;
        case 0x422adcu: goto label_422adc;
        case 0x422ae0u: goto label_422ae0;
        case 0x422ae4u: goto label_422ae4;
        case 0x422ae8u: goto label_422ae8;
        case 0x422aecu: goto label_422aec;
        case 0x422af0u: goto label_422af0;
        case 0x422af4u: goto label_422af4;
        case 0x422af8u: goto label_422af8;
        case 0x422afcu: goto label_422afc;
        case 0x422b00u: goto label_422b00;
        case 0x422b04u: goto label_422b04;
        case 0x422b08u: goto label_422b08;
        case 0x422b0cu: goto label_422b0c;
        case 0x422b10u: goto label_422b10;
        case 0x422b14u: goto label_422b14;
        case 0x422b18u: goto label_422b18;
        case 0x422b1cu: goto label_422b1c;
        case 0x422b20u: goto label_422b20;
        case 0x422b24u: goto label_422b24;
        case 0x422b28u: goto label_422b28;
        case 0x422b2cu: goto label_422b2c;
        case 0x422b30u: goto label_422b30;
        case 0x422b34u: goto label_422b34;
        case 0x422b38u: goto label_422b38;
        case 0x422b3cu: goto label_422b3c;
        case 0x422b40u: goto label_422b40;
        case 0x422b44u: goto label_422b44;
        case 0x422b48u: goto label_422b48;
        case 0x422b4cu: goto label_422b4c;
        case 0x422b50u: goto label_422b50;
        case 0x422b54u: goto label_422b54;
        case 0x422b58u: goto label_422b58;
        case 0x422b5cu: goto label_422b5c;
        case 0x422b60u: goto label_422b60;
        case 0x422b64u: goto label_422b64;
        case 0x422b68u: goto label_422b68;
        case 0x422b6cu: goto label_422b6c;
        case 0x422b70u: goto label_422b70;
        case 0x422b74u: goto label_422b74;
        case 0x422b78u: goto label_422b78;
        case 0x422b7cu: goto label_422b7c;
        case 0x422b80u: goto label_422b80;
        case 0x422b84u: goto label_422b84;
        case 0x422b88u: goto label_422b88;
        case 0x422b8cu: goto label_422b8c;
        case 0x422b90u: goto label_422b90;
        case 0x422b94u: goto label_422b94;
        case 0x422b98u: goto label_422b98;
        case 0x422b9cu: goto label_422b9c;
        case 0x422ba0u: goto label_422ba0;
        case 0x422ba4u: goto label_422ba4;
        case 0x422ba8u: goto label_422ba8;
        case 0x422bacu: goto label_422bac;
        case 0x422bb0u: goto label_422bb0;
        case 0x422bb4u: goto label_422bb4;
        case 0x422bb8u: goto label_422bb8;
        case 0x422bbcu: goto label_422bbc;
        case 0x422bc0u: goto label_422bc0;
        case 0x422bc4u: goto label_422bc4;
        case 0x422bc8u: goto label_422bc8;
        case 0x422bccu: goto label_422bcc;
        case 0x422bd0u: goto label_422bd0;
        case 0x422bd4u: goto label_422bd4;
        case 0x422bd8u: goto label_422bd8;
        case 0x422bdcu: goto label_422bdc;
        case 0x422be0u: goto label_422be0;
        case 0x422be4u: goto label_422be4;
        case 0x422be8u: goto label_422be8;
        case 0x422becu: goto label_422bec;
        case 0x422bf0u: goto label_422bf0;
        case 0x422bf4u: goto label_422bf4;
        case 0x422bf8u: goto label_422bf8;
        case 0x422bfcu: goto label_422bfc;
        case 0x422c00u: goto label_422c00;
        case 0x422c04u: goto label_422c04;
        case 0x422c08u: goto label_422c08;
        case 0x422c0cu: goto label_422c0c;
        case 0x422c10u: goto label_422c10;
        case 0x422c14u: goto label_422c14;
        case 0x422c18u: goto label_422c18;
        case 0x422c1cu: goto label_422c1c;
        case 0x422c20u: goto label_422c20;
        case 0x422c24u: goto label_422c24;
        case 0x422c28u: goto label_422c28;
        case 0x422c2cu: goto label_422c2c;
        case 0x422c30u: goto label_422c30;
        case 0x422c34u: goto label_422c34;
        case 0x422c38u: goto label_422c38;
        case 0x422c3cu: goto label_422c3c;
        case 0x422c40u: goto label_422c40;
        case 0x422c44u: goto label_422c44;
        case 0x422c48u: goto label_422c48;
        case 0x422c4cu: goto label_422c4c;
        case 0x422c50u: goto label_422c50;
        case 0x422c54u: goto label_422c54;
        case 0x422c58u: goto label_422c58;
        case 0x422c5cu: goto label_422c5c;
        case 0x422c60u: goto label_422c60;
        case 0x422c64u: goto label_422c64;
        case 0x422c68u: goto label_422c68;
        case 0x422c6cu: goto label_422c6c;
        case 0x422c70u: goto label_422c70;
        case 0x422c74u: goto label_422c74;
        case 0x422c78u: goto label_422c78;
        case 0x422c7cu: goto label_422c7c;
        case 0x422c80u: goto label_422c80;
        case 0x422c84u: goto label_422c84;
        case 0x422c88u: goto label_422c88;
        case 0x422c8cu: goto label_422c8c;
        case 0x422c90u: goto label_422c90;
        case 0x422c94u: goto label_422c94;
        case 0x422c98u: goto label_422c98;
        case 0x422c9cu: goto label_422c9c;
        case 0x422ca0u: goto label_422ca0;
        case 0x422ca4u: goto label_422ca4;
        case 0x422ca8u: goto label_422ca8;
        case 0x422cacu: goto label_422cac;
        case 0x422cb0u: goto label_422cb0;
        case 0x422cb4u: goto label_422cb4;
        case 0x422cb8u: goto label_422cb8;
        case 0x422cbcu: goto label_422cbc;
        case 0x422cc0u: goto label_422cc0;
        case 0x422cc4u: goto label_422cc4;
        case 0x422cc8u: goto label_422cc8;
        case 0x422cccu: goto label_422ccc;
        case 0x422cd0u: goto label_422cd0;
        case 0x422cd4u: goto label_422cd4;
        case 0x422cd8u: goto label_422cd8;
        case 0x422cdcu: goto label_422cdc;
        case 0x422ce0u: goto label_422ce0;
        case 0x422ce4u: goto label_422ce4;
        case 0x422ce8u: goto label_422ce8;
        case 0x422cecu: goto label_422cec;
        case 0x422cf0u: goto label_422cf0;
        case 0x422cf4u: goto label_422cf4;
        case 0x422cf8u: goto label_422cf8;
        case 0x422cfcu: goto label_422cfc;
        case 0x422d00u: goto label_422d00;
        case 0x422d04u: goto label_422d04;
        case 0x422d08u: goto label_422d08;
        case 0x422d0cu: goto label_422d0c;
        case 0x422d10u: goto label_422d10;
        case 0x422d14u: goto label_422d14;
        case 0x422d18u: goto label_422d18;
        case 0x422d1cu: goto label_422d1c;
        case 0x422d20u: goto label_422d20;
        case 0x422d24u: goto label_422d24;
        case 0x422d28u: goto label_422d28;
        case 0x422d2cu: goto label_422d2c;
        case 0x422d30u: goto label_422d30;
        case 0x422d34u: goto label_422d34;
        case 0x422d38u: goto label_422d38;
        case 0x422d3cu: goto label_422d3c;
        case 0x422d40u: goto label_422d40;
        case 0x422d44u: goto label_422d44;
        case 0x422d48u: goto label_422d48;
        case 0x422d4cu: goto label_422d4c;
        case 0x422d50u: goto label_422d50;
        case 0x422d54u: goto label_422d54;
        case 0x422d58u: goto label_422d58;
        case 0x422d5cu: goto label_422d5c;
        case 0x422d60u: goto label_422d60;
        case 0x422d64u: goto label_422d64;
        case 0x422d68u: goto label_422d68;
        case 0x422d6cu: goto label_422d6c;
        case 0x422d70u: goto label_422d70;
        case 0x422d74u: goto label_422d74;
        case 0x422d78u: goto label_422d78;
        case 0x422d7cu: goto label_422d7c;
        case 0x422d80u: goto label_422d80;
        case 0x422d84u: goto label_422d84;
        case 0x422d88u: goto label_422d88;
        case 0x422d8cu: goto label_422d8c;
        case 0x422d90u: goto label_422d90;
        case 0x422d94u: goto label_422d94;
        case 0x422d98u: goto label_422d98;
        case 0x422d9cu: goto label_422d9c;
        case 0x422da0u: goto label_422da0;
        case 0x422da4u: goto label_422da4;
        case 0x422da8u: goto label_422da8;
        case 0x422dacu: goto label_422dac;
        case 0x422db0u: goto label_422db0;
        case 0x422db4u: goto label_422db4;
        case 0x422db8u: goto label_422db8;
        case 0x422dbcu: goto label_422dbc;
        case 0x422dc0u: goto label_422dc0;
        case 0x422dc4u: goto label_422dc4;
        case 0x422dc8u: goto label_422dc8;
        case 0x422dccu: goto label_422dcc;
        case 0x422dd0u: goto label_422dd0;
        case 0x422dd4u: goto label_422dd4;
        case 0x422dd8u: goto label_422dd8;
        case 0x422ddcu: goto label_422ddc;
        case 0x422de0u: goto label_422de0;
        case 0x422de4u: goto label_422de4;
        case 0x422de8u: goto label_422de8;
        case 0x422decu: goto label_422dec;
        case 0x422df0u: goto label_422df0;
        case 0x422df4u: goto label_422df4;
        case 0x422df8u: goto label_422df8;
        case 0x422dfcu: goto label_422dfc;
        case 0x422e00u: goto label_422e00;
        case 0x422e04u: goto label_422e04;
        case 0x422e08u: goto label_422e08;
        case 0x422e0cu: goto label_422e0c;
        case 0x422e10u: goto label_422e10;
        case 0x422e14u: goto label_422e14;
        case 0x422e18u: goto label_422e18;
        case 0x422e1cu: goto label_422e1c;
        case 0x422e20u: goto label_422e20;
        case 0x422e24u: goto label_422e24;
        case 0x422e28u: goto label_422e28;
        case 0x422e2cu: goto label_422e2c;
        case 0x422e30u: goto label_422e30;
        case 0x422e34u: goto label_422e34;
        case 0x422e38u: goto label_422e38;
        case 0x422e3cu: goto label_422e3c;
        case 0x422e40u: goto label_422e40;
        case 0x422e44u: goto label_422e44;
        case 0x422e48u: goto label_422e48;
        case 0x422e4cu: goto label_422e4c;
        case 0x422e50u: goto label_422e50;
        case 0x422e54u: goto label_422e54;
        case 0x422e58u: goto label_422e58;
        case 0x422e5cu: goto label_422e5c;
        case 0x422e60u: goto label_422e60;
        case 0x422e64u: goto label_422e64;
        case 0x422e68u: goto label_422e68;
        case 0x422e6cu: goto label_422e6c;
        case 0x422e70u: goto label_422e70;
        case 0x422e74u: goto label_422e74;
        case 0x422e78u: goto label_422e78;
        case 0x422e7cu: goto label_422e7c;
        case 0x422e80u: goto label_422e80;
        case 0x422e84u: goto label_422e84;
        case 0x422e88u: goto label_422e88;
        case 0x422e8cu: goto label_422e8c;
        case 0x422e90u: goto label_422e90;
        case 0x422e94u: goto label_422e94;
        case 0x422e98u: goto label_422e98;
        case 0x422e9cu: goto label_422e9c;
        case 0x422ea0u: goto label_422ea0;
        case 0x422ea4u: goto label_422ea4;
        case 0x422ea8u: goto label_422ea8;
        case 0x422eacu: goto label_422eac;
        case 0x422eb0u: goto label_422eb0;
        case 0x422eb4u: goto label_422eb4;
        case 0x422eb8u: goto label_422eb8;
        case 0x422ebcu: goto label_422ebc;
        case 0x422ec0u: goto label_422ec0;
        case 0x422ec4u: goto label_422ec4;
        case 0x422ec8u: goto label_422ec8;
        case 0x422eccu: goto label_422ecc;
        case 0x422ed0u: goto label_422ed0;
        case 0x422ed4u: goto label_422ed4;
        case 0x422ed8u: goto label_422ed8;
        case 0x422edcu: goto label_422edc;
        case 0x422ee0u: goto label_422ee0;
        case 0x422ee4u: goto label_422ee4;
        case 0x422ee8u: goto label_422ee8;
        case 0x422eecu: goto label_422eec;
        case 0x422ef0u: goto label_422ef0;
        case 0x422ef4u: goto label_422ef4;
        case 0x422ef8u: goto label_422ef8;
        case 0x422efcu: goto label_422efc;
        case 0x422f00u: goto label_422f00;
        case 0x422f04u: goto label_422f04;
        case 0x422f08u: goto label_422f08;
        case 0x422f0cu: goto label_422f0c;
        case 0x422f10u: goto label_422f10;
        case 0x422f14u: goto label_422f14;
        case 0x422f18u: goto label_422f18;
        case 0x422f1cu: goto label_422f1c;
        case 0x422f20u: goto label_422f20;
        case 0x422f24u: goto label_422f24;
        case 0x422f28u: goto label_422f28;
        case 0x422f2cu: goto label_422f2c;
        case 0x422f30u: goto label_422f30;
        case 0x422f34u: goto label_422f34;
        case 0x422f38u: goto label_422f38;
        case 0x422f3cu: goto label_422f3c;
        case 0x422f40u: goto label_422f40;
        case 0x422f44u: goto label_422f44;
        case 0x422f48u: goto label_422f48;
        case 0x422f4cu: goto label_422f4c;
        case 0x422f50u: goto label_422f50;
        case 0x422f54u: goto label_422f54;
        case 0x422f58u: goto label_422f58;
        case 0x422f5cu: goto label_422f5c;
        case 0x422f60u: goto label_422f60;
        case 0x422f64u: goto label_422f64;
        case 0x422f68u: goto label_422f68;
        case 0x422f6cu: goto label_422f6c;
        case 0x422f70u: goto label_422f70;
        case 0x422f74u: goto label_422f74;
        case 0x422f78u: goto label_422f78;
        case 0x422f7cu: goto label_422f7c;
        case 0x422f80u: goto label_422f80;
        case 0x422f84u: goto label_422f84;
        case 0x422f88u: goto label_422f88;
        case 0x422f8cu: goto label_422f8c;
        case 0x422f90u: goto label_422f90;
        case 0x422f94u: goto label_422f94;
        case 0x422f98u: goto label_422f98;
        case 0x422f9cu: goto label_422f9c;
        case 0x422fa0u: goto label_422fa0;
        case 0x422fa4u: goto label_422fa4;
        case 0x422fa8u: goto label_422fa8;
        case 0x422facu: goto label_422fac;
        case 0x422fb0u: goto label_422fb0;
        case 0x422fb4u: goto label_422fb4;
        case 0x422fb8u: goto label_422fb8;
        case 0x422fbcu: goto label_422fbc;
        case 0x422fc0u: goto label_422fc0;
        case 0x422fc4u: goto label_422fc4;
        case 0x422fc8u: goto label_422fc8;
        case 0x422fccu: goto label_422fcc;
        case 0x422fd0u: goto label_422fd0;
        case 0x422fd4u: goto label_422fd4;
        case 0x422fd8u: goto label_422fd8;
        case 0x422fdcu: goto label_422fdc;
        case 0x422fe0u: goto label_422fe0;
        case 0x422fe4u: goto label_422fe4;
        case 0x422fe8u: goto label_422fe8;
        case 0x422fecu: goto label_422fec;
        case 0x422ff0u: goto label_422ff0;
        case 0x422ff4u: goto label_422ff4;
        case 0x422ff8u: goto label_422ff8;
        case 0x422ffcu: goto label_422ffc;
        case 0x423000u: goto label_423000;
        case 0x423004u: goto label_423004;
        case 0x423008u: goto label_423008;
        case 0x42300cu: goto label_42300c;
        case 0x423010u: goto label_423010;
        case 0x423014u: goto label_423014;
        case 0x423018u: goto label_423018;
        case 0x42301cu: goto label_42301c;
        case 0x423020u: goto label_423020;
        case 0x423024u: goto label_423024;
        case 0x423028u: goto label_423028;
        case 0x42302cu: goto label_42302c;
        case 0x423030u: goto label_423030;
        case 0x423034u: goto label_423034;
        case 0x423038u: goto label_423038;
        case 0x42303cu: goto label_42303c;
        case 0x423040u: goto label_423040;
        case 0x423044u: goto label_423044;
        case 0x423048u: goto label_423048;
        case 0x42304cu: goto label_42304c;
        case 0x423050u: goto label_423050;
        case 0x423054u: goto label_423054;
        case 0x423058u: goto label_423058;
        case 0x42305cu: goto label_42305c;
        case 0x423060u: goto label_423060;
        case 0x423064u: goto label_423064;
        case 0x423068u: goto label_423068;
        case 0x42306cu: goto label_42306c;
        case 0x423070u: goto label_423070;
        case 0x423074u: goto label_423074;
        case 0x423078u: goto label_423078;
        case 0x42307cu: goto label_42307c;
        case 0x423080u: goto label_423080;
        case 0x423084u: goto label_423084;
        case 0x423088u: goto label_423088;
        case 0x42308cu: goto label_42308c;
        case 0x423090u: goto label_423090;
        case 0x423094u: goto label_423094;
        case 0x423098u: goto label_423098;
        case 0x42309cu: goto label_42309c;
        case 0x4230a0u: goto label_4230a0;
        case 0x4230a4u: goto label_4230a4;
        case 0x4230a8u: goto label_4230a8;
        case 0x4230acu: goto label_4230ac;
        case 0x4230b0u: goto label_4230b0;
        case 0x4230b4u: goto label_4230b4;
        case 0x4230b8u: goto label_4230b8;
        case 0x4230bcu: goto label_4230bc;
        case 0x4230c0u: goto label_4230c0;
        case 0x4230c4u: goto label_4230c4;
        case 0x4230c8u: goto label_4230c8;
        case 0x4230ccu: goto label_4230cc;
        case 0x4230d0u: goto label_4230d0;
        case 0x4230d4u: goto label_4230d4;
        case 0x4230d8u: goto label_4230d8;
        case 0x4230dcu: goto label_4230dc;
        case 0x4230e0u: goto label_4230e0;
        case 0x4230e4u: goto label_4230e4;
        case 0x4230e8u: goto label_4230e8;
        case 0x4230ecu: goto label_4230ec;
        case 0x4230f0u: goto label_4230f0;
        case 0x4230f4u: goto label_4230f4;
        case 0x4230f8u: goto label_4230f8;
        case 0x4230fcu: goto label_4230fc;
        case 0x423100u: goto label_423100;
        case 0x423104u: goto label_423104;
        case 0x423108u: goto label_423108;
        case 0x42310cu: goto label_42310c;
        case 0x423110u: goto label_423110;
        case 0x423114u: goto label_423114;
        case 0x423118u: goto label_423118;
        case 0x42311cu: goto label_42311c;
        case 0x423120u: goto label_423120;
        case 0x423124u: goto label_423124;
        case 0x423128u: goto label_423128;
        case 0x42312cu: goto label_42312c;
        case 0x423130u: goto label_423130;
        case 0x423134u: goto label_423134;
        case 0x423138u: goto label_423138;
        case 0x42313cu: goto label_42313c;
        case 0x423140u: goto label_423140;
        case 0x423144u: goto label_423144;
        case 0x423148u: goto label_423148;
        case 0x42314cu: goto label_42314c;
        case 0x423150u: goto label_423150;
        case 0x423154u: goto label_423154;
        case 0x423158u: goto label_423158;
        case 0x42315cu: goto label_42315c;
        case 0x423160u: goto label_423160;
        case 0x423164u: goto label_423164;
        case 0x423168u: goto label_423168;
        case 0x42316cu: goto label_42316c;
        case 0x423170u: goto label_423170;
        case 0x423174u: goto label_423174;
        case 0x423178u: goto label_423178;
        case 0x42317cu: goto label_42317c;
        case 0x423180u: goto label_423180;
        case 0x423184u: goto label_423184;
        case 0x423188u: goto label_423188;
        case 0x42318cu: goto label_42318c;
        case 0x423190u: goto label_423190;
        case 0x423194u: goto label_423194;
        case 0x423198u: goto label_423198;
        case 0x42319cu: goto label_42319c;
        case 0x4231a0u: goto label_4231a0;
        case 0x4231a4u: goto label_4231a4;
        case 0x4231a8u: goto label_4231a8;
        case 0x4231acu: goto label_4231ac;
        case 0x4231b0u: goto label_4231b0;
        case 0x4231b4u: goto label_4231b4;
        case 0x4231b8u: goto label_4231b8;
        case 0x4231bcu: goto label_4231bc;
        case 0x4231c0u: goto label_4231c0;
        case 0x4231c4u: goto label_4231c4;
        case 0x4231c8u: goto label_4231c8;
        case 0x4231ccu: goto label_4231cc;
        case 0x4231d0u: goto label_4231d0;
        case 0x4231d4u: goto label_4231d4;
        case 0x4231d8u: goto label_4231d8;
        case 0x4231dcu: goto label_4231dc;
        case 0x4231e0u: goto label_4231e0;
        case 0x4231e4u: goto label_4231e4;
        case 0x4231e8u: goto label_4231e8;
        case 0x4231ecu: goto label_4231ec;
        case 0x4231f0u: goto label_4231f0;
        case 0x4231f4u: goto label_4231f4;
        case 0x4231f8u: goto label_4231f8;
        case 0x4231fcu: goto label_4231fc;
        case 0x423200u: goto label_423200;
        case 0x423204u: goto label_423204;
        case 0x423208u: goto label_423208;
        case 0x42320cu: goto label_42320c;
        case 0x423210u: goto label_423210;
        case 0x423214u: goto label_423214;
        case 0x423218u: goto label_423218;
        case 0x42321cu: goto label_42321c;
        case 0x423220u: goto label_423220;
        case 0x423224u: goto label_423224;
        case 0x423228u: goto label_423228;
        case 0x42322cu: goto label_42322c;
        case 0x423230u: goto label_423230;
        case 0x423234u: goto label_423234;
        case 0x423238u: goto label_423238;
        case 0x42323cu: goto label_42323c;
        case 0x423240u: goto label_423240;
        case 0x423244u: goto label_423244;
        case 0x423248u: goto label_423248;
        case 0x42324cu: goto label_42324c;
        case 0x423250u: goto label_423250;
        case 0x423254u: goto label_423254;
        case 0x423258u: goto label_423258;
        case 0x42325cu: goto label_42325c;
        case 0x423260u: goto label_423260;
        case 0x423264u: goto label_423264;
        case 0x423268u: goto label_423268;
        case 0x42326cu: goto label_42326c;
        case 0x423270u: goto label_423270;
        case 0x423274u: goto label_423274;
        case 0x423278u: goto label_423278;
        case 0x42327cu: goto label_42327c;
        case 0x423280u: goto label_423280;
        case 0x423284u: goto label_423284;
        case 0x423288u: goto label_423288;
        case 0x42328cu: goto label_42328c;
        case 0x423290u: goto label_423290;
        case 0x423294u: goto label_423294;
        case 0x423298u: goto label_423298;
        case 0x42329cu: goto label_42329c;
        case 0x4232a0u: goto label_4232a0;
        case 0x4232a4u: goto label_4232a4;
        case 0x4232a8u: goto label_4232a8;
        case 0x4232acu: goto label_4232ac;
        case 0x4232b0u: goto label_4232b0;
        case 0x4232b4u: goto label_4232b4;
        case 0x4232b8u: goto label_4232b8;
        case 0x4232bcu: goto label_4232bc;
        case 0x4232c0u: goto label_4232c0;
        case 0x4232c4u: goto label_4232c4;
        case 0x4232c8u: goto label_4232c8;
        case 0x4232ccu: goto label_4232cc;
        case 0x4232d0u: goto label_4232d0;
        case 0x4232d4u: goto label_4232d4;
        case 0x4232d8u: goto label_4232d8;
        case 0x4232dcu: goto label_4232dc;
        case 0x4232e0u: goto label_4232e0;
        case 0x4232e4u: goto label_4232e4;
        case 0x4232e8u: goto label_4232e8;
        case 0x4232ecu: goto label_4232ec;
        case 0x4232f0u: goto label_4232f0;
        case 0x4232f4u: goto label_4232f4;
        case 0x4232f8u: goto label_4232f8;
        case 0x4232fcu: goto label_4232fc;
        case 0x423300u: goto label_423300;
        case 0x423304u: goto label_423304;
        case 0x423308u: goto label_423308;
        case 0x42330cu: goto label_42330c;
        case 0x423310u: goto label_423310;
        case 0x423314u: goto label_423314;
        case 0x423318u: goto label_423318;
        case 0x42331cu: goto label_42331c;
        case 0x423320u: goto label_423320;
        case 0x423324u: goto label_423324;
        case 0x423328u: goto label_423328;
        case 0x42332cu: goto label_42332c;
        case 0x423330u: goto label_423330;
        case 0x423334u: goto label_423334;
        case 0x423338u: goto label_423338;
        case 0x42333cu: goto label_42333c;
        case 0x423340u: goto label_423340;
        case 0x423344u: goto label_423344;
        case 0x423348u: goto label_423348;
        case 0x42334cu: goto label_42334c;
        case 0x423350u: goto label_423350;
        case 0x423354u: goto label_423354;
        case 0x423358u: goto label_423358;
        case 0x42335cu: goto label_42335c;
        case 0x423360u: goto label_423360;
        case 0x423364u: goto label_423364;
        case 0x423368u: goto label_423368;
        case 0x42336cu: goto label_42336c;
        case 0x423370u: goto label_423370;
        case 0x423374u: goto label_423374;
        case 0x423378u: goto label_423378;
        case 0x42337cu: goto label_42337c;
        case 0x423380u: goto label_423380;
        case 0x423384u: goto label_423384;
        case 0x423388u: goto label_423388;
        case 0x42338cu: goto label_42338c;
        case 0x423390u: goto label_423390;
        case 0x423394u: goto label_423394;
        case 0x423398u: goto label_423398;
        case 0x42339cu: goto label_42339c;
        case 0x4233a0u: goto label_4233a0;
        case 0x4233a4u: goto label_4233a4;
        case 0x4233a8u: goto label_4233a8;
        case 0x4233acu: goto label_4233ac;
        case 0x4233b0u: goto label_4233b0;
        case 0x4233b4u: goto label_4233b4;
        case 0x4233b8u: goto label_4233b8;
        case 0x4233bcu: goto label_4233bc;
        case 0x4233c0u: goto label_4233c0;
        case 0x4233c4u: goto label_4233c4;
        case 0x4233c8u: goto label_4233c8;
        case 0x4233ccu: goto label_4233cc;
        case 0x4233d0u: goto label_4233d0;
        case 0x4233d4u: goto label_4233d4;
        case 0x4233d8u: goto label_4233d8;
        case 0x4233dcu: goto label_4233dc;
        case 0x4233e0u: goto label_4233e0;
        case 0x4233e4u: goto label_4233e4;
        case 0x4233e8u: goto label_4233e8;
        case 0x4233ecu: goto label_4233ec;
        case 0x4233f0u: goto label_4233f0;
        case 0x4233f4u: goto label_4233f4;
        case 0x4233f8u: goto label_4233f8;
        case 0x4233fcu: goto label_4233fc;
        case 0x423400u: goto label_423400;
        case 0x423404u: goto label_423404;
        case 0x423408u: goto label_423408;
        case 0x42340cu: goto label_42340c;
        case 0x423410u: goto label_423410;
        case 0x423414u: goto label_423414;
        case 0x423418u: goto label_423418;
        case 0x42341cu: goto label_42341c;
        case 0x423420u: goto label_423420;
        case 0x423424u: goto label_423424;
        case 0x423428u: goto label_423428;
        case 0x42342cu: goto label_42342c;
        case 0x423430u: goto label_423430;
        case 0x423434u: goto label_423434;
        case 0x423438u: goto label_423438;
        case 0x42343cu: goto label_42343c;
        case 0x423440u: goto label_423440;
        case 0x423444u: goto label_423444;
        case 0x423448u: goto label_423448;
        case 0x42344cu: goto label_42344c;
        case 0x423450u: goto label_423450;
        case 0x423454u: goto label_423454;
        case 0x423458u: goto label_423458;
        case 0x42345cu: goto label_42345c;
        case 0x423460u: goto label_423460;
        case 0x423464u: goto label_423464;
        case 0x423468u: goto label_423468;
        case 0x42346cu: goto label_42346c;
        case 0x423470u: goto label_423470;
        case 0x423474u: goto label_423474;
        case 0x423478u: goto label_423478;
        case 0x42347cu: goto label_42347c;
        case 0x423480u: goto label_423480;
        case 0x423484u: goto label_423484;
        case 0x423488u: goto label_423488;
        case 0x42348cu: goto label_42348c;
        case 0x423490u: goto label_423490;
        case 0x423494u: goto label_423494;
        case 0x423498u: goto label_423498;
        case 0x42349cu: goto label_42349c;
        case 0x4234a0u: goto label_4234a0;
        case 0x4234a4u: goto label_4234a4;
        case 0x4234a8u: goto label_4234a8;
        case 0x4234acu: goto label_4234ac;
        case 0x4234b0u: goto label_4234b0;
        case 0x4234b4u: goto label_4234b4;
        case 0x4234b8u: goto label_4234b8;
        case 0x4234bcu: goto label_4234bc;
        case 0x4234c0u: goto label_4234c0;
        case 0x4234c4u: goto label_4234c4;
        case 0x4234c8u: goto label_4234c8;
        case 0x4234ccu: goto label_4234cc;
        case 0x4234d0u: goto label_4234d0;
        case 0x4234d4u: goto label_4234d4;
        case 0x4234d8u: goto label_4234d8;
        case 0x4234dcu: goto label_4234dc;
        case 0x4234e0u: goto label_4234e0;
        case 0x4234e4u: goto label_4234e4;
        case 0x4234e8u: goto label_4234e8;
        case 0x4234ecu: goto label_4234ec;
        case 0x4234f0u: goto label_4234f0;
        case 0x4234f4u: goto label_4234f4;
        case 0x4234f8u: goto label_4234f8;
        case 0x4234fcu: goto label_4234fc;
        case 0x423500u: goto label_423500;
        case 0x423504u: goto label_423504;
        case 0x423508u: goto label_423508;
        case 0x42350cu: goto label_42350c;
        case 0x423510u: goto label_423510;
        case 0x423514u: goto label_423514;
        case 0x423518u: goto label_423518;
        case 0x42351cu: goto label_42351c;
        case 0x423520u: goto label_423520;
        case 0x423524u: goto label_423524;
        case 0x423528u: goto label_423528;
        case 0x42352cu: goto label_42352c;
        case 0x423530u: goto label_423530;
        case 0x423534u: goto label_423534;
        case 0x423538u: goto label_423538;
        case 0x42353cu: goto label_42353c;
        case 0x423540u: goto label_423540;
        case 0x423544u: goto label_423544;
        case 0x423548u: goto label_423548;
        case 0x42354cu: goto label_42354c;
        case 0x423550u: goto label_423550;
        case 0x423554u: goto label_423554;
        case 0x423558u: goto label_423558;
        case 0x42355cu: goto label_42355c;
        case 0x423560u: goto label_423560;
        case 0x423564u: goto label_423564;
        case 0x423568u: goto label_423568;
        case 0x42356cu: goto label_42356c;
        case 0x423570u: goto label_423570;
        case 0x423574u: goto label_423574;
        case 0x423578u: goto label_423578;
        case 0x42357cu: goto label_42357c;
        case 0x423580u: goto label_423580;
        case 0x423584u: goto label_423584;
        case 0x423588u: goto label_423588;
        case 0x42358cu: goto label_42358c;
        case 0x423590u: goto label_423590;
        case 0x423594u: goto label_423594;
        case 0x423598u: goto label_423598;
        case 0x42359cu: goto label_42359c;
        case 0x4235a0u: goto label_4235a0;
        case 0x4235a4u: goto label_4235a4;
        case 0x4235a8u: goto label_4235a8;
        case 0x4235acu: goto label_4235ac;
        case 0x4235b0u: goto label_4235b0;
        case 0x4235b4u: goto label_4235b4;
        case 0x4235b8u: goto label_4235b8;
        case 0x4235bcu: goto label_4235bc;
        case 0x4235c0u: goto label_4235c0;
        case 0x4235c4u: goto label_4235c4;
        case 0x4235c8u: goto label_4235c8;
        case 0x4235ccu: goto label_4235cc;
        case 0x4235d0u: goto label_4235d0;
        case 0x4235d4u: goto label_4235d4;
        case 0x4235d8u: goto label_4235d8;
        case 0x4235dcu: goto label_4235dc;
        case 0x4235e0u: goto label_4235e0;
        case 0x4235e4u: goto label_4235e4;
        case 0x4235e8u: goto label_4235e8;
        case 0x4235ecu: goto label_4235ec;
        case 0x4235f0u: goto label_4235f0;
        case 0x4235f4u: goto label_4235f4;
        case 0x4235f8u: goto label_4235f8;
        case 0x4235fcu: goto label_4235fc;
        case 0x423600u: goto label_423600;
        case 0x423604u: goto label_423604;
        case 0x423608u: goto label_423608;
        case 0x42360cu: goto label_42360c;
        case 0x423610u: goto label_423610;
        case 0x423614u: goto label_423614;
        case 0x423618u: goto label_423618;
        case 0x42361cu: goto label_42361c;
        case 0x423620u: goto label_423620;
        case 0x423624u: goto label_423624;
        case 0x423628u: goto label_423628;
        case 0x42362cu: goto label_42362c;
        case 0x423630u: goto label_423630;
        case 0x423634u: goto label_423634;
        case 0x423638u: goto label_423638;
        case 0x42363cu: goto label_42363c;
        case 0x423640u: goto label_423640;
        case 0x423644u: goto label_423644;
        case 0x423648u: goto label_423648;
        case 0x42364cu: goto label_42364c;
        case 0x423650u: goto label_423650;
        case 0x423654u: goto label_423654;
        case 0x423658u: goto label_423658;
        case 0x42365cu: goto label_42365c;
        case 0x423660u: goto label_423660;
        case 0x423664u: goto label_423664;
        case 0x423668u: goto label_423668;
        case 0x42366cu: goto label_42366c;
        case 0x423670u: goto label_423670;
        case 0x423674u: goto label_423674;
        case 0x423678u: goto label_423678;
        case 0x42367cu: goto label_42367c;
        case 0x423680u: goto label_423680;
        case 0x423684u: goto label_423684;
        case 0x423688u: goto label_423688;
        case 0x42368cu: goto label_42368c;
        case 0x423690u: goto label_423690;
        case 0x423694u: goto label_423694;
        case 0x423698u: goto label_423698;
        case 0x42369cu: goto label_42369c;
        case 0x4236a0u: goto label_4236a0;
        case 0x4236a4u: goto label_4236a4;
        case 0x4236a8u: goto label_4236a8;
        case 0x4236acu: goto label_4236ac;
        case 0x4236b0u: goto label_4236b0;
        case 0x4236b4u: goto label_4236b4;
        case 0x4236b8u: goto label_4236b8;
        case 0x4236bcu: goto label_4236bc;
        case 0x4236c0u: goto label_4236c0;
        case 0x4236c4u: goto label_4236c4;
        case 0x4236c8u: goto label_4236c8;
        case 0x4236ccu: goto label_4236cc;
        case 0x4236d0u: goto label_4236d0;
        case 0x4236d4u: goto label_4236d4;
        case 0x4236d8u: goto label_4236d8;
        case 0x4236dcu: goto label_4236dc;
        case 0x4236e0u: goto label_4236e0;
        case 0x4236e4u: goto label_4236e4;
        case 0x4236e8u: goto label_4236e8;
        case 0x4236ecu: goto label_4236ec;
        case 0x4236f0u: goto label_4236f0;
        case 0x4236f4u: goto label_4236f4;
        case 0x4236f8u: goto label_4236f8;
        case 0x4236fcu: goto label_4236fc;
        case 0x423700u: goto label_423700;
        case 0x423704u: goto label_423704;
        case 0x423708u: goto label_423708;
        case 0x42370cu: goto label_42370c;
        case 0x423710u: goto label_423710;
        case 0x423714u: goto label_423714;
        case 0x423718u: goto label_423718;
        case 0x42371cu: goto label_42371c;
        case 0x423720u: goto label_423720;
        case 0x423724u: goto label_423724;
        case 0x423728u: goto label_423728;
        case 0x42372cu: goto label_42372c;
        case 0x423730u: goto label_423730;
        case 0x423734u: goto label_423734;
        case 0x423738u: goto label_423738;
        case 0x42373cu: goto label_42373c;
        case 0x423740u: goto label_423740;
        case 0x423744u: goto label_423744;
        case 0x423748u: goto label_423748;
        case 0x42374cu: goto label_42374c;
        case 0x423750u: goto label_423750;
        case 0x423754u: goto label_423754;
        case 0x423758u: goto label_423758;
        case 0x42375cu: goto label_42375c;
        case 0x423760u: goto label_423760;
        case 0x423764u: goto label_423764;
        case 0x423768u: goto label_423768;
        case 0x42376cu: goto label_42376c;
        case 0x423770u: goto label_423770;
        case 0x423774u: goto label_423774;
        case 0x423778u: goto label_423778;
        case 0x42377cu: goto label_42377c;
        case 0x423780u: goto label_423780;
        case 0x423784u: goto label_423784;
        case 0x423788u: goto label_423788;
        case 0x42378cu: goto label_42378c;
        case 0x423790u: goto label_423790;
        case 0x423794u: goto label_423794;
        case 0x423798u: goto label_423798;
        case 0x42379cu: goto label_42379c;
        case 0x4237a0u: goto label_4237a0;
        case 0x4237a4u: goto label_4237a4;
        case 0x4237a8u: goto label_4237a8;
        case 0x4237acu: goto label_4237ac;
        case 0x4237b0u: goto label_4237b0;
        case 0x4237b4u: goto label_4237b4;
        case 0x4237b8u: goto label_4237b8;
        case 0x4237bcu: goto label_4237bc;
        case 0x4237c0u: goto label_4237c0;
        case 0x4237c4u: goto label_4237c4;
        case 0x4237c8u: goto label_4237c8;
        case 0x4237ccu: goto label_4237cc;
        case 0x4237d0u: goto label_4237d0;
        case 0x4237d4u: goto label_4237d4;
        case 0x4237d8u: goto label_4237d8;
        case 0x4237dcu: goto label_4237dc;
        case 0x4237e0u: goto label_4237e0;
        case 0x4237e4u: goto label_4237e4;
        case 0x4237e8u: goto label_4237e8;
        case 0x4237ecu: goto label_4237ec;
        case 0x4237f0u: goto label_4237f0;
        case 0x4237f4u: goto label_4237f4;
        case 0x4237f8u: goto label_4237f8;
        case 0x4237fcu: goto label_4237fc;
        case 0x423800u: goto label_423800;
        case 0x423804u: goto label_423804;
        case 0x423808u: goto label_423808;
        case 0x42380cu: goto label_42380c;
        case 0x423810u: goto label_423810;
        case 0x423814u: goto label_423814;
        case 0x423818u: goto label_423818;
        case 0x42381cu: goto label_42381c;
        case 0x423820u: goto label_423820;
        case 0x423824u: goto label_423824;
        case 0x423828u: goto label_423828;
        case 0x42382cu: goto label_42382c;
        case 0x423830u: goto label_423830;
        case 0x423834u: goto label_423834;
        case 0x423838u: goto label_423838;
        case 0x42383cu: goto label_42383c;
        case 0x423840u: goto label_423840;
        case 0x423844u: goto label_423844;
        case 0x423848u: goto label_423848;
        case 0x42384cu: goto label_42384c;
        case 0x423850u: goto label_423850;
        case 0x423854u: goto label_423854;
        case 0x423858u: goto label_423858;
        case 0x42385cu: goto label_42385c;
        case 0x423860u: goto label_423860;
        case 0x423864u: goto label_423864;
        case 0x423868u: goto label_423868;
        case 0x42386cu: goto label_42386c;
        case 0x423870u: goto label_423870;
        case 0x423874u: goto label_423874;
        case 0x423878u: goto label_423878;
        case 0x42387cu: goto label_42387c;
        case 0x423880u: goto label_423880;
        case 0x423884u: goto label_423884;
        case 0x423888u: goto label_423888;
        case 0x42388cu: goto label_42388c;
        case 0x423890u: goto label_423890;
        case 0x423894u: goto label_423894;
        case 0x423898u: goto label_423898;
        case 0x42389cu: goto label_42389c;
        case 0x4238a0u: goto label_4238a0;
        case 0x4238a4u: goto label_4238a4;
        case 0x4238a8u: goto label_4238a8;
        case 0x4238acu: goto label_4238ac;
        case 0x4238b0u: goto label_4238b0;
        case 0x4238b4u: goto label_4238b4;
        case 0x4238b8u: goto label_4238b8;
        case 0x4238bcu: goto label_4238bc;
        case 0x4238c0u: goto label_4238c0;
        case 0x4238c4u: goto label_4238c4;
        case 0x4238c8u: goto label_4238c8;
        case 0x4238ccu: goto label_4238cc;
        case 0x4238d0u: goto label_4238d0;
        case 0x4238d4u: goto label_4238d4;
        case 0x4238d8u: goto label_4238d8;
        case 0x4238dcu: goto label_4238dc;
        case 0x4238e0u: goto label_4238e0;
        case 0x4238e4u: goto label_4238e4;
        case 0x4238e8u: goto label_4238e8;
        case 0x4238ecu: goto label_4238ec;
        case 0x4238f0u: goto label_4238f0;
        case 0x4238f4u: goto label_4238f4;
        case 0x4238f8u: goto label_4238f8;
        case 0x4238fcu: goto label_4238fc;
        case 0x423900u: goto label_423900;
        case 0x423904u: goto label_423904;
        case 0x423908u: goto label_423908;
        case 0x42390cu: goto label_42390c;
        case 0x423910u: goto label_423910;
        case 0x423914u: goto label_423914;
        case 0x423918u: goto label_423918;
        case 0x42391cu: goto label_42391c;
        case 0x423920u: goto label_423920;
        case 0x423924u: goto label_423924;
        case 0x423928u: goto label_423928;
        case 0x42392cu: goto label_42392c;
        case 0x423930u: goto label_423930;
        case 0x423934u: goto label_423934;
        case 0x423938u: goto label_423938;
        case 0x42393cu: goto label_42393c;
        case 0x423940u: goto label_423940;
        case 0x423944u: goto label_423944;
        case 0x423948u: goto label_423948;
        case 0x42394cu: goto label_42394c;
        case 0x423950u: goto label_423950;
        case 0x423954u: goto label_423954;
        case 0x423958u: goto label_423958;
        case 0x42395cu: goto label_42395c;
        case 0x423960u: goto label_423960;
        case 0x423964u: goto label_423964;
        case 0x423968u: goto label_423968;
        case 0x42396cu: goto label_42396c;
        case 0x423970u: goto label_423970;
        case 0x423974u: goto label_423974;
        case 0x423978u: goto label_423978;
        case 0x42397cu: goto label_42397c;
        case 0x423980u: goto label_423980;
        case 0x423984u: goto label_423984;
        case 0x423988u: goto label_423988;
        case 0x42398cu: goto label_42398c;
        case 0x423990u: goto label_423990;
        case 0x423994u: goto label_423994;
        case 0x423998u: goto label_423998;
        case 0x42399cu: goto label_42399c;
        case 0x4239a0u: goto label_4239a0;
        case 0x4239a4u: goto label_4239a4;
        case 0x4239a8u: goto label_4239a8;
        case 0x4239acu: goto label_4239ac;
        case 0x4239b0u: goto label_4239b0;
        case 0x4239b4u: goto label_4239b4;
        case 0x4239b8u: goto label_4239b8;
        case 0x4239bcu: goto label_4239bc;
        case 0x4239c0u: goto label_4239c0;
        case 0x4239c4u: goto label_4239c4;
        case 0x4239c8u: goto label_4239c8;
        case 0x4239ccu: goto label_4239cc;
        case 0x4239d0u: goto label_4239d0;
        case 0x4239d4u: goto label_4239d4;
        case 0x4239d8u: goto label_4239d8;
        case 0x4239dcu: goto label_4239dc;
        case 0x4239e0u: goto label_4239e0;
        case 0x4239e4u: goto label_4239e4;
        case 0x4239e8u: goto label_4239e8;
        case 0x4239ecu: goto label_4239ec;
        case 0x4239f0u: goto label_4239f0;
        case 0x4239f4u: goto label_4239f4;
        case 0x4239f8u: goto label_4239f8;
        case 0x4239fcu: goto label_4239fc;
        case 0x423a00u: goto label_423a00;
        case 0x423a04u: goto label_423a04;
        case 0x423a08u: goto label_423a08;
        case 0x423a0cu: goto label_423a0c;
        case 0x423a10u: goto label_423a10;
        case 0x423a14u: goto label_423a14;
        case 0x423a18u: goto label_423a18;
        case 0x423a1cu: goto label_423a1c;
        case 0x423a20u: goto label_423a20;
        case 0x423a24u: goto label_423a24;
        case 0x423a28u: goto label_423a28;
        case 0x423a2cu: goto label_423a2c;
        case 0x423a30u: goto label_423a30;
        case 0x423a34u: goto label_423a34;
        case 0x423a38u: goto label_423a38;
        case 0x423a3cu: goto label_423a3c;
        case 0x423a40u: goto label_423a40;
        case 0x423a44u: goto label_423a44;
        case 0x423a48u: goto label_423a48;
        case 0x423a4cu: goto label_423a4c;
        case 0x423a50u: goto label_423a50;
        case 0x423a54u: goto label_423a54;
        case 0x423a58u: goto label_423a58;
        case 0x423a5cu: goto label_423a5c;
        case 0x423a60u: goto label_423a60;
        case 0x423a64u: goto label_423a64;
        case 0x423a68u: goto label_423a68;
        case 0x423a6cu: goto label_423a6c;
        case 0x423a70u: goto label_423a70;
        case 0x423a74u: goto label_423a74;
        case 0x423a78u: goto label_423a78;
        case 0x423a7cu: goto label_423a7c;
        case 0x423a80u: goto label_423a80;
        case 0x423a84u: goto label_423a84;
        case 0x423a88u: goto label_423a88;
        case 0x423a8cu: goto label_423a8c;
        case 0x423a90u: goto label_423a90;
        case 0x423a94u: goto label_423a94;
        case 0x423a98u: goto label_423a98;
        case 0x423a9cu: goto label_423a9c;
        case 0x423aa0u: goto label_423aa0;
        case 0x423aa4u: goto label_423aa4;
        case 0x423aa8u: goto label_423aa8;
        case 0x423aacu: goto label_423aac;
        case 0x423ab0u: goto label_423ab0;
        case 0x423ab4u: goto label_423ab4;
        case 0x423ab8u: goto label_423ab8;
        case 0x423abcu: goto label_423abc;
        case 0x423ac0u: goto label_423ac0;
        case 0x423ac4u: goto label_423ac4;
        case 0x423ac8u: goto label_423ac8;
        case 0x423accu: goto label_423acc;
        case 0x423ad0u: goto label_423ad0;
        case 0x423ad4u: goto label_423ad4;
        case 0x423ad8u: goto label_423ad8;
        case 0x423adcu: goto label_423adc;
        case 0x423ae0u: goto label_423ae0;
        case 0x423ae4u: goto label_423ae4;
        case 0x423ae8u: goto label_423ae8;
        case 0x423aecu: goto label_423aec;
        case 0x423af0u: goto label_423af0;
        case 0x423af4u: goto label_423af4;
        case 0x423af8u: goto label_423af8;
        case 0x423afcu: goto label_423afc;
        case 0x423b00u: goto label_423b00;
        case 0x423b04u: goto label_423b04;
        case 0x423b08u: goto label_423b08;
        case 0x423b0cu: goto label_423b0c;
        case 0x423b10u: goto label_423b10;
        case 0x423b14u: goto label_423b14;
        case 0x423b18u: goto label_423b18;
        case 0x423b1cu: goto label_423b1c;
        case 0x423b20u: goto label_423b20;
        case 0x423b24u: goto label_423b24;
        case 0x423b28u: goto label_423b28;
        case 0x423b2cu: goto label_423b2c;
        case 0x423b30u: goto label_423b30;
        case 0x423b34u: goto label_423b34;
        case 0x423b38u: goto label_423b38;
        case 0x423b3cu: goto label_423b3c;
        case 0x423b40u: goto label_423b40;
        case 0x423b44u: goto label_423b44;
        case 0x423b48u: goto label_423b48;
        case 0x423b4cu: goto label_423b4c;
        case 0x423b50u: goto label_423b50;
        case 0x423b54u: goto label_423b54;
        case 0x423b58u: goto label_423b58;
        case 0x423b5cu: goto label_423b5c;
        case 0x423b60u: goto label_423b60;
        case 0x423b64u: goto label_423b64;
        case 0x423b68u: goto label_423b68;
        case 0x423b6cu: goto label_423b6c;
        case 0x423b70u: goto label_423b70;
        case 0x423b74u: goto label_423b74;
        case 0x423b78u: goto label_423b78;
        case 0x423b7cu: goto label_423b7c;
        case 0x423b80u: goto label_423b80;
        case 0x423b84u: goto label_423b84;
        case 0x423b88u: goto label_423b88;
        case 0x423b8cu: goto label_423b8c;
        case 0x423b90u: goto label_423b90;
        case 0x423b94u: goto label_423b94;
        case 0x423b98u: goto label_423b98;
        case 0x423b9cu: goto label_423b9c;
        case 0x423ba0u: goto label_423ba0;
        case 0x423ba4u: goto label_423ba4;
        case 0x423ba8u: goto label_423ba8;
        case 0x423bacu: goto label_423bac;
        case 0x423bb0u: goto label_423bb0;
        case 0x423bb4u: goto label_423bb4;
        case 0x423bb8u: goto label_423bb8;
        case 0x423bbcu: goto label_423bbc;
        case 0x423bc0u: goto label_423bc0;
        case 0x423bc4u: goto label_423bc4;
        case 0x423bc8u: goto label_423bc8;
        case 0x423bccu: goto label_423bcc;
        case 0x423bd0u: goto label_423bd0;
        case 0x423bd4u: goto label_423bd4;
        case 0x423bd8u: goto label_423bd8;
        case 0x423bdcu: goto label_423bdc;
        case 0x423be0u: goto label_423be0;
        case 0x423be4u: goto label_423be4;
        case 0x423be8u: goto label_423be8;
        case 0x423becu: goto label_423bec;
        case 0x423bf0u: goto label_423bf0;
        case 0x423bf4u: goto label_423bf4;
        case 0x423bf8u: goto label_423bf8;
        case 0x423bfcu: goto label_423bfc;
        case 0x423c00u: goto label_423c00;
        case 0x423c04u: goto label_423c04;
        case 0x423c08u: goto label_423c08;
        case 0x423c0cu: goto label_423c0c;
        case 0x423c10u: goto label_423c10;
        case 0x423c14u: goto label_423c14;
        case 0x423c18u: goto label_423c18;
        case 0x423c1cu: goto label_423c1c;
        case 0x423c20u: goto label_423c20;
        case 0x423c24u: goto label_423c24;
        case 0x423c28u: goto label_423c28;
        case 0x423c2cu: goto label_423c2c;
        case 0x423c30u: goto label_423c30;
        case 0x423c34u: goto label_423c34;
        case 0x423c38u: goto label_423c38;
        case 0x423c3cu: goto label_423c3c;
        case 0x423c40u: goto label_423c40;
        case 0x423c44u: goto label_423c44;
        case 0x423c48u: goto label_423c48;
        case 0x423c4cu: goto label_423c4c;
        case 0x423c50u: goto label_423c50;
        case 0x423c54u: goto label_423c54;
        case 0x423c58u: goto label_423c58;
        case 0x423c5cu: goto label_423c5c;
        case 0x423c60u: goto label_423c60;
        case 0x423c64u: goto label_423c64;
        case 0x423c68u: goto label_423c68;
        case 0x423c6cu: goto label_423c6c;
        case 0x423c70u: goto label_423c70;
        case 0x423c74u: goto label_423c74;
        case 0x423c78u: goto label_423c78;
        case 0x423c7cu: goto label_423c7c;
        case 0x423c80u: goto label_423c80;
        case 0x423c84u: goto label_423c84;
        case 0x423c88u: goto label_423c88;
        case 0x423c8cu: goto label_423c8c;
        case 0x423c90u: goto label_423c90;
        case 0x423c94u: goto label_423c94;
        case 0x423c98u: goto label_423c98;
        case 0x423c9cu: goto label_423c9c;
        case 0x423ca0u: goto label_423ca0;
        case 0x423ca4u: goto label_423ca4;
        case 0x423ca8u: goto label_423ca8;
        case 0x423cacu: goto label_423cac;
        case 0x423cb0u: goto label_423cb0;
        case 0x423cb4u: goto label_423cb4;
        case 0x423cb8u: goto label_423cb8;
        case 0x423cbcu: goto label_423cbc;
        case 0x423cc0u: goto label_423cc0;
        case 0x423cc4u: goto label_423cc4;
        case 0x423cc8u: goto label_423cc8;
        case 0x423cccu: goto label_423ccc;
        case 0x423cd0u: goto label_423cd0;
        case 0x423cd4u: goto label_423cd4;
        case 0x423cd8u: goto label_423cd8;
        case 0x423cdcu: goto label_423cdc;
        case 0x423ce0u: goto label_423ce0;
        case 0x423ce4u: goto label_423ce4;
        case 0x423ce8u: goto label_423ce8;
        case 0x423cecu: goto label_423cec;
        case 0x423cf0u: goto label_423cf0;
        case 0x423cf4u: goto label_423cf4;
        case 0x423cf8u: goto label_423cf8;
        case 0x423cfcu: goto label_423cfc;
        case 0x423d00u: goto label_423d00;
        case 0x423d04u: goto label_423d04;
        case 0x423d08u: goto label_423d08;
        case 0x423d0cu: goto label_423d0c;
        case 0x423d10u: goto label_423d10;
        case 0x423d14u: goto label_423d14;
        case 0x423d18u: goto label_423d18;
        case 0x423d1cu: goto label_423d1c;
        case 0x423d20u: goto label_423d20;
        case 0x423d24u: goto label_423d24;
        case 0x423d28u: goto label_423d28;
        case 0x423d2cu: goto label_423d2c;
        case 0x423d30u: goto label_423d30;
        case 0x423d34u: goto label_423d34;
        case 0x423d38u: goto label_423d38;
        case 0x423d3cu: goto label_423d3c;
        case 0x423d40u: goto label_423d40;
        case 0x423d44u: goto label_423d44;
        case 0x423d48u: goto label_423d48;
        case 0x423d4cu: goto label_423d4c;
        case 0x423d50u: goto label_423d50;
        case 0x423d54u: goto label_423d54;
        case 0x423d58u: goto label_423d58;
        case 0x423d5cu: goto label_423d5c;
        case 0x423d60u: goto label_423d60;
        case 0x423d64u: goto label_423d64;
        case 0x423d68u: goto label_423d68;
        case 0x423d6cu: goto label_423d6c;
        case 0x423d70u: goto label_423d70;
        case 0x423d74u: goto label_423d74;
        case 0x423d78u: goto label_423d78;
        case 0x423d7cu: goto label_423d7c;
        case 0x423d80u: goto label_423d80;
        case 0x423d84u: goto label_423d84;
        case 0x423d88u: goto label_423d88;
        case 0x423d8cu: goto label_423d8c;
        case 0x423d90u: goto label_423d90;
        case 0x423d94u: goto label_423d94;
        case 0x423d98u: goto label_423d98;
        case 0x423d9cu: goto label_423d9c;
        case 0x423da0u: goto label_423da0;
        case 0x423da4u: goto label_423da4;
        case 0x423da8u: goto label_423da8;
        case 0x423dacu: goto label_423dac;
        case 0x423db0u: goto label_423db0;
        case 0x423db4u: goto label_423db4;
        case 0x423db8u: goto label_423db8;
        case 0x423dbcu: goto label_423dbc;
        case 0x423dc0u: goto label_423dc0;
        case 0x423dc4u: goto label_423dc4;
        case 0x423dc8u: goto label_423dc8;
        case 0x423dccu: goto label_423dcc;
        case 0x423dd0u: goto label_423dd0;
        case 0x423dd4u: goto label_423dd4;
        case 0x423dd8u: goto label_423dd8;
        case 0x423ddcu: goto label_423ddc;
        case 0x423de0u: goto label_423de0;
        case 0x423de4u: goto label_423de4;
        case 0x423de8u: goto label_423de8;
        case 0x423decu: goto label_423dec;
        case 0x423df0u: goto label_423df0;
        case 0x423df4u: goto label_423df4;
        case 0x423df8u: goto label_423df8;
        case 0x423dfcu: goto label_423dfc;
        case 0x423e00u: goto label_423e00;
        case 0x423e04u: goto label_423e04;
        case 0x423e08u: goto label_423e08;
        case 0x423e0cu: goto label_423e0c;
        case 0x423e10u: goto label_423e10;
        case 0x423e14u: goto label_423e14;
        case 0x423e18u: goto label_423e18;
        case 0x423e1cu: goto label_423e1c;
        case 0x423e20u: goto label_423e20;
        case 0x423e24u: goto label_423e24;
        case 0x423e28u: goto label_423e28;
        case 0x423e2cu: goto label_423e2c;
        case 0x423e30u: goto label_423e30;
        case 0x423e34u: goto label_423e34;
        case 0x423e38u: goto label_423e38;
        case 0x423e3cu: goto label_423e3c;
        case 0x423e40u: goto label_423e40;
        case 0x423e44u: goto label_423e44;
        case 0x423e48u: goto label_423e48;
        case 0x423e4cu: goto label_423e4c;
        case 0x423e50u: goto label_423e50;
        case 0x423e54u: goto label_423e54;
        case 0x423e58u: goto label_423e58;
        case 0x423e5cu: goto label_423e5c;
        case 0x423e60u: goto label_423e60;
        case 0x423e64u: goto label_423e64;
        case 0x423e68u: goto label_423e68;
        case 0x423e6cu: goto label_423e6c;
        case 0x423e70u: goto label_423e70;
        case 0x423e74u: goto label_423e74;
        case 0x423e78u: goto label_423e78;
        case 0x423e7cu: goto label_423e7c;
        case 0x423e80u: goto label_423e80;
        case 0x423e84u: goto label_423e84;
        case 0x423e88u: goto label_423e88;
        case 0x423e8cu: goto label_423e8c;
        case 0x423e90u: goto label_423e90;
        case 0x423e94u: goto label_423e94;
        case 0x423e98u: goto label_423e98;
        case 0x423e9cu: goto label_423e9c;
        case 0x423ea0u: goto label_423ea0;
        case 0x423ea4u: goto label_423ea4;
        case 0x423ea8u: goto label_423ea8;
        case 0x423eacu: goto label_423eac;
        case 0x423eb0u: goto label_423eb0;
        case 0x423eb4u: goto label_423eb4;
        case 0x423eb8u: goto label_423eb8;
        case 0x423ebcu: goto label_423ebc;
        case 0x423ec0u: goto label_423ec0;
        case 0x423ec4u: goto label_423ec4;
        case 0x423ec8u: goto label_423ec8;
        case 0x423eccu: goto label_423ecc;
        case 0x423ed0u: goto label_423ed0;
        case 0x423ed4u: goto label_423ed4;
        case 0x423ed8u: goto label_423ed8;
        case 0x423edcu: goto label_423edc;
        case 0x423ee0u: goto label_423ee0;
        case 0x423ee4u: goto label_423ee4;
        case 0x423ee8u: goto label_423ee8;
        case 0x423eecu: goto label_423eec;
        case 0x423ef0u: goto label_423ef0;
        case 0x423ef4u: goto label_423ef4;
        case 0x423ef8u: goto label_423ef8;
        case 0x423efcu: goto label_423efc;
        case 0x423f00u: goto label_423f00;
        case 0x423f04u: goto label_423f04;
        case 0x423f08u: goto label_423f08;
        case 0x423f0cu: goto label_423f0c;
        case 0x423f10u: goto label_423f10;
        case 0x423f14u: goto label_423f14;
        case 0x423f18u: goto label_423f18;
        case 0x423f1cu: goto label_423f1c;
        case 0x423f20u: goto label_423f20;
        case 0x423f24u: goto label_423f24;
        case 0x423f28u: goto label_423f28;
        case 0x423f2cu: goto label_423f2c;
        case 0x423f30u: goto label_423f30;
        case 0x423f34u: goto label_423f34;
        case 0x423f38u: goto label_423f38;
        case 0x423f3cu: goto label_423f3c;
        case 0x423f40u: goto label_423f40;
        case 0x423f44u: goto label_423f44;
        case 0x423f48u: goto label_423f48;
        case 0x423f4cu: goto label_423f4c;
        case 0x423f50u: goto label_423f50;
        case 0x423f54u: goto label_423f54;
        case 0x423f58u: goto label_423f58;
        case 0x423f5cu: goto label_423f5c;
        case 0x423f60u: goto label_423f60;
        case 0x423f64u: goto label_423f64;
        case 0x423f68u: goto label_423f68;
        case 0x423f6cu: goto label_423f6c;
        case 0x423f70u: goto label_423f70;
        case 0x423f74u: goto label_423f74;
        case 0x423f78u: goto label_423f78;
        case 0x423f7cu: goto label_423f7c;
        case 0x423f80u: goto label_423f80;
        case 0x423f84u: goto label_423f84;
        case 0x423f88u: goto label_423f88;
        case 0x423f8cu: goto label_423f8c;
        case 0x423f90u: goto label_423f90;
        case 0x423f94u: goto label_423f94;
        case 0x423f98u: goto label_423f98;
        case 0x423f9cu: goto label_423f9c;
        case 0x423fa0u: goto label_423fa0;
        case 0x423fa4u: goto label_423fa4;
        case 0x423fa8u: goto label_423fa8;
        case 0x423facu: goto label_423fac;
        case 0x423fb0u: goto label_423fb0;
        case 0x423fb4u: goto label_423fb4;
        case 0x423fb8u: goto label_423fb8;
        case 0x423fbcu: goto label_423fbc;
        case 0x423fc0u: goto label_423fc0;
        case 0x423fc4u: goto label_423fc4;
        case 0x423fc8u: goto label_423fc8;
        case 0x423fccu: goto label_423fcc;
        case 0x423fd0u: goto label_423fd0;
        case 0x423fd4u: goto label_423fd4;
        case 0x423fd8u: goto label_423fd8;
        case 0x423fdcu: goto label_423fdc;
        case 0x423fe0u: goto label_423fe0;
        case 0x423fe4u: goto label_423fe4;
        case 0x423fe8u: goto label_423fe8;
        case 0x423fecu: goto label_423fec;
        case 0x423ff0u: goto label_423ff0;
        case 0x423ff4u: goto label_423ff4;
        case 0x423ff8u: goto label_423ff8;
        case 0x423ffcu: goto label_423ffc;
        case 0x424000u: goto label_424000;
        case 0x424004u: goto label_424004;
        case 0x424008u: goto label_424008;
        case 0x42400cu: goto label_42400c;
        case 0x424010u: goto label_424010;
        case 0x424014u: goto label_424014;
        case 0x424018u: goto label_424018;
        case 0x42401cu: goto label_42401c;
        case 0x424020u: goto label_424020;
        case 0x424024u: goto label_424024;
        case 0x424028u: goto label_424028;
        case 0x42402cu: goto label_42402c;
        case 0x424030u: goto label_424030;
        case 0x424034u: goto label_424034;
        case 0x424038u: goto label_424038;
        case 0x42403cu: goto label_42403c;
        case 0x424040u: goto label_424040;
        case 0x424044u: goto label_424044;
        case 0x424048u: goto label_424048;
        case 0x42404cu: goto label_42404c;
        case 0x424050u: goto label_424050;
        case 0x424054u: goto label_424054;
        case 0x424058u: goto label_424058;
        case 0x42405cu: goto label_42405c;
        case 0x424060u: goto label_424060;
        case 0x424064u: goto label_424064;
        case 0x424068u: goto label_424068;
        case 0x42406cu: goto label_42406c;
        case 0x424070u: goto label_424070;
        case 0x424074u: goto label_424074;
        case 0x424078u: goto label_424078;
        case 0x42407cu: goto label_42407c;
        case 0x424080u: goto label_424080;
        case 0x424084u: goto label_424084;
        case 0x424088u: goto label_424088;
        case 0x42408cu: goto label_42408c;
        case 0x424090u: goto label_424090;
        case 0x424094u: goto label_424094;
        case 0x424098u: goto label_424098;
        case 0x42409cu: goto label_42409c;
        case 0x4240a0u: goto label_4240a0;
        case 0x4240a4u: goto label_4240a4;
        case 0x4240a8u: goto label_4240a8;
        case 0x4240acu: goto label_4240ac;
        case 0x4240b0u: goto label_4240b0;
        case 0x4240b4u: goto label_4240b4;
        case 0x4240b8u: goto label_4240b8;
        case 0x4240bcu: goto label_4240bc;
        case 0x4240c0u: goto label_4240c0;
        case 0x4240c4u: goto label_4240c4;
        case 0x4240c8u: goto label_4240c8;
        case 0x4240ccu: goto label_4240cc;
        case 0x4240d0u: goto label_4240d0;
        case 0x4240d4u: goto label_4240d4;
        case 0x4240d8u: goto label_4240d8;
        case 0x4240dcu: goto label_4240dc;
        case 0x4240e0u: goto label_4240e0;
        case 0x4240e4u: goto label_4240e4;
        case 0x4240e8u: goto label_4240e8;
        case 0x4240ecu: goto label_4240ec;
        case 0x4240f0u: goto label_4240f0;
        case 0x4240f4u: goto label_4240f4;
        case 0x4240f8u: goto label_4240f8;
        case 0x4240fcu: goto label_4240fc;
        case 0x424100u: goto label_424100;
        case 0x424104u: goto label_424104;
        case 0x424108u: goto label_424108;
        case 0x42410cu: goto label_42410c;
        case 0x424110u: goto label_424110;
        case 0x424114u: goto label_424114;
        case 0x424118u: goto label_424118;
        case 0x42411cu: goto label_42411c;
        case 0x424120u: goto label_424120;
        case 0x424124u: goto label_424124;
        case 0x424128u: goto label_424128;
        case 0x42412cu: goto label_42412c;
        case 0x424130u: goto label_424130;
        case 0x424134u: goto label_424134;
        case 0x424138u: goto label_424138;
        case 0x42413cu: goto label_42413c;
        case 0x424140u: goto label_424140;
        case 0x424144u: goto label_424144;
        case 0x424148u: goto label_424148;
        case 0x42414cu: goto label_42414c;
        case 0x424150u: goto label_424150;
        case 0x424154u: goto label_424154;
        case 0x424158u: goto label_424158;
        case 0x42415cu: goto label_42415c;
        case 0x424160u: goto label_424160;
        case 0x424164u: goto label_424164;
        case 0x424168u: goto label_424168;
        case 0x42416cu: goto label_42416c;
        case 0x424170u: goto label_424170;
        case 0x424174u: goto label_424174;
        case 0x424178u: goto label_424178;
        case 0x42417cu: goto label_42417c;
        case 0x424180u: goto label_424180;
        case 0x424184u: goto label_424184;
        case 0x424188u: goto label_424188;
        case 0x42418cu: goto label_42418c;
        case 0x424190u: goto label_424190;
        case 0x424194u: goto label_424194;
        case 0x424198u: goto label_424198;
        case 0x42419cu: goto label_42419c;
        case 0x4241a0u: goto label_4241a0;
        case 0x4241a4u: goto label_4241a4;
        case 0x4241a8u: goto label_4241a8;
        case 0x4241acu: goto label_4241ac;
        case 0x4241b0u: goto label_4241b0;
        case 0x4241b4u: goto label_4241b4;
        case 0x4241b8u: goto label_4241b8;
        case 0x4241bcu: goto label_4241bc;
        case 0x4241c0u: goto label_4241c0;
        case 0x4241c4u: goto label_4241c4;
        case 0x4241c8u: goto label_4241c8;
        case 0x4241ccu: goto label_4241cc;
        case 0x4241d0u: goto label_4241d0;
        case 0x4241d4u: goto label_4241d4;
        case 0x4241d8u: goto label_4241d8;
        case 0x4241dcu: goto label_4241dc;
        case 0x4241e0u: goto label_4241e0;
        case 0x4241e4u: goto label_4241e4;
        case 0x4241e8u: goto label_4241e8;
        case 0x4241ecu: goto label_4241ec;
        case 0x4241f0u: goto label_4241f0;
        case 0x4241f4u: goto label_4241f4;
        case 0x4241f8u: goto label_4241f8;
        case 0x4241fcu: goto label_4241fc;
        case 0x424200u: goto label_424200;
        case 0x424204u: goto label_424204;
        case 0x424208u: goto label_424208;
        case 0x42420cu: goto label_42420c;
        case 0x424210u: goto label_424210;
        case 0x424214u: goto label_424214;
        case 0x424218u: goto label_424218;
        case 0x42421cu: goto label_42421c;
        case 0x424220u: goto label_424220;
        case 0x424224u: goto label_424224;
        case 0x424228u: goto label_424228;
        case 0x42422cu: goto label_42422c;
        case 0x424230u: goto label_424230;
        case 0x424234u: goto label_424234;
        case 0x424238u: goto label_424238;
        case 0x42423cu: goto label_42423c;
        case 0x424240u: goto label_424240;
        case 0x424244u: goto label_424244;
        case 0x424248u: goto label_424248;
        case 0x42424cu: goto label_42424c;
        case 0x424250u: goto label_424250;
        case 0x424254u: goto label_424254;
        case 0x424258u: goto label_424258;
        case 0x42425cu: goto label_42425c;
        case 0x424260u: goto label_424260;
        case 0x424264u: goto label_424264;
        case 0x424268u: goto label_424268;
        case 0x42426cu: goto label_42426c;
        case 0x424270u: goto label_424270;
        case 0x424274u: goto label_424274;
        case 0x424278u: goto label_424278;
        case 0x42427cu: goto label_42427c;
        case 0x424280u: goto label_424280;
        case 0x424284u: goto label_424284;
        case 0x424288u: goto label_424288;
        case 0x42428cu: goto label_42428c;
        case 0x424290u: goto label_424290;
        case 0x424294u: goto label_424294;
        case 0x424298u: goto label_424298;
        case 0x42429cu: goto label_42429c;
        case 0x4242a0u: goto label_4242a0;
        case 0x4242a4u: goto label_4242a4;
        case 0x4242a8u: goto label_4242a8;
        case 0x4242acu: goto label_4242ac;
        case 0x4242b0u: goto label_4242b0;
        case 0x4242b4u: goto label_4242b4;
        case 0x4242b8u: goto label_4242b8;
        case 0x4242bcu: goto label_4242bc;
        case 0x4242c0u: goto label_4242c0;
        case 0x4242c4u: goto label_4242c4;
        case 0x4242c8u: goto label_4242c8;
        case 0x4242ccu: goto label_4242cc;
        case 0x4242d0u: goto label_4242d0;
        case 0x4242d4u: goto label_4242d4;
        case 0x4242d8u: goto label_4242d8;
        case 0x4242dcu: goto label_4242dc;
        case 0x4242e0u: goto label_4242e0;
        case 0x4242e4u: goto label_4242e4;
        case 0x4242e8u: goto label_4242e8;
        case 0x4242ecu: goto label_4242ec;
        case 0x4242f0u: goto label_4242f0;
        case 0x4242f4u: goto label_4242f4;
        case 0x4242f8u: goto label_4242f8;
        case 0x4242fcu: goto label_4242fc;
        case 0x424300u: goto label_424300;
        case 0x424304u: goto label_424304;
        case 0x424308u: goto label_424308;
        case 0x42430cu: goto label_42430c;
        case 0x424310u: goto label_424310;
        case 0x424314u: goto label_424314;
        case 0x424318u: goto label_424318;
        case 0x42431cu: goto label_42431c;
        case 0x424320u: goto label_424320;
        case 0x424324u: goto label_424324;
        case 0x424328u: goto label_424328;
        case 0x42432cu: goto label_42432c;
        case 0x424330u: goto label_424330;
        case 0x424334u: goto label_424334;
        case 0x424338u: goto label_424338;
        case 0x42433cu: goto label_42433c;
        case 0x424340u: goto label_424340;
        case 0x424344u: goto label_424344;
        case 0x424348u: goto label_424348;
        case 0x42434cu: goto label_42434c;
        case 0x424350u: goto label_424350;
        case 0x424354u: goto label_424354;
        case 0x424358u: goto label_424358;
        case 0x42435cu: goto label_42435c;
        case 0x424360u: goto label_424360;
        case 0x424364u: goto label_424364;
        case 0x424368u: goto label_424368;
        case 0x42436cu: goto label_42436c;
        case 0x424370u: goto label_424370;
        case 0x424374u: goto label_424374;
        case 0x424378u: goto label_424378;
        case 0x42437cu: goto label_42437c;
        case 0x424380u: goto label_424380;
        case 0x424384u: goto label_424384;
        case 0x424388u: goto label_424388;
        case 0x42438cu: goto label_42438c;
        case 0x424390u: goto label_424390;
        case 0x424394u: goto label_424394;
        case 0x424398u: goto label_424398;
        case 0x42439cu: goto label_42439c;
        case 0x4243a0u: goto label_4243a0;
        case 0x4243a4u: goto label_4243a4;
        case 0x4243a8u: goto label_4243a8;
        case 0x4243acu: goto label_4243ac;
        case 0x4243b0u: goto label_4243b0;
        case 0x4243b4u: goto label_4243b4;
        case 0x4243b8u: goto label_4243b8;
        case 0x4243bcu: goto label_4243bc;
        case 0x4243c0u: goto label_4243c0;
        case 0x4243c4u: goto label_4243c4;
        case 0x4243c8u: goto label_4243c8;
        case 0x4243ccu: goto label_4243cc;
        case 0x4243d0u: goto label_4243d0;
        case 0x4243d4u: goto label_4243d4;
        case 0x4243d8u: goto label_4243d8;
        case 0x4243dcu: goto label_4243dc;
        case 0x4243e0u: goto label_4243e0;
        case 0x4243e4u: goto label_4243e4;
        case 0x4243e8u: goto label_4243e8;
        case 0x4243ecu: goto label_4243ec;
        case 0x4243f0u: goto label_4243f0;
        case 0x4243f4u: goto label_4243f4;
        case 0x4243f8u: goto label_4243f8;
        case 0x4243fcu: goto label_4243fc;
        case 0x424400u: goto label_424400;
        case 0x424404u: goto label_424404;
        case 0x424408u: goto label_424408;
        case 0x42440cu: goto label_42440c;
        case 0x424410u: goto label_424410;
        case 0x424414u: goto label_424414;
        case 0x424418u: goto label_424418;
        case 0x42441cu: goto label_42441c;
        case 0x424420u: goto label_424420;
        case 0x424424u: goto label_424424;
        case 0x424428u: goto label_424428;
        case 0x42442cu: goto label_42442c;
        case 0x424430u: goto label_424430;
        case 0x424434u: goto label_424434;
        case 0x424438u: goto label_424438;
        case 0x42443cu: goto label_42443c;
        case 0x424440u: goto label_424440;
        case 0x424444u: goto label_424444;
        case 0x424448u: goto label_424448;
        case 0x42444cu: goto label_42444c;
        case 0x424450u: goto label_424450;
        case 0x424454u: goto label_424454;
        case 0x424458u: goto label_424458;
        case 0x42445cu: goto label_42445c;
        case 0x424460u: goto label_424460;
        case 0x424464u: goto label_424464;
        case 0x424468u: goto label_424468;
        case 0x42446cu: goto label_42446c;
        case 0x424470u: goto label_424470;
        case 0x424474u: goto label_424474;
        case 0x424478u: goto label_424478;
        case 0x42447cu: goto label_42447c;
        case 0x424480u: goto label_424480;
        case 0x424484u: goto label_424484;
        case 0x424488u: goto label_424488;
        case 0x42448cu: goto label_42448c;
        case 0x424490u: goto label_424490;
        case 0x424494u: goto label_424494;
        case 0x424498u: goto label_424498;
        case 0x42449cu: goto label_42449c;
        case 0x4244a0u: goto label_4244a0;
        case 0x4244a4u: goto label_4244a4;
        case 0x4244a8u: goto label_4244a8;
        case 0x4244acu: goto label_4244ac;
        case 0x4244b0u: goto label_4244b0;
        case 0x4244b4u: goto label_4244b4;
        case 0x4244b8u: goto label_4244b8;
        case 0x4244bcu: goto label_4244bc;
        case 0x4244c0u: goto label_4244c0;
        case 0x4244c4u: goto label_4244c4;
        case 0x4244c8u: goto label_4244c8;
        case 0x4244ccu: goto label_4244cc;
        case 0x4244d0u: goto label_4244d0;
        case 0x4244d4u: goto label_4244d4;
        case 0x4244d8u: goto label_4244d8;
        case 0x4244dcu: goto label_4244dc;
        case 0x4244e0u: goto label_4244e0;
        case 0x4244e4u: goto label_4244e4;
        case 0x4244e8u: goto label_4244e8;
        case 0x4244ecu: goto label_4244ec;
        case 0x4244f0u: goto label_4244f0;
        case 0x4244f4u: goto label_4244f4;
        case 0x4244f8u: goto label_4244f8;
        case 0x4244fcu: goto label_4244fc;
        case 0x424500u: goto label_424500;
        case 0x424504u: goto label_424504;
        case 0x424508u: goto label_424508;
        case 0x42450cu: goto label_42450c;
        case 0x424510u: goto label_424510;
        case 0x424514u: goto label_424514;
        case 0x424518u: goto label_424518;
        case 0x42451cu: goto label_42451c;
        case 0x424520u: goto label_424520;
        case 0x424524u: goto label_424524;
        case 0x424528u: goto label_424528;
        case 0x42452cu: goto label_42452c;
        case 0x424530u: goto label_424530;
        case 0x424534u: goto label_424534;
        case 0x424538u: goto label_424538;
        case 0x42453cu: goto label_42453c;
        case 0x424540u: goto label_424540;
        case 0x424544u: goto label_424544;
        case 0x424548u: goto label_424548;
        case 0x42454cu: goto label_42454c;
        case 0x424550u: goto label_424550;
        case 0x424554u: goto label_424554;
        case 0x424558u: goto label_424558;
        case 0x42455cu: goto label_42455c;
        case 0x424560u: goto label_424560;
        case 0x424564u: goto label_424564;
        case 0x424568u: goto label_424568;
        case 0x42456cu: goto label_42456c;
        case 0x424570u: goto label_424570;
        case 0x424574u: goto label_424574;
        case 0x424578u: goto label_424578;
        case 0x42457cu: goto label_42457c;
        case 0x424580u: goto label_424580;
        case 0x424584u: goto label_424584;
        case 0x424588u: goto label_424588;
        case 0x42458cu: goto label_42458c;
        case 0x424590u: goto label_424590;
        case 0x424594u: goto label_424594;
        case 0x424598u: goto label_424598;
        case 0x42459cu: goto label_42459c;
        case 0x4245a0u: goto label_4245a0;
        case 0x4245a4u: goto label_4245a4;
        case 0x4245a8u: goto label_4245a8;
        case 0x4245acu: goto label_4245ac;
        case 0x4245b0u: goto label_4245b0;
        case 0x4245b4u: goto label_4245b4;
        case 0x4245b8u: goto label_4245b8;
        case 0x4245bcu: goto label_4245bc;
        case 0x4245c0u: goto label_4245c0;
        case 0x4245c4u: goto label_4245c4;
        case 0x4245c8u: goto label_4245c8;
        case 0x4245ccu: goto label_4245cc;
        case 0x4245d0u: goto label_4245d0;
        case 0x4245d4u: goto label_4245d4;
        case 0x4245d8u: goto label_4245d8;
        case 0x4245dcu: goto label_4245dc;
        case 0x4245e0u: goto label_4245e0;
        case 0x4245e4u: goto label_4245e4;
        case 0x4245e8u: goto label_4245e8;
        case 0x4245ecu: goto label_4245ec;
        default: break;
    }

    ctx->pc = 0x420f48u;

label_420f48:
    // 0x420f48: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x420f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_420f4c:
    // 0x420f4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x420f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420f50:
    // 0x420f50: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x420f50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_420f54:
    // 0x420f54: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x420f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_420f58:
    // 0x420f58: 0x8c8b0008  lw          $t3, 0x8($a0)
    ctx->pc = 0x420f58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_420f5c:
    // 0x420f5c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_420f60:
    if (ctx->pc == 0x420F60u) {
        ctx->pc = 0x420F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F5Cu;
        // 0x420f60: 0x8c8c0010  lw          $t4, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420F64u;
        goto label_420f64;
    }
    ctx->pc = 0x420F5Cu;
    {
        const bool branch_taken_0x420f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x420F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F5Cu;
        // 0x420f60: 0x8c8c0010  lw          $t4, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420f5c) {
            ctx->pc = 0x420F94u;
            goto label_420f94;
        }
    }
    ctx->pc = 0x420F64u;
label_420f64:
    // 0x420f64: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x420f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_420f68:
    // 0x420f68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_420f6c:
    if (ctx->pc == 0x420F6Cu) {
        ctx->pc = 0x420F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F68u;
        // 0x420f6c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420F70u;
        goto label_420f70;
    }
    ctx->pc = 0x420F68u;
    {
        const bool branch_taken_0x420f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F68u;
        // 0x420f6c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420f68) {
            ctx->pc = 0x420F80u;
            goto label_420f80;
        }
    }
    ctx->pc = 0x420F70u;
label_420f70:
    // 0x420f70: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_420f74:
    if (ctx->pc == 0x420F74u) {
        ctx->pc = 0x420F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F70u;
        // 0x420f74: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420F78u;
        goto label_420f78;
    }
    ctx->pc = 0x420F70u;
    {
        const bool branch_taken_0x420f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x420F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F70u;
        // 0x420f74: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420f70) {
            ctx->pc = 0x420F94u;
            goto label_420f94;
        }
    }
    ctx->pc = 0x420F78u;
label_420f78:
    // 0x420f78: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_420f7c:
    if (ctx->pc == 0x420F7Cu) {
        ctx->pc = 0x420F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F78u;
        // 0x420f7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420F80u;
        goto label_420f80;
    }
    ctx->pc = 0x420F78u;
    {
        const bool branch_taken_0x420f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F78u;
        // 0x420f7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420f78) {
            ctx->pc = 0x42125Cu;
            goto label_42125c;
        }
    }
    ctx->pc = 0x420F80u;
label_420f80:
    // 0x420f80: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x420f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_420f84:
    // 0x420f84: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
label_420f88:
    if (ctx->pc == 0x420F88u) {
        ctx->pc = 0x420F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F84u;
        // 0x420f88: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420F8Cu;
        goto label_420f8c;
    }
    ctx->pc = 0x420F84u;
    {
        const bool branch_taken_0x420f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x420F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F84u;
        // 0x420f88: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420f84) {
            ctx->pc = 0x421134u;
            goto label_421134;
        }
    }
    ctx->pc = 0x420F8Cu;
label_420f8c:
    // 0x420f8c: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_420f90:
    if (ctx->pc == 0x420F90u) {
        ctx->pc = 0x420F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F8Cu;
        // 0x420f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420F94u;
        goto label_420f94;
    }
    ctx->pc = 0x420F8Cu;
    {
        const bool branch_taken_0x420f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F8Cu;
        // 0x420f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420f8c) {
            ctx->pc = 0x42125Cu;
            goto label_42125c;
        }
    }
    ctx->pc = 0x420F94u;
label_420f94:
    // 0x420f94: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x420f94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_420f98:
    // 0x420f98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x420f98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420f9c:
    // 0x420f9c: 0x196000ad  blez        $t3, . + 4 + (0xAD << 2)
label_420fa0:
    if (ctx->pc == 0x420FA0u) {
        ctx->pc = 0x420FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F9Cu;
        // 0x420fa0: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420FA4u;
        goto label_420fa4;
    }
    ctx->pc = 0x420F9Cu;
    {
        const bool branch_taken_0x420f9c = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x420FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F9Cu;
        // 0x420fa0: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420f9c) {
            ctx->pc = 0x421254u;
            goto label_421254;
        }
    }
    ctx->pc = 0x420FA4u;
label_420fa4:
    // 0x420fa4: 0x0  nop
    ctx->pc = 0x420fa4u;
    // NOP
label_420fa8:
    // 0x420fa8: 0x1920005a  blez        $t1, . + 4 + (0x5A << 2)
label_420fac:
    if (ctx->pc == 0x420FACu) {
        ctx->pc = 0x420FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420FA8u;
        // 0x420fac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420FB0u;
        goto label_420fb0;
    }
    ctx->pc = 0x420FA8u;
    {
        const bool branch_taken_0x420fa8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x420FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420FA8u;
        // 0x420fac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420fa8) {
            ctx->pc = 0x421114u;
            goto label_421114;
        }
    }
    ctx->pc = 0x420FB0u;
label_420fb0:
    // 0x420fb0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x420fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_420fb4:
    // 0x420fb4: 0x1920001f  blez        $t1, . + 4 + (0x1F << 2)
label_420fb8:
    if (ctx->pc == 0x420FB8u) {
        ctx->pc = 0x420FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420FB4u;
        // 0x420fb8: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x420FBCu;
        goto label_420fbc;
    }
    ctx->pc = 0x420FB4u;
    {
        const bool branch_taken_0x420fb4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x420FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420FB4u;
        // 0x420fb8: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x420fb4) {
            ctx->pc = 0x421034u;
            goto label_421034;
        }
    }
    ctx->pc = 0x420FBCu;
label_420fbc:
    // 0x420fbc: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
label_420fc0:
    if (ctx->pc == 0x420FC0u) {
        ctx->pc = 0x420FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420FBCu;
        // 0x420fc0: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420FC4u;
        goto label_420fc4;
    }
    ctx->pc = 0x420FBCu;
    {
        const bool branch_taken_0x420fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x420fbc) {
            ctx->pc = 0x420FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420FBCu;
            // 0x420fc0: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42106Cu;
            goto label_42106c;
        }
    }
    ctx->pc = 0x420FC4u;
label_420fc4:
    // 0x420fc4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x420fc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_420fc8:
    // 0x420fc8: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_420fcc:
    if (ctx->pc == 0x420FCCu) {
        ctx->pc = 0x420FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420FC8u;
        // 0x420fcc: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420FD0u;
        goto label_420fd0;
    }
    ctx->pc = 0x420FC8u;
    {
        const bool branch_taken_0x420fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x420fc8) {
            ctx->pc = 0x420FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420FC8u;
            // 0x420fcc: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x421038u;
            goto label_421038;
        }
    }
    ctx->pc = 0x420FD0u;
label_420fd0:
    // 0x420fd0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x420fd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_420fd4:
    // 0x420fd4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_420fd8:
    if (ctx->pc == 0x420FD8u) {
        ctx->pc = 0x420FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420FD4u;
        // 0x420fd8: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420FDCu;
        goto label_420fdc;
    }
    ctx->pc = 0x420FD4u;
    {
        const bool branch_taken_0x420fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x420fd4) {
            ctx->pc = 0x420FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420FD4u;
            // 0x420fd8: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42100Cu;
            goto label_42100c;
        }
    }
    ctx->pc = 0x420FDCu;
label_420fdc:
    // 0x420fdc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x420fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_420fe0:
    // 0x420fe0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x420fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_420fe4:
    // 0x420fe4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x420fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_420fe8:
    // 0x420fe8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x420fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_420fec:
    // 0x420fec: 0x2c4300f0  sltiu       $v1, $v0, 0xF0
    ctx->pc = 0x420fecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
label_420ff0:
    // 0x420ff0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_420ff4:
    if (ctx->pc == 0x420FF4u) {
        ctx->pc = 0x420FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420FF0u;
        // 0x420ff4: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x420FF8u;
        goto label_420ff8;
    }
    ctx->pc = 0x420FF0u;
    {
        const bool branch_taken_0x420ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x420FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420FF0u;
        // 0x420ff4: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x420ff0) {
            ctx->pc = 0x421000u;
            goto label_421000;
        }
    }
    ctx->pc = 0x420FF8u;
label_420ff8:
    // 0x420ff8: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_420ffc:
    if (ctx->pc == 0x420FFCu) {
        ctx->pc = 0x420FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420FF8u;
        // 0x420ffc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421000u;
        goto label_421000;
    }
    ctx->pc = 0x420FF8u;
    {
        const bool branch_taken_0x420ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420FF8u;
        // 0x420ffc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420ff8) {
            ctx->pc = 0x42112Cu;
            goto label_42112c;
        }
    }
    ctx->pc = 0x421000u;
label_421000:
    // 0x421000: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x421000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_421004:
    // 0x421004: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x421004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_421008:
    // 0x421008: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x421008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_42100c:
    // 0x42100c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42100cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_421010:
    // 0x421010: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x421010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_421014:
    // 0x421014: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x421014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_421018:
    // 0x421018: 0x2c4300f0  sltiu       $v1, $v0, 0xF0
    ctx->pc = 0x421018u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
label_42101c:
    // 0x42101c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_421020:
    if (ctx->pc == 0x421020u) {
        ctx->pc = 0x421020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42101Cu;
        // 0x421020: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x421024u;
        goto label_421024;
    }
    ctx->pc = 0x42101Cu;
    {
        const bool branch_taken_0x42101c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x421020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42101Cu;
        // 0x421020: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42101c) {
            ctx->pc = 0x42102Cu;
            goto label_42102c;
        }
    }
    ctx->pc = 0x421024u;
label_421024:
    // 0x421024: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_421028:
    if (ctx->pc == 0x421028u) {
        ctx->pc = 0x421028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421024u;
        // 0x421028: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42102Cu;
        goto label_42102c;
    }
    ctx->pc = 0x421024u;
    {
        const bool branch_taken_0x421024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421024u;
        // 0x421028: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421024) {
            ctx->pc = 0x42112Cu;
            goto label_42112c;
        }
    }
    ctx->pc = 0x42102Cu;
label_42102c:
    // 0x42102c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x42102cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_421030:
    // 0x421030: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x421030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_421034:
    // 0x421034: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x421034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_421038:
    // 0x421038: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x421038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42103c:
    // 0x42103c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x42103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_421040:
    // 0x421040: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x421040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_421044:
    // 0x421044: 0x2c4300f0  sltiu       $v1, $v0, 0xF0
    ctx->pc = 0x421044u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
label_421048:
    // 0x421048: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_42104c:
    if (ctx->pc == 0x42104Cu) {
        ctx->pc = 0x42104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421048u;
        // 0x42104c: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x421050u;
        goto label_421050;
    }
    ctx->pc = 0x421048u;
    {
        const bool branch_taken_0x421048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421048u;
        // 0x42104c: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x421048) {
            ctx->pc = 0x421058u;
            goto label_421058;
        }
    }
    ctx->pc = 0x421050u;
label_421050:
    // 0x421050: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_421054:
    if (ctx->pc == 0x421054u) {
        ctx->pc = 0x421054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421050u;
        // 0x421054: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421058u;
        goto label_421058;
    }
    ctx->pc = 0x421050u;
    {
        const bool branch_taken_0x421050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421050u;
        // 0x421054: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421050) {
            ctx->pc = 0x42112Cu;
            goto label_42112c;
        }
    }
    ctx->pc = 0x421058u;
label_421058:
    // 0x421058: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x421058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_42105c:
    // 0x42105c: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x42105cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_421060:
    // 0x421060: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_421064:
    if (ctx->pc == 0x421064u) {
        ctx->pc = 0x421064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421060u;
        // 0x421064: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421068u;
        goto label_421068;
    }
    ctx->pc = 0x421060u;
    {
        const bool branch_taken_0x421060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421060u;
        // 0x421064: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421060) {
            ctx->pc = 0x421114u;
            goto label_421114;
        }
    }
    ctx->pc = 0x421068u;
label_421068:
    // 0x421068: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x421068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_42106c:
    // 0x42106c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42106cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_421070:
    // 0x421070: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x421070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_421074:
    // 0x421074: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x421074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_421078:
    // 0x421078: 0x2c4300f0  sltiu       $v1, $v0, 0xF0
    ctx->pc = 0x421078u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
label_42107c:
    // 0x42107c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_421080:
    if (ctx->pc == 0x421080u) {
        ctx->pc = 0x421080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42107Cu;
        // 0x421080: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x421084u;
        goto label_421084;
    }
    ctx->pc = 0x42107Cu;
    {
        const bool branch_taken_0x42107c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x421080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42107Cu;
        // 0x421080: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42107c) {
            ctx->pc = 0x42108Cu;
            goto label_42108c;
        }
    }
    ctx->pc = 0x421084u;
label_421084:
    // 0x421084: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_421088:
    if (ctx->pc == 0x421088u) {
        ctx->pc = 0x421088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421084u;
        // 0x421088: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42108Cu;
        goto label_42108c;
    }
    ctx->pc = 0x421084u;
    {
        const bool branch_taken_0x421084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421084u;
        // 0x421088: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421084) {
            ctx->pc = 0x42112Cu;
            goto label_42112c;
        }
    }
    ctx->pc = 0x42108Cu;
label_42108c:
    // 0x42108c: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x42108cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_421090:
    // 0x421090: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x421090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_421094:
    // 0x421094: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x421094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_421098:
    // 0x421098: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x421098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_42109c:
    // 0x42109c: 0x2c4300f0  sltiu       $v1, $v0, 0xF0
    ctx->pc = 0x42109cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
label_4210a0:
    // 0x4210a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4210a4:
    if (ctx->pc == 0x4210A4u) {
        ctx->pc = 0x4210A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4210A0u;
        // 0x4210a4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4210A8u;
        goto label_4210a8;
    }
    ctx->pc = 0x4210A0u;
    {
        const bool branch_taken_0x4210a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4210A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4210A0u;
        // 0x4210a4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4210a0) {
            ctx->pc = 0x4210B4u;
            goto label_4210b4;
        }
    }
    ctx->pc = 0x4210A8u;
label_4210a8:
    // 0x4210a8: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x4210a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_4210ac:
    // 0x4210ac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_4210b0:
    if (ctx->pc == 0x4210B0u) {
        ctx->pc = 0x4210B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4210ACu;
        // 0x4210b0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4210B4u;
        goto label_4210b4;
    }
    ctx->pc = 0x4210ACu;
    {
        const bool branch_taken_0x4210ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4210B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4210ACu;
        // 0x4210b0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4210ac) {
            ctx->pc = 0x42112Cu;
            goto label_42112c;
        }
    }
    ctx->pc = 0x4210B4u;
label_4210b4:
    // 0x4210b4: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x4210b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_4210b8:
    // 0x4210b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4210b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4210bc:
    // 0x4210bc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4210bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4210c0:
    // 0x4210c0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x4210c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_4210c4:
    // 0x4210c4: 0x2c4300f0  sltiu       $v1, $v0, 0xF0
    ctx->pc = 0x4210c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
label_4210c8:
    // 0x4210c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4210cc:
    if (ctx->pc == 0x4210CCu) {
        ctx->pc = 0x4210CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4210C8u;
        // 0x4210cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4210D0u;
        goto label_4210d0;
    }
    ctx->pc = 0x4210C8u;
    {
        const bool branch_taken_0x4210c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4210CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4210C8u;
        // 0x4210cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4210c8) {
            ctx->pc = 0x4210DCu;
            goto label_4210dc;
        }
    }
    ctx->pc = 0x4210D0u;
label_4210d0:
    // 0x4210d0: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x4210d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_4210d4:
    // 0x4210d4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_4210d8:
    if (ctx->pc == 0x4210D8u) {
        ctx->pc = 0x4210D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4210D4u;
        // 0x4210d8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4210DCu;
        goto label_4210dc;
    }
    ctx->pc = 0x4210D4u;
    {
        const bool branch_taken_0x4210d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4210D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4210D4u;
        // 0x4210d8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4210d4) {
            ctx->pc = 0x42112Cu;
            goto label_42112c;
        }
    }
    ctx->pc = 0x4210DCu;
label_4210dc:
    // 0x4210dc: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x4210dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_4210e0:
    // 0x4210e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4210e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4210e4:
    // 0x4210e4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4210e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4210e8:
    // 0x4210e8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x4210e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_4210ec:
    // 0x4210ec: 0x2c4300f0  sltiu       $v1, $v0, 0xF0
    ctx->pc = 0x4210ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
label_4210f0:
    // 0x4210f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4210f4:
    if (ctx->pc == 0x4210F4u) {
        ctx->pc = 0x4210F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4210F0u;
        // 0x4210f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4210F8u;
        goto label_4210f8;
    }
    ctx->pc = 0x4210F0u;
    {
        const bool branch_taken_0x4210f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4210F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4210F0u;
        // 0x4210f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4210f0) {
            ctx->pc = 0x421104u;
            goto label_421104;
        }
    }
    ctx->pc = 0x4210F8u;
label_4210f8:
    // 0x4210f8: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x4210f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_4210fc:
    // 0x4210fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_421100:
    if (ctx->pc == 0x421100u) {
        ctx->pc = 0x421100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4210FCu;
        // 0x421100: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421104u;
        goto label_421104;
    }
    ctx->pc = 0x4210FCu;
    {
        const bool branch_taken_0x4210fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4210FCu;
        // 0x421100: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4210fc) {
            ctx->pc = 0x42112Cu;
            goto label_42112c;
        }
    }
    ctx->pc = 0x421104u;
label_421104:
    // 0x421104: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x421104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_421108:
    // 0x421108: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x421108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_42110c:
    // 0x42110c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_421110:
    if (ctx->pc == 0x421110u) {
        ctx->pc = 0x421110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42110Cu;
        // 0x421110: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421114u;
        goto label_421114;
    }
    ctx->pc = 0x42110Cu;
    {
        const bool branch_taken_0x42110c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x421110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42110Cu;
        // 0x421110: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42110c) {
            ctx->pc = 0x421068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421068;
        }
    }
    ctx->pc = 0x421114u;
label_421114:
    // 0x421114: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x421114u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_421118:
    // 0x421118: 0x14b102a  slt         $v0, $t2, $t3
    ctx->pc = 0x421118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_42111c:
    // 0x42111c: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
label_421120:
    if (ctx->pc == 0x421120u) {
        ctx->pc = 0x421120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42111Cu;
        // 0x421120: 0x8c2021  addu        $a0, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421124u;
        goto label_421124;
    }
    ctx->pc = 0x42111Cu;
    {
        const bool branch_taken_0x42111c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x421120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42111Cu;
        // 0x421120: 0x8c2021  addu        $a0, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42111c) {
            ctx->pc = 0x420FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_420fa8;
        }
    }
    ctx->pc = 0x421124u;
label_421124:
    // 0x421124: 0x1000004c  b           . + 4 + (0x4C << 2)
label_421128:
    if (ctx->pc == 0x421128u) {
        ctx->pc = 0x421128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421124u;
        // 0x421128: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42112Cu;
        goto label_42112c;
    }
    ctx->pc = 0x421124u;
    {
        const bool branch_taken_0x421124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421124u;
        // 0x421128: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421124) {
            ctx->pc = 0x421258u;
            goto label_421258;
        }
    }
    ctx->pc = 0x42112Cu;
label_42112c:
    // 0x42112c: 0x3e00008  jr          $ra
label_421130:
    if (ctx->pc == 0x421130u) {
        ctx->pc = 0x421130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42112Cu;
        // 0x421130: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421134u;
        goto label_421134;
    }
    ctx->pc = 0x42112Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42112Cu;
        // 0x421130: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42112Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x421134u;
label_421134:
    // 0x421134: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x421134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_421138:
    // 0x421138: 0x19600046  blez        $t3, . + 4 + (0x46 << 2)
label_42113c:
    if (ctx->pc == 0x42113Cu) {
        ctx->pc = 0x42113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421138u;
        // 0x42113c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421140u;
        goto label_421140;
    }
    ctx->pc = 0x421138u;
    {
        const bool branch_taken_0x421138 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x42113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421138u;
        // 0x42113c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421138) {
            ctx->pc = 0x421254u;
            goto label_421254;
        }
    }
    ctx->pc = 0x421140u;
label_421140:
    // 0x421140: 0x19200040  blez        $t1, . + 4 + (0x40 << 2)
label_421144:
    if (ctx->pc == 0x421144u) {
        ctx->pc = 0x421144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421140u;
        // 0x421144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421148u;
        goto label_421148;
    }
    ctx->pc = 0x421140u;
    {
        const bool branch_taken_0x421140 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x421144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421140u;
        // 0x421144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421140) {
            ctx->pc = 0x421244u;
            goto label_421244;
        }
    }
    ctx->pc = 0x421148u;
label_421148:
    // 0x421148: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x421148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_42114c:
    // 0x42114c: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x42114cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_421150:
    // 0x421150: 0x19200016  blez        $t1, . + 4 + (0x16 << 2)
label_421154:
    if (ctx->pc == 0x421154u) {
        ctx->pc = 0x421154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421150u;
        // 0x421154: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x421158u;
        goto label_421158;
    }
    ctx->pc = 0x421150u;
    {
        const bool branch_taken_0x421150 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x421154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421150u;
        // 0x421154: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x421150) {
            ctx->pc = 0x4211ACu;
            goto label_4211ac;
        }
    }
    ctx->pc = 0x421158u;
label_421158:
    // 0x421158: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_42115c:
    if (ctx->pc == 0x42115Cu) {
        ctx->pc = 0x42115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421158u;
        // 0x42115c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x421160u;
        goto label_421160;
    }
    ctx->pc = 0x421158u;
    {
        const bool branch_taken_0x421158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421158u;
        // 0x42115c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x421158) {
            ctx->pc = 0x4211D0u;
            goto label_4211d0;
        }
    }
    ctx->pc = 0x421160u;
label_421160:
    // 0x421160: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_421164:
    if (ctx->pc == 0x421164u) {
        ctx->pc = 0x421164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421160u;
        // 0x421164: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421168u;
        goto label_421168;
    }
    ctx->pc = 0x421160u;
    {
        const bool branch_taken_0x421160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x421160) {
            ctx->pc = 0x421164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x421160u;
            // 0x421164: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4211B0u;
            goto label_4211b0;
        }
    }
    ctx->pc = 0x421168u;
label_421168:
    // 0x421168: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x421168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_42116c:
    // 0x42116c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_421170:
    if (ctx->pc == 0x421170u) {
        ctx->pc = 0x421170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42116Cu;
        // 0x421170: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421174u;
        goto label_421174;
    }
    ctx->pc = 0x42116Cu;
    {
        const bool branch_taken_0x42116c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42116c) {
            ctx->pc = 0x421170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42116Cu;
            // 0x421170: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x421194u;
            goto label_421194;
        }
    }
    ctx->pc = 0x421174u;
label_421174:
    // 0x421174: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x421174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_421178:
    // 0x421178: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
label_42117c:
    if (ctx->pc == 0x42117Cu) {
        ctx->pc = 0x42117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421178u;
        // 0x42117c: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x421180u;
        goto label_421180;
    }
    ctx->pc = 0x421178u;
    {
        const bool branch_taken_0x421178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x42117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421178u;
        // 0x42117c: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x421178) {
            ctx->pc = 0x421188u;
            goto label_421188;
        }
    }
    ctx->pc = 0x421180u;
label_421180:
    // 0x421180: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
label_421184:
    if (ctx->pc == 0x421184u) {
        ctx->pc = 0x421184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421180u;
        // 0x421184: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421188u;
        goto label_421188;
    }
    ctx->pc = 0x421180u;
    {
        const bool branch_taken_0x421180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421180u;
        // 0x421184: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421180) {
            ctx->pc = 0x42112Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42112c;
        }
    }
    ctx->pc = 0x421188u;
label_421188:
    // 0x421188: 0x24860007  addiu       $a2, $a0, 0x7
    ctx->pc = 0x421188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_42118c:
    // 0x42118c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42118cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_421190:
    // 0x421190: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x421190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_421194:
    // 0x421194: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
label_421198:
    if (ctx->pc == 0x421198u) {
        ctx->pc = 0x421198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421194u;
        // 0x421198: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42119Cu;
        goto label_42119c;
    }
    ctx->pc = 0x421194u;
    {
        const bool branch_taken_0x421194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x421198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421194u;
        // 0x421198: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x421194) {
            ctx->pc = 0x4211A4u;
            goto label_4211a4;
        }
    }
    ctx->pc = 0x42119Cu;
label_42119c:
    // 0x42119c: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
label_4211a0:
    if (ctx->pc == 0x4211A0u) {
        ctx->pc = 0x4211A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42119Cu;
        // 0x4211a0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4211A4u;
        goto label_4211a4;
    }
    ctx->pc = 0x42119Cu;
    {
        const bool branch_taken_0x42119c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4211A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42119Cu;
        // 0x4211a0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42119c) {
            ctx->pc = 0x42112Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42112c;
        }
    }
    ctx->pc = 0x4211A4u;
label_4211a4:
    // 0x4211a4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4211a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4211a8:
    // 0x4211a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4211a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4211ac:
    // 0x4211ac: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4211acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4211b0:
    // 0x4211b0: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
label_4211b4:
    if (ctx->pc == 0x4211B4u) {
        ctx->pc = 0x4211B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211B0u;
        // 0x4211b4: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4211B8u;
        goto label_4211b8;
    }
    ctx->pc = 0x4211B0u;
    {
        const bool branch_taken_0x4211b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x4211B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211B0u;
        // 0x4211b4: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4211b0) {
            ctx->pc = 0x4211C0u;
            goto label_4211c0;
        }
    }
    ctx->pc = 0x4211B8u;
label_4211b8:
    // 0x4211b8: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
label_4211bc:
    if (ctx->pc == 0x4211BCu) {
        ctx->pc = 0x4211BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211B8u;
        // 0x4211bc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4211C0u;
        goto label_4211c0;
    }
    ctx->pc = 0x4211B8u;
    {
        const bool branch_taken_0x4211b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4211BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211B8u;
        // 0x4211bc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4211b8) {
            ctx->pc = 0x42112Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42112c;
        }
    }
    ctx->pc = 0x4211C0u;
label_4211c0:
    // 0x4211c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4211c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4211c4:
    // 0x4211c4: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x4211c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_4211c8:
    // 0x4211c8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4211cc:
    if (ctx->pc == 0x4211CCu) {
        ctx->pc = 0x4211CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211C8u;
        // 0x4211cc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4211D0u;
        goto label_4211d0;
    }
    ctx->pc = 0x4211C8u;
    {
        const bool branch_taken_0x4211c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4211CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211C8u;
        // 0x4211cc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4211c8) {
            ctx->pc = 0x421244u;
            goto label_421244;
        }
    }
    ctx->pc = 0x4211D0u;
label_4211d0:
    // 0x4211d0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x4211d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4211d4:
    // 0x4211d4: 0x0  nop
    ctx->pc = 0x4211d4u;
    // NOP
label_4211d8:
    // 0x4211d8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4211d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4211dc:
    // 0x4211dc: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
label_4211e0:
    if (ctx->pc == 0x4211E0u) {
        ctx->pc = 0x4211E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211DCu;
        // 0x4211e0: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4211E4u;
        goto label_4211e4;
    }
    ctx->pc = 0x4211DCu;
    {
        const bool branch_taken_0x4211dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x4211E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211DCu;
        // 0x4211e0: 0x2c420010  sltiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4211dc) {
            ctx->pc = 0x4211ECu;
            goto label_4211ec;
        }
    }
    ctx->pc = 0x4211E4u;
label_4211e4:
    // 0x4211e4: 0x1040ffd1  beqz        $v0, . + 4 + (-0x2F << 2)
label_4211e8:
    if (ctx->pc == 0x4211E8u) {
        ctx->pc = 0x4211E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211E4u;
        // 0x4211e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4211ECu;
        goto label_4211ec;
    }
    ctx->pc = 0x4211E4u;
    {
        const bool branch_taken_0x4211e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4211E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211E4u;
        // 0x4211e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4211e4) {
            ctx->pc = 0x42112Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42112c;
        }
    }
    ctx->pc = 0x4211ECu;
label_4211ec:
    // 0x4211ec: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x4211ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_4211f0:
    // 0x4211f0: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
label_4211f4:
    if (ctx->pc == 0x4211F4u) {
        ctx->pc = 0x4211F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211F0u;
        // 0x4211f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4211F8u;
        goto label_4211f8;
    }
    ctx->pc = 0x4211F0u;
    {
        const bool branch_taken_0x4211f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x4211F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211F0u;
        // 0x4211f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4211f0) {
            ctx->pc = 0x421204u;
            goto label_421204;
        }
    }
    ctx->pc = 0x4211F8u;
label_4211f8:
    // 0x4211f8: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x4211f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_4211fc:
    // 0x4211fc: 0x1040ffcb  beqz        $v0, . + 4 + (-0x35 << 2)
label_421200:
    if (ctx->pc == 0x421200u) {
        ctx->pc = 0x421200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211FCu;
        // 0x421200: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421204u;
        goto label_421204;
    }
    ctx->pc = 0x4211FCu;
    {
        const bool branch_taken_0x4211fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211FCu;
        // 0x421200: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4211fc) {
            ctx->pc = 0x42112Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42112c;
        }
    }
    ctx->pc = 0x421204u;
label_421204:
    // 0x421204: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x421204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_421208:
    // 0x421208: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
label_42120c:
    if (ctx->pc == 0x42120Cu) {
        ctx->pc = 0x42120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421208u;
        // 0x42120c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421210u;
        goto label_421210;
    }
    ctx->pc = 0x421208u;
    {
        const bool branch_taken_0x421208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x42120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421208u;
        // 0x42120c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421208) {
            ctx->pc = 0x42121Cu;
            goto label_42121c;
        }
    }
    ctx->pc = 0x421210u;
label_421210:
    // 0x421210: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x421210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_421214:
    // 0x421214: 0x1040ffc5  beqz        $v0, . + 4 + (-0x3B << 2)
label_421218:
    if (ctx->pc == 0x421218u) {
        ctx->pc = 0x421218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421214u;
        // 0x421218: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42121Cu;
        goto label_42121c;
    }
    ctx->pc = 0x421214u;
    {
        const bool branch_taken_0x421214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421214u;
        // 0x421218: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421214) {
            ctx->pc = 0x42112Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42112c;
        }
    }
    ctx->pc = 0x42121Cu;
label_42121c:
    // 0x42121c: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x42121cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
label_421220:
    // 0x421220: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
label_421224:
    if (ctx->pc == 0x421224u) {
        ctx->pc = 0x421224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421220u;
        // 0x421224: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421228u;
        goto label_421228;
    }
    ctx->pc = 0x421220u;
    {
        const bool branch_taken_0x421220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x421224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421220u;
        // 0x421224: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421220) {
            ctx->pc = 0x421234u;
            goto label_421234;
        }
    }
    ctx->pc = 0x421228u;
label_421228:
    // 0x421228: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x421228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_42122c:
    // 0x42122c: 0x1040ffbf  beqz        $v0, . + 4 + (-0x41 << 2)
label_421230:
    if (ctx->pc == 0x421230u) {
        ctx->pc = 0x421230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42122Cu;
        // 0x421230: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421234u;
        goto label_421234;
    }
    ctx->pc = 0x42122Cu;
    {
        const bool branch_taken_0x42122c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42122Cu;
        // 0x421230: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42122c) {
            ctx->pc = 0x42112Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42112c;
        }
    }
    ctx->pc = 0x421234u;
label_421234:
    // 0x421234: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x421234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_421238:
    // 0x421238: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x421238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_42123c:
    // 0x42123c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_421240:
    if (ctx->pc == 0x421240u) {
        ctx->pc = 0x421240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42123Cu;
        // 0x421240: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421244u;
        goto label_421244;
    }
    ctx->pc = 0x42123Cu;
    {
        const bool branch_taken_0x42123c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x421240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42123Cu;
        // 0x421240: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42123c) {
            ctx->pc = 0x4211D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4211d8;
        }
    }
    ctx->pc = 0x421244u;
label_421244:
    // 0x421244: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x421244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_421248:
    // 0x421248: 0x14b102a  slt         $v0, $t2, $t3
    ctx->pc = 0x421248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_42124c:
    // 0x42124c: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
label_421250:
    if (ctx->pc == 0x421250u) {
        ctx->pc = 0x421250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42124Cu;
        // 0x421250: 0x8c2021  addu        $a0, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421254u;
        goto label_421254;
    }
    ctx->pc = 0x42124Cu;
    {
        const bool branch_taken_0x42124c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x421250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42124Cu;
        // 0x421250: 0x8c2021  addu        $a0, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42124c) {
            ctx->pc = 0x421140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421140;
        }
    }
    ctx->pc = 0x421254u;
label_421254:
    // 0x421254: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x421254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_421258:
    // 0x421258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x421258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42125c:
    // 0x42125c: 0x3e00008  jr          $ra
label_421260:
    if (ctx->pc == 0x421260u) {
        ctx->pc = 0x421260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42125Cu;
        // 0x421260: 0x68100b  movn        $v0, $v1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421264u;
        goto label_421264;
    }
    ctx->pc = 0x42125Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42125Cu;
        // 0x421260: 0x68100b  movn        $v0, $v1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42125Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x421264u;
label_421264:
    // 0x421264: 0x0  nop
    ctx->pc = 0x421264u;
    // NOP
label_421268:
    // 0x421268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x421268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_42126c:
    // 0x42126c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x42126cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_421270:
    // 0x421270: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x421270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_421274:
    // 0x421274: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x421274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_421278:
    // 0x421278: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x421278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42127c:
    // 0x42127c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x42127cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_421280:
    // 0x421280: 0x8ccc0004  lw          $t4, 0x4($a2)
    ctx->pc = 0x421280u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_421284:
    // 0x421284: 0x8cd80008  lw          $t8, 0x8($a2)
    ctx->pc = 0x421284u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_421288:
    // 0x421288: 0x8cd90010  lw          $t9, 0x10($a2)
    ctx->pc = 0x421288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_42128c:
    // 0x42128c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_421290:
    if (ctx->pc == 0x421290u) {
        ctx->pc = 0x421290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42128Cu;
        // 0x421290: 0x8cc50014  lw          $a1, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421294u;
        goto label_421294;
    }
    ctx->pc = 0x42128Cu;
    {
        const bool branch_taken_0x42128c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x421290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42128Cu;
        // 0x421290: 0x8cc50014  lw          $a1, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42128c) {
            ctx->pc = 0x4212C4u;
            goto label_4212c4;
        }
    }
    ctx->pc = 0x421294u;
label_421294:
    // 0x421294: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x421294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_421298:
    // 0x421298: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_42129c:
    if (ctx->pc == 0x42129Cu) {
        ctx->pc = 0x42129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421298u;
        // 0x42129c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4212A0u;
        goto label_4212a0;
    }
    ctx->pc = 0x421298u;
    {
        const bool branch_taken_0x421298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421298u;
        // 0x42129c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421298) {
            ctx->pc = 0x4212B0u;
            goto label_4212b0;
        }
    }
    ctx->pc = 0x4212A0u;
label_4212a0:
    // 0x4212a0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_4212a4:
    if (ctx->pc == 0x4212A4u) {
        ctx->pc = 0x4212A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212A0u;
        // 0x4212a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4212A8u;
        goto label_4212a8;
    }
    ctx->pc = 0x4212A0u;
    {
        const bool branch_taken_0x4212a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4212A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212A0u;
        // 0x4212a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4212a0) {
            ctx->pc = 0x4212C4u;
            goto label_4212c4;
        }
    }
    ctx->pc = 0x4212A8u;
label_4212a8:
    // 0x4212a8: 0x1000010f  b           . + 4 + (0x10F << 2)
label_4212ac:
    if (ctx->pc == 0x4212ACu) {
        ctx->pc = 0x4212ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212A8u;
        // 0x4212ac: 0x7bb00000  lq          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4212B0u;
        goto label_4212b0;
    }
    ctx->pc = 0x4212A8u;
    {
        const bool branch_taken_0x4212a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4212ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212A8u;
        // 0x4212ac: 0x7bb00000  lq          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4212a8) {
            ctx->pc = 0x4216E8u;
            goto label_4216e8;
        }
    }
    ctx->pc = 0x4212B0u;
label_4212b0:
    // 0x4212b0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4212b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4212b4:
    // 0x4212b4: 0x1062008f  beq         $v1, $v0, . + 4 + (0x8F << 2)
label_4212b8:
    if (ctx->pc == 0x4212B8u) {
        ctx->pc = 0x4212B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212B4u;
        // 0x4212b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4212BCu;
        goto label_4212bc;
    }
    ctx->pc = 0x4212B4u;
    {
        const bool branch_taken_0x4212b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4212B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212B4u;
        // 0x4212b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4212b4) {
            ctx->pc = 0x4214F4u;
            goto label_4214f4;
        }
    }
    ctx->pc = 0x4212BCu;
label_4212bc:
    // 0x4212bc: 0x1000010a  b           . + 4 + (0x10A << 2)
label_4212c0:
    if (ctx->pc == 0x4212C0u) {
        ctx->pc = 0x4212C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212BCu;
        // 0x4212c0: 0x7bb00000  lq          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4212C4u;
        goto label_4212c4;
    }
    ctx->pc = 0x4212BCu;
    {
        const bool branch_taken_0x4212bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4212C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212BCu;
        // 0x4212c0: 0x7bb00000  lq          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4212bc) {
            ctx->pc = 0x4216E8u;
            goto label_4216e8;
        }
    }
    ctx->pc = 0x4212C4u;
label_4212c4:
    // 0x4212c4: 0x8cc60018  lw          $a2, 0x18($a2)
    ctx->pc = 0x4212c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_4212c8:
    // 0x4212c8: 0x1b000105  blez        $t8, . + 4 + (0x105 << 2)
label_4212cc:
    if (ctx->pc == 0x4212CCu) {
        ctx->pc = 0x4212CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212C8u;
        // 0x4212cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4212D0u;
        goto label_4212d0;
    }
    ctx->pc = 0x4212C8u;
    {
        const bool branch_taken_0x4212c8 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x4212CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212C8u;
        // 0x4212cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4212c8) {
            ctx->pc = 0x4216E0u;
            goto label_4216e0;
        }
    }
    ctx->pc = 0x4212D0u;
label_4212d0:
    // 0x4212d0: 0x246d0001  addiu       $t5, $v1, 0x1
    ctx->pc = 0x4212d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4212d4:
    // 0x4212d4: 0x1307021  addu        $t6, $t1, $s0
    ctx->pc = 0x4212d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
label_4212d8:
    // 0x4212d8: 0x1980007f  blez        $t4, . + 4 + (0x7F << 2)
label_4212dc:
    if (ctx->pc == 0x4212DCu) {
        ctx->pc = 0x4212DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212D8u;
        // 0x4212dc: 0xb97821  addu        $t7, $a1, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4212E0u;
        goto label_4212e0;
    }
    ctx->pc = 0x4212D8u;
    {
        const bool branch_taken_0x4212d8 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x4212DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212D8u;
        // 0x4212dc: 0xb97821  addu        $t7, $a1, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4212d8) {
            ctx->pc = 0x4214D8u;
            goto label_4214d8;
        }
    }
    ctx->pc = 0x4212E0u;
label_4212e0:
    // 0x4212e0: 0xc1023  negu        $v0, $t4
    ctx->pc = 0x4212e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_4212e4:
    // 0x4212e4: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x4212e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_4212e8:
    // 0x4212e8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4212e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4212ec:
    // 0x4212ec: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4212ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4212f0:
    // 0x4212f0: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_4212f4:
    if (ctx->pc == 0x4212F4u) {
        ctx->pc = 0x4212F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212F0u;
        // 0x4212f4: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4212F8u;
        goto label_4212f8;
    }
    ctx->pc = 0x4212F0u;
    {
        const bool branch_taken_0x4212f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4212F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212F0u;
        // 0x4212f4: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4212f0) {
            ctx->pc = 0x4213DCu;
            goto label_4213dc;
        }
    }
    ctx->pc = 0x4212F8u;
label_4212f8:
    // 0x4212f8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4212f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4212fc:
    // 0x4212fc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_421300:
    if (ctx->pc == 0x421300u) {
        ctx->pc = 0x421300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212FCu;
        // 0x421300: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x421304u;
        goto label_421304;
    }
    ctx->pc = 0x4212FCu;
    {
        const bool branch_taken_0x4212fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4212FCu;
        // 0x421300: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4212fc) {
            ctx->pc = 0x421394u;
            goto label_421394;
        }
    }
    ctx->pc = 0x421304u;
label_421304:
    // 0x421304: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_421308:
    if (ctx->pc == 0x421308u) {
        ctx->pc = 0x421308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421304u;
        // 0x421308: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42130Cu;
        goto label_42130c;
    }
    ctx->pc = 0x421304u;
    {
        const bool branch_taken_0x421304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x421304) {
            ctx->pc = 0x421308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x421304u;
            // 0x421308: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x421354u;
            goto label_421354;
        }
    }
    ctx->pc = 0x42130Cu;
label_42130c:
    // 0x42130c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x42130cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_421310:
    // 0x421310: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x421310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_421314:
    // 0x421314: 0x252a0004  addiu       $t2, $t1, 0x4
    ctx->pc = 0x421314u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_421318:
    // 0x421318: 0x258bffff  addiu       $t3, $t4, -0x1
    ctx->pc = 0x421318u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_42131c:
    // 0x42131c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42131cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_421320:
    // 0x421320: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x421320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_421324:
    // 0x421324: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x421324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_421328:
    // 0x421328: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x421328u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_42132c:
    // 0x42132c: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x42132cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_421330:
    // 0x421330: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x421330u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_421334:
    // 0x421334: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x421334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_421338:
    // 0x421338: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x421338u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_42133c:
    // 0x42133c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x42133cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_421340:
    // 0x421340: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x421340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_421344:
    // 0x421344: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x421344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_421348:
    // 0x421348: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x421348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_42134c:
    // 0x42134c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x42134cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_421350:
    // 0x421350: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x421350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_421354:
    // 0x421354: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x421354u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_421358:
    // 0x421358: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x421358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_42135c:
    // 0x42135c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42135cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_421360:
    // 0x421360: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x421360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_421364:
    // 0x421364: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x421364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_421368:
    // 0x421368: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x421368u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_42136c:
    // 0x42136c: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x42136cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_421370:
    // 0x421370: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x421370u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_421374:
    // 0x421374: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x421374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_421378:
    // 0x421378: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x421378u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_42137c:
    // 0x42137c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x42137cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_421380:
    // 0x421380: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x421380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_421384:
    // 0x421384: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x421384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_421388:
    // 0x421388: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x421388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_42138c:
    // 0x42138c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x42138cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_421390:
    // 0x421390: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x421390u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_421394:
    // 0x421394: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x421394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_421398:
    // 0x421398: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x421398u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_42139c:
    // 0x42139c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x42139cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4213a0:
    // 0x4213a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4213a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4213a4:
    // 0x4213a4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4213a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4213a8:
    // 0x4213a8: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x4213a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_4213ac:
    // 0x4213ac: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4213acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4213b0:
    // 0x4213b0: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x4213b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_4213b4:
    // 0x4213b4: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x4213b4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_4213b8:
    // 0x4213b8: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x4213b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_4213bc:
    // 0x4213bc: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x4213bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4213c0:
    // 0x4213c0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4213c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4213c4:
    // 0x4213c4: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x4213c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_4213c8:
    // 0x4213c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4213c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4213cc:
    // 0x4213cc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4213ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4213d0:
    // 0x4213d0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4213d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_4213d4:
    // 0x4213d4: 0x11600040  beqz        $t3, . + 4 + (0x40 << 2)
label_4213d8:
    if (ctx->pc == 0x4213D8u) {
        ctx->pc = 0x4213D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4213D4u;
        // 0x4213d8: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4213DCu;
        goto label_4213dc;
    }
    ctx->pc = 0x4213D4u;
    {
        const bool branch_taken_0x4213d4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x4213D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4213D4u;
        // 0x4213d8: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4213d4) {
            ctx->pc = 0x4214D8u;
            goto label_4214d8;
        }
    }
    ctx->pc = 0x4213DCu;
label_4213dc:
    // 0x4213dc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x4213dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4213e0:
    // 0x4213e0: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x4213e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4213e4:
    // 0x4213e4: 0x0  nop
    ctx->pc = 0x4213e4u;
    // NOP
label_4213e8:
    // 0x4213e8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4213e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_4213ec:
    // 0x4213ec: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x4213ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_4213f0:
    // 0x4213f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4213f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4213f4:
    // 0x4213f4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4213f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4213f8:
    // 0x4213f8: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x4213f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_4213fc:
    // 0x4213fc: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4213fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_421400:
    // 0x421400: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x421400u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_421404:
    // 0x421404: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x421404u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_421408:
    // 0x421408: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x421408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_42140c:
    // 0x42140c: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x42140cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_421410:
    // 0x421410: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x421410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_421414:
    // 0x421414: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x421414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_421418:
    // 0x421418: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x421418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42141c:
    // 0x42141c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x42141cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_421420:
    // 0x421420: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x421420u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_421424:
    // 0x421424: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x421424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_421428:
    // 0x421428: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x421428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42142c:
    // 0x42142c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x42142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_421430:
    // 0x421430: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x421430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_421434:
    // 0x421434: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x421434u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_421438:
    // 0x421438: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x421438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_42143c:
    // 0x42143c: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x42143cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_421440:
    // 0x421440: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x421440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_421444:
    // 0x421444: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x421444u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_421448:
    // 0x421448: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x421448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_42144c:
    // 0x42144c: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x42144cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_421450:
    // 0x421450: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x421450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_421454:
    // 0x421454: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x421454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_421458:
    // 0x421458: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x421458u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_42145c:
    // 0x42145c: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x42145cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_421460:
    // 0x421460: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x421460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_421464:
    // 0x421464: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x421464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_421468:
    // 0x421468: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x421468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_42146c:
    // 0x42146c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x42146cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_421470:
    // 0x421470: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x421470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_421474:
    // 0x421474: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x421474u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_421478:
    // 0x421478: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x421478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_42147c:
    // 0x42147c: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x42147cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_421480:
    // 0x421480: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x421480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_421484:
    // 0x421484: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x421484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_421488:
    // 0x421488: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x421488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42148c:
    // 0x42148c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x42148cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_421490:
    // 0x421490: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x421490u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_421494:
    // 0x421494: 0x91220003  lbu         $v0, 0x3($t1)
    ctx->pc = 0x421494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_421498:
    // 0x421498: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x421498u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_42149c:
    // 0x42149c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42149cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4214a0:
    // 0x4214a0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4214a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4214a4:
    // 0x4214a4: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x4214a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_4214a8:
    // 0x4214a8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4214a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4214ac:
    // 0x4214ac: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x4214acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_4214b0:
    // 0x4214b0: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x4214b0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_4214b4:
    // 0x4214b4: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x4214b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_4214b8:
    // 0x4214b8: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x4214b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4214bc:
    // 0x4214bc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4214bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4214c0:
    // 0x4214c0: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x4214c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_4214c4:
    // 0x4214c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4214c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4214c8:
    // 0x4214c8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4214c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4214cc:
    // 0x4214cc: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4214ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4214d0:
    // 0x4214d0: 0x1560ffc5  bnez        $t3, . + 4 + (-0x3B << 2)
label_4214d4:
    if (ctx->pc == 0x4214D4u) {
        ctx->pc = 0x4214D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4214D0u;
        // 0x4214d4: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4214D8u;
        goto label_4214d8;
    }
    ctx->pc = 0x4214D0u;
    {
        const bool branch_taken_0x4214d0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4214D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4214D0u;
        // 0x4214d4: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4214d0) {
            ctx->pc = 0x4213E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4213e8;
        }
    }
    ctx->pc = 0x4214D8u;
label_4214d8:
    // 0x4214d8: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x4214d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_4214dc:
    // 0x4214dc: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x4214dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_4214e0:
    // 0x4214e0: 0x78102a  slt         $v0, $v1, $t8
    ctx->pc = 0x4214e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
label_4214e4:
    // 0x4214e4: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
label_4214e8:
    if (ctx->pc == 0x4214E8u) {
        ctx->pc = 0x4214E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4214E4u;
        // 0x4214e8: 0x1e0282d  daddu       $a1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4214ECu;
        goto label_4214ec;
    }
    ctx->pc = 0x4214E4u;
    {
        const bool branch_taken_0x4214e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4214E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4214E4u;
        // 0x4214e8: 0x1e0282d  daddu       $a1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4214e4) {
            ctx->pc = 0x4212D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4212d0;
        }
    }
    ctx->pc = 0x4214ECu;
label_4214ec:
    // 0x4214ec: 0x1000007d  b           . + 4 + (0x7D << 2)
label_4214f0:
    if (ctx->pc == 0x4214F0u) {
        ctx->pc = 0x4214F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4214ECu;
        // 0x4214f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4214F4u;
        goto label_4214f4;
    }
    ctx->pc = 0x4214ECu;
    {
        const bool branch_taken_0x4214ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4214F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4214ECu;
        // 0x4214f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4214ec) {
            ctx->pc = 0x4216E4u;
            goto label_4216e4;
        }
    }
    ctx->pc = 0x4214F4u;
label_4214f4:
    // 0x4214f4: 0x1b00007a  blez        $t8, . + 4 + (0x7A << 2)
label_4214f8:
    if (ctx->pc == 0x4214F8u) {
        ctx->pc = 0x4214F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4214F4u;
        // 0x4214f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4214FCu;
        goto label_4214fc;
    }
    ctx->pc = 0x4214F4u;
    {
        const bool branch_taken_0x4214f4 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x4214F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4214F4u;
        // 0x4214f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4214f4) {
            ctx->pc = 0x4216E0u;
            goto label_4216e0;
        }
    }
    ctx->pc = 0x4214FCu;
label_4214fc:
    // 0x4214fc: 0x0  nop
    ctx->pc = 0x4214fcu;
    // NOP
label_421500:
    // 0x421500: 0x246d0001  addiu       $t5, $v1, 0x1
    ctx->pc = 0x421500u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_421504:
    // 0x421504: 0x1307021  addu        $t6, $t1, $s0
    ctx->pc = 0x421504u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
label_421508:
    // 0x421508: 0x1980006e  blez        $t4, . + 4 + (0x6E << 2)
label_42150c:
    if (ctx->pc == 0x42150Cu) {
        ctx->pc = 0x42150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421508u;
        // 0x42150c: 0xb97821  addu        $t7, $a1, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421510u;
        goto label_421510;
    }
    ctx->pc = 0x421508u;
    {
        const bool branch_taken_0x421508 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x42150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421508u;
        // 0x42150c: 0xb97821  addu        $t7, $a1, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421508) {
            ctx->pc = 0x4216C4u;
            goto label_4216c4;
        }
    }
    ctx->pc = 0x421510u;
label_421510:
    // 0x421510: 0xc1023  negu        $v0, $t4
    ctx->pc = 0x421510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_421514:
    // 0x421514: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x421514u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_421518:
    // 0x421518: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x421518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_42151c:
    // 0x42151c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x42151cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_421520:
    // 0x421520: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_421524:
    if (ctx->pc == 0x421524u) {
        ctx->pc = 0x421524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421520u;
        // 0x421524: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421528u;
        goto label_421528;
    }
    ctx->pc = 0x421520u;
    {
        const bool branch_taken_0x421520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x421524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421520u;
        // 0x421524: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421520) {
            ctx->pc = 0x4215E8u;
            goto label_4215e8;
        }
    }
    ctx->pc = 0x421528u;
label_421528:
    // 0x421528: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x421528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_42152c:
    // 0x42152c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_421530:
    if (ctx->pc == 0x421530u) {
        ctx->pc = 0x421530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42152Cu;
        // 0x421530: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x421534u;
        goto label_421534;
    }
    ctx->pc = 0x42152Cu;
    {
        const bool branch_taken_0x42152c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42152Cu;
        // 0x421530: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42152c) {
            ctx->pc = 0x4215ACu;
            goto label_4215ac;
        }
    }
    ctx->pc = 0x421534u;
label_421534:
    // 0x421534: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_421538:
    if (ctx->pc == 0x421538u) {
        ctx->pc = 0x421538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421534u;
        // 0x421538: 0x90c20003  lbu         $v0, 0x3($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42153Cu;
        goto label_42153c;
    }
    ctx->pc = 0x421534u;
    {
        const bool branch_taken_0x421534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x421534) {
            ctx->pc = 0x421538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x421534u;
            // 0x421538: 0x90c20003  lbu         $v0, 0x3($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x421578u;
            goto label_421578;
        }
    }
    ctx->pc = 0x42153Cu;
label_42153c:
    // 0x42153c: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x42153cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_421540:
    // 0x421540: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x421540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_421544:
    // 0x421544: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x421544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_421548:
    // 0x421548: 0x25270004  addiu       $a3, $t1, 0x4
    ctx->pc = 0x421548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_42154c:
    // 0x42154c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x42154cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_421550:
    // 0x421550: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x421550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_421554:
    // 0x421554: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x421554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_421558:
    // 0x421558: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x421558u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_42155c:
    // 0x42155c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42155cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421560:
    // 0x421560: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x421560u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_421564:
    // 0x421564: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x421564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_421568:
    // 0x421568: 0x258bffff  addiu       $t3, $t4, -0x1
    ctx->pc = 0x421568u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_42156c:
    // 0x42156c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x42156cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_421570:
    // 0x421570: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x421570u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_421574:
    // 0x421574: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x421574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_421578:
    // 0x421578: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x421578u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_42157c:
    // 0x42157c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x42157cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_421580:
    // 0x421580: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x421580u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_421584:
    // 0x421584: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x421584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_421588:
    // 0x421588: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x421588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_42158c:
    // 0x42158c: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x42158cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_421590:
    // 0x421590: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x421590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421594:
    // 0x421594: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x421594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_421598:
    // 0x421598: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x421598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_42159c:
    // 0x42159c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x42159cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4215a0:
    // 0x4215a0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4215a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4215a4:
    // 0x4215a4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4215a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4215a8:
    // 0x4215a8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4215a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4215ac:
    // 0x4215ac: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x4215acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_4215b0:
    // 0x4215b0: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x4215b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_4215b4:
    // 0x4215b4: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x4215b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4215b8:
    // 0x4215b8: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x4215b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_4215bc:
    // 0x4215bc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4215bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4215c0:
    // 0x4215c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4215c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4215c4:
    // 0x4215c4: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x4215c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_4215c8:
    // 0x4215c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4215c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4215cc:
    // 0x4215cc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4215ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_4215d0:
    // 0x4215d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4215d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4215d4:
    // 0x4215d4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4215d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4215d8:
    // 0x4215d8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4215d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4215dc:
    // 0x4215dc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4215dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4215e0:
    // 0x4215e0: 0x11600038  beqz        $t3, . + 4 + (0x38 << 2)
label_4215e4:
    if (ctx->pc == 0x4215E4u) {
        ctx->pc = 0x4215E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4215E0u;
        // 0x4215e4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4215E8u;
        goto label_4215e8;
    }
    ctx->pc = 0x4215E0u;
    {
        const bool branch_taken_0x4215e0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x4215E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4215E0u;
        // 0x4215e4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4215e0) {
            ctx->pc = 0x4216C4u;
            goto label_4216c4;
        }
    }
    ctx->pc = 0x4215E8u;
label_4215e8:
    // 0x4215e8: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x4215e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4215ec:
    // 0x4215ec: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4215ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4215f0:
    // 0x4215f0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4215f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4215f4:
    // 0x4215f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4215f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4215f8:
    // 0x4215f8: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x4215f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_4215fc:
    // 0x4215fc: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x4215fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_421600:
    // 0x421600: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x421600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_421604:
    // 0x421604: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x421604u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_421608:
    // 0x421608: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x421608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_42160c:
    // 0x42160c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x42160cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_421610:
    // 0x421610: 0x90c50002  lbu         $a1, 0x2($a2)
    ctx->pc = 0x421610u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_421614:
    // 0x421614: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x421614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_421618:
    // 0x421618: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x421618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_42161c:
    // 0x42161c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42161cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_421620:
    // 0x421620: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x421620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_421624:
    // 0x421624: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x421624u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_421628:
    // 0x421628: 0x90e20007  lbu         $v0, 0x7($a3)
    ctx->pc = 0x421628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_42162c:
    // 0x42162c: 0x91030004  lbu         $v1, 0x4($t0)
    ctx->pc = 0x42162cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_421630:
    // 0x421630: 0x91240005  lbu         $a0, 0x5($t1)
    ctx->pc = 0x421630u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
label_421634:
    // 0x421634: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x421634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_421638:
    // 0x421638: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x421638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_42163c:
    // 0x42163c: 0x90c50006  lbu         $a1, 0x6($a2)
    ctx->pc = 0x42163cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
label_421640:
    // 0x421640: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x421640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421644:
    // 0x421644: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x421644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_421648:
    // 0x421648: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x421648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_42164c:
    // 0x42164c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x42164cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_421650:
    // 0x421650: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x421650u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
label_421654:
    // 0x421654: 0x90e3000b  lbu         $v1, 0xB($a3)
    ctx->pc = 0x421654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
label_421658:
    // 0x421658: 0x91020008  lbu         $v0, 0x8($t0)
    ctx->pc = 0x421658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
label_42165c:
    // 0x42165c: 0x91240009  lbu         $a0, 0x9($t1)
    ctx->pc = 0x42165cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 9)));
label_421660:
    // 0x421660: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x421660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_421664:
    // 0x421664: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x421664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_421668:
    // 0x421668: 0x90c5000a  lbu         $a1, 0xA($a2)
    ctx->pc = 0x421668u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
label_42166c:
    // 0x42166c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x42166cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_421670:
    // 0x421670: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x421670u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_421674:
    // 0x421674: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x421674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_421678:
    // 0x421678: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x421678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_42167c:
    // 0x42167c: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x42167cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
label_421680:
    // 0x421680: 0x90e2000f  lbu         $v0, 0xF($a3)
    ctx->pc = 0x421680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 15)));
label_421684:
    // 0x421684: 0x9103000c  lbu         $v1, 0xC($t0)
    ctx->pc = 0x421684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
label_421688:
    // 0x421688: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x421688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_42168c:
    // 0x42168c: 0x9124000d  lbu         $a0, 0xD($t1)
    ctx->pc = 0x42168cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13)));
label_421690:
    // 0x421690: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x421690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_421694:
    // 0x421694: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x421694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_421698:
    // 0x421698: 0x90c5000e  lbu         $a1, 0xE($a2)
    ctx->pc = 0x421698u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 14)));
label_42169c:
    // 0x42169c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42169cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4216a0:
    // 0x4216a0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4216a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_4216a4:
    // 0x4216a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4216a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4216a8:
    // 0x4216a8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4216a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_4216ac:
    // 0x4216ac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4216acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4216b0:
    // 0x4216b0: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x4216b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_4216b4:
    // 0x4216b4: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x4216b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
label_4216b8:
    // 0x4216b8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4216b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_4216bc:
    // 0x4216bc: 0x1560ffce  bnez        $t3, . + 4 + (-0x32 << 2)
label_4216c0:
    if (ctx->pc == 0x4216C0u) {
        ctx->pc = 0x4216C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216BCu;
        // 0x4216c0: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4216C4u;
        goto label_4216c4;
    }
    ctx->pc = 0x4216BCu;
    {
        const bool branch_taken_0x4216bc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4216C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216BCu;
        // 0x4216c0: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4216bc) {
            ctx->pc = 0x4215F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4215f8;
        }
    }
    ctx->pc = 0x4216C4u;
label_4216c4:
    // 0x4216c4: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x4216c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_4216c8:
    // 0x4216c8: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x4216c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_4216cc:
    // 0x4216cc: 0x78102a  slt         $v0, $v1, $t8
    ctx->pc = 0x4216ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
label_4216d0:
    // 0x4216d0: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
label_4216d4:
    if (ctx->pc == 0x4216D4u) {
        ctx->pc = 0x4216D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216D0u;
        // 0x4216d4: 0x1e0282d  daddu       $a1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4216D8u;
        goto label_4216d8;
    }
    ctx->pc = 0x4216D0u;
    {
        const bool branch_taken_0x4216d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4216D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216D0u;
        // 0x4216d4: 0x1e0282d  daddu       $a1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4216d0) {
            ctx->pc = 0x421500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421500;
        }
    }
    ctx->pc = 0x4216D8u;
label_4216d8:
    // 0x4216d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_4216dc:
    if (ctx->pc == 0x4216DCu) {
        ctx->pc = 0x4216DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216D8u;
        // 0x4216dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4216E0u;
        goto label_4216e0;
    }
    ctx->pc = 0x4216D8u;
    {
        const bool branch_taken_0x4216d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4216DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216D8u;
        // 0x4216dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4216d8) {
            ctx->pc = 0x4216E4u;
            goto label_4216e4;
        }
    }
    ctx->pc = 0x4216E0u;
label_4216e0:
    // 0x4216e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4216e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4216e4:
    // 0x4216e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4216e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4216e8:
    // 0x4216e8: 0x3e00008  jr          $ra
label_4216ec:
    if (ctx->pc == 0x4216ECu) {
        ctx->pc = 0x4216ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216E8u;
        // 0x4216ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4216F0u;
        goto label_4216f0;
    }
    ctx->pc = 0x4216E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4216ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4216E8u;
        // 0x4216ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4216E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4216F0u;
label_4216f0:
    // 0x4216f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4216f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4216f4:
    // 0x4216f4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4216f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4216f8:
    // 0x4216f8: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x4216f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
label_4216fc:
    // 0x4216fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4216fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_421700:
    // 0x421700: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x421700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_421704:
    // 0x421704: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x421704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_421708:
    // 0x421708: 0x8cd00010  lw          $s0, 0x10($a2)
    ctx->pc = 0x421708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_42170c:
    // 0x42170c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x42170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_421710:
    // 0x421710: 0x8cce0004  lw          $t6, 0x4($a2)
    ctx->pc = 0x421710u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_421714:
    // 0x421714: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x421714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_421718:
    // 0x421718: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_42171c:
    if (ctx->pc == 0x42171Cu) {
        ctx->pc = 0x42171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421718u;
        // 0x42171c: 0x8cc40014  lw          $a0, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421720u;
        goto label_421720;
    }
    ctx->pc = 0x421718u;
    {
        const bool branch_taken_0x421718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421718u;
        // 0x42171c: 0x8cc40014  lw          $a0, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421718) {
            ctx->pc = 0x421750u;
            goto label_421750;
        }
    }
    ctx->pc = 0x421720u;
label_421720:
    // 0x421720: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x421720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_421724:
    // 0x421724: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_421728:
    if (ctx->pc == 0x421728u) {
        ctx->pc = 0x421728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421724u;
        // 0x421728: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42172Cu;
        goto label_42172c;
    }
    ctx->pc = 0x421724u;
    {
        const bool branch_taken_0x421724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421724u;
        // 0x421728: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421724) {
            ctx->pc = 0x42173Cu;
            goto label_42173c;
        }
    }
    ctx->pc = 0x42172Cu;
label_42172c:
    // 0x42172c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_421730:
    if (ctx->pc == 0x421730u) {
        ctx->pc = 0x421730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42172Cu;
        // 0x421730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421734u;
        goto label_421734;
    }
    ctx->pc = 0x42172Cu;
    {
        const bool branch_taken_0x42172c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x421730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42172Cu;
        // 0x421730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42172c) {
            ctx->pc = 0x421750u;
            goto label_421750;
        }
    }
    ctx->pc = 0x421734u;
label_421734:
    // 0x421734: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_421738:
    if (ctx->pc == 0x421738u) {
        ctx->pc = 0x421738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421734u;
        // 0x421738: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42173Cu;
        goto label_42173c;
    }
    ctx->pc = 0x421734u;
    {
        const bool branch_taken_0x421734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421734u;
        // 0x421738: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421734) {
            ctx->pc = 0x421B04u;
            goto label_421b04;
        }
    }
    ctx->pc = 0x42173Cu;
label_42173c:
    // 0x42173c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x42173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_421740:
    // 0x421740: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
label_421744:
    if (ctx->pc == 0x421744u) {
        ctx->pc = 0x421744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421740u;
        // 0x421744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421748u;
        goto label_421748;
    }
    ctx->pc = 0x421740u;
    {
        const bool branch_taken_0x421740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x421744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421740u;
        // 0x421744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421740) {
            ctx->pc = 0x42194Cu;
            goto label_42194c;
        }
    }
    ctx->pc = 0x421748u;
label_421748:
    // 0x421748: 0x100000ee  b           . + 4 + (0xEE << 2)
label_42174c:
    if (ctx->pc == 0x42174Cu) {
        ctx->pc = 0x42174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421748u;
        // 0x42174c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421750u;
        goto label_421750;
    }
    ctx->pc = 0x421748u;
    {
        const bool branch_taken_0x421748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421748u;
        // 0x42174c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421748) {
            ctx->pc = 0x421B04u;
            goto label_421b04;
        }
    }
    ctx->pc = 0x421750u;
label_421750:
    // 0x421750: 0x8cc60018  lw          $a2, 0x18($a2)
    ctx->pc = 0x421750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_421754:
    // 0x421754: 0x18a000e9  blez        $a1, . + 4 + (0xE9 << 2)
label_421758:
    if (ctx->pc == 0x421758u) {
        ctx->pc = 0x421758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421754u;
        // 0x421758: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42175Cu;
        goto label_42175c;
    }
    ctx->pc = 0x421754u;
    {
        const bool branch_taken_0x421754 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x421758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421754u;
        // 0x421758: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421754) {
            ctx->pc = 0x421AFCu;
            goto label_421afc;
        }
    }
    ctx->pc = 0x42175Cu;
label_42175c:
    // 0x42175c: 0x0  nop
    ctx->pc = 0x42175cu;
    // NOP
label_421760:
    // 0x421760: 0x24780001  addiu       $t8, $v1, 0x1
    ctx->pc = 0x421760u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_421764:
    // 0x421764: 0x151c821  addu        $t9, $t2, $s1
    ctx->pc = 0x421764u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
label_421768:
    // 0x421768: 0x19c00071  blez        $t6, . + 4 + (0x71 << 2)
label_42176c:
    if (ctx->pc == 0x42176Cu) {
        ctx->pc = 0x42176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421768u;
        // 0x42176c: 0x907821  addu        $t7, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421770u;
        goto label_421770;
    }
    ctx->pc = 0x421768u;
    {
        const bool branch_taken_0x421768 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x42176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421768u;
        // 0x42176c: 0x907821  addu        $t7, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421768) {
            ctx->pc = 0x421930u;
            goto label_421930;
        }
    }
    ctx->pc = 0x421770u;
label_421770:
    // 0x421770: 0xe1023  negu        $v0, $t6
    ctx->pc = 0x421770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
label_421774:
    // 0x421774: 0x3c0dff00  lui         $t5, 0xFF00
    ctx->pc = 0x421774u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65280 << 16));
label_421778:
    // 0x421778: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x421778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_42177c:
    // 0x42177c: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x42177cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_421780:
    // 0x421780: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x421780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_421784:
    // 0x421784: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_421788:
    if (ctx->pc == 0x421788u) {
        ctx->pc = 0x421788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421784u;
        // 0x421788: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42178Cu;
        goto label_42178c;
    }
    ctx->pc = 0x421784u;
    {
        const bool branch_taken_0x421784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x421788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421784u;
        // 0x421788: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421784) {
            ctx->pc = 0x421858u;
            goto label_421858;
        }
    }
    ctx->pc = 0x42178Cu;
label_42178c:
    // 0x42178c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x42178cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_421790:
    // 0x421790: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_421794:
    if (ctx->pc == 0x421794u) {
        ctx->pc = 0x421794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421790u;
        // 0x421794: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x421798u;
        goto label_421798;
    }
    ctx->pc = 0x421790u;
    {
        const bool branch_taken_0x421790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421790u;
        // 0x421794: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x421790) {
            ctx->pc = 0x421818u;
            goto label_421818;
        }
    }
    ctx->pc = 0x421798u;
label_421798:
    // 0x421798: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_42179c:
    if (ctx->pc == 0x42179Cu) {
        ctx->pc = 0x42179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421798u;
        // 0x42179c: 0x91220000  lbu         $v0, 0x0($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4217A0u;
        goto label_4217a0;
    }
    ctx->pc = 0x421798u;
    {
        const bool branch_taken_0x421798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x421798) {
            ctx->pc = 0x42179Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x421798u;
            // 0x42179c: 0x91220000  lbu         $v0, 0x0($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4217E0u;
            goto label_4217e0;
        }
    }
    ctx->pc = 0x4217A0u;
label_4217a0:
    // 0x4217a0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4217a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4217a4:
    // 0x4217a4: 0x24890001  addiu       $t1, $a0, 0x1
    ctx->pc = 0x4217a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4217a8:
    // 0x4217a8: 0x254b0004  addiu       $t3, $t2, 0x4
    ctx->pc = 0x4217a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_4217ac:
    // 0x4217ac: 0x25ccffff  addiu       $t4, $t6, -0x1
    ctx->pc = 0x4217acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_4217b0:
    // 0x4217b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4217b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4217b4:
    // 0x4217b4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4217b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4217b8:
    // 0x4217b8: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x4217b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_4217bc:
    // 0x4217bc: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4217bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4217c0:
    // 0x4217c0: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x4217c0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4217c4:
    // 0x4217c4: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x4217c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_4217c8:
    // 0x4217c8: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x4217c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4217cc:
    // 0x4217cc: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x4217ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
label_4217d0:
    // 0x4217d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4217d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4217d4:
    // 0x4217d4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4217d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_4217d8:
    // 0x4217d8: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4217d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_4217dc:
    // 0x4217dc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4217dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_4217e0:
    // 0x4217e0: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x4217e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_4217e4:
    // 0x4217e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4217e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4217e8:
    // 0x4217e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4217e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4217ec:
    // 0x4217ec: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4217ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4217f0:
    // 0x4217f0: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x4217f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_4217f4:
    // 0x4217f4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4217f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4217f8:
    // 0x4217f8: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x4217f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4217fc:
    // 0x4217fc: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x4217fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_421800:
    // 0x421800: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x421800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_421804:
    // 0x421804: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x421804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
label_421808:
    // 0x421808: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x421808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42180c:
    // 0x42180c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x42180cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_421810:
    // 0x421810: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x421810u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_421814:
    // 0x421814: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x421814u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_421818:
    // 0x421818: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x421818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_42181c:
    // 0x42181c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x42181cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_421820:
    // 0x421820: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x421820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_421824:
    // 0x421824: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x421824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_421828:
    // 0x421828: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x421828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_42182c:
    // 0x42182c: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x42182cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_421830:
    // 0x421830: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x421830u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_421834:
    // 0x421834: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x421834u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_421838:
    // 0x421838: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x421838u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_42183c:
    // 0x42183c: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x42183cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_421840:
    // 0x421840: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x421840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
label_421844:
    // 0x421844: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x421844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_421848:
    // 0x421848: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x421848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_42184c:
    // 0x42184c: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x42184cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_421850:
    // 0x421850: 0x11800037  beqz        $t4, . + 4 + (0x37 << 2)
label_421854:
    if (ctx->pc == 0x421854u) {
        ctx->pc = 0x421854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421850u;
        // 0x421854: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421858u;
        goto label_421858;
    }
    ctx->pc = 0x421850u;
    {
        const bool branch_taken_0x421850 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x421854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421850u;
        // 0x421854: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421850) {
            ctx->pc = 0x421930u;
            goto label_421930;
        }
    }
    ctx->pc = 0x421858u;
label_421858:
    // 0x421858: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x421858u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_42185c:
    // 0x42185c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x42185cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_421860:
    // 0x421860: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x421860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_421864:
    // 0x421864: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x421864u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
label_421868:
    // 0x421868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x421868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42186c:
    // 0x42186c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x42186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_421870:
    // 0x421870: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x421870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_421874:
    // 0x421874: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x421874u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_421878:
    // 0x421878: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x421878u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_42187c:
    // 0x42187c: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x42187cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_421880:
    // 0x421880: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x421880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_421884:
    // 0x421884: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x421884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
label_421888:
    // 0x421888: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x421888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42188c:
    // 0x42188c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x42188cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_421890:
    // 0x421890: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x421890u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_421894:
    // 0x421894: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x421894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
label_421898:
    // 0x421898: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x421898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42189c:
    // 0x42189c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x42189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4218a0:
    // 0x4218a0: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x4218a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_4218a4:
    // 0x4218a4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4218a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4218a8:
    // 0x4218a8: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x4218a8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4218ac:
    // 0x4218ac: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x4218acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_4218b0:
    // 0x4218b0: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x4218b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4218b4:
    // 0x4218b4: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x4218b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
label_4218b8:
    // 0x4218b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4218b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4218bc:
    // 0x4218bc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4218bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_4218c0:
    // 0x4218c0: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x4218c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
label_4218c4:
    // 0x4218c4: 0x91420002  lbu         $v0, 0x2($t2)
    ctx->pc = 0x4218c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
label_4218c8:
    // 0x4218c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4218c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4218cc:
    // 0x4218cc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4218ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4218d0:
    // 0x4218d0: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x4218d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_4218d4:
    // 0x4218d4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4218d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4218d8:
    // 0x4218d8: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x4218d8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4218dc:
    // 0x4218dc: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x4218dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_4218e0:
    // 0x4218e0: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x4218e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_4218e4:
    // 0x4218e4: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x4218e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
label_4218e8:
    // 0x4218e8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4218e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4218ec:
    // 0x4218ec: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4218ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_4218f0:
    // 0x4218f0: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x4218f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_4218f4:
    // 0x4218f4: 0x91420003  lbu         $v0, 0x3($t2)
    ctx->pc = 0x4218f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
label_4218f8:
    // 0x4218f8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x4218f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_4218fc:
    // 0x4218fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4218fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_421900:
    // 0x421900: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x421900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_421904:
    // 0x421904: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x421904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_421908:
    // 0x421908: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x421908u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_42190c:
    // 0x42190c: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x42190cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_421910:
    // 0x421910: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x421910u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_421914:
    // 0x421914: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x421914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_421918:
    // 0x421918: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x421918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
label_42191c:
    // 0x42191c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x42191cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_421920:
    // 0x421920: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x421920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_421924:
    // 0x421924: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x421924u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
label_421928:
    // 0x421928: 0x1580ffcd  bnez        $t4, . + 4 + (-0x33 << 2)
label_42192c:
    if (ctx->pc == 0x42192Cu) {
        ctx->pc = 0x42192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421928u;
        // 0x42192c: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421930u;
        goto label_421930;
    }
    ctx->pc = 0x421928u;
    {
        const bool branch_taken_0x421928 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x42192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421928u;
        // 0x42192c: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421928) {
            ctx->pc = 0x421860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421860;
        }
    }
    ctx->pc = 0x421930u;
label_421930:
    // 0x421930: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x421930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_421934:
    // 0x421934: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x421934u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_421938:
    // 0x421938: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x421938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_42193c:
    // 0x42193c: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
label_421940:
    if (ctx->pc == 0x421940u) {
        ctx->pc = 0x421940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42193Cu;
        // 0x421940: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421944u;
        goto label_421944;
    }
    ctx->pc = 0x42193Cu;
    {
        const bool branch_taken_0x42193c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x421940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42193Cu;
        // 0x421940: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42193c) {
            ctx->pc = 0x421760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421760;
        }
    }
    ctx->pc = 0x421944u;
label_421944:
    // 0x421944: 0x1000006e  b           . + 4 + (0x6E << 2)
label_421948:
    if (ctx->pc == 0x421948u) {
        ctx->pc = 0x421948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421944u;
        // 0x421948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42194Cu;
        goto label_42194c;
    }
    ctx->pc = 0x421944u;
    {
        const bool branch_taken_0x421944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421944u;
        // 0x421948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421944) {
            ctx->pc = 0x421B00u;
            goto label_421b00;
        }
    }
    ctx->pc = 0x42194Cu;
label_42194c:
    // 0x42194c: 0x18a0006b  blez        $a1, . + 4 + (0x6B << 2)
label_421950:
    if (ctx->pc == 0x421950u) {
        ctx->pc = 0x421950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42194Cu;
        // 0x421950: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421954u;
        goto label_421954;
    }
    ctx->pc = 0x42194Cu;
    {
        const bool branch_taken_0x42194c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x421950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42194Cu;
        // 0x421950: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42194c) {
            ctx->pc = 0x421AFCu;
            goto label_421afc;
        }
    }
    ctx->pc = 0x421954u;
label_421954:
    // 0x421954: 0x0  nop
    ctx->pc = 0x421954u;
    // NOP
label_421958:
    // 0x421958: 0x24780001  addiu       $t8, $v1, 0x1
    ctx->pc = 0x421958u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_42195c:
    // 0x42195c: 0x151c821  addu        $t9, $t2, $s1
    ctx->pc = 0x42195cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
label_421960:
    // 0x421960: 0x19c0005f  blez        $t6, . + 4 + (0x5F << 2)
label_421964:
    if (ctx->pc == 0x421964u) {
        ctx->pc = 0x421964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421960u;
        // 0x421964: 0x907821  addu        $t7, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421968u;
        goto label_421968;
    }
    ctx->pc = 0x421960u;
    {
        const bool branch_taken_0x421960 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x421964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421960u;
        // 0x421964: 0x907821  addu        $t7, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421960) {
            ctx->pc = 0x421AE0u;
            goto label_421ae0;
        }
    }
    ctx->pc = 0x421968u;
label_421968:
    // 0x421968: 0xe1023  negu        $v0, $t6
    ctx->pc = 0x421968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
label_42196c:
    // 0x42196c: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x42196cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
label_421970:
    // 0x421970: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x421970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_421974:
    // 0x421974: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x421974u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_421978:
    // 0x421978: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x421978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42197c:
    // 0x42197c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_421980:
    if (ctx->pc == 0x421980u) {
        ctx->pc = 0x421980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42197Cu;
        // 0x421980: 0x140382d  daddu       $a3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421984u;
        goto label_421984;
    }
    ctx->pc = 0x42197Cu;
    {
        const bool branch_taken_0x42197c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x421980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42197Cu;
        // 0x421980: 0x140382d  daddu       $a3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42197c) {
            ctx->pc = 0x421A2Cu;
            goto label_421a2c;
        }
    }
    ctx->pc = 0x421984u;
label_421984:
    // 0x421984: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x421984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_421988:
    // 0x421988: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_42198c:
    if (ctx->pc == 0x42198Cu) {
        ctx->pc = 0x42198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421988u;
        // 0x42198c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x421990u;
        goto label_421990;
    }
    ctx->pc = 0x421988u;
    {
        const bool branch_taken_0x421988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421988u;
        // 0x42198c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x421988) {
            ctx->pc = 0x4219F8u;
            goto label_4219f8;
        }
    }
    ctx->pc = 0x421990u;
label_421990:
    // 0x421990: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_421994:
    if (ctx->pc == 0x421994u) {
        ctx->pc = 0x421994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421990u;
        // 0x421994: 0x90c20001  lbu         $v0, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421998u;
        goto label_421998;
    }
    ctx->pc = 0x421990u;
    {
        const bool branch_taken_0x421990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x421990) {
            ctx->pc = 0x421994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x421990u;
            // 0x421994: 0x90c20001  lbu         $v0, 0x1($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4219CCu;
            goto label_4219cc;
        }
    }
    ctx->pc = 0x421998u;
label_421998:
    // 0x421998: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x421998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_42199c:
    // 0x42199c: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x42199cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4219a0:
    // 0x4219a0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4219a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4219a4:
    // 0x4219a4: 0x25470004  addiu       $a3, $t2, 0x4
    ctx->pc = 0x4219a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_4219a8:
    // 0x4219a8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4219a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_4219ac:
    // 0x4219ac: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x4219acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_4219b0:
    // 0x4219b0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4219b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4219b4:
    // 0x4219b4: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4219b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_4219b8:
    // 0x4219b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4219b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4219bc:
    // 0x4219bc: 0x25ccffff  addiu       $t4, $t6, -0x1
    ctx->pc = 0x4219bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_4219c0:
    // 0x4219c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4219c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4219c4:
    // 0x4219c4: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4219c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_4219c8:
    // 0x4219c8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x4219c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_4219cc:
    // 0x4219cc: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x4219ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_4219d0:
    // 0x4219d0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x4219d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4219d4:
    // 0x4219d4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4219d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_4219d8:
    // 0x4219d8: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x4219d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_4219dc:
    // 0x4219dc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4219dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4219e0:
    // 0x4219e0: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x4219e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_4219e4:
    // 0x4219e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4219e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4219e8:
    // 0x4219e8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4219e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4219ec:
    // 0x4219ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4219ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4219f0:
    // 0x4219f0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4219f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4219f4:
    // 0x4219f4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4219f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4219f8:
    // 0x4219f8: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x4219f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_4219fc:
    // 0x4219fc: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x4219fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_421a00:
    // 0x421a00: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x421a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_421a04:
    // 0x421a04: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x421a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_421a08:
    // 0x421a08: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x421a08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_421a0c:
    // 0x421a0c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x421a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_421a10:
    // 0x421a10: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x421a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
label_421a14:
    // 0x421a14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x421a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_421a18:
    // 0x421a18: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x421a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_421a1c:
    // 0x421a1c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x421a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_421a20:
    // 0x421a20: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x421a20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_421a24:
    // 0x421a24: 0x1180002e  beqz        $t4, . + 4 + (0x2E << 2)
label_421a28:
    if (ctx->pc == 0x421A28u) {
        ctx->pc = 0x421A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A24u;
        // 0x421a28: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421A2Cu;
        goto label_421a2c;
    }
    ctx->pc = 0x421A24u;
    {
        const bool branch_taken_0x421a24 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x421A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421A24u;
        // 0x421a28: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421a24) {
            ctx->pc = 0x421AE0u;
            goto label_421ae0;
        }
    }
    ctx->pc = 0x421A2Cu;
label_421a2c:
    // 0x421a2c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x421a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_421a30:
    // 0x421a30: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x421a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_421a34:
    // 0x421a34: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x421a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_421a38:
    // 0x421a38: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x421a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_421a3c:
    // 0x421a3c: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x421a3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
label_421a40:
    // 0x421a40: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x421a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_421a44:
    // 0x421a44: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x421a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_421a48:
    // 0x421a48: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x421a48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_421a4c:
    // 0x421a4c: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x421a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_421a50:
    // 0x421a50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x421a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_421a54:
    // 0x421a54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x421a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421a58:
    // 0x421a58: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x421a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_421a5c:
    // 0x421a5c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x421a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_421a60:
    // 0x421a60: 0x91030005  lbu         $v1, 0x5($t0)
    ctx->pc = 0x421a60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
label_421a64:
    // 0x421a64: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x421a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_421a68:
    // 0x421a68: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x421a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_421a6c:
    // 0x421a6c: 0x90c40006  lbu         $a0, 0x6($a2)
    ctx->pc = 0x421a6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
label_421a70:
    // 0x421a70: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x421a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_421a74:
    // 0x421a74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x421a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_421a78:
    // 0x421a78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x421a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421a7c:
    // 0x421a7c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x421a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_421a80:
    // 0x421a80: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x421a80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
label_421a84:
    // 0x421a84: 0x91030009  lbu         $v1, 0x9($t0)
    ctx->pc = 0x421a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
label_421a88:
    // 0x421a88: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x421a88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_421a8c:
    // 0x421a8c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x421a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_421a90:
    // 0x421a90: 0x90c4000a  lbu         $a0, 0xA($a2)
    ctx->pc = 0x421a90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
label_421a94:
    // 0x421a94: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x421a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_421a98:
    // 0x421a98: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x421a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_421a9c:
    // 0x421a9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x421a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421aa0:
    // 0x421aa0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x421aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_421aa4:
    // 0x421aa4: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x421aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_421aa8:
    // 0x421aa8: 0x9103000d  lbu         $v1, 0xD($t0)
    ctx->pc = 0x421aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
label_421aac:
    // 0x421aac: 0x90e2000c  lbu         $v0, 0xC($a3)
    ctx->pc = 0x421aacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
label_421ab0:
    // 0x421ab0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x421ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_421ab4:
    // 0x421ab4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x421ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_421ab8:
    // 0x421ab8: 0x90c4000e  lbu         $a0, 0xE($a2)
    ctx->pc = 0x421ab8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 14)));
label_421abc:
    // 0x421abc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x421abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_421ac0:
    // 0x421ac0: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x421ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_421ac4:
    // 0x421ac4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x421ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421ac8:
    // 0x421ac8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x421ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_421acc:
    // 0x421acc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x421accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_421ad0:
    // 0x421ad0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x421ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_421ad4:
    // 0x421ad4: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x421ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
label_421ad8:
    // 0x421ad8: 0x1580ffd7  bnez        $t4, . + 4 + (-0x29 << 2)
label_421adc:
    if (ctx->pc == 0x421ADCu) {
        ctx->pc = 0x421ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421AD8u;
        // 0x421adc: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421AE0u;
        goto label_421ae0;
    }
    ctx->pc = 0x421AD8u;
    {
        const bool branch_taken_0x421ad8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x421ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421AD8u;
        // 0x421adc: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421ad8) {
            ctx->pc = 0x421A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421a38;
        }
    }
    ctx->pc = 0x421AE0u;
label_421ae0:
    // 0x421ae0: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x421ae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_421ae4:
    // 0x421ae4: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x421ae4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_421ae8:
    // 0x421ae8: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x421ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_421aec:
    // 0x421aec: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
label_421af0:
    if (ctx->pc == 0x421AF0u) {
        ctx->pc = 0x421AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421AECu;
        // 0x421af0: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421AF4u;
        goto label_421af4;
    }
    ctx->pc = 0x421AECu;
    {
        const bool branch_taken_0x421aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x421AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421AECu;
        // 0x421af0: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421aec) {
            ctx->pc = 0x421958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421958;
        }
    }
    ctx->pc = 0x421AF4u;
label_421af4:
    // 0x421af4: 0x10000002  b           . + 4 + (0x2 << 2)
label_421af8:
    if (ctx->pc == 0x421AF8u) {
        ctx->pc = 0x421AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421AF4u;
        // 0x421af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421AFCu;
        goto label_421afc;
    }
    ctx->pc = 0x421AF4u;
    {
        const bool branch_taken_0x421af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421AF4u;
        // 0x421af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421af4) {
            ctx->pc = 0x421B00u;
            goto label_421b00;
        }
    }
    ctx->pc = 0x421AFCu;
label_421afc:
    // 0x421afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x421afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_421b00:
    // 0x421b00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x421b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_421b04:
    // 0x421b04: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x421b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_421b08:
    // 0x421b08: 0x3e00008  jr          $ra
label_421b0c:
    if (ctx->pc == 0x421B0Cu) {
        ctx->pc = 0x421B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B08u;
        // 0x421b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B10u;
        goto label_421b10;
    }
    ctx->pc = 0x421B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B08u;
        // 0x421b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x421B10u;
label_421b10:
    // 0x421b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x421b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_421b14:
    // 0x421b14: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x421b14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_421b18:
    // 0x421b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x421b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_421b1c:
    // 0x421b1c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x421b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_421b20:
    // 0x421b20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x421b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_421b24:
    // 0x421b24: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x421b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_421b28:
    // 0x421b28: 0x8ccc0004  lw          $t4, 0x4($a2)
    ctx->pc = 0x421b28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_421b2c:
    // 0x421b2c: 0x8cd80008  lw          $t8, 0x8($a2)
    ctx->pc = 0x421b2cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_421b30:
    // 0x421b30: 0x8cd90010  lw          $t9, 0x10($a2)
    ctx->pc = 0x421b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_421b34:
    // 0x421b34: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_421b38:
    if (ctx->pc == 0x421B38u) {
        ctx->pc = 0x421B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B34u;
        // 0x421b38: 0x8cc70014  lw          $a3, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B3Cu;
        goto label_421b3c;
    }
    ctx->pc = 0x421B34u;
    {
        const bool branch_taken_0x421b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x421B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B34u;
        // 0x421b38: 0x8cc70014  lw          $a3, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421b34) {
            ctx->pc = 0x421B6Cu;
            goto label_421b6c;
        }
    }
    ctx->pc = 0x421B3Cu;
label_421b3c:
    // 0x421b3c: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x421b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_421b40:
    // 0x421b40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_421b44:
    if (ctx->pc == 0x421B44u) {
        ctx->pc = 0x421B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B40u;
        // 0x421b44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B48u;
        goto label_421b48;
    }
    ctx->pc = 0x421B40u;
    {
        const bool branch_taken_0x421b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B40u;
        // 0x421b44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421b40) {
            ctx->pc = 0x421B58u;
            goto label_421b58;
        }
    }
    ctx->pc = 0x421B48u;
label_421b48:
    // 0x421b48: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_421b4c:
    if (ctx->pc == 0x421B4Cu) {
        ctx->pc = 0x421B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B48u;
        // 0x421b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B50u;
        goto label_421b50;
    }
    ctx->pc = 0x421B48u;
    {
        const bool branch_taken_0x421b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x421B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B48u;
        // 0x421b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421b48) {
            ctx->pc = 0x421B6Cu;
            goto label_421b6c;
        }
    }
    ctx->pc = 0x421B50u;
label_421b50:
    // 0x421b50: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_421b54:
    if (ctx->pc == 0x421B54u) {
        ctx->pc = 0x421B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B50u;
        // 0x421b54: 0x7bb00000  lq          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B58u;
        goto label_421b58;
    }
    ctx->pc = 0x421B50u;
    {
        const bool branch_taken_0x421b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B50u;
        // 0x421b54: 0x7bb00000  lq          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421b50) {
            ctx->pc = 0x421EF8u;
            goto label_421ef8;
        }
    }
    ctx->pc = 0x421B58u;
label_421b58:
    // 0x421b58: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x421b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_421b5c:
    // 0x421b5c: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
label_421b60:
    if (ctx->pc == 0x421B60u) {
        ctx->pc = 0x421B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B5Cu;
        // 0x421b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B64u;
        goto label_421b64;
    }
    ctx->pc = 0x421B5Cu;
    {
        const bool branch_taken_0x421b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x421B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B5Cu;
        // 0x421b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421b5c) {
            ctx->pc = 0x421CACu;
            goto label_421cac;
        }
    }
    ctx->pc = 0x421B64u;
label_421b64:
    // 0x421b64: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_421b68:
    if (ctx->pc == 0x421B68u) {
        ctx->pc = 0x421B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B64u;
        // 0x421b68: 0x7bb00000  lq          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B6Cu;
        goto label_421b6c;
    }
    ctx->pc = 0x421B64u;
    {
        const bool branch_taken_0x421b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B64u;
        // 0x421b68: 0x7bb00000  lq          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421b64) {
            ctx->pc = 0x421EF8u;
            goto label_421ef8;
        }
    }
    ctx->pc = 0x421B6Cu;
label_421b6c:
    // 0x421b6c: 0x8cc60018  lw          $a2, 0x18($a2)
    ctx->pc = 0x421b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_421b70:
    // 0x421b70: 0x1b0000df  blez        $t8, . + 4 + (0xDF << 2)
label_421b74:
    if (ctx->pc == 0x421B74u) {
        ctx->pc = 0x421B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B70u;
        // 0x421b74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B78u;
        goto label_421b78;
    }
    ctx->pc = 0x421B70u;
    {
        const bool branch_taken_0x421b70 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x421B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B70u;
        // 0x421b74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421b70) {
            ctx->pc = 0x421EF0u;
            goto label_421ef0;
        }
    }
    ctx->pc = 0x421B78u;
label_421b78:
    // 0x421b78: 0x246d0001  addiu       $t5, $v1, 0x1
    ctx->pc = 0x421b78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_421b7c:
    // 0x421b7c: 0x1307021  addu        $t6, $t1, $s0
    ctx->pc = 0x421b7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
label_421b80:
    // 0x421b80: 0x19800043  blez        $t4, . + 4 + (0x43 << 2)
label_421b84:
    if (ctx->pc == 0x421B84u) {
        ctx->pc = 0x421B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B80u;
        // 0x421b84: 0xf97821  addu        $t7, $a3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B88u;
        goto label_421b88;
    }
    ctx->pc = 0x421B80u;
    {
        const bool branch_taken_0x421b80 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x421B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B80u;
        // 0x421b84: 0xf97821  addu        $t7, $a3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421b80) {
            ctx->pc = 0x421C90u;
            goto label_421c90;
        }
    }
    ctx->pc = 0x421B88u;
label_421b88:
    // 0x421b88: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x421b88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_421b8c:
    // 0x421b8c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x421b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_421b90:
    // 0x421b90: 0x31820001  andi        $v0, $t4, 0x1
    ctx->pc = 0x421b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
label_421b94:
    // 0x421b94: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_421b98:
    if (ctx->pc == 0x421B98u) {
        ctx->pc = 0x421B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B94u;
        // 0x421b98: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421B9Cu;
        goto label_421b9c;
    }
    ctx->pc = 0x421B94u;
    {
        const bool branch_taken_0x421b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421B94u;
        // 0x421b98: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421b94) {
            ctx->pc = 0x421BF0u;
            goto label_421bf0;
        }
    }
    ctx->pc = 0x421B9Cu;
label_421b9c:
    // 0x421b9c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x421b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_421ba0:
    // 0x421ba0: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x421ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_421ba4:
    // 0x421ba4: 0x252a0002  addiu       $t2, $t1, 0x2
    ctx->pc = 0x421ba4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_421ba8:
    // 0x421ba8: 0x258bffff  addiu       $t3, $t4, -0x1
    ctx->pc = 0x421ba8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_421bac:
    // 0x421bac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x421bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_421bb0:
    // 0x421bb0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x421bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_421bb4:
    // 0x421bb4: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x421bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_421bb8:
    // 0x421bb8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x421bb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_421bbc:
    // 0x421bbc: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x421bbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_421bc0:
    // 0x421bc0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x421bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_421bc4:
    // 0x421bc4: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x421bc4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_421bc8:
    // 0x421bc8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x421bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_421bcc:
    // 0x421bcc: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x421bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
label_421bd0:
    // 0x421bd0: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x421bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_421bd4:
    // 0x421bd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x421bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_421bd8:
    // 0x421bd8: 0x30a200f0  andi        $v0, $a1, 0xF0
    ctx->pc = 0x421bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
label_421bdc:
    // 0x421bdc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x421bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421be0:
    // 0x421be0: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x421be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
label_421be4:
    // 0x421be4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x421be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421be8:
    // 0x421be8: 0x11600029  beqz        $t3, . + 4 + (0x29 << 2)
label_421bec:
    if (ctx->pc == 0x421BECu) {
        ctx->pc = 0x421BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421BE8u;
        // 0x421bec: 0xa5220000  sh          $v0, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421BF0u;
        goto label_421bf0;
    }
    ctx->pc = 0x421BE8u;
    {
        const bool branch_taken_0x421be8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x421BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421BE8u;
        // 0x421bec: 0xa5220000  sh          $v0, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421be8) {
            ctx->pc = 0x421C90u;
            goto label_421c90;
        }
    }
    ctx->pc = 0x421BF0u;
label_421bf0:
    // 0x421bf0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x421bf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_421bf4:
    // 0x421bf4: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x421bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_421bf8:
    // 0x421bf8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x421bf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_421bfc:
    // 0x421bfc: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x421bfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
label_421c00:
    // 0x421c00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x421c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_421c04:
    // 0x421c04: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x421c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_421c08:
    // 0x421c08: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x421c08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_421c0c:
    // 0x421c0c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x421c0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_421c10:
    // 0x421c10: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x421c10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_421c14:
    // 0x421c14: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x421c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_421c18:
    // 0x421c18: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x421c18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_421c1c:
    // 0x421c1c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x421c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_421c20:
    // 0x421c20: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x421c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
label_421c24:
    // 0x421c24: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x421c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_421c28:
    // 0x421c28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x421c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_421c2c:
    // 0x421c2c: 0x30a200f0  andi        $v0, $a1, 0xF0
    ctx->pc = 0x421c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
label_421c30:
    // 0x421c30: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x421c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421c34:
    // 0x421c34: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x421c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
label_421c38:
    // 0x421c38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x421c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421c3c:
    // 0x421c3c: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x421c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_421c40:
    // 0x421c40: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x421c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_421c44:
    // 0x421c44: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x421c44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_421c48:
    // 0x421c48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x421c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_421c4c:
    // 0x421c4c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x421c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_421c50:
    // 0x421c50: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x421c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_421c54:
    // 0x421c54: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x421c54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_421c58:
    // 0x421c58: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x421c58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_421c5c:
    // 0x421c5c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x421c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_421c60:
    // 0x421c60: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x421c60u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_421c64:
    // 0x421c64: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x421c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_421c68:
    // 0x421c68: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x421c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
label_421c6c:
    // 0x421c6c: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x421c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_421c70:
    // 0x421c70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x421c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_421c74:
    // 0x421c74: 0x30a200f0  andi        $v0, $a1, 0xF0
    ctx->pc = 0x421c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
label_421c78:
    // 0x421c78: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x421c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421c7c:
    // 0x421c7c: 0x71102  srl         $v0, $a3, 4
    ctx->pc = 0x421c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
label_421c80:
    // 0x421c80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x421c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421c84:
    // 0x421c84: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x421c84u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
label_421c88:
    // 0x421c88: 0x1560ffdb  bnez        $t3, . + 4 + (-0x25 << 2)
label_421c8c:
    if (ctx->pc == 0x421C8Cu) {
        ctx->pc = 0x421C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C88u;
        // 0x421c8c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421C90u;
        goto label_421c90;
    }
    ctx->pc = 0x421C88u;
    {
        const bool branch_taken_0x421c88 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x421C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C88u;
        // 0x421c8c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421c88) {
            ctx->pc = 0x421BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421bf8;
        }
    }
    ctx->pc = 0x421C90u;
label_421c90:
    // 0x421c90: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x421c90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_421c94:
    // 0x421c94: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x421c94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_421c98:
    // 0x421c98: 0x78102a  slt         $v0, $v1, $t8
    ctx->pc = 0x421c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
label_421c9c:
    // 0x421c9c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_421ca0:
    if (ctx->pc == 0x421CA0u) {
        ctx->pc = 0x421CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C9Cu;
        // 0x421ca0: 0x1e0382d  daddu       $a3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421CA4u;
        goto label_421ca4;
    }
    ctx->pc = 0x421C9Cu;
    {
        const bool branch_taken_0x421c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x421CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421C9Cu;
        // 0x421ca0: 0x1e0382d  daddu       $a3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421c9c) {
            ctx->pc = 0x421B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421b78;
        }
    }
    ctx->pc = 0x421CA4u;
label_421ca4:
    // 0x421ca4: 0x10000093  b           . + 4 + (0x93 << 2)
label_421ca8:
    if (ctx->pc == 0x421CA8u) {
        ctx->pc = 0x421CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CA4u;
        // 0x421ca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421CACu;
        goto label_421cac;
    }
    ctx->pc = 0x421CA4u;
    {
        const bool branch_taken_0x421ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CA4u;
        // 0x421ca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421ca4) {
            ctx->pc = 0x421EF4u;
            goto label_421ef4;
        }
    }
    ctx->pc = 0x421CACu;
label_421cac:
    // 0x421cac: 0x1b000090  blez        $t8, . + 4 + (0x90 << 2)
label_421cb0:
    if (ctx->pc == 0x421CB0u) {
        ctx->pc = 0x421CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CACu;
        // 0x421cb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421CB4u;
        goto label_421cb4;
    }
    ctx->pc = 0x421CACu;
    {
        const bool branch_taken_0x421cac = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x421CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CACu;
        // 0x421cb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421cac) {
            ctx->pc = 0x421EF0u;
            goto label_421ef0;
        }
    }
    ctx->pc = 0x421CB4u;
label_421cb4:
    // 0x421cb4: 0x0  nop
    ctx->pc = 0x421cb4u;
    // NOP
label_421cb8:
    // 0x421cb8: 0x246d0001  addiu       $t5, $v1, 0x1
    ctx->pc = 0x421cb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_421cbc:
    // 0x421cbc: 0x1307021  addu        $t6, $t1, $s0
    ctx->pc = 0x421cbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
label_421cc0:
    // 0x421cc0: 0x19800084  blez        $t4, . + 4 + (0x84 << 2)
label_421cc4:
    if (ctx->pc == 0x421CC4u) {
        ctx->pc = 0x421CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CC0u;
        // 0x421cc4: 0xf97821  addu        $t7, $a3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421CC8u;
        goto label_421cc8;
    }
    ctx->pc = 0x421CC0u;
    {
        const bool branch_taken_0x421cc0 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x421CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CC0u;
        // 0x421cc4: 0xf97821  addu        $t7, $a3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421cc0) {
            ctx->pc = 0x421ED4u;
            goto label_421ed4;
        }
    }
    ctx->pc = 0x421CC8u;
label_421cc8:
    // 0x421cc8: 0xc1023  negu        $v0, $t4
    ctx->pc = 0x421cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_421ccc:
    // 0x421ccc: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x421cccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_421cd0:
    // 0x421cd0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x421cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_421cd4:
    // 0x421cd4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x421cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_421cd8:
    // 0x421cd8: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_421cdc:
    if (ctx->pc == 0x421CDCu) {
        ctx->pc = 0x421CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CD8u;
        // 0x421cdc: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421CE0u;
        goto label_421ce0;
    }
    ctx->pc = 0x421CD8u;
    {
        const bool branch_taken_0x421cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x421CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CD8u;
        // 0x421cdc: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421cd8) {
            ctx->pc = 0x421DC4u;
            goto label_421dc4;
        }
    }
    ctx->pc = 0x421CE0u;
label_421ce0:
    // 0x421ce0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x421ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_421ce4:
    // 0x421ce4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_421ce8:
    if (ctx->pc == 0x421CE8u) {
        ctx->pc = 0x421CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CE4u;
        // 0x421ce8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x421CECu;
        goto label_421cec;
    }
    ctx->pc = 0x421CE4u;
    {
        const bool branch_taken_0x421ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CE4u;
        // 0x421ce8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x421ce4) {
            ctx->pc = 0x421D7Cu;
            goto label_421d7c;
        }
    }
    ctx->pc = 0x421CECu;
label_421cec:
    // 0x421cec: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_421cf0:
    if (ctx->pc == 0x421CF0u) {
        ctx->pc = 0x421CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421CECu;
        // 0x421cf0: 0x90c20003  lbu         $v0, 0x3($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421CF4u;
        goto label_421cf4;
    }
    ctx->pc = 0x421CECu;
    {
        const bool branch_taken_0x421cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x421cec) {
            ctx->pc = 0x421CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x421CECu;
            // 0x421cf0: 0x90c20003  lbu         $v0, 0x3($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x421D3Cu;
            goto label_421d3c;
        }
    }
    ctx->pc = 0x421CF4u;
label_421cf4:
    // 0x421cf4: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x421cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_421cf8:
    // 0x421cf8: 0x25280002  addiu       $t0, $t1, 0x2
    ctx->pc = 0x421cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_421cfc:
    // 0x421cfc: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x421cfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_421d00:
    // 0x421d00: 0x24e60004  addiu       $a2, $a3, 0x4
    ctx->pc = 0x421d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_421d04:
    // 0x421d04: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x421d04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_421d08:
    // 0x421d08: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x421d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_421d0c:
    // 0x421d0c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x421d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_421d10:
    // 0x421d10: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x421d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_421d14:
    // 0x421d14: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x421d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_421d18:
    // 0x421d18: 0x30840f00  andi        $a0, $a0, 0xF00
    ctx->pc = 0x421d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
label_421d1c:
    // 0x421d1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x421d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_421d20:
    // 0x421d20: 0x30a500f0  andi        $a1, $a1, 0xF0
    ctx->pc = 0x421d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
label_421d24:
    // 0x421d24: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x421d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_421d28:
    // 0x421d28: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x421d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_421d2c:
    // 0x421d2c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x421d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_421d30:
    // 0x421d30: 0x258bffff  addiu       $t3, $t4, -0x1
    ctx->pc = 0x421d30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_421d34:
    // 0x421d34: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x421d34u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
label_421d38:
    // 0x421d38: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x421d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_421d3c:
    // 0x421d3c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x421d3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_421d40:
    // 0x421d40: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x421d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_421d44:
    // 0x421d44: 0x90c50001  lbu         $a1, 0x1($a2)
    ctx->pc = 0x421d44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_421d48:
    // 0x421d48: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x421d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_421d4c:
    // 0x421d4c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x421d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_421d50:
    // 0x421d50: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x421d50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_421d54:
    // 0x421d54: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x421d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_421d58:
    // 0x421d58: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x421d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_421d5c:
    // 0x421d5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x421d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421d60:
    // 0x421d60: 0x30a500f0  andi        $a1, $a1, 0xF0
    ctx->pc = 0x421d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
label_421d64:
    // 0x421d64: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x421d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_421d68:
    // 0x421d68: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x421d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
label_421d6c:
    // 0x421d6c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x421d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_421d70:
    // 0x421d70: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x421d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_421d74:
    // 0x421d74: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x421d74u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
label_421d78:
    // 0x421d78: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x421d78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_421d7c:
    // 0x421d7c: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x421d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_421d80:
    // 0x421d80: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x421d80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_421d84:
    // 0x421d84: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x421d84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_421d88:
    // 0x421d88: 0x90c50001  lbu         $a1, 0x1($a2)
    ctx->pc = 0x421d88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_421d8c:
    // 0x421d8c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x421d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_421d90:
    // 0x421d90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x421d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_421d94:
    // 0x421d94: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x421d94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_421d98:
    // 0x421d98: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x421d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_421d9c:
    // 0x421d9c: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x421d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_421da0:
    // 0x421da0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x421da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_421da4:
    // 0x421da4: 0x30a500f0  andi        $a1, $a1, 0xF0
    ctx->pc = 0x421da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
label_421da8:
    // 0x421da8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x421da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_421dac:
    // 0x421dac: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x421dacu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
label_421db0:
    // 0x421db0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x421db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_421db4:
    // 0x421db4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x421db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_421db8:
    // 0x421db8: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x421db8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
label_421dbc:
    // 0x421dbc: 0x11600045  beqz        $t3, . + 4 + (0x45 << 2)
label_421dc0:
    if (ctx->pc == 0x421DC0u) {
        ctx->pc = 0x421DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421DBCu;
        // 0x421dc0: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421DC4u;
        goto label_421dc4;
    }
    ctx->pc = 0x421DBCu;
    {
        const bool branch_taken_0x421dbc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x421DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421DBCu;
        // 0x421dc0: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421dbc) {
            ctx->pc = 0x421ED4u;
            goto label_421ed4;
        }
    }
    ctx->pc = 0x421DC4u;
label_421dc4:
    // 0x421dc4: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x421dc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_421dc8:
    // 0x421dc8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x421dc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_421dcc:
    // 0x421dcc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x421dccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_421dd0:
    // 0x421dd0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x421dd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_421dd4:
    // 0x421dd4: 0x0  nop
    ctx->pc = 0x421dd4u;
    // NOP
label_421dd8:
    // 0x421dd8: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x421dd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_421ddc:
    // 0x421ddc: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x421ddcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_421de0:
    // 0x421de0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x421de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_421de4:
    // 0x421de4: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x421de4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_421de8:
    // 0x421de8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x421de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_421dec:
    // 0x421dec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x421decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_421df0:
    // 0x421df0: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x421df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_421df4:
    // 0x421df4: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x421df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_421df8:
    // 0x421df8: 0x3084f000  andi        $a0, $a0, 0xF000
    ctx->pc = 0x421df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
label_421dfc:
    // 0x421dfc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x421dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_421e00:
    // 0x421e00: 0x30a500f0  andi        $a1, $a1, 0xF0
    ctx->pc = 0x421e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
label_421e04:
    // 0x421e04: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x421e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_421e08:
    // 0x421e08: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x421e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_421e0c:
    // 0x421e0c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x421e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_421e10:
    // 0x421e10: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x421e10u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
label_421e14:
    // 0x421e14: 0x90e40007  lbu         $a0, 0x7($a3)
    ctx->pc = 0x421e14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_421e18:
    // 0x421e18: 0x91030004  lbu         $v1, 0x4($t0)
    ctx->pc = 0x421e18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_421e1c:
    // 0x421e1c: 0x91250005  lbu         $a1, 0x5($t1)
    ctx->pc = 0x421e1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
label_421e20:
    // 0x421e20: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x421e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_421e24:
    // 0x421e24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x421e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_421e28:
    // 0x421e28: 0x90c20006  lbu         $v0, 0x6($a2)
    ctx->pc = 0x421e28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
label_421e2c:
    // 0x421e2c: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x421e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_421e30:
    // 0x421e30: 0x3084f000  andi        $a0, $a0, 0xF000
    ctx->pc = 0x421e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
label_421e34:
    // 0x421e34: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x421e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_421e38:
    // 0x421e38: 0x30a500f0  andi        $a1, $a1, 0xF0
    ctx->pc = 0x421e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
label_421e3c:
    // 0x421e3c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x421e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_421e40:
    // 0x421e40: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x421e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_421e44:
    // 0x421e44: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x421e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_421e48:
    // 0x421e48: 0xa5420002  sh          $v0, 0x2($t2)
    ctx->pc = 0x421e48u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 2));
label_421e4c:
    // 0x421e4c: 0x90e4000b  lbu         $a0, 0xB($a3)
    ctx->pc = 0x421e4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
label_421e50:
    // 0x421e50: 0x91030008  lbu         $v1, 0x8($t0)
    ctx->pc = 0x421e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
label_421e54:
    // 0x421e54: 0x91250009  lbu         $a1, 0x9($t1)
    ctx->pc = 0x421e54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 9)));
label_421e58:
    // 0x421e58: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x421e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_421e5c:
    // 0x421e5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x421e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_421e60:
    // 0x421e60: 0x90c2000a  lbu         $v0, 0xA($a2)
    ctx->pc = 0x421e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
label_421e64:
    // 0x421e64: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x421e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_421e68:
    // 0x421e68: 0x3084f000  andi        $a0, $a0, 0xF000
    ctx->pc = 0x421e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
label_421e6c:
    // 0x421e6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x421e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_421e70:
    // 0x421e70: 0x30a500f0  andi        $a1, $a1, 0xF0
    ctx->pc = 0x421e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
label_421e74:
    // 0x421e74: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x421e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_421e78:
    // 0x421e78: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x421e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_421e7c:
    // 0x421e7c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x421e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_421e80:
    // 0x421e80: 0xa5420004  sh          $v0, 0x4($t2)
    ctx->pc = 0x421e80u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 2));
label_421e84:
    // 0x421e84: 0x90e4000f  lbu         $a0, 0xF($a3)
    ctx->pc = 0x421e84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 15)));
label_421e88:
    // 0x421e88: 0x9103000c  lbu         $v1, 0xC($t0)
    ctx->pc = 0x421e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
label_421e8c:
    // 0x421e8c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x421e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_421e90:
    // 0x421e90: 0x9125000d  lbu         $a1, 0xD($t1)
    ctx->pc = 0x421e90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13)));
label_421e94:
    // 0x421e94: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x421e94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_421e98:
    // 0x421e98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x421e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_421e9c:
    // 0x421e9c: 0x90c2000e  lbu         $v0, 0xE($a2)
    ctx->pc = 0x421e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 14)));
label_421ea0:
    // 0x421ea0: 0x3084f000  andi        $a0, $a0, 0xF000
    ctx->pc = 0x421ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
label_421ea4:
    // 0x421ea4: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x421ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_421ea8:
    // 0x421ea8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x421ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_421eac:
    // 0x421eac: 0x30a500f0  andi        $a1, $a1, 0xF0
    ctx->pc = 0x421eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
label_421eb0:
    // 0x421eb0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x421eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_421eb4:
    // 0x421eb4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x421eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_421eb8:
    // 0x421eb8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x421eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_421ebc:
    // 0x421ebc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x421ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_421ec0:
    // 0x421ec0: 0xa5420006  sh          $v0, 0x6($t2)
    ctx->pc = 0x421ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 2));
label_421ec4:
    // 0x421ec4: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x421ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_421ec8:
    // 0x421ec8: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x421ec8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_421ecc:
    // 0x421ecc: 0x1560ffc2  bnez        $t3, . + 4 + (-0x3E << 2)
label_421ed0:
    if (ctx->pc == 0x421ED0u) {
        ctx->pc = 0x421ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421ECCu;
        // 0x421ed0: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421ED4u;
        goto label_421ed4;
    }
    ctx->pc = 0x421ECCu;
    {
        const bool branch_taken_0x421ecc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x421ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421ECCu;
        // 0x421ed0: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421ecc) {
            ctx->pc = 0x421DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421dd8;
        }
    }
    ctx->pc = 0x421ED4u;
label_421ed4:
    // 0x421ed4: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x421ed4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_421ed8:
    // 0x421ed8: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x421ed8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_421edc:
    // 0x421edc: 0x78102a  slt         $v0, $v1, $t8
    ctx->pc = 0x421edcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
label_421ee0:
    // 0x421ee0: 0x1440ff75  bnez        $v0, . + 4 + (-0x8B << 2)
label_421ee4:
    if (ctx->pc == 0x421EE4u) {
        ctx->pc = 0x421EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421EE0u;
        // 0x421ee4: 0x1e0382d  daddu       $a3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421EE8u;
        goto label_421ee8;
    }
    ctx->pc = 0x421EE0u;
    {
        const bool branch_taken_0x421ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x421EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421EE0u;
        // 0x421ee4: 0x1e0382d  daddu       $a3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421ee0) {
            ctx->pc = 0x421CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421cb8;
        }
    }
    ctx->pc = 0x421EE8u;
label_421ee8:
    // 0x421ee8: 0x10000002  b           . + 4 + (0x2 << 2)
label_421eec:
    if (ctx->pc == 0x421EECu) {
        ctx->pc = 0x421EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421EE8u;
        // 0x421eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421EF0u;
        goto label_421ef0;
    }
    ctx->pc = 0x421EE8u;
    {
        const bool branch_taken_0x421ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421EE8u;
        // 0x421eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421ee8) {
            ctx->pc = 0x421EF4u;
            goto label_421ef4;
        }
    }
    ctx->pc = 0x421EF0u;
label_421ef0:
    // 0x421ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x421ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_421ef4:
    // 0x421ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x421ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_421ef8:
    // 0x421ef8: 0x3e00008  jr          $ra
label_421efc:
    if (ctx->pc == 0x421EFCu) {
        ctx->pc = 0x421EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421EF8u;
        // 0x421efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F00u;
        goto label_421f00;
    }
    ctx->pc = 0x421EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421EF8u;
        // 0x421efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x421F00u;
label_421f00:
    // 0x421f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x421f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_421f04:
    // 0x421f04: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x421f04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_421f08:
    // 0x421f08: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x421f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
label_421f0c:
    // 0x421f0c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x421f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_421f10:
    // 0x421f10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x421f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_421f14:
    // 0x421f14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x421f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_421f18:
    // 0x421f18: 0x8cd00010  lw          $s0, 0x10($a2)
    ctx->pc = 0x421f18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_421f1c:
    // 0x421f1c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x421f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_421f20:
    // 0x421f20: 0x8ccd0004  lw          $t5, 0x4($a2)
    ctx->pc = 0x421f20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_421f24:
    // 0x421f24: 0x8cd90008  lw          $t9, 0x8($a2)
    ctx->pc = 0x421f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_421f28:
    // 0x421f28: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_421f2c:
    if (ctx->pc == 0x421F2Cu) {
        ctx->pc = 0x421F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F28u;
        // 0x421f2c: 0x8cc70014  lw          $a3, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F30u;
        goto label_421f30;
    }
    ctx->pc = 0x421F28u;
    {
        const bool branch_taken_0x421f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x421F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F28u;
        // 0x421f2c: 0x8cc70014  lw          $a3, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421f28) {
            ctx->pc = 0x421F60u;
            goto label_421f60;
        }
    }
    ctx->pc = 0x421F30u;
label_421f30:
    // 0x421f30: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x421f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_421f34:
    // 0x421f34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_421f38:
    if (ctx->pc == 0x421F38u) {
        ctx->pc = 0x421F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F34u;
        // 0x421f38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F3Cu;
        goto label_421f3c;
    }
    ctx->pc = 0x421F34u;
    {
        const bool branch_taken_0x421f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F34u;
        // 0x421f38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421f34) {
            ctx->pc = 0x421F4Cu;
            goto label_421f4c;
        }
    }
    ctx->pc = 0x421F3Cu;
label_421f3c:
    // 0x421f3c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_421f40:
    if (ctx->pc == 0x421F40u) {
        ctx->pc = 0x421F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F3Cu;
        // 0x421f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F44u;
        goto label_421f44;
    }
    ctx->pc = 0x421F3Cu;
    {
        const bool branch_taken_0x421f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x421F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F3Cu;
        // 0x421f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421f3c) {
            ctx->pc = 0x421F60u;
            goto label_421f60;
        }
    }
    ctx->pc = 0x421F44u;
label_421f44:
    // 0x421f44: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_421f48:
    if (ctx->pc == 0x421F48u) {
        ctx->pc = 0x421F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F44u;
        // 0x421f48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F4Cu;
        goto label_421f4c;
    }
    ctx->pc = 0x421F44u;
    {
        const bool branch_taken_0x421f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F44u;
        // 0x421f48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421f44) {
            ctx->pc = 0x422310u;
            goto label_422310;
        }
    }
    ctx->pc = 0x421F4Cu;
label_421f4c:
    // 0x421f4c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x421f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_421f50:
    // 0x421f50: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
label_421f54:
    if (ctx->pc == 0x421F54u) {
        ctx->pc = 0x421F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F50u;
        // 0x421f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F58u;
        goto label_421f58;
    }
    ctx->pc = 0x421F50u;
    {
        const bool branch_taken_0x421f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x421F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F50u;
        // 0x421f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421f50) {
            ctx->pc = 0x4220ACu;
            goto label_4220ac;
        }
    }
    ctx->pc = 0x421F58u;
label_421f58:
    // 0x421f58: 0x100000ed  b           . + 4 + (0xED << 2)
label_421f5c:
    if (ctx->pc == 0x421F5Cu) {
        ctx->pc = 0x421F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F58u;
        // 0x421f5c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F60u;
        goto label_421f60;
    }
    ctx->pc = 0x421F58u;
    {
        const bool branch_taken_0x421f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F58u;
        // 0x421f5c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421f58) {
            ctx->pc = 0x422310u;
            goto label_422310;
        }
    }
    ctx->pc = 0x421F60u;
label_421f60:
    // 0x421f60: 0x8cc60018  lw          $a2, 0x18($a2)
    ctx->pc = 0x421f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_421f64:
    // 0x421f64: 0x1b2000e8  blez        $t9, . + 4 + (0xE8 << 2)
label_421f68:
    if (ctx->pc == 0x421F68u) {
        ctx->pc = 0x421F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F64u;
        // 0x421f68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F6Cu;
        goto label_421f6c;
    }
    ctx->pc = 0x421F64u;
    {
        const bool branch_taken_0x421f64 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x421F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F64u;
        // 0x421f68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421f64) {
            ctx->pc = 0x422308u;
            goto label_422308;
        }
    }
    ctx->pc = 0x421F6Cu;
label_421f6c:
    // 0x421f6c: 0x0  nop
    ctx->pc = 0x421f6cu;
    // NOP
label_421f70:
    // 0x421f70: 0x246e0001  addiu       $t6, $v1, 0x1
    ctx->pc = 0x421f70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_421f74:
    // 0x421f74: 0x1317821  addu        $t7, $t1, $s1
    ctx->pc = 0x421f74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
label_421f78:
    // 0x421f78: 0x19a00045  blez        $t5, . + 4 + (0x45 << 2)
label_421f7c:
    if (ctx->pc == 0x421F7Cu) {
        ctx->pc = 0x421F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F78u;
        // 0x421f7c: 0xf0c021  addu        $t8, $a3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F80u;
        goto label_421f80;
    }
    ctx->pc = 0x421F78u;
    {
        const bool branch_taken_0x421f78 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x421F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F78u;
        // 0x421f7c: 0xf0c021  addu        $t8, $a3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421f78) {
            ctx->pc = 0x422090u;
            goto label_422090;
        }
    }
    ctx->pc = 0x421F80u;
label_421f80:
    // 0x421f80: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x421f80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_421f84:
    // 0x421f84: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x421f84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_421f88:
    // 0x421f88: 0x31a20001  andi        $v0, $t5, 0x1
    ctx->pc = 0x421f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_421f8c:
    // 0x421f8c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_421f90:
    if (ctx->pc == 0x421F90u) {
        ctx->pc = 0x421F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F8Cu;
        // 0x421f90: 0x120602d  daddu       $t4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F94u;
        goto label_421f94;
    }
    ctx->pc = 0x421F8Cu;
    {
        const bool branch_taken_0x421f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F8Cu;
        // 0x421f90: 0x120602d  daddu       $t4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421f8c) {
            ctx->pc = 0x421FECu;
            goto label_421fec;
        }
    }
    ctx->pc = 0x421F94u;
label_421f94:
    // 0x421f94: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x421f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_421f98:
    // 0x421f98: 0x24ea0001  addiu       $t2, $a3, 0x1
    ctx->pc = 0x421f98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_421f9c:
    // 0x421f9c: 0x252c0002  addiu       $t4, $t1, 0x2
    ctx->pc = 0x421f9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_421fa0:
    // 0x421fa0: 0x25abffff  addiu       $t3, $t5, -0x1
    ctx->pc = 0x421fa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_421fa4:
    // 0x421fa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x421fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_421fa8:
    // 0x421fa8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x421fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_421fac:
    // 0x421fac: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x421facu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_421fb0:
    // 0x421fb0: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x421fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_421fb4:
    // 0x421fb4: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x421fb4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_421fb8:
    // 0x421fb8: 0x429c0  sll         $a1, $a0, 7
    ctx->pc = 0x421fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_421fbc:
    // 0x421fbc: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x421fbcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_421fc0:
    // 0x421fc0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x421fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_421fc4:
    // 0x421fc4: 0x30648000  andi        $a0, $v1, 0x8000
    ctx->pc = 0x421fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_421fc8:
    // 0x421fc8: 0x30a27c00  andi        $v0, $a1, 0x7C00
    ctx->pc = 0x421fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
label_421fcc:
    // 0x421fcc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x421fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_421fd0:
    // 0x421fd0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x421fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_421fd4:
    // 0x421fd4: 0x306203e0  andi        $v0, $v1, 0x3E0
    ctx->pc = 0x421fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)992);
label_421fd8:
    // 0x421fd8: 0x818c2  srl         $v1, $t0, 3
    ctx->pc = 0x421fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
label_421fdc:
    // 0x421fdc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x421fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_421fe0:
    // 0x421fe0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x421fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_421fe4:
    // 0x421fe4: 0x1160002a  beqz        $t3, . + 4 + (0x2A << 2)
label_421fe8:
    if (ctx->pc == 0x421FE8u) {
        ctx->pc = 0x421FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421FE4u;
        // 0x421fe8: 0xa5220000  sh          $v0, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421FECu;
        goto label_421fec;
    }
    ctx->pc = 0x421FE4u;
    {
        const bool branch_taken_0x421fe4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x421FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421FE4u;
        // 0x421fe8: 0xa5220000  sh          $v0, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421fe4) {
            ctx->pc = 0x422090u;
            goto label_422090;
        }
    }
    ctx->pc = 0x421FECu;
label_421fec:
    // 0x421fec: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x421fecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_421ff0:
    // 0x421ff0: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x421ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_421ff4:
    // 0x421ff4: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x421ff4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
label_421ff8:
    // 0x421ff8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x421ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_421ffc:
    // 0x421ffc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x421ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_422000:
    // 0x422000: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x422000u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_422004:
    // 0x422004: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x422004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_422008:
    // 0x422008: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x422008u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_42200c:
    // 0x42200c: 0x429c0  sll         $a1, $a0, 7
    ctx->pc = 0x42200cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_422010:
    // 0x422010: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x422010u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_422014:
    // 0x422014: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x422014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_422018:
    // 0x422018: 0x30648000  andi        $a0, $v1, 0x8000
    ctx->pc = 0x422018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_42201c:
    // 0x42201c: 0x30a27c00  andi        $v0, $a1, 0x7C00
    ctx->pc = 0x42201cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
label_422020:
    // 0x422020: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x422020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_422024:
    // 0x422024: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x422024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_422028:
    // 0x422028: 0x306203e0  andi        $v0, $v1, 0x3E0
    ctx->pc = 0x422028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)992);
label_42202c:
    // 0x42202c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x42202cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_422030:
    // 0x422030: 0x818c2  srl         $v1, $t0, 3
    ctx->pc = 0x422030u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
label_422034:
    // 0x422034: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x422034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_422038:
    // 0x422038: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x422038u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
label_42203c:
    // 0x42203c: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x42203cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
label_422040:
    // 0x422040: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x422040u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
label_422044:
    // 0x422044: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x422044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_422048:
    // 0x422048: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x422048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_42204c:
    // 0x42204c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x42204cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_422050:
    // 0x422050: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x422050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_422054:
    // 0x422054: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x422054u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_422058:
    // 0x422058: 0x429c0  sll         $a1, $a0, 7
    ctx->pc = 0x422058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_42205c:
    // 0x42205c: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x42205cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_422060:
    // 0x422060: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x422060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_422064:
    // 0x422064: 0x30648000  andi        $a0, $v1, 0x8000
    ctx->pc = 0x422064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_422068:
    // 0x422068: 0x30a27c00  andi        $v0, $a1, 0x7C00
    ctx->pc = 0x422068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31744);
label_42206c:
    // 0x42206c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x42206cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_422070:
    // 0x422070: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x422070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_422074:
    // 0x422074: 0x306203e0  andi        $v0, $v1, 0x3E0
    ctx->pc = 0x422074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)992);
label_422078:
    // 0x422078: 0x818c2  srl         $v1, $t0, 3
    ctx->pc = 0x422078u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
label_42207c:
    // 0x42207c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x42207cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_422080:
    // 0x422080: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x422080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_422084:
    // 0x422084: 0xa5220002  sh          $v0, 0x2($t1)
    ctx->pc = 0x422084u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 2));
label_422088:
    // 0x422088: 0x1560ffd9  bnez        $t3, . + 4 + (-0x27 << 2)
label_42208c:
    if (ctx->pc == 0x42208Cu) {
        ctx->pc = 0x42208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422088u;
        // 0x42208c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422090u;
        goto label_422090;
    }
    ctx->pc = 0x422088u;
    {
        const bool branch_taken_0x422088 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x42208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422088u;
        // 0x42208c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422088) {
            ctx->pc = 0x421FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421ff0;
        }
    }
    ctx->pc = 0x422090u;
label_422090:
    // 0x422090: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x422090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_422094:
    // 0x422094: 0x1e0482d  daddu       $t1, $t7, $zero
    ctx->pc = 0x422094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_422098:
    // 0x422098: 0x79102a  slt         $v0, $v1, $t9
    ctx->pc = 0x422098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_42209c:
    // 0x42209c: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
label_4220a0:
    if (ctx->pc == 0x4220A0u) {
        ctx->pc = 0x4220A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42209Cu;
        // 0x4220a0: 0x300382d  daddu       $a3, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4220A4u;
        goto label_4220a4;
    }
    ctx->pc = 0x42209Cu;
    {
        const bool branch_taken_0x42209c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4220A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42209Cu;
        // 0x4220a0: 0x300382d  daddu       $a3, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42209c) {
            ctx->pc = 0x421F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_421f70;
        }
    }
    ctx->pc = 0x4220A4u;
label_4220a4:
    // 0x4220a4: 0x10000099  b           . + 4 + (0x99 << 2)
label_4220a8:
    if (ctx->pc == 0x4220A8u) {
        ctx->pc = 0x4220A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220A4u;
        // 0x4220a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4220ACu;
        goto label_4220ac;
    }
    ctx->pc = 0x4220A4u;
    {
        const bool branch_taken_0x4220a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4220A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220A4u;
        // 0x4220a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4220a4) {
            ctx->pc = 0x42230Cu;
            goto label_42230c;
        }
    }
    ctx->pc = 0x4220ACu;
label_4220ac:
    // 0x4220ac: 0x1b200096  blez        $t9, . + 4 + (0x96 << 2)
label_4220b0:
    if (ctx->pc == 0x4220B0u) {
        ctx->pc = 0x4220B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220ACu;
        // 0x4220b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4220B4u;
        goto label_4220b4;
    }
    ctx->pc = 0x4220ACu;
    {
        const bool branch_taken_0x4220ac = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x4220B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220ACu;
        // 0x4220b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4220ac) {
            ctx->pc = 0x422308u;
            goto label_422308;
        }
    }
    ctx->pc = 0x4220B4u;
label_4220b4:
    // 0x4220b4: 0x0  nop
    ctx->pc = 0x4220b4u;
    // NOP
label_4220b8:
    // 0x4220b8: 0x246e0001  addiu       $t6, $v1, 0x1
    ctx->pc = 0x4220b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4220bc:
    // 0x4220bc: 0x1317821  addu        $t7, $t1, $s1
    ctx->pc = 0x4220bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
label_4220c0:
    // 0x4220c0: 0x19a0008a  blez        $t5, . + 4 + (0x8A << 2)
label_4220c4:
    if (ctx->pc == 0x4220C4u) {
        ctx->pc = 0x4220C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220C0u;
        // 0x4220c4: 0xf0c021  addu        $t8, $a3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4220C8u;
        goto label_4220c8;
    }
    ctx->pc = 0x4220C0u;
    {
        const bool branch_taken_0x4220c0 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x4220C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220C0u;
        // 0x4220c4: 0xf0c021  addu        $t8, $a3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4220c0) {
            ctx->pc = 0x4222ECu;
            goto label_4222ec;
        }
    }
    ctx->pc = 0x4220C8u;
label_4220c8:
    // 0x4220c8: 0xd1023  negu        $v0, $t5
    ctx->pc = 0x4220c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
label_4220cc:
    // 0x4220cc: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x4220ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_4220d0:
    // 0x4220d0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4220d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4220d4:
    // 0x4220d4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4220d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4220d8:
    // 0x4220d8: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_4220dc:
    if (ctx->pc == 0x4220DCu) {
        ctx->pc = 0x4220DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220D8u;
        // 0x4220dc: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4220E0u;
        goto label_4220e0;
    }
    ctx->pc = 0x4220D8u;
    {
        const bool branch_taken_0x4220d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4220DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220D8u;
        // 0x4220dc: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4220d8) {
            ctx->pc = 0x4221D0u;
            goto label_4221d0;
        }
    }
    ctx->pc = 0x4220E0u;
label_4220e0:
    // 0x4220e0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4220e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4220e4:
    // 0x4220e4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4220e8:
    if (ctx->pc == 0x4220E8u) {
        ctx->pc = 0x4220E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220E4u;
        // 0x4220e8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4220ECu;
        goto label_4220ec;
    }
    ctx->pc = 0x4220E4u;
    {
        const bool branch_taken_0x4220e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4220E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220E4u;
        // 0x4220e8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4220e4) {
            ctx->pc = 0x422184u;
            goto label_422184;
        }
    }
    ctx->pc = 0x4220ECu;
label_4220ec:
    // 0x4220ec: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_4220f0:
    if (ctx->pc == 0x4220F0u) {
        ctx->pc = 0x4220F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4220ECu;
        // 0x4220f0: 0x90c20003  lbu         $v0, 0x3($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4220F4u;
        goto label_4220f4;
    }
    ctx->pc = 0x4220ECu;
    {
        const bool branch_taken_0x4220ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4220ec) {
            ctx->pc = 0x4220F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4220ECu;
            // 0x4220f0: 0x90c20003  lbu         $v0, 0x3($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x422140u;
            goto label_422140;
        }
    }
    ctx->pc = 0x4220F4u;
label_4220f4:
    // 0x4220f4: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x4220f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_4220f8:
    // 0x4220f8: 0x25280002  addiu       $t0, $t1, 0x2
    ctx->pc = 0x4220f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_4220fc:
    // 0x4220fc: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x4220fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_422100:
    // 0x422100: 0x24e60004  addiu       $a2, $a3, 0x4
    ctx->pc = 0x422100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_422104:
    // 0x422104: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x422104u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_422108:
    // 0x422108: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x422108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_42210c:
    // 0x42210c: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x42210cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_422110:
    // 0x422110: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x422110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_422114:
    // 0x422114: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x422114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_422118:
    // 0x422118: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x422118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
label_42211c:
    // 0x42211c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x42211cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_422120:
    // 0x422120: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x422120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_422124:
    // 0x422124: 0x30a503e0  andi        $a1, $a1, 0x3E0
    ctx->pc = 0x422124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
label_422128:
    // 0x422128: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x422128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_42212c:
    // 0x42212c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x42212cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_422130:
    // 0x422130: 0x25abffff  addiu       $t3, $t5, -0x1
    ctx->pc = 0x422130u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_422134:
    // 0x422134: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x422134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_422138:
    // 0x422138: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x422138u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
label_42213c:
    // 0x42213c: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x42213cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_422140:
    // 0x422140: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x422140u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_422144:
    // 0x422144: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x422144u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_422148:
    // 0x422148: 0x90c50001  lbu         $a1, 0x1($a2)
    ctx->pc = 0x422148u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_42214c:
    // 0x42214c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x42214cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_422150:
    // 0x422150: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x422150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_422154:
    // 0x422154: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x422154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_422158:
    // 0x422158: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x422158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_42215c:
    // 0x42215c: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x42215cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
label_422160:
    // 0x422160: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x422160u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_422164:
    // 0x422164: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x422164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_422168:
    // 0x422168: 0x30a503e0  andi        $a1, $a1, 0x3E0
    ctx->pc = 0x422168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
label_42216c:
    // 0x42216c: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x42216cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_422170:
    // 0x422170: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x422170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_422174:
    // 0x422174: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x422174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_422178:
    // 0x422178: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x422178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42217c:
    // 0x42217c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x42217cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
label_422180:
    // 0x422180: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x422180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_422184:
    // 0x422184: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x422184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_422188:
    // 0x422188: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x422188u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_42218c:
    // 0x42218c: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x42218cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_422190:
    // 0x422190: 0x90c50001  lbu         $a1, 0x1($a2)
    ctx->pc = 0x422190u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_422194:
    // 0x422194: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x422194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_422198:
    // 0x422198: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x422198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_42219c:
    // 0x42219c: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x42219cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_4221a0:
    // 0x4221a0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x4221a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_4221a4:
    // 0x4221a4: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x4221a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
label_4221a8:
    // 0x4221a8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4221a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4221ac:
    // 0x4221ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4221acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4221b0:
    // 0x4221b0: 0x30a503e0  andi        $a1, $a1, 0x3E0
    ctx->pc = 0x4221b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
label_4221b4:
    // 0x4221b4: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x4221b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_4221b8:
    // 0x4221b8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4221b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4221bc:
    // 0x4221bc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4221bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4221c0:
    // 0x4221c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4221c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4221c4:
    // 0x4221c4: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4221c4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
label_4221c8:
    // 0x4221c8: 0x11600048  beqz        $t3, . + 4 + (0x48 << 2)
label_4221cc:
    if (ctx->pc == 0x4221CCu) {
        ctx->pc = 0x4221CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4221C8u;
        // 0x4221cc: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4221D0u;
        goto label_4221d0;
    }
    ctx->pc = 0x4221C8u;
    {
        const bool branch_taken_0x4221c8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x4221CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4221C8u;
        // 0x4221cc: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4221c8) {
            ctx->pc = 0x4222ECu;
            goto label_4222ec;
        }
    }
    ctx->pc = 0x4221D0u;
label_4221d0:
    // 0x4221d0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x4221d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4221d4:
    // 0x4221d4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4221d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4221d8:
    // 0x4221d8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4221d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4221dc:
    // 0x4221dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4221dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4221e0:
    // 0x4221e0: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x4221e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_4221e4:
    // 0x4221e4: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x4221e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_4221e8:
    // 0x4221e8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x4221e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_4221ec:
    // 0x4221ec: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x4221ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_4221f0:
    // 0x4221f0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4221f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_4221f4:
    // 0x4221f4: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x4221f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_4221f8:
    // 0x4221f8: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x4221f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_4221fc:
    // 0x4221fc: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x4221fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
label_422200:
    // 0x422200: 0x30848000  andi        $a0, $a0, 0x8000
    ctx->pc = 0x422200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_422204:
    // 0x422204: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x422204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_422208:
    // 0x422208: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x422208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_42220c:
    // 0x42220c: 0x30a503e0  andi        $a1, $a1, 0x3E0
    ctx->pc = 0x42220cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
label_422210:
    // 0x422210: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x422210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_422214:
    // 0x422214: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x422214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_422218:
    // 0x422218: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x422218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_42221c:
    // 0x42221c: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x42221cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
label_422220:
    // 0x422220: 0x90e30007  lbu         $v1, 0x7($a3)
    ctx->pc = 0x422220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_422224:
    // 0x422224: 0x91040004  lbu         $a0, 0x4($t0)
    ctx->pc = 0x422224u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_422228:
    // 0x422228: 0x91250005  lbu         $a1, 0x5($t1)
    ctx->pc = 0x422228u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
label_42222c:
    // 0x42222c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x42222cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_422230:
    // 0x422230: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x422230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_422234:
    // 0x422234: 0x90c20006  lbu         $v0, 0x6($a2)
    ctx->pc = 0x422234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
label_422238:
    // 0x422238: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x422238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
label_42223c:
    // 0x42223c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x42223cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_422240:
    // 0x422240: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x422240u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_422244:
    // 0x422244: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x422244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_422248:
    // 0x422248: 0x30a503e0  andi        $a1, $a1, 0x3E0
    ctx->pc = 0x422248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
label_42224c:
    // 0x42224c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x42224cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_422250:
    // 0x422250: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x422250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_422254:
    // 0x422254: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x422254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_422258:
    // 0x422258: 0xa5420002  sh          $v0, 0x2($t2)
    ctx->pc = 0x422258u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 2));
label_42225c:
    // 0x42225c: 0x90e3000b  lbu         $v1, 0xB($a3)
    ctx->pc = 0x42225cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
label_422260:
    // 0x422260: 0x91040008  lbu         $a0, 0x8($t0)
    ctx->pc = 0x422260u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
label_422264:
    // 0x422264: 0x91250009  lbu         $a1, 0x9($t1)
    ctx->pc = 0x422264u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 9)));
label_422268:
    // 0x422268: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x422268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_42226c:
    // 0x42226c: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x42226cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_422270:
    // 0x422270: 0x90c2000a  lbu         $v0, 0xA($a2)
    ctx->pc = 0x422270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
label_422274:
    // 0x422274: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x422274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
label_422278:
    // 0x422278: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x422278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_42227c:
    // 0x42227c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x42227cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_422280:
    // 0x422280: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x422280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_422284:
    // 0x422284: 0x30a503e0  andi        $a1, $a1, 0x3E0
    ctx->pc = 0x422284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
label_422288:
    // 0x422288: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x422288u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_42228c:
    // 0x42228c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x42228cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_422290:
    // 0x422290: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x422290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_422294:
    // 0x422294: 0xa5420004  sh          $v0, 0x4($t2)
    ctx->pc = 0x422294u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 2));
label_422298:
    // 0x422298: 0x90e3000f  lbu         $v1, 0xF($a3)
    ctx->pc = 0x422298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 15)));
label_42229c:
    // 0x42229c: 0x9104000c  lbu         $a0, 0xC($t0)
    ctx->pc = 0x42229cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
label_4222a0:
    // 0x4222a0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4222a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4222a4:
    // 0x4222a4: 0x9125000d  lbu         $a1, 0xD($t1)
    ctx->pc = 0x4222a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13)));
label_4222a8:
    // 0x4222a8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4222a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_4222ac:
    // 0x4222ac: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x4222acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_4222b0:
    // 0x4222b0: 0x90c2000e  lbu         $v0, 0xE($a2)
    ctx->pc = 0x4222b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 14)));
label_4222b4:
    // 0x4222b4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x4222b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_4222b8:
    // 0x4222b8: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x4222b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
label_4222bc:
    // 0x4222bc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4222bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4222c0:
    // 0x4222c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4222c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4222c4:
    // 0x4222c4: 0x30a503e0  andi        $a1, $a1, 0x3E0
    ctx->pc = 0x4222c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
label_4222c8:
    // 0x4222c8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x4222c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_4222cc:
    // 0x4222cc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4222ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_4222d0:
    // 0x4222d0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4222d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_4222d4:
    // 0x4222d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4222d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4222d8:
    // 0x4222d8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x4222d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_4222dc:
    // 0x4222dc: 0xa5420006  sh          $v0, 0x6($t2)
    ctx->pc = 0x4222dcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 2));
label_4222e0:
    // 0x4222e0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4222e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_4222e4:
    // 0x4222e4: 0x1560ffbe  bnez        $t3, . + 4 + (-0x42 << 2)
label_4222e8:
    if (ctx->pc == 0x4222E8u) {
        ctx->pc = 0x4222E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4222E4u;
        // 0x4222e8: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4222ECu;
        goto label_4222ec;
    }
    ctx->pc = 0x4222E4u;
    {
        const bool branch_taken_0x4222e4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4222E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4222E4u;
        // 0x4222e8: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4222e4) {
            ctx->pc = 0x4221E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4221e0;
        }
    }
    ctx->pc = 0x4222ECu;
label_4222ec:
    // 0x4222ec: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x4222ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_4222f0:
    // 0x4222f0: 0x1e0482d  daddu       $t1, $t7, $zero
    ctx->pc = 0x4222f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4222f4:
    // 0x4222f4: 0x79102a  slt         $v0, $v1, $t9
    ctx->pc = 0x4222f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_4222f8:
    // 0x4222f8: 0x1440ff6f  bnez        $v0, . + 4 + (-0x91 << 2)
label_4222fc:
    if (ctx->pc == 0x4222FCu) {
        ctx->pc = 0x4222FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4222F8u;
        // 0x4222fc: 0x300382d  daddu       $a3, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422300u;
        goto label_422300;
    }
    ctx->pc = 0x4222F8u;
    {
        const bool branch_taken_0x4222f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4222FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4222F8u;
        // 0x4222fc: 0x300382d  daddu       $a3, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4222f8) {
            ctx->pc = 0x4220B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4220b8;
        }
    }
    ctx->pc = 0x422300u;
label_422300:
    // 0x422300: 0x10000002  b           . + 4 + (0x2 << 2)
label_422304:
    if (ctx->pc == 0x422304u) {
        ctx->pc = 0x422304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422300u;
        // 0x422304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422308u;
        goto label_422308;
    }
    ctx->pc = 0x422300u;
    {
        const bool branch_taken_0x422300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x422304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422300u;
        // 0x422304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422300) {
            ctx->pc = 0x42230Cu;
            goto label_42230c;
        }
    }
    ctx->pc = 0x422308u;
label_422308:
    // 0x422308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x422308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42230c:
    // 0x42230c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x42230cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_422310:
    // 0x422310: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x422310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_422314:
    // 0x422314: 0x3e00008  jr          $ra
label_422318:
    if (ctx->pc == 0x422318u) {
        ctx->pc = 0x422318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422314u;
        // 0x422318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42231Cu;
        goto label_42231c;
    }
    ctx->pc = 0x422314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422314u;
        // 0x422318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42231Cu;
label_42231c:
    // 0x42231c: 0x0  nop
    ctx->pc = 0x42231cu;
    // NOP
label_422320:
    // 0x422320: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x422320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_422324:
    // 0x422324: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x422324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_422328:
    // 0x422328: 0x8ccc0004  lw          $t4, 0x4($a2)
    ctx->pc = 0x422328u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_42232c:
    // 0x42232c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x42232cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_422330:
    // 0x422330: 0x8cd80008  lw          $t8, 0x8($a2)
    ctx->pc = 0x422330u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_422334:
    // 0x422334: 0x8cd90010  lw          $t9, 0x10($a2)
    ctx->pc = 0x422334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_422338:
    // 0x422338: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_42233c:
    if (ctx->pc == 0x42233Cu) {
        ctx->pc = 0x42233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422338u;
        // 0x42233c: 0x8cc40014  lw          $a0, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422340u;
        goto label_422340;
    }
    ctx->pc = 0x422338u;
    {
        const bool branch_taken_0x422338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422338u;
        // 0x42233c: 0x8cc40014  lw          $a0, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422338) {
            ctx->pc = 0x422370u;
            goto label_422370;
        }
    }
    ctx->pc = 0x422340u;
label_422340:
    // 0x422340: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x422340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_422344:
    // 0x422344: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_422348:
    if (ctx->pc == 0x422348u) {
        ctx->pc = 0x422348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422344u;
        // 0x422348: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42234Cu;
        goto label_42234c;
    }
    ctx->pc = 0x422344u;
    {
        const bool branch_taken_0x422344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x422348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422344u;
        // 0x422348: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422344) {
            ctx->pc = 0x42235Cu;
            goto label_42235c;
        }
    }
    ctx->pc = 0x42234Cu;
label_42234c:
    // 0x42234c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_422350:
    if (ctx->pc == 0x422350u) {
        ctx->pc = 0x422350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42234Cu;
        // 0x422350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422354u;
        goto label_422354;
    }
    ctx->pc = 0x42234Cu;
    {
        const bool branch_taken_0x42234c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x422350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42234Cu;
        // 0x422350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42234c) {
            ctx->pc = 0x422370u;
            goto label_422370;
        }
    }
    ctx->pc = 0x422354u;
label_422354:
    // 0x422354: 0x1000010e  b           . + 4 + (0x10E << 2)
label_422358:
    if (ctx->pc == 0x422358u) {
        ctx->pc = 0x42235Cu;
        goto label_42235c;
    }
    ctx->pc = 0x422354u;
    {
        const bool branch_taken_0x422354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x422354) {
            ctx->pc = 0x422790u;
            goto label_422790;
        }
    }
    ctx->pc = 0x42235Cu;
label_42235c:
    // 0x42235c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x42235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_422360:
    // 0x422360: 0x10620090  beq         $v1, $v0, . + 4 + (0x90 << 2)
label_422364:
    if (ctx->pc == 0x422364u) {
        ctx->pc = 0x422364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422360u;
        // 0x422364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422368u;
        goto label_422368;
    }
    ctx->pc = 0x422360u;
    {
        const bool branch_taken_0x422360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x422364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422360u;
        // 0x422364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422360) {
            ctx->pc = 0x4225A4u;
            goto label_4225a4;
        }
    }
    ctx->pc = 0x422368u;
label_422368:
    // 0x422368: 0x10000109  b           . + 4 + (0x109 << 2)
label_42236c:
    if (ctx->pc == 0x42236Cu) {
        ctx->pc = 0x422370u;
        goto label_422370;
    }
    ctx->pc = 0x422368u;
    {
        const bool branch_taken_0x422368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x422368) {
            ctx->pc = 0x422790u;
            goto label_422790;
        }
    }
    ctx->pc = 0x422370u;
label_422370:
    // 0x422370: 0x8cc60018  lw          $a2, 0x18($a2)
    ctx->pc = 0x422370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_422374:
    // 0x422374: 0x1b000105  blez        $t8, . + 4 + (0x105 << 2)
label_422378:
    if (ctx->pc == 0x422378u) {
        ctx->pc = 0x422378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422374u;
        // 0x422378: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42237Cu;
        goto label_42237c;
    }
    ctx->pc = 0x422374u;
    {
        const bool branch_taken_0x422374 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x422378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422374u;
        // 0x422378: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422374) {
            ctx->pc = 0x42278Cu;
            goto label_42278c;
        }
    }
    ctx->pc = 0x42237Cu;
label_42237c:
    // 0x42237c: 0x0  nop
    ctx->pc = 0x42237cu;
    // NOP
label_422380:
    // 0x422380: 0x246e0001  addiu       $t6, $v1, 0x1
    ctx->pc = 0x422380u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_422384:
    // 0x422384: 0x1256821  addu        $t5, $t1, $a1
    ctx->pc = 0x422384u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_422388:
    // 0x422388: 0x1980007f  blez        $t4, . + 4 + (0x7F << 2)
label_42238c:
    if (ctx->pc == 0x42238Cu) {
        ctx->pc = 0x42238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422388u;
        // 0x42238c: 0x997821  addu        $t7, $a0, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422390u;
        goto label_422390;
    }
    ctx->pc = 0x422388u;
    {
        const bool branch_taken_0x422388 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x42238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422388u;
        // 0x42238c: 0x997821  addu        $t7, $a0, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422388) {
            ctx->pc = 0x422588u;
            goto label_422588;
        }
    }
    ctx->pc = 0x422390u;
label_422390:
    // 0x422390: 0xc1023  negu        $v0, $t4
    ctx->pc = 0x422390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_422394:
    // 0x422394: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x422394u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_422398:
    // 0x422398: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x422398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_42239c:
    // 0x42239c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x42239cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4223a0:
    // 0x4223a0: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_4223a4:
    if (ctx->pc == 0x4223A4u) {
        ctx->pc = 0x4223A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4223A0u;
        // 0x4223a4: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4223A8u;
        goto label_4223a8;
    }
    ctx->pc = 0x4223A0u;
    {
        const bool branch_taken_0x4223a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4223A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4223A0u;
        // 0x4223a4: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4223a0) {
            ctx->pc = 0x42248Cu;
            goto label_42248c;
        }
    }
    ctx->pc = 0x4223A8u;
label_4223a8:
    // 0x4223a8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4223a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4223ac:
    // 0x4223ac: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_4223b0:
    if (ctx->pc == 0x4223B0u) {
        ctx->pc = 0x4223B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4223ACu;
        // 0x4223b0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4223B4u;
        goto label_4223b4;
    }
    ctx->pc = 0x4223ACu;
    {
        const bool branch_taken_0x4223ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4223B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4223ACu;
        // 0x4223b0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4223ac) {
            ctx->pc = 0x422444u;
            goto label_422444;
        }
    }
    ctx->pc = 0x4223B4u;
label_4223b4:
    // 0x4223b4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_4223b8:
    if (ctx->pc == 0x4223B8u) {
        ctx->pc = 0x4223B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4223B4u;
        // 0x4223b8: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4223BCu;
        goto label_4223bc;
    }
    ctx->pc = 0x4223B4u;
    {
        const bool branch_taken_0x4223b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4223b4) {
            ctx->pc = 0x4223B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4223B4u;
            // 0x4223b8: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x422404u;
            goto label_422404;
        }
    }
    ctx->pc = 0x4223BCu;
label_4223bc:
    // 0x4223bc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4223bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4223c0:
    // 0x4223c0: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x4223c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4223c4:
    // 0x4223c4: 0x252a0002  addiu       $t2, $t1, 0x2
    ctx->pc = 0x4223c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_4223c8:
    // 0x4223c8: 0x258bffff  addiu       $t3, $t4, -0x1
    ctx->pc = 0x4223c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_4223cc:
    // 0x4223cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4223ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4223d0:
    // 0x4223d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4223d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4223d4:
    // 0x4223d4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4223d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4223d8:
    // 0x4223d8: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x4223d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_4223dc:
    // 0x4223dc: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x4223dcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4223e0:
    // 0x4223e0: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x4223e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_4223e4:
    // 0x4223e4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x4223e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4223e8:
    // 0x4223e8: 0x3044f800  andi        $a0, $v0, 0xF800
    ctx->pc = 0x4223e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_4223ec:
    // 0x4223ec: 0x306207e0  andi        $v0, $v1, 0x7E0
    ctx->pc = 0x4223ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_4223f0:
    // 0x4223f0: 0x718c2  srl         $v1, $a3, 3
    ctx->pc = 0x4223f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
label_4223f4:
    // 0x4223f4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x4223f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4223f8:
    // 0x4223f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4223f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4223fc:
    // 0x4223fc: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4223fcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
label_422400:
    // 0x422400: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x422400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_422404:
    // 0x422404: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x422404u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_422408:
    // 0x422408: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x422408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_42240c:
    // 0x42240c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42240cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_422410:
    // 0x422410: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x422410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_422414:
    // 0x422414: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x422414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_422418:
    // 0x422418: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x422418u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_42241c:
    // 0x42241c: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x42241cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_422420:
    // 0x422420: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x422420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_422424:
    // 0x422424: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x422424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_422428:
    // 0x422428: 0x3044f800  andi        $a0, $v0, 0xF800
    ctx->pc = 0x422428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_42242c:
    // 0x42242c: 0x306207e0  andi        $v0, $v1, 0x7E0
    ctx->pc = 0x42242cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_422430:
    // 0x422430: 0x718c2  srl         $v1, $a3, 3
    ctx->pc = 0x422430u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
label_422434:
    // 0x422434: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x422434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_422438:
    // 0x422438: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x422438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42243c:
    // 0x42243c: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x42243cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
label_422440:
    // 0x422440: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x422440u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
label_422444:
    // 0x422444: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x422444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_422448:
    // 0x422448: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x422448u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_42244c:
    // 0x42244c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x42244cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_422450:
    // 0x422450: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x422450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_422454:
    // 0x422454: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x422454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_422458:
    // 0x422458: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x422458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_42245c:
    // 0x42245c: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x42245cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_422460:
    // 0x422460: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x422460u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_422464:
    // 0x422464: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x422464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_422468:
    // 0x422468: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x422468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_42246c:
    // 0x42246c: 0x3044f800  andi        $a0, $v0, 0xF800
    ctx->pc = 0x42246cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_422470:
    // 0x422470: 0x306207e0  andi        $v0, $v1, 0x7E0
    ctx->pc = 0x422470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_422474:
    // 0x422474: 0x718c2  srl         $v1, $a3, 3
    ctx->pc = 0x422474u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
label_422478:
    // 0x422478: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x422478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_42247c:
    // 0x42247c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x42247cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_422480:
    // 0x422480: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x422480u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
label_422484:
    // 0x422484: 0x11600040  beqz        $t3, . + 4 + (0x40 << 2)
label_422488:
    if (ctx->pc == 0x422488u) {
        ctx->pc = 0x422488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422484u;
        // 0x422488: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42248Cu;
        goto label_42248c;
    }
    ctx->pc = 0x422484u;
    {
        const bool branch_taken_0x422484 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x422488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422484u;
        // 0x422488: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422484) {
            ctx->pc = 0x422588u;
            goto label_422588;
        }
    }
    ctx->pc = 0x42248Cu;
label_42248c:
    // 0x42248c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x42248cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_422490:
    // 0x422490: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x422490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_422494:
    // 0x422494: 0x0  nop
    ctx->pc = 0x422494u;
    // NOP
label_422498:
    // 0x422498: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x422498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_42249c:
    // 0x42249c: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x42249cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_4224a0:
    // 0x4224a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4224a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4224a4:
    // 0x4224a4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4224a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4224a8:
    // 0x4224a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4224a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4224ac:
    // 0x4224ac: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x4224acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_4224b0:
    // 0x4224b0: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x4224b0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4224b4:
    // 0x4224b4: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x4224b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_4224b8:
    // 0x4224b8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x4224b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4224bc:
    // 0x4224bc: 0x3044f800  andi        $a0, $v0, 0xF800
    ctx->pc = 0x4224bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_4224c0:
    // 0x4224c0: 0x306207e0  andi        $v0, $v1, 0x7E0
    ctx->pc = 0x4224c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_4224c4:
    // 0x4224c4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x4224c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4224c8:
    // 0x4224c8: 0x718c2  srl         $v1, $a3, 3
    ctx->pc = 0x4224c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
label_4224cc:
    // 0x4224cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4224ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4224d0:
    // 0x4224d0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4224d0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_4224d4:
    // 0x4224d4: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x4224d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_4224d8:
    // 0x4224d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4224d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4224dc:
    // 0x4224dc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4224dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4224e0:
    // 0x4224e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4224e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4224e4:
    // 0x4224e4: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x4224e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_4224e8:
    // 0x4224e8: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x4224e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4224ec:
    // 0x4224ec: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x4224ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_4224f0:
    // 0x4224f0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x4224f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4224f4:
    // 0x4224f4: 0x3044f800  andi        $a0, $v0, 0xF800
    ctx->pc = 0x4224f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_4224f8:
    // 0x4224f8: 0x306207e0  andi        $v0, $v1, 0x7E0
    ctx->pc = 0x4224f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_4224fc:
    // 0x4224fc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x4224fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_422500:
    // 0x422500: 0x718c2  srl         $v1, $a3, 3
    ctx->pc = 0x422500u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
label_422504:
    // 0x422504: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x422504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_422508:
    // 0x422508: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x422508u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
label_42250c:
    // 0x42250c: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x42250cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_422510:
    // 0x422510: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x422510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_422514:
    // 0x422514: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x422514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_422518:
    // 0x422518: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x422518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_42251c:
    // 0x42251c: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x42251cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_422520:
    // 0x422520: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x422520u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_422524:
    // 0x422524: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x422524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_422528:
    // 0x422528: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x422528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_42252c:
    // 0x42252c: 0x3044f800  andi        $a0, $v0, 0xF800
    ctx->pc = 0x42252cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_422530:
    // 0x422530: 0x306207e0  andi        $v0, $v1, 0x7E0
    ctx->pc = 0x422530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_422534:
    // 0x422534: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x422534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_422538:
    // 0x422538: 0x718c2  srl         $v1, $a3, 3
    ctx->pc = 0x422538u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
label_42253c:
    // 0x42253c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x42253cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_422540:
    // 0x422540: 0xa5020004  sh          $v0, 0x4($t0)
    ctx->pc = 0x422540u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 2));
label_422544:
    // 0x422544: 0x91220003  lbu         $v0, 0x3($t1)
    ctx->pc = 0x422544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_422548:
    // 0x422548: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x422548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_42254c:
    // 0x42254c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42254cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_422550:
    // 0x422550: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x422550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_422554:
    // 0x422554: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x422554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_422558:
    // 0x422558: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x422558u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_42255c:
    // 0x42255c: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x42255cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_422560:
    // 0x422560: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x422560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_422564:
    // 0x422564: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x422564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_422568:
    // 0x422568: 0x3044f800  andi        $a0, $v0, 0xF800
    ctx->pc = 0x422568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_42256c:
    // 0x42256c: 0x306207e0  andi        $v0, $v1, 0x7E0
    ctx->pc = 0x42256cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_422570:
    // 0x422570: 0x718c2  srl         $v1, $a3, 3
    ctx->pc = 0x422570u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 3));
label_422574:
    // 0x422574: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x422574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_422578:
    // 0x422578: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x422578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42257c:
    // 0x42257c: 0xa5020006  sh          $v0, 0x6($t0)
    ctx->pc = 0x42257cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 2));
label_422580:
    // 0x422580: 0x1560ffc5  bnez        $t3, . + 4 + (-0x3B << 2)
label_422584:
    if (ctx->pc == 0x422584u) {
        ctx->pc = 0x422584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422580u;
        // 0x422584: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422588u;
        goto label_422588;
    }
    ctx->pc = 0x422580u;
    {
        const bool branch_taken_0x422580 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x422584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422580u;
        // 0x422584: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422580) {
            ctx->pc = 0x422498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422498;
        }
    }
    ctx->pc = 0x422588u;
label_422588:
    // 0x422588: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x422588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_42258c:
    // 0x42258c: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x42258cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_422590:
    // 0x422590: 0x78102a  slt         $v0, $v1, $t8
    ctx->pc = 0x422590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
label_422594:
    // 0x422594: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
label_422598:
    if (ctx->pc == 0x422598u) {
        ctx->pc = 0x422598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422594u;
        // 0x422598: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42259Cu;
        goto label_42259c;
    }
    ctx->pc = 0x422594u;
    {
        const bool branch_taken_0x422594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422594u;
        // 0x422598: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422594) {
            ctx->pc = 0x422380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422380;
        }
    }
    ctx->pc = 0x42259Cu;
label_42259c:
    // 0x42259c: 0x3e00008  jr          $ra
label_4225a0:
    if (ctx->pc == 0x4225A0u) {
        ctx->pc = 0x4225A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42259Cu;
        // 0x4225a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4225A4u;
        goto label_4225a4;
    }
    ctx->pc = 0x42259Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4225A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42259Cu;
        // 0x4225a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42259Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4225A4u;
label_4225a4:
    // 0x4225a4: 0x1b000079  blez        $t8, . + 4 + (0x79 << 2)
label_4225a8:
    if (ctx->pc == 0x4225A8u) {
        ctx->pc = 0x4225A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4225A4u;
        // 0x4225a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4225ACu;
        goto label_4225ac;
    }
    ctx->pc = 0x4225A4u;
    {
        const bool branch_taken_0x4225a4 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x4225A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4225A4u;
        // 0x4225a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4225a4) {
            ctx->pc = 0x42278Cu;
            goto label_42278c;
        }
    }
    ctx->pc = 0x4225ACu;
label_4225ac:
    // 0x4225ac: 0x0  nop
    ctx->pc = 0x4225acu;
    // NOP
label_4225b0:
    // 0x4225b0: 0x246e0001  addiu       $t6, $v1, 0x1
    ctx->pc = 0x4225b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4225b4:
    // 0x4225b4: 0x1256821  addu        $t5, $t1, $a1
    ctx->pc = 0x4225b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_4225b8:
    // 0x4225b8: 0x1980006d  blez        $t4, . + 4 + (0x6D << 2)
label_4225bc:
    if (ctx->pc == 0x4225BCu) {
        ctx->pc = 0x4225BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4225B8u;
        // 0x4225bc: 0x997821  addu        $t7, $a0, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4225C0u;
        goto label_4225c0;
    }
    ctx->pc = 0x4225B8u;
    {
        const bool branch_taken_0x4225b8 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x4225BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4225B8u;
        // 0x4225bc: 0x997821  addu        $t7, $a0, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4225b8) {
            ctx->pc = 0x422770u;
            goto label_422770;
        }
    }
    ctx->pc = 0x4225C0u;
label_4225c0:
    // 0x4225c0: 0xc1023  negu        $v0, $t4
    ctx->pc = 0x4225c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_4225c4:
    // 0x4225c4: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x4225c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_4225c8:
    // 0x4225c8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4225c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4225cc:
    // 0x4225cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4225ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4225d0:
    // 0x4225d0: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_4225d4:
    if (ctx->pc == 0x4225D4u) {
        ctx->pc = 0x4225D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4225D0u;
        // 0x4225d4: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4225D8u;
        goto label_4225d8;
    }
    ctx->pc = 0x4225D0u;
    {
        const bool branch_taken_0x4225d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4225D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4225D0u;
        // 0x4225d4: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4225d0) {
            ctx->pc = 0x422698u;
            goto label_422698;
        }
    }
    ctx->pc = 0x4225D8u;
label_4225d8:
    // 0x4225d8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4225d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4225dc:
    // 0x4225dc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_4225e0:
    if (ctx->pc == 0x4225E0u) {
        ctx->pc = 0x4225E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4225DCu;
        // 0x4225e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4225E4u;
        goto label_4225e4;
    }
    ctx->pc = 0x4225DCu;
    {
        const bool branch_taken_0x4225dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4225E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4225DCu;
        // 0x4225e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4225dc) {
            ctx->pc = 0x42265Cu;
            goto label_42265c;
        }
    }
    ctx->pc = 0x4225E4u;
label_4225e4:
    // 0x4225e4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4225e8:
    if (ctx->pc == 0x4225E8u) {
        ctx->pc = 0x4225E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4225E4u;
        // 0x4225e8: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4225ECu;
        goto label_4225ec;
    }
    ctx->pc = 0x4225E4u;
    {
        const bool branch_taken_0x4225e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4225e4) {
            ctx->pc = 0x4225E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4225E4u;
            // 0x4225e8: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x422628u;
            goto label_422628;
        }
    }
    ctx->pc = 0x4225ECu;
label_4225ec:
    // 0x4225ec: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4225ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4225f0:
    // 0x4225f0: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x4225f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4225f4:
    // 0x4225f4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x4225f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_4225f8:
    // 0x4225f8: 0x25270002  addiu       $a3, $t1, 0x2
    ctx->pc = 0x4225f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_4225fc:
    // 0x4225fc: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x4225fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_422600:
    // 0x422600: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x422600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_422604:
    // 0x422604: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x422604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_422608:
    // 0x422608: 0x3042f800  andi        $v0, $v0, 0xF800
    ctx->pc = 0x422608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_42260c:
    // 0x42260c: 0x306307e0  andi        $v1, $v1, 0x7E0
    ctx->pc = 0x42260cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_422610:
    // 0x422610: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x422610u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_422614:
    // 0x422614: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x422614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_422618:
    // 0x422618: 0x258bffff  addiu       $t3, $t4, -0x1
    ctx->pc = 0x422618u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_42261c:
    // 0x42261c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x42261cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_422620:
    // 0x422620: 0xa5240000  sh          $a0, 0x0($t1)
    ctx->pc = 0x422620u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 4));
label_422624:
    // 0x422624: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x422624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_422628:
    // 0x422628: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x422628u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_42262c:
    // 0x42262c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x42262cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_422630:
    // 0x422630: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x422630u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_422634:
    // 0x422634: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x422634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_422638:
    // 0x422638: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x422638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_42263c:
    // 0x42263c: 0x3042f800  andi        $v0, $v0, 0xF800
    ctx->pc = 0x42263cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_422640:
    // 0x422640: 0x306307e0  andi        $v1, $v1, 0x7E0
    ctx->pc = 0x422640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_422644:
    // 0x422644: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x422644u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_422648:
    // 0x422648: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x422648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42264c:
    // 0x42264c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x42264cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_422650:
    // 0x422650: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x422650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_422654:
    // 0x422654: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x422654u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_422658:
    // 0x422658: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x422658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_42265c:
    // 0x42265c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x42265cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_422660:
    // 0x422660: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x422660u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_422664:
    // 0x422664: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x422664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_422668:
    // 0x422668: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x422668u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_42266c:
    // 0x42266c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x42266cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_422670:
    // 0x422670: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x422670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_422674:
    // 0x422674: 0x3042f800  andi        $v0, $v0, 0xF800
    ctx->pc = 0x422674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_422678:
    // 0x422678: 0x306307e0  andi        $v1, $v1, 0x7E0
    ctx->pc = 0x422678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_42267c:
    // 0x42267c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x42267cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_422680:
    // 0x422680: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x422680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_422684:
    // 0x422684: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x422684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_422688:
    // 0x422688: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x422688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_42268c:
    // 0x42268c: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x42268cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_422690:
    // 0x422690: 0x11600037  beqz        $t3, . + 4 + (0x37 << 2)
label_422694:
    if (ctx->pc == 0x422694u) {
        ctx->pc = 0x422694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422690u;
        // 0x422694: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422698u;
        goto label_422698;
    }
    ctx->pc = 0x422690u;
    {
        const bool branch_taken_0x422690 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x422694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422690u;
        // 0x422694: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422690) {
            ctx->pc = 0x422770u;
            goto label_422770;
        }
    }
    ctx->pc = 0x422698u;
label_422698:
    // 0x422698: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x422698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_42269c:
    // 0x42269c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x42269cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4226a0:
    // 0x4226a0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4226a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4226a4:
    // 0x4226a4: 0x0  nop
    ctx->pc = 0x4226a4u;
    // NOP
label_4226a8:
    // 0x4226a8: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x4226a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_4226ac:
    // 0x4226ac: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x4226acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_4226b0:
    // 0x4226b0: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x4226b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_4226b4:
    // 0x4226b4: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x4226b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_4226b8:
    // 0x4226b8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4226b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_4226bc:
    // 0x4226bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4226bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4226c0:
    // 0x4226c0: 0x3084f800  andi        $a0, $a0, 0xF800
    ctx->pc = 0x4226c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63488);
label_4226c4:
    // 0x4226c4: 0x304207e0  andi        $v0, $v0, 0x7E0
    ctx->pc = 0x4226c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2016);
label_4226c8:
    // 0x4226c8: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x4226c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_4226cc:
    // 0x4226cc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4226ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4226d0:
    // 0x4226d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4226d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4226d4:
    // 0x4226d4: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x4226d4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
label_4226d8:
    // 0x4226d8: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x4226d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_4226dc:
    // 0x4226dc: 0x91030005  lbu         $v1, 0x5($t0)
    ctx->pc = 0x4226dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
label_4226e0:
    // 0x4226e0: 0x90c40006  lbu         $a0, 0x6($a2)
    ctx->pc = 0x4226e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
label_4226e4:
    // 0x4226e4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4226e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_4226e8:
    // 0x4226e8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4226e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4226ec:
    // 0x4226ec: 0x3042f800  andi        $v0, $v0, 0xF800
    ctx->pc = 0x4226ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_4226f0:
    // 0x4226f0: 0x306307e0  andi        $v1, $v1, 0x7E0
    ctx->pc = 0x4226f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_4226f4:
    // 0x4226f4: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x4226f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_4226f8:
    // 0x4226f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4226f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4226fc:
    // 0x4226fc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4226fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_422700:
    // 0x422700: 0xa5240002  sh          $a0, 0x2($t1)
    ctx->pc = 0x422700u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 4));
label_422704:
    // 0x422704: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x422704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_422708:
    // 0x422708: 0x91030009  lbu         $v1, 0x9($t0)
    ctx->pc = 0x422708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
label_42270c:
    // 0x42270c: 0x90c4000a  lbu         $a0, 0xA($a2)
    ctx->pc = 0x42270cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
label_422710:
    // 0x422710: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x422710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_422714:
    // 0x422714: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x422714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_422718:
    // 0x422718: 0x3042f800  andi        $v0, $v0, 0xF800
    ctx->pc = 0x422718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_42271c:
    // 0x42271c: 0x306307e0  andi        $v1, $v1, 0x7E0
    ctx->pc = 0x42271cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_422720:
    // 0x422720: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x422720u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_422724:
    // 0x422724: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x422724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_422728:
    // 0x422728: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x422728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_42272c:
    // 0x42272c: 0xa5240004  sh          $a0, 0x4($t1)
    ctx->pc = 0x42272cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 4));
label_422730:
    // 0x422730: 0x90e3000c  lbu         $v1, 0xC($a3)
    ctx->pc = 0x422730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
label_422734:
    // 0x422734: 0x9102000d  lbu         $v0, 0xD($t0)
    ctx->pc = 0x422734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
label_422738:
    // 0x422738: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x422738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_42273c:
    // 0x42273c: 0x90c4000e  lbu         $a0, 0xE($a2)
    ctx->pc = 0x42273cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 14)));
label_422740:
    // 0x422740: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x422740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_422744:
    // 0x422744: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x422744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_422748:
    // 0x422748: 0x3063f800  andi        $v1, $v1, 0xF800
    ctx->pc = 0x422748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
label_42274c:
    // 0x42274c: 0x304207e0  andi        $v0, $v0, 0x7E0
    ctx->pc = 0x42274cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2016);
label_422750:
    // 0x422750: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x422750u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_422754:
    // 0x422754: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x422754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_422758:
    // 0x422758: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x422758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_42275c:
    // 0x42275c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x42275cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_422760:
    // 0x422760: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x422760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_422764:
    // 0x422764: 0xa5240006  sh          $a0, 0x6($t1)
    ctx->pc = 0x422764u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 6), (uint16_t)GPR_U32(ctx, 4));
label_422768:
    // 0x422768: 0x1560ffcf  bnez        $t3, . + 4 + (-0x31 << 2)
label_42276c:
    if (ctx->pc == 0x42276Cu) {
        ctx->pc = 0x42276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422768u;
        // 0x42276c: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422770u;
        goto label_422770;
    }
    ctx->pc = 0x422768u;
    {
        const bool branch_taken_0x422768 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x42276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422768u;
        // 0x42276c: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422768) {
            ctx->pc = 0x4226A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4226a8;
        }
    }
    ctx->pc = 0x422770u;
label_422770:
    // 0x422770: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x422770u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_422774:
    // 0x422774: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x422774u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_422778:
    // 0x422778: 0x78102a  slt         $v0, $v1, $t8
    ctx->pc = 0x422778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
label_42277c:
    // 0x42277c: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
label_422780:
    if (ctx->pc == 0x422780u) {
        ctx->pc = 0x422780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42277Cu;
        // 0x422780: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422784u;
        goto label_422784;
    }
    ctx->pc = 0x42277Cu;
    {
        const bool branch_taken_0x42277c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42277Cu;
        // 0x422780: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42277c) {
            ctx->pc = 0x4225B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4225b0;
        }
    }
    ctx->pc = 0x422784u;
label_422784:
    // 0x422784: 0x3e00008  jr          $ra
label_422788:
    if (ctx->pc == 0x422788u) {
        ctx->pc = 0x422788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422784u;
        // 0x422788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42278Cu;
        goto label_42278c;
    }
    ctx->pc = 0x422784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422784u;
        // 0x422788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42278Cu;
label_42278c:
    // 0x42278c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_422790:
    // 0x422790: 0x3e00008  jr          $ra
label_422794:
    if (ctx->pc == 0x422794u) {
        ctx->pc = 0x422798u;
        goto label_422798;
    }
    ctx->pc = 0x422790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422798u;
label_422798:
    // 0x422798: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x422798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_42279c:
    // 0x42279c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4227a0:
    // 0x4227a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4227a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4227a4:
    // 0x4227a4: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x4227a4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4227a8:
    // 0x4227a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4227a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4227ac:
    // 0x4227ac: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x4227acu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4227b0:
    // 0x4227b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4227b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4227b4:
    // 0x4227b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4227b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4227b8:
    // 0x4227b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4227b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4227bc:
    // 0x4227bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4227bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4227c0:
    // 0x4227c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4227c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4227c4:
    // 0x4227c4: 0x2428004  sllv        $s0, $v0, $s2
    ctx->pc = 0x4227c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
label_4227c8:
    // 0x4227c8: 0x7fb50000  sq          $s5, 0x0($sp)
    ctx->pc = 0x4227c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 21));
label_4227cc:
    // 0x4227cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4227ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4227d0:
    // 0x4227d0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x4227d0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4227d4:
    // 0x4227d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4227d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4227d8:
    // 0x4227d8: 0x8cd90018  lw          $t9, 0x18($a2)
    ctx->pc = 0x4227d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_4227dc:
    // 0x4227dc: 0x1a00006b  blez        $s0, . + 4 + (0x6B << 2)
label_4227e0:
    if (ctx->pc == 0x4227E0u) {
        ctx->pc = 0x4227E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4227DCu;
        // 0x4227e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4227E4u;
        goto label_4227e4;
    }
    ctx->pc = 0x4227DCu;
    {
        const bool branch_taken_0x4227dc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4227E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4227DCu;
        // 0x4227e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4227dc) {
            ctx->pc = 0x42298Cu;
            goto label_42298c;
        }
    }
    ctx->pc = 0x4227E4u;
label_4227e4:
    // 0x4227e4: 0x8cd50010  lw          $s5, 0x10($a2)
    ctx->pc = 0x4227e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_4227e8:
    // 0x4227e8: 0x1a000064  blez        $s0, . + 4 + (0x64 << 2)
label_4227ec:
    if (ctx->pc == 0x4227ECu) {
        ctx->pc = 0x4227ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4227E8u;
        // 0x4227ec: 0x24740001  addiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4227F0u;
        goto label_4227f0;
    }
    ctx->pc = 0x4227E8u;
    {
        const bool branch_taken_0x4227e8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4227ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4227E8u;
        // 0x4227ec: 0x24740001  addiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4227e8) {
            ctx->pc = 0x42297Cu;
            goto label_42297c;
        }
    }
    ctx->pc = 0x4227F0u;
label_4227f0:
    // 0x4227f0: 0x101023  negu        $v0, $s0
    ctx->pc = 0x4227f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_4227f4:
    // 0x4227f4: 0x200682d  daddu       $t5, $s0, $zero
    ctx->pc = 0x4227f4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4227f8:
    // 0x4227f8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4227f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4227fc:
    // 0x4227fc: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_422800:
    if (ctx->pc == 0x422800u) {
        ctx->pc = 0x422800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4227FCu;
        // 0x422800: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422804u;
        goto label_422804;
    }
    ctx->pc = 0x4227FCu;
    {
        const bool branch_taken_0x4227fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x422800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4227FCu;
        // 0x422800: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4227fc) {
            ctx->pc = 0x4228B8u;
            goto label_4228b8;
        }
    }
    ctx->pc = 0x422804u;
label_422804:
    // 0x422804: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x422804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_422808:
    // 0x422808: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_42280c:
    if (ctx->pc == 0x42280Cu) {
        ctx->pc = 0x42280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422808u;
        // 0x42280c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x422810u;
        goto label_422810;
    }
    ctx->pc = 0x422808u;
    {
        const bool branch_taken_0x422808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422808u;
        // 0x42280c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x422808) {
            ctx->pc = 0x422880u;
            goto label_422880;
        }
    }
    ctx->pc = 0x422810u;
label_422810:
    // 0x422810: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_422814:
    if (ctx->pc == 0x422814u) {
        ctx->pc = 0x422814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422810u;
        // 0x422814: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422818u;
        goto label_422818;
    }
    ctx->pc = 0x422810u;
    {
        const bool branch_taken_0x422810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x422810) {
            ctx->pc = 0x422814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x422810u;
            // 0x422814: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x422850u;
            goto label_422850;
        }
    }
    ctx->pc = 0x422818u;
label_422818:
    // 0x422818: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x422818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_42281c:
    // 0x42281c: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x42281cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_422820:
    // 0x422820: 0x260dffff  addiu       $t5, $s0, -0x1
    ctx->pc = 0x422820u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_422824:
    // 0x422824: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x422824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_422828:
    // 0x422828: 0x3221021  addu        $v0, $t9, $v0
    ctx->pc = 0x422828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_42282c:
    // 0x42282c: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x42282cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_422830:
    // 0x422830: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x422830u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_422834:
    // 0x422834: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x422834u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_422838:
    // 0x422838: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x422838u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_42283c:
    // 0x42283c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x42283cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_422840:
    // 0x422840: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x422840u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_422844:
    // 0x422844: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x422844u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
label_422848:
    // 0x422848: 0x304c021  addu        $t8, $t8, $a0
    ctx->pc = 0x422848u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
label_42284c:
    // 0x42284c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x42284cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_422850:
    // 0x422850: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x422850u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_422854:
    // 0x422854: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x422854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_422858:
    // 0x422858: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x422858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42285c:
    // 0x42285c: 0x3221021  addu        $v0, $t9, $v0
    ctx->pc = 0x42285cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_422860:
    // 0x422860: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x422860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_422864:
    // 0x422864: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x422864u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_422868:
    // 0x422868: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x422868u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_42286c:
    // 0x42286c: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x42286cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_422870:
    // 0x422870: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x422870u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_422874:
    // 0x422874: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x422874u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_422878:
    // 0x422878: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x422878u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
label_42287c:
    // 0x42287c: 0x304c021  addu        $t8, $t8, $a0
    ctx->pc = 0x42287cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
label_422880:
    // 0x422880: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x422880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_422884:
    // 0x422884: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x422884u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_422888:
    // 0x422888: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x422888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_42288c:
    // 0x42288c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42288cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_422890:
    // 0x422890: 0x3221021  addu        $v0, $t9, $v0
    ctx->pc = 0x422890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_422894:
    // 0x422894: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x422894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_422898:
    // 0x422898: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x422898u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_42289c:
    // 0x42289c: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x42289cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_4228a0:
    // 0x4228a0: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x4228a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_4228a4:
    // 0x4228a4: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x4228a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4228a8:
    // 0x4228a8: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x4228a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_4228ac:
    // 0x4228ac: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x4228acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
label_4228b0:
    // 0x4228b0: 0x11a00032  beqz        $t5, . + 4 + (0x32 << 2)
label_4228b4:
    if (ctx->pc == 0x4228B4u) {
        ctx->pc = 0x4228B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4228B0u;
        // 0x4228b4: 0x304c021  addu        $t8, $t8, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4228B8u;
        goto label_4228b8;
    }
    ctx->pc = 0x4228B0u;
    {
        const bool branch_taken_0x4228b0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x4228B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4228B0u;
        // 0x4228b4: 0x304c021  addu        $t8, $t8, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4228b0) {
            ctx->pc = 0x42297Cu;
            goto label_42297c;
        }
    }
    ctx->pc = 0x4228B8u;
label_4228b8:
    // 0x4228b8: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x4228b8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4228bc:
    // 0x4228bc: 0x0  nop
    ctx->pc = 0x4228bcu;
    // NOP
label_4228c0:
    // 0x4228c0: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4228c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_4228c4:
    // 0x4228c4: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x4228c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
label_4228c8:
    // 0x4228c8: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x4228c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
label_4228cc:
    // 0x4228cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4228ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4228d0:
    // 0x4228d0: 0x91840002  lbu         $a0, 0x2($t4)
    ctx->pc = 0x4228d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
label_4228d4:
    // 0x4228d4: 0x3221021  addu        $v0, $t9, $v0
    ctx->pc = 0x4228d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_4228d8:
    // 0x4228d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4228d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4228dc:
    // 0x4228dc: 0x3231821  addu        $v1, $t9, $v1
    ctx->pc = 0x4228dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
label_4228e0:
    // 0x4228e0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4228e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4228e4:
    // 0x4228e4: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x4228e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_4228e8:
    // 0x4228e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4228e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4228ec:
    // 0x4228ec: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x4228ecu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_4228f0:
    // 0x4228f0: 0x1c67021  addu        $t6, $t6, $a2
    ctx->pc = 0x4228f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
label_4228f4:
    // 0x4228f4: 0x90490003  lbu         $t1, 0x3($v0)
    ctx->pc = 0x4228f4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_4228f8:
    // 0x4228f8: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x4228f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
label_4228fc:
    // 0x4228fc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4228fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_422900:
    // 0x422900: 0x3242021  addu        $a0, $t9, $a0
    ctx->pc = 0x422900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
label_422904:
    // 0x422904: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x422904u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_422908:
    // 0x422908: 0x308c021  addu        $t8, $t8, $t0
    ctx->pc = 0x422908u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 8)));
label_42290c:
    // 0x42290c: 0x90670002  lbu         $a3, 0x2($v1)
    ctx->pc = 0x42290cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_422910:
    // 0x422910: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x422910u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_422914:
    // 0x422914: 0x91850003  lbu         $a1, 0x3($t4)
    ctx->pc = 0x422914u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
label_422918:
    // 0x422918: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x422918u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
label_42291c:
    // 0x42291c: 0x906a0003  lbu         $t2, 0x3($v1)
    ctx->pc = 0x42291cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_422920:
    // 0x422920: 0x307c021  addu        $t8, $t8, $a3
    ctx->pc = 0x422920u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
label_422924:
    // 0x422924: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x422924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_422928:
    // 0x422928: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x422928u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_42292c:
    // 0x42292c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x42292cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_422930:
    // 0x422930: 0x3252821  addu        $a1, $t9, $a1
    ctx->pc = 0x422930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
label_422934:
    // 0x422934: 0x90880003  lbu         $t0, 0x3($a0)
    ctx->pc = 0x422934u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_422938:
    // 0x422938: 0x1c37021  addu        $t6, $t6, $v1
    ctx->pc = 0x422938u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_42293c:
    // 0x42293c: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x42293cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_422940:
    // 0x422940: 0x1e27821  addu        $t7, $t7, $v0
    ctx->pc = 0x422940u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_422944:
    // 0x422944: 0x1695821  addu        $t3, $t3, $t1
    ctx->pc = 0x422944u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_422948:
    // 0x422948: 0x90a70003  lbu         $a3, 0x3($a1)
    ctx->pc = 0x422948u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_42294c:
    // 0x42294c: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x42294cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_422950:
    // 0x422950: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x422950u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_422954:
    // 0x422954: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x422954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_422958:
    // 0x422958: 0x306c021  addu        $t8, $t8, $a2
    ctx->pc = 0x422958u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 6)));
label_42295c:
    // 0x42295c: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x42295cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_422960:
    // 0x422960: 0x1685821  addu        $t3, $t3, $t0
    ctx->pc = 0x422960u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_422964:
    // 0x422964: 0x1c47021  addu        $t6, $t6, $a0
    ctx->pc = 0x422964u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
label_422968:
    // 0x422968: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x422968u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
label_42296c:
    // 0x42296c: 0x302c021  addu        $t8, $t8, $v0
    ctx->pc = 0x42296cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
label_422970:
    // 0x422970: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x422970u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_422974:
    // 0x422974: 0x15a0ffd2  bnez        $t5, . + 4 + (-0x2E << 2)
label_422978:
    if (ctx->pc == 0x422978u) {
        ctx->pc = 0x422978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422974u;
        // 0x422978: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42297Cu;
        goto label_42297c;
    }
    ctx->pc = 0x422974u;
    {
        const bool branch_taken_0x422974 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x422978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422974u;
        // 0x422978: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422974) {
            ctx->pc = 0x4228C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4228c0;
        }
    }
    ctx->pc = 0x42297Cu;
label_42297c:
    // 0x42297c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x42297cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_422980:
    // 0x422980: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x422980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_422984:
    // 0x422984: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
label_422988:
    if (ctx->pc == 0x422988u) {
        ctx->pc = 0x422988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422984u;
        // 0x422988: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42298Cu;
        goto label_42298c;
    }
    ctx->pc = 0x422984u;
    {
        const bool branch_taken_0x422984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422984u;
        // 0x422988: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422984) {
            ctx->pc = 0x4227E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4227e8;
        }
    }
    ctx->pc = 0x42298Cu;
label_42298c:
    // 0x42298c: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x42298cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_422990:
    // 0x422990: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x422990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_422994:
    // 0x422994: 0x24b1007  srav        $v0, $t3, $s2
    ctx->pc = 0x422994u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 18) & 0x1F));
label_422998:
    // 0x422998: 0x24e1807  srav        $v1, $t6, $s2
    ctx->pc = 0x422998u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 18) & 0x1F));
label_42299c:
    // 0x42299c: 0x24f2007  srav        $a0, $t7, $s2
    ctx->pc = 0x42299cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 18) & 0x1F));
label_4229a0:
    // 0x4229a0: 0x2582807  srav        $a1, $t8, $s2
    ctx->pc = 0x4229a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 24), GPR_U32(ctx, 18) & 0x1F));
label_4229a4:
    // 0x4229a4: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x4229a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_4229a8:
    // 0x4229a8: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x4229a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_4229ac:
    // 0x4229ac: 0xa2640001  sb          $a0, 0x1($s3)
    ctx->pc = 0x4229acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 4));
label_4229b0:
    // 0x4229b0: 0xa2650002  sb          $a1, 0x2($s3)
    ctx->pc = 0x4229b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 5));
label_4229b4:
    // 0x4229b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4229b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4229b8:
    // 0x4229b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4229b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4229bc:
    // 0x4229bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4229bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4229c0:
    // 0x4229c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4229c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4229c4:
    // 0x4229c4: 0x7bb50000  lq          $s5, 0x0($sp)
    ctx->pc = 0x4229c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4229c8:
    // 0x4229c8: 0x3e00008  jr          $ra
label_4229cc:
    if (ctx->pc == 0x4229CCu) {
        ctx->pc = 0x4229CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4229C8u;
        // 0x4229cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4229D0u;
        goto label_4229d0;
    }
    ctx->pc = 0x4229C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4229CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4229C8u;
        // 0x4229cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4229C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4229D0u;
label_4229d0:
    // 0x4229d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4229d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4229d4:
    // 0x4229d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4229d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4229d8:
    // 0x4229d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4229d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4229dc:
    // 0x4229dc: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x4229dcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4229e0:
    // 0x4229e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4229e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4229e4:
    // 0x4229e4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4229e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4229e8:
    // 0x4229e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4229e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4229ec:
    // 0x4229ec: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x4229ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_4229f0:
    // 0x4229f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4229f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4229f4:
    // 0x4229f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4229f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4229f8:
    // 0x4229f8: 0x7fb40000  sq          $s4, 0x0($sp)
    ctx->pc = 0x4229f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 20));
label_4229fc:
    // 0x4229fc: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x4229fcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422a00:
    // 0x422a00: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x422a00u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422a04:
    // 0x422a04: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x422a04u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422a08:
    // 0x422a08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x422a08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422a0c:
    // 0x422a0c: 0x1a00005c  blez        $s0, . + 4 + (0x5C << 2)
label_422a10:
    if (ctx->pc == 0x422A10u) {
        ctx->pc = 0x422A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422A0Cu;
        // 0x422a10: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422A14u;
        goto label_422a14;
    }
    ctx->pc = 0x422A0Cu;
    {
        const bool branch_taken_0x422a0c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x422A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422A0Cu;
        // 0x422a10: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422a0c) {
            ctx->pc = 0x422B80u;
            goto label_422b80;
        }
    }
    ctx->pc = 0x422A14u;
label_422a14:
    // 0x422a14: 0x8cd40010  lw          $s4, 0x10($a2)
    ctx->pc = 0x422a14u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_422a18:
    // 0x422a18: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
label_422a1c:
    if (ctx->pc == 0x422A1Cu) {
        ctx->pc = 0x422A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422A18u;
        // 0x422a1c: 0x24720001  addiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422A20u;
        goto label_422a20;
    }
    ctx->pc = 0x422A18u;
    {
        const bool branch_taken_0x422a18 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x422A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422A18u;
        // 0x422a1c: 0x24720001  addiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422a18) {
            ctx->pc = 0x422B70u;
            goto label_422b70;
        }
    }
    ctx->pc = 0x422A20u;
label_422a20:
    // 0x422a20: 0x101023  negu        $v0, $s0
    ctx->pc = 0x422a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_422a24:
    // 0x422a24: 0x200682d  daddu       $t5, $s0, $zero
    ctx->pc = 0x422a24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_422a28:
    // 0x422a28: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x422a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_422a2c:
    // 0x422a2c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_422a30:
    if (ctx->pc == 0x422A30u) {
        ctx->pc = 0x422A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422A2Cu;
        // 0x422a30: 0x320302d  daddu       $a2, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422A34u;
        goto label_422a34;
    }
    ctx->pc = 0x422A2Cu;
    {
        const bool branch_taken_0x422a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x422A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422A2Cu;
        // 0x422a30: 0x320302d  daddu       $a2, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422a2c) {
            ctx->pc = 0x422AC4u;
            goto label_422ac4;
        }
    }
    ctx->pc = 0x422A34u;
label_422a34:
    // 0x422a34: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x422a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_422a38:
    // 0x422a38: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_422a3c:
    if (ctx->pc == 0x422A3Cu) {
        ctx->pc = 0x422A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422A38u;
        // 0x422a3c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x422A40u;
        goto label_422a40;
    }
    ctx->pc = 0x422A38u;
    {
        const bool branch_taken_0x422a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x422A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422A38u;
        // 0x422a3c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x422a38) {
            ctx->pc = 0x422A98u;
            goto label_422a98;
        }
    }
    ctx->pc = 0x422A40u;
label_422a40:
    // 0x422a40: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_422a44:
    if (ctx->pc == 0x422A44u) {
        ctx->pc = 0x422A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422A40u;
        // 0x422a44: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422A48u;
        goto label_422a48;
    }
    ctx->pc = 0x422A40u;
    {
        const bool branch_taken_0x422a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x422a40) {
            ctx->pc = 0x422A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x422A40u;
            // 0x422a44: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x422A74u;
            goto label_422a74;
        }
    }
    ctx->pc = 0x422A48u;
label_422a48:
    // 0x422a48: 0x93240000  lbu         $a0, 0x0($t9)
    ctx->pc = 0x422a48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
label_422a4c:
    // 0x422a4c: 0x27260004  addiu       $a2, $t9, 0x4
    ctx->pc = 0x422a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
label_422a50:
    // 0x422a50: 0x93250001  lbu         $a1, 0x1($t9)
    ctx->pc = 0x422a50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 1)));
label_422a54:
    // 0x422a54: 0x260dffff  addiu       $t5, $s0, -0x1
    ctx->pc = 0x422a54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_422a58:
    // 0x422a58: 0x93230002  lbu         $v1, 0x2($t9)
    ctx->pc = 0x422a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 2)));
label_422a5c:
    // 0x422a5c: 0x1c47021  addu        $t6, $t6, $a0
    ctx->pc = 0x422a5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
label_422a60:
    // 0x422a60: 0x93220003  lbu         $v0, 0x3($t9)
    ctx->pc = 0x422a60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 3)));
label_422a64:
    // 0x422a64: 0x1e57821  addu        $t7, $t7, $a1
    ctx->pc = 0x422a64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
label_422a68:
    // 0x422a68: 0x303c021  addu        $t8, $t8, $v1
    ctx->pc = 0x422a68u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
label_422a6c:
    // 0x422a6c: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x422a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_422a70:
    // 0x422a70: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x422a70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_422a74:
    // 0x422a74: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x422a74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_422a78:
    // 0x422a78: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x422a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_422a7c:
    // 0x422a7c: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x422a7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_422a80:
    // 0x422a80: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x422a80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_422a84:
    // 0x422a84: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x422a84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_422a88:
    // 0x422a88: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x422a88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
label_422a8c:
    // 0x422a8c: 0x304c021  addu        $t8, $t8, $a0
    ctx->pc = 0x422a8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
label_422a90:
    // 0x422a90: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x422a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_422a94:
    // 0x422a94: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x422a94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_422a98:
    // 0x422a98: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x422a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_422a9c:
    // 0x422a9c: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x422a9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_422aa0:
    // 0x422aa0: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x422aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_422aa4:
    // 0x422aa4: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x422aa4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_422aa8:
    // 0x422aa8: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x422aa8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_422aac:
    // 0x422aac: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x422aacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_422ab0:
    // 0x422ab0: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x422ab0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
label_422ab4:
    // 0x422ab4: 0x304c021  addu        $t8, $t8, $a0
    ctx->pc = 0x422ab4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
label_422ab8:
    // 0x422ab8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x422ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_422abc:
    // 0x422abc: 0x11a0002c  beqz        $t5, . + 4 + (0x2C << 2)
label_422ac0:
    if (ctx->pc == 0x422AC0u) {
        ctx->pc = 0x422AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422ABCu;
        // 0x422ac0: 0x1455021  addu        $t2, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422AC4u;
        goto label_422ac4;
    }
    ctx->pc = 0x422ABCu;
    {
        const bool branch_taken_0x422abc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x422AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422ABCu;
        // 0x422ac0: 0x1455021  addu        $t2, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422abc) {
            ctx->pc = 0x422B70u;
            goto label_422b70;
        }
    }
    ctx->pc = 0x422AC4u;
label_422ac4:
    // 0x422ac4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x422ac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_422ac8:
    // 0x422ac8: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x422ac8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_422acc:
    // 0x422acc: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x422accu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_422ad0:
    // 0x422ad0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x422ad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_422ad4:
    // 0x422ad4: 0x0  nop
    ctx->pc = 0x422ad4u;
    // NOP
label_422ad8:
    // 0x422ad8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x422ad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_422adc:
    // 0x422adc: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x422adcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
label_422ae0:
    // 0x422ae0: 0x91630001  lbu         $v1, 0x1($t3)
    ctx->pc = 0x422ae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
label_422ae4:
    // 0x422ae4: 0x91840002  lbu         $a0, 0x2($t4)
    ctx->pc = 0x422ae4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
label_422ae8:
    // 0x422ae8: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x422ae8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_422aec:
    // 0x422aec: 0x91050003  lbu         $a1, 0x3($t0)
    ctx->pc = 0x422aecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
label_422af0:
    // 0x422af0: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x422af0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
label_422af4:
    // 0x422af4: 0x91220004  lbu         $v0, 0x4($t1)
    ctx->pc = 0x422af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
label_422af8:
    // 0x422af8: 0x304c021  addu        $t8, $t8, $a0
    ctx->pc = 0x422af8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
label_422afc:
    // 0x422afc: 0x91630005  lbu         $v1, 0x5($t3)
    ctx->pc = 0x422afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 5)));
label_422b00:
    // 0x422b00: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x422b00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_422b04:
    // 0x422b04: 0x91840006  lbu         $a0, 0x6($t4)
    ctx->pc = 0x422b04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
label_422b08:
    // 0x422b08: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x422b08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_422b0c:
    // 0x422b0c: 0x91050007  lbu         $a1, 0x7($t0)
    ctx->pc = 0x422b0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
label_422b10:
    // 0x422b10: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x422b10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
label_422b14:
    // 0x422b14: 0x91220008  lbu         $v0, 0x8($t1)
    ctx->pc = 0x422b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 8)));
label_422b18:
    // 0x422b18: 0x304c021  addu        $t8, $t8, $a0
    ctx->pc = 0x422b18u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
label_422b1c:
    // 0x422b1c: 0x91630009  lbu         $v1, 0x9($t3)
    ctx->pc = 0x422b1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 9)));
label_422b20:
    // 0x422b20: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x422b20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_422b24:
    // 0x422b24: 0x9184000a  lbu         $a0, 0xA($t4)
    ctx->pc = 0x422b24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 10)));
label_422b28:
    // 0x422b28: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x422b28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_422b2c:
    // 0x422b2c: 0x9105000b  lbu         $a1, 0xB($t0)
    ctx->pc = 0x422b2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 11)));
label_422b30:
    // 0x422b30: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x422b30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
label_422b34:
    // 0x422b34: 0x9126000c  lbu         $a2, 0xC($t1)
    ctx->pc = 0x422b34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 12)));
label_422b38:
    // 0x422b38: 0x304c021  addu        $t8, $t8, $a0
    ctx->pc = 0x422b38u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
label_422b3c:
    // 0x422b3c: 0x9167000d  lbu         $a3, 0xD($t3)
    ctx->pc = 0x422b3cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 13)));
label_422b40:
    // 0x422b40: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x422b40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_422b44:
    // 0x422b44: 0x9182000e  lbu         $v0, 0xE($t4)
    ctx->pc = 0x422b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 14)));
label_422b48:
    // 0x422b48: 0x1c67021  addu        $t6, $t6, $a2
    ctx->pc = 0x422b48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
label_422b4c:
    // 0x422b4c: 0x9103000f  lbu         $v1, 0xF($t0)
    ctx->pc = 0x422b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 15)));
label_422b50:
    // 0x422b50: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x422b50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
label_422b54:
    // 0x422b54: 0x302c021  addu        $t8, $t8, $v0
    ctx->pc = 0x422b54u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
label_422b58:
    // 0x422b58: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x422b58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_422b5c:
    // 0x422b5c: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x422b5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_422b60:
    // 0x422b60: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x422b60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
label_422b64:
    // 0x422b64: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x422b64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_422b68:
    // 0x422b68: 0x15a0ffdb  bnez        $t5, . + 4 + (-0x25 << 2)
label_422b6c:
    if (ctx->pc == 0x422B6Cu) {
        ctx->pc = 0x422B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422B68u;
        // 0x422b6c: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422B70u;
        goto label_422b70;
    }
    ctx->pc = 0x422B68u;
    {
        const bool branch_taken_0x422b68 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x422B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422B68u;
        // 0x422b6c: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422b68) {
            ctx->pc = 0x422AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422ad8;
        }
    }
    ctx->pc = 0x422B70u;
label_422b70:
    // 0x422b70: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x422b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_422b74:
    // 0x422b74: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x422b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_422b78:
    // 0x422b78: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
label_422b7c:
    if (ctx->pc == 0x422B7Cu) {
        ctx->pc = 0x422B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422B78u;
        // 0x422b7c: 0x334c821  addu        $t9, $t9, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422B80u;
        goto label_422b80;
    }
    ctx->pc = 0x422B78u;
    {
        const bool branch_taken_0x422b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422B78u;
        // 0x422b7c: 0x334c821  addu        $t9, $t9, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422b78) {
            ctx->pc = 0x422A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422a18;
        }
    }
    ctx->pc = 0x422B80u;
label_422b80:
    // 0x422b80: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x422b80u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_422b84:
    // 0x422b84: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x422b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_422b88:
    // 0x422b88: 0x22a1007  srav        $v0, $t2, $s1
    ctx->pc = 0x422b88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), GPR_U32(ctx, 17) & 0x1F));
label_422b8c:
    // 0x422b8c: 0x22e1807  srav        $v1, $t6, $s1
    ctx->pc = 0x422b8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 17) & 0x1F));
label_422b90:
    // 0x422b90: 0x22f2007  srav        $a0, $t7, $s1
    ctx->pc = 0x422b90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 17) & 0x1F));
label_422b94:
    // 0x422b94: 0x2382807  srav        $a1, $t8, $s1
    ctx->pc = 0x422b94u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 24), GPR_U32(ctx, 17) & 0x1F));
label_422b98:
    // 0x422b98: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x422b98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_422b9c:
    // 0x422b9c: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x422b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_422ba0:
    // 0x422ba0: 0xa2640001  sb          $a0, 0x1($s3)
    ctx->pc = 0x422ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 4));
label_422ba4:
    // 0x422ba4: 0xa2650002  sb          $a1, 0x2($s3)
    ctx->pc = 0x422ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 5));
label_422ba8:
    // 0x422ba8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x422ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_422bac:
    // 0x422bac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x422bacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_422bb0:
    // 0x422bb0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x422bb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_422bb4:
    // 0x422bb4: 0x7bb40000  lq          $s4, 0x0($sp)
    ctx->pc = 0x422bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_422bb8:
    // 0x422bb8: 0x3e00008  jr          $ra
label_422bbc:
    if (ctx->pc == 0x422BBCu) {
        ctx->pc = 0x422BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422BB8u;
        // 0x422bbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422BC0u;
        goto label_422bc0;
    }
    ctx->pc = 0x422BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422BB8u;
        // 0x422bbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422BC0u;
label_422bc0:
    // 0x422bc0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x422bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_422bc4:
    // 0x422bc4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x422bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_422bc8:
    // 0x422bc8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x422bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_422bcc:
    // 0x422bcc: 0x3c127fff  lui         $s2, 0x7FFF
    ctx->pc = 0x422bccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32767 << 16));
label_422bd0:
    // 0x422bd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x422bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_422bd4:
    // 0x422bd4: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x422bd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_422bd8:
    // 0x422bd8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x422bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_422bdc:
    // 0x422bdc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x422bdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422be0:
    // 0x422be0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x422be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_422be4:
    // 0x422be4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x422be4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_422be8:
    // 0x422be8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x422be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_422bec:
    // 0x422bec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x422becu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422bf0:
    // 0x422bf0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x422bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_422bf4:
    // 0x422bf4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x422bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_422bf8:
    // 0x422bf8: 0x1ae0008b  blez        $s7, . + 4 + (0x8B << 2)
label_422bfc:
    if (ctx->pc == 0x422BFCu) {
        ctx->pc = 0x422BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422BF8u;
        // 0x422bfc: 0x7fbe0040  sq          $fp, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422C00u;
        goto label_422c00;
    }
    ctx->pc = 0x422BF8u;
    {
        const bool branch_taken_0x422bf8 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x422BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422BF8u;
        // 0x422bfc: 0x7fbe0040  sq          $fp, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422bf8) {
            ctx->pc = 0x422E28u;
            goto label_422e28;
        }
    }
    ctx->pc = 0x422C00u;
label_422c00:
    // 0x422c00: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x422c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_422c04:
    // 0x422c04: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x422c04u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_422c08:
    // 0x422c08: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x422c08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422c0c:
    // 0x422c0c: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x422c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_422c10:
    // 0x422c10: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x422c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_422c14:
    // 0x422c14: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x422c14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_422c18:
    // 0x422c18: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x422c18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
label_422c1c:
    // 0x422c1c: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x422c1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_422c20:
    // 0x422c20: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x422c20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_422c24:
    // 0x422c24: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x422c24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
label_422c28:
    // 0x422c28: 0x1ae00003  blez        $s7, . + 4 + (0x3 << 2)
label_422c2c:
    if (ctx->pc == 0x422C2Cu) {
        ctx->pc = 0x422C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422C28u;
        // 0x422c2c: 0x90be0002  lbu         $fp, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422C30u;
        goto label_422c30;
    }
    ctx->pc = 0x422C28u;
    {
        const bool branch_taken_0x422c28 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x422C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422C28u;
        // 0x422c2c: 0x90be0002  lbu         $fp, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422c28) {
            ctx->pc = 0x422C38u;
            goto label_422c38;
        }
    }
    ctx->pc = 0x422C30u;
label_422c30:
    // 0x422c30: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_422c34:
    if (ctx->pc == 0x422C34u) {
        ctx->pc = 0x422C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422C30u;
        // 0x422c34: 0x60682d  daddu       $t5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422C38u;
        goto label_422c38;
    }
    ctx->pc = 0x422C30u;
    {
        const bool branch_taken_0x422c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x422c30) {
            ctx->pc = 0x422C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x422C30u;
            // 0x422c34: 0x60682d  daddu       $t5, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x422CD4u;
            goto label_422cd4;
        }
    }
    ctx->pc = 0x422C38u;
label_422c38:
    // 0x422c38: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x422c38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_422c3c:
    // 0x422c3c: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x422c3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_422c40:
    // 0x422c40: 0x91a30001  lbu         $v1, 0x1($t5)
    ctx->pc = 0x422c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
label_422c44:
    // 0x422c44: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x422c44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_422c48:
    // 0x422c48: 0xa2c023  subu        $t8, $a1, $v0
    ctx->pc = 0x422c48u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_422c4c:
    // 0x422c4c: 0x330200ff  andi        $v0, $t8, 0xFF
    ctx->pc = 0x422c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
label_422c50:
    // 0x422c50: 0x91a40002  lbu         $a0, 0x2($t5)
    ctx->pc = 0x422c50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
label_422c54:
    // 0x422c54: 0xc37823  subu        $t7, $a2, $v1
    ctx->pc = 0x422c54u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_422c58:
    // 0x422c58: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x422c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_422c5c:
    // 0x422c5c: 0x91a60003  lbu         $a2, 0x3($t5)
    ctx->pc = 0x422c5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
label_422c60:
    // 0x422c60: 0x31e500ff  andi        $a1, $t7, 0xFF
    ctx->pc = 0x422c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
label_422c64:
    // 0x422c64: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x422c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_422c68:
    // 0x422c68: 0x3c47023  subu        $t6, $fp, $a0
    ctx->pc = 0x422c68u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_422c6c:
    // 0x422c6c: 0xa52818  mult        $a1, $a1, $a1
    ctx->pc = 0x422c6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_422c70:
    // 0x422c70: 0x666023  subu        $t4, $v1, $a2
    ctx->pc = 0x422c70u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_422c74:
    // 0x422c74: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x422c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_422c78:
    // 0x422c78: 0x31c300ff  andi        $v1, $t6, 0xFF
    ctx->pc = 0x422c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_422c7c:
    // 0x422c7c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x422c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_422c80:
    // 0x422c80: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x422c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_422c84:
    // 0x422c84: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x422c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_422c88:
    // 0x422c88: 0x318400ff  andi        $a0, $t4, 0xFF
    ctx->pc = 0x422c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_422c8c:
    // 0x422c8c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x422c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_422c90:
    // 0x422c90: 0x842018  mult        $a0, $a0, $a0
    ctx->pc = 0x422c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_422c94:
    // 0x422c94: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x422c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_422c98:
    // 0x422c98: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x422c98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_422c9c:
    // 0x422c9c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x422c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_422ca0:
    // 0x422ca0: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x422ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_422ca4:
    // 0x422ca4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x422ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_422ca8:
    // 0x422ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x422ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_422cac:
    // 0x422cac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x422cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_422cb0:
    // 0x422cb0: 0x52182a  slt         $v1, $v0, $s2
    ctx->pc = 0x422cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_422cb4:
    // 0x422cb4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_422cb8:
    if (ctx->pc == 0x422CB8u) {
        ctx->pc = 0x422CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422CB4u;
        // 0x422cb8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422CBCu;
        goto label_422cbc;
    }
    ctx->pc = 0x422CB4u;
    {
        const bool branch_taken_0x422cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x422cb4) {
            ctx->pc = 0x422CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x422CB4u;
            // 0x422cb8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x422CBCu;
            goto label_422cbc;
        }
    }
    ctx->pc = 0x422CBCu;
label_422cbc:
    // 0x422cbc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x422cbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_422cc0:
    // 0x422cc0: 0x25a30004  addiu       $v1, $t5, 0x4
    ctx->pc = 0x422cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_422cc4:
    // 0x422cc4: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x422cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_422cc8:
    // 0x422cc8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_422ccc:
    if (ctx->pc == 0x422CCCu) {
        ctx->pc = 0x422CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422CC8u;
        // 0x422ccc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422CD0u;
        goto label_422cd0;
    }
    ctx->pc = 0x422CC8u;
    {
        const bool branch_taken_0x422cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x422CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422CC8u;
        // 0x422ccc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422cc8) {
            ctx->pc = 0x422E18u;
            goto label_422e18;
        }
    }
    ctx->pc = 0x422CD0u;
label_422cd0:
    // 0x422cd0: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x422cd0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_422cd4:
    // 0x422cd4: 0x1a0882d  daddu       $s1, $t5, $zero
    ctx->pc = 0x422cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_422cd8:
    // 0x422cd8: 0x1a0802d  daddu       $s0, $t5, $zero
    ctx->pc = 0x422cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_422cdc:
    // 0x422cdc: 0x1a0c82d  daddu       $t9, $t5, $zero
    ctx->pc = 0x422cdcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_422ce0:
    // 0x422ce0: 0x93220000  lbu         $v0, 0x0($t9)
    ctx->pc = 0x422ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
label_422ce4:
    // 0x422ce4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x422ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_422ce8:
    // 0x422ce8: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x422ce8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_422cec:
    // 0x422cec: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x422cecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_422cf0:
    // 0x422cf0: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x422cf0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_422cf4:
    // 0x422cf4: 0xa2c023  subu        $t8, $a1, $v0
    ctx->pc = 0x422cf4u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_422cf8:
    // 0x422cf8: 0xc37823  subu        $t7, $a2, $v1
    ctx->pc = 0x422cf8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_422cfc:
    // 0x422cfc: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x422cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
label_422d00:
    // 0x422d00: 0x3c47023  subu        $t6, $fp, $a0
    ctx->pc = 0x422d00u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_422d04:
    // 0x422d04: 0x330300ff  andi        $v1, $t8, 0xFF
    ctx->pc = 0x422d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
label_422d08:
    // 0x422d08: 0x93a40030  lbu         $a0, 0x30($sp)
    ctx->pc = 0x422d08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_422d0c:
    // 0x422d0c: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x422d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_422d10:
    // 0x422d10: 0x31e500ff  andi        $a1, $t7, 0xFF
    ctx->pc = 0x422d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
label_422d14:
    // 0x422d14: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x422d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_422d18:
    // 0x422d18: 0x826023  subu        $t4, $a0, $v0
    ctx->pc = 0x422d18u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_422d1c:
    // 0x422d1c: 0xa52818  mult        $a1, $a1, $a1
    ctx->pc = 0x422d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_422d20:
    // 0x422d20: 0x31c200ff  andi        $v0, $t6, 0xFF
    ctx->pc = 0x422d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_422d24:
    // 0x422d24: 0x318400ff  andi        $a0, $t4, 0xFF
    ctx->pc = 0x422d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_422d28:
    // 0x422d28: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x422d28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_422d2c:
    // 0x422d2c: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x422d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_422d30:
    // 0x422d30: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x422d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_422d34:
    // 0x422d34: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x422d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_422d38:
    // 0x422d38: 0x842018  mult        $a0, $a0, $a0
    ctx->pc = 0x422d38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_422d3c:
    // 0x422d3c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x422d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_422d40:
    // 0x422d40: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x422d40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_422d44:
    // 0x422d44: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x422d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_422d48:
    // 0x422d48: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x422d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_422d4c:
    // 0x422d4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x422d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_422d50:
    // 0x422d50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x422d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_422d54:
    // 0x422d54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x422d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_422d58:
    // 0x422d58: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x422d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_422d5c:
    // 0x422d5c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_422d60:
    if (ctx->pc == 0x422D60u) {
        ctx->pc = 0x422D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422D5Cu;
        // 0x422d60: 0x93230004  lbu         $v1, 0x4($t9) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422D64u;
        goto label_422d64;
    }
    ctx->pc = 0x422D5Cu;
    {
        const bool branch_taken_0x422d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x422d5c) {
            ctx->pc = 0x422D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x422D5Cu;
            // 0x422d60: 0x93230004  lbu         $v1, 0x4($t9) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x422D70u;
            goto label_422d70;
        }
    }
    ctx->pc = 0x422D64u;
label_422d64:
    // 0x422d64: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x422d64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_422d68:
    // 0x422d68: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x422d68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_422d6c:
    // 0x422d6c: 0x93230004  lbu         $v1, 0x4($t9)
    ctx->pc = 0x422d6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 4)));
label_422d70:
    // 0x422d70: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x422d70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_422d74:
    // 0x422d74: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x422d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_422d78:
    // 0x422d78: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x422d78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_422d7c:
    // 0x422d7c: 0xa3c023  subu        $t8, $a1, $v1
    ctx->pc = 0x422d7cu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_422d80:
    // 0x422d80: 0x330300ff  andi        $v1, $t8, 0xFF
    ctx->pc = 0x422d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
label_422d84:
    // 0x422d84: 0x92240006  lbu         $a0, 0x6($s1)
    ctx->pc = 0x422d84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_422d88:
    // 0x422d88: 0xc27823  subu        $t7, $a2, $v0
    ctx->pc = 0x422d88u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_422d8c:
    // 0x422d8c: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x422d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_422d90:
    // 0x422d90: 0x91a60007  lbu         $a2, 0x7($t5)
    ctx->pc = 0x422d90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 7)));
label_422d94:
    // 0x422d94: 0x31e500ff  andi        $a1, $t7, 0xFF
    ctx->pc = 0x422d94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
label_422d98:
    // 0x422d98: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x422d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_422d9c:
    // 0x422d9c: 0x3c47023  subu        $t6, $fp, $a0
    ctx->pc = 0x422d9cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_422da0:
    // 0x422da0: 0xa52818  mult        $a1, $a1, $a1
    ctx->pc = 0x422da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_422da4:
    // 0x422da4: 0x466023  subu        $t4, $v0, $a2
    ctx->pc = 0x422da4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_422da8:
    // 0x422da8: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x422da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_422dac:
    // 0x422dac: 0x31c200ff  andi        $v0, $t6, 0xFF
    ctx->pc = 0x422dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_422db0:
    // 0x422db0: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x422db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_422db4:
    // 0x422db4: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x422db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_422db8:
    // 0x422db8: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x422db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_422dbc:
    // 0x422dbc: 0x318400ff  andi        $a0, $t4, 0xFF
    ctx->pc = 0x422dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_422dc0:
    // 0x422dc0: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x422dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_422dc4:
    // 0x422dc4: 0x842018  mult        $a0, $a0, $a0
    ctx->pc = 0x422dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_422dc8:
    // 0x422dc8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x422dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_422dcc:
    // 0x422dcc: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x422dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_422dd0:
    // 0x422dd0: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x422dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_422dd4:
    // 0x422dd4: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x422dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_422dd8:
    // 0x422dd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x422dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_422ddc:
    // 0x422ddc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x422ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_422de0:
    // 0x422de0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x422de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_422de4:
    // 0x422de4: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x422de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_422de8:
    // 0x422de8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_422dec:
    if (ctx->pc == 0x422DECu) {
        ctx->pc = 0x422DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422DE8u;
        // 0x422dec: 0x26b30001  addiu       $s3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422DF0u;
        goto label_422df0;
    }
    ctx->pc = 0x422DE8u;
    {
        const bool branch_taken_0x422de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x422DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422DE8u;
        // 0x422dec: 0x26b30001  addiu       $s3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422de8) {
            ctx->pc = 0x422DF8u;
            goto label_422df8;
        }
    }
    ctx->pc = 0x422DF0u;
label_422df0:
    // 0x422df0: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x422df0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_422df4:
    // 0x422df4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x422df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_422df8:
    // 0x422df8: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x422df8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_422dfc:
    // 0x422dfc: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x422dfcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_422e00:
    // 0x422e00: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x422e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_422e04:
    // 0x422e04: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x422e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_422e08:
    // 0x422e08: 0x27390008  addiu       $t9, $t9, 0x8
    ctx->pc = 0x422e08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
label_422e0c:
    // 0x422e0c: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x422e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_422e10:
    // 0x422e10: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_422e14:
    if (ctx->pc == 0x422E14u) {
        ctx->pc = 0x422E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422E10u;
        // 0x422e14: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422E18u;
        goto label_422e18;
    }
    ctx->pc = 0x422E10u;
    {
        const bool branch_taken_0x422e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422E10u;
        // 0x422e14: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422e10) {
            ctx->pc = 0x422CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422ce0;
        }
    }
    ctx->pc = 0x422E18u;
label_422e18:
    // 0x422e18: 0xa3ac0003  sb          $t4, 0x3($sp)
    ctx->pc = 0x422e18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 12));
label_422e1c:
    // 0x422e1c: 0xa3ae0002  sb          $t6, 0x2($sp)
    ctx->pc = 0x422e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 14));
label_422e20:
    // 0x422e20: 0xa3af0001  sb          $t7, 0x1($sp)
    ctx->pc = 0x422e20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 15));
label_422e24:
    // 0x422e24: 0xa3b80000  sb          $t8, 0x0($sp)
    ctx->pc = 0x422e24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 24));
label_422e28:
    // 0x422e28: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x422e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_422e2c:
    // 0x422e2c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x422e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_422e30:
    // 0x422e30: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x422e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_422e34:
    // 0x422e34: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x422e34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_422e38:
    // 0x422e38: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x422e38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_422e3c:
    // 0x422e3c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x422e3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_422e40:
    // 0x422e40: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x422e40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_422e44:
    // 0x422e44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x422e44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_422e48:
    // 0x422e48: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x422e48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_422e4c:
    // 0x422e4c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x422e4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_422e50:
    // 0x422e50: 0x3e00008  jr          $ra
label_422e54:
    if (ctx->pc == 0x422E54u) {
        ctx->pc = 0x422E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422E50u;
        // 0x422e54: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422E58u;
        goto label_422e58;
    }
    ctx->pc = 0x422E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422E50u;
        // 0x422e54: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x422E58u;
label_422e58:
    // 0x422e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x422e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_422e5c:
    // 0x422e5c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x422e5cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_422e60:
    // 0x422e60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x422e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_422e64:
    // 0x422e64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x422e64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422e68:
    // 0x422e68: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x422e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
label_422e6c:
    // 0x422e6c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x422e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_422e70:
    // 0x422e70: 0x8db10010  lw          $s1, 0x10($t5)
    ctx->pc = 0x422e70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
label_422e74:
    // 0x422e74: 0x8da60008  lw          $a2, 0x8($t5)
    ctx->pc = 0x422e74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
label_422e78:
    // 0x422e78: 0x8dae0004  lw          $t6, 0x4($t5)
    ctx->pc = 0x422e78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_422e7c:
    // 0x422e7c: 0x18c0005d  blez        $a2, . + 4 + (0x5D << 2)
label_422e80:
    if (ctx->pc == 0x422E80u) {
        ctx->pc = 0x422E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422E7Cu;
        // 0x422e80: 0x8da80014  lw          $t0, 0x14($t5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422E84u;
        goto label_422e84;
    }
    ctx->pc = 0x422E7Cu;
    {
        const bool branch_taken_0x422e7c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x422E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422E7Cu;
        // 0x422e80: 0x8da80014  lw          $t0, 0x14($t5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422e7c) {
            ctx->pc = 0x422FF4u;
            goto label_422ff4;
        }
    }
    ctx->pc = 0x422E84u;
label_422e84:
    // 0x422e84: 0x0  nop
    ctx->pc = 0x422e84u;
    // NOP
label_422e88:
    // 0x422e88: 0x246f0001  addiu       $t7, $v1, 0x1
    ctx->pc = 0x422e88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_422e8c:
    // 0x422e8c: 0x111c021  addu        $t8, $t0, $s1
    ctx->pc = 0x422e8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
label_422e90:
    // 0x422e90: 0x19c00053  blez        $t6, . + 4 + (0x53 << 2)
label_422e94:
    if (ctx->pc == 0x422E94u) {
        ctx->pc = 0x422E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422E90u;
        // 0x422e94: 0xb0c821  addu        $t9, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422E98u;
        goto label_422e98;
    }
    ctx->pc = 0x422E90u;
    {
        const bool branch_taken_0x422e90 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x422E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422E90u;
        // 0x422e94: 0xb0c821  addu        $t9, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422e90) {
            ctx->pc = 0x422FE0u;
            goto label_422fe0;
        }
    }
    ctx->pc = 0x422E98u;
label_422e98:
    // 0x422e98: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x422e98u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_422e9c:
    // 0x422e9c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x422e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_422ea0:
    // 0x422ea0: 0xc1023  negu        $v0, $t4
    ctx->pc = 0x422ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_422ea4:
    // 0x422ea4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x422ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_422ea8:
    // 0x422ea8: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_422eac:
    if (ctx->pc == 0x422EACu) {
        ctx->pc = 0x422EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422EA8u;
        // 0x422eac: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422EB0u;
        goto label_422eb0;
    }
    ctx->pc = 0x422EA8u;
    {
        const bool branch_taken_0x422ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x422EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422EA8u;
        // 0x422eac: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422ea8) {
            ctx->pc = 0x422F40u;
            goto label_422f40;
        }
    }
    ctx->pc = 0x422EB0u;
label_422eb0:
    // 0x422eb0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x422eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_422eb4:
    // 0x422eb4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_422eb8:
    if (ctx->pc == 0x422EB8u) {
        ctx->pc = 0x422EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422EB4u;
        // 0x422eb8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x422EBCu;
        goto label_422ebc;
    }
    ctx->pc = 0x422EB4u;
    {
        const bool branch_taken_0x422eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x422EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422EB4u;
        // 0x422eb8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x422eb4) {
            ctx->pc = 0x422F14u;
            goto label_422f14;
        }
    }
    ctx->pc = 0x422EBCu;
label_422ebc:
    // 0x422ebc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_422ec0:
    if (ctx->pc == 0x422EC0u) {
        ctx->pc = 0x422EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422EBCu;
        // 0x422ec0: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422EC4u;
        goto label_422ec4;
    }
    ctx->pc = 0x422EBCu;
    {
        const bool branch_taken_0x422ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x422ebc) {
            ctx->pc = 0x422EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x422EBCu;
            // 0x422ec0: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x422EF0u;
            goto label_422ef0;
        }
    }
    ctx->pc = 0x422EC4u;
label_422ec4:
    // 0x422ec4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x422ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_422ec8:
    // 0x422ec8: 0x22402  srl         $a0, $v0, 16
    ctx->pc = 0x422ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_422ecc:
    // 0x422ecc: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x422eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_422ed0:
    // 0x422ed0: 0xa1040003  sb          $a0, 0x3($t0)
    ctx->pc = 0x422ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 4));
label_422ed4:
    // 0x422ed4: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x422ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
label_422ed8:
    // 0x422ed8: 0xa1020002  sb          $v0, 0x2($t0)
    ctx->pc = 0x422ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 2));
label_422edc:
    // 0x422edc: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x422edcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_422ee0:
    // 0x422ee0: 0x25070004  addiu       $a3, $t0, 0x4
    ctx->pc = 0x422ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_422ee4:
    // 0x422ee4: 0x24a90004  addiu       $t1, $a1, 0x4
    ctx->pc = 0x422ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_422ee8:
    // 0x422ee8: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x422ee8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_422eec:
    // 0x422eec: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x422eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_422ef0:
    // 0x422ef0: 0x22402  srl         $a0, $v0, 16
    ctx->pc = 0x422ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_422ef4:
    // 0x422ef4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x422ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_422ef8:
    // 0x422ef8: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x422ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
label_422efc:
    // 0x422efc: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x422efcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
label_422f00:
    // 0x422f00: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x422f00u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
label_422f04:
    // 0x422f04: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x422f04u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_422f08:
    // 0x422f08: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x422f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_422f0c:
    // 0x422f0c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x422f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_422f10:
    // 0x422f10: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x422f10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_422f14:
    // 0x422f14: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x422f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_422f18:
    // 0x422f18: 0x22402  srl         $a0, $v0, 16
    ctx->pc = 0x422f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_422f1c:
    // 0x422f1c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x422f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_422f20:
    // 0x422f20: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x422f20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
label_422f24:
    // 0x422f24: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x422f24u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
label_422f28:
    // 0x422f28: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x422f28u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
label_422f2c:
    // 0x422f2c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x422f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_422f30:
    // 0x422f30: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x422f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_422f34:
    // 0x422f34: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x422f34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_422f38:
    // 0x422f38: 0x11800029  beqz        $t4, . + 4 + (0x29 << 2)
label_422f3c:
    if (ctx->pc == 0x422F3Cu) {
        ctx->pc = 0x422F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422F38u;
        // 0x422f3c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422F40u;
        goto label_422f40;
    }
    ctx->pc = 0x422F38u;
    {
        const bool branch_taken_0x422f38 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x422F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422F38u;
        // 0x422f3c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422f38) {
            ctx->pc = 0x422FE0u;
            goto label_422fe0;
        }
    }
    ctx->pc = 0x422F40u;
label_422f40:
    // 0x422f40: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x422f40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_422f44:
    // 0x422f44: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x422f44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_422f48:
    // 0x422f48: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x422f48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_422f4c:
    // 0x422f4c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x422f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_422f50:
    // 0x422f50: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x422f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_422f54:
    // 0x422f54: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x422f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_422f58:
    // 0x422f58: 0xa1020003  sb          $v0, 0x3($t0)
    ctx->pc = 0x422f58u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 2));
label_422f5c:
    // 0x422f5c: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x422f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_422f60:
    // 0x422f60: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x422f60u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
label_422f64:
    // 0x422f64: 0xa1430001  sb          $v1, 0x1($t2)
    ctx->pc = 0x422f64u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 3));
label_422f68:
    // 0x422f68: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x422f68u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
label_422f6c:
    // 0x422f6c: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x422f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_422f70:
    // 0x422f70: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x422f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_422f74:
    // 0x422f74: 0xa1020007  sb          $v0, 0x7($t0)
    ctx->pc = 0x422f74u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 2));
label_422f78:
    // 0x422f78: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x422f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_422f7c:
    // 0x422f7c: 0xa1230004  sb          $v1, 0x4($t1)
    ctx->pc = 0x422f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 3));
label_422f80:
    // 0x422f80: 0xa1430005  sb          $v1, 0x5($t2)
    ctx->pc = 0x422f80u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 3));
label_422f84:
    // 0x422f84: 0xa0e50006  sb          $a1, 0x6($a3)
    ctx->pc = 0x422f84u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 5));
label_422f88:
    // 0x422f88: 0x8d640008  lw          $a0, 0x8($t3)
    ctx->pc = 0x422f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_422f8c:
    // 0x422f8c: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x422f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_422f90:
    // 0x422f90: 0xa102000b  sb          $v0, 0xB($t0)
    ctx->pc = 0x422f90u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 11), (uint8_t)GPR_U32(ctx, 2));
label_422f94:
    // 0x422f94: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x422f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_422f98:
    // 0x422f98: 0xa1230008  sb          $v1, 0x8($t1)
    ctx->pc = 0x422f98u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 3));
label_422f9c:
    // 0x422f9c: 0xa1430009  sb          $v1, 0x9($t2)
    ctx->pc = 0x422f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 9), (uint8_t)GPR_U32(ctx, 3));
label_422fa0:
    // 0x422fa0: 0xa0e4000a  sb          $a0, 0xA($a3)
    ctx->pc = 0x422fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 4));
label_422fa4:
    // 0x422fa4: 0x8d65000c  lw          $a1, 0xC($t3)
    ctx->pc = 0x422fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
label_422fa8:
    // 0x422fa8: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x422fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_422fac:
    // 0x422fac: 0xa102000f  sb          $v0, 0xF($t0)
    ctx->pc = 0x422facu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 15), (uint8_t)GPR_U32(ctx, 2));
label_422fb0:
    // 0x422fb0: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x422fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_422fb4:
    // 0x422fb4: 0xa123000c  sb          $v1, 0xC($t1)
    ctx->pc = 0x422fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 12), (uint8_t)GPR_U32(ctx, 3));
label_422fb8:
    // 0x422fb8: 0xa143000d  sb          $v1, 0xD($t2)
    ctx->pc = 0x422fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13), (uint8_t)GPR_U32(ctx, 3));
label_422fbc:
    // 0x422fbc: 0xa0e5000e  sb          $a1, 0xE($a3)
    ctx->pc = 0x422fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 14), (uint8_t)GPR_U32(ctx, 5));
label_422fc0:
    // 0x422fc0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x422fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_422fc4:
    // 0x422fc4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x422fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_422fc8:
    // 0x422fc8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x422fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_422fcc:
    // 0x422fcc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x422fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_422fd0:
    // 0x422fd0: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x422fd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
label_422fd4:
    // 0x422fd4: 0x1580ffde  bnez        $t4, . + 4 + (-0x22 << 2)
label_422fd8:
    if (ctx->pc == 0x422FD8u) {
        ctx->pc = 0x422FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422FD4u;
        // 0x422fd8: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422FDCu;
        goto label_422fdc;
    }
    ctx->pc = 0x422FD4u;
    {
        const bool branch_taken_0x422fd4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x422FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422FD4u;
        // 0x422fd8: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422fd4) {
            ctx->pc = 0x422F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422f50;
        }
    }
    ctx->pc = 0x422FDCu;
label_422fdc:
    // 0x422fdc: 0x0  nop
    ctx->pc = 0x422fdcu;
    // NOP
label_422fe0:
    // 0x422fe0: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x422fe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_422fe4:
    // 0x422fe4: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x422fe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_422fe8:
    // 0x422fe8: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x422fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_422fec:
    // 0x422fec: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
label_422ff0:
    if (ctx->pc == 0x422FF0u) {
        ctx->pc = 0x422FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422FECu;
        // 0x422ff0: 0x320282d  daddu       $a1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422FF4u;
        goto label_422ff4;
    }
    ctx->pc = 0x422FECu;
    {
        const bool branch_taken_0x422fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422FECu;
        // 0x422ff0: 0x320282d  daddu       $a1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422fec) {
            ctx->pc = 0x422E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422e88;
        }
    }
    ctx->pc = 0x422FF4u;
label_422ff4:
    // 0x422ff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x422ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_422ff8:
    // 0x422ff8: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x422ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_422ffc:
    // 0x422ffc: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x422ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_423000:
    // 0x423000: 0x3e00008  jr          $ra
label_423004:
    if (ctx->pc == 0x423004u) {
        ctx->pc = 0x423004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423000u;
        // 0x423004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423008u;
        goto label_423008;
    }
    ctx->pc = 0x423000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423000u;
        // 0x423004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423008u;
label_423008:
    // 0x423008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x423008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42300c:
    // 0x42300c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x42300cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423010:
    // 0x423010: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x423010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_423014:
    // 0x423014: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x423014u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423018:
    // 0x423018: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x423018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
label_42301c:
    // 0x42301c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x42301cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_423020:
    // 0x423020: 0x8db10010  lw          $s1, 0x10($t5)
    ctx->pc = 0x423020u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
label_423024:
    // 0x423024: 0x8da60008  lw          $a2, 0x8($t5)
    ctx->pc = 0x423024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
label_423028:
    // 0x423028: 0x8dae0004  lw          $t6, 0x4($t5)
    ctx->pc = 0x423028u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_42302c:
    // 0x42302c: 0x18c00059  blez        $a2, . + 4 + (0x59 << 2)
label_423030:
    if (ctx->pc == 0x423030u) {
        ctx->pc = 0x423030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42302Cu;
        // 0x423030: 0x8da70014  lw          $a3, 0x14($t5) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423034u;
        goto label_423034;
    }
    ctx->pc = 0x42302Cu;
    {
        const bool branch_taken_0x42302c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x423030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42302Cu;
        // 0x423030: 0x8da70014  lw          $a3, 0x14($t5) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42302c) {
            ctx->pc = 0x423194u;
            goto label_423194;
        }
    }
    ctx->pc = 0x423034u;
label_423034:
    // 0x423034: 0x0  nop
    ctx->pc = 0x423034u;
    // NOP
label_423038:
    // 0x423038: 0x246f0001  addiu       $t7, $v1, 0x1
    ctx->pc = 0x423038u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_42303c:
    // 0x42303c: 0xf1c021  addu        $t8, $a3, $s1
    ctx->pc = 0x42303cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_423040:
    // 0x423040: 0x19c0004f  blez        $t6, . + 4 + (0x4F << 2)
label_423044:
    if (ctx->pc == 0x423044u) {
        ctx->pc = 0x423044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423040u;
        // 0x423044: 0xb0c821  addu        $t9, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423048u;
        goto label_423048;
    }
    ctx->pc = 0x423040u;
    {
        const bool branch_taken_0x423040 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x423044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423040u;
        // 0x423044: 0xb0c821  addu        $t9, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423040) {
            ctx->pc = 0x423180u;
            goto label_423180;
        }
    }
    ctx->pc = 0x423048u;
label_423048:
    // 0x423048: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x423048u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_42304c:
    // 0x42304c: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x42304cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_423050:
    // 0x423050: 0xb1023  negu        $v0, $t3
    ctx->pc = 0x423050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 11)));
label_423054:
    // 0x423054: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x423054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_423058:
    // 0x423058: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x423058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_42305c:
    // 0x42305c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_423060:
    if (ctx->pc == 0x423060u) {
        ctx->pc = 0x423060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42305Cu;
        // 0x423060: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423064u;
        goto label_423064;
    }
    ctx->pc = 0x42305Cu;
    {
        const bool branch_taken_0x42305c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x423060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42305Cu;
        // 0x423060: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42305c) {
            ctx->pc = 0x4230E8u;
            goto label_4230e8;
        }
    }
    ctx->pc = 0x423064u;
label_423064:
    // 0x423064: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x423064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_423068:
    // 0x423068: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_42306c:
    if (ctx->pc == 0x42306Cu) {
        ctx->pc = 0x42306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423068u;
        // 0x42306c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x423070u;
        goto label_423070;
    }
    ctx->pc = 0x423068u;
    {
        const bool branch_taken_0x423068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423068u;
        // 0x42306c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x423068) {
            ctx->pc = 0x4230C0u;
            goto label_4230c0;
        }
    }
    ctx->pc = 0x423070u;
label_423070:
    // 0x423070: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_423074:
    if (ctx->pc == 0x423074u) {
        ctx->pc = 0x423074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423070u;
        // 0x423074: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423078u;
        goto label_423078;
    }
    ctx->pc = 0x423070u;
    {
        const bool branch_taken_0x423070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x423070) {
            ctx->pc = 0x423074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423070u;
            // 0x423074: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4230A0u;
            goto label_4230a0;
        }
    }
    ctx->pc = 0x423078u;
label_423078:
    // 0x423078: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x423078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42307c:
    // 0x42307c: 0xa0ec0003  sb          $t4, 0x3($a3)
    ctx->pc = 0x42307cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 12));
label_423080:
    // 0x423080: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x423080u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_423084:
    // 0x423084: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x423084u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
label_423088:
    // 0x423088: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x423088u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
label_42308c:
    // 0x42308c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x42308cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_423090:
    // 0x423090: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x423090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_423094:
    // 0x423094: 0x24a80004  addiu       $t0, $a1, 0x4
    ctx->pc = 0x423094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_423098:
    // 0x423098: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x423098u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_42309c:
    // 0x42309c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x42309cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4230a0:
    // 0x4230a0: 0xa08c0003  sb          $t4, 0x3($a0)
    ctx->pc = 0x4230a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 12));
label_4230a4:
    // 0x4230a4: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x4230a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_4230a8:
    // 0x4230a8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x4230a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_4230ac:
    // 0x4230ac: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x4230acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_4230b0:
    // 0x4230b0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4230b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_4230b4:
    // 0x4230b4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4230b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4230b8:
    // 0x4230b8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4230b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_4230bc:
    // 0x4230bc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x4230bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_4230c0:
    // 0x4230c0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4230c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4230c4:
    // 0x4230c4: 0xa08c0003  sb          $t4, 0x3($a0)
    ctx->pc = 0x4230c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 12));
label_4230c8:
    // 0x4230c8: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x4230c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_4230cc:
    // 0x4230cc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x4230ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_4230d0:
    // 0x4230d0: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x4230d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_4230d4:
    // 0x4230d4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4230d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_4230d8:
    // 0x4230d8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4230d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4230dc:
    // 0x4230dc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x4230dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_4230e0:
    // 0x4230e0: 0x11600027  beqz        $t3, . + 4 + (0x27 << 2)
label_4230e4:
    if (ctx->pc == 0x4230E4u) {
        ctx->pc = 0x4230E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4230E0u;
        // 0x4230e4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4230E8u;
        goto label_4230e8;
    }
    ctx->pc = 0x4230E0u;
    {
        const bool branch_taken_0x4230e0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x4230E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4230E0u;
        // 0x4230e4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4230e0) {
            ctx->pc = 0x423180u;
            goto label_423180;
        }
    }
    ctx->pc = 0x4230E8u;
label_4230e8:
    // 0x4230e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4230e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4230ec:
    // 0x4230ec: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x4230ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4230f0:
    // 0x4230f0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x4230f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4230f4:
    // 0x4230f4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4230f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4230f8:
    // 0x4230f8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4230f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4230fc:
    // 0x4230fc: 0x0  nop
    ctx->pc = 0x4230fcu;
    // NOP
label_423100:
    // 0x423100: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x423100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_423104:
    // 0x423104: 0xa0ec0003  sb          $t4, 0x3($a3)
    ctx->pc = 0x423104u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 12));
label_423108:
    // 0x423108: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x423108u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_42310c:
    // 0x42310c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x42310cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
label_423110:
    // 0x423110: 0xa1220001  sb          $v0, 0x1($t1)
    ctx->pc = 0x423110u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 2));
label_423114:
    // 0x423114: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x423114u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_423118:
    // 0x423118: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x423118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_42311c:
    // 0x42311c: 0xa0ec0007  sb          $t4, 0x7($a3)
    ctx->pc = 0x42311cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 12));
label_423120:
    // 0x423120: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x423120u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_423124:
    // 0x423124: 0xa1020004  sb          $v0, 0x4($t0)
    ctx->pc = 0x423124u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 2));
label_423128:
    // 0x423128: 0xa1220005  sb          $v0, 0x5($t1)
    ctx->pc = 0x423128u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 2));
label_42312c:
    // 0x42312c: 0xa0a40006  sb          $a0, 0x6($a1)
    ctx->pc = 0x42312cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 4));
label_423130:
    // 0x423130: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x423130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_423134:
    // 0x423134: 0xa0ec000b  sb          $t4, 0xB($a3)
    ctx->pc = 0x423134u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 11), (uint8_t)GPR_U32(ctx, 12));
label_423138:
    // 0x423138: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x423138u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_42313c:
    // 0x42313c: 0xa1020008  sb          $v0, 0x8($t0)
    ctx->pc = 0x42313cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 2));
label_423140:
    // 0x423140: 0xa1220009  sb          $v0, 0x9($t1)
    ctx->pc = 0x423140u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 9), (uint8_t)GPR_U32(ctx, 2));
label_423144:
    // 0x423144: 0xa0a3000a  sb          $v1, 0xA($a1)
    ctx->pc = 0x423144u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 3));
label_423148:
    // 0x423148: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x423148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_42314c:
    // 0x42314c: 0xa0ec000f  sb          $t4, 0xF($a3)
    ctx->pc = 0x42314cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 15), (uint8_t)GPR_U32(ctx, 12));
label_423150:
    // 0x423150: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x423150u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_423154:
    // 0x423154: 0xa102000c  sb          $v0, 0xC($t0)
    ctx->pc = 0x423154u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 12), (uint8_t)GPR_U32(ctx, 2));
label_423158:
    // 0x423158: 0xa122000d  sb          $v0, 0xD($t1)
    ctx->pc = 0x423158u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 13), (uint8_t)GPR_U32(ctx, 2));
label_42315c:
    // 0x42315c: 0xa0a4000e  sb          $a0, 0xE($a1)
    ctx->pc = 0x42315cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 14), (uint8_t)GPR_U32(ctx, 4));
label_423160:
    // 0x423160: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x423160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_423164:
    // 0x423164: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x423164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_423168:
    // 0x423168: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x423168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_42316c:
    // 0x42316c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x42316cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_423170:
    // 0x423170: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x423170u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_423174:
    // 0x423174: 0x1560ffe2  bnez        $t3, . + 4 + (-0x1E << 2)
label_423178:
    if (ctx->pc == 0x423178u) {
        ctx->pc = 0x423178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423174u;
        // 0x423178: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42317Cu;
        goto label_42317c;
    }
    ctx->pc = 0x423174u;
    {
        const bool branch_taken_0x423174 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x423178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423174u;
        // 0x423178: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423174) {
            ctx->pc = 0x423100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423100;
        }
    }
    ctx->pc = 0x42317Cu;
label_42317c:
    // 0x42317c: 0x0  nop
    ctx->pc = 0x42317cu;
    // NOP
label_423180:
    // 0x423180: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x423180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_423184:
    // 0x423184: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x423184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_423188:
    // 0x423188: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x423188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_42318c:
    // 0x42318c: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
label_423190:
    if (ctx->pc == 0x423190u) {
        ctx->pc = 0x423190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42318Cu;
        // 0x423190: 0x320282d  daddu       $a1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423194u;
        goto label_423194;
    }
    ctx->pc = 0x42318Cu;
    {
        const bool branch_taken_0x42318c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42318Cu;
        // 0x423190: 0x320282d  daddu       $a1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42318c) {
            ctx->pc = 0x423038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423038;
        }
    }
    ctx->pc = 0x423194u;
label_423194:
    // 0x423194: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x423194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_423198:
    // 0x423198: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x423198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_42319c:
    // 0x42319c: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x42319cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4231a0:
    // 0x4231a0: 0x3e00008  jr          $ra
label_4231a4:
    if (ctx->pc == 0x4231A4u) {
        ctx->pc = 0x4231A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4231A0u;
        // 0x4231a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4231A8u;
        goto label_4231a8;
    }
    ctx->pc = 0x4231A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4231A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4231A0u;
        // 0x4231a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4231A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4231A8u;
label_4231a8:
    // 0x4231a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4231a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4231ac:
    // 0x4231ac: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x4231acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4231b0:
    // 0x4231b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4231b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4231b4:
    // 0x4231b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4231b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4231b8:
    // 0x4231b8: 0x8d900010  lw          $s0, 0x10($t4)
    ctx->pc = 0x4231b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
label_4231bc:
    // 0x4231bc: 0x8d990008  lw          $t9, 0x8($t4)
    ctx->pc = 0x4231bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
label_4231c0:
    // 0x4231c0: 0x8d8d0004  lw          $t5, 0x4($t4)
    ctx->pc = 0x4231c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_4231c4:
    // 0x4231c4: 0x1b200059  blez        $t9, . + 4 + (0x59 << 2)
label_4231c8:
    if (ctx->pc == 0x4231C8u) {
        ctx->pc = 0x4231C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4231C4u;
        // 0x4231c8: 0x8d870014  lw          $a3, 0x14($t4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4231CCu;
        goto label_4231cc;
    }
    ctx->pc = 0x4231C4u;
    {
        const bool branch_taken_0x4231c4 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x4231C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4231C4u;
        // 0x4231c8: 0x8d870014  lw          $a3, 0x14($t4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4231c4) {
            ctx->pc = 0x42332Cu;
            goto label_42332c;
        }
    }
    ctx->pc = 0x4231CCu;
label_4231cc:
    // 0x4231cc: 0x0  nop
    ctx->pc = 0x4231ccu;
    // NOP
label_4231d0:
    // 0x4231d0: 0x246e0001  addiu       $t6, $v1, 0x1
    ctx->pc = 0x4231d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4231d4:
    // 0x4231d4: 0xf07821  addu        $t7, $a3, $s0
    ctx->pc = 0x4231d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4231d8:
    // 0x4231d8: 0x19a0004f  blez        $t5, . + 4 + (0x4F << 2)
label_4231dc:
    if (ctx->pc == 0x4231DCu) {
        ctx->pc = 0x4231DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4231D8u;
        // 0x4231dc: 0xa6c021  addu        $t8, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4231E0u;
        goto label_4231e0;
    }
    ctx->pc = 0x4231D8u;
    {
        const bool branch_taken_0x4231d8 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x4231DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4231D8u;
        // 0x4231dc: 0xa6c021  addu        $t8, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4231d8) {
            ctx->pc = 0x423318u;
            goto label_423318;
        }
    }
    ctx->pc = 0x4231E0u;
label_4231e0:
    // 0x4231e0: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x4231e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_4231e4:
    // 0x4231e4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4231e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4231e8:
    // 0x4231e8: 0xb1023  negu        $v0, $t3
    ctx->pc = 0x4231e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 11)));
label_4231ec:
    // 0x4231ec: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4231ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4231f0:
    // 0x4231f0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_4231f4:
    if (ctx->pc == 0x4231F4u) {
        ctx->pc = 0x4231F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4231F0u;
        // 0x4231f4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4231F8u;
        goto label_4231f8;
    }
    ctx->pc = 0x4231F0u;
    {
        const bool branch_taken_0x4231f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4231F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4231F0u;
        // 0x4231f4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4231f0) {
            ctx->pc = 0x423280u;
            goto label_423280;
        }
    }
    ctx->pc = 0x4231F8u;
label_4231f8:
    // 0x4231f8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4231f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4231fc:
    // 0x4231fc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_423200:
    if (ctx->pc == 0x423200u) {
        ctx->pc = 0x423200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4231FCu;
        // 0x423200: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x423204u;
        goto label_423204;
    }
    ctx->pc = 0x4231FCu;
    {
        const bool branch_taken_0x4231fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4231FCu;
        // 0x423200: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4231fc) {
            ctx->pc = 0x423258u;
            goto label_423258;
        }
    }
    ctx->pc = 0x423204u;
label_423204:
    // 0x423204: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_423208:
    if (ctx->pc == 0x423208u) {
        ctx->pc = 0x423208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423204u;
        // 0x423208: 0x95030000  lhu         $v1, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42320Cu;
        goto label_42320c;
    }
    ctx->pc = 0x423204u;
    {
        const bool branch_taken_0x423204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x423204) {
            ctx->pc = 0x423208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423204u;
            // 0x423208: 0x95030000  lhu         $v1, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423238u;
            goto label_423238;
        }
    }
    ctx->pc = 0x42320Cu;
label_42320c:
    // 0x42320c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x42320cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_423210:
    // 0x423210: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x423210u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
label_423214:
    // 0x423214: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x423214u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_423218:
    // 0x423218: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x423218u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
label_42321c:
    // 0x42321c: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x42321cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
label_423220:
    // 0x423220: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x423220u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_423224:
    // 0x423224: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x423224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_423228:
    // 0x423228: 0x24a80002  addiu       $t0, $a1, 0x2
    ctx->pc = 0x423228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_42322c:
    // 0x42322c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x42322cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_423230:
    // 0x423230: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x423230u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_423234:
    // 0x423234: 0x0  nop
    ctx->pc = 0x423234u;
    // NOP
label_423238:
    // 0x423238: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x423238u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_42323c:
    // 0x42323c: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x42323cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_423240:
    // 0x423240: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x423240u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_423244:
    // 0x423244: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x423244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_423248:
    // 0x423248: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x423248u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_42324c:
    // 0x42324c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x42324cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_423250:
    // 0x423250: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x423250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_423254:
    // 0x423254: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x423254u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_423258:
    // 0x423258: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x423258u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_42325c:
    // 0x42325c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x42325cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_423260:
    // 0x423260: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x423260u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_423264:
    // 0x423264: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x423264u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_423268:
    // 0x423268: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x423268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_42326c:
    // 0x42326c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x42326cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_423270:
    // 0x423270: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x423270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_423274:
    // 0x423274: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x423274u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_423278:
    // 0x423278: 0x11600027  beqz        $t3, . + 4 + (0x27 << 2)
label_42327c:
    if (ctx->pc == 0x42327Cu) {
        ctx->pc = 0x42327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423278u;
        // 0x42327c: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423280u;
        goto label_423280;
    }
    ctx->pc = 0x423278u;
    {
        const bool branch_taken_0x423278 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x42327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423278u;
        // 0x42327c: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423278) {
            ctx->pc = 0x423318u;
            goto label_423318;
        }
    }
    ctx->pc = 0x423280u;
label_423280:
    // 0x423280: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x423280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423284:
    // 0x423284: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x423284u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_423288:
    // 0x423288: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x423288u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42328c:
    // 0x42328c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x42328cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_423290:
    // 0x423290: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x423290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_423294:
    // 0x423294: 0x0  nop
    ctx->pc = 0x423294u;
    // NOP
label_423298:
    // 0x423298: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x423298u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_42329c:
    // 0x42329c: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x42329cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
label_4232a0:
    // 0x4232a0: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x4232a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_4232a4:
    // 0x4232a4: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x4232a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
label_4232a8:
    // 0x4232a8: 0xa1220001  sb          $v0, 0x1($t1)
    ctx->pc = 0x4232a8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 2));
label_4232ac:
    // 0x4232ac: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x4232acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_4232b0:
    // 0x4232b0: 0x95440002  lhu         $a0, 0x2($t2)
    ctx->pc = 0x4232b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
label_4232b4:
    // 0x4232b4: 0xa0e00007  sb          $zero, 0x7($a3)
    ctx->pc = 0x4232b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 0));
label_4232b8:
    // 0x4232b8: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x4232b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_4232bc:
    // 0x4232bc: 0xa1020004  sb          $v0, 0x4($t0)
    ctx->pc = 0x4232bcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 2));
label_4232c0:
    // 0x4232c0: 0xa1220005  sb          $v0, 0x5($t1)
    ctx->pc = 0x4232c0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 2));
label_4232c4:
    // 0x4232c4: 0xa0a40006  sb          $a0, 0x6($a1)
    ctx->pc = 0x4232c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 4));
label_4232c8:
    // 0x4232c8: 0x95430004  lhu         $v1, 0x4($t2)
    ctx->pc = 0x4232c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
label_4232cc:
    // 0x4232cc: 0xa0e0000b  sb          $zero, 0xB($a3)
    ctx->pc = 0x4232ccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 11), (uint8_t)GPR_U32(ctx, 0));
label_4232d0:
    // 0x4232d0: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x4232d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_4232d4:
    // 0x4232d4: 0xa1020008  sb          $v0, 0x8($t0)
    ctx->pc = 0x4232d4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 2));
label_4232d8:
    // 0x4232d8: 0xa1220009  sb          $v0, 0x9($t1)
    ctx->pc = 0x4232d8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 9), (uint8_t)GPR_U32(ctx, 2));
label_4232dc:
    // 0x4232dc: 0xa0a3000a  sb          $v1, 0xA($a1)
    ctx->pc = 0x4232dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 3));
label_4232e0:
    // 0x4232e0: 0x95440006  lhu         $a0, 0x6($t2)
    ctx->pc = 0x4232e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
label_4232e4:
    // 0x4232e4: 0xa0e0000f  sb          $zero, 0xF($a3)
    ctx->pc = 0x4232e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 15), (uint8_t)GPR_U32(ctx, 0));
label_4232e8:
    // 0x4232e8: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x4232e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_4232ec:
    // 0x4232ec: 0xa102000c  sb          $v0, 0xC($t0)
    ctx->pc = 0x4232ecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 12), (uint8_t)GPR_U32(ctx, 2));
label_4232f0:
    // 0x4232f0: 0xa122000d  sb          $v0, 0xD($t1)
    ctx->pc = 0x4232f0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 13), (uint8_t)GPR_U32(ctx, 2));
label_4232f4:
    // 0x4232f4: 0xa0a4000e  sb          $a0, 0xE($a1)
    ctx->pc = 0x4232f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 14), (uint8_t)GPR_U32(ctx, 4));
label_4232f8:
    // 0x4232f8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4232f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_4232fc:
    // 0x4232fc: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x4232fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_423300:
    // 0x423300: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x423300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_423304:
    // 0x423304: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x423304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_423308:
    // 0x423308: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x423308u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_42330c:
    // 0x42330c: 0x1560ffe2  bnez        $t3, . + 4 + (-0x1E << 2)
label_423310:
    if (ctx->pc == 0x423310u) {
        ctx->pc = 0x423310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42330Cu;
        // 0x423310: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423314u;
        goto label_423314;
    }
    ctx->pc = 0x42330Cu;
    {
        const bool branch_taken_0x42330c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x423310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42330Cu;
        // 0x423310: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42330c) {
            ctx->pc = 0x423298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423298;
        }
    }
    ctx->pc = 0x423314u;
label_423314:
    // 0x423314: 0x0  nop
    ctx->pc = 0x423314u;
    // NOP
label_423318:
    // 0x423318: 0x1c0182d  daddu       $v1, $t6, $zero
    ctx->pc = 0x423318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_42331c:
    // 0x42331c: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x42331cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_423320:
    // 0x423320: 0x79102a  slt         $v0, $v1, $t9
    ctx->pc = 0x423320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_423324:
    // 0x423324: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
label_423328:
    if (ctx->pc == 0x423328u) {
        ctx->pc = 0x423328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423324u;
        // 0x423328: 0x300282d  daddu       $a1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42332Cu;
        goto label_42332c;
    }
    ctx->pc = 0x423324u;
    {
        const bool branch_taken_0x423324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423324u;
        // 0x423328: 0x300282d  daddu       $a1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423324) {
            ctx->pc = 0x4231D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4231d0;
        }
    }
    ctx->pc = 0x42332Cu;
label_42332c:
    // 0x42332c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42332cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_423330:
    // 0x423330: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x423330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_423334:
    // 0x423334: 0x3e00008  jr          $ra
label_423338:
    if (ctx->pc == 0x423338u) {
        ctx->pc = 0x423338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423334u;
        // 0x423338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42333Cu;
        goto label_42333c;
    }
    ctx->pc = 0x423334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423334u;
        // 0x423338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42333Cu;
label_42333c:
    // 0x42333c: 0x0  nop
    ctx->pc = 0x42333cu;
    // NOP
label_423340:
    // 0x423340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x423340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_423344:
    // 0x423344: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x423344u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423348:
    // 0x423348: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x423348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_42334c:
    // 0x42334c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42334cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423350:
    // 0x423350: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x423350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_423354:
    // 0x423354: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x423354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_423358:
    // 0x423358: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x423358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_42335c:
    // 0x42335c: 0x7fb40000  sq          $s4, 0x0($sp)
    ctx->pc = 0x42335cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 20));
label_423360:
    // 0x423360: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x423360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_423364:
    // 0x423364: 0x8f120008  lw          $s2, 0x8($t8)
    ctx->pc = 0x423364u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
label_423368:
    // 0x423368: 0x8f140010  lw          $s4, 0x10($t8)
    ctx->pc = 0x423368u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
label_42336c:
    // 0x42336c: 0x8f190004  lw          $t9, 0x4($t8)
    ctx->pc = 0x42336cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
label_423370:
    // 0x423370: 0x1a400093  blez        $s2, . + 4 + (0x93 << 2)
label_423374:
    if (ctx->pc == 0x423374u) {
        ctx->pc = 0x423374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423370u;
        // 0x423374: 0x8f090014  lw          $t1, 0x14($t8) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423378u;
        goto label_423378;
    }
    ctx->pc = 0x423370u;
    {
        const bool branch_taken_0x423370 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x423374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423370u;
        // 0x423374: 0x8f090014  lw          $t1, 0x14($t8) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423370) {
            ctx->pc = 0x4235C0u;
            goto label_4235c0;
        }
    }
    ctx->pc = 0x423378u;
label_423378:
    // 0x423378: 0x24f10001  addiu       $s1, $a3, 0x1
    ctx->pc = 0x423378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_42337c:
    // 0x42337c: 0x1343021  addu        $a2, $t1, $s4
    ctx->pc = 0x42337cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
label_423380:
    // 0x423380: 0x1b20008a  blez        $t9, . + 4 + (0x8A << 2)
label_423384:
    if (ctx->pc == 0x423384u) {
        ctx->pc = 0x423384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423380u;
        // 0x423384: 0xb38021  addu        $s0, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423388u;
        goto label_423388;
    }
    ctx->pc = 0x423380u;
    {
        const bool branch_taken_0x423380 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x423384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423380u;
        // 0x423384: 0xb38021  addu        $s0, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423380) {
            ctx->pc = 0x4235ACu;
            goto label_4235ac;
        }
    }
    ctx->pc = 0x423388u;
label_423388:
    // 0x423388: 0x320682d  daddu       $t5, $t9, $zero
    ctx->pc = 0x423388u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_42338c:
    // 0x42338c: 0x240f00ff  addiu       $t7, $zero, 0xFF
    ctx->pc = 0x42338cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_423390:
    // 0x423390: 0xd1023  negu        $v0, $t5
    ctx->pc = 0x423390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
label_423394:
    // 0x423394: 0x240efff8  addiu       $t6, $zero, -0x8
    ctx->pc = 0x423394u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_423398:
    // 0x423398: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x423398u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_42339c:
    // 0x42339c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x42339cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4233a0:
    // 0x4233a0: 0x1100003c  beqz        $t0, . + 4 + (0x3C << 2)
label_4233a4:
    if (ctx->pc == 0x4233A4u) {
        ctx->pc = 0x4233A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4233A0u;
        // 0x4233a4: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4233A8u;
        goto label_4233a8;
    }
    ctx->pc = 0x4233A0u;
    {
        const bool branch_taken_0x4233a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4233A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4233A0u;
        // 0x4233a4: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4233a0) {
            ctx->pc = 0x423494u;
            goto label_423494;
        }
    }
    ctx->pc = 0x4233A8u;
label_4233a8:
    // 0x4233a8: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x4233a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
label_4233ac:
    // 0x4233ac: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4233b0:
    if (ctx->pc == 0x4233B0u) {
        ctx->pc = 0x4233B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4233ACu;
        // 0x4233b0: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4233B4u;
        goto label_4233b4;
    }
    ctx->pc = 0x4233ACu;
    {
        const bool branch_taken_0x4233ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4233B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4233ACu;
        // 0x4233b0: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4233ac) {
            ctx->pc = 0x423448u;
            goto label_423448;
        }
    }
    ctx->pc = 0x4233B4u;
label_4233b4:
    // 0x4233b4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_4233b8:
    if (ctx->pc == 0x4233B8u) {
        ctx->pc = 0x4233B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4233B4u;
        // 0x4233b8: 0x95440000  lhu         $a0, 0x0($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4233BCu;
        goto label_4233bc;
    }
    ctx->pc = 0x4233B4u;
    {
        const bool branch_taken_0x4233b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4233b4) {
            ctx->pc = 0x4233B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4233B4u;
            // 0x4233b8: 0x95440000  lhu         $a0, 0x0($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423408u;
            goto label_423408;
        }
    }
    ctx->pc = 0x4233BCu;
label_4233bc:
    // 0x4233bc: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4233bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4233c0:
    // 0x4233c0: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x4233c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_4233c4:
    // 0x4233c4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_4233c8:
    if (ctx->pc == 0x4233C8u) {
        ctx->pc = 0x4233C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4233C4u;
        // 0x4233c8: 0xa1200003  sb          $zero, 0x3($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4233CCu;
        goto label_4233cc;
    }
    ctx->pc = 0x4233C4u;
    {
        const bool branch_taken_0x4233c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4233c4) {
            ctx->pc = 0x4233C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4233C4u;
            // 0x4233c8: 0xa1200003  sb          $zero, 0x3($t1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4233D0u;
            goto label_4233d0;
        }
    }
    ctx->pc = 0x4233CCu;
label_4233cc:
    // 0x4233cc: 0xa12f0003  sb          $t7, 0x3($t1)
    ctx->pc = 0x4233ccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 15));
label_4233d0:
    // 0x4233d0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x4233d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4233d4:
    // 0x4233d4: 0x419c2  srl         $v1, $a0, 7
    ctx->pc = 0x4233d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
label_4233d8:
    // 0x4233d8: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x4233d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_4233dc:
    // 0x4233dc: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x4233dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
label_4233e0:
    // 0x4233e0: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x4233e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
label_4233e4:
    // 0x4233e4: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x4233e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_4233e8:
    // 0x4233e8: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x4233e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_4233ec:
    // 0x4233ec: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x4233ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
label_4233f0:
    // 0x4233f0: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x4233f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
label_4233f4:
    // 0x4233f4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4233f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4233f8:
    // 0x4233f8: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x4233f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
label_4233fc:
    // 0x4233fc: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x4233fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_423400:
    // 0x423400: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x423400u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_423404:
    // 0x423404: 0x0  nop
    ctx->pc = 0x423404u;
    // NOP
label_423408:
    // 0x423408: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x423408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_42340c:
    // 0x42340c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_423410:
    if (ctx->pc == 0x423410u) {
        ctx->pc = 0x423410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42340Cu;
        // 0x423410: 0xa0e00003  sb          $zero, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423414u;
        goto label_423414;
    }
    ctx->pc = 0x42340Cu;
    {
        const bool branch_taken_0x42340c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42340c) {
            ctx->pc = 0x423410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42340Cu;
            // 0x423410: 0xa0e00003  sb          $zero, 0x3($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423418u;
            goto label_423418;
        }
    }
    ctx->pc = 0x423414u;
label_423414:
    // 0x423414: 0xa0ef0003  sb          $t7, 0x3($a3)
    ctx->pc = 0x423414u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 15));
label_423418:
    // 0x423418: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x423418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_42341c:
    // 0x42341c: 0x419c2  srl         $v1, $a0, 7
    ctx->pc = 0x42341cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
label_423420:
    // 0x423420: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x423420u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_423424:
    // 0x423424: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x423424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
label_423428:
    // 0x423428: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x423428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
label_42342c:
    // 0x42342c: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x42342cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_423430:
    // 0x423430: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x423430u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_423434:
    // 0x423434: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x423434u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
label_423438:
    // 0x423438: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x423438u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
label_42343c:
    // 0x42343c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x42343cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_423440:
    // 0x423440: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x423440u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
label_423444:
    // 0x423444: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x423444u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_423448:
    // 0x423448: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x423448u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_42344c:
    // 0x42344c: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x42344cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_423450:
    // 0x423450: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_423454:
    if (ctx->pc == 0x423454u) {
        ctx->pc = 0x423454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423450u;
        // 0x423454: 0xa0e00003  sb          $zero, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423458u;
        goto label_423458;
    }
    ctx->pc = 0x423450u;
    {
        const bool branch_taken_0x423450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x423450) {
            ctx->pc = 0x423454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423450u;
            // 0x423454: 0xa0e00003  sb          $zero, 0x3($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423460u;
            goto label_423460;
        }
    }
    ctx->pc = 0x423458u;
label_423458:
    // 0x423458: 0xa0ef0003  sb          $t7, 0x3($a3)
    ctx->pc = 0x423458u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 15));
label_42345c:
    // 0x42345c: 0x0  nop
    ctx->pc = 0x42345cu;
    // NOP
label_423460:
    // 0x423460: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x423460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_423464:
    // 0x423464: 0x419c2  srl         $v1, $a0, 7
    ctx->pc = 0x423464u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
label_423468:
    // 0x423468: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x423468u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_42346c:
    // 0x42346c: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x42346cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
label_423470:
    // 0x423470: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x423470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
label_423474:
    // 0x423474: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x423474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_423478:
    // 0x423478: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x423478u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_42347c:
    // 0x42347c: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x42347cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
label_423480:
    // 0x423480: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x423480u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
label_423484:
    // 0x423484: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x423484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_423488:
    // 0x423488: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x423488u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_42348c:
    // 0x42348c: 0x11a00047  beqz        $t5, . + 4 + (0x47 << 2)
label_423490:
    if (ctx->pc == 0x423490u) {
        ctx->pc = 0x423490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42348Cu;
        // 0x423490: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423494u;
        goto label_423494;
    }
    ctx->pc = 0x42348Cu;
    {
        const bool branch_taken_0x42348c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x423490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42348Cu;
        // 0x423490: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42348c) {
            ctx->pc = 0x4235ACu;
            goto label_4235ac;
        }
    }
    ctx->pc = 0x423494u;
label_423494:
    // 0x423494: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x423494u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_423498:
    // 0x423498: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x423498u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_42349c:
    // 0x42349c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x42349cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4234a0:
    // 0x4234a0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x4234a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4234a4:
    // 0x4234a4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4234a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4234a8:
    // 0x4234a8: 0x95850000  lhu         $a1, 0x0($t4)
    ctx->pc = 0x4234a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4234ac:
    // 0x4234ac: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x4234acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
label_4234b0:
    // 0x4234b0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_4234b4:
    if (ctx->pc == 0x4234B4u) {
        ctx->pc = 0x4234B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4234B0u;
        // 0x4234b4: 0xa1200003  sb          $zero, 0x3($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4234B8u;
        goto label_4234b8;
    }
    ctx->pc = 0x4234B0u;
    {
        const bool branch_taken_0x4234b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4234b0) {
            ctx->pc = 0x4234B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4234B0u;
            // 0x4234b4: 0xa1200003  sb          $zero, 0x3($t1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4234C0u;
            goto label_4234c0;
        }
    }
    ctx->pc = 0x4234B8u;
label_4234b8:
    // 0x4234b8: 0xa10f0003  sb          $t7, 0x3($t0)
    ctx->pc = 0x4234b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 15));
label_4234bc:
    // 0x4234bc: 0x0  nop
    ctx->pc = 0x4234bcu;
    // NOP
label_4234c0:
    // 0x4234c0: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x4234c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_4234c4:
    // 0x4234c4: 0x52082  srl         $a0, $a1, 2
    ctx->pc = 0x4234c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_4234c8:
    // 0x4234c8: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x4234c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
label_4234cc:
    // 0x4234cc: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x4234ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
label_4234d0:
    // 0x4234d0: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x4234d0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
label_4234d4:
    // 0x4234d4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x4234d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4234d8:
    // 0x4234d8: 0xa1640001  sb          $a0, 0x1($t3)
    ctx->pc = 0x4234d8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 4));
label_4234dc:
    // 0x4234dc: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x4234dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_4234e0:
    // 0x4234e0: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x4234e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
label_4234e4:
    // 0x4234e4: 0x95850002  lhu         $a1, 0x2($t4)
    ctx->pc = 0x4234e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
label_4234e8:
    // 0x4234e8: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x4234e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
label_4234ec:
    // 0x4234ec: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_4234f0:
    if (ctx->pc == 0x4234F0u) {
        ctx->pc = 0x4234F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4234ECu;
        // 0x4234f0: 0xa1200007  sb          $zero, 0x7($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4234F4u;
        goto label_4234f4;
    }
    ctx->pc = 0x4234ECu;
    {
        const bool branch_taken_0x4234ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4234ec) {
            ctx->pc = 0x4234F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4234ECu;
            // 0x4234f0: 0xa1200007  sb          $zero, 0x7($t1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4234F8u;
            goto label_4234f8;
        }
    }
    ctx->pc = 0x4234F4u;
label_4234f4:
    // 0x4234f4: 0xa10f0007  sb          $t7, 0x7($t0)
    ctx->pc = 0x4234f4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 15));
label_4234f8:
    // 0x4234f8: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x4234f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_4234fc:
    // 0x4234fc: 0x52082  srl         $a0, $a1, 2
    ctx->pc = 0x4234fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_423500:
    // 0x423500: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x423500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
label_423504:
    // 0x423504: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x423504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
label_423508:
    // 0x423508: 0xa1430004  sb          $v1, 0x4($t2)
    ctx->pc = 0x423508u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 3));
label_42350c:
    // 0x42350c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x42350cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_423510:
    // 0x423510: 0xa1640005  sb          $a0, 0x5($t3)
    ctx->pc = 0x423510u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 5), (uint8_t)GPR_U32(ctx, 4));
label_423514:
    // 0x423514: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x423514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_423518:
    // 0x423518: 0xa0e20006  sb          $v0, 0x6($a3)
    ctx->pc = 0x423518u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 2));
label_42351c:
    // 0x42351c: 0x95850004  lhu         $a1, 0x4($t4)
    ctx->pc = 0x42351cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
label_423520:
    // 0x423520: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x423520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
label_423524:
    // 0x423524: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_423528:
    if (ctx->pc == 0x423528u) {
        ctx->pc = 0x423528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423524u;
        // 0x423528: 0xa120000b  sb          $zero, 0xB($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 11), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42352Cu;
        goto label_42352c;
    }
    ctx->pc = 0x423524u;
    {
        const bool branch_taken_0x423524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x423524) {
            ctx->pc = 0x423528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423524u;
            // 0x423528: 0xa120000b  sb          $zero, 0xB($t1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 9), 11), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423530u;
            goto label_423530;
        }
    }
    ctx->pc = 0x42352Cu;
label_42352c:
    // 0x42352c: 0xa10f000b  sb          $t7, 0xB($t0)
    ctx->pc = 0x42352cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 11), (uint8_t)GPR_U32(ctx, 15));
label_423530:
    // 0x423530: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x423530u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_423534:
    // 0x423534: 0x52082  srl         $a0, $a1, 2
    ctx->pc = 0x423534u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_423538:
    // 0x423538: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x423538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
label_42353c:
    // 0x42353c: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x42353cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
label_423540:
    // 0x423540: 0xa1430008  sb          $v1, 0x8($t2)
    ctx->pc = 0x423540u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 8), (uint8_t)GPR_U32(ctx, 3));
label_423544:
    // 0x423544: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x423544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_423548:
    // 0x423548: 0xa1640009  sb          $a0, 0x9($t3)
    ctx->pc = 0x423548u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 9), (uint8_t)GPR_U32(ctx, 4));
label_42354c:
    // 0x42354c: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x42354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_423550:
    // 0x423550: 0xa0e2000a  sb          $v0, 0xA($a3)
    ctx->pc = 0x423550u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 2));
label_423554:
    // 0x423554: 0x95830006  lhu         $v1, 0x6($t4)
    ctx->pc = 0x423554u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 6)));
label_423558:
    // 0x423558: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x423558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_42355c:
    // 0x42355c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_423560:
    if (ctx->pc == 0x423560u) {
        ctx->pc = 0x423560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42355Cu;
        // 0x423560: 0xa120000f  sb          $zero, 0xF($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 15), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423564u;
        goto label_423564;
    }
    ctx->pc = 0x42355Cu;
    {
        const bool branch_taken_0x42355c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42355c) {
            ctx->pc = 0x423560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42355Cu;
            // 0x423560: 0xa120000f  sb          $zero, 0xF($t1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 9), 15), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423568u;
            goto label_423568;
        }
    }
    ctx->pc = 0x423564u;
label_423564:
    // 0x423564: 0xa10f000f  sb          $t7, 0xF($t0)
    ctx->pc = 0x423564u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 15), (uint8_t)GPR_U32(ctx, 15));
label_423568:
    // 0x423568: 0x311c2  srl         $v0, $v1, 7
    ctx->pc = 0x423568u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_42356c:
    // 0x42356c: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x42356cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_423570:
    // 0x423570: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x423570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
label_423574:
    // 0x423574: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x423574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
label_423578:
    // 0x423578: 0xa142000c  sb          $v0, 0xC($t2)
    ctx->pc = 0x423578u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 12), (uint8_t)GPR_U32(ctx, 2));
label_42357c:
    // 0x42357c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x42357cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_423580:
    // 0x423580: 0xa164000d  sb          $a0, 0xD($t3)
    ctx->pc = 0x423580u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 13), (uint8_t)GPR_U32(ctx, 4));
label_423584:
    // 0x423584: 0x6e1824  and         $v1, $v1, $t6
    ctx->pc = 0x423584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
label_423588:
    // 0x423588: 0xa0e3000e  sb          $v1, 0xE($a3)
    ctx->pc = 0x423588u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 14), (uint8_t)GPR_U32(ctx, 3));
label_42358c:
    // 0x42358c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x42358cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_423590:
    // 0x423590: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x423590u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_423594:
    // 0x423594: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x423594u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_423598:
    // 0x423598: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x423598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_42359c:
    // 0x42359c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x42359cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_4235a0:
    // 0x4235a0: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x4235a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
label_4235a4:
    // 0x4235a4: 0x15a0ffc0  bnez        $t5, . + 4 + (-0x40 << 2)
label_4235a8:
    if (ctx->pc == 0x4235A8u) {
        ctx->pc = 0x4235A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4235A4u;
        // 0x4235a8: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4235ACu;
        goto label_4235ac;
    }
    ctx->pc = 0x4235A4u;
    {
        const bool branch_taken_0x4235a4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x4235A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4235A4u;
        // 0x4235a8: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4235a4) {
            ctx->pc = 0x4234A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4234a8;
        }
    }
    ctx->pc = 0x4235ACu;
label_4235ac:
    // 0x4235ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4235acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4235b0:
    // 0x4235b0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4235b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4235b4:
    // 0x4235b4: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x4235b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_4235b8:
    // 0x4235b8: 0x1440ff6f  bnez        $v0, . + 4 + (-0x91 << 2)
label_4235bc:
    if (ctx->pc == 0x4235BCu) {
        ctx->pc = 0x4235BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4235B8u;
        // 0x4235bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4235C0u;
        goto label_4235c0;
    }
    ctx->pc = 0x4235B8u;
    {
        const bool branch_taken_0x4235b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4235BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4235B8u;
        // 0x4235bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4235b8) {
            ctx->pc = 0x423378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423378;
        }
    }
    ctx->pc = 0x4235C0u;
label_4235c0:
    // 0x4235c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4235c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4235c4:
    // 0x4235c4: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x4235c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_4235c8:
    // 0x4235c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4235c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4235cc:
    // 0x4235cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4235ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4235d0:
    // 0x4235d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4235d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4235d4:
    // 0x4235d4: 0x7bb40000  lq          $s4, 0x0($sp)
    ctx->pc = 0x4235d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4235d8:
    // 0x4235d8: 0x3e00008  jr          $ra
label_4235dc:
    if (ctx->pc == 0x4235DCu) {
        ctx->pc = 0x4235DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4235D8u;
        // 0x4235dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4235E0u;
        goto label_4235e0;
    }
    ctx->pc = 0x4235D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4235DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4235D8u;
        // 0x4235dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4235D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4235E0u;
label_4235e0:
    // 0x4235e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4235e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4235e4:
    // 0x4235e4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x4235e4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4235e8:
    // 0x4235e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4235e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4235ec:
    // 0x4235ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4235ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4235f0:
    // 0x4235f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4235f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4235f4:
    // 0x4235f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4235f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4235f8:
    // 0x4235f8: 0x7fb30000  sq          $s3, 0x0($sp)
    ctx->pc = 0x4235f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 19));
label_4235fc:
    // 0x4235fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4235fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_423600:
    // 0x423600: 0x8df10008  lw          $s1, 0x8($t7)
    ctx->pc = 0x423600u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_423604:
    // 0x423604: 0x8df30010  lw          $s3, 0x10($t7)
    ctx->pc = 0x423604u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
label_423608:
    // 0x423608: 0x8df80004  lw          $t8, 0x4($t7)
    ctx->pc = 0x423608u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
label_42360c:
    // 0x42360c: 0x1a20007b  blez        $s1, . + 4 + (0x7B << 2)
label_423610:
    if (ctx->pc == 0x423610u) {
        ctx->pc = 0x423610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42360Cu;
        // 0x423610: 0x8de80014  lw          $t0, 0x14($t7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423614u;
        goto label_423614;
    }
    ctx->pc = 0x42360Cu;
    {
        const bool branch_taken_0x42360c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x423610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42360Cu;
        // 0x423610: 0x8de80014  lw          $t0, 0x14($t7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42360c) {
            ctx->pc = 0x4237FCu;
            goto label_4237fc;
        }
    }
    ctx->pc = 0x423614u;
label_423614:
    // 0x423614: 0x0  nop
    ctx->pc = 0x423614u;
    // NOP
label_423618:
    // 0x423618: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x423618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_42361c:
    // 0x42361c: 0x1138021  addu        $s0, $t0, $s3
    ctx->pc = 0x42361cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
label_423620:
    // 0x423620: 0x1b000071  blez        $t8, . + 4 + (0x71 << 2)
label_423624:
    if (ctx->pc == 0x423624u) {
        ctx->pc = 0x423624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423620u;
        // 0x423624: 0xb2c821  addu        $t9, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423628u;
        goto label_423628;
    }
    ctx->pc = 0x423620u;
    {
        const bool branch_taken_0x423620 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x423624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423620u;
        // 0x423624: 0xb2c821  addu        $t9, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423620) {
            ctx->pc = 0x4237E8u;
            goto label_4237e8;
        }
    }
    ctx->pc = 0x423628u;
label_423628:
    // 0x423628: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x423628u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_42362c:
    // 0x42362c: 0x240e00ff  addiu       $t6, $zero, 0xFF
    ctx->pc = 0x42362cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_423630:
    // 0x423630: 0xc1023  negu        $v0, $t4
    ctx->pc = 0x423630u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_423634:
    // 0x423634: 0x240dfff8  addiu       $t5, $zero, -0x8
    ctx->pc = 0x423634u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_423638:
    // 0x423638: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x423638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_42363c:
    // 0x42363c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x42363cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_423640:
    // 0x423640: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_423644:
    if (ctx->pc == 0x423644u) {
        ctx->pc = 0x423644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423640u;
        // 0x423644: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423648u;
        goto label_423648;
    }
    ctx->pc = 0x423640u;
    {
        const bool branch_taken_0x423640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x423644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423640u;
        // 0x423644: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423640) {
            ctx->pc = 0x423708u;
            goto label_423708;
        }
    }
    ctx->pc = 0x423648u;
label_423648:
    // 0x423648: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x423648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_42364c:
    // 0x42364c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_423650:
    if (ctx->pc == 0x423650u) {
        ctx->pc = 0x423650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42364Cu;
        // 0x423650: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x423654u;
        goto label_423654;
    }
    ctx->pc = 0x42364Cu;
    {
        const bool branch_taken_0x42364c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42364Cu;
        // 0x423650: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42364c) {
            ctx->pc = 0x4236CCu;
            goto label_4236cc;
        }
    }
    ctx->pc = 0x423654u;
label_423654:
    // 0x423654: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_423658:
    if (ctx->pc == 0x423658u) {
        ctx->pc = 0x423658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423654u;
        // 0x423658: 0x95220000  lhu         $v0, 0x0($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42365Cu;
        goto label_42365c;
    }
    ctx->pc = 0x423654u;
    {
        const bool branch_taken_0x423654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x423654) {
            ctx->pc = 0x423658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423654u;
            // 0x423658: 0x95220000  lhu         $v0, 0x0($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x423698u;
            goto label_423698;
        }
    }
    ctx->pc = 0x42365Cu;
label_42365c:
    // 0x42365c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x42365cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_423660:
    // 0x423660: 0xa10e0003  sb          $t6, 0x3($t0)
    ctx->pc = 0x423660u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 14));
label_423664:
    // 0x423664: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x423664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_423668:
    // 0x423668: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x423668u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_42366c:
    // 0x42366c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x42366cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_423670:
    // 0x423670: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x423670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
label_423674:
    // 0x423674: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x423674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
label_423678:
    // 0x423678: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x423678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
label_42367c:
    // 0x42367c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x42367cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_423680:
    // 0x423680: 0xa1020001  sb          $v0, 0x1($t0)
    ctx->pc = 0x423680u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 2));
label_423684:
    // 0x423684: 0xa1040002  sb          $a0, 0x2($t0)
    ctx->pc = 0x423684u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 4));
label_423688:
    // 0x423688: 0x25070004  addiu       $a3, $t0, 0x4
    ctx->pc = 0x423688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_42368c:
    // 0x42368c: 0x24a90002  addiu       $t1, $a1, 0x2
    ctx->pc = 0x42368cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_423690:
    // 0x423690: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x423690u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_423694:
    // 0x423694: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x423694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_423698:
    // 0x423698: 0xa0ee0003  sb          $t6, 0x3($a3)
    ctx->pc = 0x423698u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 14));
label_42369c:
    // 0x42369c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x42369cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4236a0:
    // 0x4236a0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x4236a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_4236a4:
    // 0x4236a4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x4236a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_4236a8:
    // 0x4236a8: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x4236a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
label_4236ac:
    // 0x4236ac: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x4236acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
label_4236b0:
    // 0x4236b0: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x4236b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
label_4236b4:
    // 0x4236b4: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x4236b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_4236b8:
    // 0x4236b8: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x4236b8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
label_4236bc:
    // 0x4236bc: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x4236bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
label_4236c0:
    // 0x4236c0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4236c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4236c4:
    // 0x4236c4: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x4236c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_4236c8:
    // 0x4236c8: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x4236c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_4236cc:
    // 0x4236cc: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4236ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4236d0:
    // 0x4236d0: 0xa0ee0003  sb          $t6, 0x3($a3)
    ctx->pc = 0x4236d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 14));
label_4236d4:
    // 0x4236d4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x4236d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4236d8:
    // 0x4236d8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x4236d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_4236dc:
    // 0x4236dc: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x4236dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_4236e0:
    // 0x4236e0: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x4236e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
label_4236e4:
    // 0x4236e4: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x4236e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
label_4236e8:
    // 0x4236e8: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x4236e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
label_4236ec:
    // 0x4236ec: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x4236ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_4236f0:
    // 0x4236f0: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x4236f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
label_4236f4:
    // 0x4236f4: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x4236f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
label_4236f8:
    // 0x4236f8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4236f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4236fc:
    // 0x4236fc: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x4236fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_423700:
    // 0x423700: 0x11800039  beqz        $t4, . + 4 + (0x39 << 2)
label_423704:
    if (ctx->pc == 0x423704u) {
        ctx->pc = 0x423704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423700u;
        // 0x423704: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423708u;
        goto label_423708;
    }
    ctx->pc = 0x423700u;
    {
        const bool branch_taken_0x423700 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x423704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423700u;
        // 0x423704: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423700) {
            ctx->pc = 0x4237E8u;
            goto label_4237e8;
        }
    }
    ctx->pc = 0x423708u;
label_423708:
    // 0x423708: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x423708u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_42370c:
    // 0x42370c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x42370cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_423710:
    // 0x423710: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x423710u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_423714:
    // 0x423714: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x423714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_423718:
    // 0x423718: 0x95640000  lhu         $a0, 0x0($t3)
    ctx->pc = 0x423718u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_42371c:
    // 0x42371c: 0xa10e0003  sb          $t6, 0x3($t0)
    ctx->pc = 0x42371cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 14));
label_423720:
    // 0x423720: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x423720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_423724:
    // 0x423724: 0x418c2  srl         $v1, $a0, 3
    ctx->pc = 0x423724u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_423728:
    // 0x423728: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x423728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
label_42372c:
    // 0x42372c: 0x306300fc  andi        $v1, $v1, 0xFC
    ctx->pc = 0x42372cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
label_423730:
    // 0x423730: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x423730u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
label_423734:
    // 0x423734: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x423734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_423738:
    // 0x423738: 0xa1430001  sb          $v1, 0x1($t2)
    ctx->pc = 0x423738u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 3));
label_42373c:
    // 0x42373c: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x42373cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
label_423740:
    // 0x423740: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x423740u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
label_423744:
    // 0x423744: 0x95650002  lhu         $a1, 0x2($t3)
    ctx->pc = 0x423744u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
label_423748:
    // 0x423748: 0xa10e0007  sb          $t6, 0x7($t0)
    ctx->pc = 0x423748u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 14));
label_42374c:
    // 0x42374c: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x42374cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_423750:
    // 0x423750: 0x518c2  srl         $v1, $a1, 3
    ctx->pc = 0x423750u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_423754:
    // 0x423754: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x423754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
label_423758:
    // 0x423758: 0x306300fc  andi        $v1, $v1, 0xFC
    ctx->pc = 0x423758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
label_42375c:
    // 0x42375c: 0xa1220004  sb          $v0, 0x4($t1)
    ctx->pc = 0x42375cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 2));
label_423760:
    // 0x423760: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x423760u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_423764:
    // 0x423764: 0xa1430005  sb          $v1, 0x5($t2)
    ctx->pc = 0x423764u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 3));
label_423768:
    // 0x423768: 0xad2824  and         $a1, $a1, $t5
    ctx->pc = 0x423768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
label_42376c:
    // 0x42376c: 0xa0e50006  sb          $a1, 0x6($a3)
    ctx->pc = 0x42376cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 5));
label_423770:
    // 0x423770: 0x95640004  lhu         $a0, 0x4($t3)
    ctx->pc = 0x423770u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
label_423774:
    // 0x423774: 0xa10e000b  sb          $t6, 0xB($t0)
    ctx->pc = 0x423774u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 11), (uint8_t)GPR_U32(ctx, 14));
label_423778:
    // 0x423778: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x423778u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_42377c:
    // 0x42377c: 0x418c2  srl         $v1, $a0, 3
    ctx->pc = 0x42377cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_423780:
    // 0x423780: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x423780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
label_423784:
    // 0x423784: 0x306300fc  andi        $v1, $v1, 0xFC
    ctx->pc = 0x423784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
label_423788:
    // 0x423788: 0xa1220008  sb          $v0, 0x8($t1)
    ctx->pc = 0x423788u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 2));
label_42378c:
    // 0x42378c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x42378cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_423790:
    // 0x423790: 0xa1430009  sb          $v1, 0x9($t2)
    ctx->pc = 0x423790u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 9), (uint8_t)GPR_U32(ctx, 3));
label_423794:
    // 0x423794: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x423794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
label_423798:
    // 0x423798: 0xa0e4000a  sb          $a0, 0xA($a3)
    ctx->pc = 0x423798u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 4));
label_42379c:
    // 0x42379c: 0x95650006  lhu         $a1, 0x6($t3)
    ctx->pc = 0x42379cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
label_4237a0:
    // 0x4237a0: 0xa10e000f  sb          $t6, 0xF($t0)
    ctx->pc = 0x4237a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 15), (uint8_t)GPR_U32(ctx, 14));
label_4237a4:
    // 0x4237a4: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x4237a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_4237a8:
    // 0x4237a8: 0x518c2  srl         $v1, $a1, 3
    ctx->pc = 0x4237a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_4237ac:
    // 0x4237ac: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x4237acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
label_4237b0:
    // 0x4237b0: 0x306300fc  andi        $v1, $v1, 0xFC
    ctx->pc = 0x4237b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
label_4237b4:
    // 0x4237b4: 0xa122000c  sb          $v0, 0xC($t1)
    ctx->pc = 0x4237b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 12), (uint8_t)GPR_U32(ctx, 2));
label_4237b8:
    // 0x4237b8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4237b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4237bc:
    // 0x4237bc: 0xa143000d  sb          $v1, 0xD($t2)
    ctx->pc = 0x4237bcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13), (uint8_t)GPR_U32(ctx, 3));
label_4237c0:
    // 0x4237c0: 0xad2824  and         $a1, $a1, $t5
    ctx->pc = 0x4237c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
label_4237c4:
    // 0x4237c4: 0xa0e5000e  sb          $a1, 0xE($a3)
    ctx->pc = 0x4237c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 14), (uint8_t)GPR_U32(ctx, 5));
label_4237c8:
    // 0x4237c8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4237c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4237cc:
    // 0x4237cc: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x4237ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_4237d0:
    // 0x4237d0: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x4237d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_4237d4:
    // 0x4237d4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4237d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_4237d8:
    // 0x4237d8: 0x258cfffc  addiu       $t4, $t4, -0x4
    ctx->pc = 0x4237d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
label_4237dc:
    // 0x4237dc: 0x1580ffce  bnez        $t4, . + 4 + (-0x32 << 2)
label_4237e0:
    if (ctx->pc == 0x4237E0u) {
        ctx->pc = 0x4237E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4237DCu;
        // 0x4237e0: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4237E4u;
        goto label_4237e4;
    }
    ctx->pc = 0x4237DCu;
    {
        const bool branch_taken_0x4237dc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x4237E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4237DCu;
        // 0x4237e0: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4237dc) {
            ctx->pc = 0x423718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423718;
        }
    }
    ctx->pc = 0x4237E4u;
label_4237e4:
    // 0x4237e4: 0x0  nop
    ctx->pc = 0x4237e4u;
    // NOP
label_4237e8:
    // 0x4237e8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x4237e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4237ec:
    // 0x4237ec: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4237ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4237f0:
    // 0x4237f0: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x4237f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_4237f4:
    // 0x4237f4: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
label_4237f8:
    if (ctx->pc == 0x4237F8u) {
        ctx->pc = 0x4237F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4237F4u;
        // 0x4237f8: 0x320282d  daddu       $a1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4237FCu;
        goto label_4237fc;
    }
    ctx->pc = 0x4237F4u;
    {
        const bool branch_taken_0x4237f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4237F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4237F4u;
        // 0x4237f8: 0x320282d  daddu       $a1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4237f4) {
            ctx->pc = 0x423618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423618;
        }
    }
    ctx->pc = 0x4237FCu;
label_4237fc:
    // 0x4237fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4237fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_423800:
    // 0x423800: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x423800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_423804:
    // 0x423804: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x423804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_423808:
    // 0x423808: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x423808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42380c:
    // 0x42380c: 0x7bb30000  lq          $s3, 0x0($sp)
    ctx->pc = 0x42380cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_423810:
    // 0x423810: 0x3e00008  jr          $ra
label_423814:
    if (ctx->pc == 0x423814u) {
        ctx->pc = 0x423814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423810u;
        // 0x423814: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423818u;
        goto label_423818;
    }
    ctx->pc = 0x423810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423810u;
        // 0x423814: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423818u;
label_423818:
    // 0x423818: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x423818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_42381c:
    // 0x42381c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x42381cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_423820:
    // 0x423820: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x423820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_423824:
    // 0x423824: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x423824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
label_423828:
    // 0x423828: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x423828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_42382c:
    // 0x42382c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x42382cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423830:
    // 0x423830: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x423830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_423834:
    // 0x423834: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x423834u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_423838:
    // 0x423838: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x423838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_42383c:
    // 0x42383c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x42383cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_423840:
    // 0x423840: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x423840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_423844:
    // 0x423844: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x423844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_423848:
    // 0x423848: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x423848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_42384c:
    // 0x42384c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x42384cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_423850:
    // 0x423850: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x423850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_423854:
    // 0x423854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x423854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_423858:
    // 0x423858: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x423858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_42385c:
    // 0x42385c: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x42385cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_423860:
    // 0x423860: 0x8ea70010  lw          $a3, 0x10($s5)
    ctx->pc = 0x423860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_423864:
    // 0x423864: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x423864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_423868:
    // 0x423868: 0x8ea80008  lw          $t0, 0x8($s5)
    ctx->pc = 0x423868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_42386c:
    // 0x42386c: 0x2c63007  srav        $a2, $a2, $s6
    ctx->pc = 0x42386cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 22) & 0x1F));
label_423870:
    // 0x423870: 0x2c73804  sllv        $a3, $a3, $s6
    ctx->pc = 0x423870u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 22) & 0x1F));
label_423874:
    // 0x423874: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x423874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
label_423878:
    // 0x423878: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x423878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
label_42387c:
    // 0x42387c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42387cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_423880:
    // 0x423880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x423880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_423884:
    // 0x423884: 0x2c84007  srav        $t0, $t0, $s6
    ctx->pc = 0x423884u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 22) & 0x1F));
label_423888:
    // 0x423888: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x423888u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42388c:
    // 0x42388c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x42388cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423890:
    // 0x423890: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x423890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_423894:
    // 0x423894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x423894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423898:
    // 0x423898: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x423898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_42389c:
    // 0x42389c: 0x2c2b804  sllv        $s7, $v0, $s6
    ctx->pc = 0x42389cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 22) & 0x1F));
label_4238a0:
    // 0x4238a0: 0x1900009e  blez        $t0, . + 4 + (0x9E << 2)
label_4238a4:
    if (ctx->pc == 0x4238A4u) {
        ctx->pc = 0x4238A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4238A0u;
        // 0x4238a4: 0x8eb10014  lw          $s1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4238A8u;
        goto label_4238a8;
    }
    ctx->pc = 0x4238A0u;
    {
        const bool branch_taken_0x4238a0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x4238A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4238A0u;
        // 0x4238a4: 0x8eb10014  lw          $s1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4238a0) {
            ctx->pc = 0x423B1Cu;
            goto label_423b1c;
        }
    }
    ctx->pc = 0x4238A8u;
label_4238a8:
    // 0x4238a8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x4238a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_4238ac:
    // 0x4238ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4238acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4238b0:
    // 0x4238b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4238b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4238b4:
    // 0x4238b4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4238b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4238b8:
    // 0x4238b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4238b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4238bc:
    // 0x4238bc: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x4238bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_4238c0:
    // 0x4238c0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4238c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4238c4:
    // 0x4238c4: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x4238c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_4238c8:
    // 0x4238c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x4238c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_4238cc:
    // 0x4238cc: 0x1840008d  blez        $v0, . + 4 + (0x8D << 2)
label_4238d0:
    if (ctx->pc == 0x4238D0u) {
        ctx->pc = 0x4238D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4238CCu;
        // 0x4238d0: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4238D4u;
        goto label_4238d4;
    }
    ctx->pc = 0x4238CCu;
    {
        const bool branch_taken_0x4238cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4238D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4238CCu;
        // 0x4238d0: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4238cc) {
            ctx->pc = 0x423B04u;
            goto label_423b04;
        }
    }
    ctx->pc = 0x4238D4u;
label_4238d4:
    // 0x4238d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4238d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4238d8:
    // 0x4238d8: 0x141023  negu        $v0, $s4
    ctx->pc = 0x4238d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_4238dc:
    // 0x4238dc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4238dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4238e0:
    // 0x4238e0: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_4238e4:
    if (ctx->pc == 0x4238E4u) {
        ctx->pc = 0x4238E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4238E0u;
        // 0x4238e4: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4238E8u;
        goto label_4238e8;
    }
    ctx->pc = 0x4238E0u;
    {
        const bool branch_taken_0x4238e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4238E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4238E0u;
        // 0x4238e4: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4238e0) {
            ctx->pc = 0x4239E0u;
            goto label_4239e0;
        }
    }
    ctx->pc = 0x4238E8u;
label_4238e8:
    // 0x4238e8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4238e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4238ec:
    // 0x4238ec: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4238f0:
    if (ctx->pc == 0x4238F0u) {
        ctx->pc = 0x4238F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4238ECu;
        // 0x4238f0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4238F4u;
        goto label_4238f4;
    }
    ctx->pc = 0x4238ECu;
    {
        const bool branch_taken_0x4238ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4238F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4238ECu;
        // 0x4238f0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4238ec) {
            ctx->pc = 0x423990u;
            goto label_423990;
        }
    }
    ctx->pc = 0x4238F4u;
label_4238f4:
    // 0x4238f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_4238f8:
    if (ctx->pc == 0x4238F8u) {
        ctx->pc = 0x4238F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4238F4u;
        // 0x4238f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4238FCu;
        goto label_4238fc;
    }
    ctx->pc = 0x4238F4u;
    {
        const bool branch_taken_0x4238f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4238F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4238F4u;
        // 0x4238f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4238f4) {
            ctx->pc = 0x423944u;
            goto label_423944;
        }
    }
    ctx->pc = 0x4238FCu;
label_4238fc:
    // 0x4238fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4238fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_423900:
    // 0x423900: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x423900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_423904:
    // 0x423904: 0x3c0f809  jalr        $fp
label_423908:
    if (ctx->pc == 0x423908u) {
        ctx->pc = 0x423908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423904u;
        // 0x423908: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42390Cu;
        goto label_42390c;
    }
    ctx->pc = 0x423904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x42390Cu);
        ctx->pc = 0x423908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423904u;
        // 0x423908: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423904u, 0x42390Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42390Cu;
label_42390c:
    // 0x42390c: 0x2378021  addu        $s0, $s1, $s7
    ctx->pc = 0x42390cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
label_423910:
    // 0x423910: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x423910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_423914:
    // 0x423914: 0x26720004  addiu       $s2, $s3, 0x4
    ctx->pc = 0x423914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_423918:
    // 0x423918: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x423918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_42391c:
    // 0x42391c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x42391cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_423920:
    // 0x423920: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x423920u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423924:
    // 0x423924: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x423924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_423928:
    // 0x423928: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x423928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_42392c:
    // 0x42392c: 0x93a50002  lbu         $a1, 0x2($sp)
    ctx->pc = 0x42392cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423930:
    // 0x423930: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x423930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_423934:
    // 0x423934: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x423934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_423938:
    // 0x423938: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x423938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_42393c:
    // 0x42393c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x42393cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_423940:
    // 0x423940: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x423940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_423944:
    // 0x423944: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x423944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423948:
    // 0x423948: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_42394c:
    // 0x42394c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x42394cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_423950:
    // 0x423950: 0x3c0f809  jalr        $fp
label_423954:
    if (ctx->pc == 0x423954u) {
        ctx->pc = 0x423954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423950u;
        // 0x423954: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423958u;
        goto label_423958;
    }
    ctx->pc = 0x423950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x423958u);
        ctx->pc = 0x423954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423950u;
        // 0x423954: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423950u, 0x423958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423958u;
label_423958:
    // 0x423958: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x423958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_42395c:
    // 0x42395c: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x42395cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_423960:
    // 0x423960: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x423960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_423964:
    // 0x423964: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x423964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423968:
    // 0x423968: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x423968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_42396c:
    // 0x42396c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x42396cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_423970:
    // 0x423970: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x423970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_423974:
    // 0x423974: 0x93a50002  lbu         $a1, 0x2($sp)
    ctx->pc = 0x423974u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423978:
    // 0x423978: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x423978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42397c:
    // 0x42397c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x42397cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_423980:
    // 0x423980: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x423980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_423984:
    // 0x423984: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x423984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_423988:
    // 0x423988: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x423988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_42398c:
    // 0x42398c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x42398cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_423990:
    // 0x423990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x423990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423994:
    // 0x423994: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_423998:
    // 0x423998: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x423998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42399c:
    // 0x42399c: 0x3c0f809  jalr        $fp
label_4239a0:
    if (ctx->pc == 0x4239A0u) {
        ctx->pc = 0x4239A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42399Cu;
        // 0x4239a0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4239A4u;
        goto label_4239a4;
    }
    ctx->pc = 0x42399Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x4239A4u);
        ctx->pc = 0x4239A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42399Cu;
        // 0x4239a0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42399Cu, 0x4239A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4239A4u;
label_4239a4:
    // 0x4239a4: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x4239a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_4239a8:
    // 0x4239a8: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x4239a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_4239ac:
    // 0x4239ac: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4239acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_4239b0:
    // 0x4239b0: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x4239b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_4239b4:
    // 0x4239b4: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x4239b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_4239b8:
    // 0x4239b8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4239b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4239bc:
    // 0x4239bc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4239bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4239c0:
    // 0x4239c0: 0x93a50002  lbu         $a1, 0x2($sp)
    ctx->pc = 0x4239c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_4239c4:
    // 0x4239c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4239c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4239c8:
    // 0x4239c8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x4239c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_4239cc:
    // 0x4239cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4239ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4239d0:
    // 0x4239d0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4239d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4239d4:
    // 0x4239d4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4239d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4239d8:
    // 0x4239d8: 0x1280004a  beqz        $s4, . + 4 + (0x4A << 2)
label_4239dc:
    if (ctx->pc == 0x4239DCu) {
        ctx->pc = 0x4239DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4239D8u;
        // 0x4239dc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4239E0u;
        goto label_4239e0;
    }
    ctx->pc = 0x4239D8u;
    {
        const bool branch_taken_0x4239d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4239DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4239D8u;
        // 0x4239dc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4239d8) {
            ctx->pc = 0x423B04u;
            goto label_423b04;
        }
    }
    ctx->pc = 0x4239E0u;
label_4239e0:
    // 0x4239e0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x4239e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4239e4:
    // 0x4239e4: 0x0  nop
    ctx->pc = 0x4239e4u;
    // NOP
label_4239e8:
    // 0x4239e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4239e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4239ec:
    // 0x4239ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4239ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4239f0:
    // 0x4239f0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4239f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4239f4:
    // 0x4239f4: 0x3c0f809  jalr        $fp
label_4239f8:
    if (ctx->pc == 0x4239F8u) {
        ctx->pc = 0x4239F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4239F4u;
        // 0x4239f8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4239FCu;
        goto label_4239fc;
    }
    ctx->pc = 0x4239F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x4239FCu);
        ctx->pc = 0x4239F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4239F4u;
        // 0x4239f8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4239F4u, 0x4239FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4239FCu;
label_4239fc:
    // 0x4239fc: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x4239fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_423a00:
    // 0x423a00: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x423a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_423a04:
    // 0x423a04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_423a08:
    // 0x423a08: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x423a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423a0c:
    // 0x423a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x423a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423a10:
    // 0x423a10: 0x93a60001  lbu         $a2, 0x1($sp)
    ctx->pc = 0x423a10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423a14:
    // 0x423a14: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x423a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_423a18:
    // 0x423a18: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x423a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_423a1c:
    // 0x423a1c: 0x93a70002  lbu         $a3, 0x2($sp)
    ctx->pc = 0x423a1cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423a20:
    // 0x423a20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x423a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_423a24:
    // 0x423a24: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x423a24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_423a28:
    // 0x423a28: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x423a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_423a2c:
    // 0x423a2c: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x423a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_423a30:
    // 0x423a30: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x423a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_423a34:
    // 0x423a34: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x423a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_423a38:
    // 0x423a38: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x423a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_423a3c:
    // 0x423a3c: 0x3c0f809  jalr        $fp
label_423a40:
    if (ctx->pc == 0x423A40u) {
        ctx->pc = 0x423A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423A3Cu;
        // 0x423a40: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423A44u;
        goto label_423a44;
    }
    ctx->pc = 0x423A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x423A44u);
        ctx->pc = 0x423A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423A3Cu;
        // 0x423a40: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423A3Cu, 0x423A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423A44u;
label_423a44:
    // 0x423a44: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x423a44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_423a48:
    // 0x423a48: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x423a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_423a4c:
    // 0x423a4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_423a50:
    // 0x423a50: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x423a50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423a54:
    // 0x423a54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x423a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423a58:
    // 0x423a58: 0x93a60001  lbu         $a2, 0x1($sp)
    ctx->pc = 0x423a58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423a5c:
    // 0x423a5c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x423a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_423a60:
    // 0x423a60: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x423a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_423a64:
    // 0x423a64: 0x93a70002  lbu         $a3, 0x2($sp)
    ctx->pc = 0x423a64u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423a68:
    // 0x423a68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x423a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_423a6c:
    // 0x423a6c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x423a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_423a70:
    // 0x423a70: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x423a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_423a74:
    // 0x423a74: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x423a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_423a78:
    // 0x423a78: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x423a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_423a7c:
    // 0x423a7c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x423a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_423a80:
    // 0x423a80: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x423a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_423a84:
    // 0x423a84: 0x3c0f809  jalr        $fp
label_423a88:
    if (ctx->pc == 0x423A88u) {
        ctx->pc = 0x423A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423A84u;
        // 0x423a88: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423A8Cu;
        goto label_423a8c;
    }
    ctx->pc = 0x423A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x423A8Cu);
        ctx->pc = 0x423A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423A84u;
        // 0x423a88: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423A84u, 0x423A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423A8Cu;
label_423a8c:
    // 0x423a8c: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x423a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_423a90:
    // 0x423a90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x423a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423a94:
    // 0x423a94: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x423a94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423a98:
    // 0x423a98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_423a9c:
    // 0x423a9c: 0x93a60001  lbu         $a2, 0x1($sp)
    ctx->pc = 0x423a9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423aa0:
    // 0x423aa0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x423aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_423aa4:
    // 0x423aa4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x423aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_423aa8:
    // 0x423aa8: 0x93a70002  lbu         $a3, 0x2($sp)
    ctx->pc = 0x423aa8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423aac:
    // 0x423aac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x423aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_423ab0:
    // 0x423ab0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x423ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_423ab4:
    // 0x423ab4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x423ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_423ab8:
    // 0x423ab8: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x423ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_423abc:
    // 0x423abc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x423abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_423ac0:
    // 0x423ac0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x423ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_423ac4:
    // 0x423ac4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x423ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_423ac8:
    // 0x423ac8: 0x3c0f809  jalr        $fp
label_423acc:
    if (ctx->pc == 0x423ACCu) {
        ctx->pc = 0x423ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423AC8u;
        // 0x423acc: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423AD0u;
        goto label_423ad0;
    }
    ctx->pc = 0x423AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x423AD0u);
        ctx->pc = 0x423ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423AC8u;
        // 0x423acc: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423AC8u, 0x423AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423AD0u;
label_423ad0:
    // 0x423ad0: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x423ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_423ad4:
    // 0x423ad4: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x423ad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423ad8:
    // 0x423ad8: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x423ad8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423adc:
    // 0x423adc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x423adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_423ae0:
    // 0x423ae0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x423ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_423ae4:
    // 0x423ae4: 0x93a50002  lbu         $a1, 0x2($sp)
    ctx->pc = 0x423ae4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423ae8:
    // 0x423ae8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x423ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_423aec:
    // 0x423aec: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x423aecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_423af0:
    // 0x423af0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x423af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_423af4:
    // 0x423af4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x423af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_423af8:
    // 0x423af8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x423af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_423afc:
    // 0x423afc: 0x1680ffba  bnez        $s4, . + 4 + (-0x46 << 2)
label_423b00:
    if (ctx->pc == 0x423B00u) {
        ctx->pc = 0x423B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423AFCu;
        // 0x423b00: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423B04u;
        goto label_423b04;
    }
    ctx->pc = 0x423AFCu;
    {
        const bool branch_taken_0x423afc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x423B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423AFCu;
        // 0x423b00: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423afc) {
            ctx->pc = 0x4239E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4239e8;
        }
    }
    ctx->pc = 0x423B04u;
label_423b04:
    // 0x423b04: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x423b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_423b08:
    // 0x423b08: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x423b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_423b0c:
    // 0x423b0c: 0x8fb10028  lw          $s1, 0x28($sp)
    ctx->pc = 0x423b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_423b10:
    // 0x423b10: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x423b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_423b14:
    // 0x423b14: 0x1440ff64  bnez        $v0, . + 4 + (-0x9C << 2)
label_423b18:
    if (ctx->pc == 0x423B18u) {
        ctx->pc = 0x423B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423B14u;
        // 0x423b18: 0x8fb30020  lw          $s3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423B1Cu;
        goto label_423b1c;
    }
    ctx->pc = 0x423B14u;
    {
        const bool branch_taken_0x423b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423B14u;
        // 0x423b18: 0x8fb30020  lw          $s3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423b14) {
            ctx->pc = 0x4238A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4238a8;
        }
    }
    ctx->pc = 0x423B1Cu;
label_423b1c:
    // 0x423b1c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x423b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_423b20:
    // 0x423b20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x423b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423b24:
    // 0x423b24: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x423b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_423b28:
    // 0x423b28: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x423b28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_423b2c:
    // 0x423b2c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x423b2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_423b30:
    // 0x423b30: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x423b30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_423b34:
    // 0x423b34: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x423b34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_423b38:
    // 0x423b38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x423b38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_423b3c:
    // 0x423b3c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x423b3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_423b40:
    // 0x423b40: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x423b40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_423b44:
    // 0x423b44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x423b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_423b48:
    // 0x423b48: 0x3e00008  jr          $ra
label_423b4c:
    if (ctx->pc == 0x423B4Cu) {
        ctx->pc = 0x423B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423B48u;
        // 0x423b4c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423B50u;
        goto label_423b50;
    }
    ctx->pc = 0x423B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423B48u;
        // 0x423b4c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423B50u;
label_423b50:
    // 0x423b50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x423b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_423b54:
    // 0x423b54: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x423b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_423b58:
    // 0x423b58: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x423b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_423b5c:
    // 0x423b5c: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x423b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
label_423b60:
    // 0x423b60: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x423b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_423b64:
    // 0x423b64: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x423b64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423b68:
    // 0x423b68: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x423b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_423b6c:
    // 0x423b6c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x423b6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_423b70:
    // 0x423b70: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x423b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_423b74:
    // 0x423b74: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x423b74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_423b78:
    // 0x423b78: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x423b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_423b7c:
    // 0x423b7c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x423b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_423b80:
    // 0x423b80: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x423b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_423b84:
    // 0x423b84: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x423b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_423b88:
    // 0x423b88: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x423b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_423b8c:
    // 0x423b8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x423b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_423b90:
    // 0x423b90: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x423b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_423b94:
    // 0x423b94: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x423b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_423b98:
    // 0x423b98: 0x8ea70010  lw          $a3, 0x10($s5)
    ctx->pc = 0x423b98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_423b9c:
    // 0x423b9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x423b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_423ba0:
    // 0x423ba0: 0x8ea80008  lw          $t0, 0x8($s5)
    ctx->pc = 0x423ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_423ba4:
    // 0x423ba4: 0x2c63007  srav        $a2, $a2, $s6
    ctx->pc = 0x423ba4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 22) & 0x1F));
label_423ba8:
    // 0x423ba8: 0x2c73804  sllv        $a3, $a3, $s6
    ctx->pc = 0x423ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 22) & 0x1F));
label_423bac:
    // 0x423bac: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x423bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
label_423bb0:
    // 0x423bb0: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x423bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
label_423bb4:
    // 0x423bb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x423bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_423bb8:
    // 0x423bb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x423bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_423bbc:
    // 0x423bbc: 0x2c84007  srav        $t0, $t0, $s6
    ctx->pc = 0x423bbcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 22) & 0x1F));
label_423bc0:
    // 0x423bc0: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x423bc0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_423bc4:
    // 0x423bc4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x423bc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423bc8:
    // 0x423bc8: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x423bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_423bcc:
    // 0x423bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x423bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423bd0:
    // 0x423bd0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x423bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_423bd4:
    // 0x423bd4: 0x2c2b804  sllv        $s7, $v0, $s6
    ctx->pc = 0x423bd4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 22) & 0x1F));
label_423bd8:
    // 0x423bd8: 0x19000096  blez        $t0, . + 4 + (0x96 << 2)
label_423bdc:
    if (ctx->pc == 0x423BDCu) {
        ctx->pc = 0x423BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423BD8u;
        // 0x423bdc: 0x8eb20014  lw          $s2, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423BE0u;
        goto label_423be0;
    }
    ctx->pc = 0x423BD8u;
    {
        const bool branch_taken_0x423bd8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x423BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423BD8u;
        // 0x423bdc: 0x8eb20014  lw          $s2, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423bd8) {
            ctx->pc = 0x423E34u;
            goto label_423e34;
        }
    }
    ctx->pc = 0x423BE0u;
label_423be0:
    // 0x423be0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x423be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_423be4:
    // 0x423be4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x423be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_423be8:
    // 0x423be8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x423be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_423bec:
    // 0x423bec: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x423becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_423bf0:
    // 0x423bf0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x423bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_423bf4:
    // 0x423bf4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x423bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_423bf8:
    // 0x423bf8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x423bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_423bfc:
    // 0x423bfc: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x423bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_423c00:
    // 0x423c00: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x423c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_423c04:
    // 0x423c04: 0x18a00085  blez        $a1, . + 4 + (0x85 << 2)
label_423c08:
    if (ctx->pc == 0x423C08u) {
        ctx->pc = 0x423C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C04u;
        // 0x423c08: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423C0Cu;
        goto label_423c0c;
    }
    ctx->pc = 0x423C04u;
    {
        const bool branch_taken_0x423c04 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x423C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C04u;
        // 0x423c08: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423c04) {
            ctx->pc = 0x423E1Cu;
            goto label_423e1c;
        }
    }
    ctx->pc = 0x423C0Cu;
label_423c0c:
    // 0x423c0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x423c0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_423c10:
    // 0x423c10: 0x131023  negu        $v0, $s3
    ctx->pc = 0x423c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_423c14:
    // 0x423c14: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x423c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_423c18:
    // 0x423c18: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_423c1c:
    if (ctx->pc == 0x423C1Cu) {
        ctx->pc = 0x423C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C18u;
        // 0x423c1c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423C20u;
        goto label_423c20;
    }
    ctx->pc = 0x423C18u;
    {
        const bool branch_taken_0x423c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x423C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C18u;
        // 0x423c1c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423c18) {
            ctx->pc = 0x423D10u;
            goto label_423d10;
        }
    }
    ctx->pc = 0x423C20u;
label_423c20:
    // 0x423c20: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x423c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_423c24:
    // 0x423c24: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_423c28:
    if (ctx->pc == 0x423C28u) {
        ctx->pc = 0x423C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C24u;
        // 0x423c28: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x423C2Cu;
        goto label_423c2c;
    }
    ctx->pc = 0x423C24u;
    {
        const bool branch_taken_0x423c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C24u;
        // 0x423c28: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x423c24) {
            ctx->pc = 0x423CC0u;
            goto label_423cc0;
        }
    }
    ctx->pc = 0x423C2Cu;
label_423c2c:
    // 0x423c2c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_423c30:
    if (ctx->pc == 0x423C30u) {
        ctx->pc = 0x423C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C2Cu;
        // 0x423c30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423C34u;
        goto label_423c34;
    }
    ctx->pc = 0x423C2Cu;
    {
        const bool branch_taken_0x423c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C2Cu;
        // 0x423c30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423c2c) {
            ctx->pc = 0x423C78u;
            goto label_423c78;
        }
    }
    ctx->pc = 0x423C34u;
label_423c34:
    // 0x423c34: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x423c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_423c38:
    // 0x423c38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x423c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_423c3c:
    // 0x423c3c: 0x3c0f809  jalr        $fp
label_423c40:
    if (ctx->pc == 0x423C40u) {
        ctx->pc = 0x423C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C3Cu;
        // 0x423c40: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423C44u;
        goto label_423c44;
    }
    ctx->pc = 0x423C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x423C44u);
        ctx->pc = 0x423C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C3Cu;
        // 0x423c40: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423C3Cu, 0x423C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423C44u;
label_423c44:
    // 0x423c44: 0x2578021  addu        $s0, $s2, $s7
    ctx->pc = 0x423c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_423c48:
    // 0x423c48: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x423c48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423c4c:
    // 0x423c4c: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x423c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_423c50:
    // 0x423c50: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x423c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423c54:
    // 0x423c54: 0x26910004  addiu       $s1, $s4, 0x4
    ctx->pc = 0x423c54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_423c58:
    // 0x423c58: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x423c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_423c5c:
    // 0x423c5c: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x423c5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423c60:
    // 0x423c60: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x423c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_423c64:
    // 0x423c64: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x423c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_423c68:
    // 0x423c68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x423c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_423c6c:
    // 0x423c6c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x423c6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_423c70:
    // 0x423c70: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x423c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_423c74:
    // 0x423c74: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x423c74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_423c78:
    // 0x423c78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x423c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423c7c:
    // 0x423c7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_423c80:
    // 0x423c80: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x423c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_423c84:
    // 0x423c84: 0x3c0f809  jalr        $fp
label_423c88:
    if (ctx->pc == 0x423C88u) {
        ctx->pc = 0x423C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C84u;
        // 0x423c88: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423C8Cu;
        goto label_423c8c;
    }
    ctx->pc = 0x423C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x423C8Cu);
        ctx->pc = 0x423C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423C84u;
        // 0x423c88: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423C84u, 0x423C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423C8Cu;
label_423c8c:
    // 0x423c8c: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x423c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_423c90:
    // 0x423c90: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x423c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423c94:
    // 0x423c94: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x423c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_423c98:
    // 0x423c98: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x423c98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423c9c:
    // 0x423c9c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x423c9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_423ca0:
    // 0x423ca0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x423ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_423ca4:
    // 0x423ca4: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x423ca4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423ca8:
    // 0x423ca8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x423ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_423cac:
    // 0x423cac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x423cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_423cb0:
    // 0x423cb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x423cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_423cb4:
    // 0x423cb4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x423cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_423cb8:
    // 0x423cb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x423cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_423cbc:
    // 0x423cbc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x423cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_423cc0:
    // 0x423cc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x423cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423cc4:
    // 0x423cc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_423cc8:
    // 0x423cc8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x423cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_423ccc:
    // 0x423ccc: 0x3c0f809  jalr        $fp
label_423cd0:
    if (ctx->pc == 0x423CD0u) {
        ctx->pc = 0x423CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423CCCu;
        // 0x423cd0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423CD4u;
        goto label_423cd4;
    }
    ctx->pc = 0x423CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x423CD4u);
        ctx->pc = 0x423CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423CCCu;
        // 0x423cd0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423CCCu, 0x423CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423CD4u;
label_423cd4:
    // 0x423cd4: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x423cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_423cd8:
    // 0x423cd8: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x423cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423cdc:
    // 0x423cdc: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x423cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_423ce0:
    // 0x423ce0: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x423ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423ce4:
    // 0x423ce4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x423ce4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_423ce8:
    // 0x423ce8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x423ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_423cec:
    // 0x423cec: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x423cecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423cf0:
    // 0x423cf0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x423cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_423cf4:
    // 0x423cf4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x423cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_423cf8:
    // 0x423cf8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x423cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_423cfc:
    // 0x423cfc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x423cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_423d00:
    // 0x423d00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x423d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_423d04:
    // 0x423d04: 0x12600045  beqz        $s3, . + 4 + (0x45 << 2)
label_423d08:
    if (ctx->pc == 0x423D08u) {
        ctx->pc = 0x423D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D04u;
        // 0x423d08: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423D0Cu;
        goto label_423d0c;
    }
    ctx->pc = 0x423D04u;
    {
        const bool branch_taken_0x423d04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x423D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D04u;
        // 0x423d08: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423d04) {
            ctx->pc = 0x423E1Cu;
            goto label_423e1c;
        }
    }
    ctx->pc = 0x423D0Cu;
label_423d0c:
    // 0x423d0c: 0x0  nop
    ctx->pc = 0x423d0cu;
    // NOP
label_423d10:
    // 0x423d10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_423d14:
    // 0x423d14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x423d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423d18:
    // 0x423d18: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x423d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_423d1c:
    // 0x423d1c: 0x3c0f809  jalr        $fp
label_423d20:
    if (ctx->pc == 0x423D20u) {
        ctx->pc = 0x423D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D1Cu;
        // 0x423d20: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423D24u;
        goto label_423d24;
    }
    ctx->pc = 0x423D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x423D24u);
        ctx->pc = 0x423D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D1Cu;
        // 0x423d20: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423D1Cu, 0x423D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423D24u;
label_423d24:
    // 0x423d24: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x423d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_423d28:
    // 0x423d28: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x423d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423d2c:
    // 0x423d2c: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x423d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_423d30:
    // 0x423d30: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x423d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423d34:
    // 0x423d34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_423d38:
    // 0x423d38: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x423d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_423d3c:
    // 0x423d3c: 0x93a70002  lbu         $a3, 0x2($sp)
    ctx->pc = 0x423d3cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423d40:
    // 0x423d40: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x423d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_423d44:
    // 0x423d44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x423d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_423d48:
    // 0x423d48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x423d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_423d4c:
    // 0x423d4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x423d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423d50:
    // 0x423d50: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x423d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_423d54:
    // 0x423d54: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x423d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_423d58:
    // 0x423d58: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x423d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_423d5c:
    // 0x423d5c: 0x3c0f809  jalr        $fp
label_423d60:
    if (ctx->pc == 0x423D60u) {
        ctx->pc = 0x423D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D5Cu;
        // 0x423d60: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423D64u;
        goto label_423d64;
    }
    ctx->pc = 0x423D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x423D64u);
        ctx->pc = 0x423D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D5Cu;
        // 0x423d60: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423D5Cu, 0x423D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423D64u;
label_423d64:
    // 0x423d64: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x423d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_423d68:
    // 0x423d68: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x423d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423d6c:
    // 0x423d6c: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x423d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_423d70:
    // 0x423d70: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x423d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423d74:
    // 0x423d74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_423d78:
    // 0x423d78: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x423d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_423d7c:
    // 0x423d7c: 0x93a70002  lbu         $a3, 0x2($sp)
    ctx->pc = 0x423d7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423d80:
    // 0x423d80: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x423d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_423d84:
    // 0x423d84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x423d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_423d88:
    // 0x423d88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x423d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_423d8c:
    // 0x423d8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x423d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423d90:
    // 0x423d90: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x423d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_423d94:
    // 0x423d94: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x423d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_423d98:
    // 0x423d98: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x423d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_423d9c:
    // 0x423d9c: 0x3c0f809  jalr        $fp
label_423da0:
    if (ctx->pc == 0x423DA0u) {
        ctx->pc = 0x423DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D9Cu;
        // 0x423da0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423DA4u;
        goto label_423da4;
    }
    ctx->pc = 0x423D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x423DA4u);
        ctx->pc = 0x423DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D9Cu;
        // 0x423da0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423D9Cu, 0x423DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423DA4u;
label_423da4:
    // 0x423da4: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x423da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_423da8:
    // 0x423da8: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x423da8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423dac:
    // 0x423dac: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x423dacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
label_423db0:
    // 0x423db0: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x423db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423db4:
    // 0x423db4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x423db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423db8:
    // 0x423db8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x423db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_423dbc:
    // 0x423dbc: 0x93a70002  lbu         $a3, 0x2($sp)
    ctx->pc = 0x423dbcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423dc0:
    // 0x423dc0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x423dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_423dc4:
    // 0x423dc4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x423dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_423dc8:
    // 0x423dc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x423dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_423dcc:
    // 0x423dcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_423dd0:
    // 0x423dd0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x423dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_423dd4:
    // 0x423dd4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x423dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_423dd8:
    // 0x423dd8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x423dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_423ddc:
    // 0x423ddc: 0x3c0f809  jalr        $fp
label_423de0:
    if (ctx->pc == 0x423DE0u) {
        ctx->pc = 0x423DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423DDCu;
        // 0x423de0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423DE4u;
        goto label_423de4;
    }
    ctx->pc = 0x423DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x423DE4u);
        ctx->pc = 0x423DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423DDCu;
        // 0x423de0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423DDCu, 0x423DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423DE4u;
label_423de4:
    // 0x423de4: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x423de4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_423de8:
    // 0x423de8: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x423de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423dec:
    // 0x423dec: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x423decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_423df0:
    // 0x423df0: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x423df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423df4:
    // 0x423df4: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x423df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_423df8:
    // 0x423df8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x423df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_423dfc:
    // 0x423dfc: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x423dfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423e00:
    // 0x423e00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x423e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_423e04:
    // 0x423e04: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x423e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_423e08:
    // 0x423e08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x423e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_423e0c:
    // 0x423e0c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x423e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_423e10:
    // 0x423e10: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x423e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_423e14:
    // 0x423e14: 0x1660ffbe  bnez        $s3, . + 4 + (-0x42 << 2)
label_423e18:
    if (ctx->pc == 0x423E18u) {
        ctx->pc = 0x423E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423E14u;
        // 0x423e18: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423E1Cu;
        goto label_423e1c;
    }
    ctx->pc = 0x423E14u;
    {
        const bool branch_taken_0x423e14 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x423E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423E14u;
        // 0x423e18: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423e14) {
            ctx->pc = 0x423D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423d10;
        }
    }
    ctx->pc = 0x423E1Cu;
label_423e1c:
    // 0x423e1c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x423e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_423e20:
    // 0x423e20: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x423e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_423e24:
    // 0x423e24: 0x8fb20028  lw          $s2, 0x28($sp)
    ctx->pc = 0x423e24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_423e28:
    // 0x423e28: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x423e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_423e2c:
    // 0x423e2c: 0x1440ff6c  bnez        $v0, . + 4 + (-0x94 << 2)
label_423e30:
    if (ctx->pc == 0x423E30u) {
        ctx->pc = 0x423E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423E2Cu;
        // 0x423e30: 0x8fb40020  lw          $s4, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423E34u;
        goto label_423e34;
    }
    ctx->pc = 0x423E2Cu;
    {
        const bool branch_taken_0x423e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x423E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423E2Cu;
        // 0x423e30: 0x8fb40020  lw          $s4, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423e2c) {
            ctx->pc = 0x423BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423be0;
        }
    }
    ctx->pc = 0x423E34u;
label_423e34:
    // 0x423e34: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x423e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_423e38:
    // 0x423e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x423e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423e3c:
    // 0x423e3c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x423e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_423e40:
    // 0x423e40: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x423e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_423e44:
    // 0x423e44: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x423e44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_423e48:
    // 0x423e48: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x423e48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_423e4c:
    // 0x423e4c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x423e4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_423e50:
    // 0x423e50: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x423e50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_423e54:
    // 0x423e54: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x423e54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_423e58:
    // 0x423e58: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x423e58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_423e5c:
    // 0x423e5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x423e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_423e60:
    // 0x423e60: 0x3e00008  jr          $ra
label_423e64:
    if (ctx->pc == 0x423E64u) {
        ctx->pc = 0x423E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423E60u;
        // 0x423e64: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423E68u;
        goto label_423e68;
    }
    ctx->pc = 0x423E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423E60u;
        // 0x423e64: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423E68u;
label_423e68:
    // 0x423e68: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x423e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_423e6c:
    // 0x423e6c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x423e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_423e70:
    // 0x423e70: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x423e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_423e74:
    // 0x423e74: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x423e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
label_423e78:
    // 0x423e78: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x423e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_423e7c:
    // 0x423e7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x423e7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423e80:
    // 0x423e80: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x423e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_423e84:
    // 0x423e84: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x423e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_423e88:
    // 0x423e88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x423e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_423e8c:
    // 0x423e8c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x423e8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_423e90:
    // 0x423e90: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x423e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_423e94:
    // 0x423e94: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x423e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_423e98:
    // 0x423e98: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x423e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_423e9c:
    // 0x423e9c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x423e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_423ea0:
    // 0x423ea0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x423ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_423ea4:
    // 0x423ea4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x423ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_423ea8:
    // 0x423ea8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x423ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_423eac:
    // 0x423eac: 0x8e870010  lw          $a3, 0x10($s4)
    ctx->pc = 0x423eacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_423eb0:
    // 0x423eb0: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x423eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_423eb4:
    // 0x423eb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x423eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_423eb8:
    // 0x423eb8: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x423eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_423ebc:
    // 0x423ebc: 0x2a73804  sllv        $a3, $a3, $s5
    ctx->pc = 0x423ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 21) & 0x1F));
label_423ec0:
    // 0x423ec0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x423ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_423ec4:
    // 0x423ec4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x423ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_423ec8:
    // 0x423ec8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x423ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_423ecc:
    // 0x423ecc: 0x2a84007  srav        $t0, $t0, $s5
    ctx->pc = 0x423eccu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 21) & 0x1F));
label_423ed0:
    // 0x423ed0: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x423ed0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_423ed4:
    // 0x423ed4: 0x2a6f007  srav        $fp, $a2, $s5
    ctx->pc = 0x423ed4u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 21) & 0x1F));
label_423ed8:
    // 0x423ed8: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x423ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_423edc:
    // 0x423edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x423edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_423ee0:
    // 0x423ee0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x423ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_423ee4:
    // 0x423ee4: 0x2a2b004  sllv        $s6, $v0, $s5
    ctx->pc = 0x423ee4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
label_423ee8:
    // 0x423ee8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x423ee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423eec:
    // 0x423eec: 0x19000059  blez        $t0, . + 4 + (0x59 << 2)
label_423ef0:
    if (ctx->pc == 0x423EF0u) {
        ctx->pc = 0x423EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423EECu;
        // 0x423ef0: 0x8e900014  lw          $s0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423EF4u;
        goto label_423ef4;
    }
    ctx->pc = 0x423EECu;
    {
        const bool branch_taken_0x423eec = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x423EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423EECu;
        // 0x423ef0: 0x8e900014  lw          $s0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423eec) {
            ctx->pc = 0x424054u;
            goto label_424054;
        }
    }
    ctx->pc = 0x423EF4u;
label_423ef4:
    // 0x423ef4: 0x0  nop
    ctx->pc = 0x423ef4u;
    // NOP
label_423ef8:
    // 0x423ef8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x423ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_423efc:
    // 0x423efc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x423efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_423f00:
    // 0x423f00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x423f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_423f04:
    // 0x423f04: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x423f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423f08:
    // 0x423f08: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x423f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_423f0c:
    // 0x423f0c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x423f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_423f10:
    // 0x423f10: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x423f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_423f14:
    // 0x423f14: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x423f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_423f18:
    // 0x423f18: 0x1bc00048  blez        $fp, . + 4 + (0x48 << 2)
label_423f1c:
    if (ctx->pc == 0x423F1Cu) {
        ctx->pc = 0x423F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423F18u;
        // 0x423f1c: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423F20u;
        goto label_423f20;
    }
    ctx->pc = 0x423F18u;
    {
        const bool branch_taken_0x423f18 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x423F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423F18u;
        // 0x423f1c: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423f18) {
            ctx->pc = 0x42403Cu;
            goto label_42403c;
        }
    }
    ctx->pc = 0x423F20u;
label_423f20:
    // 0x423f20: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x423f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_423f24:
    // 0x423f24: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x423f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_423f28:
    // 0x423f28: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_423f2c:
    if (ctx->pc == 0x423F2Cu) {
        ctx->pc = 0x423F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423F28u;
        // 0x423f2c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423F30u;
        goto label_423f30;
    }
    ctx->pc = 0x423F28u;
    {
        const bool branch_taken_0x423f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423F28u;
        // 0x423f2c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423f28) {
            ctx->pc = 0x423F8Cu;
            goto label_423f8c;
        }
    }
    ctx->pc = 0x423F30u;
label_423f30:
    // 0x423f30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_423f34:
    // 0x423f34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x423f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_423f38:
    // 0x423f38: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x423f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_423f3c:
    // 0x423f3c: 0x2e0f809  jalr        $s7
label_423f40:
    if (ctx->pc == 0x423F40u) {
        ctx->pc = 0x423F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423F3Cu;
        // 0x423f40: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423F44u;
        goto label_423f44;
    }
    ctx->pc = 0x423F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x423F44u);
        ctx->pc = 0x423F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423F3Cu;
        // 0x423f40: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423F3Cu, 0x423F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423F44u;
label_423f44:
    // 0x423f44: 0x2168821  addu        $s1, $s0, $s6
    ctx->pc = 0x423f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_423f48:
    // 0x423f48: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x423f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_423f4c:
    // 0x423f4c: 0x26660002  addiu       $a2, $s3, 0x2
    ctx->pc = 0x423f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_423f50:
    // 0x423f50: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x423f50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423f54:
    // 0x423f54: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x423f54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_423f58:
    // 0x423f58: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x423f58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423f5c:
    // 0x423f5c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x423f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_423f60:
    // 0x423f60: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x423f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_423f64:
    // 0x423f64: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x423f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423f68:
    // 0x423f68: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x423f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_423f6c:
    // 0x423f6c: 0x30840f00  andi        $a0, $a0, 0xF00
    ctx->pc = 0x423f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
label_423f70:
    // 0x423f70: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x423f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_423f74:
    // 0x423f74: 0x30a500f0  andi        $a1, $a1, 0xF0
    ctx->pc = 0x423f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
label_423f78:
    // 0x423f78: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x423f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_423f7c:
    // 0x423f7c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x423f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_423f80:
    // 0x423f80: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x423f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_423f84:
    // 0x423f84: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
label_423f88:
    if (ctx->pc == 0x423F88u) {
        ctx->pc = 0x423F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423F84u;
        // 0x423f88: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423F8Cu;
        goto label_423f8c;
    }
    ctx->pc = 0x423F84u;
    {
        const bool branch_taken_0x423f84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x423F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423F84u;
        // 0x423f88: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423f84) {
            ctx->pc = 0x42403Cu;
            goto label_42403c;
        }
    }
    ctx->pc = 0x423F8Cu;
label_423f8c:
    // 0x423f8c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x423f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_423f90:
    // 0x423f90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_423f94:
    // 0x423f94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x423f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_423f98:
    // 0x423f98: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x423f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_423f9c:
    // 0x423f9c: 0x2e0f809  jalr        $s7
label_423fa0:
    if (ctx->pc == 0x423FA0u) {
        ctx->pc = 0x423FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423F9Cu;
        // 0x423fa0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423FA4u;
        goto label_423fa4;
    }
    ctx->pc = 0x423F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x423FA4u);
        ctx->pc = 0x423FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423F9Cu;
        // 0x423fa0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423F9Cu, 0x423FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423FA4u;
label_423fa4:
    // 0x423fa4: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x423fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_423fa8:
    // 0x423fa8: 0x93a60003  lbu         $a2, 0x3($sp)
    ctx->pc = 0x423fa8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_423fac:
    // 0x423fac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x423facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_423fb0:
    // 0x423fb0: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x423fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_423fb4:
    // 0x423fb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x423fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_423fb8:
    // 0x423fb8: 0x93a70001  lbu         $a3, 0x1($sp)
    ctx->pc = 0x423fb8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_423fbc:
    // 0x423fbc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x423fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_423fc0:
    // 0x423fc0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x423fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_423fc4:
    // 0x423fc4: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x423fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_423fc8:
    // 0x423fc8: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x423fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_423fcc:
    // 0x423fcc: 0x30c6f000  andi        $a2, $a2, 0xF000
    ctx->pc = 0x423fccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
label_423fd0:
    // 0x423fd0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x423fd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_423fd4:
    // 0x423fd4: 0x30e700f0  andi        $a3, $a3, 0xF0
    ctx->pc = 0x423fd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)240);
label_423fd8:
    // 0x423fd8: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x423fd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_423fdc:
    // 0x423fdc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x423fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_423fe0:
    // 0x423fe0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x423fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_423fe4:
    // 0x423fe4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x423fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_423fe8:
    // 0x423fe8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x423fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_423fec:
    // 0x423fec: 0x2e0f809  jalr        $s7
label_423ff0:
    if (ctx->pc == 0x423FF0u) {
        ctx->pc = 0x423FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423FECu;
        // 0x423ff0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423FF4u;
        goto label_423ff4;
    }
    ctx->pc = 0x423FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x423FF4u);
        ctx->pc = 0x423FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423FECu;
        // 0x423ff0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423FECu, 0x423FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423FF4u;
label_423ff4:
    // 0x423ff4: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x423ff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_423ff8:
    // 0x423ff8: 0x93a40003  lbu         $a0, 0x3($sp)
    ctx->pc = 0x423ff8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_423ffc:
    // 0x423ffc: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x423ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_424000:
    // 0x424000: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x424000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_424004:
    // 0x424004: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x424004u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_424008:
    // 0x424008: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x424008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_42400c:
    // 0x42400c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x42400cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_424010:
    // 0x424010: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x424010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_424014:
    // 0x424014: 0x3084f000  andi        $a0, $a0, 0xF000
    ctx->pc = 0x424014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
label_424018:
    // 0x424018: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x424018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
label_42401c:
    // 0x42401c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x42401cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_424020:
    // 0x424020: 0x30a500f0  andi        $a1, $a1, 0xF0
    ctx->pc = 0x424020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
label_424024:
    // 0x424024: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x424024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_424028:
    // 0x424028: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x424028u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_42402c:
    // 0x42402c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x42402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_424030:
    // 0x424030: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x424030u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_424034:
    // 0x424034: 0x1640ffd6  bnez        $s2, . + 4 + (-0x2A << 2)
label_424038:
    if (ctx->pc == 0x424038u) {
        ctx->pc = 0x424038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424034u;
        // 0x424038: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42403Cu;
        goto label_42403c;
    }
    ctx->pc = 0x424034u;
    {
        const bool branch_taken_0x424034 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x424038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424034u;
        // 0x424038: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424034) {
            ctx->pc = 0x423F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423f90;
        }
    }
    ctx->pc = 0x42403Cu;
label_42403c:
    // 0x42403c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x42403cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_424040:
    // 0x424040: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x424040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_424044:
    // 0x424044: 0x8fb0001c  lw          $s0, 0x1C($sp)
    ctx->pc = 0x424044u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_424048:
    // 0x424048: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x424048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_42404c:
    // 0x42404c: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
label_424050:
    if (ctx->pc == 0x424050u) {
        ctx->pc = 0x424050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42404Cu;
        // 0x424050: 0x8fb30024  lw          $s3, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424054u;
        goto label_424054;
    }
    ctx->pc = 0x42404Cu;
    {
        const bool branch_taken_0x42404c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42404Cu;
        // 0x424050: 0x8fb30024  lw          $s3, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42404c) {
            ctx->pc = 0x423EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423ef8;
        }
    }
    ctx->pc = 0x424054u;
label_424054:
    // 0x424054: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x424054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_424058:
    // 0x424058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x424058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42405c:
    // 0x42405c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x42405cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_424060:
    // 0x424060: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x424060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_424064:
    // 0x424064: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x424064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_424068:
    // 0x424068: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x424068u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_42406c:
    // 0x42406c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x42406cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_424070:
    // 0x424070: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x424070u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_424074:
    // 0x424074: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x424074u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_424078:
    // 0x424078: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x424078u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42407c:
    // 0x42407c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x42407cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_424080:
    // 0x424080: 0x3e00008  jr          $ra
label_424084:
    if (ctx->pc == 0x424084u) {
        ctx->pc = 0x424084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424080u;
        // 0x424084: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424088u;
        goto label_424088;
    }
    ctx->pc = 0x424080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424080u;
        // 0x424084: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424088u;
label_424088:
    // 0x424088: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x424088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_42408c:
    // 0x42408c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x42408cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_424090:
    // 0x424090: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x424090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_424094:
    // 0x424094: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x424094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
label_424098:
    // 0x424098: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x424098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_42409c:
    // 0x42409c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x42409cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4240a0:
    // 0x4240a0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4240a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_4240a4:
    // 0x4240a4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4240a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4240a8:
    // 0x4240a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4240a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4240ac:
    // 0x4240ac: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x4240acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4240b0:
    // 0x4240b0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x4240b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_4240b4:
    // 0x4240b4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4240b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_4240b8:
    // 0x4240b8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4240b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_4240bc:
    // 0x4240bc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4240bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_4240c0:
    // 0x4240c0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x4240c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_4240c4:
    // 0x4240c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4240c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4240c8:
    // 0x4240c8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x4240c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_4240cc:
    // 0x4240cc: 0x8e870010  lw          $a3, 0x10($s4)
    ctx->pc = 0x4240ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_4240d0:
    // 0x4240d0: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x4240d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4240d4:
    // 0x4240d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4240d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4240d8:
    // 0x4240d8: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x4240d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4240dc:
    // 0x4240dc: 0x2a73804  sllv        $a3, $a3, $s5
    ctx->pc = 0x4240dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 21) & 0x1F));
label_4240e0:
    // 0x4240e0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x4240e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_4240e4:
    // 0x4240e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4240e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4240e8:
    // 0x4240e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4240e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4240ec:
    // 0x4240ec: 0x2a84007  srav        $t0, $t0, $s5
    ctx->pc = 0x4240ecu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 21) & 0x1F));
label_4240f0:
    // 0x4240f0: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x4240f0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4240f4:
    // 0x4240f4: 0x2a6f007  srav        $fp, $a2, $s5
    ctx->pc = 0x4240f4u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 21) & 0x1F));
label_4240f8:
    // 0x4240f8: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x4240f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_4240fc:
    // 0x4240fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4240fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424100:
    // 0x424100: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x424100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_424104:
    // 0x424104: 0x2a2b004  sllv        $s6, $v0, $s5
    ctx->pc = 0x424104u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
label_424108:
    // 0x424108: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x424108u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42410c:
    // 0x42410c: 0x1900005d  blez        $t0, . + 4 + (0x5D << 2)
label_424110:
    if (ctx->pc == 0x424110u) {
        ctx->pc = 0x424110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42410Cu;
        // 0x424110: 0x8e900014  lw          $s0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424114u;
        goto label_424114;
    }
    ctx->pc = 0x42410Cu;
    {
        const bool branch_taken_0x42410c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x424110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42410Cu;
        // 0x424110: 0x8e900014  lw          $s0, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42410c) {
            ctx->pc = 0x424284u;
            goto label_424284;
        }
    }
    ctx->pc = 0x424114u;
label_424114:
    // 0x424114: 0x0  nop
    ctx->pc = 0x424114u;
    // NOP
label_424118:
    // 0x424118: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x424118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_42411c:
    // 0x42411c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x42411cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_424120:
    // 0x424120: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x424120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_424124:
    // 0x424124: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x424124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_424128:
    // 0x424128: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x424128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_42412c:
    // 0x42412c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x42412cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_424130:
    // 0x424130: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x424130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_424134:
    // 0x424134: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x424134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_424138:
    // 0x424138: 0x1bc0004c  blez        $fp, . + 4 + (0x4C << 2)
label_42413c:
    if (ctx->pc == 0x42413Cu) {
        ctx->pc = 0x42413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424138u;
        // 0x42413c: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424140u;
        goto label_424140;
    }
    ctx->pc = 0x424138u;
    {
        const bool branch_taken_0x424138 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x42413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424138u;
        // 0x42413c: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424138) {
            ctx->pc = 0x42426Cu;
            goto label_42426c;
        }
    }
    ctx->pc = 0x424140u;
label_424140:
    // 0x424140: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x424140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_424144:
    // 0x424144: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x424144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_424148:
    // 0x424148: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_42414c:
    if (ctx->pc == 0x42414Cu) {
        ctx->pc = 0x42414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424148u;
        // 0x42414c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424150u;
        goto label_424150;
    }
    ctx->pc = 0x424148u;
    {
        const bool branch_taken_0x424148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424148u;
        // 0x42414c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424148) {
            ctx->pc = 0x4241B0u;
            goto label_4241b0;
        }
    }
    ctx->pc = 0x424150u;
label_424150:
    // 0x424150: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x424150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_424154:
    // 0x424154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x424154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_424158:
    // 0x424158: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x424158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42415c:
    // 0x42415c: 0x2e0f809  jalr        $s7
label_424160:
    if (ctx->pc == 0x424160u) {
        ctx->pc = 0x424160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42415Cu;
        // 0x424160: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424164u;
        goto label_424164;
    }
    ctx->pc = 0x42415Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x424164u);
        ctx->pc = 0x424160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42415Cu;
        // 0x424160: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42415Cu, 0x424164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x424164u;
label_424164:
    // 0x424164: 0x2168821  addu        $s1, $s0, $s6
    ctx->pc = 0x424164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_424168:
    // 0x424168: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x424168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_42416c:
    // 0x42416c: 0x26660002  addiu       $a2, $s3, 0x2
    ctx->pc = 0x42416cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_424170:
    // 0x424170: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x424170u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_424174:
    // 0x424174: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x424174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_424178:
    // 0x424178: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x424178u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_42417c:
    // 0x42417c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x42417cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_424180:
    // 0x424180: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x424180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_424184:
    // 0x424184: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x424184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_424188:
    // 0x424188: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x424188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_42418c:
    // 0x42418c: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x42418cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
label_424190:
    // 0x424190: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x424190u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_424194:
    // 0x424194: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x424194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_424198:
    // 0x424198: 0x30a503e0  andi        $a1, $a1, 0x3E0
    ctx->pc = 0x424198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
label_42419c:
    // 0x42419c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x42419cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_4241a0:
    // 0x4241a0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4241a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_4241a4:
    // 0x4241a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4241a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4241a8:
    // 0x4241a8: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
label_4241ac:
    if (ctx->pc == 0x4241ACu) {
        ctx->pc = 0x4241ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4241A8u;
        // 0x4241ac: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4241B0u;
        goto label_4241b0;
    }
    ctx->pc = 0x4241A8u;
    {
        const bool branch_taken_0x4241a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4241ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4241A8u;
        // 0x4241ac: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4241a8) {
            ctx->pc = 0x42426Cu;
            goto label_42426c;
        }
    }
    ctx->pc = 0x4241B0u;
label_4241b0:
    // 0x4241b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4241b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4241b4:
    // 0x4241b4: 0x0  nop
    ctx->pc = 0x4241b4u;
    // NOP
label_4241b8:
    // 0x4241b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4241b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4241bc:
    // 0x4241bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4241bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4241c0:
    // 0x4241c0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x4241c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4241c4:
    // 0x4241c4: 0x2e0f809  jalr        $s7
label_4241c8:
    if (ctx->pc == 0x4241C8u) {
        ctx->pc = 0x4241C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4241C4u;
        // 0x4241c8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4241CCu;
        goto label_4241cc;
    }
    ctx->pc = 0x4241C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4241CCu);
        ctx->pc = 0x4241C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4241C4u;
        // 0x4241c8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4241C4u, 0x4241CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4241CCu;
label_4241cc:
    // 0x4241cc: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x4241ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_4241d0:
    // 0x4241d0: 0x93a70003  lbu         $a3, 0x3($sp)
    ctx->pc = 0x4241d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_4241d4:
    // 0x4241d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4241d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4241d8:
    // 0x4241d8: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x4241d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_4241dc:
    // 0x4241dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4241dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4241e0:
    // 0x4241e0: 0x93a80001  lbu         $t0, 0x1($sp)
    ctx->pc = 0x4241e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_4241e4:
    // 0x4241e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x4241e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_4241e8:
    // 0x4241e8: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x4241e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_4241ec:
    // 0x4241ec: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x4241ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_4241f0:
    // 0x4241f0: 0x30637c00  andi        $v1, $v1, 0x7C00
    ctx->pc = 0x4241f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
label_4241f4:
    // 0x4241f4: 0x30e78000  andi        $a3, $a3, 0x8000
    ctx->pc = 0x4241f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
label_4241f8:
    // 0x4241f8: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4241f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4241fc:
    // 0x4241fc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x4241fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_424200:
    // 0x424200: 0x310803e0  andi        $t0, $t0, 0x3E0
    ctx->pc = 0x424200u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)992);
label_424204:
    // 0x424204: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x424204u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_424208:
    // 0x424208: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x424208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_42420c:
    // 0x42420c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x42420cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_424210:
    // 0x424210: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x424210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_424214:
    // 0x424214: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x424214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_424218:
    // 0x424218: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x424218u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_42421c:
    // 0x42421c: 0x2e0f809  jalr        $s7
label_424220:
    if (ctx->pc == 0x424220u) {
        ctx->pc = 0x424220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42421Cu;
        // 0x424220: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424224u;
        goto label_424224;
    }
    ctx->pc = 0x42421Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x424224u);
        ctx->pc = 0x424220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42421Cu;
        // 0x424220: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42421Cu, 0x424224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x424224u;
label_424224:
    // 0x424224: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x424224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_424228:
    // 0x424228: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x424228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_42422c:
    // 0x42422c: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x42422cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_424230:
    // 0x424230: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x424230u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_424234:
    // 0x424234: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x424234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_424238:
    // 0x424238: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x424238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_42423c:
    // 0x42423c: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x42423cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_424240:
    // 0x424240: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x424240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_424244:
    // 0x424244: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x424244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
label_424248:
    // 0x424248: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x424248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_42424c:
    // 0x42424c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42424cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_424250:
    // 0x424250: 0x30a503e0  andi        $a1, $a1, 0x3E0
    ctx->pc = 0x424250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
label_424254:
    // 0x424254: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x424254u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_424258:
    // 0x424258: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x424258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_42425c:
    // 0x42425c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42425cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_424260:
    // 0x424260: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x424260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_424264:
    // 0x424264: 0x1640ffd4  bnez        $s2, . + 4 + (-0x2C << 2)
label_424268:
    if (ctx->pc == 0x424268u) {
        ctx->pc = 0x424268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424264u;
        // 0x424268: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42426Cu;
        goto label_42426c;
    }
    ctx->pc = 0x424264u;
    {
        const bool branch_taken_0x424264 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x424268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424264u;
        // 0x424268: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424264) {
            ctx->pc = 0x4241B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4241b8;
        }
    }
    ctx->pc = 0x42426Cu;
label_42426c:
    // 0x42426c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x42426cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_424270:
    // 0x424270: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x424270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_424274:
    // 0x424274: 0x8fb0001c  lw          $s0, 0x1C($sp)
    ctx->pc = 0x424274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_424278:
    // 0x424278: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x424278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_42427c:
    // 0x42427c: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
label_424280:
    if (ctx->pc == 0x424280u) {
        ctx->pc = 0x424280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42427Cu;
        // 0x424280: 0x8fb30024  lw          $s3, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424284u;
        goto label_424284;
    }
    ctx->pc = 0x42427Cu;
    {
        const bool branch_taken_0x42427c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42427Cu;
        // 0x424280: 0x8fb30024  lw          $s3, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42427c) {
            ctx->pc = 0x424118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424118;
        }
    }
    ctx->pc = 0x424284u;
label_424284:
    // 0x424284: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x424284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_424288:
    // 0x424288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x424288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42428c:
    // 0x42428c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x42428cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_424290:
    // 0x424290: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x424290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_424294:
    // 0x424294: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x424294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_424298:
    // 0x424298: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x424298u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_42429c:
    // 0x42429c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x42429cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4242a0:
    // 0x4242a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4242a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4242a4:
    // 0x4242a4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x4242a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4242a8:
    // 0x4242a8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x4242a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4242ac:
    // 0x4242ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4242acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4242b0:
    // 0x4242b0: 0x3e00008  jr          $ra
label_4242b4:
    if (ctx->pc == 0x4242B4u) {
        ctx->pc = 0x4242B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4242B0u;
        // 0x4242b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4242B8u;
        goto label_4242b8;
    }
    ctx->pc = 0x4242B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4242B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4242B0u;
        // 0x4242b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4242B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4242B8u;
label_4242b8:
    // 0x4242b8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4242b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4242bc:
    // 0x4242bc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x4242bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_4242c0:
    // 0x4242c0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x4242c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_4242c4:
    // 0x4242c4: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x4242c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
label_4242c8:
    // 0x4242c8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4242c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_4242cc:
    // 0x4242cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4242ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4242d0:
    // 0x4242d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4242d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4242d4:
    // 0x4242d4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4242d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4242d8:
    // 0x4242d8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x4242d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_4242dc:
    // 0x4242dc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x4242dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4242e0:
    // 0x4242e0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4242e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_4242e4:
    // 0x4242e4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4242e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_4242e8:
    // 0x4242e8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4242e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_4242ec:
    // 0x4242ec: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4242ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_4242f0:
    // 0x4242f0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x4242f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_4242f4:
    // 0x4242f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4242f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4242f8:
    // 0x4242f8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x4242f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_4242fc:
    // 0x4242fc: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x4242fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_424300:
    // 0x424300: 0x8ea70010  lw          $a3, 0x10($s5)
    ctx->pc = 0x424300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_424304:
    // 0x424304: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x424304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_424308:
    // 0x424308: 0x8ea80008  lw          $t0, 0x8($s5)
    ctx->pc = 0x424308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_42430c:
    // 0x42430c: 0x2c63007  srav        $a2, $a2, $s6
    ctx->pc = 0x42430cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 22) & 0x1F));
label_424310:
    // 0x424310: 0x2c73804  sllv        $a3, $a3, $s6
    ctx->pc = 0x424310u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 22) & 0x1F));
label_424314:
    // 0x424314: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x424314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
label_424318:
    // 0x424318: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x424318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
label_42431c:
    // 0x42431c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42431cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_424320:
    // 0x424320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x424320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_424324:
    // 0x424324: 0x2c84007  srav        $t0, $t0, $s6
    ctx->pc = 0x424324u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 22) & 0x1F));
label_424328:
    // 0x424328: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x424328u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42432c:
    // 0x42432c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x42432cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424330:
    // 0x424330: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x424330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_424334:
    // 0x424334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x424334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424338:
    // 0x424338: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x424338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_42433c:
    // 0x42433c: 0x2c2b804  sllv        $s7, $v0, $s6
    ctx->pc = 0x42433cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 22) & 0x1F));
label_424340:
    // 0x424340: 0x1900009e  blez        $t0, . + 4 + (0x9E << 2)
label_424344:
    if (ctx->pc == 0x424344u) {
        ctx->pc = 0x424344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424340u;
        // 0x424344: 0x8eb10014  lw          $s1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424348u;
        goto label_424348;
    }
    ctx->pc = 0x424340u;
    {
        const bool branch_taken_0x424340 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x424344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424340u;
        // 0x424344: 0x8eb10014  lw          $s1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424340) {
            ctx->pc = 0x4245BCu;
            goto label_4245bc;
        }
    }
    ctx->pc = 0x424348u;
label_424348:
    // 0x424348: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x424348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_42434c:
    // 0x42434c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x42434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_424350:
    // 0x424350: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x424350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_424354:
    // 0x424354: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x424354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_424358:
    // 0x424358: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x424358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_42435c:
    // 0x42435c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x42435cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_424360:
    // 0x424360: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x424360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_424364:
    // 0x424364: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x424364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_424368:
    // 0x424368: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x424368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_42436c:
    // 0x42436c: 0x1840008d  blez        $v0, . + 4 + (0x8D << 2)
label_424370:
    if (ctx->pc == 0x424370u) {
        ctx->pc = 0x424370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42436Cu;
        // 0x424370: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424374u;
        goto label_424374;
    }
    ctx->pc = 0x42436Cu;
    {
        const bool branch_taken_0x42436c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x424370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42436Cu;
        // 0x424370: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42436c) {
            ctx->pc = 0x4245A4u;
            goto label_4245a4;
        }
    }
    ctx->pc = 0x424374u;
label_424374:
    // 0x424374: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x424374u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_424378:
    // 0x424378: 0x141023  negu        $v0, $s4
    ctx->pc = 0x424378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_42437c:
    // 0x42437c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x42437cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_424380:
    // 0x424380: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_424384:
    if (ctx->pc == 0x424384u) {
        ctx->pc = 0x424384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424380u;
        // 0x424384: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424388u;
        goto label_424388;
    }
    ctx->pc = 0x424380u;
    {
        const bool branch_taken_0x424380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x424384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424380u;
        // 0x424384: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424380) {
            ctx->pc = 0x424480u;
            goto label_424480;
        }
    }
    ctx->pc = 0x424388u;
label_424388:
    // 0x424388: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x424388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_42438c:
    // 0x42438c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_424390:
    if (ctx->pc == 0x424390u) {
        ctx->pc = 0x424390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42438Cu;
        // 0x424390: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x424394u;
        goto label_424394;
    }
    ctx->pc = 0x42438Cu;
    {
        const bool branch_taken_0x42438c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42438Cu;
        // 0x424390: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42438c) {
            ctx->pc = 0x424430u;
            goto label_424430;
        }
    }
    ctx->pc = 0x424394u;
label_424394:
    // 0x424394: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_424398:
    if (ctx->pc == 0x424398u) {
        ctx->pc = 0x424398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424394u;
        // 0x424398: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42439Cu;
        goto label_42439c;
    }
    ctx->pc = 0x424394u;
    {
        const bool branch_taken_0x424394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424394u;
        // 0x424398: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424394) {
            ctx->pc = 0x4243E4u;
            goto label_4243e4;
        }
    }
    ctx->pc = 0x42439Cu;
label_42439c:
    // 0x42439c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42439cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4243a0:
    // 0x4243a0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4243a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4243a4:
    // 0x4243a4: 0x3c0f809  jalr        $fp
label_4243a8:
    if (ctx->pc == 0x4243A8u) {
        ctx->pc = 0x4243A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4243A4u;
        // 0x4243a8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4243ACu;
        goto label_4243ac;
    }
    ctx->pc = 0x4243A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x4243ACu);
        ctx->pc = 0x4243A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4243A4u;
        // 0x4243a8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4243A4u, 0x4243ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4243ACu;
label_4243ac:
    // 0x4243ac: 0x2378021  addu        $s0, $s1, $s7
    ctx->pc = 0x4243acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
label_4243b0:
    // 0x4243b0: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x4243b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_4243b4:
    // 0x4243b4: 0x26720002  addiu       $s2, $s3, 0x2
    ctx->pc = 0x4243b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_4243b8:
    // 0x4243b8: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x4243b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_4243bc:
    // 0x4243bc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4243bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_4243c0:
    // 0x4243c0: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x4243c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_4243c4:
    // 0x4243c4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4243c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_4243c8:
    // 0x4243c8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x4243c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4243cc:
    // 0x4243cc: 0x3042f800  andi        $v0, $v0, 0xF800
    ctx->pc = 0x4243ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_4243d0:
    // 0x4243d0: 0x308407e0  andi        $a0, $a0, 0x7E0
    ctx->pc = 0x4243d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2016);
label_4243d4:
    // 0x4243d4: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x4243d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_4243d8:
    // 0x4243d8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4243d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4243dc:
    // 0x4243dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4243dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4243e0:
    // 0x4243e0: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x4243e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_4243e4:
    // 0x4243e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4243e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4243e8:
    // 0x4243e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4243e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4243ec:
    // 0x4243ec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4243ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4243f0:
    // 0x4243f0: 0x3c0f809  jalr        $fp
label_4243f4:
    if (ctx->pc == 0x4243F4u) {
        ctx->pc = 0x4243F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4243F0u;
        // 0x4243f4: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4243F8u;
        goto label_4243f8;
    }
    ctx->pc = 0x4243F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x4243F8u);
        ctx->pc = 0x4243F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4243F0u;
        // 0x4243f4: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4243F0u, 0x4243F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4243F8u;
label_4243f8:
    // 0x4243f8: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x4243f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_4243fc:
    // 0x4243fc: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x4243fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_424400:
    // 0x424400: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x424400u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_424404:
    // 0x424404: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x424404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_424408:
    // 0x424408: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x424408u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_42440c:
    // 0x42440c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x42440cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_424410:
    // 0x424410: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x424410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_424414:
    // 0x424414: 0x3042f800  andi        $v0, $v0, 0xF800
    ctx->pc = 0x424414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_424418:
    // 0x424418: 0x306307e0  andi        $v1, $v1, 0x7E0
    ctx->pc = 0x424418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_42441c:
    // 0x42441c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x42441cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_424420:
    // 0x424420: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x424420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_424424:
    // 0x424424: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x424424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_424428:
    // 0x424428: 0xa6440000  sh          $a0, 0x0($s2)
    ctx->pc = 0x424428u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
label_42442c:
    // 0x42442c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x42442cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_424430:
    // 0x424430: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x424430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_424434:
    // 0x424434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x424434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_424438:
    // 0x424438: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x424438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42443c:
    // 0x42443c: 0x3c0f809  jalr        $fp
label_424440:
    if (ctx->pc == 0x424440u) {
        ctx->pc = 0x424440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42443Cu;
        // 0x424440: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424444u;
        goto label_424444;
    }
    ctx->pc = 0x42443Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x424444u);
        ctx->pc = 0x424440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42443Cu;
        // 0x424440: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42443Cu, 0x424444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x424444u;
label_424444:
    // 0x424444: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x424444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_424448:
    // 0x424448: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x424448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_42444c:
    // 0x42444c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x42444cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_424450:
    // 0x424450: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x424450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_424454:
    // 0x424454: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x424454u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_424458:
    // 0x424458: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x424458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_42445c:
    // 0x42445c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x42445cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_424460:
    // 0x424460: 0x3042f800  andi        $v0, $v0, 0xF800
    ctx->pc = 0x424460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_424464:
    // 0x424464: 0x306307e0  andi        $v1, $v1, 0x7E0
    ctx->pc = 0x424464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_424468:
    // 0x424468: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x424468u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_42446c:
    // 0x42446c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42446cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_424470:
    // 0x424470: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x424470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_424474:
    // 0x424474: 0xa6440000  sh          $a0, 0x0($s2)
    ctx->pc = 0x424474u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
label_424478:
    // 0x424478: 0x1280004a  beqz        $s4, . + 4 + (0x4A << 2)
label_42447c:
    if (ctx->pc == 0x42447Cu) {
        ctx->pc = 0x42447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424478u;
        // 0x42447c: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424480u;
        goto label_424480;
    }
    ctx->pc = 0x424478u;
    {
        const bool branch_taken_0x424478 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x42447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424478u;
        // 0x42447c: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424478) {
            ctx->pc = 0x4245A4u;
            goto label_4245a4;
        }
    }
    ctx->pc = 0x424480u;
label_424480:
    // 0x424480: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x424480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_424484:
    // 0x424484: 0x0  nop
    ctx->pc = 0x424484u;
    // NOP
label_424488:
    // 0x424488: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x424488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_42448c:
    // 0x42448c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42448cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_424490:
    // 0x424490: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x424490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_424494:
    // 0x424494: 0x3c0f809  jalr        $fp
label_424498:
    if (ctx->pc == 0x424498u) {
        ctx->pc = 0x424498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424494u;
        // 0x424498: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42449Cu;
        goto label_42449c;
    }
    ctx->pc = 0x424494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x42449Cu);
        ctx->pc = 0x424498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424494u;
        // 0x424498: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424494u, 0x42449Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42449Cu;
label_42449c:
    // 0x42449c: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x42449cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_4244a0:
    // 0x4244a0: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x4244a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_4244a4:
    // 0x4244a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4244a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4244a8:
    // 0x4244a8: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x4244a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_4244ac:
    // 0x4244ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4244acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4244b0:
    // 0x4244b0: 0x93a80002  lbu         $t0, 0x2($sp)
    ctx->pc = 0x4244b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_4244b4:
    // 0x4244b4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4244b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_4244b8:
    // 0x4244b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4244b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4244bc:
    // 0x4244bc: 0x3063f800  andi        $v1, $v1, 0xF800
    ctx->pc = 0x4244bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
label_4244c0:
    // 0x4244c0: 0x304207e0  andi        $v0, $v0, 0x7E0
    ctx->pc = 0x4244c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2016);
label_4244c4:
    // 0x4244c4: 0x840c2  srl         $t0, $t0, 3
    ctx->pc = 0x4244c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
label_4244c8:
    // 0x4244c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4244c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4244cc:
    // 0x4244cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4244ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4244d0:
    // 0x4244d0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x4244d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_4244d4:
    // 0x4244d4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4244d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4244d8:
    // 0x4244d8: 0xa6280000  sh          $t0, 0x0($s1)
    ctx->pc = 0x4244d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 8));
label_4244dc:
    // 0x4244dc: 0x3c0f809  jalr        $fp
label_4244e0:
    if (ctx->pc == 0x4244E0u) {
        ctx->pc = 0x4244E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4244DCu;
        // 0x4244e0: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4244E4u;
        goto label_4244e4;
    }
    ctx->pc = 0x4244DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x4244E4u);
        ctx->pc = 0x4244E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4244DCu;
        // 0x4244e0: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4244DCu, 0x4244E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4244E4u;
label_4244e4:
    // 0x4244e4: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x4244e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_4244e8:
    // 0x4244e8: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x4244e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_4244ec:
    // 0x4244ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4244ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4244f0:
    // 0x4244f0: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x4244f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_4244f4:
    // 0x4244f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4244f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4244f8:
    // 0x4244f8: 0x93a80002  lbu         $t0, 0x2($sp)
    ctx->pc = 0x4244f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_4244fc:
    // 0x4244fc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4244fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_424500:
    // 0x424500: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x424500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_424504:
    // 0x424504: 0x3063f800  andi        $v1, $v1, 0xF800
    ctx->pc = 0x424504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
label_424508:
    // 0x424508: 0x304207e0  andi        $v0, $v0, 0x7E0
    ctx->pc = 0x424508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2016);
label_42450c:
    // 0x42450c: 0x840c2  srl         $t0, $t0, 3
    ctx->pc = 0x42450cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
label_424510:
    // 0x424510: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x424510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_424514:
    // 0x424514: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x424514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_424518:
    // 0x424518: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x424518u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_42451c:
    // 0x42451c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x42451cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_424520:
    // 0x424520: 0xa6280002  sh          $t0, 0x2($s1)
    ctx->pc = 0x424520u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 8));
label_424524:
    // 0x424524: 0x3c0f809  jalr        $fp
label_424528:
    if (ctx->pc == 0x424528u) {
        ctx->pc = 0x424528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424524u;
        // 0x424528: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42452Cu;
        goto label_42452c;
    }
    ctx->pc = 0x424524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x42452Cu);
        ctx->pc = 0x424528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424524u;
        // 0x424528: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424524u, 0x42452Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42452Cu;
label_42452c:
    // 0x42452c: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x42452cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_424530:
    // 0x424530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x424530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_424534:
    // 0x424534: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x424534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_424538:
    // 0x424538: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x424538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_42453c:
    // 0x42453c: 0x93a80002  lbu         $t0, 0x2($sp)
    ctx->pc = 0x42453cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_424540:
    // 0x424540: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x424540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_424544:
    // 0x424544: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x424544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_424548:
    // 0x424548: 0x3063f800  andi        $v1, $v1, 0xF800
    ctx->pc = 0x424548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
label_42454c:
    // 0x42454c: 0x304207e0  andi        $v0, $v0, 0x7E0
    ctx->pc = 0x42454cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2016);
label_424550:
    // 0x424550: 0x840c2  srl         $t0, $t0, 3
    ctx->pc = 0x424550u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
label_424554:
    // 0x424554: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x424554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_424558:
    // 0x424558: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x424558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42455c:
    // 0x42455c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x42455cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_424560:
    // 0x424560: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x424560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_424564:
    // 0x424564: 0xa6280004  sh          $t0, 0x4($s1)
    ctx->pc = 0x424564u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 8));
label_424568:
    // 0x424568: 0x3c0f809  jalr        $fp
label_42456c:
    if (ctx->pc == 0x42456Cu) {
        ctx->pc = 0x42456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424568u;
        // 0x42456c: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424570u;
        goto label_424570;
    }
    ctx->pc = 0x424568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x424570u);
        ctx->pc = 0x42456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424568u;
        // 0x42456c: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424568u, 0x424570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x424570u;
label_424570:
    // 0x424570: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x424570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_424574:
    // 0x424574: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x424574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_424578:
    // 0x424578: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x424578u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_42457c:
    // 0x42457c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x42457cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_424580:
    // 0x424580: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x424580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_424584:
    // 0x424584: 0x3042f800  andi        $v0, $v0, 0xF800
    ctx->pc = 0x424584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
label_424588:
    // 0x424588: 0x306307e0  andi        $v1, $v1, 0x7E0
    ctx->pc = 0x424588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2016);
label_42458c:
    // 0x42458c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x42458cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_424590:
    // 0x424590: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x424590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_424594:
    // 0x424594: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x424594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_424598:
    // 0x424598: 0xa6240006  sh          $a0, 0x6($s1)
    ctx->pc = 0x424598u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 4));
label_42459c:
    // 0x42459c: 0x1680ffba  bnez        $s4, . + 4 + (-0x46 << 2)
label_4245a0:
    if (ctx->pc == 0x4245A0u) {
        ctx->pc = 0x4245A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42459Cu;
        // 0x4245a0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4245A4u;
        goto label_4245a4;
    }
    ctx->pc = 0x42459Cu;
    {
        const bool branch_taken_0x42459c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4245A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42459Cu;
        // 0x4245a0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42459c) {
            ctx->pc = 0x424488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424488;
        }
    }
    ctx->pc = 0x4245A4u;
label_4245a4:
    // 0x4245a4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x4245a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4245a8:
    // 0x4245a8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x4245a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_4245ac:
    // 0x4245ac: 0x8fb10028  lw          $s1, 0x28($sp)
    ctx->pc = 0x4245acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_4245b0:
    // 0x4245b0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x4245b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4245b4:
    // 0x4245b4: 0x1440ff64  bnez        $v0, . + 4 + (-0x9C << 2)
label_4245b8:
    if (ctx->pc == 0x4245B8u) {
        ctx->pc = 0x4245B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4245B4u;
        // 0x4245b8: 0x8fb30020  lw          $s3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4245BCu;
        goto label_4245bc;
    }
    ctx->pc = 0x4245B4u;
    {
        const bool branch_taken_0x4245b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4245B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4245B4u;
        // 0x4245b8: 0x8fb30020  lw          $s3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4245b4) {
            ctx->pc = 0x424348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424348;
        }
    }
    ctx->pc = 0x4245BCu;
label_4245bc:
    // 0x4245bc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x4245bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4245c0:
    // 0x4245c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4245c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4245c4:
    // 0x4245c4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x4245c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4245c8:
    // 0x4245c8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x4245c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4245cc:
    // 0x4245cc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x4245ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4245d0:
    // 0x4245d0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x4245d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4245d4:
    // 0x4245d4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4245d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4245d8:
    // 0x4245d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4245d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4245dc:
    // 0x4245dc: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x4245dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4245e0:
    // 0x4245e0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x4245e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4245e4:
    // 0x4245e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4245e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4245e8:
    // 0x4245e8: 0x3e00008  jr          $ra
label_4245ec:
    if (ctx->pc == 0x4245ECu) {
        ctx->pc = 0x4245ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4245E8u;
        // 0x4245ec: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4245F0u;
        goto label_fallthrough_0x4245e8;
    }
    ctx->pc = 0x4245E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4245ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4245E8u;
        // 0x4245ec: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4245E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4245e8:
    ctx->pc = 0x4245F0u;
}
