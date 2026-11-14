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

// Function: sub_0038EFC0
// Address: 0x38efc0 - 0x38f668
void sub_0038EFC0_0x38efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EFC0_0x38efc0");
#endif

    switch (ctx->pc) {
        case 0x38efc0u: goto label_38efc0;
        case 0x38efc4u: goto label_38efc4;
        case 0x38efc8u: goto label_38efc8;
        case 0x38efccu: goto label_38efcc;
        case 0x38efd0u: goto label_38efd0;
        case 0x38efd4u: goto label_38efd4;
        case 0x38efd8u: goto label_38efd8;
        case 0x38efdcu: goto label_38efdc;
        case 0x38efe0u: goto label_38efe0;
        case 0x38efe4u: goto label_38efe4;
        case 0x38efe8u: goto label_38efe8;
        case 0x38efecu: goto label_38efec;
        case 0x38eff0u: goto label_38eff0;
        case 0x38eff4u: goto label_38eff4;
        case 0x38eff8u: goto label_38eff8;
        case 0x38effcu: goto label_38effc;
        case 0x38f000u: goto label_38f000;
        case 0x38f004u: goto label_38f004;
        case 0x38f008u: goto label_38f008;
        case 0x38f00cu: goto label_38f00c;
        case 0x38f010u: goto label_38f010;
        case 0x38f014u: goto label_38f014;
        case 0x38f018u: goto label_38f018;
        case 0x38f01cu: goto label_38f01c;
        case 0x38f020u: goto label_38f020;
        case 0x38f024u: goto label_38f024;
        case 0x38f028u: goto label_38f028;
        case 0x38f02cu: goto label_38f02c;
        case 0x38f030u: goto label_38f030;
        case 0x38f034u: goto label_38f034;
        case 0x38f038u: goto label_38f038;
        case 0x38f03cu: goto label_38f03c;
        case 0x38f040u: goto label_38f040;
        case 0x38f044u: goto label_38f044;
        case 0x38f048u: goto label_38f048;
        case 0x38f04cu: goto label_38f04c;
        case 0x38f050u: goto label_38f050;
        case 0x38f054u: goto label_38f054;
        case 0x38f058u: goto label_38f058;
        case 0x38f05cu: goto label_38f05c;
        case 0x38f060u: goto label_38f060;
        case 0x38f064u: goto label_38f064;
        case 0x38f068u: goto label_38f068;
        case 0x38f06cu: goto label_38f06c;
        case 0x38f070u: goto label_38f070;
        case 0x38f074u: goto label_38f074;
        case 0x38f078u: goto label_38f078;
        case 0x38f07cu: goto label_38f07c;
        case 0x38f080u: goto label_38f080;
        case 0x38f084u: goto label_38f084;
        case 0x38f088u: goto label_38f088;
        case 0x38f08cu: goto label_38f08c;
        case 0x38f090u: goto label_38f090;
        case 0x38f094u: goto label_38f094;
        case 0x38f098u: goto label_38f098;
        case 0x38f09cu: goto label_38f09c;
        case 0x38f0a0u: goto label_38f0a0;
        case 0x38f0a4u: goto label_38f0a4;
        case 0x38f0a8u: goto label_38f0a8;
        case 0x38f0acu: goto label_38f0ac;
        case 0x38f0b0u: goto label_38f0b0;
        case 0x38f0b4u: goto label_38f0b4;
        case 0x38f0b8u: goto label_38f0b8;
        case 0x38f0bcu: goto label_38f0bc;
        case 0x38f0c0u: goto label_38f0c0;
        case 0x38f0c4u: goto label_38f0c4;
        case 0x38f0c8u: goto label_38f0c8;
        case 0x38f0ccu: goto label_38f0cc;
        case 0x38f0d0u: goto label_38f0d0;
        case 0x38f0d4u: goto label_38f0d4;
        case 0x38f0d8u: goto label_38f0d8;
        case 0x38f0dcu: goto label_38f0dc;
        case 0x38f0e0u: goto label_38f0e0;
        case 0x38f0e4u: goto label_38f0e4;
        case 0x38f0e8u: goto label_38f0e8;
        case 0x38f0ecu: goto label_38f0ec;
        case 0x38f0f0u: goto label_38f0f0;
        case 0x38f0f4u: goto label_38f0f4;
        case 0x38f0f8u: goto label_38f0f8;
        case 0x38f0fcu: goto label_38f0fc;
        case 0x38f100u: goto label_38f100;
        case 0x38f104u: goto label_38f104;
        case 0x38f108u: goto label_38f108;
        case 0x38f10cu: goto label_38f10c;
        case 0x38f110u: goto label_38f110;
        case 0x38f114u: goto label_38f114;
        case 0x38f118u: goto label_38f118;
        case 0x38f11cu: goto label_38f11c;
        case 0x38f120u: goto label_38f120;
        case 0x38f124u: goto label_38f124;
        case 0x38f128u: goto label_38f128;
        case 0x38f12cu: goto label_38f12c;
        case 0x38f130u: goto label_38f130;
        case 0x38f134u: goto label_38f134;
        case 0x38f138u: goto label_38f138;
        case 0x38f13cu: goto label_38f13c;
        case 0x38f140u: goto label_38f140;
        case 0x38f144u: goto label_38f144;
        case 0x38f148u: goto label_38f148;
        case 0x38f14cu: goto label_38f14c;
        case 0x38f150u: goto label_38f150;
        case 0x38f154u: goto label_38f154;
        case 0x38f158u: goto label_38f158;
        case 0x38f15cu: goto label_38f15c;
        case 0x38f160u: goto label_38f160;
        case 0x38f164u: goto label_38f164;
        case 0x38f168u: goto label_38f168;
        case 0x38f16cu: goto label_38f16c;
        case 0x38f170u: goto label_38f170;
        case 0x38f174u: goto label_38f174;
        case 0x38f178u: goto label_38f178;
        case 0x38f17cu: goto label_38f17c;
        case 0x38f180u: goto label_38f180;
        case 0x38f184u: goto label_38f184;
        case 0x38f188u: goto label_38f188;
        case 0x38f18cu: goto label_38f18c;
        case 0x38f190u: goto label_38f190;
        case 0x38f194u: goto label_38f194;
        case 0x38f198u: goto label_38f198;
        case 0x38f19cu: goto label_38f19c;
        case 0x38f1a0u: goto label_38f1a0;
        case 0x38f1a4u: goto label_38f1a4;
        case 0x38f1a8u: goto label_38f1a8;
        case 0x38f1acu: goto label_38f1ac;
        case 0x38f1b0u: goto label_38f1b0;
        case 0x38f1b4u: goto label_38f1b4;
        case 0x38f1b8u: goto label_38f1b8;
        case 0x38f1bcu: goto label_38f1bc;
        case 0x38f1c0u: goto label_38f1c0;
        case 0x38f1c4u: goto label_38f1c4;
        case 0x38f1c8u: goto label_38f1c8;
        case 0x38f1ccu: goto label_38f1cc;
        case 0x38f1d0u: goto label_38f1d0;
        case 0x38f1d4u: goto label_38f1d4;
        case 0x38f1d8u: goto label_38f1d8;
        case 0x38f1dcu: goto label_38f1dc;
        case 0x38f1e0u: goto label_38f1e0;
        case 0x38f1e4u: goto label_38f1e4;
        case 0x38f1e8u: goto label_38f1e8;
        case 0x38f1ecu: goto label_38f1ec;
        case 0x38f1f0u: goto label_38f1f0;
        case 0x38f1f4u: goto label_38f1f4;
        case 0x38f1f8u: goto label_38f1f8;
        case 0x38f1fcu: goto label_38f1fc;
        case 0x38f200u: goto label_38f200;
        case 0x38f204u: goto label_38f204;
        case 0x38f208u: goto label_38f208;
        case 0x38f20cu: goto label_38f20c;
        case 0x38f210u: goto label_38f210;
        case 0x38f214u: goto label_38f214;
        case 0x38f218u: goto label_38f218;
        case 0x38f21cu: goto label_38f21c;
        case 0x38f220u: goto label_38f220;
        case 0x38f224u: goto label_38f224;
        case 0x38f228u: goto label_38f228;
        case 0x38f22cu: goto label_38f22c;
        case 0x38f230u: goto label_38f230;
        case 0x38f234u: goto label_38f234;
        case 0x38f238u: goto label_38f238;
        case 0x38f23cu: goto label_38f23c;
        case 0x38f240u: goto label_38f240;
        case 0x38f244u: goto label_38f244;
        case 0x38f248u: goto label_38f248;
        case 0x38f24cu: goto label_38f24c;
        case 0x38f250u: goto label_38f250;
        case 0x38f254u: goto label_38f254;
        case 0x38f258u: goto label_38f258;
        case 0x38f25cu: goto label_38f25c;
        case 0x38f260u: goto label_38f260;
        case 0x38f264u: goto label_38f264;
        case 0x38f268u: goto label_38f268;
        case 0x38f26cu: goto label_38f26c;
        case 0x38f270u: goto label_38f270;
        case 0x38f274u: goto label_38f274;
        case 0x38f278u: goto label_38f278;
        case 0x38f27cu: goto label_38f27c;
        case 0x38f280u: goto label_38f280;
        case 0x38f284u: goto label_38f284;
        case 0x38f288u: goto label_38f288;
        case 0x38f28cu: goto label_38f28c;
        case 0x38f290u: goto label_38f290;
        case 0x38f294u: goto label_38f294;
        case 0x38f298u: goto label_38f298;
        case 0x38f29cu: goto label_38f29c;
        case 0x38f2a0u: goto label_38f2a0;
        case 0x38f2a4u: goto label_38f2a4;
        case 0x38f2a8u: goto label_38f2a8;
        case 0x38f2acu: goto label_38f2ac;
        case 0x38f2b0u: goto label_38f2b0;
        case 0x38f2b4u: goto label_38f2b4;
        case 0x38f2b8u: goto label_38f2b8;
        case 0x38f2bcu: goto label_38f2bc;
        case 0x38f2c0u: goto label_38f2c0;
        case 0x38f2c4u: goto label_38f2c4;
        case 0x38f2c8u: goto label_38f2c8;
        case 0x38f2ccu: goto label_38f2cc;
        case 0x38f2d0u: goto label_38f2d0;
        case 0x38f2d4u: goto label_38f2d4;
        case 0x38f2d8u: goto label_38f2d8;
        case 0x38f2dcu: goto label_38f2dc;
        case 0x38f2e0u: goto label_38f2e0;
        case 0x38f2e4u: goto label_38f2e4;
        case 0x38f2e8u: goto label_38f2e8;
        case 0x38f2ecu: goto label_38f2ec;
        case 0x38f2f0u: goto label_38f2f0;
        case 0x38f2f4u: goto label_38f2f4;
        case 0x38f2f8u: goto label_38f2f8;
        case 0x38f2fcu: goto label_38f2fc;
        case 0x38f300u: goto label_38f300;
        case 0x38f304u: goto label_38f304;
        case 0x38f308u: goto label_38f308;
        case 0x38f30cu: goto label_38f30c;
        case 0x38f310u: goto label_38f310;
        case 0x38f314u: goto label_38f314;
        case 0x38f318u: goto label_38f318;
        case 0x38f31cu: goto label_38f31c;
        case 0x38f320u: goto label_38f320;
        case 0x38f324u: goto label_38f324;
        case 0x38f328u: goto label_38f328;
        case 0x38f32cu: goto label_38f32c;
        case 0x38f330u: goto label_38f330;
        case 0x38f334u: goto label_38f334;
        case 0x38f338u: goto label_38f338;
        case 0x38f33cu: goto label_38f33c;
        case 0x38f340u: goto label_38f340;
        case 0x38f344u: goto label_38f344;
        case 0x38f348u: goto label_38f348;
        case 0x38f34cu: goto label_38f34c;
        case 0x38f350u: goto label_38f350;
        case 0x38f354u: goto label_38f354;
        case 0x38f358u: goto label_38f358;
        case 0x38f35cu: goto label_38f35c;
        case 0x38f360u: goto label_38f360;
        case 0x38f364u: goto label_38f364;
        case 0x38f368u: goto label_38f368;
        case 0x38f36cu: goto label_38f36c;
        case 0x38f370u: goto label_38f370;
        case 0x38f374u: goto label_38f374;
        case 0x38f378u: goto label_38f378;
        case 0x38f37cu: goto label_38f37c;
        case 0x38f380u: goto label_38f380;
        case 0x38f384u: goto label_38f384;
        case 0x38f388u: goto label_38f388;
        case 0x38f38cu: goto label_38f38c;
        case 0x38f390u: goto label_38f390;
        case 0x38f394u: goto label_38f394;
        case 0x38f398u: goto label_38f398;
        case 0x38f39cu: goto label_38f39c;
        case 0x38f3a0u: goto label_38f3a0;
        case 0x38f3a4u: goto label_38f3a4;
        case 0x38f3a8u: goto label_38f3a8;
        case 0x38f3acu: goto label_38f3ac;
        case 0x38f3b0u: goto label_38f3b0;
        case 0x38f3b4u: goto label_38f3b4;
        case 0x38f3b8u: goto label_38f3b8;
        case 0x38f3bcu: goto label_38f3bc;
        case 0x38f3c0u: goto label_38f3c0;
        case 0x38f3c4u: goto label_38f3c4;
        case 0x38f3c8u: goto label_38f3c8;
        case 0x38f3ccu: goto label_38f3cc;
        case 0x38f3d0u: goto label_38f3d0;
        case 0x38f3d4u: goto label_38f3d4;
        case 0x38f3d8u: goto label_38f3d8;
        case 0x38f3dcu: goto label_38f3dc;
        case 0x38f3e0u: goto label_38f3e0;
        case 0x38f3e4u: goto label_38f3e4;
        case 0x38f3e8u: goto label_38f3e8;
        case 0x38f3ecu: goto label_38f3ec;
        case 0x38f3f0u: goto label_38f3f0;
        case 0x38f3f4u: goto label_38f3f4;
        case 0x38f3f8u: goto label_38f3f8;
        case 0x38f3fcu: goto label_38f3fc;
        case 0x38f400u: goto label_38f400;
        case 0x38f404u: goto label_38f404;
        case 0x38f408u: goto label_38f408;
        case 0x38f40cu: goto label_38f40c;
        case 0x38f410u: goto label_38f410;
        case 0x38f414u: goto label_38f414;
        case 0x38f418u: goto label_38f418;
        case 0x38f41cu: goto label_38f41c;
        case 0x38f420u: goto label_38f420;
        case 0x38f424u: goto label_38f424;
        case 0x38f428u: goto label_38f428;
        case 0x38f42cu: goto label_38f42c;
        case 0x38f430u: goto label_38f430;
        case 0x38f434u: goto label_38f434;
        case 0x38f438u: goto label_38f438;
        case 0x38f43cu: goto label_38f43c;
        case 0x38f440u: goto label_38f440;
        case 0x38f444u: goto label_38f444;
        case 0x38f448u: goto label_38f448;
        case 0x38f44cu: goto label_38f44c;
        case 0x38f450u: goto label_38f450;
        case 0x38f454u: goto label_38f454;
        case 0x38f458u: goto label_38f458;
        case 0x38f45cu: goto label_38f45c;
        case 0x38f460u: goto label_38f460;
        case 0x38f464u: goto label_38f464;
        case 0x38f468u: goto label_38f468;
        case 0x38f46cu: goto label_38f46c;
        case 0x38f470u: goto label_38f470;
        case 0x38f474u: goto label_38f474;
        case 0x38f478u: goto label_38f478;
        case 0x38f47cu: goto label_38f47c;
        case 0x38f480u: goto label_38f480;
        case 0x38f484u: goto label_38f484;
        case 0x38f488u: goto label_38f488;
        case 0x38f48cu: goto label_38f48c;
        case 0x38f490u: goto label_38f490;
        case 0x38f494u: goto label_38f494;
        case 0x38f498u: goto label_38f498;
        case 0x38f49cu: goto label_38f49c;
        case 0x38f4a0u: goto label_38f4a0;
        case 0x38f4a4u: goto label_38f4a4;
        case 0x38f4a8u: goto label_38f4a8;
        case 0x38f4acu: goto label_38f4ac;
        case 0x38f4b0u: goto label_38f4b0;
        case 0x38f4b4u: goto label_38f4b4;
        case 0x38f4b8u: goto label_38f4b8;
        case 0x38f4bcu: goto label_38f4bc;
        case 0x38f4c0u: goto label_38f4c0;
        case 0x38f4c4u: goto label_38f4c4;
        case 0x38f4c8u: goto label_38f4c8;
        case 0x38f4ccu: goto label_38f4cc;
        case 0x38f4d0u: goto label_38f4d0;
        case 0x38f4d4u: goto label_38f4d4;
        case 0x38f4d8u: goto label_38f4d8;
        case 0x38f4dcu: goto label_38f4dc;
        case 0x38f4e0u: goto label_38f4e0;
        case 0x38f4e4u: goto label_38f4e4;
        case 0x38f4e8u: goto label_38f4e8;
        case 0x38f4ecu: goto label_38f4ec;
        case 0x38f4f0u: goto label_38f4f0;
        case 0x38f4f4u: goto label_38f4f4;
        case 0x38f4f8u: goto label_38f4f8;
        case 0x38f4fcu: goto label_38f4fc;
        case 0x38f500u: goto label_38f500;
        case 0x38f504u: goto label_38f504;
        case 0x38f508u: goto label_38f508;
        case 0x38f50cu: goto label_38f50c;
        case 0x38f510u: goto label_38f510;
        case 0x38f514u: goto label_38f514;
        case 0x38f518u: goto label_38f518;
        case 0x38f51cu: goto label_38f51c;
        case 0x38f520u: goto label_38f520;
        case 0x38f524u: goto label_38f524;
        case 0x38f528u: goto label_38f528;
        case 0x38f52cu: goto label_38f52c;
        case 0x38f530u: goto label_38f530;
        case 0x38f534u: goto label_38f534;
        case 0x38f538u: goto label_38f538;
        case 0x38f53cu: goto label_38f53c;
        case 0x38f540u: goto label_38f540;
        case 0x38f544u: goto label_38f544;
        case 0x38f548u: goto label_38f548;
        case 0x38f54cu: goto label_38f54c;
        case 0x38f550u: goto label_38f550;
        case 0x38f554u: goto label_38f554;
        case 0x38f558u: goto label_38f558;
        case 0x38f55cu: goto label_38f55c;
        case 0x38f560u: goto label_38f560;
        case 0x38f564u: goto label_38f564;
        case 0x38f568u: goto label_38f568;
        case 0x38f56cu: goto label_38f56c;
        case 0x38f570u: goto label_38f570;
        case 0x38f574u: goto label_38f574;
        case 0x38f578u: goto label_38f578;
        case 0x38f57cu: goto label_38f57c;
        case 0x38f580u: goto label_38f580;
        case 0x38f584u: goto label_38f584;
        case 0x38f588u: goto label_38f588;
        case 0x38f58cu: goto label_38f58c;
        case 0x38f590u: goto label_38f590;
        case 0x38f594u: goto label_38f594;
        case 0x38f598u: goto label_38f598;
        case 0x38f59cu: goto label_38f59c;
        case 0x38f5a0u: goto label_38f5a0;
        case 0x38f5a4u: goto label_38f5a4;
        case 0x38f5a8u: goto label_38f5a8;
        case 0x38f5acu: goto label_38f5ac;
        case 0x38f5b0u: goto label_38f5b0;
        case 0x38f5b4u: goto label_38f5b4;
        case 0x38f5b8u: goto label_38f5b8;
        case 0x38f5bcu: goto label_38f5bc;
        case 0x38f5c0u: goto label_38f5c0;
        case 0x38f5c4u: goto label_38f5c4;
        case 0x38f5c8u: goto label_38f5c8;
        case 0x38f5ccu: goto label_38f5cc;
        case 0x38f5d0u: goto label_38f5d0;
        case 0x38f5d4u: goto label_38f5d4;
        case 0x38f5d8u: goto label_38f5d8;
        case 0x38f5dcu: goto label_38f5dc;
        case 0x38f5e0u: goto label_38f5e0;
        case 0x38f5e4u: goto label_38f5e4;
        case 0x38f5e8u: goto label_38f5e8;
        case 0x38f5ecu: goto label_38f5ec;
        case 0x38f5f0u: goto label_38f5f0;
        case 0x38f5f4u: goto label_38f5f4;
        case 0x38f5f8u: goto label_38f5f8;
        case 0x38f5fcu: goto label_38f5fc;
        case 0x38f600u: goto label_38f600;
        case 0x38f604u: goto label_38f604;
        case 0x38f608u: goto label_38f608;
        case 0x38f60cu: goto label_38f60c;
        case 0x38f610u: goto label_38f610;
        case 0x38f614u: goto label_38f614;
        case 0x38f618u: goto label_38f618;
        case 0x38f61cu: goto label_38f61c;
        case 0x38f620u: goto label_38f620;
        case 0x38f624u: goto label_38f624;
        case 0x38f628u: goto label_38f628;
        case 0x38f62cu: goto label_38f62c;
        case 0x38f630u: goto label_38f630;
        case 0x38f634u: goto label_38f634;
        case 0x38f638u: goto label_38f638;
        case 0x38f63cu: goto label_38f63c;
        case 0x38f640u: goto label_38f640;
        case 0x38f644u: goto label_38f644;
        case 0x38f648u: goto label_38f648;
        case 0x38f64cu: goto label_38f64c;
        case 0x38f650u: goto label_38f650;
        case 0x38f654u: goto label_38f654;
        case 0x38f658u: goto label_38f658;
        case 0x38f65cu: goto label_38f65c;
        case 0x38f660u: goto label_38f660;
        case 0x38f664u: goto label_38f664;
        default: break;
    }

    ctx->pc = 0x38efc0u;

label_38efc0:
    // 0x38efc0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x38efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_38efc4:
    // 0x38efc4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x38efc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_38efc8:
    // 0x38efc8: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x38efc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_38efcc:
    // 0x38efcc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x38efccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_38efd0:
    // 0x38efd0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38efd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38efd4:
    // 0x38efd4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x38efd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38efd8:
    // 0x38efd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38efd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38efdc:
    // 0x38efdc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x38efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_38efe0:
    // 0x38efe0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x38efe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_38efe4:
    // 0x38efe4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x38efe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_38efe8:
    // 0x38efe8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x38efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_38efec:
    // 0x38efec: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x38efecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_38eff0:
    // 0x38eff0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x38eff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_38eff4:
    // 0x38eff4: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x38eff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_38eff8:
    // 0x38eff8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38eff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_38effc:
    // 0x38effc: 0xc103322  jal         func_40CC88
label_38f000:
    if (ctx->pc == 0x38F000u) {
        ctx->pc = 0x38F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EFFCu;
        // 0x38f000: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F004u;
        goto label_38f004;
    }
    ctx->pc = 0x38EFFCu;
    SET_GPR_U32(ctx, 31, 0x38F004u);
    ctx->pc = 0x38F000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EFFCu;
    // 0x38f000: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x38EFFCu, 0x38F004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F004u;
label_38f004:
    // 0x38f004: 0x1040018a  beqz        $v0, . + 4 + (0x18A << 2)
label_38f008:
    if (ctx->pc == 0x38F008u) {
        ctx->pc = 0x38F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F004u;
        // 0x38f008: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F00Cu;
        goto label_38f00c;
    }
    ctx->pc = 0x38F004u;
    {
        const bool branch_taken_0x38f004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F004u;
        // 0x38f008: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f004) {
            ctx->pc = 0x38F630u;
            goto label_38f630;
        }
    }
    ctx->pc = 0x38F00Cu;
label_38f00c:
    // 0x38f00c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x38f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_38f010:
    // 0x38f010: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x38f010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_38f014:
    // 0x38f014: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38f014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38f018:
    // 0x38f018: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x38f018u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_38f01c:
    // 0x38f01c: 0x1060017c  beqz        $v1, . + 4 + (0x17C << 2)
label_38f020:
    if (ctx->pc == 0x38F020u) {
        ctx->pc = 0x38F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F01Cu;
        // 0x38f020: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F024u;
        goto label_38f024;
    }
    ctx->pc = 0x38F01Cu;
    {
        const bool branch_taken_0x38f01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F01Cu;
        // 0x38f020: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f01c) {
            ctx->pc = 0x38F610u;
            goto label_38f610;
        }
    }
    ctx->pc = 0x38F024u;
label_38f024:
    // 0x38f024: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x38f024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_38f028:
    // 0x38f028: 0xc103468  jal         func_40D1A0
label_38f02c:
    if (ctx->pc == 0x38F02Cu) {
        ctx->pc = 0x38F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F028u;
        // 0x38f02c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F030u;
        goto label_38f030;
    }
    ctx->pc = 0x38F028u;
    SET_GPR_U32(ctx, 31, 0x38F030u);
    ctx->pc = 0x38F02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F028u;
    // 0x38f02c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x38F028u, 0x38F030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F030u;
label_38f030:
    // 0x38f030: 0x1040017f  beqz        $v0, . + 4 + (0x17F << 2)
label_38f034:
    if (ctx->pc == 0x38F034u) {
        ctx->pc = 0x38F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F030u;
        // 0x38f034: 0x8fb10038  lw          $s1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F038u;
        goto label_38f038;
    }
    ctx->pc = 0x38F030u;
    {
        const bool branch_taken_0x38f030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F030u;
        // 0x38f034: 0x8fb10038  lw          $s1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f030) {
            ctx->pc = 0x38F630u;
            goto label_38f630;
        }
    }
    ctx->pc = 0x38F038u;
label_38f038:
    // 0x38f038: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x38f038u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_38f03c:
    // 0x38f03c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x38f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_38f040:
    // 0x38f040: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_38f044:
    if (ctx->pc == 0x38F044u) {
        ctx->pc = 0x38F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F040u;
        // 0x38f044: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F048u;
        goto label_38f048;
    }
    ctx->pc = 0x38F040u;
    {
        const bool branch_taken_0x38f040 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F040u;
        // 0x38f044: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f040) {
            ctx->pc = 0x38F050u;
            goto label_38f050;
        }
    }
    ctx->pc = 0x38F048u;
label_38f048:
    // 0x38f048: 0x1000017a  b           . + 4 + (0x17A << 2)
label_38f04c:
    if (ctx->pc == 0x38F04Cu) {
        ctx->pc = 0x38F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F048u;
        // 0x38f04c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F050u;
        goto label_38f050;
    }
    ctx->pc = 0x38F048u;
    {
        const bool branch_taken_0x38f048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F048u;
        // 0x38f04c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f048) {
            ctx->pc = 0x38F634u;
            goto label_38f634;
        }
    }
    ctx->pc = 0x38F050u;
label_38f050:
    // 0x38f050: 0x1a200016  blez        $s1, . + 4 + (0x16 << 2)
label_38f054:
    if (ctx->pc == 0x38F054u) {
        ctx->pc = 0x38F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F050u;
        // 0x38f054: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F058u;
        goto label_38f058;
    }
    ctx->pc = 0x38F050u;
    {
        const bool branch_taken_0x38f050 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x38F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F050u;
        // 0x38f054: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f050) {
            ctx->pc = 0x38F0ACu;
            goto label_38f0ac;
        }
    }
    ctx->pc = 0x38F058u;
label_38f058:
    // 0x38f058: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x38f058u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_38f05c:
    // 0x38f05c: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x38f05cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_38f060:
    // 0x38f060: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x38f060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_38f064:
    // 0x38f064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f068:
    // 0x38f068: 0x40f809  jalr        $v0
label_38f06c:
    if (ctx->pc == 0x38F06Cu) {
        ctx->pc = 0x38F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F068u;
        // 0x38f06c: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F070u;
        goto label_38f070;
    }
    ctx->pc = 0x38F068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F070u);
        ctx->pc = 0x38F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F068u;
        // 0x38f06c: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F068u, 0x38F070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F070u;
label_38f070:
    // 0x38f070: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_38f074:
    if (ctx->pc == 0x38F074u) {
        ctx->pc = 0x38F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F070u;
        // 0x38f074: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F078u;
        goto label_38f078;
    }
    ctx->pc = 0x38F070u;
    {
        const bool branch_taken_0x38f070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f070) {
            ctx->pc = 0x38F074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F070u;
            // 0x38f074: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F0A8u;
            goto label_38f0a8;
        }
    }
    ctx->pc = 0x38F078u;
label_38f078:
    // 0x38f078: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38f07c:
    // 0x38f07c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38f080:
    // 0x38f080: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38f080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_38f084:
    // 0x38f084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38f084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f088:
    // 0x38f088: 0xc1035f6  jal         func_40D7D8
label_38f08c:
    if (ctx->pc == 0x38F08Cu) {
        ctx->pc = 0x38F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F088u;
        // 0x38f08c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F090u;
        goto label_38f090;
    }
    ctx->pc = 0x38F088u;
    SET_GPR_U32(ctx, 31, 0x38F090u);
    ctx->pc = 0x38F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F088u;
    // 0x38f08c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38F088u, 0x38F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F090u;
label_38f090:
    // 0x38f090: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38f094:
    // 0x38f094: 0xc103628  jal         func_40D8A0
label_38f098:
    if (ctx->pc == 0x38F098u) {
        ctx->pc = 0x38F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F094u;
        // 0x38f098: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F09Cu;
        goto label_38f09c;
    }
    ctx->pc = 0x38F094u;
    SET_GPR_U32(ctx, 31, 0x38F09Cu);
    ctx->pc = 0x38F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F094u;
    // 0x38f098: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38F094u, 0x38F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F09Cu;
label_38f09c:
    // 0x38f09c: 0x10000004  b           . + 4 + (0x4 << 2)
label_38f0a0:
    if (ctx->pc == 0x38F0A0u) {
        ctx->pc = 0x38F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F09Cu;
        // 0x38f0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0A4u;
        goto label_38f0a4;
    }
    ctx->pc = 0x38F09Cu;
    {
        const bool branch_taken_0x38f09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F09Cu;
        // 0x38f0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f09c) {
            ctx->pc = 0x38F0B0u;
            goto label_38f0b0;
        }
    }
    ctx->pc = 0x38F0A4u;
label_38f0a4:
    // 0x38f0a4: 0x0  nop
    ctx->pc = 0x38f0a4u;
    // NOP
label_38f0a8:
    // 0x38f0a8: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x38f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
label_38f0ac:
    // 0x38f0ac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x38f0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38f0b0:
    // 0x38f0b0: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_38f0b4:
    if (ctx->pc == 0x38F0B4u) {
        ctx->pc = 0x38F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0B0u;
        // 0x38f0b4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0B8u;
        goto label_38f0b8;
    }
    ctx->pc = 0x38F0B0u;
    {
        const bool branch_taken_0x38f0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0B0u;
        // 0x38f0b4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f0b0) {
            ctx->pc = 0x38F188u;
            goto label_38f188;
        }
    }
    ctx->pc = 0x38F0B8u;
label_38f0b8:
    // 0x38f0b8: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x38f0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38f0bc:
    // 0x38f0bc: 0x52400139  beql        $s2, $zero, . + 4 + (0x139 << 2)
label_38f0c0:
    if (ctx->pc == 0x38F0C0u) {
        ctx->pc = 0x38F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0BCu;
        // 0x38f0c0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0C4u;
        goto label_38f0c4;
    }
    ctx->pc = 0x38F0BCu;
    {
        const bool branch_taken_0x38f0bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f0bc) {
            ctx->pc = 0x38F0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F0BCu;
            // 0x38f0c0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F5A4u;
            goto label_38f5a4;
        }
    }
    ctx->pc = 0x38F0C4u;
label_38f0c4:
    // 0x38f0c4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x38f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_38f0c8:
    // 0x38f0c8: 0x1840002a  blez        $v0, . + 4 + (0x2A << 2)
label_38f0cc:
    if (ctx->pc == 0x38F0CCu) {
        ctx->pc = 0x38F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0C8u;
        // 0x38f0cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0D0u;
        goto label_38f0d0;
    }
    ctx->pc = 0x38F0C8u;
    {
        const bool branch_taken_0x38f0c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0C8u;
        // 0x38f0cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f0c8) {
            ctx->pc = 0x38F174u;
            goto label_38f174;
        }
    }
    ctx->pc = 0x38F0D0u;
label_38f0d0:
    // 0x38f0d0: 0x111023  negu        $v0, $s1
    ctx->pc = 0x38f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_38f0d4:
    // 0x38f0d4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x38f0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_38f0d8:
    // 0x38f0d8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_38f0dc:
    if (ctx->pc == 0x38F0DCu) {
        ctx->pc = 0x38F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0D8u;
        // 0x38f0dc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0E0u;
        goto label_38f0e0;
    }
    ctx->pc = 0x38F0D8u;
    {
        const bool branch_taken_0x38f0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0D8u;
        // 0x38f0dc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f0d8) {
            ctx->pc = 0x38F138u;
            goto label_38f138;
        }
    }
    ctx->pc = 0x38F0E0u;
label_38f0e0:
    // 0x38f0e0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x38f0e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_38f0e4:
    // 0x38f0e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_38f0e8:
    if (ctx->pc == 0x38F0E8u) {
        ctx->pc = 0x38F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0E4u;
        // 0x38f0e8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0ECu;
        goto label_38f0ec;
    }
    ctx->pc = 0x38F0E4u;
    {
        const bool branch_taken_0x38f0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0E4u;
        // 0x38f0e8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f0e4) {
            ctx->pc = 0x38F11Cu;
            goto label_38f11c;
        }
    }
    ctx->pc = 0x38F0ECu;
label_38f0ec:
    // 0x38f0ec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_38f0f0:
    if (ctx->pc == 0x38F0F0u) {
        ctx->pc = 0x38F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0ECu;
        // 0x38f0f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F0F4u;
        goto label_38f0f4;
    }
    ctx->pc = 0x38F0ECu;
    {
        const bool branch_taken_0x38f0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f0ec) {
            ctx->pc = 0x38F0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F0ECu;
            // 0x38f0f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F10Cu;
            goto label_38f10c;
        }
    }
    ctx->pc = 0x38F0F4u;
label_38f0f4:
    // 0x38f0f4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x38f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38f0f8:
    // 0x38f0f8: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x38f0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_38f0fc:
    // 0x38f0fc: 0xc0e39c0  jal         func_38E700
label_38f100:
    if (ctx->pc == 0x38F100u) {
        ctx->pc = 0x38F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F0FCu;
        // 0x38f100: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F104u;
        goto label_38f104;
    }
    ctx->pc = 0x38F0FCu;
    SET_GPR_U32(ctx, 31, 0x38F104u);
    ctx->pc = 0x38F100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F0FCu;
    // 0x38f100: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F0FCu, 0x38F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F104u;
label_38f104:
    // 0x38f104: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x38f104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_38f108:
    // 0x38f108: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f10c:
    // 0x38f10c: 0xc0e39c0  jal         func_38E700
label_38f110:
    if (ctx->pc == 0x38F110u) {
        ctx->pc = 0x38F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F10Cu;
        // 0x38f110: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F114u;
        goto label_38f114;
    }
    ctx->pc = 0x38F10Cu;
    SET_GPR_U32(ctx, 31, 0x38F114u);
    ctx->pc = 0x38F110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F10Cu;
    // 0x38f110: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F10Cu, 0x38F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F114u;
label_38f114:
    // 0x38f114: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38f114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38f118:
    // 0x38f118: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x38f118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_38f11c:
    // 0x38f11c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f120:
    // 0x38f120: 0xc0e39c0  jal         func_38E700
label_38f124:
    if (ctx->pc == 0x38F124u) {
        ctx->pc = 0x38F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F120u;
        // 0x38f124: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F128u;
        goto label_38f128;
    }
    ctx->pc = 0x38F120u;
    SET_GPR_U32(ctx, 31, 0x38F128u);
    ctx->pc = 0x38F124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F120u;
    // 0x38f124: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F120u, 0x38F128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F128u;
label_38f128:
    // 0x38f128: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38f128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38f12c:
    // 0x38f12c: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_38f130:
    if (ctx->pc == 0x38F130u) {
        ctx->pc = 0x38F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F12Cu;
        // 0x38f130: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F134u;
        goto label_38f134;
    }
    ctx->pc = 0x38F12Cu;
    {
        const bool branch_taken_0x38f12c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F12Cu;
        // 0x38f130: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f12c) {
            ctx->pc = 0x38F174u;
            goto label_38f174;
        }
    }
    ctx->pc = 0x38F134u;
label_38f134:
    // 0x38f134: 0x0  nop
    ctx->pc = 0x38f134u;
    // NOP
label_38f138:
    // 0x38f138: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f13c:
    // 0x38f13c: 0xc0e39c0  jal         func_38E700
label_38f140:
    if (ctx->pc == 0x38F140u) {
        ctx->pc = 0x38F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F13Cu;
        // 0x38f140: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F144u;
        goto label_38f144;
    }
    ctx->pc = 0x38F13Cu;
    SET_GPR_U32(ctx, 31, 0x38F144u);
    ctx->pc = 0x38F140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F13Cu;
    // 0x38f140: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F13Cu, 0x38F144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F144u;
label_38f144:
    // 0x38f144: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x38f144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38f148:
    // 0x38f148: 0xc0e39c0  jal         func_38E700
label_38f14c:
    if (ctx->pc == 0x38F14Cu) {
        ctx->pc = 0x38F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F148u;
        // 0x38f14c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F150u;
        goto label_38f150;
    }
    ctx->pc = 0x38F148u;
    SET_GPR_U32(ctx, 31, 0x38F150u);
    ctx->pc = 0x38F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F148u;
    // 0x38f14c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F148u, 0x38F150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F150u;
label_38f150:
    // 0x38f150: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x38f150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38f154:
    // 0x38f154: 0xc0e39c0  jal         func_38E700
label_38f158:
    if (ctx->pc == 0x38F158u) {
        ctx->pc = 0x38F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F154u;
        // 0x38f158: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F15Cu;
        goto label_38f15c;
    }
    ctx->pc = 0x38F154u;
    SET_GPR_U32(ctx, 31, 0x38F15Cu);
    ctx->pc = 0x38F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F154u;
    // 0x38f158: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F154u, 0x38F15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F15Cu;
label_38f15c:
    // 0x38f15c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x38f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_38f160:
    // 0x38f160: 0xc0e39c0  jal         func_38E700
label_38f164:
    if (ctx->pc == 0x38F164u) {
        ctx->pc = 0x38F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F160u;
        // 0x38f164: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F168u;
        goto label_38f168;
    }
    ctx->pc = 0x38F160u;
    SET_GPR_U32(ctx, 31, 0x38F168u);
    ctx->pc = 0x38F164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F160u;
    // 0x38f164: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F160u, 0x38F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F168u;
label_38f168:
    // 0x38f168: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x38f168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_38f16c:
    // 0x38f16c: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
label_38f170:
    if (ctx->pc == 0x38F170u) {
        ctx->pc = 0x38F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F16Cu;
        // 0x38f170: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F174u;
        goto label_38f174;
    }
    ctx->pc = 0x38F16Cu;
    {
        const bool branch_taken_0x38f16c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F16Cu;
        // 0x38f170: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f16c) {
            ctx->pc = 0x38F138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f138;
        }
    }
    ctx->pc = 0x38F174u;
label_38f174:
    // 0x38f174: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38f174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_38f178:
    // 0x38f178: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38f178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38f17c:
    // 0x38f17c: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x38f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_38f180:
    // 0x38f180: 0x10000104  b           . + 4 + (0x104 << 2)
label_38f184:
    if (ctx->pc == 0x38F184u) {
        ctx->pc = 0x38F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F180u;
        // 0x38f184: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F188u;
        goto label_38f188;
    }
    ctx->pc = 0x38F180u;
    {
        const bool branch_taken_0x38f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F180u;
        // 0x38f184: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f180) {
            ctx->pc = 0x38F594u;
            goto label_38f594;
        }
    }
    ctx->pc = 0x38F188u;
label_38f188:
    // 0x38f188: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x38f188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_38f18c:
    // 0x38f18c: 0x2470e880  addiu       $s0, $v1, -0x1780
    ctx->pc = 0x38f18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_38f190:
    // 0x38f190: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x38f190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_38f194:
    // 0x38f194: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x38f194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_38f198:
    // 0x38f198: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x38f198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_38f19c:
    // 0x38f19c: 0x40f809  jalr        $v0
label_38f1a0:
    if (ctx->pc == 0x38F1A0u) {
        ctx->pc = 0x38F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F19Cu;
        // 0x38f1a0: 0x34a50501  ori         $a1, $a1, 0x501 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1281);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F1A4u;
        goto label_38f1a4;
    }
    ctx->pc = 0x38F19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F1A4u);
        ctx->pc = 0x38F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F19Cu;
        // 0x38f1a0: 0x34a50501  ori         $a1, $a1, 0x501 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1281);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F19Cu, 0x38F1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F1A4u;
label_38f1a4:
    // 0x38f1a4: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x38f1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_38f1a8:
    // 0x38f1a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38f1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f1ac:
    // 0x38f1ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x38f1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_38f1b0:
    // 0x38f1b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38f1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38f1b4:
    // 0x38f1b4: 0xc103468  jal         func_40D1A0
label_38f1b8:
    if (ctx->pc == 0x38F1B8u) {
        ctx->pc = 0x38F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1B4u;
        // 0x38f1b8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F1BCu;
        goto label_38f1bc;
    }
    ctx->pc = 0x38F1B4u;
    SET_GPR_U32(ctx, 31, 0x38F1BCu);
    ctx->pc = 0x38F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F1B4u;
    // 0x38f1b8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x38F1B4u, 0x38F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F1BCu;
label_38f1bc:
    // 0x38f1bc: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_38f1c0:
    if (ctx->pc == 0x38F1C0u) {
        ctx->pc = 0x38F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1BCu;
        // 0x38f1c0: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F1C4u;
        goto label_38f1c4;
    }
    ctx->pc = 0x38F1BCu;
    {
        const bool branch_taken_0x38f1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1BCu;
        // 0x38f1c0: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f1bc) {
            ctx->pc = 0x38F2A0u;
            goto label_38f2a0;
        }
    }
    ctx->pc = 0x38F1C4u;
label_38f1c4:
    // 0x38f1c4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x38f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_38f1c8:
    // 0x38f1c8: 0x40f809  jalr        $v0
label_38f1cc:
    if (ctx->pc == 0x38F1CCu) {
        ctx->pc = 0x38F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1C8u;
        // 0x38f1cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F1D0u;
        goto label_38f1d0;
    }
    ctx->pc = 0x38F1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F1D0u);
        ctx->pc = 0x38F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1C8u;
        // 0x38f1cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F1C8u, 0x38F1D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F1D0u;
label_38f1d0:
    // 0x38f1d0: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x38f1d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38f1d4:
    // 0x38f1d4: 0x524000f3  beql        $s2, $zero, . + 4 + (0xF3 << 2)
label_38f1d8:
    if (ctx->pc == 0x38F1D8u) {
        ctx->pc = 0x38F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1D4u;
        // 0x38f1d8: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F1DCu;
        goto label_38f1dc;
    }
    ctx->pc = 0x38F1D4u;
    {
        const bool branch_taken_0x38f1d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f1d4) {
            ctx->pc = 0x38F1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F1D4u;
            // 0x38f1d8: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F5A4u;
            goto label_38f5a4;
        }
    }
    ctx->pc = 0x38F1DCu;
label_38f1dc:
    // 0x38f1dc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x38f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_38f1e0:
    // 0x38f1e0: 0x1840002a  blez        $v0, . + 4 + (0x2A << 2)
label_38f1e4:
    if (ctx->pc == 0x38F1E4u) {
        ctx->pc = 0x38F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1E0u;
        // 0x38f1e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F1E8u;
        goto label_38f1e8;
    }
    ctx->pc = 0x38F1E0u;
    {
        const bool branch_taken_0x38f1e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1E0u;
        // 0x38f1e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f1e0) {
            ctx->pc = 0x38F28Cu;
            goto label_38f28c;
        }
    }
    ctx->pc = 0x38F1E8u;
label_38f1e8:
    // 0x38f1e8: 0x111023  negu        $v0, $s1
    ctx->pc = 0x38f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_38f1ec:
    // 0x38f1ec: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x38f1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_38f1f0:
    // 0x38f1f0: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_38f1f4:
    if (ctx->pc == 0x38F1F4u) {
        ctx->pc = 0x38F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1F0u;
        // 0x38f1f4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F1F8u;
        goto label_38f1f8;
    }
    ctx->pc = 0x38F1F0u;
    {
        const bool branch_taken_0x38f1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1F0u;
        // 0x38f1f4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f1f0) {
            ctx->pc = 0x38F250u;
            goto label_38f250;
        }
    }
    ctx->pc = 0x38F1F8u;
label_38f1f8:
    // 0x38f1f8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x38f1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_38f1fc:
    // 0x38f1fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_38f200:
    if (ctx->pc == 0x38F200u) {
        ctx->pc = 0x38F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1FCu;
        // 0x38f200: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F204u;
        goto label_38f204;
    }
    ctx->pc = 0x38F1FCu;
    {
        const bool branch_taken_0x38f1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F1FCu;
        // 0x38f200: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f1fc) {
            ctx->pc = 0x38F234u;
            goto label_38f234;
        }
    }
    ctx->pc = 0x38F204u;
label_38f204:
    // 0x38f204: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_38f208:
    if (ctx->pc == 0x38F208u) {
        ctx->pc = 0x38F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F204u;
        // 0x38f208: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F20Cu;
        goto label_38f20c;
    }
    ctx->pc = 0x38F204u;
    {
        const bool branch_taken_0x38f204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f204) {
            ctx->pc = 0x38F208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F204u;
            // 0x38f208: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F224u;
            goto label_38f224;
        }
    }
    ctx->pc = 0x38F20Cu;
label_38f20c:
    // 0x38f20c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x38f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38f210:
    // 0x38f210: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x38f210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_38f214:
    // 0x38f214: 0xc0e39c0  jal         func_38E700
label_38f218:
    if (ctx->pc == 0x38F218u) {
        ctx->pc = 0x38F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F214u;
        // 0x38f218: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F21Cu;
        goto label_38f21c;
    }
    ctx->pc = 0x38F214u;
    SET_GPR_U32(ctx, 31, 0x38F21Cu);
    ctx->pc = 0x38F218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F214u;
    // 0x38f218: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F214u, 0x38F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F21Cu;
label_38f21c:
    // 0x38f21c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x38f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_38f220:
    // 0x38f220: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f224:
    // 0x38f224: 0xc0e39c0  jal         func_38E700
label_38f228:
    if (ctx->pc == 0x38F228u) {
        ctx->pc = 0x38F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F224u;
        // 0x38f228: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F22Cu;
        goto label_38f22c;
    }
    ctx->pc = 0x38F224u;
    SET_GPR_U32(ctx, 31, 0x38F22Cu);
    ctx->pc = 0x38F228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F224u;
    // 0x38f228: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F224u, 0x38F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F22Cu;
label_38f22c:
    // 0x38f22c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38f230:
    // 0x38f230: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x38f230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_38f234:
    // 0x38f234: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f238:
    // 0x38f238: 0xc0e39c0  jal         func_38E700
label_38f23c:
    if (ctx->pc == 0x38F23Cu) {
        ctx->pc = 0x38F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F238u;
        // 0x38f23c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F240u;
        goto label_38f240;
    }
    ctx->pc = 0x38F238u;
    SET_GPR_U32(ctx, 31, 0x38F240u);
    ctx->pc = 0x38F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F238u;
    // 0x38f23c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F238u, 0x38F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F240u;
label_38f240:
    // 0x38f240: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38f240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38f244:
    // 0x38f244: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_38f248:
    if (ctx->pc == 0x38F248u) {
        ctx->pc = 0x38F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F244u;
        // 0x38f248: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F24Cu;
        goto label_38f24c;
    }
    ctx->pc = 0x38F244u;
    {
        const bool branch_taken_0x38f244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F244u;
        // 0x38f248: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f244) {
            ctx->pc = 0x38F28Cu;
            goto label_38f28c;
        }
    }
    ctx->pc = 0x38F24Cu;
label_38f24c:
    // 0x38f24c: 0x0  nop
    ctx->pc = 0x38f24cu;
    // NOP
label_38f250:
    // 0x38f250: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f254:
    // 0x38f254: 0xc0e39c0  jal         func_38E700
label_38f258:
    if (ctx->pc == 0x38F258u) {
        ctx->pc = 0x38F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F254u;
        // 0x38f258: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F25Cu;
        goto label_38f25c;
    }
    ctx->pc = 0x38F254u;
    SET_GPR_U32(ctx, 31, 0x38F25Cu);
    ctx->pc = 0x38F258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F254u;
    // 0x38f258: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F254u, 0x38F25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F25Cu;
label_38f25c:
    // 0x38f25c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x38f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38f260:
    // 0x38f260: 0xc0e39c0  jal         func_38E700
label_38f264:
    if (ctx->pc == 0x38F264u) {
        ctx->pc = 0x38F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F260u;
        // 0x38f264: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F268u;
        goto label_38f268;
    }
    ctx->pc = 0x38F260u;
    SET_GPR_U32(ctx, 31, 0x38F268u);
    ctx->pc = 0x38F264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F260u;
    // 0x38f264: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F260u, 0x38F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F268u;
label_38f268:
    // 0x38f268: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x38f268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38f26c:
    // 0x38f26c: 0xc0e39c0  jal         func_38E700
label_38f270:
    if (ctx->pc == 0x38F270u) {
        ctx->pc = 0x38F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F26Cu;
        // 0x38f270: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F274u;
        goto label_38f274;
    }
    ctx->pc = 0x38F26Cu;
    SET_GPR_U32(ctx, 31, 0x38F274u);
    ctx->pc = 0x38F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F26Cu;
    // 0x38f270: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F26Cu, 0x38F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F274u;
label_38f274:
    // 0x38f274: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x38f274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_38f278:
    // 0x38f278: 0xc0e39c0  jal         func_38E700
label_38f27c:
    if (ctx->pc == 0x38F27Cu) {
        ctx->pc = 0x38F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F278u;
        // 0x38f27c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F280u;
        goto label_38f280;
    }
    ctx->pc = 0x38F278u;
    SET_GPR_U32(ctx, 31, 0x38F280u);
    ctx->pc = 0x38F27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F278u;
    // 0x38f27c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F278u, 0x38F280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F280u;
label_38f280:
    // 0x38f280: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x38f280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_38f284:
    // 0x38f284: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
label_38f288:
    if (ctx->pc == 0x38F288u) {
        ctx->pc = 0x38F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F284u;
        // 0x38f288: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F28Cu;
        goto label_38f28c;
    }
    ctx->pc = 0x38F284u;
    {
        const bool branch_taken_0x38f284 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F284u;
        // 0x38f288: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f284) {
            ctx->pc = 0x38F250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f250;
        }
    }
    ctx->pc = 0x38F28Cu;
label_38f28c:
    // 0x38f28c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_38f290:
    // 0x38f290: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38f290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38f294:
    // 0x38f294: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x38f294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_38f298:
    // 0x38f298: 0x100000be  b           . + 4 + (0xBE << 2)
label_38f29c:
    if (ctx->pc == 0x38F29Cu) {
        ctx->pc = 0x38F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F298u;
        // 0x38f29c: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F2A0u;
        goto label_38f2a0;
    }
    ctx->pc = 0x38F298u;
    {
        const bool branch_taken_0x38f298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F298u;
        // 0x38f29c: 0x8c62010c  lw          $v0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f298) {
            ctx->pc = 0x38F594u;
            goto label_38f594;
        }
    }
    ctx->pc = 0x38F2A0u;
label_38f2a0:
    // 0x38f2a0: 0x184000d4  blez        $v0, . + 4 + (0xD4 << 2)
label_38f2a4:
    if (ctx->pc == 0x38F2A4u) {
        ctx->pc = 0x38F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2A0u;
        // 0x38f2a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F2A8u;
        goto label_38f2a8;
    }
    ctx->pc = 0x38F2A0u;
    {
        const bool branch_taken_0x38f2a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2A0u;
        // 0x38f2a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f2a0) {
            ctx->pc = 0x38F5F4u;
            goto label_38f5f4;
        }
    }
    ctx->pc = 0x38F2A8u;
label_38f2a8:
    // 0x38f2a8: 0x3c15fffc  lui         $s5, 0xFFFC
    ctx->pc = 0x38f2a8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65532 << 16));
label_38f2ac:
    // 0x38f2ac: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x38f2acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f2b0:
    // 0x38f2b0: 0x36b5b000  ori         $s5, $s5, 0xB000
    ctx->pc = 0x38f2b0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)45056);
label_38f2b4:
    // 0x38f2b4: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x38f2b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38f2b8:
    // 0x38f2b8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x38f2b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38f2bc:
    // 0x38f2bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x38f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38f2c0:
    // 0x38f2c0: 0x46300bb  bgezl       $v1, . + 4 + (0xBB << 2)
label_38f2c4:
    if (ctx->pc == 0x38F2C4u) {
        ctx->pc = 0x38F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2C0u;
        // 0x38f2c4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F2C8u;
        goto label_38f2c8;
    }
    ctx->pc = 0x38F2C0u;
    {
        const bool branch_taken_0x38f2c0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x38f2c0) {
            ctx->pc = 0x38F2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F2C0u;
            // 0x38f2c4: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F5B0u;
            goto label_38f5b0;
        }
    }
    ctx->pc = 0x38F2C8u;
label_38f2c8:
    // 0x38f2c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x38f2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_38f2cc:
    // 0x38f2cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x38f2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_38f2d0:
    // 0x38f2d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38f2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f2d4:
    // 0x38f2d4: 0xc103322  jal         func_40CC88
label_38f2d8:
    if (ctx->pc == 0x38F2D8u) {
        ctx->pc = 0x38F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2D4u;
        // 0x38f2d8: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F2DCu;
        goto label_38f2dc;
    }
    ctx->pc = 0x38F2D4u;
    SET_GPR_U32(ctx, 31, 0x38F2DCu);
    ctx->pc = 0x38F2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F2D4u;
    // 0x38f2d8: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x38F2D4u, 0x38F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F2DCu;
label_38f2dc:
    // 0x38f2dc: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_38f2e0:
    if (ctx->pc == 0x38F2E0u) {
        ctx->pc = 0x38F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2DCu;
        // 0x38f2e0: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F2E4u;
        goto label_38f2e4;
    }
    ctx->pc = 0x38F2DCu;
    {
        const bool branch_taken_0x38f2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2DCu;
        // 0x38f2e0: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f2dc) {
            ctx->pc = 0x38F3B4u;
            goto label_38f3b4;
        }
    }
    ctx->pc = 0x38F2E4u;
label_38f2e4:
    // 0x38f2e4: 0x8fc2010c  lw          $v0, 0x10C($fp)
    ctx->pc = 0x38f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
label_38f2e8:
    // 0x38f2e8: 0x40f809  jalr        $v0
label_38f2ec:
    if (ctx->pc == 0x38F2ECu) {
        ctx->pc = 0x38F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2E8u;
        // 0x38f2ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F2F0u;
        goto label_38f2f0;
    }
    ctx->pc = 0x38F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F2F0u);
        ctx->pc = 0x38F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2E8u;
        // 0x38f2ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F2E8u, 0x38F2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F2F0u;
label_38f2f0:
    // 0x38f2f0: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x38f2f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38f2f4:
    // 0x38f2f4: 0x524000ab  beql        $s2, $zero, . + 4 + (0xAB << 2)
label_38f2f8:
    if (ctx->pc == 0x38F2F8u) {
        ctx->pc = 0x38F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2F4u;
        // 0x38f2f8: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F2FCu;
        goto label_38f2fc;
    }
    ctx->pc = 0x38F2F4u;
    {
        const bool branch_taken_0x38f2f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f2f4) {
            ctx->pc = 0x38F2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F2F4u;
            // 0x38f2f8: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F5A4u;
            goto label_38f5a4;
        }
    }
    ctx->pc = 0x38F2FCu;
label_38f2fc:
    // 0x38f2fc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x38f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_38f300:
    // 0x38f300: 0x184000a2  blez        $v0, . + 4 + (0xA2 << 2)
label_38f304:
    if (ctx->pc == 0x38F304u) {
        ctx->pc = 0x38F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F300u;
        // 0x38f304: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F308u;
        goto label_38f308;
    }
    ctx->pc = 0x38F300u;
    {
        const bool branch_taken_0x38f300 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F300u;
        // 0x38f304: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f300) {
            ctx->pc = 0x38F58Cu;
            goto label_38f58c;
        }
    }
    ctx->pc = 0x38F308u;
label_38f308:
    // 0x38f308: 0x111023  negu        $v0, $s1
    ctx->pc = 0x38f308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_38f30c:
    // 0x38f30c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x38f30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_38f310:
    // 0x38f310: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_38f314:
    if (ctx->pc == 0x38F314u) {
        ctx->pc = 0x38F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F310u;
        // 0x38f314: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F318u;
        goto label_38f318;
    }
    ctx->pc = 0x38F310u;
    {
        const bool branch_taken_0x38f310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F310u;
        // 0x38f314: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f310) {
            ctx->pc = 0x38F370u;
            goto label_38f370;
        }
    }
    ctx->pc = 0x38F318u;
label_38f318:
    // 0x38f318: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x38f318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_38f31c:
    // 0x38f31c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_38f320:
    if (ctx->pc == 0x38F320u) {
        ctx->pc = 0x38F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F31Cu;
        // 0x38f320: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F324u;
        goto label_38f324;
    }
    ctx->pc = 0x38F31Cu;
    {
        const bool branch_taken_0x38f31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F31Cu;
        // 0x38f320: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f31c) {
            ctx->pc = 0x38F354u;
            goto label_38f354;
        }
    }
    ctx->pc = 0x38F324u;
label_38f324:
    // 0x38f324: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_38f328:
    if (ctx->pc == 0x38F328u) {
        ctx->pc = 0x38F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F324u;
        // 0x38f328: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F32Cu;
        goto label_38f32c;
    }
    ctx->pc = 0x38F324u;
    {
        const bool branch_taken_0x38f324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f324) {
            ctx->pc = 0x38F328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F324u;
            // 0x38f328: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F344u;
            goto label_38f344;
        }
    }
    ctx->pc = 0x38F32Cu;
label_38f32c:
    // 0x38f32c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x38f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38f330:
    // 0x38f330: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x38f330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_38f334:
    // 0x38f334: 0xc0e39c0  jal         func_38E700
label_38f338:
    if (ctx->pc == 0x38F338u) {
        ctx->pc = 0x38F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F334u;
        // 0x38f338: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F33Cu;
        goto label_38f33c;
    }
    ctx->pc = 0x38F334u;
    SET_GPR_U32(ctx, 31, 0x38F33Cu);
    ctx->pc = 0x38F338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F334u;
    // 0x38f338: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F334u, 0x38F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F33Cu;
label_38f33c:
    // 0x38f33c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x38f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_38f340:
    // 0x38f340: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f344:
    // 0x38f344: 0xc0e39c0  jal         func_38E700
label_38f348:
    if (ctx->pc == 0x38F348u) {
        ctx->pc = 0x38F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F344u;
        // 0x38f348: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F34Cu;
        goto label_38f34c;
    }
    ctx->pc = 0x38F344u;
    SET_GPR_U32(ctx, 31, 0x38F34Cu);
    ctx->pc = 0x38F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F344u;
    // 0x38f348: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F344u, 0x38F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F34Cu;
label_38f34c:
    // 0x38f34c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38f350:
    // 0x38f350: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x38f350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_38f354:
    // 0x38f354: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f358:
    // 0x38f358: 0xc0e39c0  jal         func_38E700
label_38f35c:
    if (ctx->pc == 0x38F35Cu) {
        ctx->pc = 0x38F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F358u;
        // 0x38f35c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F360u;
        goto label_38f360;
    }
    ctx->pc = 0x38F358u;
    SET_GPR_U32(ctx, 31, 0x38F360u);
    ctx->pc = 0x38F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F358u;
    // 0x38f35c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F358u, 0x38F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F360u;
label_38f360:
    // 0x38f360: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38f360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38f364:
    // 0x38f364: 0x12200089  beqz        $s1, . + 4 + (0x89 << 2)
label_38f368:
    if (ctx->pc == 0x38F368u) {
        ctx->pc = 0x38F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F364u;
        // 0x38f368: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F36Cu;
        goto label_38f36c;
    }
    ctx->pc = 0x38F364u;
    {
        const bool branch_taken_0x38f364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F364u;
        // 0x38f368: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f364) {
            ctx->pc = 0x38F58Cu;
            goto label_38f58c;
        }
    }
    ctx->pc = 0x38F36Cu;
label_38f36c:
    // 0x38f36c: 0x0  nop
    ctx->pc = 0x38f36cu;
    // NOP
label_38f370:
    // 0x38f370: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f374:
    // 0x38f374: 0xc0e39c0  jal         func_38E700
label_38f378:
    if (ctx->pc == 0x38F378u) {
        ctx->pc = 0x38F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F374u;
        // 0x38f378: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F37Cu;
        goto label_38f37c;
    }
    ctx->pc = 0x38F374u;
    SET_GPR_U32(ctx, 31, 0x38F37Cu);
    ctx->pc = 0x38F378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F374u;
    // 0x38f378: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F374u, 0x38F37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F37Cu;
label_38f37c:
    // 0x38f37c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x38f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38f380:
    // 0x38f380: 0xc0e39c0  jal         func_38E700
label_38f384:
    if (ctx->pc == 0x38F384u) {
        ctx->pc = 0x38F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F380u;
        // 0x38f384: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F388u;
        goto label_38f388;
    }
    ctx->pc = 0x38F380u;
    SET_GPR_U32(ctx, 31, 0x38F388u);
    ctx->pc = 0x38F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F380u;
    // 0x38f384: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F380u, 0x38F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F388u;
label_38f388:
    // 0x38f388: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x38f388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38f38c:
    // 0x38f38c: 0xc0e39c0  jal         func_38E700
label_38f390:
    if (ctx->pc == 0x38F390u) {
        ctx->pc = 0x38F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F38Cu;
        // 0x38f390: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F394u;
        goto label_38f394;
    }
    ctx->pc = 0x38F38Cu;
    SET_GPR_U32(ctx, 31, 0x38F394u);
    ctx->pc = 0x38F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F38Cu;
    // 0x38f390: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F38Cu, 0x38F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F394u;
label_38f394:
    // 0x38f394: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x38f394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_38f398:
    // 0x38f398: 0xc0e39c0  jal         func_38E700
label_38f39c:
    if (ctx->pc == 0x38F39Cu) {
        ctx->pc = 0x38F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F398u;
        // 0x38f39c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3A0u;
        goto label_38f3a0;
    }
    ctx->pc = 0x38F398u;
    SET_GPR_U32(ctx, 31, 0x38F3A0u);
    ctx->pc = 0x38F39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F398u;
    // 0x38f39c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F398u, 0x38F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F3A0u;
label_38f3a0:
    // 0x38f3a0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x38f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_38f3a4:
    // 0x38f3a4: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
label_38f3a8:
    if (ctx->pc == 0x38F3A8u) {
        ctx->pc = 0x38F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3A4u;
        // 0x38f3a8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3ACu;
        goto label_38f3ac;
    }
    ctx->pc = 0x38F3A4u;
    {
        const bool branch_taken_0x38f3a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3A4u;
        // 0x38f3a8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f3a4) {
            ctx->pc = 0x38F370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f370;
        }
    }
    ctx->pc = 0x38F3ACu;
label_38f3ac:
    // 0x38f3ac: 0x10000078  b           . + 4 + (0x78 << 2)
label_38f3b0:
    if (ctx->pc == 0x38F3B0u) {
        ctx->pc = 0x38F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3ACu;
        // 0x38f3b0: 0x8fc2010c  lw          $v0, 0x10C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3B4u;
        goto label_38f3b4;
    }
    ctx->pc = 0x38F3ACu;
    {
        const bool branch_taken_0x38f3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3ACu;
        // 0x38f3b0: 0x8fc2010c  lw          $v0, 0x10C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f3ac) {
            ctx->pc = 0x38F590u;
            goto label_38f590;
        }
    }
    ctx->pc = 0x38F3B4u;
label_38f3b4:
    // 0x38f3b4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x38f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_38f3b8:
    // 0x38f3b8: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x38f3b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_38f3bc:
    // 0x38f3bc: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
label_38f3c0:
    if (ctx->pc == 0x38F3C0u) {
        ctx->pc = 0x38F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3BCu;
        // 0x38f3c0: 0xafb70010  sw          $s7, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3C4u;
        goto label_38f3c4;
    }
    ctx->pc = 0x38F3BCu;
    {
        const bool branch_taken_0x38f3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f3bc) {
            ctx->pc = 0x38F3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F3BCu;
            // 0x38f3c0: 0xafb70010  sw          $s7, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F4ACu;
            goto label_38f4ac;
        }
    }
    ctx->pc = 0x38F3C4u;
label_38f3c4:
    // 0x38f3c4: 0xc0e37d2  jal         func_38DF48
label_38f3c8:
    if (ctx->pc == 0x38F3C8u) {
        ctx->pc = 0x38F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3C4u;
        // 0x38f3c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3CCu;
        goto label_38f3cc;
    }
    ctx->pc = 0x38F3C4u;
    SET_GPR_U32(ctx, 31, 0x38F3CCu);
    ctx->pc = 0x38F3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F3C4u;
    // 0x38f3c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DF48u, 0x38F3C4u, 0x38F3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F3CCu;
label_38f3cc:
    // 0x38f3cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38f3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f3d0:
    // 0x38f3d0: 0x1600007e  bnez        $s0, . + 4 + (0x7E << 2)
label_38f3d4:
    if (ctx->pc == 0x38F3D4u) {
        ctx->pc = 0x38F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3D0u;
        // 0x38f3d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3D8u;
        goto label_38f3d8;
    }
    ctx->pc = 0x38F3D0u;
    {
        const bool branch_taken_0x38f3d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3D0u;
        // 0x38f3d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f3d0) {
            ctx->pc = 0x38F5CCu;
            goto label_38f5cc;
        }
    }
    ctx->pc = 0x38F3D8u;
label_38f3d8:
    // 0x38f3d8: 0x8fc2010c  lw          $v0, 0x10C($fp)
    ctx->pc = 0x38f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
label_38f3dc:
    // 0x38f3dc: 0x40f809  jalr        $v0
label_38f3e0:
    if (ctx->pc == 0x38F3E0u) {
        ctx->pc = 0x38F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3DCu;
        // 0x38f3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3E4u;
        goto label_38f3e4;
    }
    ctx->pc = 0x38F3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F3E4u);
        ctx->pc = 0x38F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3DCu;
        // 0x38f3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F3DCu, 0x38F3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F3E4u;
label_38f3e4:
    // 0x38f3e4: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x38f3e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38f3e8:
    // 0x38f3e8: 0x5240006e  beql        $s2, $zero, . + 4 + (0x6E << 2)
label_38f3ec:
    if (ctx->pc == 0x38F3ECu) {
        ctx->pc = 0x38F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3E8u;
        // 0x38f3ec: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3F0u;
        goto label_38f3f0;
    }
    ctx->pc = 0x38F3E8u;
    {
        const bool branch_taken_0x38f3e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f3e8) {
            ctx->pc = 0x38F3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F3E8u;
            // 0x38f3ec: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F5A4u;
            goto label_38f5a4;
        }
    }
    ctx->pc = 0x38F3F0u;
label_38f3f0:
    // 0x38f3f0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x38f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_38f3f4:
    // 0x38f3f4: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x38f3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_38f3f8:
    // 0x38f3f8: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_38f3fc:
    if (ctx->pc == 0x38F3FCu) {
        ctx->pc = 0x38F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3F8u;
        // 0x38f3fc: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F400u;
        goto label_38f400;
    }
    ctx->pc = 0x38F3F8u;
    {
        const bool branch_taken_0x38f3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3F8u;
        // 0x38f3fc: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f3f8) {
            ctx->pc = 0x38F58Cu;
            goto label_38f58c;
        }
    }
    ctx->pc = 0x38F400u;
label_38f400:
    // 0x38f400: 0x111023  negu        $v0, $s1
    ctx->pc = 0x38f400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_38f404:
    // 0x38f404: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x38f404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_38f408:
    // 0x38f408: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_38f40c:
    if (ctx->pc == 0x38F40Cu) {
        ctx->pc = 0x38F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F408u;
        // 0x38f40c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F410u;
        goto label_38f410;
    }
    ctx->pc = 0x38F408u;
    {
        const bool branch_taken_0x38f408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F408u;
        // 0x38f40c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f408) {
            ctx->pc = 0x38F468u;
            goto label_38f468;
        }
    }
    ctx->pc = 0x38F410u;
label_38f410:
    // 0x38f410: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x38f410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_38f414:
    // 0x38f414: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_38f418:
    if (ctx->pc == 0x38F418u) {
        ctx->pc = 0x38F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F414u;
        // 0x38f418: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F41Cu;
        goto label_38f41c;
    }
    ctx->pc = 0x38F414u;
    {
        const bool branch_taken_0x38f414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F414u;
        // 0x38f418: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f414) {
            ctx->pc = 0x38F44Cu;
            goto label_38f44c;
        }
    }
    ctx->pc = 0x38F41Cu;
label_38f41c:
    // 0x38f41c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_38f420:
    if (ctx->pc == 0x38F420u) {
        ctx->pc = 0x38F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F41Cu;
        // 0x38f420: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F424u;
        goto label_38f424;
    }
    ctx->pc = 0x38F41Cu;
    {
        const bool branch_taken_0x38f41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f41c) {
            ctx->pc = 0x38F420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F41Cu;
            // 0x38f420: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F43Cu;
            goto label_38f43c;
        }
    }
    ctx->pc = 0x38F424u;
label_38f424:
    // 0x38f424: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x38f424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38f428:
    // 0x38f428: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x38f428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_38f42c:
    // 0x38f42c: 0xc0e39c0  jal         func_38E700
label_38f430:
    if (ctx->pc == 0x38F430u) {
        ctx->pc = 0x38F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F42Cu;
        // 0x38f430: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F434u;
        goto label_38f434;
    }
    ctx->pc = 0x38F42Cu;
    SET_GPR_U32(ctx, 31, 0x38F434u);
    ctx->pc = 0x38F430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F42Cu;
    // 0x38f430: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F42Cu, 0x38F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F434u;
label_38f434:
    // 0x38f434: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x38f434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_38f438:
    // 0x38f438: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f43c:
    // 0x38f43c: 0xc0e39c0  jal         func_38E700
label_38f440:
    if (ctx->pc == 0x38F440u) {
        ctx->pc = 0x38F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F43Cu;
        // 0x38f440: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F444u;
        goto label_38f444;
    }
    ctx->pc = 0x38F43Cu;
    SET_GPR_U32(ctx, 31, 0x38F444u);
    ctx->pc = 0x38F440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F43Cu;
    // 0x38f440: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F43Cu, 0x38F444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F444u;
label_38f444:
    // 0x38f444: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38f444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38f448:
    // 0x38f448: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x38f448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_38f44c:
    // 0x38f44c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f450:
    // 0x38f450: 0xc0e39c0  jal         func_38E700
label_38f454:
    if (ctx->pc == 0x38F454u) {
        ctx->pc = 0x38F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F450u;
        // 0x38f454: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F458u;
        goto label_38f458;
    }
    ctx->pc = 0x38F450u;
    SET_GPR_U32(ctx, 31, 0x38F458u);
    ctx->pc = 0x38F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F450u;
    // 0x38f454: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F450u, 0x38F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F458u;
label_38f458:
    // 0x38f458: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38f458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38f45c:
    // 0x38f45c: 0x1220004b  beqz        $s1, . + 4 + (0x4B << 2)
label_38f460:
    if (ctx->pc == 0x38F460u) {
        ctx->pc = 0x38F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F45Cu;
        // 0x38f460: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F464u;
        goto label_38f464;
    }
    ctx->pc = 0x38F45Cu;
    {
        const bool branch_taken_0x38f45c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F45Cu;
        // 0x38f460: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f45c) {
            ctx->pc = 0x38F58Cu;
            goto label_38f58c;
        }
    }
    ctx->pc = 0x38F464u;
label_38f464:
    // 0x38f464: 0x0  nop
    ctx->pc = 0x38f464u;
    // NOP
label_38f468:
    // 0x38f468: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f46c:
    // 0x38f46c: 0xc0e39c0  jal         func_38E700
label_38f470:
    if (ctx->pc == 0x38F470u) {
        ctx->pc = 0x38F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F46Cu;
        // 0x38f470: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F474u;
        goto label_38f474;
    }
    ctx->pc = 0x38F46Cu;
    SET_GPR_U32(ctx, 31, 0x38F474u);
    ctx->pc = 0x38F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F46Cu;
    // 0x38f470: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F46Cu, 0x38F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F474u;
label_38f474:
    // 0x38f474: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x38f474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38f478:
    // 0x38f478: 0xc0e39c0  jal         func_38E700
label_38f47c:
    if (ctx->pc == 0x38F47Cu) {
        ctx->pc = 0x38F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F478u;
        // 0x38f47c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F480u;
        goto label_38f480;
    }
    ctx->pc = 0x38F478u;
    SET_GPR_U32(ctx, 31, 0x38F480u);
    ctx->pc = 0x38F47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F478u;
    // 0x38f47c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F478u, 0x38F480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F480u;
label_38f480:
    // 0x38f480: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x38f480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38f484:
    // 0x38f484: 0xc0e39c0  jal         func_38E700
label_38f488:
    if (ctx->pc == 0x38F488u) {
        ctx->pc = 0x38F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F484u;
        // 0x38f488: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F48Cu;
        goto label_38f48c;
    }
    ctx->pc = 0x38F484u;
    SET_GPR_U32(ctx, 31, 0x38F48Cu);
    ctx->pc = 0x38F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F484u;
    // 0x38f488: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F484u, 0x38F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F48Cu;
label_38f48c:
    // 0x38f48c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x38f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_38f490:
    // 0x38f490: 0xc0e39c0  jal         func_38E700
label_38f494:
    if (ctx->pc == 0x38F494u) {
        ctx->pc = 0x38F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F490u;
        // 0x38f494: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F498u;
        goto label_38f498;
    }
    ctx->pc = 0x38F490u;
    SET_GPR_U32(ctx, 31, 0x38F498u);
    ctx->pc = 0x38F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F490u;
    // 0x38f494: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F490u, 0x38F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F498u;
label_38f498:
    // 0x38f498: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x38f498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_38f49c:
    // 0x38f49c: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
label_38f4a0:
    if (ctx->pc == 0x38F4A0u) {
        ctx->pc = 0x38F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F49Cu;
        // 0x38f4a0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4A4u;
        goto label_38f4a4;
    }
    ctx->pc = 0x38F49Cu;
    {
        const bool branch_taken_0x38f49c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F49Cu;
        // 0x38f4a0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f49c) {
            ctx->pc = 0x38F468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f468;
        }
    }
    ctx->pc = 0x38F4A4u;
label_38f4a4:
    // 0x38f4a4: 0x1000003a  b           . + 4 + (0x3A << 2)
label_38f4a8:
    if (ctx->pc == 0x38F4A8u) {
        ctx->pc = 0x38F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4A4u;
        // 0x38f4a8: 0x8fc2010c  lw          $v0, 0x10C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4ACu;
        goto label_38f4ac;
    }
    ctx->pc = 0x38F4A4u;
    {
        const bool branch_taken_0x38f4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4A4u;
        // 0x38f4a8: 0x8fc2010c  lw          $v0, 0x10C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f4a4) {
            ctx->pc = 0x38F590u;
            goto label_38f590;
        }
    }
    ctx->pc = 0x38F4ACu;
label_38f4ac:
    // 0x38f4ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38f4b0:
    // 0x38f4b0: 0xc1035f6  jal         func_40D7D8
label_38f4b4:
    if (ctx->pc == 0x38F4B4u) {
        ctx->pc = 0x38F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4B0u;
        // 0x38f4b4: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4B8u;
        goto label_38f4b8;
    }
    ctx->pc = 0x38F4B0u;
    SET_GPR_U32(ctx, 31, 0x38F4B8u);
    ctx->pc = 0x38F4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F4B0u;
    // 0x38f4b4: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38F4B0u, 0x38F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F4B8u;
label_38f4b8:
    // 0x38f4b8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x38f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_38f4bc:
    // 0x38f4bc: 0xc103628  jal         func_40D8A0
label_38f4c0:
    if (ctx->pc == 0x38F4C0u) {
        ctx->pc = 0x38F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4BCu;
        // 0x38f4c0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4C4u;
        goto label_38f4c4;
    }
    ctx->pc = 0x38F4BCu;
    SET_GPR_U32(ctx, 31, 0x38F4C4u);
    ctx->pc = 0x38F4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F4BCu;
    // 0x38f4c0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38F4BCu, 0x38F4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F4C4u;
label_38f4c4:
    // 0x38f4c4: 0x8fc3010c  lw          $v1, 0x10C($fp)
    ctx->pc = 0x38f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
label_38f4c8:
    // 0x38f4c8: 0x60f809  jalr        $v1
label_38f4cc:
    if (ctx->pc == 0x38F4CCu) {
        ctx->pc = 0x38F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4C8u;
        // 0x38f4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4D0u;
        goto label_38f4d0;
    }
    ctx->pc = 0x38F4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38F4D0u);
        ctx->pc = 0x38F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4C8u;
        // 0x38f4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F4C8u, 0x38F4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F4D0u;
label_38f4d0:
    // 0x38f4d0: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x38f4d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38f4d4:
    // 0x38f4d4: 0x52400033  beql        $s2, $zero, . + 4 + (0x33 << 2)
label_38f4d8:
    if (ctx->pc == 0x38F4D8u) {
        ctx->pc = 0x38F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4D4u;
        // 0x38f4d8: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4DCu;
        goto label_38f4dc;
    }
    ctx->pc = 0x38F4D4u;
    {
        const bool branch_taken_0x38f4d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f4d4) {
            ctx->pc = 0x38F4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F4D4u;
            // 0x38f4d8: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F5A4u;
            goto label_38f5a4;
        }
    }
    ctx->pc = 0x38F4DCu;
label_38f4dc:
    // 0x38f4dc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x38f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_38f4e0:
    // 0x38f4e0: 0x1840002a  blez        $v0, . + 4 + (0x2A << 2)
label_38f4e4:
    if (ctx->pc == 0x38F4E4u) {
        ctx->pc = 0x38F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4E0u;
        // 0x38f4e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4E8u;
        goto label_38f4e8;
    }
    ctx->pc = 0x38F4E0u;
    {
        const bool branch_taken_0x38f4e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4E0u;
        // 0x38f4e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f4e0) {
            ctx->pc = 0x38F58Cu;
            goto label_38f58c;
        }
    }
    ctx->pc = 0x38F4E8u;
label_38f4e8:
    // 0x38f4e8: 0x111023  negu        $v0, $s1
    ctx->pc = 0x38f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_38f4ec:
    // 0x38f4ec: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x38f4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_38f4f0:
    // 0x38f4f0: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_38f4f4:
    if (ctx->pc == 0x38F4F4u) {
        ctx->pc = 0x38F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4F0u;
        // 0x38f4f4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4F8u;
        goto label_38f4f8;
    }
    ctx->pc = 0x38F4F0u;
    {
        const bool branch_taken_0x38f4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4F0u;
        // 0x38f4f4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f4f0) {
            ctx->pc = 0x38F550u;
            goto label_38f550;
        }
    }
    ctx->pc = 0x38F4F8u;
label_38f4f8:
    // 0x38f4f8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x38f4f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_38f4fc:
    // 0x38f4fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_38f500:
    if (ctx->pc == 0x38F500u) {
        ctx->pc = 0x38F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4FCu;
        // 0x38f500: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F504u;
        goto label_38f504;
    }
    ctx->pc = 0x38F4FCu;
    {
        const bool branch_taken_0x38f4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4FCu;
        // 0x38f500: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f4fc) {
            ctx->pc = 0x38F538u;
            goto label_38f538;
        }
    }
    ctx->pc = 0x38F504u;
label_38f504:
    // 0x38f504: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_38f508:
    if (ctx->pc == 0x38F508u) {
        ctx->pc = 0x38F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F504u;
        // 0x38f508: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F50Cu;
        goto label_38f50c;
    }
    ctx->pc = 0x38F504u;
    {
        const bool branch_taken_0x38f504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f504) {
            ctx->pc = 0x38F508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F504u;
            // 0x38f508: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F528u;
            goto label_38f528;
        }
    }
    ctx->pc = 0x38F50Cu;
label_38f50c:
    // 0x38f50c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x38f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38f510:
    // 0x38f510: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x38f510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_38f514:
    // 0x38f514: 0xc0e39c0  jal         func_38E700
label_38f518:
    if (ctx->pc == 0x38F518u) {
        ctx->pc = 0x38F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F514u;
        // 0x38f518: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F51Cu;
        goto label_38f51c;
    }
    ctx->pc = 0x38F514u;
    SET_GPR_U32(ctx, 31, 0x38F51Cu);
    ctx->pc = 0x38F518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F514u;
    // 0x38f518: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F514u, 0x38F51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F51Cu;
label_38f51c:
    // 0x38f51c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x38f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_38f520:
    // 0x38f520: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f524:
    // 0x38f524: 0x0  nop
    ctx->pc = 0x38f524u;
    // NOP
label_38f528:
    // 0x38f528: 0xc0e39c0  jal         func_38E700
label_38f52c:
    if (ctx->pc == 0x38F52Cu) {
        ctx->pc = 0x38F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F528u;
        // 0x38f52c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F530u;
        goto label_38f530;
    }
    ctx->pc = 0x38F528u;
    SET_GPR_U32(ctx, 31, 0x38F530u);
    ctx->pc = 0x38F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F528u;
    // 0x38f52c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F528u, 0x38F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F530u;
label_38f530:
    // 0x38f530: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38f530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38f534:
    // 0x38f534: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x38f534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_38f538:
    // 0x38f538: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f53c:
    // 0x38f53c: 0xc0e39c0  jal         func_38E700
label_38f540:
    if (ctx->pc == 0x38F540u) {
        ctx->pc = 0x38F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F53Cu;
        // 0x38f540: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F544u;
        goto label_38f544;
    }
    ctx->pc = 0x38F53Cu;
    SET_GPR_U32(ctx, 31, 0x38F544u);
    ctx->pc = 0x38F540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F53Cu;
    // 0x38f540: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F53Cu, 0x38F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F544u;
label_38f544:
    // 0x38f544: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38f544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38f548:
    // 0x38f548: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_38f54c:
    if (ctx->pc == 0x38F54Cu) {
        ctx->pc = 0x38F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F548u;
        // 0x38f54c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F550u;
        goto label_38f550;
    }
    ctx->pc = 0x38F548u;
    {
        const bool branch_taken_0x38f548 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F548u;
        // 0x38f54c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f548) {
            ctx->pc = 0x38F58Cu;
            goto label_38f58c;
        }
    }
    ctx->pc = 0x38F550u;
label_38f550:
    // 0x38f550: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38f550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f554:
    // 0x38f554: 0xc0e39c0  jal         func_38E700
label_38f558:
    if (ctx->pc == 0x38F558u) {
        ctx->pc = 0x38F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F554u;
        // 0x38f558: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F55Cu;
        goto label_38f55c;
    }
    ctx->pc = 0x38F554u;
    SET_GPR_U32(ctx, 31, 0x38F55Cu);
    ctx->pc = 0x38F558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F554u;
    // 0x38f558: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F554u, 0x38F55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F55Cu;
label_38f55c:
    // 0x38f55c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x38f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38f560:
    // 0x38f560: 0xc0e39c0  jal         func_38E700
label_38f564:
    if (ctx->pc == 0x38F564u) {
        ctx->pc = 0x38F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F560u;
        // 0x38f564: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F568u;
        goto label_38f568;
    }
    ctx->pc = 0x38F560u;
    SET_GPR_U32(ctx, 31, 0x38F568u);
    ctx->pc = 0x38F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F560u;
    // 0x38f564: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F560u, 0x38F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F568u;
label_38f568:
    // 0x38f568: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x38f568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38f56c:
    // 0x38f56c: 0xc0e39c0  jal         func_38E700
label_38f570:
    if (ctx->pc == 0x38F570u) {
        ctx->pc = 0x38F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F56Cu;
        // 0x38f570: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F574u;
        goto label_38f574;
    }
    ctx->pc = 0x38F56Cu;
    SET_GPR_U32(ctx, 31, 0x38F574u);
    ctx->pc = 0x38F570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F56Cu;
    // 0x38f570: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F56Cu, 0x38F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F574u;
label_38f574:
    // 0x38f574: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x38f574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_38f578:
    // 0x38f578: 0xc0e39c0  jal         func_38E700
label_38f57c:
    if (ctx->pc == 0x38F57Cu) {
        ctx->pc = 0x38F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F578u;
        // 0x38f57c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F580u;
        goto label_38f580;
    }
    ctx->pc = 0x38F578u;
    SET_GPR_U32(ctx, 31, 0x38F580u);
    ctx->pc = 0x38F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F578u;
    // 0x38f57c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F578u, 0x38F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F580u;
label_38f580:
    // 0x38f580: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x38f580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_38f584:
    // 0x38f584: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
label_38f588:
    if (ctx->pc == 0x38F588u) {
        ctx->pc = 0x38F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F584u;
        // 0x38f588: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F58Cu;
        goto label_38f58c;
    }
    ctx->pc = 0x38F584u;
    {
        const bool branch_taken_0x38f584 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F584u;
        // 0x38f588: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f584) {
            ctx->pc = 0x38F550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f550;
        }
    }
    ctx->pc = 0x38F58Cu;
label_38f58c:
    // 0x38f58c: 0x8fc2010c  lw          $v0, 0x10C($fp)
    ctx->pc = 0x38f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
label_38f590:
    // 0x38f590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38f590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38f594:
    // 0x38f594: 0x40f809  jalr        $v0
label_38f598:
    if (ctx->pc == 0x38F598u) {
        ctx->pc = 0x38F59Cu;
        goto label_38f59c;
    }
    ctx->pc = 0x38F594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F59Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F594u, 0x38F59Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F59Cu;
label_38f59c:
    // 0x38f59c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x38f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_38f5a0:
    // 0x38f5a0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x38f5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_38f5a4:
    // 0x38f5a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38f5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f5a8:
    // 0x38f5a8: 0x10000022  b           . + 4 + (0x22 << 2)
label_38f5ac:
    if (ctx->pc == 0x38F5ACu) {
        ctx->pc = 0x38F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5A8u;
        // 0x38f5ac: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F5B0u;
        goto label_38f5b0;
    }
    ctx->pc = 0x38F5A8u;
    {
        const bool branch_taken_0x38f5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5A8u;
        // 0x38f5ac: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f5a8) {
            ctx->pc = 0x38F634u;
            goto label_38f634;
        }
    }
    ctx->pc = 0x38F5B0u;
label_38f5b0:
    // 0x38f5b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_38f5b4:
    // 0x38f5b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38f5b8:
    // 0x38f5b8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x38f5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38f5bc:
    // 0x38f5bc: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x38f5bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_38f5c0:
    // 0x38f5c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38f5c4:
    // 0x38f5c4: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x38f5c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
label_38f5c8:
    // 0x38f5c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38f5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38f5cc:
    // 0x38f5cc: 0xc0e3b14  jal         func_38EC50
label_38f5d0:
    if (ctx->pc == 0x38F5D0u) {
        ctx->pc = 0x38F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5CCu;
        // 0x38f5d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F5D4u;
        goto label_38f5d4;
    }
    ctx->pc = 0x38F5CCu;
    SET_GPR_U32(ctx, 31, 0x38F5D4u);
    ctx->pc = 0x38F5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F5CCu;
    // 0x38f5d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EC50u, 0x38F5CCu, 0x38F5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F5D4u;
label_38f5d4:
    // 0x38f5d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x38f5d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_38f5d8:
    // 0x38f5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f5dc:
    // 0x38f5dc: 0xc0e39c0  jal         func_38E700
label_38f5e0:
    if (ctx->pc == 0x38F5E0u) {
        ctx->pc = 0x38F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5DCu;
        // 0x38f5e0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F5E4u;
        goto label_38f5e4;
    }
    ctx->pc = 0x38F5DCu;
    SET_GPR_U32(ctx, 31, 0x38F5E4u);
    ctx->pc = 0x38F5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F5DCu;
    // 0x38f5e0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x38F5DCu, 0x38F5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F5E4u;
label_38f5e4:
    // 0x38f5e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x38f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_38f5e8:
    // 0x38f5e8: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x38f5e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_38f5ec:
    // 0x38f5ec: 0x5460ff34  bnel        $v1, $zero, . + 4 + (-0xCC << 2)
label_38f5f0:
    if (ctx->pc == 0x38F5F0u) {
        ctx->pc = 0x38F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5ECu;
        // 0x38f5f0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F5F4u;
        goto label_38f5f4;
    }
    ctx->pc = 0x38F5ECu;
    {
        const bool branch_taken_0x38f5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f5ec) {
            ctx->pc = 0x38F5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F5ECu;
            // 0x38f5f0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f2c0;
        }
    }
    ctx->pc = 0x38F5F4u;
label_38f5f4:
    // 0x38f5f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_38f5f8:
    // 0x38f5f8: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x38f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_38f5fc:
    // 0x38f5fc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x38f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_38f600:
    // 0x38f600: 0x40f809  jalr        $v0
label_38f604:
    if (ctx->pc == 0x38F604u) {
        ctx->pc = 0x38F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F600u;
        // 0x38f604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F608u;
        goto label_38f608;
    }
    ctx->pc = 0x38F600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F608u);
        ctx->pc = 0x38F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F600u;
        // 0x38f604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F600u, 0x38F608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F608u;
label_38f608:
    // 0x38f608: 0x1000000a  b           . + 4 + (0xA << 2)
label_38f60c:
    if (ctx->pc == 0x38F60Cu) {
        ctx->pc = 0x38F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F608u;
        // 0x38f60c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F610u;
        goto label_38f610;
    }
    ctx->pc = 0x38F608u;
    {
        const bool branch_taken_0x38f608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F608u;
        // 0x38f60c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f608) {
            ctx->pc = 0x38F634u;
            goto label_38f634;
        }
    }
    ctx->pc = 0x38F610u;
label_38f610:
    // 0x38f610: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38f614:
    // 0x38f614: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38f614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38f618:
    // 0x38f618: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x38f618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_38f61c:
    // 0x38f61c: 0xc1035f6  jal         func_40D7D8
label_38f620:
    if (ctx->pc == 0x38F620u) {
        ctx->pc = 0x38F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F61Cu;
        // 0x38f620: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F624u;
        goto label_38f624;
    }
    ctx->pc = 0x38F61Cu;
    SET_GPR_U32(ctx, 31, 0x38F624u);
    ctx->pc = 0x38F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F61Cu;
    // 0x38f620: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38F61Cu, 0x38F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F624u;
label_38f624:
    // 0x38f624: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x38f624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_38f628:
    // 0x38f628: 0xc103628  jal         func_40D8A0
label_38f62c:
    if (ctx->pc == 0x38F62Cu) {
        ctx->pc = 0x38F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F628u;
        // 0x38f62c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F630u;
        goto label_38f630;
    }
    ctx->pc = 0x38F628u;
    SET_GPR_U32(ctx, 31, 0x38F630u);
    ctx->pc = 0x38F62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F628u;
    // 0x38f62c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38F628u, 0x38F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F630u;
label_38f630:
    // 0x38f630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38f630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f634:
    // 0x38f634: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x38f634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_38f638:
    // 0x38f638: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x38f638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_38f63c:
    // 0x38f63c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x38f63cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38f640:
    // 0x38f640: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x38f640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38f644:
    // 0x38f644: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x38f644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38f648:
    // 0x38f648: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x38f648u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38f64c:
    // 0x38f64c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x38f64cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38f650:
    // 0x38f650: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x38f650u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38f654:
    // 0x38f654: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x38f654u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38f658:
    // 0x38f658: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38f658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38f65c:
    // 0x38f65c: 0x3e00008  jr          $ra
label_38f660:
    if (ctx->pc == 0x38F660u) {
        ctx->pc = 0x38F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F65Cu;
        // 0x38f660: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F664u;
        goto label_38f664;
    }
    ctx->pc = 0x38F65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F65Cu;
        // 0x38f660: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F664u;
label_38f664:
    // 0x38f664: 0x0  nop
    ctx->pc = 0x38f664u;
    // NOP
    ctx->pc = 0x38f668u;
}
