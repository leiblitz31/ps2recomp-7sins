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

// Function: sub_001ADF80
// Address: 0x1adf80 - 0x1ae8a0
void sub_001ADF80_0x1adf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADF80_0x1adf80");
#endif

    switch (ctx->pc) {
        case 0x1adf80u: goto label_1adf80;
        case 0x1adf84u: goto label_1adf84;
        case 0x1adf88u: goto label_1adf88;
        case 0x1adf8cu: goto label_1adf8c;
        case 0x1adf90u: goto label_1adf90;
        case 0x1adf94u: goto label_1adf94;
        case 0x1adf98u: goto label_1adf98;
        case 0x1adf9cu: goto label_1adf9c;
        case 0x1adfa0u: goto label_1adfa0;
        case 0x1adfa4u: goto label_1adfa4;
        case 0x1adfa8u: goto label_1adfa8;
        case 0x1adfacu: goto label_1adfac;
        case 0x1adfb0u: goto label_1adfb0;
        case 0x1adfb4u: goto label_1adfb4;
        case 0x1adfb8u: goto label_1adfb8;
        case 0x1adfbcu: goto label_1adfbc;
        case 0x1adfc0u: goto label_1adfc0;
        case 0x1adfc4u: goto label_1adfc4;
        case 0x1adfc8u: goto label_1adfc8;
        case 0x1adfccu: goto label_1adfcc;
        case 0x1adfd0u: goto label_1adfd0;
        case 0x1adfd4u: goto label_1adfd4;
        case 0x1adfd8u: goto label_1adfd8;
        case 0x1adfdcu: goto label_1adfdc;
        case 0x1adfe0u: goto label_1adfe0;
        case 0x1adfe4u: goto label_1adfe4;
        case 0x1adfe8u: goto label_1adfe8;
        case 0x1adfecu: goto label_1adfec;
        case 0x1adff0u: goto label_1adff0;
        case 0x1adff4u: goto label_1adff4;
        case 0x1adff8u: goto label_1adff8;
        case 0x1adffcu: goto label_1adffc;
        case 0x1ae000u: goto label_1ae000;
        case 0x1ae004u: goto label_1ae004;
        case 0x1ae008u: goto label_1ae008;
        case 0x1ae00cu: goto label_1ae00c;
        case 0x1ae010u: goto label_1ae010;
        case 0x1ae014u: goto label_1ae014;
        case 0x1ae018u: goto label_1ae018;
        case 0x1ae01cu: goto label_1ae01c;
        case 0x1ae020u: goto label_1ae020;
        case 0x1ae024u: goto label_1ae024;
        case 0x1ae028u: goto label_1ae028;
        case 0x1ae02cu: goto label_1ae02c;
        case 0x1ae030u: goto label_1ae030;
        case 0x1ae034u: goto label_1ae034;
        case 0x1ae038u: goto label_1ae038;
        case 0x1ae03cu: goto label_1ae03c;
        case 0x1ae040u: goto label_1ae040;
        case 0x1ae044u: goto label_1ae044;
        case 0x1ae048u: goto label_1ae048;
        case 0x1ae04cu: goto label_1ae04c;
        case 0x1ae050u: goto label_1ae050;
        case 0x1ae054u: goto label_1ae054;
        case 0x1ae058u: goto label_1ae058;
        case 0x1ae05cu: goto label_1ae05c;
        case 0x1ae060u: goto label_1ae060;
        case 0x1ae064u: goto label_1ae064;
        case 0x1ae068u: goto label_1ae068;
        case 0x1ae06cu: goto label_1ae06c;
        case 0x1ae070u: goto label_1ae070;
        case 0x1ae074u: goto label_1ae074;
        case 0x1ae078u: goto label_1ae078;
        case 0x1ae07cu: goto label_1ae07c;
        case 0x1ae080u: goto label_1ae080;
        case 0x1ae084u: goto label_1ae084;
        case 0x1ae088u: goto label_1ae088;
        case 0x1ae08cu: goto label_1ae08c;
        case 0x1ae090u: goto label_1ae090;
        case 0x1ae094u: goto label_1ae094;
        case 0x1ae098u: goto label_1ae098;
        case 0x1ae09cu: goto label_1ae09c;
        case 0x1ae0a0u: goto label_1ae0a0;
        case 0x1ae0a4u: goto label_1ae0a4;
        case 0x1ae0a8u: goto label_1ae0a8;
        case 0x1ae0acu: goto label_1ae0ac;
        case 0x1ae0b0u: goto label_1ae0b0;
        case 0x1ae0b4u: goto label_1ae0b4;
        case 0x1ae0b8u: goto label_1ae0b8;
        case 0x1ae0bcu: goto label_1ae0bc;
        case 0x1ae0c0u: goto label_1ae0c0;
        case 0x1ae0c4u: goto label_1ae0c4;
        case 0x1ae0c8u: goto label_1ae0c8;
        case 0x1ae0ccu: goto label_1ae0cc;
        case 0x1ae0d0u: goto label_1ae0d0;
        case 0x1ae0d4u: goto label_1ae0d4;
        case 0x1ae0d8u: goto label_1ae0d8;
        case 0x1ae0dcu: goto label_1ae0dc;
        case 0x1ae0e0u: goto label_1ae0e0;
        case 0x1ae0e4u: goto label_1ae0e4;
        case 0x1ae0e8u: goto label_1ae0e8;
        case 0x1ae0ecu: goto label_1ae0ec;
        case 0x1ae0f0u: goto label_1ae0f0;
        case 0x1ae0f4u: goto label_1ae0f4;
        case 0x1ae0f8u: goto label_1ae0f8;
        case 0x1ae0fcu: goto label_1ae0fc;
        case 0x1ae100u: goto label_1ae100;
        case 0x1ae104u: goto label_1ae104;
        case 0x1ae108u: goto label_1ae108;
        case 0x1ae10cu: goto label_1ae10c;
        case 0x1ae110u: goto label_1ae110;
        case 0x1ae114u: goto label_1ae114;
        case 0x1ae118u: goto label_1ae118;
        case 0x1ae11cu: goto label_1ae11c;
        case 0x1ae120u: goto label_1ae120;
        case 0x1ae124u: goto label_1ae124;
        case 0x1ae128u: goto label_1ae128;
        case 0x1ae12cu: goto label_1ae12c;
        case 0x1ae130u: goto label_1ae130;
        case 0x1ae134u: goto label_1ae134;
        case 0x1ae138u: goto label_1ae138;
        case 0x1ae13cu: goto label_1ae13c;
        case 0x1ae140u: goto label_1ae140;
        case 0x1ae144u: goto label_1ae144;
        case 0x1ae148u: goto label_1ae148;
        case 0x1ae14cu: goto label_1ae14c;
        case 0x1ae150u: goto label_1ae150;
        case 0x1ae154u: goto label_1ae154;
        case 0x1ae158u: goto label_1ae158;
        case 0x1ae15cu: goto label_1ae15c;
        case 0x1ae160u: goto label_1ae160;
        case 0x1ae164u: goto label_1ae164;
        case 0x1ae168u: goto label_1ae168;
        case 0x1ae16cu: goto label_1ae16c;
        case 0x1ae170u: goto label_1ae170;
        case 0x1ae174u: goto label_1ae174;
        case 0x1ae178u: goto label_1ae178;
        case 0x1ae17cu: goto label_1ae17c;
        case 0x1ae180u: goto label_1ae180;
        case 0x1ae184u: goto label_1ae184;
        case 0x1ae188u: goto label_1ae188;
        case 0x1ae18cu: goto label_1ae18c;
        case 0x1ae190u: goto label_1ae190;
        case 0x1ae194u: goto label_1ae194;
        case 0x1ae198u: goto label_1ae198;
        case 0x1ae19cu: goto label_1ae19c;
        case 0x1ae1a0u: goto label_1ae1a0;
        case 0x1ae1a4u: goto label_1ae1a4;
        case 0x1ae1a8u: goto label_1ae1a8;
        case 0x1ae1acu: goto label_1ae1ac;
        case 0x1ae1b0u: goto label_1ae1b0;
        case 0x1ae1b4u: goto label_1ae1b4;
        case 0x1ae1b8u: goto label_1ae1b8;
        case 0x1ae1bcu: goto label_1ae1bc;
        case 0x1ae1c0u: goto label_1ae1c0;
        case 0x1ae1c4u: goto label_1ae1c4;
        case 0x1ae1c8u: goto label_1ae1c8;
        case 0x1ae1ccu: goto label_1ae1cc;
        case 0x1ae1d0u: goto label_1ae1d0;
        case 0x1ae1d4u: goto label_1ae1d4;
        case 0x1ae1d8u: goto label_1ae1d8;
        case 0x1ae1dcu: goto label_1ae1dc;
        case 0x1ae1e0u: goto label_1ae1e0;
        case 0x1ae1e4u: goto label_1ae1e4;
        case 0x1ae1e8u: goto label_1ae1e8;
        case 0x1ae1ecu: goto label_1ae1ec;
        case 0x1ae1f0u: goto label_1ae1f0;
        case 0x1ae1f4u: goto label_1ae1f4;
        case 0x1ae1f8u: goto label_1ae1f8;
        case 0x1ae1fcu: goto label_1ae1fc;
        case 0x1ae200u: goto label_1ae200;
        case 0x1ae204u: goto label_1ae204;
        case 0x1ae208u: goto label_1ae208;
        case 0x1ae20cu: goto label_1ae20c;
        case 0x1ae210u: goto label_1ae210;
        case 0x1ae214u: goto label_1ae214;
        case 0x1ae218u: goto label_1ae218;
        case 0x1ae21cu: goto label_1ae21c;
        case 0x1ae220u: goto label_1ae220;
        case 0x1ae224u: goto label_1ae224;
        case 0x1ae228u: goto label_1ae228;
        case 0x1ae22cu: goto label_1ae22c;
        case 0x1ae230u: goto label_1ae230;
        case 0x1ae234u: goto label_1ae234;
        case 0x1ae238u: goto label_1ae238;
        case 0x1ae23cu: goto label_1ae23c;
        case 0x1ae240u: goto label_1ae240;
        case 0x1ae244u: goto label_1ae244;
        case 0x1ae248u: goto label_1ae248;
        case 0x1ae24cu: goto label_1ae24c;
        case 0x1ae250u: goto label_1ae250;
        case 0x1ae254u: goto label_1ae254;
        case 0x1ae258u: goto label_1ae258;
        case 0x1ae25cu: goto label_1ae25c;
        case 0x1ae260u: goto label_1ae260;
        case 0x1ae264u: goto label_1ae264;
        case 0x1ae268u: goto label_1ae268;
        case 0x1ae26cu: goto label_1ae26c;
        case 0x1ae270u: goto label_1ae270;
        case 0x1ae274u: goto label_1ae274;
        case 0x1ae278u: goto label_1ae278;
        case 0x1ae27cu: goto label_1ae27c;
        case 0x1ae280u: goto label_1ae280;
        case 0x1ae284u: goto label_1ae284;
        case 0x1ae288u: goto label_1ae288;
        case 0x1ae28cu: goto label_1ae28c;
        case 0x1ae290u: goto label_1ae290;
        case 0x1ae294u: goto label_1ae294;
        case 0x1ae298u: goto label_1ae298;
        case 0x1ae29cu: goto label_1ae29c;
        case 0x1ae2a0u: goto label_1ae2a0;
        case 0x1ae2a4u: goto label_1ae2a4;
        case 0x1ae2a8u: goto label_1ae2a8;
        case 0x1ae2acu: goto label_1ae2ac;
        case 0x1ae2b0u: goto label_1ae2b0;
        case 0x1ae2b4u: goto label_1ae2b4;
        case 0x1ae2b8u: goto label_1ae2b8;
        case 0x1ae2bcu: goto label_1ae2bc;
        case 0x1ae2c0u: goto label_1ae2c0;
        case 0x1ae2c4u: goto label_1ae2c4;
        case 0x1ae2c8u: goto label_1ae2c8;
        case 0x1ae2ccu: goto label_1ae2cc;
        case 0x1ae2d0u: goto label_1ae2d0;
        case 0x1ae2d4u: goto label_1ae2d4;
        case 0x1ae2d8u: goto label_1ae2d8;
        case 0x1ae2dcu: goto label_1ae2dc;
        case 0x1ae2e0u: goto label_1ae2e0;
        case 0x1ae2e4u: goto label_1ae2e4;
        case 0x1ae2e8u: goto label_1ae2e8;
        case 0x1ae2ecu: goto label_1ae2ec;
        case 0x1ae2f0u: goto label_1ae2f0;
        case 0x1ae2f4u: goto label_1ae2f4;
        case 0x1ae2f8u: goto label_1ae2f8;
        case 0x1ae2fcu: goto label_1ae2fc;
        case 0x1ae300u: goto label_1ae300;
        case 0x1ae304u: goto label_1ae304;
        case 0x1ae308u: goto label_1ae308;
        case 0x1ae30cu: goto label_1ae30c;
        case 0x1ae310u: goto label_1ae310;
        case 0x1ae314u: goto label_1ae314;
        case 0x1ae318u: goto label_1ae318;
        case 0x1ae31cu: goto label_1ae31c;
        case 0x1ae320u: goto label_1ae320;
        case 0x1ae324u: goto label_1ae324;
        case 0x1ae328u: goto label_1ae328;
        case 0x1ae32cu: goto label_1ae32c;
        case 0x1ae330u: goto label_1ae330;
        case 0x1ae334u: goto label_1ae334;
        case 0x1ae338u: goto label_1ae338;
        case 0x1ae33cu: goto label_1ae33c;
        case 0x1ae340u: goto label_1ae340;
        case 0x1ae344u: goto label_1ae344;
        case 0x1ae348u: goto label_1ae348;
        case 0x1ae34cu: goto label_1ae34c;
        case 0x1ae350u: goto label_1ae350;
        case 0x1ae354u: goto label_1ae354;
        case 0x1ae358u: goto label_1ae358;
        case 0x1ae35cu: goto label_1ae35c;
        case 0x1ae360u: goto label_1ae360;
        case 0x1ae364u: goto label_1ae364;
        case 0x1ae368u: goto label_1ae368;
        case 0x1ae36cu: goto label_1ae36c;
        case 0x1ae370u: goto label_1ae370;
        case 0x1ae374u: goto label_1ae374;
        case 0x1ae378u: goto label_1ae378;
        case 0x1ae37cu: goto label_1ae37c;
        case 0x1ae380u: goto label_1ae380;
        case 0x1ae384u: goto label_1ae384;
        case 0x1ae388u: goto label_1ae388;
        case 0x1ae38cu: goto label_1ae38c;
        case 0x1ae390u: goto label_1ae390;
        case 0x1ae394u: goto label_1ae394;
        case 0x1ae398u: goto label_1ae398;
        case 0x1ae39cu: goto label_1ae39c;
        case 0x1ae3a0u: goto label_1ae3a0;
        case 0x1ae3a4u: goto label_1ae3a4;
        case 0x1ae3a8u: goto label_1ae3a8;
        case 0x1ae3acu: goto label_1ae3ac;
        case 0x1ae3b0u: goto label_1ae3b0;
        case 0x1ae3b4u: goto label_1ae3b4;
        case 0x1ae3b8u: goto label_1ae3b8;
        case 0x1ae3bcu: goto label_1ae3bc;
        case 0x1ae3c0u: goto label_1ae3c0;
        case 0x1ae3c4u: goto label_1ae3c4;
        case 0x1ae3c8u: goto label_1ae3c8;
        case 0x1ae3ccu: goto label_1ae3cc;
        case 0x1ae3d0u: goto label_1ae3d0;
        case 0x1ae3d4u: goto label_1ae3d4;
        case 0x1ae3d8u: goto label_1ae3d8;
        case 0x1ae3dcu: goto label_1ae3dc;
        case 0x1ae3e0u: goto label_1ae3e0;
        case 0x1ae3e4u: goto label_1ae3e4;
        case 0x1ae3e8u: goto label_1ae3e8;
        case 0x1ae3ecu: goto label_1ae3ec;
        case 0x1ae3f0u: goto label_1ae3f0;
        case 0x1ae3f4u: goto label_1ae3f4;
        case 0x1ae3f8u: goto label_1ae3f8;
        case 0x1ae3fcu: goto label_1ae3fc;
        case 0x1ae400u: goto label_1ae400;
        case 0x1ae404u: goto label_1ae404;
        case 0x1ae408u: goto label_1ae408;
        case 0x1ae40cu: goto label_1ae40c;
        case 0x1ae410u: goto label_1ae410;
        case 0x1ae414u: goto label_1ae414;
        case 0x1ae418u: goto label_1ae418;
        case 0x1ae41cu: goto label_1ae41c;
        case 0x1ae420u: goto label_1ae420;
        case 0x1ae424u: goto label_1ae424;
        case 0x1ae428u: goto label_1ae428;
        case 0x1ae42cu: goto label_1ae42c;
        case 0x1ae430u: goto label_1ae430;
        case 0x1ae434u: goto label_1ae434;
        case 0x1ae438u: goto label_1ae438;
        case 0x1ae43cu: goto label_1ae43c;
        case 0x1ae440u: goto label_1ae440;
        case 0x1ae444u: goto label_1ae444;
        case 0x1ae448u: goto label_1ae448;
        case 0x1ae44cu: goto label_1ae44c;
        case 0x1ae450u: goto label_1ae450;
        case 0x1ae454u: goto label_1ae454;
        case 0x1ae458u: goto label_1ae458;
        case 0x1ae45cu: goto label_1ae45c;
        case 0x1ae460u: goto label_1ae460;
        case 0x1ae464u: goto label_1ae464;
        case 0x1ae468u: goto label_1ae468;
        case 0x1ae46cu: goto label_1ae46c;
        case 0x1ae470u: goto label_1ae470;
        case 0x1ae474u: goto label_1ae474;
        case 0x1ae478u: goto label_1ae478;
        case 0x1ae47cu: goto label_1ae47c;
        case 0x1ae480u: goto label_1ae480;
        case 0x1ae484u: goto label_1ae484;
        case 0x1ae488u: goto label_1ae488;
        case 0x1ae48cu: goto label_1ae48c;
        case 0x1ae490u: goto label_1ae490;
        case 0x1ae494u: goto label_1ae494;
        case 0x1ae498u: goto label_1ae498;
        case 0x1ae49cu: goto label_1ae49c;
        case 0x1ae4a0u: goto label_1ae4a0;
        case 0x1ae4a4u: goto label_1ae4a4;
        case 0x1ae4a8u: goto label_1ae4a8;
        case 0x1ae4acu: goto label_1ae4ac;
        case 0x1ae4b0u: goto label_1ae4b0;
        case 0x1ae4b4u: goto label_1ae4b4;
        case 0x1ae4b8u: goto label_1ae4b8;
        case 0x1ae4bcu: goto label_1ae4bc;
        case 0x1ae4c0u: goto label_1ae4c0;
        case 0x1ae4c4u: goto label_1ae4c4;
        case 0x1ae4c8u: goto label_1ae4c8;
        case 0x1ae4ccu: goto label_1ae4cc;
        case 0x1ae4d0u: goto label_1ae4d0;
        case 0x1ae4d4u: goto label_1ae4d4;
        case 0x1ae4d8u: goto label_1ae4d8;
        case 0x1ae4dcu: goto label_1ae4dc;
        case 0x1ae4e0u: goto label_1ae4e0;
        case 0x1ae4e4u: goto label_1ae4e4;
        case 0x1ae4e8u: goto label_1ae4e8;
        case 0x1ae4ecu: goto label_1ae4ec;
        case 0x1ae4f0u: goto label_1ae4f0;
        case 0x1ae4f4u: goto label_1ae4f4;
        case 0x1ae4f8u: goto label_1ae4f8;
        case 0x1ae4fcu: goto label_1ae4fc;
        case 0x1ae500u: goto label_1ae500;
        case 0x1ae504u: goto label_1ae504;
        case 0x1ae508u: goto label_1ae508;
        case 0x1ae50cu: goto label_1ae50c;
        case 0x1ae510u: goto label_1ae510;
        case 0x1ae514u: goto label_1ae514;
        case 0x1ae518u: goto label_1ae518;
        case 0x1ae51cu: goto label_1ae51c;
        case 0x1ae520u: goto label_1ae520;
        case 0x1ae524u: goto label_1ae524;
        case 0x1ae528u: goto label_1ae528;
        case 0x1ae52cu: goto label_1ae52c;
        case 0x1ae530u: goto label_1ae530;
        case 0x1ae534u: goto label_1ae534;
        case 0x1ae538u: goto label_1ae538;
        case 0x1ae53cu: goto label_1ae53c;
        case 0x1ae540u: goto label_1ae540;
        case 0x1ae544u: goto label_1ae544;
        case 0x1ae548u: goto label_1ae548;
        case 0x1ae54cu: goto label_1ae54c;
        case 0x1ae550u: goto label_1ae550;
        case 0x1ae554u: goto label_1ae554;
        case 0x1ae558u: goto label_1ae558;
        case 0x1ae55cu: goto label_1ae55c;
        case 0x1ae560u: goto label_1ae560;
        case 0x1ae564u: goto label_1ae564;
        case 0x1ae568u: goto label_1ae568;
        case 0x1ae56cu: goto label_1ae56c;
        case 0x1ae570u: goto label_1ae570;
        case 0x1ae574u: goto label_1ae574;
        case 0x1ae578u: goto label_1ae578;
        case 0x1ae57cu: goto label_1ae57c;
        case 0x1ae580u: goto label_1ae580;
        case 0x1ae584u: goto label_1ae584;
        case 0x1ae588u: goto label_1ae588;
        case 0x1ae58cu: goto label_1ae58c;
        case 0x1ae590u: goto label_1ae590;
        case 0x1ae594u: goto label_1ae594;
        case 0x1ae598u: goto label_1ae598;
        case 0x1ae59cu: goto label_1ae59c;
        case 0x1ae5a0u: goto label_1ae5a0;
        case 0x1ae5a4u: goto label_1ae5a4;
        case 0x1ae5a8u: goto label_1ae5a8;
        case 0x1ae5acu: goto label_1ae5ac;
        case 0x1ae5b0u: goto label_1ae5b0;
        case 0x1ae5b4u: goto label_1ae5b4;
        case 0x1ae5b8u: goto label_1ae5b8;
        case 0x1ae5bcu: goto label_1ae5bc;
        case 0x1ae5c0u: goto label_1ae5c0;
        case 0x1ae5c4u: goto label_1ae5c4;
        case 0x1ae5c8u: goto label_1ae5c8;
        case 0x1ae5ccu: goto label_1ae5cc;
        case 0x1ae5d0u: goto label_1ae5d0;
        case 0x1ae5d4u: goto label_1ae5d4;
        case 0x1ae5d8u: goto label_1ae5d8;
        case 0x1ae5dcu: goto label_1ae5dc;
        case 0x1ae5e0u: goto label_1ae5e0;
        case 0x1ae5e4u: goto label_1ae5e4;
        case 0x1ae5e8u: goto label_1ae5e8;
        case 0x1ae5ecu: goto label_1ae5ec;
        case 0x1ae5f0u: goto label_1ae5f0;
        case 0x1ae5f4u: goto label_1ae5f4;
        case 0x1ae5f8u: goto label_1ae5f8;
        case 0x1ae5fcu: goto label_1ae5fc;
        case 0x1ae600u: goto label_1ae600;
        case 0x1ae604u: goto label_1ae604;
        case 0x1ae608u: goto label_1ae608;
        case 0x1ae60cu: goto label_1ae60c;
        case 0x1ae610u: goto label_1ae610;
        case 0x1ae614u: goto label_1ae614;
        case 0x1ae618u: goto label_1ae618;
        case 0x1ae61cu: goto label_1ae61c;
        case 0x1ae620u: goto label_1ae620;
        case 0x1ae624u: goto label_1ae624;
        case 0x1ae628u: goto label_1ae628;
        case 0x1ae62cu: goto label_1ae62c;
        case 0x1ae630u: goto label_1ae630;
        case 0x1ae634u: goto label_1ae634;
        case 0x1ae638u: goto label_1ae638;
        case 0x1ae63cu: goto label_1ae63c;
        case 0x1ae640u: goto label_1ae640;
        case 0x1ae644u: goto label_1ae644;
        case 0x1ae648u: goto label_1ae648;
        case 0x1ae64cu: goto label_1ae64c;
        case 0x1ae650u: goto label_1ae650;
        case 0x1ae654u: goto label_1ae654;
        case 0x1ae658u: goto label_1ae658;
        case 0x1ae65cu: goto label_1ae65c;
        case 0x1ae660u: goto label_1ae660;
        case 0x1ae664u: goto label_1ae664;
        case 0x1ae668u: goto label_1ae668;
        case 0x1ae66cu: goto label_1ae66c;
        case 0x1ae670u: goto label_1ae670;
        case 0x1ae674u: goto label_1ae674;
        case 0x1ae678u: goto label_1ae678;
        case 0x1ae67cu: goto label_1ae67c;
        case 0x1ae680u: goto label_1ae680;
        case 0x1ae684u: goto label_1ae684;
        case 0x1ae688u: goto label_1ae688;
        case 0x1ae68cu: goto label_1ae68c;
        case 0x1ae690u: goto label_1ae690;
        case 0x1ae694u: goto label_1ae694;
        case 0x1ae698u: goto label_1ae698;
        case 0x1ae69cu: goto label_1ae69c;
        case 0x1ae6a0u: goto label_1ae6a0;
        case 0x1ae6a4u: goto label_1ae6a4;
        case 0x1ae6a8u: goto label_1ae6a8;
        case 0x1ae6acu: goto label_1ae6ac;
        case 0x1ae6b0u: goto label_1ae6b0;
        case 0x1ae6b4u: goto label_1ae6b4;
        case 0x1ae6b8u: goto label_1ae6b8;
        case 0x1ae6bcu: goto label_1ae6bc;
        case 0x1ae6c0u: goto label_1ae6c0;
        case 0x1ae6c4u: goto label_1ae6c4;
        case 0x1ae6c8u: goto label_1ae6c8;
        case 0x1ae6ccu: goto label_1ae6cc;
        case 0x1ae6d0u: goto label_1ae6d0;
        case 0x1ae6d4u: goto label_1ae6d4;
        case 0x1ae6d8u: goto label_1ae6d8;
        case 0x1ae6dcu: goto label_1ae6dc;
        case 0x1ae6e0u: goto label_1ae6e0;
        case 0x1ae6e4u: goto label_1ae6e4;
        case 0x1ae6e8u: goto label_1ae6e8;
        case 0x1ae6ecu: goto label_1ae6ec;
        case 0x1ae6f0u: goto label_1ae6f0;
        case 0x1ae6f4u: goto label_1ae6f4;
        case 0x1ae6f8u: goto label_1ae6f8;
        case 0x1ae6fcu: goto label_1ae6fc;
        case 0x1ae700u: goto label_1ae700;
        case 0x1ae704u: goto label_1ae704;
        case 0x1ae708u: goto label_1ae708;
        case 0x1ae70cu: goto label_1ae70c;
        case 0x1ae710u: goto label_1ae710;
        case 0x1ae714u: goto label_1ae714;
        case 0x1ae718u: goto label_1ae718;
        case 0x1ae71cu: goto label_1ae71c;
        case 0x1ae720u: goto label_1ae720;
        case 0x1ae724u: goto label_1ae724;
        case 0x1ae728u: goto label_1ae728;
        case 0x1ae72cu: goto label_1ae72c;
        case 0x1ae730u: goto label_1ae730;
        case 0x1ae734u: goto label_1ae734;
        case 0x1ae738u: goto label_1ae738;
        case 0x1ae73cu: goto label_1ae73c;
        case 0x1ae740u: goto label_1ae740;
        case 0x1ae744u: goto label_1ae744;
        case 0x1ae748u: goto label_1ae748;
        case 0x1ae74cu: goto label_1ae74c;
        case 0x1ae750u: goto label_1ae750;
        case 0x1ae754u: goto label_1ae754;
        case 0x1ae758u: goto label_1ae758;
        case 0x1ae75cu: goto label_1ae75c;
        case 0x1ae760u: goto label_1ae760;
        case 0x1ae764u: goto label_1ae764;
        case 0x1ae768u: goto label_1ae768;
        case 0x1ae76cu: goto label_1ae76c;
        case 0x1ae770u: goto label_1ae770;
        case 0x1ae774u: goto label_1ae774;
        case 0x1ae778u: goto label_1ae778;
        case 0x1ae77cu: goto label_1ae77c;
        case 0x1ae780u: goto label_1ae780;
        case 0x1ae784u: goto label_1ae784;
        case 0x1ae788u: goto label_1ae788;
        case 0x1ae78cu: goto label_1ae78c;
        case 0x1ae790u: goto label_1ae790;
        case 0x1ae794u: goto label_1ae794;
        case 0x1ae798u: goto label_1ae798;
        case 0x1ae79cu: goto label_1ae79c;
        case 0x1ae7a0u: goto label_1ae7a0;
        case 0x1ae7a4u: goto label_1ae7a4;
        case 0x1ae7a8u: goto label_1ae7a8;
        case 0x1ae7acu: goto label_1ae7ac;
        case 0x1ae7b0u: goto label_1ae7b0;
        case 0x1ae7b4u: goto label_1ae7b4;
        case 0x1ae7b8u: goto label_1ae7b8;
        case 0x1ae7bcu: goto label_1ae7bc;
        case 0x1ae7c0u: goto label_1ae7c0;
        case 0x1ae7c4u: goto label_1ae7c4;
        case 0x1ae7c8u: goto label_1ae7c8;
        case 0x1ae7ccu: goto label_1ae7cc;
        case 0x1ae7d0u: goto label_1ae7d0;
        case 0x1ae7d4u: goto label_1ae7d4;
        case 0x1ae7d8u: goto label_1ae7d8;
        case 0x1ae7dcu: goto label_1ae7dc;
        case 0x1ae7e0u: goto label_1ae7e0;
        case 0x1ae7e4u: goto label_1ae7e4;
        case 0x1ae7e8u: goto label_1ae7e8;
        case 0x1ae7ecu: goto label_1ae7ec;
        case 0x1ae7f0u: goto label_1ae7f0;
        case 0x1ae7f4u: goto label_1ae7f4;
        case 0x1ae7f8u: goto label_1ae7f8;
        case 0x1ae7fcu: goto label_1ae7fc;
        case 0x1ae800u: goto label_1ae800;
        case 0x1ae804u: goto label_1ae804;
        case 0x1ae808u: goto label_1ae808;
        case 0x1ae80cu: goto label_1ae80c;
        case 0x1ae810u: goto label_1ae810;
        case 0x1ae814u: goto label_1ae814;
        case 0x1ae818u: goto label_1ae818;
        case 0x1ae81cu: goto label_1ae81c;
        case 0x1ae820u: goto label_1ae820;
        case 0x1ae824u: goto label_1ae824;
        case 0x1ae828u: goto label_1ae828;
        case 0x1ae82cu: goto label_1ae82c;
        case 0x1ae830u: goto label_1ae830;
        case 0x1ae834u: goto label_1ae834;
        case 0x1ae838u: goto label_1ae838;
        case 0x1ae83cu: goto label_1ae83c;
        case 0x1ae840u: goto label_1ae840;
        case 0x1ae844u: goto label_1ae844;
        case 0x1ae848u: goto label_1ae848;
        case 0x1ae84cu: goto label_1ae84c;
        case 0x1ae850u: goto label_1ae850;
        case 0x1ae854u: goto label_1ae854;
        case 0x1ae858u: goto label_1ae858;
        case 0x1ae85cu: goto label_1ae85c;
        case 0x1ae860u: goto label_1ae860;
        case 0x1ae864u: goto label_1ae864;
        case 0x1ae868u: goto label_1ae868;
        case 0x1ae86cu: goto label_1ae86c;
        case 0x1ae870u: goto label_1ae870;
        case 0x1ae874u: goto label_1ae874;
        case 0x1ae878u: goto label_1ae878;
        case 0x1ae87cu: goto label_1ae87c;
        case 0x1ae880u: goto label_1ae880;
        case 0x1ae884u: goto label_1ae884;
        case 0x1ae888u: goto label_1ae888;
        case 0x1ae88cu: goto label_1ae88c;
        case 0x1ae890u: goto label_1ae890;
        case 0x1ae894u: goto label_1ae894;
        case 0x1ae898u: goto label_1ae898;
        case 0x1ae89cu: goto label_1ae89c;
        default: break;
    }

    ctx->pc = 0x1adf80u;

label_1adf80:
    // 0x1adf80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1adf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1adf84:
    // 0x1adf84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1adf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1adf88:
    // 0x1adf88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1adf88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1adf8c:
    // 0x1adf8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1adf90:
    // 0x1adf90: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1adf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1adf94:
    // 0x1adf94: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1adf94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1adf98:
    // 0x1adf98: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1adf9c:
    if (ctx->pc == 0x1ADF9Cu) {
        ctx->pc = 0x1ADFA0u;
        goto label_1adfa0;
    }
    ctx->pc = 0x1ADF98u;
    {
        const bool branch_taken_0x1adf98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adf98) {
            ctx->pc = 0x1ADFBCu;
            goto label_1adfbc;
        }
    }
    ctx->pc = 0x1ADFA0u;
label_1adfa0:
    // 0x1adfa0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1adfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1adfa4:
    // 0x1adfa4: 0x24638780  addiu       $v1, $v1, -0x7880
    ctx->pc = 0x1adfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936448));
label_1adfa8:
    // 0x1adfa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1adfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1adfac:
    // 0x1adfac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1adfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1adfb0:
    // 0x1adfb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1adfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1adfb4:
    // 0x1adfb4: 0x400008  jr          $v0
label_1adfb8:
    if (ctx->pc == 0x1ADFB8u) {
        ctx->pc = 0x1ADFBCu;
        goto label_1adfbc;
    }
    ctx->pc = 0x1ADFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADFBCu: goto label_1adfbc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADFB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1ADFBCu;
label_1adfbc:
    // 0x1adfbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1adfc0:
    // 0x1adfc0: 0xc440015c  lwc1        $f0, 0x15C($v0)
    ctx->pc = 0x1adfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1adfc4:
    // 0x1adfc4: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1adfc4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_1adfc8:
    // 0x1adfc8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1adfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1adfcc:
    // 0x1adfcc: 0xc064d10  jal         func_193440
label_1adfd0:
    if (ctx->pc == 0x1ADFD0u) {
        ctx->pc = 0x1ADFD4u;
        goto label_1adfd4;
    }
    ctx->pc = 0x1ADFCCu;
    SET_GPR_U32(ctx, 31, 0x1ADFD4u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1ADFCCu, 0x1ADFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFD4u;
label_1adfd4:
    // 0x1adfd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1adfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1adfd8:
    // 0x1adfd8: 0x27859470  addiu       $a1, $gp, -0x6B90
    ctx->pc = 0x1adfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939760));
label_1adfdc:
    // 0x1adfdc: 0xc064d48  jal         func_193520
label_1adfe0:
    if (ctx->pc == 0x1ADFE0u) {
        ctx->pc = 0x1ADFE4u;
        goto label_1adfe4;
    }
    ctx->pc = 0x1ADFDCu;
    SET_GPR_U32(ctx, 31, 0x1ADFE4u);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x1ADFDCu, 0x1ADFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFE4u;
label_1adfe4:
    // 0x1adfe4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1adfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1adfe8:
    // 0x1adfe8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1adfe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1adfec:
    // 0x1adfec: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1adfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1adff0:
    // 0x1adff0: 0x27859478  addiu       $a1, $gp, -0x6B88
    ctx->pc = 0x1adff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939768));
label_1adff4:
    // 0x1adff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1adff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adff8:
    // 0x1adff8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1adff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1adffc:
    // 0x1adffc: 0xc08f558  jal         func_23D560
label_1ae000:
    if (ctx->pc == 0x1AE000u) {
        ctx->pc = 0x1AE004u;
        goto label_1ae004;
    }
    ctx->pc = 0x1ADFFCu;
    SET_GPR_U32(ctx, 31, 0x1AE004u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1ADFFCu, 0x1AE004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE004u;
label_1ae004:
    // 0x1ae004: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ae004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae008:
    // 0x1ae008: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x1ae008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1ae00c:
    // 0x1ae00c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_1ae010:
    if (ctx->pc == 0x1AE010u) {
        ctx->pc = 0x1AE014u;
        goto label_1ae014;
    }
    ctx->pc = 0x1AE00Cu;
    {
        const bool branch_taken_0x1ae00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae00c) {
            ctx->pc = 0x1AE03Cu;
            goto label_1ae03c;
        }
    }
    ctx->pc = 0x1AE014u;
label_1ae014:
    // 0x1ae014: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae018:
    // 0x1ae018: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ae018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae01c:
    // 0x1ae01c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1ae01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1ae020:
    // 0x1ae020: 0x27859468  addiu       $a1, $gp, -0x6B98
    ctx->pc = 0x1ae020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939752));
label_1ae024:
    // 0x1ae024: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae028:
    // 0x1ae028: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1ae028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae02c:
    // 0x1ae02c: 0xc08f558  jal         func_23D560
label_1ae030:
    if (ctx->pc == 0x1AE030u) {
        ctx->pc = 0x1AE034u;
        goto label_1ae034;
    }
    ctx->pc = 0x1AE02Cu;
    SET_GPR_U32(ctx, 31, 0x1AE034u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1AE02Cu, 0x1AE034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE034u;
label_1ae034:
    // 0x1ae034: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ae034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae038:
    // 0x1ae038: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1ae038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1ae03c:
    // 0x1ae03c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae040:
    // 0x1ae040: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ae040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ae044:
    // 0x1ae044: 0x3e00008  jr          $ra
label_1ae048:
    if (ctx->pc == 0x1AE048u) {
        ctx->pc = 0x1AE04Cu;
        goto label_1ae04c;
    }
    ctx->pc = 0x1AE044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE04Cu;
label_1ae04c:
    // 0x1ae04c: 0x0  nop
    ctx->pc = 0x1ae04cu;
    // NOP
label_1ae050:
    // 0x1ae050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ae050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ae054:
    // 0x1ae054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ae058:
    // 0x1ae058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ae058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1ae05c:
    // 0x1ae05c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ae05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1ae060:
    // 0x1ae060: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1ae060u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1ae064:
    // 0x1ae064: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1ae064u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1ae068:
    // 0x1ae068: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ae068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae06c:
    // 0x1ae06c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ae06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae070:
    // 0x1ae070: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1ae070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ae074:
    // 0x1ae074: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1ae074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ae078:
    // 0x1ae078: 0xc064e90  jal         func_193A40
label_1ae07c:
    if (ctx->pc == 0x1AE07Cu) {
        ctx->pc = 0x1AE080u;
        goto label_1ae080;
    }
    ctx->pc = 0x1AE078u;
    SET_GPR_U32(ctx, 31, 0x1AE080u);
    ctx->pc = 0x193A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A40u, 0x1AE078u, 0x1AE080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE080u;
label_1ae080:
    // 0x1ae080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae084:
    // 0x1ae084: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ae084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ae088:
    // 0x1ae088: 0x3e00008  jr          $ra
label_1ae08c:
    if (ctx->pc == 0x1AE08Cu) {
        ctx->pc = 0x1AE090u;
        goto label_1ae090;
    }
    ctx->pc = 0x1AE088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE090u;
label_1ae090:
    // 0x1ae090: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1ae090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1ae094:
    // 0x1ae094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ae098:
    // 0x1ae098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ae09c:
    // 0x1ae09c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ae0a0:
    // 0x1ae0a0: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x1ae0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_1ae0a4:
    // 0x1ae0a4: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x1ae0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_1ae0a8:
    // 0x1ae0a8: 0xe7ac00f0  swc1        $f12, 0xF0($sp)
    ctx->pc = 0x1ae0a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1ae0ac:
    // 0x1ae0ac: 0xe7ad0100  swc1        $f13, 0x100($sp)
    ctx->pc = 0x1ae0acu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1ae0b0:
    // 0x1ae0b0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1ae0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ae0b4:
    // 0x1ae0b4: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x1ae0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ae0b8:
    // 0x1ae0b8: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x1ae0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ae0bc:
    // 0x1ae0bc: 0xc7ad0100  lwc1        $f13, 0x100($sp)
    ctx->pc = 0x1ae0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ae0c0:
    // 0x1ae0c0: 0xc064f2c  jal         func_193CB0
label_1ae0c4:
    if (ctx->pc == 0x1AE0C4u) {
        ctx->pc = 0x1AE0C8u;
        goto label_1ae0c8;
    }
    ctx->pc = 0x1AE0C0u;
    SET_GPR_U32(ctx, 31, 0x1AE0C8u);
    ctx->pc = 0x193CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CB0u, 0x1AE0C0u, 0x1AE0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE0C8u;
label_1ae0c8:
    // 0x1ae0c8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1ae0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ae0cc:
    // 0x1ae0cc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ae0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1ae0d0:
    // 0x1ae0d0: 0x24a56c80  addiu       $a1, $a1, 0x6C80
    ctx->pc = 0x1ae0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27776));
label_1ae0d4:
    // 0x1ae0d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ae0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae0d8:
    // 0x1ae0d8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1ae0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1ae0dc:
    // 0x1ae0dc: 0x320f809  jalr        $t9
label_1ae0e0:
    if (ctx->pc == 0x1AE0E0u) {
        ctx->pc = 0x1AE0E4u;
        goto label_1ae0e4;
    }
    ctx->pc = 0x1AE0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE0E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE0DCu, 0x1AE0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE0E4u;
label_1ae0e4:
    // 0x1ae0e4: 0x144000b7  bnez        $v0, . + 4 + (0xB7 << 2)
label_1ae0e8:
    if (ctx->pc == 0x1AE0E8u) {
        ctx->pc = 0x1AE0ECu;
        goto label_1ae0ec;
    }
    ctx->pc = 0x1AE0E4u;
    {
        const bool branch_taken_0x1ae0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae0e4) {
            ctx->pc = 0x1AE3C4u;
            goto label_1ae3c4;
        }
    }
    ctx->pc = 0x1AE0ECu;
label_1ae0ec:
    // 0x1ae0ec: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1ae0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ae0f0:
    // 0x1ae0f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1ae0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ae0f4:
    // 0x1ae0f4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ae0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1ae0f8:
    // 0x1ae0f8: 0x24470061  addiu       $a3, $v0, 0x61
    ctx->pc = 0x1ae0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
label_1ae0fc:
    // 0x1ae0fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ae0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ae100:
    // 0x1ae100: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ae100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1ae104:
    // 0x1ae104: 0x24a56cb0  addiu       $a1, $a1, 0x6CB0
    ctx->pc = 0x1ae104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27824));
label_1ae108:
    // 0x1ae108: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x1ae108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1ae10c:
    // 0x1ae10c: 0xc0bc3e2  jal         func_2F0F88
label_1ae110:
    if (ctx->pc == 0x1AE110u) {
        ctx->pc = 0x1AE114u;
        goto label_1ae114;
    }
    ctx->pc = 0x1AE10Cu;
    SET_GPR_U32(ctx, 31, 0x1AE114u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1AE10Cu, 0x1AE114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE114u;
label_1ae114:
    // 0x1ae114: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1ae114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1ae118:
    // 0x1ae118: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ae118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ae11c:
    // 0x1ae11c: 0xc08e57c  jal         func_2395F0
label_1ae120:
    if (ctx->pc == 0x1AE120u) {
        ctx->pc = 0x1AE124u;
        goto label_1ae124;
    }
    ctx->pc = 0x1AE11Cu;
    SET_GPR_U32(ctx, 31, 0x1AE124u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1AE11Cu, 0x1AE124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE124u;
label_1ae124:
    // 0x1ae124: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ae124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ae128:
    // 0x1ae128: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae12c:
    // 0x1ae12c: 0xc0406d0  jal         func_101B40
label_1ae130:
    if (ctx->pc == 0x1AE130u) {
        ctx->pc = 0x1AE134u;
        goto label_1ae134;
    }
    ctx->pc = 0x1AE12Cu;
    SET_GPR_U32(ctx, 31, 0x1AE134u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1AE12Cu, 0x1AE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE134u;
label_1ae134:
    // 0x1ae134: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1ae134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1ae138:
    // 0x1ae138: 0x27859488  addiu       $a1, $gp, -0x6B78
    ctx->pc = 0x1ae138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939784));
label_1ae13c:
    // 0x1ae13c: 0xc040304  jal         func_100C10
label_1ae140:
    if (ctx->pc == 0x1AE140u) {
        ctx->pc = 0x1AE144u;
        goto label_1ae144;
    }
    ctx->pc = 0x1AE13Cu;
    SET_GPR_U32(ctx, 31, 0x1AE144u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1AE13Cu, 0x1AE144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE144u;
label_1ae144:
    // 0x1ae144: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ae144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ae148:
    // 0x1ae148: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x1ae148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1ae14c:
    // 0x1ae14c: 0xc119568  jal         func_4655A0
label_1ae150:
    if (ctx->pc == 0x1AE150u) {
        ctx->pc = 0x1AE154u;
        goto label_1ae154;
    }
    ctx->pc = 0x1AE14Cu;
    SET_GPR_U32(ctx, 31, 0x1AE154u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x1AE14Cu, 0x1AE154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE154u;
label_1ae154:
    // 0x1ae154: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1ae154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1ae158:
    // 0x1ae158: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae15c:
    // 0x1ae15c: 0xc0402d4  jal         func_100B50
label_1ae160:
    if (ctx->pc == 0x1AE160u) {
        ctx->pc = 0x1AE164u;
        goto label_1ae164;
    }
    ctx->pc = 0x1AE15Cu;
    SET_GPR_U32(ctx, 31, 0x1AE164u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1AE15Cu, 0x1AE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE164u;
label_1ae164:
    // 0x1ae164: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1ae164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1ae168:
    // 0x1ae168: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x1ae168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae16c:
    // 0x1ae16c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae16cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae170:
    // 0x1ae170: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1ae170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1ae174:
    // 0x1ae174: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1ae174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1ae178:
    // 0x1ae178: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ae178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ae17c:
    // 0x1ae17c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ae17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ae180:
    // 0x1ae180: 0xc08e63c  jal         func_2398F0
label_1ae184:
    if (ctx->pc == 0x1AE184u) {
        ctx->pc = 0x1AE188u;
        goto label_1ae188;
    }
    ctx->pc = 0x1AE180u;
    SET_GPR_U32(ctx, 31, 0x1AE188u);
    ctx->pc = 0x2398F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2398F0u, 0x1AE180u, 0x1AE188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE188u;
label_1ae188:
    // 0x1ae188: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1ae188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ae18c:
    // 0x1ae18c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ae18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1ae190:
    // 0x1ae190: 0xc064f24  jal         func_193C90
label_1ae194:
    if (ctx->pc == 0x1AE194u) {
        ctx->pc = 0x1AE198u;
        goto label_1ae198;
    }
    ctx->pc = 0x1AE190u;
    SET_GPR_U32(ctx, 31, 0x1AE198u);
    ctx->pc = 0x193C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C90u, 0x1AE190u, 0x1AE198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE198u;
label_1ae198:
    // 0x1ae198: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ae198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae19c:
    // 0x1ae19c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae19cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae1a0:
    // 0x1ae1a0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1ae1a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1ae1a4:
    // 0x1ae1a4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1ae1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ae1a8:
    // 0x1ae1a8: 0x27859490  addiu       $a1, $gp, -0x6B70
    ctx->pc = 0x1ae1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939792));
label_1ae1ac:
    // 0x1ae1ac: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1ae1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ae1b0:
    // 0x1ae1b0: 0xc055fb0  jal         func_157EC0
label_1ae1b4:
    if (ctx->pc == 0x1AE1B4u) {
        ctx->pc = 0x1AE1B8u;
        goto label_1ae1b8;
    }
    ctx->pc = 0x1AE1B0u;
    SET_GPR_U32(ctx, 31, 0x1AE1B8u);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x1AE1B0u, 0x1AE1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1B8u;
label_1ae1b8:
    // 0x1ae1b8: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1ae1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1ae1bc:
    // 0x1ae1bc: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x1ae1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae1c0:
    // 0x1ae1c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae1c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae1c4:
    // 0x1ae1c4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ae1c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1ae1c8:
    // 0x1ae1c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ae1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ae1cc:
    // 0x1ae1cc: 0x27859434  addiu       $a1, $gp, -0x6BCC
    ctx->pc = 0x1ae1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939700));
label_1ae1d0:
    // 0x1ae1d0: 0xc0bc3e2  jal         func_2F0F88
label_1ae1d4:
    if (ctx->pc == 0x1AE1D4u) {
        ctx->pc = 0x1AE1D8u;
        goto label_1ae1d8;
    }
    ctx->pc = 0x1AE1D0u;
    SET_GPR_U32(ctx, 31, 0x1AE1D8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1AE1D0u, 0x1AE1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1D8u;
label_1ae1d8:
    // 0x1ae1d8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1ae1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1ae1dc:
    // 0x1ae1dc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ae1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ae1e0:
    // 0x1ae1e0: 0xc040304  jal         func_100C10
label_1ae1e4:
    if (ctx->pc == 0x1AE1E4u) {
        ctx->pc = 0x1AE1E8u;
        goto label_1ae1e8;
    }
    ctx->pc = 0x1AE1E0u;
    SET_GPR_U32(ctx, 31, 0x1AE1E8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1AE1E0u, 0x1AE1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1E8u;
label_1ae1e8:
    // 0x1ae1e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ae1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ae1ec:
    // 0x1ae1ec: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x1ae1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1ae1f0:
    // 0x1ae1f0: 0xc119568  jal         func_4655A0
label_1ae1f4:
    if (ctx->pc == 0x1AE1F4u) {
        ctx->pc = 0x1AE1F8u;
        goto label_1ae1f8;
    }
    ctx->pc = 0x1AE1F0u;
    SET_GPR_U32(ctx, 31, 0x1AE1F8u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x1AE1F0u, 0x1AE1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1F8u;
label_1ae1f8:
    // 0x1ae1f8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1ae1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1ae1fc:
    // 0x1ae1fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae200:
    // 0x1ae200: 0xc0402d4  jal         func_100B50
label_1ae204:
    if (ctx->pc == 0x1AE204u) {
        ctx->pc = 0x1AE208u;
        goto label_1ae208;
    }
    ctx->pc = 0x1AE200u;
    SET_GPR_U32(ctx, 31, 0x1AE208u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1AE200u, 0x1AE208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE208u;
label_1ae208:
    // 0x1ae208: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1ae208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ae20c:
    // 0x1ae20c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x1ae20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ae210:
    // 0x1ae210: 0x27869490  addiu       $a2, $gp, -0x6B70
    ctx->pc = 0x1ae210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939792));
label_1ae214:
    // 0x1ae214: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1ae214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ae218:
    // 0x1ae218: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x1ae218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ae21c:
    // 0x1ae21c: 0xc065114  jal         func_194450
label_1ae220:
    if (ctx->pc == 0x1AE220u) {
        ctx->pc = 0x1AE224u;
        goto label_1ae224;
    }
    ctx->pc = 0x1AE21Cu;
    SET_GPR_U32(ctx, 31, 0x1AE224u);
    ctx->pc = 0x194450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194450u, 0x1AE21Cu, 0x1AE224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE224u;
label_1ae224:
    // 0x1ae224: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ae224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae228:
    // 0x1ae228: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ae228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ae22c:
    // 0x1ae22c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ae22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1ae230:
    // 0x1ae230: 0x24a56cc8  addiu       $a1, $a1, 0x6CC8
    ctx->pc = 0x1ae230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27848));
label_1ae234:
    // 0x1ae234: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ae234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ae238:
    // 0x1ae238: 0xc0bc3e2  jal         func_2F0F88
label_1ae23c:
    if (ctx->pc == 0x1AE23Cu) {
        ctx->pc = 0x1AE240u;
        goto label_1ae240;
    }
    ctx->pc = 0x1AE238u;
    SET_GPR_U32(ctx, 31, 0x1AE240u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1AE238u, 0x1AE240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE240u;
label_1ae240:
    // 0x1ae240: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1ae240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ae244:
    // 0x1ae244: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ae244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ae248:
    // 0x1ae248: 0xc05621c  jal         func_158870
label_1ae24c:
    if (ctx->pc == 0x1AE24Cu) {
        ctx->pc = 0x1AE250u;
        goto label_1ae250;
    }
    ctx->pc = 0x1AE248u;
    SET_GPR_U32(ctx, 31, 0x1AE250u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1AE248u, 0x1AE250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE250u;
label_1ae250:
    // 0x1ae250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae254:
    // 0x1ae254: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
label_1ae258:
    if (ctx->pc == 0x1AE258u) {
        ctx->pc = 0x1AE25Cu;
        goto label_1ae25c;
    }
    ctx->pc = 0x1AE254u;
    {
        const bool branch_taken_0x1ae254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae254) {
            ctx->pc = 0x1AE394u;
            goto label_1ae394;
        }
    }
    ctx->pc = 0x1AE25Cu;
label_1ae25c:
    // 0x1ae25c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ae25cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae260:
    // 0x1ae260: 0x0  nop
    ctx->pc = 0x1ae260u;
    // NOP
label_1ae264:
    // 0x1ae264: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1ae264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1ae268:
    // 0x1ae268: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1ae268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ae26c:
    // 0x1ae26c: 0xc0552dc  jal         func_154B70
label_1ae270:
    if (ctx->pc == 0x1AE270u) {
        ctx->pc = 0x1AE274u;
        goto label_1ae274;
    }
    ctx->pc = 0x1AE26Cu;
    SET_GPR_U32(ctx, 31, 0x1AE274u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1AE26Cu, 0x1AE274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE274u;
label_1ae274:
    // 0x1ae274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ae274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae278:
    // 0x1ae278: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ae278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ae27c:
    // 0x1ae27c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae280:
    // 0x1ae280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae284:
    // 0x1ae284: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ae284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae288:
    // 0x1ae288: 0x27a700cc  addiu       $a3, $sp, 0xCC
    ctx->pc = 0x1ae288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_1ae28c:
    // 0x1ae28c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ae28cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae290:
    // 0x1ae290: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ae290u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae294:
    // 0x1ae294: 0xc08b9fc  jal         func_22E7F0
label_1ae298:
    if (ctx->pc == 0x1AE298u) {
        ctx->pc = 0x1AE29Cu;
        goto label_1ae29c;
    }
    ctx->pc = 0x1AE294u;
    SET_GPR_U32(ctx, 31, 0x1AE29Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1AE294u, 0x1AE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE29Cu;
label_1ae29c:
    // 0x1ae29c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae2a0:
    // 0x1ae2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae2a4:
    // 0x1ae2a4: 0x0  nop
    ctx->pc = 0x1ae2a4u;
    // NOP
label_1ae2a8:
    // 0x1ae2a8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1ae2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1ae2ac:
    // 0x1ae2ac: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1ae2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ae2b0:
    // 0x1ae2b0: 0xc0552dc  jal         func_154B70
label_1ae2b4:
    if (ctx->pc == 0x1AE2B4u) {
        ctx->pc = 0x1AE2B8u;
        goto label_1ae2b8;
    }
    ctx->pc = 0x1AE2B0u;
    SET_GPR_U32(ctx, 31, 0x1AE2B8u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1AE2B0u, 0x1AE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE2B8u;
label_1ae2b8:
    // 0x1ae2b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae2bc:
    // 0x1ae2bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae2c0:
    // 0x1ae2c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ae2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae2c4:
    // 0x1ae2c4: 0x27a700cc  addiu       $a3, $sp, 0xCC
    ctx->pc = 0x1ae2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_1ae2c8:
    // 0x1ae2c8: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x1ae2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ae2cc:
    // 0x1ae2cc: 0xc7ad0100  lwc1        $f13, 0x100($sp)
    ctx->pc = 0x1ae2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ae2d0:
    // 0x1ae2d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ae2d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae2d4:
    // 0x1ae2d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ae2d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae2d8:
    // 0x1ae2d8: 0xc08b9fc  jal         func_22E7F0
label_1ae2dc:
    if (ctx->pc == 0x1AE2DCu) {
        ctx->pc = 0x1AE2E0u;
        goto label_1ae2e0;
    }
    ctx->pc = 0x1AE2D8u;
    SET_GPR_U32(ctx, 31, 0x1AE2E0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1AE2D8u, 0x1AE2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE2E0u;
label_1ae2e0:
    // 0x1ae2e0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1ae2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1ae2e4:
    // 0x1ae2e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae2e8:
    // 0x1ae2e8: 0x0  nop
    ctx->pc = 0x1ae2e8u;
    // NOP
label_1ae2ec:
    // 0x1ae2ec: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1ae2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1ae2f0:
    // 0x1ae2f0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1ae2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1ae2f4:
    // 0x1ae2f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae2f8:
    // 0x1ae2f8: 0x0  nop
    ctx->pc = 0x1ae2f8u;
    // NOP
label_1ae2fc:
    // 0x1ae2fc: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1ae2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1ae300:
    // 0x1ae300: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1ae300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ae304:
    // 0x1ae304: 0xc0552dc  jal         func_154B70
label_1ae308:
    if (ctx->pc == 0x1AE308u) {
        ctx->pc = 0x1AE30Cu;
        goto label_1ae30c;
    }
    ctx->pc = 0x1AE304u;
    SET_GPR_U32(ctx, 31, 0x1AE30Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1AE304u, 0x1AE30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE30Cu;
label_1ae30c:
    // 0x1ae30c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ae30cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae310:
    // 0x1ae310: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ae310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ae314:
    // 0x1ae314: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae318:
    // 0x1ae318: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae31c:
    // 0x1ae31c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae320:
    // 0x1ae320: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x1ae320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1ae324:
    // 0x1ae324: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ae324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae328:
    // 0x1ae328: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ae328u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae32c:
    // 0x1ae32c: 0xc08b9fc  jal         func_22E7F0
label_1ae330:
    if (ctx->pc == 0x1AE330u) {
        ctx->pc = 0x1AE334u;
        goto label_1ae334;
    }
    ctx->pc = 0x1AE32Cu;
    SET_GPR_U32(ctx, 31, 0x1AE334u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1AE32Cu, 0x1AE334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE334u;
label_1ae334:
    // 0x1ae334: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae338:
    // 0x1ae338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae33c:
    // 0x1ae33c: 0x0  nop
    ctx->pc = 0x1ae33cu;
    // NOP
label_1ae340:
    // 0x1ae340: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1ae340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1ae344:
    // 0x1ae344: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae348:
    // 0x1ae348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae34c:
    // 0x1ae34c: 0x0  nop
    ctx->pc = 0x1ae34cu;
    // NOP
label_1ae350:
    // 0x1ae350: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1ae350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1ae354:
    // 0x1ae354: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1ae354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ae358:
    // 0x1ae358: 0xc0552dc  jal         func_154B70
label_1ae35c:
    if (ctx->pc == 0x1AE35Cu) {
        ctx->pc = 0x1AE360u;
        goto label_1ae360;
    }
    ctx->pc = 0x1AE358u;
    SET_GPR_U32(ctx, 31, 0x1AE360u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1AE358u, 0x1AE360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE360u;
label_1ae360:
    // 0x1ae360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae364:
    // 0x1ae364: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae368:
    // 0x1ae368: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae36c:
    // 0x1ae36c: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x1ae36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1ae370:
    // 0x1ae370: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x1ae370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ae374:
    // 0x1ae374: 0xc7ad0100  lwc1        $f13, 0x100($sp)
    ctx->pc = 0x1ae374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ae378:
    // 0x1ae378: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ae378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae37c:
    // 0x1ae37c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ae37cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae380:
    // 0x1ae380: 0xc08b9fc  jal         func_22E7F0
label_1ae384:
    if (ctx->pc == 0x1AE384u) {
        ctx->pc = 0x1AE388u;
        goto label_1ae388;
    }
    ctx->pc = 0x1AE380u;
    SET_GPR_U32(ctx, 31, 0x1AE388u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1AE380u, 0x1AE388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE388u;
label_1ae388:
    // 0x1ae388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ae388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ae38c:
    // 0x1ae38c: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
label_1ae390:
    if (ctx->pc == 0x1AE390u) {
        ctx->pc = 0x1AE394u;
        goto label_1ae394;
    }
    ctx->pc = 0x1AE38Cu;
    {
        const bool branch_taken_0x1ae38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae38c) {
            ctx->pc = 0x1AE228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae228;
        }
    }
    ctx->pc = 0x1AE394u;
label_1ae394:
    // 0x1ae394: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ae394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ae398:
    // 0x1ae398: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae39c:
    // 0x1ae39c: 0xc0406a0  jal         func_101A80
label_1ae3a0:
    if (ctx->pc == 0x1AE3A0u) {
        ctx->pc = 0x1AE3A4u;
        goto label_1ae3a4;
    }
    ctx->pc = 0x1AE39Cu;
    SET_GPR_U32(ctx, 31, 0x1AE3A4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1AE39Cu, 0x1AE3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3A4u;
label_1ae3a4:
    // 0x1ae3a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ae3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ae3a8:
    // 0x1ae3a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae3ac:
    // 0x1ae3ac: 0xc0406a0  jal         func_101A80
label_1ae3b0:
    if (ctx->pc == 0x1AE3B0u) {
        ctx->pc = 0x1AE3B4u;
        goto label_1ae3b4;
    }
    ctx->pc = 0x1AE3ACu;
    SET_GPR_U32(ctx, 31, 0x1AE3B4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1AE3ACu, 0x1AE3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3B4u;
label_1ae3b4:
    // 0x1ae3b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ae3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ae3b8:
    // 0x1ae3b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae3bc:
    // 0x1ae3bc: 0xc0406a0  jal         func_101A80
label_1ae3c0:
    if (ctx->pc == 0x1AE3C0u) {
        ctx->pc = 0x1AE3C4u;
        goto label_1ae3c4;
    }
    ctx->pc = 0x1AE3BCu;
    SET_GPR_U32(ctx, 31, 0x1AE3C4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1AE3BCu, 0x1AE3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3C4u;
label_1ae3c4:
    // 0x1ae3c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae3c8:
    // 0x1ae3c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae3c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae3cc:
    // 0x1ae3cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae3d0:
    // 0x1ae3d0: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x1ae3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ae3d4:
    // 0x1ae3d4: 0x3e00008  jr          $ra
label_1ae3d8:
    if (ctx->pc == 0x1AE3D8u) {
        ctx->pc = 0x1AE3DCu;
        goto label_1ae3dc;
    }
    ctx->pc = 0x1AE3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE3DCu;
label_1ae3dc:
    // 0x1ae3dc: 0x0  nop
    ctx->pc = 0x1ae3dcu;
    // NOP
label_1ae3e0:
    // 0x1ae3e0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1ae3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1ae3e4:
    // 0x1ae3e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ae3e8:
    // 0x1ae3e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ae3ec:
    // 0x1ae3ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ae3f0:
    // 0x1ae3f0: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x1ae3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
label_1ae3f4:
    // 0x1ae3f4: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x1ae3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
label_1ae3f8:
    // 0x1ae3f8: 0xe7ac0130  swc1        $f12, 0x130($sp)
    ctx->pc = 0x1ae3f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1ae3fc:
    // 0x1ae3fc: 0xe7ad0140  swc1        $f13, 0x140($sp)
    ctx->pc = 0x1ae3fcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1ae400:
    // 0x1ae400: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x1ae400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ae404:
    // 0x1ae404: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x1ae404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1ae408:
    // 0x1ae408: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x1ae408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ae40c:
    // 0x1ae40c: 0xc7ad0140  lwc1        $f13, 0x140($sp)
    ctx->pc = 0x1ae40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ae410:
    // 0x1ae410: 0xc064ff8  jal         func_193FE0
label_1ae414:
    if (ctx->pc == 0x1AE414u) {
        ctx->pc = 0x1AE418u;
        goto label_1ae418;
    }
    ctx->pc = 0x1AE410u;
    SET_GPR_U32(ctx, 31, 0x1AE418u);
    ctx->pc = 0x193FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE0u, 0x1AE410u, 0x1AE418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE418u;
label_1ae418:
    // 0x1ae418: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1ae418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1ae41c:
    // 0x1ae41c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ae41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1ae420:
    // 0x1ae420: 0x24a56ce0  addiu       $a1, $a1, 0x6CE0
    ctx->pc = 0x1ae420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27872));
label_1ae424:
    // 0x1ae424: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ae424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae428:
    // 0x1ae428: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1ae428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1ae42c:
    // 0x1ae42c: 0x320f809  jalr        $t9
label_1ae430:
    if (ctx->pc == 0x1AE430u) {
        ctx->pc = 0x1AE434u;
        goto label_1ae434;
    }
    ctx->pc = 0x1AE42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE434u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE42Cu, 0x1AE434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE434u;
label_1ae434:
    // 0x1ae434: 0x144000eb  bnez        $v0, . + 4 + (0xEB << 2)
label_1ae438:
    if (ctx->pc == 0x1AE438u) {
        ctx->pc = 0x1AE43Cu;
        goto label_1ae43c;
    }
    ctx->pc = 0x1AE434u;
    {
        const bool branch_taken_0x1ae434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae434) {
            ctx->pc = 0x1AE7E4u;
            goto label_1ae7e4;
        }
    }
    ctx->pc = 0x1AE43Cu;
label_1ae43c:
    // 0x1ae43c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1ae43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ae440:
    // 0x1ae440: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ae440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ae444:
    // 0x1ae444: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ae444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1ae448:
    // 0x1ae448: 0x24470061  addiu       $a3, $v0, 0x61
    ctx->pc = 0x1ae448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
label_1ae44c:
    // 0x1ae44c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ae44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ae450:
    // 0x1ae450: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ae450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1ae454:
    // 0x1ae454: 0x24a56d10  addiu       $a1, $a1, 0x6D10
    ctx->pc = 0x1ae454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27920));
label_1ae458:
    // 0x1ae458: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x1ae458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1ae45c:
    // 0x1ae45c: 0xc0bc3e2  jal         func_2F0F88
label_1ae460:
    if (ctx->pc == 0x1AE460u) {
        ctx->pc = 0x1AE464u;
        goto label_1ae464;
    }
    ctx->pc = 0x1AE45Cu;
    SET_GPR_U32(ctx, 31, 0x1AE464u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1AE45Cu, 0x1AE464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE464u;
label_1ae464:
    // 0x1ae464: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1ae464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ae468:
    // 0x1ae468: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ae468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ae46c:
    // 0x1ae46c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ae46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1ae470:
    // 0x1ae470: 0x24470061  addiu       $a3, $v0, 0x61
    ctx->pc = 0x1ae470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
label_1ae474:
    // 0x1ae474: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1ae474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ae478:
    // 0x1ae478: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ae478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1ae47c:
    // 0x1ae47c: 0x24a56d30  addiu       $a1, $a1, 0x6D30
    ctx->pc = 0x1ae47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27952));
label_1ae480:
    // 0x1ae480: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x1ae480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1ae484:
    // 0x1ae484: 0xc0bc3e2  jal         func_2F0F88
label_1ae488:
    if (ctx->pc == 0x1AE488u) {
        ctx->pc = 0x1AE48Cu;
        goto label_1ae48c;
    }
    ctx->pc = 0x1AE484u;
    SET_GPR_U32(ctx, 31, 0x1AE48Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1AE484u, 0x1AE48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE48Cu;
label_1ae48c:
    // 0x1ae48c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1ae48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ae490:
    // 0x1ae490: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ae490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ae494:
    // 0x1ae494: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ae494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1ae498:
    // 0x1ae498: 0x24470061  addiu       $a3, $v0, 0x61
    ctx->pc = 0x1ae498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 97));
label_1ae49c:
    // 0x1ae49c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ae49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ae4a0:
    // 0x1ae4a0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ae4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1ae4a4:
    // 0x1ae4a4: 0x24a56d50  addiu       $a1, $a1, 0x6D50
    ctx->pc = 0x1ae4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27984));
label_1ae4a8:
    // 0x1ae4a8: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x1ae4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1ae4ac:
    // 0x1ae4ac: 0xc0bc3e2  jal         func_2F0F88
label_1ae4b0:
    if (ctx->pc == 0x1AE4B0u) {
        ctx->pc = 0x1AE4B4u;
        goto label_1ae4b4;
    }
    ctx->pc = 0x1AE4ACu;
    SET_GPR_U32(ctx, 31, 0x1AE4B4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1AE4ACu, 0x1AE4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE4B4u;
label_1ae4b4:
    // 0x1ae4b4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1ae4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1ae4b8:
    // 0x1ae4b8: 0xc0495d4  jal         func_125750
label_1ae4bc:
    if (ctx->pc == 0x1AE4BCu) {
        ctx->pc = 0x1AE4C0u;
        goto label_1ae4c0;
    }
    ctx->pc = 0x1AE4B8u;
    SET_GPR_U32(ctx, 31, 0x1AE4C0u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x1AE4B8u, 0x1AE4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE4C0u;
label_1ae4c0:
    // 0x1ae4c0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ae4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ae4c4:
    // 0x1ae4c4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1ae4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1ae4c8:
    // 0x1ae4c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ae4cc:
    // 0x1ae4cc: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_1ae4d0:
    if (ctx->pc == 0x1AE4D0u) {
        ctx->pc = 0x1AE4D4u;
        goto label_1ae4d4;
    }
    ctx->pc = 0x1AE4CCu;
    {
        const bool branch_taken_0x1ae4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae4cc) {
            ctx->pc = 0x1AE54Cu;
            goto label_1ae54c;
        }
    }
    ctx->pc = 0x1AE4D4u;
label_1ae4d4:
    // 0x1ae4d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ae4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae4d8:
    // 0x1ae4d8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_1ae4dc:
    if (ctx->pc == 0x1AE4DCu) {
        ctx->pc = 0x1AE4E0u;
        goto label_1ae4e0;
    }
    ctx->pc = 0x1AE4D8u;
    {
        const bool branch_taken_0x1ae4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae4d8) {
            ctx->pc = 0x1AE524u;
            goto label_1ae524;
        }
    }
    ctx->pc = 0x1AE4E0u;
label_1ae4e0:
    // 0x1ae4e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae4e4:
    // 0x1ae4e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1ae4e8:
    if (ctx->pc == 0x1AE4E8u) {
        ctx->pc = 0x1AE4ECu;
        goto label_1ae4ec;
    }
    ctx->pc = 0x1AE4E4u;
    {
        const bool branch_taken_0x1ae4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae4e4) {
            ctx->pc = 0x1AE4FCu;
            goto label_1ae4fc;
        }
    }
    ctx->pc = 0x1AE4ECu;
label_1ae4ec:
    // 0x1ae4ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1ae4f0:
    if (ctx->pc == 0x1AE4F0u) {
        ctx->pc = 0x1AE4F4u;
        goto label_1ae4f4;
    }
    ctx->pc = 0x1AE4ECu;
    {
        const bool branch_taken_0x1ae4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae4ec) {
            ctx->pc = 0x1AE4FCu;
            goto label_1ae4fc;
        }
    }
    ctx->pc = 0x1AE4F4u;
label_1ae4f4:
    // 0x1ae4f4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1ae4f8:
    if (ctx->pc == 0x1AE4F8u) {
        ctx->pc = 0x1AE4FCu;
        goto label_1ae4fc;
    }
    ctx->pc = 0x1AE4F4u;
    {
        const bool branch_taken_0x1ae4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae4f4) {
            ctx->pc = 0x1AE56Cu;
            goto label_1ae56c;
        }
    }
    ctx->pc = 0x1AE4FCu;
label_1ae4fc:
    // 0x1ae4fc: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1ae4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1ae500:
    // 0x1ae500: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1ae500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ae504:
    // 0x1ae504: 0xc08e57c  jal         func_2395F0
label_1ae508:
    if (ctx->pc == 0x1AE508u) {
        ctx->pc = 0x1AE50Cu;
        goto label_1ae50c;
    }
    ctx->pc = 0x1AE504u;
    SET_GPR_U32(ctx, 31, 0x1AE50Cu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1AE504u, 0x1AE50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE50Cu;
label_1ae50c:
    // 0x1ae50c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1ae50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1ae510:
    // 0x1ae510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae514:
    // 0x1ae514: 0xc0477e8  jal         func_11DFA0
label_1ae518:
    if (ctx->pc == 0x1AE518u) {
        ctx->pc = 0x1AE51Cu;
        goto label_1ae51c;
    }
    ctx->pc = 0x1AE514u;
    SET_GPR_U32(ctx, 31, 0x1AE51Cu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x1AE514u, 0x1AE51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE51Cu;
label_1ae51c:
    // 0x1ae51c: 0x10000013  b           . + 4 + (0x13 << 2)
label_1ae520:
    if (ctx->pc == 0x1AE520u) {
        ctx->pc = 0x1AE524u;
        goto label_1ae524;
    }
    ctx->pc = 0x1AE51Cu;
    {
        const bool branch_taken_0x1ae51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae51c) {
            ctx->pc = 0x1AE56Cu;
            goto label_1ae56c;
        }
    }
    ctx->pc = 0x1AE524u;
label_1ae524:
    // 0x1ae524: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1ae524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1ae528:
    // 0x1ae528: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1ae528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ae52c:
    // 0x1ae52c: 0xc08e57c  jal         func_2395F0
label_1ae530:
    if (ctx->pc == 0x1AE530u) {
        ctx->pc = 0x1AE534u;
        goto label_1ae534;
    }
    ctx->pc = 0x1AE52Cu;
    SET_GPR_U32(ctx, 31, 0x1AE534u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1AE52Cu, 0x1AE534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE534u;
label_1ae534:
    // 0x1ae534: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1ae534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1ae538:
    // 0x1ae538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae53c:
    // 0x1ae53c: 0xc0477e8  jal         func_11DFA0
label_1ae540:
    if (ctx->pc == 0x1AE540u) {
        ctx->pc = 0x1AE544u;
        goto label_1ae544;
    }
    ctx->pc = 0x1AE53Cu;
    SET_GPR_U32(ctx, 31, 0x1AE544u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x1AE53Cu, 0x1AE544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE544u;
label_1ae544:
    // 0x1ae544: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ae548:
    if (ctx->pc == 0x1AE548u) {
        ctx->pc = 0x1AE54Cu;
        goto label_1ae54c;
    }
    ctx->pc = 0x1AE544u;
    {
        const bool branch_taken_0x1ae544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae544) {
            ctx->pc = 0x1AE56Cu;
            goto label_1ae56c;
        }
    }
    ctx->pc = 0x1AE54Cu;
label_1ae54c:
    // 0x1ae54c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1ae54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1ae550:
    // 0x1ae550: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1ae550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ae554:
    // 0x1ae554: 0xc08e57c  jal         func_2395F0
label_1ae558:
    if (ctx->pc == 0x1AE558u) {
        ctx->pc = 0x1AE55Cu;
        goto label_1ae55c;
    }
    ctx->pc = 0x1AE554u;
    SET_GPR_U32(ctx, 31, 0x1AE55Cu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1AE554u, 0x1AE55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE55Cu;
label_1ae55c:
    // 0x1ae55c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1ae55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1ae560:
    // 0x1ae560: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae564:
    // 0x1ae564: 0xc0477e8  jal         func_11DFA0
label_1ae568:
    if (ctx->pc == 0x1AE568u) {
        ctx->pc = 0x1AE56Cu;
        goto label_1ae56c;
    }
    ctx->pc = 0x1AE564u;
    SET_GPR_U32(ctx, 31, 0x1AE56Cu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x1AE564u, 0x1AE56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE56Cu;
label_1ae56c:
    // 0x1ae56c: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1ae56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1ae570:
    // 0x1ae570: 0x27859488  addiu       $a1, $gp, -0x6B78
    ctx->pc = 0x1ae570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939784));
label_1ae574:
    // 0x1ae574: 0xc040304  jal         func_100C10
label_1ae578:
    if (ctx->pc == 0x1AE578u) {
        ctx->pc = 0x1AE57Cu;
        goto label_1ae57c;
    }
    ctx->pc = 0x1AE574u;
    SET_GPR_U32(ctx, 31, 0x1AE57Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1AE574u, 0x1AE57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE57Cu;
label_1ae57c:
    // 0x1ae57c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1ae57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ae580:
    // 0x1ae580: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x1ae580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1ae584:
    // 0x1ae584: 0xc119568  jal         func_4655A0
label_1ae588:
    if (ctx->pc == 0x1AE588u) {
        ctx->pc = 0x1AE58Cu;
        goto label_1ae58c;
    }
    ctx->pc = 0x1AE584u;
    SET_GPR_U32(ctx, 31, 0x1AE58Cu);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x1AE584u, 0x1AE58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE58Cu;
label_1ae58c:
    // 0x1ae58c: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1ae58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1ae590:
    // 0x1ae590: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae594:
    // 0x1ae594: 0xc0402d4  jal         func_100B50
label_1ae598:
    if (ctx->pc == 0x1AE598u) {
        ctx->pc = 0x1AE59Cu;
        goto label_1ae59c;
    }
    ctx->pc = 0x1AE594u;
    SET_GPR_U32(ctx, 31, 0x1AE59Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1AE594u, 0x1AE59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE59Cu;
label_1ae59c:
    // 0x1ae59c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1ae59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1ae5a0:
    // 0x1ae5a0: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x1ae5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae5a4:
    // 0x1ae5a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae5a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae5a8:
    // 0x1ae5a8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1ae5a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1ae5ac:
    // 0x1ae5ac: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1ae5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1ae5b0:
    // 0x1ae5b0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1ae5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1ae5b4:
    // 0x1ae5b4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1ae5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ae5b8:
    // 0x1ae5b8: 0xc08e63c  jal         func_2398F0
label_1ae5bc:
    if (ctx->pc == 0x1AE5BCu) {
        ctx->pc = 0x1AE5C0u;
        goto label_1ae5c0;
    }
    ctx->pc = 0x1AE5B8u;
    SET_GPR_U32(ctx, 31, 0x1AE5C0u);
    ctx->pc = 0x2398F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2398F0u, 0x1AE5B8u, 0x1AE5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE5C0u;
label_1ae5c0:
    // 0x1ae5c0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1ae5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1ae5c4:
    // 0x1ae5c4: 0x27859498  addiu       $a1, $gp, -0x6B68
    ctx->pc = 0x1ae5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939800));
label_1ae5c8:
    // 0x1ae5c8: 0xc040304  jal         func_100C10
label_1ae5cc:
    if (ctx->pc == 0x1AE5CCu) {
        ctx->pc = 0x1AE5D0u;
        goto label_1ae5d0;
    }
    ctx->pc = 0x1AE5C8u;
    SET_GPR_U32(ctx, 31, 0x1AE5D0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1AE5C8u, 0x1AE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE5D0u;
label_1ae5d0:
    // 0x1ae5d0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ae5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ae5d4:
    // 0x1ae5d4: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1ae5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1ae5d8:
    // 0x1ae5d8: 0xc119568  jal         func_4655A0
label_1ae5dc:
    if (ctx->pc == 0x1AE5DCu) {
        ctx->pc = 0x1AE5E0u;
        goto label_1ae5e0;
    }
    ctx->pc = 0x1AE5D8u;
    SET_GPR_U32(ctx, 31, 0x1AE5E0u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x1AE5D8u, 0x1AE5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE5E0u;
label_1ae5e0:
    // 0x1ae5e0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1ae5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1ae5e4:
    // 0x1ae5e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae5e8:
    // 0x1ae5e8: 0xc0402d4  jal         func_100B50
label_1ae5ec:
    if (ctx->pc == 0x1AE5ECu) {
        ctx->pc = 0x1AE5F0u;
        goto label_1ae5f0;
    }
    ctx->pc = 0x1AE5E8u;
    SET_GPR_U32(ctx, 31, 0x1AE5F0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1AE5E8u, 0x1AE5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE5F0u;
label_1ae5f0:
    // 0x1ae5f0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ae5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ae5f4:
    // 0x1ae5f4: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ae5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae5f8:
    // 0x1ae5f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae5f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae5fc:
    // 0x1ae5fc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1ae5fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1ae600:
    // 0x1ae600: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1ae600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1ae604:
    // 0x1ae604: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1ae604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1ae608:
    // 0x1ae608: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1ae608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ae60c:
    // 0x1ae60c: 0xc08e63c  jal         func_2398F0
label_1ae610:
    if (ctx->pc == 0x1AE610u) {
        ctx->pc = 0x1AE614u;
        goto label_1ae614;
    }
    ctx->pc = 0x1AE60Cu;
    SET_GPR_U32(ctx, 31, 0x1AE614u);
    ctx->pc = 0x2398F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2398F0u, 0x1AE60Cu, 0x1AE614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE614u;
label_1ae614:
    // 0x1ae614: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ae614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ae618:
    // 0x1ae618: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ae618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1ae61c:
    // 0x1ae61c: 0xc064f24  jal         func_193C90
label_1ae620:
    if (ctx->pc == 0x1AE620u) {
        ctx->pc = 0x1AE624u;
        goto label_1ae624;
    }
    ctx->pc = 0x1AE61Cu;
    SET_GPR_U32(ctx, 31, 0x1AE624u);
    ctx->pc = 0x193C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C90u, 0x1AE61Cu, 0x1AE624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE624u;
label_1ae624:
    // 0x1ae624: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ae624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae628:
    // 0x1ae628: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae62c:
    // 0x1ae62c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1ae62cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1ae630:
    // 0x1ae630: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1ae630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1ae634:
    // 0x1ae634: 0x278594a0  addiu       $a1, $gp, -0x6B60
    ctx->pc = 0x1ae634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939808));
label_1ae638:
    // 0x1ae638: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1ae638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1ae63c:
    // 0x1ae63c: 0xc055fb0  jal         func_157EC0
label_1ae640:
    if (ctx->pc == 0x1AE640u) {
        ctx->pc = 0x1AE644u;
        goto label_1ae644;
    }
    ctx->pc = 0x1AE63Cu;
    SET_GPR_U32(ctx, 31, 0x1AE644u);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x1AE63Cu, 0x1AE644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE644u;
label_1ae644:
    // 0x1ae644: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ae644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae648:
    // 0x1ae648: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ae648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ae64c:
    // 0x1ae64c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ae64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1ae650:
    // 0x1ae650: 0x24a56d68  addiu       $a1, $a1, 0x6D68
    ctx->pc = 0x1ae650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28008));
label_1ae654:
    // 0x1ae654: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ae654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ae658:
    // 0x1ae658: 0xc0bc3e2  jal         func_2F0F88
label_1ae65c:
    if (ctx->pc == 0x1AE65Cu) {
        ctx->pc = 0x1AE660u;
        goto label_1ae660;
    }
    ctx->pc = 0x1AE658u;
    SET_GPR_U32(ctx, 31, 0x1AE660u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1AE658u, 0x1AE660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE660u;
label_1ae660:
    // 0x1ae660: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1ae660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1ae664:
    // 0x1ae664: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ae664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ae668:
    // 0x1ae668: 0xc05621c  jal         func_158870
label_1ae66c:
    if (ctx->pc == 0x1AE66Cu) {
        ctx->pc = 0x1AE670u;
        goto label_1ae670;
    }
    ctx->pc = 0x1AE668u;
    SET_GPR_U32(ctx, 31, 0x1AE670u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1AE668u, 0x1AE670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE670u;
label_1ae670:
    // 0x1ae670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae674:
    // 0x1ae674: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
label_1ae678:
    if (ctx->pc == 0x1AE678u) {
        ctx->pc = 0x1AE67Cu;
        goto label_1ae67c;
    }
    ctx->pc = 0x1AE674u;
    {
        const bool branch_taken_0x1ae674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae674) {
            ctx->pc = 0x1AE7B4u;
            goto label_1ae7b4;
        }
    }
    ctx->pc = 0x1AE67Cu;
label_1ae67c:
    // 0x1ae67c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ae67cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae680:
    // 0x1ae680: 0x0  nop
    ctx->pc = 0x1ae680u;
    // NOP
label_1ae684:
    // 0x1ae684: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1ae684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1ae688:
    // 0x1ae688: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1ae688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1ae68c:
    // 0x1ae68c: 0xc0552dc  jal         func_154B70
label_1ae690:
    if (ctx->pc == 0x1AE690u) {
        ctx->pc = 0x1AE694u;
        goto label_1ae694;
    }
    ctx->pc = 0x1AE68Cu;
    SET_GPR_U32(ctx, 31, 0x1AE694u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1AE68Cu, 0x1AE694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE694u;
label_1ae694:
    // 0x1ae694: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ae694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae698:
    // 0x1ae698: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ae698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ae69c:
    // 0x1ae69c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae6a0:
    // 0x1ae6a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae6a4:
    // 0x1ae6a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ae6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae6a8:
    // 0x1ae6a8: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x1ae6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_1ae6ac:
    // 0x1ae6ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ae6acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae6b0:
    // 0x1ae6b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ae6b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae6b4:
    // 0x1ae6b4: 0xc08b9fc  jal         func_22E7F0
label_1ae6b8:
    if (ctx->pc == 0x1AE6B8u) {
        ctx->pc = 0x1AE6BCu;
        goto label_1ae6bc;
    }
    ctx->pc = 0x1AE6B4u;
    SET_GPR_U32(ctx, 31, 0x1AE6BCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1AE6B4u, 0x1AE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE6BCu;
label_1ae6bc:
    // 0x1ae6bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae6c0:
    // 0x1ae6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae6c4:
    // 0x1ae6c4: 0x0  nop
    ctx->pc = 0x1ae6c4u;
    // NOP
label_1ae6c8:
    // 0x1ae6c8: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1ae6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1ae6cc:
    // 0x1ae6cc: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1ae6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1ae6d0:
    // 0x1ae6d0: 0xc0552dc  jal         func_154B70
label_1ae6d4:
    if (ctx->pc == 0x1AE6D4u) {
        ctx->pc = 0x1AE6D8u;
        goto label_1ae6d8;
    }
    ctx->pc = 0x1AE6D0u;
    SET_GPR_U32(ctx, 31, 0x1AE6D8u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1AE6D0u, 0x1AE6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE6D8u;
label_1ae6d8:
    // 0x1ae6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae6dc:
    // 0x1ae6dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae6e0:
    // 0x1ae6e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ae6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae6e4:
    // 0x1ae6e4: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x1ae6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_1ae6e8:
    // 0x1ae6e8: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x1ae6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ae6ec:
    // 0x1ae6ec: 0xc7ad0140  lwc1        $f13, 0x140($sp)
    ctx->pc = 0x1ae6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ae6f0:
    // 0x1ae6f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ae6f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae6f4:
    // 0x1ae6f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ae6f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae6f8:
    // 0x1ae6f8: 0xc08b9fc  jal         func_22E7F0
label_1ae6fc:
    if (ctx->pc == 0x1AE6FCu) {
        ctx->pc = 0x1AE700u;
        goto label_1ae700;
    }
    ctx->pc = 0x1AE6F8u;
    SET_GPR_U32(ctx, 31, 0x1AE700u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1AE6F8u, 0x1AE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE700u;
label_1ae700:
    // 0x1ae700: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1ae700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1ae704:
    // 0x1ae704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae708:
    // 0x1ae708: 0x0  nop
    ctx->pc = 0x1ae708u;
    // NOP
label_1ae70c:
    // 0x1ae70c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1ae70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1ae710:
    // 0x1ae710: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1ae710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1ae714:
    // 0x1ae714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae718:
    // 0x1ae718: 0x0  nop
    ctx->pc = 0x1ae718u;
    // NOP
label_1ae71c:
    // 0x1ae71c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1ae71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1ae720:
    // 0x1ae720: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1ae720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1ae724:
    // 0x1ae724: 0xc0552dc  jal         func_154B70
label_1ae728:
    if (ctx->pc == 0x1AE728u) {
        ctx->pc = 0x1AE72Cu;
        goto label_1ae72c;
    }
    ctx->pc = 0x1AE724u;
    SET_GPR_U32(ctx, 31, 0x1AE72Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1AE724u, 0x1AE72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE72Cu;
label_1ae72c:
    // 0x1ae72c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ae72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae730:
    // 0x1ae730: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ae730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ae734:
    // 0x1ae734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae738:
    // 0x1ae738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae73c:
    // 0x1ae73c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae740:
    // 0x1ae740: 0x27a700d8  addiu       $a3, $sp, 0xD8
    ctx->pc = 0x1ae740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_1ae744:
    // 0x1ae744: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ae744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae748:
    // 0x1ae748: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ae748u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae74c:
    // 0x1ae74c: 0xc08b9fc  jal         func_22E7F0
label_1ae750:
    if (ctx->pc == 0x1AE750u) {
        ctx->pc = 0x1AE754u;
        goto label_1ae754;
    }
    ctx->pc = 0x1AE74Cu;
    SET_GPR_U32(ctx, 31, 0x1AE754u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1AE74Cu, 0x1AE754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE754u;
label_1ae754:
    // 0x1ae754: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae758:
    // 0x1ae758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae75c:
    // 0x1ae75c: 0x0  nop
    ctx->pc = 0x1ae75cu;
    // NOP
label_1ae760:
    // 0x1ae760: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1ae760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1ae764:
    // 0x1ae764: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae768:
    // 0x1ae768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae76c:
    // 0x1ae76c: 0x0  nop
    ctx->pc = 0x1ae76cu;
    // NOP
label_1ae770:
    // 0x1ae770: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1ae770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1ae774:
    // 0x1ae774: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1ae774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1ae778:
    // 0x1ae778: 0xc0552dc  jal         func_154B70
label_1ae77c:
    if (ctx->pc == 0x1AE77Cu) {
        ctx->pc = 0x1AE780u;
        goto label_1ae780;
    }
    ctx->pc = 0x1AE778u;
    SET_GPR_U32(ctx, 31, 0x1AE780u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1AE778u, 0x1AE780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE780u;
label_1ae780:
    // 0x1ae780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae784:
    // 0x1ae784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae788:
    // 0x1ae788: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae78c:
    // 0x1ae78c: 0x27a700d8  addiu       $a3, $sp, 0xD8
    ctx->pc = 0x1ae78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_1ae790:
    // 0x1ae790: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x1ae790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ae794:
    // 0x1ae794: 0xc7ad0140  lwc1        $f13, 0x140($sp)
    ctx->pc = 0x1ae794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ae798:
    // 0x1ae798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ae798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae79c:
    // 0x1ae79c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ae79cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae7a0:
    // 0x1ae7a0: 0xc08b9fc  jal         func_22E7F0
label_1ae7a4:
    if (ctx->pc == 0x1AE7A4u) {
        ctx->pc = 0x1AE7A8u;
        goto label_1ae7a8;
    }
    ctx->pc = 0x1AE7A0u;
    SET_GPR_U32(ctx, 31, 0x1AE7A8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1AE7A0u, 0x1AE7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7A8u;
label_1ae7a8:
    // 0x1ae7a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ae7a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ae7ac:
    // 0x1ae7ac: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
label_1ae7b0:
    if (ctx->pc == 0x1AE7B0u) {
        ctx->pc = 0x1AE7B4u;
        goto label_1ae7b4;
    }
    ctx->pc = 0x1AE7ACu;
    {
        const bool branch_taken_0x1ae7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae7ac) {
            ctx->pc = 0x1AE648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae648;
        }
    }
    ctx->pc = 0x1AE7B4u;
label_1ae7b4:
    // 0x1ae7b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ae7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1ae7b8:
    // 0x1ae7b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae7bc:
    // 0x1ae7bc: 0xc0406a0  jal         func_101A80
label_1ae7c0:
    if (ctx->pc == 0x1AE7C0u) {
        ctx->pc = 0x1AE7C4u;
        goto label_1ae7c4;
    }
    ctx->pc = 0x1AE7BCu;
    SET_GPR_U32(ctx, 31, 0x1AE7C4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1AE7BCu, 0x1AE7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7C4u;
label_1ae7c4:
    // 0x1ae7c4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1ae7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ae7c8:
    // 0x1ae7c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae7cc:
    // 0x1ae7cc: 0xc0406a0  jal         func_101A80
label_1ae7d0:
    if (ctx->pc == 0x1AE7D0u) {
        ctx->pc = 0x1AE7D4u;
        goto label_1ae7d4;
    }
    ctx->pc = 0x1AE7CCu;
    SET_GPR_U32(ctx, 31, 0x1AE7D4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1AE7CCu, 0x1AE7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7D4u;
label_1ae7d4:
    // 0x1ae7d4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1ae7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1ae7d8:
    // 0x1ae7d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae7dc:
    // 0x1ae7dc: 0xc0406a0  jal         func_101A80
label_1ae7e0:
    if (ctx->pc == 0x1AE7E0u) {
        ctx->pc = 0x1AE7E4u;
        goto label_1ae7e4;
    }
    ctx->pc = 0x1AE7DCu;
    SET_GPR_U32(ctx, 31, 0x1AE7E4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1AE7DCu, 0x1AE7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7E4u;
label_1ae7e4:
    // 0x1ae7e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae7e8:
    // 0x1ae7e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae7e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae7ec:
    // 0x1ae7ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae7f0:
    // 0x1ae7f0: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x1ae7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1ae7f4:
    // 0x1ae7f4: 0x3e00008  jr          $ra
label_1ae7f8:
    if (ctx->pc == 0x1AE7F8u) {
        ctx->pc = 0x1AE7FCu;
        goto label_1ae7fc;
    }
    ctx->pc = 0x1AE7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE7FCu;
label_1ae7fc:
    // 0x1ae7fc: 0x0  nop
    ctx->pc = 0x1ae7fcu;
    // NOP
label_1ae800:
    // 0x1ae800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ae804:
    // 0x1ae804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ae808:
    // 0x1ae808: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae80c:
    // 0x1ae80c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ae80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae810:
    // 0x1ae810: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1ae810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1ae814:
    // 0x1ae814: 0x27859460  addiu       $a1, $gp, -0x6BA0
    ctx->pc = 0x1ae814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939744));
label_1ae818:
    // 0x1ae818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae81c:
    // 0x1ae81c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1ae81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae820:
    // 0x1ae820: 0xc08f558  jal         func_23D560
label_1ae824:
    if (ctx->pc == 0x1AE824u) {
        ctx->pc = 0x1AE828u;
        goto label_1ae828;
    }
    ctx->pc = 0x1AE820u;
    SET_GPR_U32(ctx, 31, 0x1AE828u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1AE820u, 0x1AE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE828u;
label_1ae828:
    // 0x1ae828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae82c:
    // 0x1ae82c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ae82cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ae830:
    // 0x1ae830: 0x3e00008  jr          $ra
label_1ae834:
    if (ctx->pc == 0x1AE834u) {
        ctx->pc = 0x1AE838u;
        goto label_1ae838;
    }
    ctx->pc = 0x1AE830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE838u;
label_1ae838:
    // 0x1ae838: 0x0  nop
    ctx->pc = 0x1ae838u;
    // NOP
label_1ae83c:
    // 0x1ae83c: 0x0  nop
    ctx->pc = 0x1ae83cu;
    // NOP
label_1ae840:
    // 0x1ae840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ae844:
    // 0x1ae844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ae848:
    // 0x1ae848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ae84c:
    // 0x1ae84c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ae84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1ae850:
    // 0x1ae850: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ae850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae854:
    // 0x1ae854: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x1ae854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_1ae858:
    // 0x1ae858: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ae858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1ae85c:
    // 0x1ae85c: 0xc085538  jal         func_2154E0
label_1ae860:
    if (ctx->pc == 0x1AE860u) {
        ctx->pc = 0x1AE864u;
        goto label_1ae864;
    }
    ctx->pc = 0x1AE85Cu;
    SET_GPR_U32(ctx, 31, 0x1AE864u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1AE85Cu, 0x1AE864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE864u;
label_1ae864:
    // 0x1ae864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae868:
    // 0x1ae868: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1ae86c:
    if (ctx->pc == 0x1AE86Cu) {
        ctx->pc = 0x1AE870u;
        goto label_1ae870;
    }
    ctx->pc = 0x1AE868u;
    {
        const bool branch_taken_0x1ae868 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae868) {
            ctx->pc = 0x1AE87Cu;
            goto label_1ae87c;
        }
    }
    ctx->pc = 0x1AE870u;
label_1ae870:
    // 0x1ae870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ae870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae874:
    // 0x1ae874: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ae878:
    if (ctx->pc == 0x1AE878u) {
        ctx->pc = 0x1AE87Cu;
        goto label_1ae87c;
    }
    ctx->pc = 0x1AE874u;
    {
        const bool branch_taken_0x1ae874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae874) {
            ctx->pc = 0x1AE888u;
            goto label_1ae888;
        }
    }
    ctx->pc = 0x1AE87Cu;
label_1ae87c:
    // 0x1ae87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae880:
    // 0x1ae880: 0xc096880  jal         func_25A200
label_1ae884:
    if (ctx->pc == 0x1AE884u) {
        ctx->pc = 0x1AE888u;
        goto label_1ae888;
    }
    ctx->pc = 0x1AE880u;
    SET_GPR_U32(ctx, 31, 0x1AE888u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x1AE880u, 0x1AE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE888u;
label_1ae888:
    // 0x1ae888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae88c:
    // 0x1ae88c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae890:
    // 0x1ae890: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ae890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ae894:
    // 0x1ae894: 0x3e00008  jr          $ra
label_1ae898:
    if (ctx->pc == 0x1AE898u) {
        ctx->pc = 0x1AE89Cu;
        goto label_1ae89c;
    }
    ctx->pc = 0x1AE894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE89Cu;
label_1ae89c:
    // 0x1ae89c: 0x0  nop
    ctx->pc = 0x1ae89cu;
    // NOP
    ctx->pc = 0x1ae8a0u;
}
