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

// Function: sub_0016BFC0
// Address: 0x16bfc0 - 0x16da70
void sub_0016BFC0_0x16bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BFC0_0x16bfc0");
#endif

    switch (ctx->pc) {
        case 0x16bfc0u: goto label_16bfc0;
        case 0x16bfc4u: goto label_16bfc4;
        case 0x16bfc8u: goto label_16bfc8;
        case 0x16bfccu: goto label_16bfcc;
        case 0x16bfd0u: goto label_16bfd0;
        case 0x16bfd4u: goto label_16bfd4;
        case 0x16bfd8u: goto label_16bfd8;
        case 0x16bfdcu: goto label_16bfdc;
        case 0x16bfe0u: goto label_16bfe0;
        case 0x16bfe4u: goto label_16bfe4;
        case 0x16bfe8u: goto label_16bfe8;
        case 0x16bfecu: goto label_16bfec;
        case 0x16bff0u: goto label_16bff0;
        case 0x16bff4u: goto label_16bff4;
        case 0x16bff8u: goto label_16bff8;
        case 0x16bffcu: goto label_16bffc;
        case 0x16c000u: goto label_16c000;
        case 0x16c004u: goto label_16c004;
        case 0x16c008u: goto label_16c008;
        case 0x16c00cu: goto label_16c00c;
        case 0x16c010u: goto label_16c010;
        case 0x16c014u: goto label_16c014;
        case 0x16c018u: goto label_16c018;
        case 0x16c01cu: goto label_16c01c;
        case 0x16c020u: goto label_16c020;
        case 0x16c024u: goto label_16c024;
        case 0x16c028u: goto label_16c028;
        case 0x16c02cu: goto label_16c02c;
        case 0x16c030u: goto label_16c030;
        case 0x16c034u: goto label_16c034;
        case 0x16c038u: goto label_16c038;
        case 0x16c03cu: goto label_16c03c;
        case 0x16c040u: goto label_16c040;
        case 0x16c044u: goto label_16c044;
        case 0x16c048u: goto label_16c048;
        case 0x16c04cu: goto label_16c04c;
        case 0x16c050u: goto label_16c050;
        case 0x16c054u: goto label_16c054;
        case 0x16c058u: goto label_16c058;
        case 0x16c05cu: goto label_16c05c;
        case 0x16c060u: goto label_16c060;
        case 0x16c064u: goto label_16c064;
        case 0x16c068u: goto label_16c068;
        case 0x16c06cu: goto label_16c06c;
        case 0x16c070u: goto label_16c070;
        case 0x16c074u: goto label_16c074;
        case 0x16c078u: goto label_16c078;
        case 0x16c07cu: goto label_16c07c;
        case 0x16c080u: goto label_16c080;
        case 0x16c084u: goto label_16c084;
        case 0x16c088u: goto label_16c088;
        case 0x16c08cu: goto label_16c08c;
        case 0x16c090u: goto label_16c090;
        case 0x16c094u: goto label_16c094;
        case 0x16c098u: goto label_16c098;
        case 0x16c09cu: goto label_16c09c;
        case 0x16c0a0u: goto label_16c0a0;
        case 0x16c0a4u: goto label_16c0a4;
        case 0x16c0a8u: goto label_16c0a8;
        case 0x16c0acu: goto label_16c0ac;
        case 0x16c0b0u: goto label_16c0b0;
        case 0x16c0b4u: goto label_16c0b4;
        case 0x16c0b8u: goto label_16c0b8;
        case 0x16c0bcu: goto label_16c0bc;
        case 0x16c0c0u: goto label_16c0c0;
        case 0x16c0c4u: goto label_16c0c4;
        case 0x16c0c8u: goto label_16c0c8;
        case 0x16c0ccu: goto label_16c0cc;
        case 0x16c0d0u: goto label_16c0d0;
        case 0x16c0d4u: goto label_16c0d4;
        case 0x16c0d8u: goto label_16c0d8;
        case 0x16c0dcu: goto label_16c0dc;
        case 0x16c0e0u: goto label_16c0e0;
        case 0x16c0e4u: goto label_16c0e4;
        case 0x16c0e8u: goto label_16c0e8;
        case 0x16c0ecu: goto label_16c0ec;
        case 0x16c0f0u: goto label_16c0f0;
        case 0x16c0f4u: goto label_16c0f4;
        case 0x16c0f8u: goto label_16c0f8;
        case 0x16c0fcu: goto label_16c0fc;
        case 0x16c100u: goto label_16c100;
        case 0x16c104u: goto label_16c104;
        case 0x16c108u: goto label_16c108;
        case 0x16c10cu: goto label_16c10c;
        case 0x16c110u: goto label_16c110;
        case 0x16c114u: goto label_16c114;
        case 0x16c118u: goto label_16c118;
        case 0x16c11cu: goto label_16c11c;
        case 0x16c120u: goto label_16c120;
        case 0x16c124u: goto label_16c124;
        case 0x16c128u: goto label_16c128;
        case 0x16c12cu: goto label_16c12c;
        case 0x16c130u: goto label_16c130;
        case 0x16c134u: goto label_16c134;
        case 0x16c138u: goto label_16c138;
        case 0x16c13cu: goto label_16c13c;
        case 0x16c140u: goto label_16c140;
        case 0x16c144u: goto label_16c144;
        case 0x16c148u: goto label_16c148;
        case 0x16c14cu: goto label_16c14c;
        case 0x16c150u: goto label_16c150;
        case 0x16c154u: goto label_16c154;
        case 0x16c158u: goto label_16c158;
        case 0x16c15cu: goto label_16c15c;
        case 0x16c160u: goto label_16c160;
        case 0x16c164u: goto label_16c164;
        case 0x16c168u: goto label_16c168;
        case 0x16c16cu: goto label_16c16c;
        case 0x16c170u: goto label_16c170;
        case 0x16c174u: goto label_16c174;
        case 0x16c178u: goto label_16c178;
        case 0x16c17cu: goto label_16c17c;
        case 0x16c180u: goto label_16c180;
        case 0x16c184u: goto label_16c184;
        case 0x16c188u: goto label_16c188;
        case 0x16c18cu: goto label_16c18c;
        case 0x16c190u: goto label_16c190;
        case 0x16c194u: goto label_16c194;
        case 0x16c198u: goto label_16c198;
        case 0x16c19cu: goto label_16c19c;
        case 0x16c1a0u: goto label_16c1a0;
        case 0x16c1a4u: goto label_16c1a4;
        case 0x16c1a8u: goto label_16c1a8;
        case 0x16c1acu: goto label_16c1ac;
        case 0x16c1b0u: goto label_16c1b0;
        case 0x16c1b4u: goto label_16c1b4;
        case 0x16c1b8u: goto label_16c1b8;
        case 0x16c1bcu: goto label_16c1bc;
        case 0x16c1c0u: goto label_16c1c0;
        case 0x16c1c4u: goto label_16c1c4;
        case 0x16c1c8u: goto label_16c1c8;
        case 0x16c1ccu: goto label_16c1cc;
        case 0x16c1d0u: goto label_16c1d0;
        case 0x16c1d4u: goto label_16c1d4;
        case 0x16c1d8u: goto label_16c1d8;
        case 0x16c1dcu: goto label_16c1dc;
        case 0x16c1e0u: goto label_16c1e0;
        case 0x16c1e4u: goto label_16c1e4;
        case 0x16c1e8u: goto label_16c1e8;
        case 0x16c1ecu: goto label_16c1ec;
        case 0x16c1f0u: goto label_16c1f0;
        case 0x16c1f4u: goto label_16c1f4;
        case 0x16c1f8u: goto label_16c1f8;
        case 0x16c1fcu: goto label_16c1fc;
        case 0x16c200u: goto label_16c200;
        case 0x16c204u: goto label_16c204;
        case 0x16c208u: goto label_16c208;
        case 0x16c20cu: goto label_16c20c;
        case 0x16c210u: goto label_16c210;
        case 0x16c214u: goto label_16c214;
        case 0x16c218u: goto label_16c218;
        case 0x16c21cu: goto label_16c21c;
        case 0x16c220u: goto label_16c220;
        case 0x16c224u: goto label_16c224;
        case 0x16c228u: goto label_16c228;
        case 0x16c22cu: goto label_16c22c;
        case 0x16c230u: goto label_16c230;
        case 0x16c234u: goto label_16c234;
        case 0x16c238u: goto label_16c238;
        case 0x16c23cu: goto label_16c23c;
        case 0x16c240u: goto label_16c240;
        case 0x16c244u: goto label_16c244;
        case 0x16c248u: goto label_16c248;
        case 0x16c24cu: goto label_16c24c;
        case 0x16c250u: goto label_16c250;
        case 0x16c254u: goto label_16c254;
        case 0x16c258u: goto label_16c258;
        case 0x16c25cu: goto label_16c25c;
        case 0x16c260u: goto label_16c260;
        case 0x16c264u: goto label_16c264;
        case 0x16c268u: goto label_16c268;
        case 0x16c26cu: goto label_16c26c;
        case 0x16c270u: goto label_16c270;
        case 0x16c274u: goto label_16c274;
        case 0x16c278u: goto label_16c278;
        case 0x16c27cu: goto label_16c27c;
        case 0x16c280u: goto label_16c280;
        case 0x16c284u: goto label_16c284;
        case 0x16c288u: goto label_16c288;
        case 0x16c28cu: goto label_16c28c;
        case 0x16c290u: goto label_16c290;
        case 0x16c294u: goto label_16c294;
        case 0x16c298u: goto label_16c298;
        case 0x16c29cu: goto label_16c29c;
        case 0x16c2a0u: goto label_16c2a0;
        case 0x16c2a4u: goto label_16c2a4;
        case 0x16c2a8u: goto label_16c2a8;
        case 0x16c2acu: goto label_16c2ac;
        case 0x16c2b0u: goto label_16c2b0;
        case 0x16c2b4u: goto label_16c2b4;
        case 0x16c2b8u: goto label_16c2b8;
        case 0x16c2bcu: goto label_16c2bc;
        case 0x16c2c0u: goto label_16c2c0;
        case 0x16c2c4u: goto label_16c2c4;
        case 0x16c2c8u: goto label_16c2c8;
        case 0x16c2ccu: goto label_16c2cc;
        case 0x16c2d0u: goto label_16c2d0;
        case 0x16c2d4u: goto label_16c2d4;
        case 0x16c2d8u: goto label_16c2d8;
        case 0x16c2dcu: goto label_16c2dc;
        case 0x16c2e0u: goto label_16c2e0;
        case 0x16c2e4u: goto label_16c2e4;
        case 0x16c2e8u: goto label_16c2e8;
        case 0x16c2ecu: goto label_16c2ec;
        case 0x16c2f0u: goto label_16c2f0;
        case 0x16c2f4u: goto label_16c2f4;
        case 0x16c2f8u: goto label_16c2f8;
        case 0x16c2fcu: goto label_16c2fc;
        case 0x16c300u: goto label_16c300;
        case 0x16c304u: goto label_16c304;
        case 0x16c308u: goto label_16c308;
        case 0x16c30cu: goto label_16c30c;
        case 0x16c310u: goto label_16c310;
        case 0x16c314u: goto label_16c314;
        case 0x16c318u: goto label_16c318;
        case 0x16c31cu: goto label_16c31c;
        case 0x16c320u: goto label_16c320;
        case 0x16c324u: goto label_16c324;
        case 0x16c328u: goto label_16c328;
        case 0x16c32cu: goto label_16c32c;
        case 0x16c330u: goto label_16c330;
        case 0x16c334u: goto label_16c334;
        case 0x16c338u: goto label_16c338;
        case 0x16c33cu: goto label_16c33c;
        case 0x16c340u: goto label_16c340;
        case 0x16c344u: goto label_16c344;
        case 0x16c348u: goto label_16c348;
        case 0x16c34cu: goto label_16c34c;
        case 0x16c350u: goto label_16c350;
        case 0x16c354u: goto label_16c354;
        case 0x16c358u: goto label_16c358;
        case 0x16c35cu: goto label_16c35c;
        case 0x16c360u: goto label_16c360;
        case 0x16c364u: goto label_16c364;
        case 0x16c368u: goto label_16c368;
        case 0x16c36cu: goto label_16c36c;
        case 0x16c370u: goto label_16c370;
        case 0x16c374u: goto label_16c374;
        case 0x16c378u: goto label_16c378;
        case 0x16c37cu: goto label_16c37c;
        case 0x16c380u: goto label_16c380;
        case 0x16c384u: goto label_16c384;
        case 0x16c388u: goto label_16c388;
        case 0x16c38cu: goto label_16c38c;
        case 0x16c390u: goto label_16c390;
        case 0x16c394u: goto label_16c394;
        case 0x16c398u: goto label_16c398;
        case 0x16c39cu: goto label_16c39c;
        case 0x16c3a0u: goto label_16c3a0;
        case 0x16c3a4u: goto label_16c3a4;
        case 0x16c3a8u: goto label_16c3a8;
        case 0x16c3acu: goto label_16c3ac;
        case 0x16c3b0u: goto label_16c3b0;
        case 0x16c3b4u: goto label_16c3b4;
        case 0x16c3b8u: goto label_16c3b8;
        case 0x16c3bcu: goto label_16c3bc;
        case 0x16c3c0u: goto label_16c3c0;
        case 0x16c3c4u: goto label_16c3c4;
        case 0x16c3c8u: goto label_16c3c8;
        case 0x16c3ccu: goto label_16c3cc;
        case 0x16c3d0u: goto label_16c3d0;
        case 0x16c3d4u: goto label_16c3d4;
        case 0x16c3d8u: goto label_16c3d8;
        case 0x16c3dcu: goto label_16c3dc;
        case 0x16c3e0u: goto label_16c3e0;
        case 0x16c3e4u: goto label_16c3e4;
        case 0x16c3e8u: goto label_16c3e8;
        case 0x16c3ecu: goto label_16c3ec;
        case 0x16c3f0u: goto label_16c3f0;
        case 0x16c3f4u: goto label_16c3f4;
        case 0x16c3f8u: goto label_16c3f8;
        case 0x16c3fcu: goto label_16c3fc;
        case 0x16c400u: goto label_16c400;
        case 0x16c404u: goto label_16c404;
        case 0x16c408u: goto label_16c408;
        case 0x16c40cu: goto label_16c40c;
        case 0x16c410u: goto label_16c410;
        case 0x16c414u: goto label_16c414;
        case 0x16c418u: goto label_16c418;
        case 0x16c41cu: goto label_16c41c;
        case 0x16c420u: goto label_16c420;
        case 0x16c424u: goto label_16c424;
        case 0x16c428u: goto label_16c428;
        case 0x16c42cu: goto label_16c42c;
        case 0x16c430u: goto label_16c430;
        case 0x16c434u: goto label_16c434;
        case 0x16c438u: goto label_16c438;
        case 0x16c43cu: goto label_16c43c;
        case 0x16c440u: goto label_16c440;
        case 0x16c444u: goto label_16c444;
        case 0x16c448u: goto label_16c448;
        case 0x16c44cu: goto label_16c44c;
        case 0x16c450u: goto label_16c450;
        case 0x16c454u: goto label_16c454;
        case 0x16c458u: goto label_16c458;
        case 0x16c45cu: goto label_16c45c;
        case 0x16c460u: goto label_16c460;
        case 0x16c464u: goto label_16c464;
        case 0x16c468u: goto label_16c468;
        case 0x16c46cu: goto label_16c46c;
        case 0x16c470u: goto label_16c470;
        case 0x16c474u: goto label_16c474;
        case 0x16c478u: goto label_16c478;
        case 0x16c47cu: goto label_16c47c;
        case 0x16c480u: goto label_16c480;
        case 0x16c484u: goto label_16c484;
        case 0x16c488u: goto label_16c488;
        case 0x16c48cu: goto label_16c48c;
        case 0x16c490u: goto label_16c490;
        case 0x16c494u: goto label_16c494;
        case 0x16c498u: goto label_16c498;
        case 0x16c49cu: goto label_16c49c;
        case 0x16c4a0u: goto label_16c4a0;
        case 0x16c4a4u: goto label_16c4a4;
        case 0x16c4a8u: goto label_16c4a8;
        case 0x16c4acu: goto label_16c4ac;
        case 0x16c4b0u: goto label_16c4b0;
        case 0x16c4b4u: goto label_16c4b4;
        case 0x16c4b8u: goto label_16c4b8;
        case 0x16c4bcu: goto label_16c4bc;
        case 0x16c4c0u: goto label_16c4c0;
        case 0x16c4c4u: goto label_16c4c4;
        case 0x16c4c8u: goto label_16c4c8;
        case 0x16c4ccu: goto label_16c4cc;
        case 0x16c4d0u: goto label_16c4d0;
        case 0x16c4d4u: goto label_16c4d4;
        case 0x16c4d8u: goto label_16c4d8;
        case 0x16c4dcu: goto label_16c4dc;
        case 0x16c4e0u: goto label_16c4e0;
        case 0x16c4e4u: goto label_16c4e4;
        case 0x16c4e8u: goto label_16c4e8;
        case 0x16c4ecu: goto label_16c4ec;
        case 0x16c4f0u: goto label_16c4f0;
        case 0x16c4f4u: goto label_16c4f4;
        case 0x16c4f8u: goto label_16c4f8;
        case 0x16c4fcu: goto label_16c4fc;
        case 0x16c500u: goto label_16c500;
        case 0x16c504u: goto label_16c504;
        case 0x16c508u: goto label_16c508;
        case 0x16c50cu: goto label_16c50c;
        case 0x16c510u: goto label_16c510;
        case 0x16c514u: goto label_16c514;
        case 0x16c518u: goto label_16c518;
        case 0x16c51cu: goto label_16c51c;
        case 0x16c520u: goto label_16c520;
        case 0x16c524u: goto label_16c524;
        case 0x16c528u: goto label_16c528;
        case 0x16c52cu: goto label_16c52c;
        case 0x16c530u: goto label_16c530;
        case 0x16c534u: goto label_16c534;
        case 0x16c538u: goto label_16c538;
        case 0x16c53cu: goto label_16c53c;
        case 0x16c540u: goto label_16c540;
        case 0x16c544u: goto label_16c544;
        case 0x16c548u: goto label_16c548;
        case 0x16c54cu: goto label_16c54c;
        case 0x16c550u: goto label_16c550;
        case 0x16c554u: goto label_16c554;
        case 0x16c558u: goto label_16c558;
        case 0x16c55cu: goto label_16c55c;
        case 0x16c560u: goto label_16c560;
        case 0x16c564u: goto label_16c564;
        case 0x16c568u: goto label_16c568;
        case 0x16c56cu: goto label_16c56c;
        case 0x16c570u: goto label_16c570;
        case 0x16c574u: goto label_16c574;
        case 0x16c578u: goto label_16c578;
        case 0x16c57cu: goto label_16c57c;
        case 0x16c580u: goto label_16c580;
        case 0x16c584u: goto label_16c584;
        case 0x16c588u: goto label_16c588;
        case 0x16c58cu: goto label_16c58c;
        case 0x16c590u: goto label_16c590;
        case 0x16c594u: goto label_16c594;
        case 0x16c598u: goto label_16c598;
        case 0x16c59cu: goto label_16c59c;
        case 0x16c5a0u: goto label_16c5a0;
        case 0x16c5a4u: goto label_16c5a4;
        case 0x16c5a8u: goto label_16c5a8;
        case 0x16c5acu: goto label_16c5ac;
        case 0x16c5b0u: goto label_16c5b0;
        case 0x16c5b4u: goto label_16c5b4;
        case 0x16c5b8u: goto label_16c5b8;
        case 0x16c5bcu: goto label_16c5bc;
        case 0x16c5c0u: goto label_16c5c0;
        case 0x16c5c4u: goto label_16c5c4;
        case 0x16c5c8u: goto label_16c5c8;
        case 0x16c5ccu: goto label_16c5cc;
        case 0x16c5d0u: goto label_16c5d0;
        case 0x16c5d4u: goto label_16c5d4;
        case 0x16c5d8u: goto label_16c5d8;
        case 0x16c5dcu: goto label_16c5dc;
        case 0x16c5e0u: goto label_16c5e0;
        case 0x16c5e4u: goto label_16c5e4;
        case 0x16c5e8u: goto label_16c5e8;
        case 0x16c5ecu: goto label_16c5ec;
        case 0x16c5f0u: goto label_16c5f0;
        case 0x16c5f4u: goto label_16c5f4;
        case 0x16c5f8u: goto label_16c5f8;
        case 0x16c5fcu: goto label_16c5fc;
        case 0x16c600u: goto label_16c600;
        case 0x16c604u: goto label_16c604;
        case 0x16c608u: goto label_16c608;
        case 0x16c60cu: goto label_16c60c;
        case 0x16c610u: goto label_16c610;
        case 0x16c614u: goto label_16c614;
        case 0x16c618u: goto label_16c618;
        case 0x16c61cu: goto label_16c61c;
        case 0x16c620u: goto label_16c620;
        case 0x16c624u: goto label_16c624;
        case 0x16c628u: goto label_16c628;
        case 0x16c62cu: goto label_16c62c;
        case 0x16c630u: goto label_16c630;
        case 0x16c634u: goto label_16c634;
        case 0x16c638u: goto label_16c638;
        case 0x16c63cu: goto label_16c63c;
        case 0x16c640u: goto label_16c640;
        case 0x16c644u: goto label_16c644;
        case 0x16c648u: goto label_16c648;
        case 0x16c64cu: goto label_16c64c;
        case 0x16c650u: goto label_16c650;
        case 0x16c654u: goto label_16c654;
        case 0x16c658u: goto label_16c658;
        case 0x16c65cu: goto label_16c65c;
        case 0x16c660u: goto label_16c660;
        case 0x16c664u: goto label_16c664;
        case 0x16c668u: goto label_16c668;
        case 0x16c66cu: goto label_16c66c;
        case 0x16c670u: goto label_16c670;
        case 0x16c674u: goto label_16c674;
        case 0x16c678u: goto label_16c678;
        case 0x16c67cu: goto label_16c67c;
        case 0x16c680u: goto label_16c680;
        case 0x16c684u: goto label_16c684;
        case 0x16c688u: goto label_16c688;
        case 0x16c68cu: goto label_16c68c;
        case 0x16c690u: goto label_16c690;
        case 0x16c694u: goto label_16c694;
        case 0x16c698u: goto label_16c698;
        case 0x16c69cu: goto label_16c69c;
        case 0x16c6a0u: goto label_16c6a0;
        case 0x16c6a4u: goto label_16c6a4;
        case 0x16c6a8u: goto label_16c6a8;
        case 0x16c6acu: goto label_16c6ac;
        case 0x16c6b0u: goto label_16c6b0;
        case 0x16c6b4u: goto label_16c6b4;
        case 0x16c6b8u: goto label_16c6b8;
        case 0x16c6bcu: goto label_16c6bc;
        case 0x16c6c0u: goto label_16c6c0;
        case 0x16c6c4u: goto label_16c6c4;
        case 0x16c6c8u: goto label_16c6c8;
        case 0x16c6ccu: goto label_16c6cc;
        case 0x16c6d0u: goto label_16c6d0;
        case 0x16c6d4u: goto label_16c6d4;
        case 0x16c6d8u: goto label_16c6d8;
        case 0x16c6dcu: goto label_16c6dc;
        case 0x16c6e0u: goto label_16c6e0;
        case 0x16c6e4u: goto label_16c6e4;
        case 0x16c6e8u: goto label_16c6e8;
        case 0x16c6ecu: goto label_16c6ec;
        case 0x16c6f0u: goto label_16c6f0;
        case 0x16c6f4u: goto label_16c6f4;
        case 0x16c6f8u: goto label_16c6f8;
        case 0x16c6fcu: goto label_16c6fc;
        case 0x16c700u: goto label_16c700;
        case 0x16c704u: goto label_16c704;
        case 0x16c708u: goto label_16c708;
        case 0x16c70cu: goto label_16c70c;
        case 0x16c710u: goto label_16c710;
        case 0x16c714u: goto label_16c714;
        case 0x16c718u: goto label_16c718;
        case 0x16c71cu: goto label_16c71c;
        case 0x16c720u: goto label_16c720;
        case 0x16c724u: goto label_16c724;
        case 0x16c728u: goto label_16c728;
        case 0x16c72cu: goto label_16c72c;
        case 0x16c730u: goto label_16c730;
        case 0x16c734u: goto label_16c734;
        case 0x16c738u: goto label_16c738;
        case 0x16c73cu: goto label_16c73c;
        case 0x16c740u: goto label_16c740;
        case 0x16c744u: goto label_16c744;
        case 0x16c748u: goto label_16c748;
        case 0x16c74cu: goto label_16c74c;
        case 0x16c750u: goto label_16c750;
        case 0x16c754u: goto label_16c754;
        case 0x16c758u: goto label_16c758;
        case 0x16c75cu: goto label_16c75c;
        case 0x16c760u: goto label_16c760;
        case 0x16c764u: goto label_16c764;
        case 0x16c768u: goto label_16c768;
        case 0x16c76cu: goto label_16c76c;
        case 0x16c770u: goto label_16c770;
        case 0x16c774u: goto label_16c774;
        case 0x16c778u: goto label_16c778;
        case 0x16c77cu: goto label_16c77c;
        case 0x16c780u: goto label_16c780;
        case 0x16c784u: goto label_16c784;
        case 0x16c788u: goto label_16c788;
        case 0x16c78cu: goto label_16c78c;
        case 0x16c790u: goto label_16c790;
        case 0x16c794u: goto label_16c794;
        case 0x16c798u: goto label_16c798;
        case 0x16c79cu: goto label_16c79c;
        case 0x16c7a0u: goto label_16c7a0;
        case 0x16c7a4u: goto label_16c7a4;
        case 0x16c7a8u: goto label_16c7a8;
        case 0x16c7acu: goto label_16c7ac;
        case 0x16c7b0u: goto label_16c7b0;
        case 0x16c7b4u: goto label_16c7b4;
        case 0x16c7b8u: goto label_16c7b8;
        case 0x16c7bcu: goto label_16c7bc;
        case 0x16c7c0u: goto label_16c7c0;
        case 0x16c7c4u: goto label_16c7c4;
        case 0x16c7c8u: goto label_16c7c8;
        case 0x16c7ccu: goto label_16c7cc;
        case 0x16c7d0u: goto label_16c7d0;
        case 0x16c7d4u: goto label_16c7d4;
        case 0x16c7d8u: goto label_16c7d8;
        case 0x16c7dcu: goto label_16c7dc;
        case 0x16c7e0u: goto label_16c7e0;
        case 0x16c7e4u: goto label_16c7e4;
        case 0x16c7e8u: goto label_16c7e8;
        case 0x16c7ecu: goto label_16c7ec;
        case 0x16c7f0u: goto label_16c7f0;
        case 0x16c7f4u: goto label_16c7f4;
        case 0x16c7f8u: goto label_16c7f8;
        case 0x16c7fcu: goto label_16c7fc;
        case 0x16c800u: goto label_16c800;
        case 0x16c804u: goto label_16c804;
        case 0x16c808u: goto label_16c808;
        case 0x16c80cu: goto label_16c80c;
        case 0x16c810u: goto label_16c810;
        case 0x16c814u: goto label_16c814;
        case 0x16c818u: goto label_16c818;
        case 0x16c81cu: goto label_16c81c;
        case 0x16c820u: goto label_16c820;
        case 0x16c824u: goto label_16c824;
        case 0x16c828u: goto label_16c828;
        case 0x16c82cu: goto label_16c82c;
        case 0x16c830u: goto label_16c830;
        case 0x16c834u: goto label_16c834;
        case 0x16c838u: goto label_16c838;
        case 0x16c83cu: goto label_16c83c;
        case 0x16c840u: goto label_16c840;
        case 0x16c844u: goto label_16c844;
        case 0x16c848u: goto label_16c848;
        case 0x16c84cu: goto label_16c84c;
        case 0x16c850u: goto label_16c850;
        case 0x16c854u: goto label_16c854;
        case 0x16c858u: goto label_16c858;
        case 0x16c85cu: goto label_16c85c;
        case 0x16c860u: goto label_16c860;
        case 0x16c864u: goto label_16c864;
        case 0x16c868u: goto label_16c868;
        case 0x16c86cu: goto label_16c86c;
        case 0x16c870u: goto label_16c870;
        case 0x16c874u: goto label_16c874;
        case 0x16c878u: goto label_16c878;
        case 0x16c87cu: goto label_16c87c;
        case 0x16c880u: goto label_16c880;
        case 0x16c884u: goto label_16c884;
        case 0x16c888u: goto label_16c888;
        case 0x16c88cu: goto label_16c88c;
        case 0x16c890u: goto label_16c890;
        case 0x16c894u: goto label_16c894;
        case 0x16c898u: goto label_16c898;
        case 0x16c89cu: goto label_16c89c;
        case 0x16c8a0u: goto label_16c8a0;
        case 0x16c8a4u: goto label_16c8a4;
        case 0x16c8a8u: goto label_16c8a8;
        case 0x16c8acu: goto label_16c8ac;
        case 0x16c8b0u: goto label_16c8b0;
        case 0x16c8b4u: goto label_16c8b4;
        case 0x16c8b8u: goto label_16c8b8;
        case 0x16c8bcu: goto label_16c8bc;
        case 0x16c8c0u: goto label_16c8c0;
        case 0x16c8c4u: goto label_16c8c4;
        case 0x16c8c8u: goto label_16c8c8;
        case 0x16c8ccu: goto label_16c8cc;
        case 0x16c8d0u: goto label_16c8d0;
        case 0x16c8d4u: goto label_16c8d4;
        case 0x16c8d8u: goto label_16c8d8;
        case 0x16c8dcu: goto label_16c8dc;
        case 0x16c8e0u: goto label_16c8e0;
        case 0x16c8e4u: goto label_16c8e4;
        case 0x16c8e8u: goto label_16c8e8;
        case 0x16c8ecu: goto label_16c8ec;
        case 0x16c8f0u: goto label_16c8f0;
        case 0x16c8f4u: goto label_16c8f4;
        case 0x16c8f8u: goto label_16c8f8;
        case 0x16c8fcu: goto label_16c8fc;
        case 0x16c900u: goto label_16c900;
        case 0x16c904u: goto label_16c904;
        case 0x16c908u: goto label_16c908;
        case 0x16c90cu: goto label_16c90c;
        case 0x16c910u: goto label_16c910;
        case 0x16c914u: goto label_16c914;
        case 0x16c918u: goto label_16c918;
        case 0x16c91cu: goto label_16c91c;
        case 0x16c920u: goto label_16c920;
        case 0x16c924u: goto label_16c924;
        case 0x16c928u: goto label_16c928;
        case 0x16c92cu: goto label_16c92c;
        case 0x16c930u: goto label_16c930;
        case 0x16c934u: goto label_16c934;
        case 0x16c938u: goto label_16c938;
        case 0x16c93cu: goto label_16c93c;
        case 0x16c940u: goto label_16c940;
        case 0x16c944u: goto label_16c944;
        case 0x16c948u: goto label_16c948;
        case 0x16c94cu: goto label_16c94c;
        case 0x16c950u: goto label_16c950;
        case 0x16c954u: goto label_16c954;
        case 0x16c958u: goto label_16c958;
        case 0x16c95cu: goto label_16c95c;
        case 0x16c960u: goto label_16c960;
        case 0x16c964u: goto label_16c964;
        case 0x16c968u: goto label_16c968;
        case 0x16c96cu: goto label_16c96c;
        case 0x16c970u: goto label_16c970;
        case 0x16c974u: goto label_16c974;
        case 0x16c978u: goto label_16c978;
        case 0x16c97cu: goto label_16c97c;
        case 0x16c980u: goto label_16c980;
        case 0x16c984u: goto label_16c984;
        case 0x16c988u: goto label_16c988;
        case 0x16c98cu: goto label_16c98c;
        case 0x16c990u: goto label_16c990;
        case 0x16c994u: goto label_16c994;
        case 0x16c998u: goto label_16c998;
        case 0x16c99cu: goto label_16c99c;
        case 0x16c9a0u: goto label_16c9a0;
        case 0x16c9a4u: goto label_16c9a4;
        case 0x16c9a8u: goto label_16c9a8;
        case 0x16c9acu: goto label_16c9ac;
        case 0x16c9b0u: goto label_16c9b0;
        case 0x16c9b4u: goto label_16c9b4;
        case 0x16c9b8u: goto label_16c9b8;
        case 0x16c9bcu: goto label_16c9bc;
        case 0x16c9c0u: goto label_16c9c0;
        case 0x16c9c4u: goto label_16c9c4;
        case 0x16c9c8u: goto label_16c9c8;
        case 0x16c9ccu: goto label_16c9cc;
        case 0x16c9d0u: goto label_16c9d0;
        case 0x16c9d4u: goto label_16c9d4;
        case 0x16c9d8u: goto label_16c9d8;
        case 0x16c9dcu: goto label_16c9dc;
        case 0x16c9e0u: goto label_16c9e0;
        case 0x16c9e4u: goto label_16c9e4;
        case 0x16c9e8u: goto label_16c9e8;
        case 0x16c9ecu: goto label_16c9ec;
        case 0x16c9f0u: goto label_16c9f0;
        case 0x16c9f4u: goto label_16c9f4;
        case 0x16c9f8u: goto label_16c9f8;
        case 0x16c9fcu: goto label_16c9fc;
        case 0x16ca00u: goto label_16ca00;
        case 0x16ca04u: goto label_16ca04;
        case 0x16ca08u: goto label_16ca08;
        case 0x16ca0cu: goto label_16ca0c;
        case 0x16ca10u: goto label_16ca10;
        case 0x16ca14u: goto label_16ca14;
        case 0x16ca18u: goto label_16ca18;
        case 0x16ca1cu: goto label_16ca1c;
        case 0x16ca20u: goto label_16ca20;
        case 0x16ca24u: goto label_16ca24;
        case 0x16ca28u: goto label_16ca28;
        case 0x16ca2cu: goto label_16ca2c;
        case 0x16ca30u: goto label_16ca30;
        case 0x16ca34u: goto label_16ca34;
        case 0x16ca38u: goto label_16ca38;
        case 0x16ca3cu: goto label_16ca3c;
        case 0x16ca40u: goto label_16ca40;
        case 0x16ca44u: goto label_16ca44;
        case 0x16ca48u: goto label_16ca48;
        case 0x16ca4cu: goto label_16ca4c;
        case 0x16ca50u: goto label_16ca50;
        case 0x16ca54u: goto label_16ca54;
        case 0x16ca58u: goto label_16ca58;
        case 0x16ca5cu: goto label_16ca5c;
        case 0x16ca60u: goto label_16ca60;
        case 0x16ca64u: goto label_16ca64;
        case 0x16ca68u: goto label_16ca68;
        case 0x16ca6cu: goto label_16ca6c;
        case 0x16ca70u: goto label_16ca70;
        case 0x16ca74u: goto label_16ca74;
        case 0x16ca78u: goto label_16ca78;
        case 0x16ca7cu: goto label_16ca7c;
        case 0x16ca80u: goto label_16ca80;
        case 0x16ca84u: goto label_16ca84;
        case 0x16ca88u: goto label_16ca88;
        case 0x16ca8cu: goto label_16ca8c;
        case 0x16ca90u: goto label_16ca90;
        case 0x16ca94u: goto label_16ca94;
        case 0x16ca98u: goto label_16ca98;
        case 0x16ca9cu: goto label_16ca9c;
        case 0x16caa0u: goto label_16caa0;
        case 0x16caa4u: goto label_16caa4;
        case 0x16caa8u: goto label_16caa8;
        case 0x16caacu: goto label_16caac;
        case 0x16cab0u: goto label_16cab0;
        case 0x16cab4u: goto label_16cab4;
        case 0x16cab8u: goto label_16cab8;
        case 0x16cabcu: goto label_16cabc;
        case 0x16cac0u: goto label_16cac0;
        case 0x16cac4u: goto label_16cac4;
        case 0x16cac8u: goto label_16cac8;
        case 0x16caccu: goto label_16cacc;
        case 0x16cad0u: goto label_16cad0;
        case 0x16cad4u: goto label_16cad4;
        case 0x16cad8u: goto label_16cad8;
        case 0x16cadcu: goto label_16cadc;
        case 0x16cae0u: goto label_16cae0;
        case 0x16cae4u: goto label_16cae4;
        case 0x16cae8u: goto label_16cae8;
        case 0x16caecu: goto label_16caec;
        case 0x16caf0u: goto label_16caf0;
        case 0x16caf4u: goto label_16caf4;
        case 0x16caf8u: goto label_16caf8;
        case 0x16cafcu: goto label_16cafc;
        case 0x16cb00u: goto label_16cb00;
        case 0x16cb04u: goto label_16cb04;
        case 0x16cb08u: goto label_16cb08;
        case 0x16cb0cu: goto label_16cb0c;
        case 0x16cb10u: goto label_16cb10;
        case 0x16cb14u: goto label_16cb14;
        case 0x16cb18u: goto label_16cb18;
        case 0x16cb1cu: goto label_16cb1c;
        case 0x16cb20u: goto label_16cb20;
        case 0x16cb24u: goto label_16cb24;
        case 0x16cb28u: goto label_16cb28;
        case 0x16cb2cu: goto label_16cb2c;
        case 0x16cb30u: goto label_16cb30;
        case 0x16cb34u: goto label_16cb34;
        case 0x16cb38u: goto label_16cb38;
        case 0x16cb3cu: goto label_16cb3c;
        case 0x16cb40u: goto label_16cb40;
        case 0x16cb44u: goto label_16cb44;
        case 0x16cb48u: goto label_16cb48;
        case 0x16cb4cu: goto label_16cb4c;
        case 0x16cb50u: goto label_16cb50;
        case 0x16cb54u: goto label_16cb54;
        case 0x16cb58u: goto label_16cb58;
        case 0x16cb5cu: goto label_16cb5c;
        case 0x16cb60u: goto label_16cb60;
        case 0x16cb64u: goto label_16cb64;
        case 0x16cb68u: goto label_16cb68;
        case 0x16cb6cu: goto label_16cb6c;
        case 0x16cb70u: goto label_16cb70;
        case 0x16cb74u: goto label_16cb74;
        case 0x16cb78u: goto label_16cb78;
        case 0x16cb7cu: goto label_16cb7c;
        case 0x16cb80u: goto label_16cb80;
        case 0x16cb84u: goto label_16cb84;
        case 0x16cb88u: goto label_16cb88;
        case 0x16cb8cu: goto label_16cb8c;
        case 0x16cb90u: goto label_16cb90;
        case 0x16cb94u: goto label_16cb94;
        case 0x16cb98u: goto label_16cb98;
        case 0x16cb9cu: goto label_16cb9c;
        case 0x16cba0u: goto label_16cba0;
        case 0x16cba4u: goto label_16cba4;
        case 0x16cba8u: goto label_16cba8;
        case 0x16cbacu: goto label_16cbac;
        case 0x16cbb0u: goto label_16cbb0;
        case 0x16cbb4u: goto label_16cbb4;
        case 0x16cbb8u: goto label_16cbb8;
        case 0x16cbbcu: goto label_16cbbc;
        case 0x16cbc0u: goto label_16cbc0;
        case 0x16cbc4u: goto label_16cbc4;
        case 0x16cbc8u: goto label_16cbc8;
        case 0x16cbccu: goto label_16cbcc;
        case 0x16cbd0u: goto label_16cbd0;
        case 0x16cbd4u: goto label_16cbd4;
        case 0x16cbd8u: goto label_16cbd8;
        case 0x16cbdcu: goto label_16cbdc;
        case 0x16cbe0u: goto label_16cbe0;
        case 0x16cbe4u: goto label_16cbe4;
        case 0x16cbe8u: goto label_16cbe8;
        case 0x16cbecu: goto label_16cbec;
        case 0x16cbf0u: goto label_16cbf0;
        case 0x16cbf4u: goto label_16cbf4;
        case 0x16cbf8u: goto label_16cbf8;
        case 0x16cbfcu: goto label_16cbfc;
        case 0x16cc00u: goto label_16cc00;
        case 0x16cc04u: goto label_16cc04;
        case 0x16cc08u: goto label_16cc08;
        case 0x16cc0cu: goto label_16cc0c;
        case 0x16cc10u: goto label_16cc10;
        case 0x16cc14u: goto label_16cc14;
        case 0x16cc18u: goto label_16cc18;
        case 0x16cc1cu: goto label_16cc1c;
        case 0x16cc20u: goto label_16cc20;
        case 0x16cc24u: goto label_16cc24;
        case 0x16cc28u: goto label_16cc28;
        case 0x16cc2cu: goto label_16cc2c;
        case 0x16cc30u: goto label_16cc30;
        case 0x16cc34u: goto label_16cc34;
        case 0x16cc38u: goto label_16cc38;
        case 0x16cc3cu: goto label_16cc3c;
        case 0x16cc40u: goto label_16cc40;
        case 0x16cc44u: goto label_16cc44;
        case 0x16cc48u: goto label_16cc48;
        case 0x16cc4cu: goto label_16cc4c;
        case 0x16cc50u: goto label_16cc50;
        case 0x16cc54u: goto label_16cc54;
        case 0x16cc58u: goto label_16cc58;
        case 0x16cc5cu: goto label_16cc5c;
        case 0x16cc60u: goto label_16cc60;
        case 0x16cc64u: goto label_16cc64;
        case 0x16cc68u: goto label_16cc68;
        case 0x16cc6cu: goto label_16cc6c;
        case 0x16cc70u: goto label_16cc70;
        case 0x16cc74u: goto label_16cc74;
        case 0x16cc78u: goto label_16cc78;
        case 0x16cc7cu: goto label_16cc7c;
        case 0x16cc80u: goto label_16cc80;
        case 0x16cc84u: goto label_16cc84;
        case 0x16cc88u: goto label_16cc88;
        case 0x16cc8cu: goto label_16cc8c;
        case 0x16cc90u: goto label_16cc90;
        case 0x16cc94u: goto label_16cc94;
        case 0x16cc98u: goto label_16cc98;
        case 0x16cc9cu: goto label_16cc9c;
        case 0x16cca0u: goto label_16cca0;
        case 0x16cca4u: goto label_16cca4;
        case 0x16cca8u: goto label_16cca8;
        case 0x16ccacu: goto label_16ccac;
        case 0x16ccb0u: goto label_16ccb0;
        case 0x16ccb4u: goto label_16ccb4;
        case 0x16ccb8u: goto label_16ccb8;
        case 0x16ccbcu: goto label_16ccbc;
        case 0x16ccc0u: goto label_16ccc0;
        case 0x16ccc4u: goto label_16ccc4;
        case 0x16ccc8u: goto label_16ccc8;
        case 0x16ccccu: goto label_16cccc;
        case 0x16ccd0u: goto label_16ccd0;
        case 0x16ccd4u: goto label_16ccd4;
        case 0x16ccd8u: goto label_16ccd8;
        case 0x16ccdcu: goto label_16ccdc;
        case 0x16cce0u: goto label_16cce0;
        case 0x16cce4u: goto label_16cce4;
        case 0x16cce8u: goto label_16cce8;
        case 0x16ccecu: goto label_16ccec;
        case 0x16ccf0u: goto label_16ccf0;
        case 0x16ccf4u: goto label_16ccf4;
        case 0x16ccf8u: goto label_16ccf8;
        case 0x16ccfcu: goto label_16ccfc;
        case 0x16cd00u: goto label_16cd00;
        case 0x16cd04u: goto label_16cd04;
        case 0x16cd08u: goto label_16cd08;
        case 0x16cd0cu: goto label_16cd0c;
        case 0x16cd10u: goto label_16cd10;
        case 0x16cd14u: goto label_16cd14;
        case 0x16cd18u: goto label_16cd18;
        case 0x16cd1cu: goto label_16cd1c;
        case 0x16cd20u: goto label_16cd20;
        case 0x16cd24u: goto label_16cd24;
        case 0x16cd28u: goto label_16cd28;
        case 0x16cd2cu: goto label_16cd2c;
        case 0x16cd30u: goto label_16cd30;
        case 0x16cd34u: goto label_16cd34;
        case 0x16cd38u: goto label_16cd38;
        case 0x16cd3cu: goto label_16cd3c;
        case 0x16cd40u: goto label_16cd40;
        case 0x16cd44u: goto label_16cd44;
        case 0x16cd48u: goto label_16cd48;
        case 0x16cd4cu: goto label_16cd4c;
        case 0x16cd50u: goto label_16cd50;
        case 0x16cd54u: goto label_16cd54;
        case 0x16cd58u: goto label_16cd58;
        case 0x16cd5cu: goto label_16cd5c;
        case 0x16cd60u: goto label_16cd60;
        case 0x16cd64u: goto label_16cd64;
        case 0x16cd68u: goto label_16cd68;
        case 0x16cd6cu: goto label_16cd6c;
        case 0x16cd70u: goto label_16cd70;
        case 0x16cd74u: goto label_16cd74;
        case 0x16cd78u: goto label_16cd78;
        case 0x16cd7cu: goto label_16cd7c;
        case 0x16cd80u: goto label_16cd80;
        case 0x16cd84u: goto label_16cd84;
        case 0x16cd88u: goto label_16cd88;
        case 0x16cd8cu: goto label_16cd8c;
        case 0x16cd90u: goto label_16cd90;
        case 0x16cd94u: goto label_16cd94;
        case 0x16cd98u: goto label_16cd98;
        case 0x16cd9cu: goto label_16cd9c;
        case 0x16cda0u: goto label_16cda0;
        case 0x16cda4u: goto label_16cda4;
        case 0x16cda8u: goto label_16cda8;
        case 0x16cdacu: goto label_16cdac;
        case 0x16cdb0u: goto label_16cdb0;
        case 0x16cdb4u: goto label_16cdb4;
        case 0x16cdb8u: goto label_16cdb8;
        case 0x16cdbcu: goto label_16cdbc;
        case 0x16cdc0u: goto label_16cdc0;
        case 0x16cdc4u: goto label_16cdc4;
        case 0x16cdc8u: goto label_16cdc8;
        case 0x16cdccu: goto label_16cdcc;
        case 0x16cdd0u: goto label_16cdd0;
        case 0x16cdd4u: goto label_16cdd4;
        case 0x16cdd8u: goto label_16cdd8;
        case 0x16cddcu: goto label_16cddc;
        case 0x16cde0u: goto label_16cde0;
        case 0x16cde4u: goto label_16cde4;
        case 0x16cde8u: goto label_16cde8;
        case 0x16cdecu: goto label_16cdec;
        case 0x16cdf0u: goto label_16cdf0;
        case 0x16cdf4u: goto label_16cdf4;
        case 0x16cdf8u: goto label_16cdf8;
        case 0x16cdfcu: goto label_16cdfc;
        case 0x16ce00u: goto label_16ce00;
        case 0x16ce04u: goto label_16ce04;
        case 0x16ce08u: goto label_16ce08;
        case 0x16ce0cu: goto label_16ce0c;
        case 0x16ce10u: goto label_16ce10;
        case 0x16ce14u: goto label_16ce14;
        case 0x16ce18u: goto label_16ce18;
        case 0x16ce1cu: goto label_16ce1c;
        case 0x16ce20u: goto label_16ce20;
        case 0x16ce24u: goto label_16ce24;
        case 0x16ce28u: goto label_16ce28;
        case 0x16ce2cu: goto label_16ce2c;
        case 0x16ce30u: goto label_16ce30;
        case 0x16ce34u: goto label_16ce34;
        case 0x16ce38u: goto label_16ce38;
        case 0x16ce3cu: goto label_16ce3c;
        case 0x16ce40u: goto label_16ce40;
        case 0x16ce44u: goto label_16ce44;
        case 0x16ce48u: goto label_16ce48;
        case 0x16ce4cu: goto label_16ce4c;
        case 0x16ce50u: goto label_16ce50;
        case 0x16ce54u: goto label_16ce54;
        case 0x16ce58u: goto label_16ce58;
        case 0x16ce5cu: goto label_16ce5c;
        case 0x16ce60u: goto label_16ce60;
        case 0x16ce64u: goto label_16ce64;
        case 0x16ce68u: goto label_16ce68;
        case 0x16ce6cu: goto label_16ce6c;
        case 0x16ce70u: goto label_16ce70;
        case 0x16ce74u: goto label_16ce74;
        case 0x16ce78u: goto label_16ce78;
        case 0x16ce7cu: goto label_16ce7c;
        case 0x16ce80u: goto label_16ce80;
        case 0x16ce84u: goto label_16ce84;
        case 0x16ce88u: goto label_16ce88;
        case 0x16ce8cu: goto label_16ce8c;
        case 0x16ce90u: goto label_16ce90;
        case 0x16ce94u: goto label_16ce94;
        case 0x16ce98u: goto label_16ce98;
        case 0x16ce9cu: goto label_16ce9c;
        case 0x16cea0u: goto label_16cea0;
        case 0x16cea4u: goto label_16cea4;
        case 0x16cea8u: goto label_16cea8;
        case 0x16ceacu: goto label_16ceac;
        case 0x16ceb0u: goto label_16ceb0;
        case 0x16ceb4u: goto label_16ceb4;
        case 0x16ceb8u: goto label_16ceb8;
        case 0x16cebcu: goto label_16cebc;
        case 0x16cec0u: goto label_16cec0;
        case 0x16cec4u: goto label_16cec4;
        case 0x16cec8u: goto label_16cec8;
        case 0x16ceccu: goto label_16cecc;
        case 0x16ced0u: goto label_16ced0;
        case 0x16ced4u: goto label_16ced4;
        case 0x16ced8u: goto label_16ced8;
        case 0x16cedcu: goto label_16cedc;
        case 0x16cee0u: goto label_16cee0;
        case 0x16cee4u: goto label_16cee4;
        case 0x16cee8u: goto label_16cee8;
        case 0x16ceecu: goto label_16ceec;
        case 0x16cef0u: goto label_16cef0;
        case 0x16cef4u: goto label_16cef4;
        case 0x16cef8u: goto label_16cef8;
        case 0x16cefcu: goto label_16cefc;
        case 0x16cf00u: goto label_16cf00;
        case 0x16cf04u: goto label_16cf04;
        case 0x16cf08u: goto label_16cf08;
        case 0x16cf0cu: goto label_16cf0c;
        case 0x16cf10u: goto label_16cf10;
        case 0x16cf14u: goto label_16cf14;
        case 0x16cf18u: goto label_16cf18;
        case 0x16cf1cu: goto label_16cf1c;
        case 0x16cf20u: goto label_16cf20;
        case 0x16cf24u: goto label_16cf24;
        case 0x16cf28u: goto label_16cf28;
        case 0x16cf2cu: goto label_16cf2c;
        case 0x16cf30u: goto label_16cf30;
        case 0x16cf34u: goto label_16cf34;
        case 0x16cf38u: goto label_16cf38;
        case 0x16cf3cu: goto label_16cf3c;
        case 0x16cf40u: goto label_16cf40;
        case 0x16cf44u: goto label_16cf44;
        case 0x16cf48u: goto label_16cf48;
        case 0x16cf4cu: goto label_16cf4c;
        case 0x16cf50u: goto label_16cf50;
        case 0x16cf54u: goto label_16cf54;
        case 0x16cf58u: goto label_16cf58;
        case 0x16cf5cu: goto label_16cf5c;
        case 0x16cf60u: goto label_16cf60;
        case 0x16cf64u: goto label_16cf64;
        case 0x16cf68u: goto label_16cf68;
        case 0x16cf6cu: goto label_16cf6c;
        case 0x16cf70u: goto label_16cf70;
        case 0x16cf74u: goto label_16cf74;
        case 0x16cf78u: goto label_16cf78;
        case 0x16cf7cu: goto label_16cf7c;
        case 0x16cf80u: goto label_16cf80;
        case 0x16cf84u: goto label_16cf84;
        case 0x16cf88u: goto label_16cf88;
        case 0x16cf8cu: goto label_16cf8c;
        case 0x16cf90u: goto label_16cf90;
        case 0x16cf94u: goto label_16cf94;
        case 0x16cf98u: goto label_16cf98;
        case 0x16cf9cu: goto label_16cf9c;
        case 0x16cfa0u: goto label_16cfa0;
        case 0x16cfa4u: goto label_16cfa4;
        case 0x16cfa8u: goto label_16cfa8;
        case 0x16cfacu: goto label_16cfac;
        case 0x16cfb0u: goto label_16cfb0;
        case 0x16cfb4u: goto label_16cfb4;
        case 0x16cfb8u: goto label_16cfb8;
        case 0x16cfbcu: goto label_16cfbc;
        case 0x16cfc0u: goto label_16cfc0;
        case 0x16cfc4u: goto label_16cfc4;
        case 0x16cfc8u: goto label_16cfc8;
        case 0x16cfccu: goto label_16cfcc;
        case 0x16cfd0u: goto label_16cfd0;
        case 0x16cfd4u: goto label_16cfd4;
        case 0x16cfd8u: goto label_16cfd8;
        case 0x16cfdcu: goto label_16cfdc;
        case 0x16cfe0u: goto label_16cfe0;
        case 0x16cfe4u: goto label_16cfe4;
        case 0x16cfe8u: goto label_16cfe8;
        case 0x16cfecu: goto label_16cfec;
        case 0x16cff0u: goto label_16cff0;
        case 0x16cff4u: goto label_16cff4;
        case 0x16cff8u: goto label_16cff8;
        case 0x16cffcu: goto label_16cffc;
        case 0x16d000u: goto label_16d000;
        case 0x16d004u: goto label_16d004;
        case 0x16d008u: goto label_16d008;
        case 0x16d00cu: goto label_16d00c;
        case 0x16d010u: goto label_16d010;
        case 0x16d014u: goto label_16d014;
        case 0x16d018u: goto label_16d018;
        case 0x16d01cu: goto label_16d01c;
        case 0x16d020u: goto label_16d020;
        case 0x16d024u: goto label_16d024;
        case 0x16d028u: goto label_16d028;
        case 0x16d02cu: goto label_16d02c;
        case 0x16d030u: goto label_16d030;
        case 0x16d034u: goto label_16d034;
        case 0x16d038u: goto label_16d038;
        case 0x16d03cu: goto label_16d03c;
        case 0x16d040u: goto label_16d040;
        case 0x16d044u: goto label_16d044;
        case 0x16d048u: goto label_16d048;
        case 0x16d04cu: goto label_16d04c;
        case 0x16d050u: goto label_16d050;
        case 0x16d054u: goto label_16d054;
        case 0x16d058u: goto label_16d058;
        case 0x16d05cu: goto label_16d05c;
        case 0x16d060u: goto label_16d060;
        case 0x16d064u: goto label_16d064;
        case 0x16d068u: goto label_16d068;
        case 0x16d06cu: goto label_16d06c;
        case 0x16d070u: goto label_16d070;
        case 0x16d074u: goto label_16d074;
        case 0x16d078u: goto label_16d078;
        case 0x16d07cu: goto label_16d07c;
        case 0x16d080u: goto label_16d080;
        case 0x16d084u: goto label_16d084;
        case 0x16d088u: goto label_16d088;
        case 0x16d08cu: goto label_16d08c;
        case 0x16d090u: goto label_16d090;
        case 0x16d094u: goto label_16d094;
        case 0x16d098u: goto label_16d098;
        case 0x16d09cu: goto label_16d09c;
        case 0x16d0a0u: goto label_16d0a0;
        case 0x16d0a4u: goto label_16d0a4;
        case 0x16d0a8u: goto label_16d0a8;
        case 0x16d0acu: goto label_16d0ac;
        case 0x16d0b0u: goto label_16d0b0;
        case 0x16d0b4u: goto label_16d0b4;
        case 0x16d0b8u: goto label_16d0b8;
        case 0x16d0bcu: goto label_16d0bc;
        case 0x16d0c0u: goto label_16d0c0;
        case 0x16d0c4u: goto label_16d0c4;
        case 0x16d0c8u: goto label_16d0c8;
        case 0x16d0ccu: goto label_16d0cc;
        case 0x16d0d0u: goto label_16d0d0;
        case 0x16d0d4u: goto label_16d0d4;
        case 0x16d0d8u: goto label_16d0d8;
        case 0x16d0dcu: goto label_16d0dc;
        case 0x16d0e0u: goto label_16d0e0;
        case 0x16d0e4u: goto label_16d0e4;
        case 0x16d0e8u: goto label_16d0e8;
        case 0x16d0ecu: goto label_16d0ec;
        case 0x16d0f0u: goto label_16d0f0;
        case 0x16d0f4u: goto label_16d0f4;
        case 0x16d0f8u: goto label_16d0f8;
        case 0x16d0fcu: goto label_16d0fc;
        case 0x16d100u: goto label_16d100;
        case 0x16d104u: goto label_16d104;
        case 0x16d108u: goto label_16d108;
        case 0x16d10cu: goto label_16d10c;
        case 0x16d110u: goto label_16d110;
        case 0x16d114u: goto label_16d114;
        case 0x16d118u: goto label_16d118;
        case 0x16d11cu: goto label_16d11c;
        case 0x16d120u: goto label_16d120;
        case 0x16d124u: goto label_16d124;
        case 0x16d128u: goto label_16d128;
        case 0x16d12cu: goto label_16d12c;
        case 0x16d130u: goto label_16d130;
        case 0x16d134u: goto label_16d134;
        case 0x16d138u: goto label_16d138;
        case 0x16d13cu: goto label_16d13c;
        case 0x16d140u: goto label_16d140;
        case 0x16d144u: goto label_16d144;
        case 0x16d148u: goto label_16d148;
        case 0x16d14cu: goto label_16d14c;
        case 0x16d150u: goto label_16d150;
        case 0x16d154u: goto label_16d154;
        case 0x16d158u: goto label_16d158;
        case 0x16d15cu: goto label_16d15c;
        case 0x16d160u: goto label_16d160;
        case 0x16d164u: goto label_16d164;
        case 0x16d168u: goto label_16d168;
        case 0x16d16cu: goto label_16d16c;
        case 0x16d170u: goto label_16d170;
        case 0x16d174u: goto label_16d174;
        case 0x16d178u: goto label_16d178;
        case 0x16d17cu: goto label_16d17c;
        case 0x16d180u: goto label_16d180;
        case 0x16d184u: goto label_16d184;
        case 0x16d188u: goto label_16d188;
        case 0x16d18cu: goto label_16d18c;
        case 0x16d190u: goto label_16d190;
        case 0x16d194u: goto label_16d194;
        case 0x16d198u: goto label_16d198;
        case 0x16d19cu: goto label_16d19c;
        case 0x16d1a0u: goto label_16d1a0;
        case 0x16d1a4u: goto label_16d1a4;
        case 0x16d1a8u: goto label_16d1a8;
        case 0x16d1acu: goto label_16d1ac;
        case 0x16d1b0u: goto label_16d1b0;
        case 0x16d1b4u: goto label_16d1b4;
        case 0x16d1b8u: goto label_16d1b8;
        case 0x16d1bcu: goto label_16d1bc;
        case 0x16d1c0u: goto label_16d1c0;
        case 0x16d1c4u: goto label_16d1c4;
        case 0x16d1c8u: goto label_16d1c8;
        case 0x16d1ccu: goto label_16d1cc;
        case 0x16d1d0u: goto label_16d1d0;
        case 0x16d1d4u: goto label_16d1d4;
        case 0x16d1d8u: goto label_16d1d8;
        case 0x16d1dcu: goto label_16d1dc;
        case 0x16d1e0u: goto label_16d1e0;
        case 0x16d1e4u: goto label_16d1e4;
        case 0x16d1e8u: goto label_16d1e8;
        case 0x16d1ecu: goto label_16d1ec;
        case 0x16d1f0u: goto label_16d1f0;
        case 0x16d1f4u: goto label_16d1f4;
        case 0x16d1f8u: goto label_16d1f8;
        case 0x16d1fcu: goto label_16d1fc;
        case 0x16d200u: goto label_16d200;
        case 0x16d204u: goto label_16d204;
        case 0x16d208u: goto label_16d208;
        case 0x16d20cu: goto label_16d20c;
        case 0x16d210u: goto label_16d210;
        case 0x16d214u: goto label_16d214;
        case 0x16d218u: goto label_16d218;
        case 0x16d21cu: goto label_16d21c;
        case 0x16d220u: goto label_16d220;
        case 0x16d224u: goto label_16d224;
        case 0x16d228u: goto label_16d228;
        case 0x16d22cu: goto label_16d22c;
        case 0x16d230u: goto label_16d230;
        case 0x16d234u: goto label_16d234;
        case 0x16d238u: goto label_16d238;
        case 0x16d23cu: goto label_16d23c;
        case 0x16d240u: goto label_16d240;
        case 0x16d244u: goto label_16d244;
        case 0x16d248u: goto label_16d248;
        case 0x16d24cu: goto label_16d24c;
        case 0x16d250u: goto label_16d250;
        case 0x16d254u: goto label_16d254;
        case 0x16d258u: goto label_16d258;
        case 0x16d25cu: goto label_16d25c;
        case 0x16d260u: goto label_16d260;
        case 0x16d264u: goto label_16d264;
        case 0x16d268u: goto label_16d268;
        case 0x16d26cu: goto label_16d26c;
        case 0x16d270u: goto label_16d270;
        case 0x16d274u: goto label_16d274;
        case 0x16d278u: goto label_16d278;
        case 0x16d27cu: goto label_16d27c;
        case 0x16d280u: goto label_16d280;
        case 0x16d284u: goto label_16d284;
        case 0x16d288u: goto label_16d288;
        case 0x16d28cu: goto label_16d28c;
        case 0x16d290u: goto label_16d290;
        case 0x16d294u: goto label_16d294;
        case 0x16d298u: goto label_16d298;
        case 0x16d29cu: goto label_16d29c;
        case 0x16d2a0u: goto label_16d2a0;
        case 0x16d2a4u: goto label_16d2a4;
        case 0x16d2a8u: goto label_16d2a8;
        case 0x16d2acu: goto label_16d2ac;
        case 0x16d2b0u: goto label_16d2b0;
        case 0x16d2b4u: goto label_16d2b4;
        case 0x16d2b8u: goto label_16d2b8;
        case 0x16d2bcu: goto label_16d2bc;
        case 0x16d2c0u: goto label_16d2c0;
        case 0x16d2c4u: goto label_16d2c4;
        case 0x16d2c8u: goto label_16d2c8;
        case 0x16d2ccu: goto label_16d2cc;
        case 0x16d2d0u: goto label_16d2d0;
        case 0x16d2d4u: goto label_16d2d4;
        case 0x16d2d8u: goto label_16d2d8;
        case 0x16d2dcu: goto label_16d2dc;
        case 0x16d2e0u: goto label_16d2e0;
        case 0x16d2e4u: goto label_16d2e4;
        case 0x16d2e8u: goto label_16d2e8;
        case 0x16d2ecu: goto label_16d2ec;
        case 0x16d2f0u: goto label_16d2f0;
        case 0x16d2f4u: goto label_16d2f4;
        case 0x16d2f8u: goto label_16d2f8;
        case 0x16d2fcu: goto label_16d2fc;
        case 0x16d300u: goto label_16d300;
        case 0x16d304u: goto label_16d304;
        case 0x16d308u: goto label_16d308;
        case 0x16d30cu: goto label_16d30c;
        case 0x16d310u: goto label_16d310;
        case 0x16d314u: goto label_16d314;
        case 0x16d318u: goto label_16d318;
        case 0x16d31cu: goto label_16d31c;
        case 0x16d320u: goto label_16d320;
        case 0x16d324u: goto label_16d324;
        case 0x16d328u: goto label_16d328;
        case 0x16d32cu: goto label_16d32c;
        case 0x16d330u: goto label_16d330;
        case 0x16d334u: goto label_16d334;
        case 0x16d338u: goto label_16d338;
        case 0x16d33cu: goto label_16d33c;
        case 0x16d340u: goto label_16d340;
        case 0x16d344u: goto label_16d344;
        case 0x16d348u: goto label_16d348;
        case 0x16d34cu: goto label_16d34c;
        case 0x16d350u: goto label_16d350;
        case 0x16d354u: goto label_16d354;
        case 0x16d358u: goto label_16d358;
        case 0x16d35cu: goto label_16d35c;
        case 0x16d360u: goto label_16d360;
        case 0x16d364u: goto label_16d364;
        case 0x16d368u: goto label_16d368;
        case 0x16d36cu: goto label_16d36c;
        case 0x16d370u: goto label_16d370;
        case 0x16d374u: goto label_16d374;
        case 0x16d378u: goto label_16d378;
        case 0x16d37cu: goto label_16d37c;
        case 0x16d380u: goto label_16d380;
        case 0x16d384u: goto label_16d384;
        case 0x16d388u: goto label_16d388;
        case 0x16d38cu: goto label_16d38c;
        case 0x16d390u: goto label_16d390;
        case 0x16d394u: goto label_16d394;
        case 0x16d398u: goto label_16d398;
        case 0x16d39cu: goto label_16d39c;
        case 0x16d3a0u: goto label_16d3a0;
        case 0x16d3a4u: goto label_16d3a4;
        case 0x16d3a8u: goto label_16d3a8;
        case 0x16d3acu: goto label_16d3ac;
        case 0x16d3b0u: goto label_16d3b0;
        case 0x16d3b4u: goto label_16d3b4;
        case 0x16d3b8u: goto label_16d3b8;
        case 0x16d3bcu: goto label_16d3bc;
        case 0x16d3c0u: goto label_16d3c0;
        case 0x16d3c4u: goto label_16d3c4;
        case 0x16d3c8u: goto label_16d3c8;
        case 0x16d3ccu: goto label_16d3cc;
        case 0x16d3d0u: goto label_16d3d0;
        case 0x16d3d4u: goto label_16d3d4;
        case 0x16d3d8u: goto label_16d3d8;
        case 0x16d3dcu: goto label_16d3dc;
        case 0x16d3e0u: goto label_16d3e0;
        case 0x16d3e4u: goto label_16d3e4;
        case 0x16d3e8u: goto label_16d3e8;
        case 0x16d3ecu: goto label_16d3ec;
        case 0x16d3f0u: goto label_16d3f0;
        case 0x16d3f4u: goto label_16d3f4;
        case 0x16d3f8u: goto label_16d3f8;
        case 0x16d3fcu: goto label_16d3fc;
        case 0x16d400u: goto label_16d400;
        case 0x16d404u: goto label_16d404;
        case 0x16d408u: goto label_16d408;
        case 0x16d40cu: goto label_16d40c;
        case 0x16d410u: goto label_16d410;
        case 0x16d414u: goto label_16d414;
        case 0x16d418u: goto label_16d418;
        case 0x16d41cu: goto label_16d41c;
        case 0x16d420u: goto label_16d420;
        case 0x16d424u: goto label_16d424;
        case 0x16d428u: goto label_16d428;
        case 0x16d42cu: goto label_16d42c;
        case 0x16d430u: goto label_16d430;
        case 0x16d434u: goto label_16d434;
        case 0x16d438u: goto label_16d438;
        case 0x16d43cu: goto label_16d43c;
        case 0x16d440u: goto label_16d440;
        case 0x16d444u: goto label_16d444;
        case 0x16d448u: goto label_16d448;
        case 0x16d44cu: goto label_16d44c;
        case 0x16d450u: goto label_16d450;
        case 0x16d454u: goto label_16d454;
        case 0x16d458u: goto label_16d458;
        case 0x16d45cu: goto label_16d45c;
        case 0x16d460u: goto label_16d460;
        case 0x16d464u: goto label_16d464;
        case 0x16d468u: goto label_16d468;
        case 0x16d46cu: goto label_16d46c;
        case 0x16d470u: goto label_16d470;
        case 0x16d474u: goto label_16d474;
        case 0x16d478u: goto label_16d478;
        case 0x16d47cu: goto label_16d47c;
        case 0x16d480u: goto label_16d480;
        case 0x16d484u: goto label_16d484;
        case 0x16d488u: goto label_16d488;
        case 0x16d48cu: goto label_16d48c;
        case 0x16d490u: goto label_16d490;
        case 0x16d494u: goto label_16d494;
        case 0x16d498u: goto label_16d498;
        case 0x16d49cu: goto label_16d49c;
        case 0x16d4a0u: goto label_16d4a0;
        case 0x16d4a4u: goto label_16d4a4;
        case 0x16d4a8u: goto label_16d4a8;
        case 0x16d4acu: goto label_16d4ac;
        case 0x16d4b0u: goto label_16d4b0;
        case 0x16d4b4u: goto label_16d4b4;
        case 0x16d4b8u: goto label_16d4b8;
        case 0x16d4bcu: goto label_16d4bc;
        case 0x16d4c0u: goto label_16d4c0;
        case 0x16d4c4u: goto label_16d4c4;
        case 0x16d4c8u: goto label_16d4c8;
        case 0x16d4ccu: goto label_16d4cc;
        case 0x16d4d0u: goto label_16d4d0;
        case 0x16d4d4u: goto label_16d4d4;
        case 0x16d4d8u: goto label_16d4d8;
        case 0x16d4dcu: goto label_16d4dc;
        case 0x16d4e0u: goto label_16d4e0;
        case 0x16d4e4u: goto label_16d4e4;
        case 0x16d4e8u: goto label_16d4e8;
        case 0x16d4ecu: goto label_16d4ec;
        case 0x16d4f0u: goto label_16d4f0;
        case 0x16d4f4u: goto label_16d4f4;
        case 0x16d4f8u: goto label_16d4f8;
        case 0x16d4fcu: goto label_16d4fc;
        case 0x16d500u: goto label_16d500;
        case 0x16d504u: goto label_16d504;
        case 0x16d508u: goto label_16d508;
        case 0x16d50cu: goto label_16d50c;
        case 0x16d510u: goto label_16d510;
        case 0x16d514u: goto label_16d514;
        case 0x16d518u: goto label_16d518;
        case 0x16d51cu: goto label_16d51c;
        case 0x16d520u: goto label_16d520;
        case 0x16d524u: goto label_16d524;
        case 0x16d528u: goto label_16d528;
        case 0x16d52cu: goto label_16d52c;
        case 0x16d530u: goto label_16d530;
        case 0x16d534u: goto label_16d534;
        case 0x16d538u: goto label_16d538;
        case 0x16d53cu: goto label_16d53c;
        case 0x16d540u: goto label_16d540;
        case 0x16d544u: goto label_16d544;
        case 0x16d548u: goto label_16d548;
        case 0x16d54cu: goto label_16d54c;
        case 0x16d550u: goto label_16d550;
        case 0x16d554u: goto label_16d554;
        case 0x16d558u: goto label_16d558;
        case 0x16d55cu: goto label_16d55c;
        case 0x16d560u: goto label_16d560;
        case 0x16d564u: goto label_16d564;
        case 0x16d568u: goto label_16d568;
        case 0x16d56cu: goto label_16d56c;
        case 0x16d570u: goto label_16d570;
        case 0x16d574u: goto label_16d574;
        case 0x16d578u: goto label_16d578;
        case 0x16d57cu: goto label_16d57c;
        case 0x16d580u: goto label_16d580;
        case 0x16d584u: goto label_16d584;
        case 0x16d588u: goto label_16d588;
        case 0x16d58cu: goto label_16d58c;
        case 0x16d590u: goto label_16d590;
        case 0x16d594u: goto label_16d594;
        case 0x16d598u: goto label_16d598;
        case 0x16d59cu: goto label_16d59c;
        case 0x16d5a0u: goto label_16d5a0;
        case 0x16d5a4u: goto label_16d5a4;
        case 0x16d5a8u: goto label_16d5a8;
        case 0x16d5acu: goto label_16d5ac;
        case 0x16d5b0u: goto label_16d5b0;
        case 0x16d5b4u: goto label_16d5b4;
        case 0x16d5b8u: goto label_16d5b8;
        case 0x16d5bcu: goto label_16d5bc;
        case 0x16d5c0u: goto label_16d5c0;
        case 0x16d5c4u: goto label_16d5c4;
        case 0x16d5c8u: goto label_16d5c8;
        case 0x16d5ccu: goto label_16d5cc;
        case 0x16d5d0u: goto label_16d5d0;
        case 0x16d5d4u: goto label_16d5d4;
        case 0x16d5d8u: goto label_16d5d8;
        case 0x16d5dcu: goto label_16d5dc;
        case 0x16d5e0u: goto label_16d5e0;
        case 0x16d5e4u: goto label_16d5e4;
        case 0x16d5e8u: goto label_16d5e8;
        case 0x16d5ecu: goto label_16d5ec;
        case 0x16d5f0u: goto label_16d5f0;
        case 0x16d5f4u: goto label_16d5f4;
        case 0x16d5f8u: goto label_16d5f8;
        case 0x16d5fcu: goto label_16d5fc;
        case 0x16d600u: goto label_16d600;
        case 0x16d604u: goto label_16d604;
        case 0x16d608u: goto label_16d608;
        case 0x16d60cu: goto label_16d60c;
        case 0x16d610u: goto label_16d610;
        case 0x16d614u: goto label_16d614;
        case 0x16d618u: goto label_16d618;
        case 0x16d61cu: goto label_16d61c;
        case 0x16d620u: goto label_16d620;
        case 0x16d624u: goto label_16d624;
        case 0x16d628u: goto label_16d628;
        case 0x16d62cu: goto label_16d62c;
        case 0x16d630u: goto label_16d630;
        case 0x16d634u: goto label_16d634;
        case 0x16d638u: goto label_16d638;
        case 0x16d63cu: goto label_16d63c;
        case 0x16d640u: goto label_16d640;
        case 0x16d644u: goto label_16d644;
        case 0x16d648u: goto label_16d648;
        case 0x16d64cu: goto label_16d64c;
        case 0x16d650u: goto label_16d650;
        case 0x16d654u: goto label_16d654;
        case 0x16d658u: goto label_16d658;
        case 0x16d65cu: goto label_16d65c;
        case 0x16d660u: goto label_16d660;
        case 0x16d664u: goto label_16d664;
        case 0x16d668u: goto label_16d668;
        case 0x16d66cu: goto label_16d66c;
        case 0x16d670u: goto label_16d670;
        case 0x16d674u: goto label_16d674;
        case 0x16d678u: goto label_16d678;
        case 0x16d67cu: goto label_16d67c;
        case 0x16d680u: goto label_16d680;
        case 0x16d684u: goto label_16d684;
        case 0x16d688u: goto label_16d688;
        case 0x16d68cu: goto label_16d68c;
        case 0x16d690u: goto label_16d690;
        case 0x16d694u: goto label_16d694;
        case 0x16d698u: goto label_16d698;
        case 0x16d69cu: goto label_16d69c;
        case 0x16d6a0u: goto label_16d6a0;
        case 0x16d6a4u: goto label_16d6a4;
        case 0x16d6a8u: goto label_16d6a8;
        case 0x16d6acu: goto label_16d6ac;
        case 0x16d6b0u: goto label_16d6b0;
        case 0x16d6b4u: goto label_16d6b4;
        case 0x16d6b8u: goto label_16d6b8;
        case 0x16d6bcu: goto label_16d6bc;
        case 0x16d6c0u: goto label_16d6c0;
        case 0x16d6c4u: goto label_16d6c4;
        case 0x16d6c8u: goto label_16d6c8;
        case 0x16d6ccu: goto label_16d6cc;
        case 0x16d6d0u: goto label_16d6d0;
        case 0x16d6d4u: goto label_16d6d4;
        case 0x16d6d8u: goto label_16d6d8;
        case 0x16d6dcu: goto label_16d6dc;
        case 0x16d6e0u: goto label_16d6e0;
        case 0x16d6e4u: goto label_16d6e4;
        case 0x16d6e8u: goto label_16d6e8;
        case 0x16d6ecu: goto label_16d6ec;
        case 0x16d6f0u: goto label_16d6f0;
        case 0x16d6f4u: goto label_16d6f4;
        case 0x16d6f8u: goto label_16d6f8;
        case 0x16d6fcu: goto label_16d6fc;
        case 0x16d700u: goto label_16d700;
        case 0x16d704u: goto label_16d704;
        case 0x16d708u: goto label_16d708;
        case 0x16d70cu: goto label_16d70c;
        case 0x16d710u: goto label_16d710;
        case 0x16d714u: goto label_16d714;
        case 0x16d718u: goto label_16d718;
        case 0x16d71cu: goto label_16d71c;
        case 0x16d720u: goto label_16d720;
        case 0x16d724u: goto label_16d724;
        case 0x16d728u: goto label_16d728;
        case 0x16d72cu: goto label_16d72c;
        case 0x16d730u: goto label_16d730;
        case 0x16d734u: goto label_16d734;
        case 0x16d738u: goto label_16d738;
        case 0x16d73cu: goto label_16d73c;
        case 0x16d740u: goto label_16d740;
        case 0x16d744u: goto label_16d744;
        case 0x16d748u: goto label_16d748;
        case 0x16d74cu: goto label_16d74c;
        case 0x16d750u: goto label_16d750;
        case 0x16d754u: goto label_16d754;
        case 0x16d758u: goto label_16d758;
        case 0x16d75cu: goto label_16d75c;
        case 0x16d760u: goto label_16d760;
        case 0x16d764u: goto label_16d764;
        case 0x16d768u: goto label_16d768;
        case 0x16d76cu: goto label_16d76c;
        case 0x16d770u: goto label_16d770;
        case 0x16d774u: goto label_16d774;
        case 0x16d778u: goto label_16d778;
        case 0x16d77cu: goto label_16d77c;
        case 0x16d780u: goto label_16d780;
        case 0x16d784u: goto label_16d784;
        case 0x16d788u: goto label_16d788;
        case 0x16d78cu: goto label_16d78c;
        case 0x16d790u: goto label_16d790;
        case 0x16d794u: goto label_16d794;
        case 0x16d798u: goto label_16d798;
        case 0x16d79cu: goto label_16d79c;
        case 0x16d7a0u: goto label_16d7a0;
        case 0x16d7a4u: goto label_16d7a4;
        case 0x16d7a8u: goto label_16d7a8;
        case 0x16d7acu: goto label_16d7ac;
        case 0x16d7b0u: goto label_16d7b0;
        case 0x16d7b4u: goto label_16d7b4;
        case 0x16d7b8u: goto label_16d7b8;
        case 0x16d7bcu: goto label_16d7bc;
        case 0x16d7c0u: goto label_16d7c0;
        case 0x16d7c4u: goto label_16d7c4;
        case 0x16d7c8u: goto label_16d7c8;
        case 0x16d7ccu: goto label_16d7cc;
        case 0x16d7d0u: goto label_16d7d0;
        case 0x16d7d4u: goto label_16d7d4;
        case 0x16d7d8u: goto label_16d7d8;
        case 0x16d7dcu: goto label_16d7dc;
        case 0x16d7e0u: goto label_16d7e0;
        case 0x16d7e4u: goto label_16d7e4;
        case 0x16d7e8u: goto label_16d7e8;
        case 0x16d7ecu: goto label_16d7ec;
        case 0x16d7f0u: goto label_16d7f0;
        case 0x16d7f4u: goto label_16d7f4;
        case 0x16d7f8u: goto label_16d7f8;
        case 0x16d7fcu: goto label_16d7fc;
        case 0x16d800u: goto label_16d800;
        case 0x16d804u: goto label_16d804;
        case 0x16d808u: goto label_16d808;
        case 0x16d80cu: goto label_16d80c;
        case 0x16d810u: goto label_16d810;
        case 0x16d814u: goto label_16d814;
        case 0x16d818u: goto label_16d818;
        case 0x16d81cu: goto label_16d81c;
        case 0x16d820u: goto label_16d820;
        case 0x16d824u: goto label_16d824;
        case 0x16d828u: goto label_16d828;
        case 0x16d82cu: goto label_16d82c;
        case 0x16d830u: goto label_16d830;
        case 0x16d834u: goto label_16d834;
        case 0x16d838u: goto label_16d838;
        case 0x16d83cu: goto label_16d83c;
        case 0x16d840u: goto label_16d840;
        case 0x16d844u: goto label_16d844;
        case 0x16d848u: goto label_16d848;
        case 0x16d84cu: goto label_16d84c;
        case 0x16d850u: goto label_16d850;
        case 0x16d854u: goto label_16d854;
        case 0x16d858u: goto label_16d858;
        case 0x16d85cu: goto label_16d85c;
        case 0x16d860u: goto label_16d860;
        case 0x16d864u: goto label_16d864;
        case 0x16d868u: goto label_16d868;
        case 0x16d86cu: goto label_16d86c;
        case 0x16d870u: goto label_16d870;
        case 0x16d874u: goto label_16d874;
        case 0x16d878u: goto label_16d878;
        case 0x16d87cu: goto label_16d87c;
        case 0x16d880u: goto label_16d880;
        case 0x16d884u: goto label_16d884;
        case 0x16d888u: goto label_16d888;
        case 0x16d88cu: goto label_16d88c;
        case 0x16d890u: goto label_16d890;
        case 0x16d894u: goto label_16d894;
        case 0x16d898u: goto label_16d898;
        case 0x16d89cu: goto label_16d89c;
        case 0x16d8a0u: goto label_16d8a0;
        case 0x16d8a4u: goto label_16d8a4;
        case 0x16d8a8u: goto label_16d8a8;
        case 0x16d8acu: goto label_16d8ac;
        case 0x16d8b0u: goto label_16d8b0;
        case 0x16d8b4u: goto label_16d8b4;
        case 0x16d8b8u: goto label_16d8b8;
        case 0x16d8bcu: goto label_16d8bc;
        case 0x16d8c0u: goto label_16d8c0;
        case 0x16d8c4u: goto label_16d8c4;
        case 0x16d8c8u: goto label_16d8c8;
        case 0x16d8ccu: goto label_16d8cc;
        case 0x16d8d0u: goto label_16d8d0;
        case 0x16d8d4u: goto label_16d8d4;
        case 0x16d8d8u: goto label_16d8d8;
        case 0x16d8dcu: goto label_16d8dc;
        case 0x16d8e0u: goto label_16d8e0;
        case 0x16d8e4u: goto label_16d8e4;
        case 0x16d8e8u: goto label_16d8e8;
        case 0x16d8ecu: goto label_16d8ec;
        case 0x16d8f0u: goto label_16d8f0;
        case 0x16d8f4u: goto label_16d8f4;
        case 0x16d8f8u: goto label_16d8f8;
        case 0x16d8fcu: goto label_16d8fc;
        case 0x16d900u: goto label_16d900;
        case 0x16d904u: goto label_16d904;
        case 0x16d908u: goto label_16d908;
        case 0x16d90cu: goto label_16d90c;
        case 0x16d910u: goto label_16d910;
        case 0x16d914u: goto label_16d914;
        case 0x16d918u: goto label_16d918;
        case 0x16d91cu: goto label_16d91c;
        case 0x16d920u: goto label_16d920;
        case 0x16d924u: goto label_16d924;
        case 0x16d928u: goto label_16d928;
        case 0x16d92cu: goto label_16d92c;
        case 0x16d930u: goto label_16d930;
        case 0x16d934u: goto label_16d934;
        case 0x16d938u: goto label_16d938;
        case 0x16d93cu: goto label_16d93c;
        case 0x16d940u: goto label_16d940;
        case 0x16d944u: goto label_16d944;
        case 0x16d948u: goto label_16d948;
        case 0x16d94cu: goto label_16d94c;
        case 0x16d950u: goto label_16d950;
        case 0x16d954u: goto label_16d954;
        case 0x16d958u: goto label_16d958;
        case 0x16d95cu: goto label_16d95c;
        case 0x16d960u: goto label_16d960;
        case 0x16d964u: goto label_16d964;
        case 0x16d968u: goto label_16d968;
        case 0x16d96cu: goto label_16d96c;
        case 0x16d970u: goto label_16d970;
        case 0x16d974u: goto label_16d974;
        case 0x16d978u: goto label_16d978;
        case 0x16d97cu: goto label_16d97c;
        case 0x16d980u: goto label_16d980;
        case 0x16d984u: goto label_16d984;
        case 0x16d988u: goto label_16d988;
        case 0x16d98cu: goto label_16d98c;
        case 0x16d990u: goto label_16d990;
        case 0x16d994u: goto label_16d994;
        case 0x16d998u: goto label_16d998;
        case 0x16d99cu: goto label_16d99c;
        case 0x16d9a0u: goto label_16d9a0;
        case 0x16d9a4u: goto label_16d9a4;
        case 0x16d9a8u: goto label_16d9a8;
        case 0x16d9acu: goto label_16d9ac;
        case 0x16d9b0u: goto label_16d9b0;
        case 0x16d9b4u: goto label_16d9b4;
        case 0x16d9b8u: goto label_16d9b8;
        case 0x16d9bcu: goto label_16d9bc;
        case 0x16d9c0u: goto label_16d9c0;
        case 0x16d9c4u: goto label_16d9c4;
        case 0x16d9c8u: goto label_16d9c8;
        case 0x16d9ccu: goto label_16d9cc;
        case 0x16d9d0u: goto label_16d9d0;
        case 0x16d9d4u: goto label_16d9d4;
        case 0x16d9d8u: goto label_16d9d8;
        case 0x16d9dcu: goto label_16d9dc;
        case 0x16d9e0u: goto label_16d9e0;
        case 0x16d9e4u: goto label_16d9e4;
        case 0x16d9e8u: goto label_16d9e8;
        case 0x16d9ecu: goto label_16d9ec;
        case 0x16d9f0u: goto label_16d9f0;
        case 0x16d9f4u: goto label_16d9f4;
        case 0x16d9f8u: goto label_16d9f8;
        case 0x16d9fcu: goto label_16d9fc;
        case 0x16da00u: goto label_16da00;
        case 0x16da04u: goto label_16da04;
        case 0x16da08u: goto label_16da08;
        case 0x16da0cu: goto label_16da0c;
        case 0x16da10u: goto label_16da10;
        case 0x16da14u: goto label_16da14;
        case 0x16da18u: goto label_16da18;
        case 0x16da1cu: goto label_16da1c;
        case 0x16da20u: goto label_16da20;
        case 0x16da24u: goto label_16da24;
        case 0x16da28u: goto label_16da28;
        case 0x16da2cu: goto label_16da2c;
        case 0x16da30u: goto label_16da30;
        case 0x16da34u: goto label_16da34;
        case 0x16da38u: goto label_16da38;
        case 0x16da3cu: goto label_16da3c;
        case 0x16da40u: goto label_16da40;
        case 0x16da44u: goto label_16da44;
        case 0x16da48u: goto label_16da48;
        case 0x16da4cu: goto label_16da4c;
        case 0x16da50u: goto label_16da50;
        case 0x16da54u: goto label_16da54;
        case 0x16da58u: goto label_16da58;
        case 0x16da5cu: goto label_16da5c;
        case 0x16da60u: goto label_16da60;
        case 0x16da64u: goto label_16da64;
        case 0x16da68u: goto label_16da68;
        case 0x16da6cu: goto label_16da6c;
        default: break;
    }

    ctx->pc = 0x16bfc0u;

label_16bfc0:
    // 0x16bfc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16bfc4:
    // 0x16bfc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16bfc8:
    // 0x16bfc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16bfcc:
    // 0x16bfcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16bfd0:
    // 0x16bfd0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x16bfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_16bfd4:
    // 0x16bfd4: 0xc0557e8  jal         func_155FA0
label_16bfd8:
    if (ctx->pc == 0x16BFD8u) {
        ctx->pc = 0x16BFDCu;
        goto label_16bfdc;
    }
    ctx->pc = 0x16BFD4u;
    SET_GPR_U32(ctx, 31, 0x16BFDCu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x16BFD4u, 0x16BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFDCu;
label_16bfdc:
    // 0x16bfdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16bfe0:
    // 0x16bfe0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x16bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_16bfe4:
    // 0x16bfe4: 0xc08d17c  jal         func_2345F0
label_16bfe8:
    if (ctx->pc == 0x16BFE8u) {
        ctx->pc = 0x16BFECu;
        goto label_16bfec;
    }
    ctx->pc = 0x16BFE4u;
    SET_GPR_U32(ctx, 31, 0x16BFECu);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x16BFE4u, 0x16BFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFECu;
label_16bfec:
    // 0x16bfec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_16bff0:
    // 0x16bff0: 0x24633cb0  addiu       $v1, $v1, 0x3CB0
    ctx->pc = 0x16bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15536));
label_16bff4:
    // 0x16bff4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16bff8:
    // 0x16bff8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_16bffc:
    // 0x16bffc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_16c000:
    // 0x16c000: 0x24633ce8  addiu       $v1, $v1, 0x3CE8
    ctx->pc = 0x16c000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15592));
label_16c004:
    // 0x16c004: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c008:
    // 0x16c008: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x16c008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_16c00c:
    // 0x16c00c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c010:
    // 0x16c010: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x16c010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_16c014:
    // 0x16c014: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c018:
    // 0x16c018: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x16c018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_16c01c:
    // 0x16c01c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c020:
    // 0x16c020: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c024:
    // 0x16c024: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x16c024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_16c028:
    // 0x16c028: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c02c:
    // 0x16c02c: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x16c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_16c030:
    // 0x16c030: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c034:
    // 0x16c034: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x16c034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_16c038:
    // 0x16c038: 0xc056254  jal         func_158950
label_16c03c:
    if (ctx->pc == 0x16C03Cu) {
        ctx->pc = 0x16C040u;
        goto label_16c040;
    }
    ctx->pc = 0x16C038u;
    SET_GPR_U32(ctx, 31, 0x16C040u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x16C038u, 0x16C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C040u;
label_16c040:
    // 0x16c040: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c044:
    // 0x16c044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c048:
    // 0x16c048: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16c048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16c04c:
    // 0x16c04c: 0x3e00008  jr          $ra
label_16c050:
    if (ctx->pc == 0x16C050u) {
        ctx->pc = 0x16C054u;
        goto label_16c054;
    }
    ctx->pc = 0x16C04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C054u;
label_16c054:
    // 0x16c054: 0x0  nop
    ctx->pc = 0x16c054u;
    // NOP
label_16c058:
    // 0x16c058: 0x0  nop
    ctx->pc = 0x16c058u;
    // NOP
label_16c05c:
    // 0x16c05c: 0x0  nop
    ctx->pc = 0x16c05cu;
    // NOP
label_16c060:
    // 0x16c060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16c064:
    // 0x16c064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16c068:
    // 0x16c068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16c068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16c06c:
    // 0x16c06c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x16c06cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_16c070:
    // 0x16c070: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c074:
    // 0x16c074: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_16c078:
    if (ctx->pc == 0x16C078u) {
        ctx->pc = 0x16C07Cu;
        goto label_16c07c;
    }
    ctx->pc = 0x16C074u;
    {
        const bool branch_taken_0x16c074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c074) {
            ctx->pc = 0x16C0F4u;
            goto label_16c0f4;
        }
    }
    ctx->pc = 0x16C07Cu;
label_16c07c:
    // 0x16c07c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_16c080:
    // 0x16c080: 0x24633cb0  addiu       $v1, $v1, 0x3CB0
    ctx->pc = 0x16c080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15536));
label_16c084:
    // 0x16c084: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c088:
    // 0x16c088: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16c088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_16c08c:
    // 0x16c08c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_16c090:
    // 0x16c090: 0x24633ce8  addiu       $v1, $v1, 0x3CE8
    ctx->pc = 0x16c090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15592));
label_16c094:
    // 0x16c094: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c098:
    // 0x16c098: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x16c098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_16c09c:
    // 0x16c09c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c0a0:
    // 0x16c0a0: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x16c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_16c0a4:
    // 0x16c0a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c0a8:
    // 0x16c0a8: 0xc056094  jal         func_158250
label_16c0ac:
    if (ctx->pc == 0x16C0ACu) {
        ctx->pc = 0x16C0B0u;
        goto label_16c0b0;
    }
    ctx->pc = 0x16C0A8u;
    SET_GPR_U32(ctx, 31, 0x16C0B0u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x16C0A8u, 0x16C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0B0u;
label_16c0b0:
    // 0x16c0b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c0b4:
    // 0x16c0b4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x16c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_16c0b8:
    // 0x16c0b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c0bc:
    // 0x16c0bc: 0xc08d1bc  jal         func_2346F0
label_16c0c0:
    if (ctx->pc == 0x16C0C0u) {
        ctx->pc = 0x16C0C4u;
        goto label_16c0c4;
    }
    ctx->pc = 0x16C0BCu;
    SET_GPR_U32(ctx, 31, 0x16C0C4u);
    ctx->pc = 0x2346F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2346F0u, 0x16C0BCu, 0x16C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0C4u;
label_16c0c4:
    // 0x16c0c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c0c8:
    // 0x16c0c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c0cc:
    // 0x16c0cc: 0xc055950  jal         func_156540
label_16c0d0:
    if (ctx->pc == 0x16C0D0u) {
        ctx->pc = 0x16C0D4u;
        goto label_16c0d4;
    }
    ctx->pc = 0x16C0CCu;
    SET_GPR_U32(ctx, 31, 0x16C0D4u);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x16C0CCu, 0x16C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0D4u;
label_16c0d4:
    // 0x16c0d4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x16c0d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_16c0d8:
    // 0x16c0d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16c0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_16c0dc:
    // 0x16c0dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16c0dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_16c0e0:
    // 0x16c0e0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_16c0e4:
    if (ctx->pc == 0x16C0E4u) {
        ctx->pc = 0x16C0E8u;
        goto label_16c0e8;
    }
    ctx->pc = 0x16C0E0u;
    {
        const bool branch_taken_0x16c0e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16c0e0) {
            ctx->pc = 0x16C0F4u;
            goto label_16c0f4;
        }
    }
    ctx->pc = 0x16C0E8u;
label_16c0e8:
    // 0x16c0e8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16c0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c0ec:
    // 0x16c0ec: 0xc0ba070  jal         func_2E81C0
label_16c0f0:
    if (ctx->pc == 0x16C0F0u) {
        ctx->pc = 0x16C0F4u;
        goto label_16c0f4;
    }
    ctx->pc = 0x16C0ECu;
    SET_GPR_U32(ctx, 31, 0x16C0F4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x16C0ECu, 0x16C0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0F4u;
label_16c0f4:
    // 0x16c0f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c0f8:
    // 0x16c0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c0fc:
    // 0x16c0fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16c0fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16c100:
    // 0x16c100: 0x3e00008  jr          $ra
label_16c104:
    if (ctx->pc == 0x16C104u) {
        ctx->pc = 0x16C108u;
        goto label_16c108;
    }
    ctx->pc = 0x16C100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C108u;
label_16c108:
    // 0x16c108: 0x0  nop
    ctx->pc = 0x16c108u;
    // NOP
label_16c10c:
    // 0x16c10c: 0x0  nop
    ctx->pc = 0x16c10cu;
    // NOP
label_16c110:
    // 0x16c110: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_16c114:
    // 0x16c114: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16c114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16c118:
    // 0x16c118: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16c11c:
    // 0x16c11c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16c120:
    // 0x16c120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16c124:
    // 0x16c124: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c128:
    // 0x16c128: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x16c128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_16c12c:
    // 0x16c12c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x16c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c130:
    // 0x16c130: 0xc055974  jal         func_1565D0
label_16c134:
    if (ctx->pc == 0x16C134u) {
        ctx->pc = 0x16C138u;
        goto label_16c138;
    }
    ctx->pc = 0x16C130u;
    SET_GPR_U32(ctx, 31, 0x16C138u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x16C130u, 0x16C138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C138u;
label_16c138:
    // 0x16c138: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x16c138u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16c13c:
    // 0x16c13c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x16c13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_16c140:
    // 0x16c140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c144:
    // 0x16c144: 0x14620096  bne         $v1, $v0, . + 4 + (0x96 << 2)
label_16c148:
    if (ctx->pc == 0x16C148u) {
        ctx->pc = 0x16C14Cu;
        goto label_16c14c;
    }
    ctx->pc = 0x16C144u;
    {
        const bool branch_taken_0x16c144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c144) {
            ctx->pc = 0x16C3A0u;
            goto label_16c3a0;
        }
    }
    ctx->pc = 0x16C14Cu;
label_16c14c:
    // 0x16c14c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x16c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c150:
    // 0x16c150: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16c150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16c154:
    // 0x16c154: 0x24a54340  addiu       $a1, $a1, 0x4340
    ctx->pc = 0x16c154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17216));
label_16c158:
    // 0x16c158: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16c158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16c15c:
    // 0x16c15c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x16c15cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_16c160:
    // 0x16c160: 0x320f809  jalr        $t9
label_16c164:
    if (ctx->pc == 0x16C164u) {
        ctx->pc = 0x16C168u;
        goto label_16c168;
    }
    ctx->pc = 0x16C160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C168u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C160u, 0x16C168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C168u;
label_16c168:
    // 0x16c168: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16c168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c16c:
    // 0x16c16c: 0x27858f68  addiu       $a1, $gp, -0x7098
    ctx->pc = 0x16c16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938472));
label_16c170:
    // 0x16c170: 0xc0bc3e2  jal         func_2F0F88
label_16c174:
    if (ctx->pc == 0x16C174u) {
        ctx->pc = 0x16C178u;
        goto label_16c178;
    }
    ctx->pc = 0x16C170u;
    SET_GPR_U32(ctx, 31, 0x16C178u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16C170u, 0x16C178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C178u;
label_16c178:
    // 0x16c178: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x16c178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c17c:
    // 0x16c17c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c180:
    // 0x16c180: 0xc0552e4  jal         func_154B90
label_16c184:
    if (ctx->pc == 0x16C184u) {
        ctx->pc = 0x16C188u;
        goto label_16c188;
    }
    ctx->pc = 0x16C180u;
    SET_GPR_U32(ctx, 31, 0x16C188u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16C180u, 0x16C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C188u;
label_16c188:
    // 0x16c188: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16c188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c18c:
    // 0x16c18c: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x16c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_16c190:
    // 0x16c190: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c194:
    // 0x16c194: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16c194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c198:
    // 0x16c198: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x16c198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_16c19c:
    // 0x16c19c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16c1a0:
    // 0x16c1a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c1a4:
    // 0x16c1a4: 0xc08c8dc  jal         func_232370
label_16c1a8:
    if (ctx->pc == 0x16C1A8u) {
        ctx->pc = 0x16C1ACu;
        goto label_16c1ac;
    }
    ctx->pc = 0x16C1A4u;
    SET_GPR_U32(ctx, 31, 0x16C1ACu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16C1A4u, 0x16C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C1ACu;
label_16c1ac:
    // 0x16c1ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16c1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c1b0:
    // 0x16c1b0: 0x10000019  b           . + 4 + (0x19 << 2)
label_16c1b4:
    if (ctx->pc == 0x16C1B4u) {
        ctx->pc = 0x16C1B8u;
        goto label_16c1b8;
    }
    ctx->pc = 0x16C1B0u;
    {
        const bool branch_taken_0x16c1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c1b0) {
            ctx->pc = 0x16C218u;
            goto label_16c218;
        }
    }
    ctx->pc = 0x16C1B8u;
label_16c1b8:
    // 0x16c1b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c1bc:
    // 0x16c1bc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16c1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16c1c0:
    // 0x16c1c0: 0x24a54360  addiu       $a1, $a1, 0x4360
    ctx->pc = 0x16c1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17248));
label_16c1c4:
    // 0x16c1c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16c1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c1c8:
    // 0x16c1c8: 0xc0bc3e2  jal         func_2F0F88
label_16c1cc:
    if (ctx->pc == 0x16C1CCu) {
        ctx->pc = 0x16C1D0u;
        goto label_16c1d0;
    }
    ctx->pc = 0x16C1C8u;
    SET_GPR_U32(ctx, 31, 0x16C1D0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16C1C8u, 0x16C1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C1D0u;
label_16c1d0:
    // 0x16c1d0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x16c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c1d4:
    // 0x16c1d4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c1d8:
    // 0x16c1d8: 0xc0552e4  jal         func_154B90
label_16c1dc:
    if (ctx->pc == 0x16C1DCu) {
        ctx->pc = 0x16C1E0u;
        goto label_16c1e0;
    }
    ctx->pc = 0x16C1D8u;
    SET_GPR_U32(ctx, 31, 0x16C1E0u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16C1D8u, 0x16C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C1E0u;
label_16c1e0:
    // 0x16c1e0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x16c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_16c1e4:
    // 0x16c1e4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c1e8:
    // 0x16c1e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c1ec:
    // 0x16c1ec: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x16c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_16c1f0:
    // 0x16c1f0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x16c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c1f4:
    // 0x16c1f4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_16c1f8:
    // 0x16c1f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c1fc:
    // 0x16c1fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16c200:
    // 0x16c200: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x16c200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_16c204:
    // 0x16c204: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16c204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_16c208:
    // 0x16c208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c20c:
    // 0x16c20c: 0xc08c8dc  jal         func_232370
label_16c210:
    if (ctx->pc == 0x16C210u) {
        ctx->pc = 0x16C214u;
        goto label_16c214;
    }
    ctx->pc = 0x16C20Cu;
    SET_GPR_U32(ctx, 31, 0x16C214u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16C20Cu, 0x16C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C214u;
label_16c214:
    // 0x16c214: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16c214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16c218:
    // 0x16c218: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x16c218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_16c21c:
    // 0x16c21c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_16c220:
    if (ctx->pc == 0x16C220u) {
        ctx->pc = 0x16C224u;
        goto label_16c224;
    }
    ctx->pc = 0x16C21Cu;
    {
        const bool branch_taken_0x16c21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c21c) {
            ctx->pc = 0x16C1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c1b8;
        }
    }
    ctx->pc = 0x16C224u;
label_16c224:
    // 0x16c224: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16c224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c228:
    // 0x16c228: 0x10000019  b           . + 4 + (0x19 << 2)
label_16c22c:
    if (ctx->pc == 0x16C22Cu) {
        ctx->pc = 0x16C230u;
        goto label_16c230;
    }
    ctx->pc = 0x16C228u;
    {
        const bool branch_taken_0x16c228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c228) {
            ctx->pc = 0x16C290u;
            goto label_16c290;
        }
    }
    ctx->pc = 0x16C230u;
label_16c230:
    // 0x16c230: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16c230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c234:
    // 0x16c234: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16c234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16c238:
    // 0x16c238: 0x24a54370  addiu       $a1, $a1, 0x4370
    ctx->pc = 0x16c238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17264));
label_16c23c:
    // 0x16c23c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16c23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c240:
    // 0x16c240: 0xc0bc3e2  jal         func_2F0F88
label_16c244:
    if (ctx->pc == 0x16C244u) {
        ctx->pc = 0x16C248u;
        goto label_16c248;
    }
    ctx->pc = 0x16C240u;
    SET_GPR_U32(ctx, 31, 0x16C248u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16C240u, 0x16C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C248u;
label_16c248:
    // 0x16c248: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x16c248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c24c:
    // 0x16c24c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16c24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c250:
    // 0x16c250: 0xc0552e4  jal         func_154B90
label_16c254:
    if (ctx->pc == 0x16C254u) {
        ctx->pc = 0x16C258u;
        goto label_16c258;
    }
    ctx->pc = 0x16C250u;
    SET_GPR_U32(ctx, 31, 0x16C258u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16C250u, 0x16C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C258u;
label_16c258:
    // 0x16c258: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x16c258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_16c25c:
    // 0x16c25c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c260:
    // 0x16c260: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16c264:
    // 0x16c264: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x16c264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
label_16c268:
    // 0x16c268: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x16c268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c26c:
    // 0x16c26c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_16c270:
    // 0x16c270: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16c270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c274:
    // 0x16c274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16c278:
    // 0x16c278: 0x8c45007c  lw          $a1, 0x7C($v0)
    ctx->pc = 0x16c278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_16c27c:
    // 0x16c27c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16c27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_16c280:
    // 0x16c280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c284:
    // 0x16c284: 0xc08c8dc  jal         func_232370
label_16c288:
    if (ctx->pc == 0x16C288u) {
        ctx->pc = 0x16C28Cu;
        goto label_16c28c;
    }
    ctx->pc = 0x16C284u;
    SET_GPR_U32(ctx, 31, 0x16C28Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16C284u, 0x16C28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C28Cu;
label_16c28c:
    // 0x16c28c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16c28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16c290:
    // 0x16c290: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x16c290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_16c294:
    // 0x16c294: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_16c298:
    if (ctx->pc == 0x16C298u) {
        ctx->pc = 0x16C29Cu;
        goto label_16c29c;
    }
    ctx->pc = 0x16C294u;
    {
        const bool branch_taken_0x16c294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c294) {
            ctx->pc = 0x16C230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c230;
        }
    }
    ctx->pc = 0x16C29Cu;
label_16c29c:
    // 0x16c29c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16c29cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c2a0:
    // 0x16c2a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16c2a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16c2a4:
    // 0x16c2a4: 0x24d30001  addiu       $s3, $a2, 0x1
    ctx->pc = 0x16c2a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_16c2a8:
    // 0x16c2a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c2ac:
    // 0x16c2ac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16c2b0:
    // 0x16c2b0: 0x24a54380  addiu       $a1, $a1, 0x4380
    ctx->pc = 0x16c2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
label_16c2b4:
    // 0x16c2b4: 0xc0bc3e2  jal         func_2F0F88
label_16c2b8:
    if (ctx->pc == 0x16C2B8u) {
        ctx->pc = 0x16C2BCu;
        goto label_16c2bc;
    }
    ctx->pc = 0x16C2B4u;
    SET_GPR_U32(ctx, 31, 0x16C2BCu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16C2B4u, 0x16C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2BCu;
label_16c2bc:
    // 0x16c2bc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x16c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c2c0:
    // 0x16c2c0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16c2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c2c4:
    // 0x16c2c4: 0xc05621c  jal         func_158870
label_16c2c8:
    if (ctx->pc == 0x16C2C8u) {
        ctx->pc = 0x16C2CCu;
        goto label_16c2cc;
    }
    ctx->pc = 0x16C2C4u;
    SET_GPR_U32(ctx, 31, 0x16C2CCu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x16C2C4u, 0x16C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2CCu;
label_16c2cc:
    // 0x16c2cc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x16c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_16c2d0:
    // 0x16c2d0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x16c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_16c2d4:
    // 0x16c2d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_16c2d8:
    if (ctx->pc == 0x16C2D8u) {
        ctx->pc = 0x16C2DCu;
        goto label_16c2dc;
    }
    ctx->pc = 0x16C2D4u;
    {
        const bool branch_taken_0x16c2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c2d4) {
            ctx->pc = 0x16C310u;
            goto label_16c310;
        }
    }
    ctx->pc = 0x16C2DCu;
label_16c2dc:
    // 0x16c2dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c2e0:
    // 0x16c2e0: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x16c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_16c2e4:
    // 0x16c2e4: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x16c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_16c2e8:
    // 0x16c2e8: 0xc05614c  jal         func_158530
label_16c2ec:
    if (ctx->pc == 0x16C2ECu) {
        ctx->pc = 0x16C2F0u;
        goto label_16c2f0;
    }
    ctx->pc = 0x16C2E8u;
    SET_GPR_U32(ctx, 31, 0x16C2F0u);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x16C2E8u, 0x16C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C2F0u;
label_16c2f0:
    // 0x16c2f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c2f4:
    // 0x16c2f4: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x16c2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_16c2f8:
    // 0x16c2f8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16c2fc:
    // 0x16c2fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c300:
    // 0x16c300: 0xc08c8dc  jal         func_232370
label_16c304:
    if (ctx->pc == 0x16C304u) {
        ctx->pc = 0x16C308u;
        goto label_16c308;
    }
    ctx->pc = 0x16C300u;
    SET_GPR_U32(ctx, 31, 0x16C308u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16C300u, 0x16C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C308u;
label_16c308:
    // 0x16c308: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_16c30c:
    if (ctx->pc == 0x16C30Cu) {
        ctx->pc = 0x16C310u;
        goto label_16c310;
    }
    ctx->pc = 0x16C308u;
    {
        const bool branch_taken_0x16c308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c308) {
            ctx->pc = 0x16C2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c2a0;
        }
    }
    ctx->pc = 0x16C310u;
label_16c310:
    // 0x16c310: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16c310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c314:
    // 0x16c314: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16c314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16c318:
    // 0x16c318: 0x24a54390  addiu       $a1, $a1, 0x4390
    ctx->pc = 0x16c318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
label_16c31c:
    // 0x16c31c: 0xc0bc3e2  jal         func_2F0F88
label_16c320:
    if (ctx->pc == 0x16C320u) {
        ctx->pc = 0x16C324u;
        goto label_16c324;
    }
    ctx->pc = 0x16C31Cu;
    SET_GPR_U32(ctx, 31, 0x16C324u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16C31Cu, 0x16C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C324u;
label_16c324:
    // 0x16c324: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x16c324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c328:
    // 0x16c328: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16c328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c32c:
    // 0x16c32c: 0xc0552e4  jal         func_154B90
label_16c330:
    if (ctx->pc == 0x16C330u) {
        ctx->pc = 0x16C334u;
        goto label_16c334;
    }
    ctx->pc = 0x16C32Cu;
    SET_GPR_U32(ctx, 31, 0x16C334u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16C32Cu, 0x16C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C334u;
label_16c334:
    // 0x16c334: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x16c334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_16c338:
    // 0x16c338: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16c338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c33c:
    // 0x16c33c: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x16c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_16c340:
    // 0x16c340: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16c340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16c344:
    // 0x16c344: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x16c344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16c348:
    // 0x16c348: 0xc08c6c8  jal         func_231B20
label_16c34c:
    if (ctx->pc == 0x16C34Cu) {
        ctx->pc = 0x16C350u;
        goto label_16c350;
    }
    ctx->pc = 0x16C348u;
    SET_GPR_U32(ctx, 31, 0x16C350u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x16C348u, 0x16C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C350u;
label_16c350:
    // 0x16c350: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16c350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c354:
    // 0x16c354: 0x27858f70  addiu       $a1, $gp, -0x7090
    ctx->pc = 0x16c354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938480));
label_16c358:
    // 0x16c358: 0xc0bc3e2  jal         func_2F0F88
label_16c35c:
    if (ctx->pc == 0x16C35Cu) {
        ctx->pc = 0x16C360u;
        goto label_16c360;
    }
    ctx->pc = 0x16C358u;
    SET_GPR_U32(ctx, 31, 0x16C360u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16C358u, 0x16C360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C360u;
label_16c360:
    // 0x16c360: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x16c360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c364:
    // 0x16c364: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16c364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16c368:
    // 0x16c368: 0xc0552e4  jal         func_154B90
label_16c36c:
    if (ctx->pc == 0x16C36Cu) {
        ctx->pc = 0x16C370u;
        goto label_16c370;
    }
    ctx->pc = 0x16C368u;
    SET_GPR_U32(ctx, 31, 0x16C370u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16C368u, 0x16C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C370u;
label_16c370:
    // 0x16c370: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x16c370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_16c374:
    // 0x16c374: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16c374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c378:
    // 0x16c378: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x16c378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_16c37c:
    // 0x16c37c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16c380:
    // 0x16c380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c384:
    // 0x16c384: 0xc08c8dc  jal         func_232370
label_16c388:
    if (ctx->pc == 0x16C388u) {
        ctx->pc = 0x16C38Cu;
        goto label_16c38c;
    }
    ctx->pc = 0x16C384u;
    SET_GPR_U32(ctx, 31, 0x16C38Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16C384u, 0x16C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C38Cu;
label_16c38c:
    // 0x16c38c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x16c38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c390:
    // 0x16c390: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16c390u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_16c394:
    // 0x16c394: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16c394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16c398:
    // 0x16c398: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16c398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_16c39c:
    // 0x16c39c: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x16c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_16c3a0:
    // 0x16c3a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16c3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16c3a4:
    // 0x16c3a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16c3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16c3a8:
    // 0x16c3a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16c3a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16c3ac:
    // 0x16c3ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16c3acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16c3b0:
    // 0x16c3b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c3b4:
    // 0x16c3b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c3b8:
    // 0x16c3b8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x16c3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_16c3bc:
    // 0x16c3bc: 0x3e00008  jr          $ra
label_16c3c0:
    if (ctx->pc == 0x16C3C0u) {
        ctx->pc = 0x16C3C4u;
        goto label_16c3c4;
    }
    ctx->pc = 0x16C3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C3C4u;
label_16c3c4:
    // 0x16c3c4: 0x0  nop
    ctx->pc = 0x16c3c4u;
    // NOP
label_16c3c8:
    // 0x16c3c8: 0x0  nop
    ctx->pc = 0x16c3c8u;
    // NOP
label_16c3cc:
    // 0x16c3cc: 0x0  nop
    ctx->pc = 0x16c3ccu;
    // NOP
label_16c3d0:
    // 0x16c3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16c3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16c3d4:
    // 0x16c3d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16c3d8:
    // 0x16c3d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c3dc:
    // 0x16c3dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_16c3e0:
    // 0x16c3e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16c3e4:
    // 0x16c3e4: 0xc0559ac  jal         func_1566B0
label_16c3e8:
    if (ctx->pc == 0x16C3E8u) {
        ctx->pc = 0x16C3ECu;
        goto label_16c3ec;
    }
    ctx->pc = 0x16C3E4u;
    SET_GPR_U32(ctx, 31, 0x16C3ECu);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x16C3E4u, 0x16C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C3ECu;
label_16c3ec:
    // 0x16c3ec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16c3ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16c3f0:
    // 0x16c3f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16c3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c3f4:
    // 0x16c3f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c3f8:
    // 0x16c3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c3fc:
    // 0x16c3fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16c3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16c400:
    // 0x16c400: 0x3e00008  jr          $ra
label_16c404:
    if (ctx->pc == 0x16C404u) {
        ctx->pc = 0x16C408u;
        goto label_16c408;
    }
    ctx->pc = 0x16C400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C408u;
label_16c408:
    // 0x16c408: 0x0  nop
    ctx->pc = 0x16c408u;
    // NOP
label_16c40c:
    // 0x16c40c: 0x0  nop
    ctx->pc = 0x16c40cu;
    // NOP
label_16c410:
    // 0x16c410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16c414:
    // 0x16c414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16c418:
    // 0x16c418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c41c:
    // 0x16c41c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_16c420:
    // 0x16c420: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16c420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16c424:
    // 0x16c424: 0xc0559dc  jal         func_156770
label_16c428:
    if (ctx->pc == 0x16C428u) {
        ctx->pc = 0x16C42Cu;
        goto label_16c42c;
    }
    ctx->pc = 0x16C424u;
    SET_GPR_U32(ctx, 31, 0x16C42Cu);
    ctx->pc = 0x156770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156770u, 0x16C424u, 0x16C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C42Cu;
label_16c42c:
    // 0x16c42c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16c42cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16c430:
    // 0x16c430: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16c430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c434:
    // 0x16c434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c438:
    // 0x16c438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c43c:
    // 0x16c43c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16c43cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16c440:
    // 0x16c440: 0x3e00008  jr          $ra
label_16c444:
    if (ctx->pc == 0x16C444u) {
        ctx->pc = 0x16C448u;
        goto label_16c448;
    }
    ctx->pc = 0x16C440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C448u;
label_16c448:
    // 0x16c448: 0x0  nop
    ctx->pc = 0x16c448u;
    // NOP
label_16c44c:
    // 0x16c44c: 0x0  nop
    ctx->pc = 0x16c44cu;
    // NOP
label_16c450:
    // 0x16c450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16c454:
    // 0x16c454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16c458:
    // 0x16c458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c45c:
    // 0x16c45c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_16c460:
    // 0x16c460: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16c460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16c464:
    // 0x16c464: 0xc0559ec  jal         func_1567B0
label_16c468:
    if (ctx->pc == 0x16C468u) {
        ctx->pc = 0x16C46Cu;
        goto label_16c46c;
    }
    ctx->pc = 0x16C464u;
    SET_GPR_U32(ctx, 31, 0x16C46Cu);
    ctx->pc = 0x1567B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1567B0u, 0x16C464u, 0x16C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C46Cu;
label_16c46c:
    // 0x16c46c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16c46cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16c470:
    // 0x16c470: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16c470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c474:
    // 0x16c474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c478:
    // 0x16c478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c47c:
    // 0x16c47c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16c47cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16c480:
    // 0x16c480: 0x3e00008  jr          $ra
label_16c484:
    if (ctx->pc == 0x16C484u) {
        ctx->pc = 0x16C488u;
        goto label_16c488;
    }
    ctx->pc = 0x16C480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C488u;
label_16c488:
    // 0x16c488: 0x0  nop
    ctx->pc = 0x16c488u;
    // NOP
label_16c48c:
    // 0x16c48c: 0x0  nop
    ctx->pc = 0x16c48cu;
    // NOP
label_16c490:
    // 0x16c490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16c490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16c494:
    // 0x16c494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16c498:
    // 0x16c498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16c498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16c49c:
    // 0x16c49c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x16c49cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_16c4a0:
    // 0x16c4a0: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x16c4a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_16c4a4:
    // 0x16c4a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16c4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16c4a8:
    // 0x16c4a8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_16c4ac:
    if (ctx->pc == 0x16C4ACu) {
        ctx->pc = 0x16C4B0u;
        goto label_16c4b0;
    }
    ctx->pc = 0x16C4A8u;
    {
        const bool branch_taken_0x16c4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c4a8) {
            ctx->pc = 0x16C4C4u;
            goto label_16c4c4;
        }
    }
    ctx->pc = 0x16C4B0u;
label_16c4b0:
    // 0x16c4b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c4b4:
    // 0x16c4b4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c4b8:
    // 0x16c4b8: 0xac64006c  sw          $a0, 0x6C($v1)
    ctx->pc = 0x16c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 4));
label_16c4bc:
    // 0x16c4bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_16c4c0:
    if (ctx->pc == 0x16C4C0u) {
        ctx->pc = 0x16C4C4u;
        goto label_16c4c4;
    }
    ctx->pc = 0x16C4BCu;
    {
        const bool branch_taken_0x16c4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c4bc) {
            ctx->pc = 0x16C4DCu;
            goto label_16c4dc;
        }
    }
    ctx->pc = 0x16C4C4u;
label_16c4c4:
    // 0x16c4c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c4c8:
    // 0x16c4c8: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x16c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_16c4cc:
    // 0x16c4cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c4d0:
    // 0x16c4d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c4d4:
    // 0x16c4d4: 0xc055a78  jal         func_1569E0
label_16c4d8:
    if (ctx->pc == 0x16C4D8u) {
        ctx->pc = 0x16C4DCu;
        goto label_16c4dc;
    }
    ctx->pc = 0x16C4D4u;
    SET_GPR_U32(ctx, 31, 0x16C4DCu);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x16C4D4u, 0x16C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4DCu;
label_16c4dc:
    // 0x16c4dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c4e0:
    // 0x16c4e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16c4e4:
    // 0x16c4e4: 0x3e00008  jr          $ra
label_16c4e8:
    if (ctx->pc == 0x16C4E8u) {
        ctx->pc = 0x16C4ECu;
        goto label_16c4ec;
    }
    ctx->pc = 0x16C4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C4ECu;
label_16c4ec:
    // 0x16c4ec: 0x0  nop
    ctx->pc = 0x16c4ecu;
    // NOP
label_16c4f0:
    // 0x16c4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16c4f4:
    // 0x16c4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16c4f8:
    // 0x16c4f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16c4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16c4fc:
    // 0x16c4fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c500:
    // 0x16c500: 0xc055a84  jal         func_156A10
label_16c504:
    if (ctx->pc == 0x16C504u) {
        ctx->pc = 0x16C508u;
        goto label_16c508;
    }
    ctx->pc = 0x16C500u;
    SET_GPR_U32(ctx, 31, 0x16C508u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x16C500u, 0x16C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C508u;
label_16c508:
    // 0x16c508: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16c508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c50c:
    // 0x16c50c: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x16c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_16c510:
    // 0x16c510: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x16c510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_16c514:
    // 0x16c514: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_16c518:
    if (ctx->pc == 0x16C518u) {
        ctx->pc = 0x16C51Cu;
        goto label_16c51c;
    }
    ctx->pc = 0x16C514u;
    {
        const bool branch_taken_0x16c514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c514) {
            ctx->pc = 0x16C54Cu;
            goto label_16c54c;
        }
    }
    ctx->pc = 0x16C51Cu;
label_16c51c:
    // 0x16c51c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c520:
    // 0x16c520: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x16c520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_16c524:
    // 0x16c524: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16c524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_16c528:
    // 0x16c528: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x16c528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
label_16c52c:
    // 0x16c52c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c530:
    // 0x16c530: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x16c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_16c534:
    // 0x16c534: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_16c538:
    if (ctx->pc == 0x16C538u) {
        ctx->pc = 0x16C53Cu;
        goto label_16c53c;
    }
    ctx->pc = 0x16C534u;
    {
        const bool branch_taken_0x16c534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c534) {
            ctx->pc = 0x16C54Cu;
            goto label_16c54c;
        }
    }
    ctx->pc = 0x16C53Cu;
label_16c53c:
    // 0x16c53c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c540:
    // 0x16c540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c544:
    // 0x16c544: 0xc055a78  jal         func_1569E0
label_16c548:
    if (ctx->pc == 0x16C548u) {
        ctx->pc = 0x16C54Cu;
        goto label_16c54c;
    }
    ctx->pc = 0x16C544u;
    SET_GPR_U32(ctx, 31, 0x16C54Cu);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x16C544u, 0x16C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C54Cu;
label_16c54c:
    // 0x16c54c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c550:
    // 0x16c550: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16c550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16c554:
    // 0x16c554: 0x3e00008  jr          $ra
label_16c558:
    if (ctx->pc == 0x16C558u) {
        ctx->pc = 0x16C55Cu;
        goto label_16c55c;
    }
    ctx->pc = 0x16C554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C55Cu;
label_16c55c:
    // 0x16c55c: 0x0  nop
    ctx->pc = 0x16c55cu;
    // NOP
label_16c560:
    // 0x16c560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16c564:
    // 0x16c564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16c568:
    // 0x16c568: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16c568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16c56c:
    // 0x16c56c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c570:
    // 0x16c570: 0xc055b3c  jal         func_156CF0
label_16c574:
    if (ctx->pc == 0x16C574u) {
        ctx->pc = 0x16C578u;
        goto label_16c578;
    }
    ctx->pc = 0x16C570u;
    SET_GPR_U32(ctx, 31, 0x16C578u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x16C570u, 0x16C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C578u;
label_16c578:
    // 0x16c578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c57c:
    // 0x16c57c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16c57cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16c580:
    // 0x16c580: 0x3e00008  jr          $ra
label_16c584:
    if (ctx->pc == 0x16C584u) {
        ctx->pc = 0x16C588u;
        goto label_16c588;
    }
    ctx->pc = 0x16C580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C588u;
label_16c588:
    // 0x16c588: 0x0  nop
    ctx->pc = 0x16c588u;
    // NOP
label_16c58c:
    // 0x16c58c: 0x0  nop
    ctx->pc = 0x16c58cu;
    // NOP
label_16c590:
    // 0x16c590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16c590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16c594:
    // 0x16c594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16c598:
    // 0x16c598: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16c598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16c59c:
    // 0x16c59c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_16c5a0:
    // 0x16c5a0: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x16c5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
label_16c5a4:
    // 0x16c5a4: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x16c5a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_16c5a8:
    // 0x16c5a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16c5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16c5ac:
    // 0x16c5ac: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
label_16c5b0:
    if (ctx->pc == 0x16C5B0u) {
        ctx->pc = 0x16C5B4u;
        goto label_16c5b4;
    }
    ctx->pc = 0x16C5ACu;
    {
        const bool branch_taken_0x16c5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c5ac) {
            ctx->pc = 0x16C774u;
            goto label_16c774;
        }
    }
    ctx->pc = 0x16C5B4u;
label_16c5b4:
    // 0x16c5b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16c5b8:
    // 0x16c5b8: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x16c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_16c5bc:
    // 0x16c5bc: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
label_16c5c0:
    if (ctx->pc == 0x16C5C0u) {
        ctx->pc = 0x16C5C4u;
        goto label_16c5c4;
    }
    ctx->pc = 0x16C5BCu;
    {
        const bool branch_taken_0x16c5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c5bc) {
            ctx->pc = 0x16C744u;
            goto label_16c744;
        }
    }
    ctx->pc = 0x16C5C4u;
label_16c5c4:
    // 0x16c5c4: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x16c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_16c5c8:
    // 0x16c5c8: 0x1083005e  beq         $a0, $v1, . + 4 + (0x5E << 2)
label_16c5cc:
    if (ctx->pc == 0x16C5CCu) {
        ctx->pc = 0x16C5D0u;
        goto label_16c5d0;
    }
    ctx->pc = 0x16C5C8u;
    {
        const bool branch_taken_0x16c5c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c5c8) {
            ctx->pc = 0x16C744u;
            goto label_16c744;
        }
    }
    ctx->pc = 0x16C5D0u;
label_16c5d0:
    // 0x16c5d0: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x16c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_16c5d4:
    // 0x16c5d4: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
label_16c5d8:
    if (ctx->pc == 0x16C5D8u) {
        ctx->pc = 0x16C5DCu;
        goto label_16c5dc;
    }
    ctx->pc = 0x16C5D4u;
    {
        const bool branch_taken_0x16c5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c5d4) {
            ctx->pc = 0x16C70Cu;
            goto label_16c70c;
        }
    }
    ctx->pc = 0x16C5DCu;
label_16c5dc:
    // 0x16c5dc: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x16c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_16c5e0:
    // 0x16c5e0: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
label_16c5e4:
    if (ctx->pc == 0x16C5E4u) {
        ctx->pc = 0x16C5E8u;
        goto label_16c5e8;
    }
    ctx->pc = 0x16C5E0u;
    {
        const bool branch_taken_0x16c5e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c5e0) {
            ctx->pc = 0x16C70Cu;
            goto label_16c70c;
        }
    }
    ctx->pc = 0x16C5E8u;
label_16c5e8:
    // 0x16c5e8: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x16c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_16c5ec:
    // 0x16c5ec: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_16c5f0:
    if (ctx->pc == 0x16C5F0u) {
        ctx->pc = 0x16C5F4u;
        goto label_16c5f4;
    }
    ctx->pc = 0x16C5ECu;
    {
        const bool branch_taken_0x16c5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c5ec) {
            ctx->pc = 0x16C5FCu;
            goto label_16c5fc;
        }
    }
    ctx->pc = 0x16C5F4u;
label_16c5f4:
    // 0x16c5f4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_16c5f8:
    if (ctx->pc == 0x16C5F8u) {
        ctx->pc = 0x16C5FCu;
        goto label_16c5fc;
    }
    ctx->pc = 0x16C5F4u;
    {
        const bool branch_taken_0x16c5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c5f4) {
            ctx->pc = 0x16C774u;
            goto label_16c774;
        }
    }
    ctx->pc = 0x16C5FCu;
label_16c5fc:
    // 0x16c5fc: 0xc08d32c  jal         func_234CB0
label_16c600:
    if (ctx->pc == 0x16C600u) {
        ctx->pc = 0x16C604u;
        goto label_16c604;
    }
    ctx->pc = 0x16C5FCu;
    SET_GPR_U32(ctx, 31, 0x16C604u);
    ctx->pc = 0x234CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234CB0u, 0x16C5FCu, 0x16C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C604u;
label_16c604:
    // 0x16c604: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_16c608:
    if (ctx->pc == 0x16C608u) {
        ctx->pc = 0x16C60Cu;
        goto label_16c60c;
    }
    ctx->pc = 0x16C604u;
    {
        const bool branch_taken_0x16c604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c604) {
            ctx->pc = 0x16C68Cu;
            goto label_16c68c;
        }
    }
    ctx->pc = 0x16C60Cu;
label_16c60c:
    // 0x16c60c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c610:
    // 0x16c610: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c614:
    // 0x16c614: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x16c614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_16c618:
    // 0x16c618: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x16c618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_16c61c:
    // 0x16c61c: 0x8f83bba8  lw          $v1, -0x4458($gp)
    ctx->pc = 0x16c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949800)));
label_16c620:
    // 0x16c620: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x16c620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_16c624:
    // 0x16c624: 0x8f83bba8  lw          $v1, -0x4458($gp)
    ctx->pc = 0x16c624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949800)));
label_16c628:
    // 0x16c628: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x16c628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_16c62c:
    // 0x16c62c: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
label_16c630:
    if (ctx->pc == 0x16C630u) {
        ctx->pc = 0x16C634u;
        goto label_16c634;
    }
    ctx->pc = 0x16C62Cu;
    {
        const bool branch_taken_0x16c62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c62c) {
            ctx->pc = 0x16C774u;
            goto label_16c774;
        }
    }
    ctx->pc = 0x16C634u;
label_16c634:
    // 0x16c634: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16c638:
    // 0x16c638: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16c638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16c63c:
    // 0x16c63c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16c640:
    // 0x16c640: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16c640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16c644:
    // 0x16c644: 0x24a543b0  addiu       $a1, $a1, 0x43B0
    ctx->pc = 0x16c644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17328));
label_16c648:
    // 0x16c648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c64c:
    // 0x16c64c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16c64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16c650:
    // 0x16c650: 0xc08f558  jal         func_23D560
label_16c654:
    if (ctx->pc == 0x16C654u) {
        ctx->pc = 0x16C658u;
        goto label_16c658;
    }
    ctx->pc = 0x16C650u;
    SET_GPR_U32(ctx, 31, 0x16C658u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16C650u, 0x16C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C658u;
label_16c658:
    // 0x16c658: 0x8f83bba8  lw          $v1, -0x4458($gp)
    ctx->pc = 0x16c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949800)));
label_16c65c:
    // 0x16c65c: 0x8f82bba8  lw          $v0, -0x4458($gp)
    ctx->pc = 0x16c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949800)));
label_16c660:
    // 0x16c660: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x16c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16c664:
    // 0x16c664: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x16c664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_16c668:
    // 0x16c668: 0x8f82bba8  lw          $v0, -0x4458($gp)
    ctx->pc = 0x16c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949800)));
label_16c66c:
    // 0x16c66c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x16c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_16c670:
    // 0x16c670: 0x40f809  jalr        $v0
label_16c674:
    if (ctx->pc == 0x16C674u) {
        ctx->pc = 0x16C678u;
        goto label_16c678;
    }
    ctx->pc = 0x16C670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16C678u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C670u, 0x16C678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C678u;
label_16c678:
    // 0x16c678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c67c:
    // 0x16c67c: 0xc08d230  jal         func_2348C0
label_16c680:
    if (ctx->pc == 0x16C680u) {
        ctx->pc = 0x16C684u;
        goto label_16c684;
    }
    ctx->pc = 0x16C67Cu;
    SET_GPR_U32(ctx, 31, 0x16C684u);
    ctx->pc = 0x2348C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C0u, 0x16C67Cu, 0x16C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C684u;
label_16c684:
    // 0x16c684: 0x1000003b  b           . + 4 + (0x3B << 2)
label_16c688:
    if (ctx->pc == 0x16C688u) {
        ctx->pc = 0x16C68Cu;
        goto label_16c68c;
    }
    ctx->pc = 0x16C684u;
    {
        const bool branch_taken_0x16c684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c684) {
            ctx->pc = 0x16C774u;
            goto label_16c774;
        }
    }
    ctx->pc = 0x16C68Cu;
label_16c68c:
    // 0x16c68c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c690:
    // 0x16c690: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c694:
    // 0x16c694: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x16c694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_16c698:
    // 0x16c698: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x16c698u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_16c69c:
    // 0x16c69c: 0x8f83bba4  lw          $v1, -0x445C($gp)
    ctx->pc = 0x16c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
label_16c6a0:
    // 0x16c6a0: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x16c6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_16c6a4:
    // 0x16c6a4: 0x8f83bba4  lw          $v1, -0x445C($gp)
    ctx->pc = 0x16c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
label_16c6a8:
    // 0x16c6a8: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x16c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_16c6ac:
    // 0x16c6ac: 0x10030031  beq         $zero, $v1, . + 4 + (0x31 << 2)
label_16c6b0:
    if (ctx->pc == 0x16C6B0u) {
        ctx->pc = 0x16C6B4u;
        goto label_16c6b4;
    }
    ctx->pc = 0x16C6ACu;
    {
        const bool branch_taken_0x16c6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c6ac) {
            ctx->pc = 0x16C774u;
            goto label_16c774;
        }
    }
    ctx->pc = 0x16C6B4u;
label_16c6b4:
    // 0x16c6b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16c6b8:
    // 0x16c6b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16c6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16c6bc:
    // 0x16c6bc: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16c6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16c6c0:
    // 0x16c6c0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16c6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16c6c4:
    // 0x16c6c4: 0x24a543b0  addiu       $a1, $a1, 0x43B0
    ctx->pc = 0x16c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17328));
label_16c6c8:
    // 0x16c6c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c6c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c6cc:
    // 0x16c6cc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16c6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16c6d0:
    // 0x16c6d0: 0xc08f558  jal         func_23D560
label_16c6d4:
    if (ctx->pc == 0x16C6D4u) {
        ctx->pc = 0x16C6D8u;
        goto label_16c6d8;
    }
    ctx->pc = 0x16C6D0u;
    SET_GPR_U32(ctx, 31, 0x16C6D8u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16C6D0u, 0x16C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6D8u;
label_16c6d8:
    // 0x16c6d8: 0x8f83bba4  lw          $v1, -0x445C($gp)
    ctx->pc = 0x16c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
label_16c6dc:
    // 0x16c6dc: 0x8f82bba4  lw          $v0, -0x445C($gp)
    ctx->pc = 0x16c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
label_16c6e0:
    // 0x16c6e0: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x16c6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16c6e4:
    // 0x16c6e4: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x16c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_16c6e8:
    // 0x16c6e8: 0x8f82bba4  lw          $v0, -0x445C($gp)
    ctx->pc = 0x16c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949796)));
label_16c6ec:
    // 0x16c6ec: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x16c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_16c6f0:
    // 0x16c6f0: 0x40f809  jalr        $v0
label_16c6f4:
    if (ctx->pc == 0x16C6F4u) {
        ctx->pc = 0x16C6F8u;
        goto label_16c6f8;
    }
    ctx->pc = 0x16C6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16C6F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C6F0u, 0x16C6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C6F8u;
label_16c6f8:
    // 0x16c6f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16c6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c6fc:
    // 0x16c6fc: 0xc08d230  jal         func_2348C0
label_16c700:
    if (ctx->pc == 0x16C700u) {
        ctx->pc = 0x16C704u;
        goto label_16c704;
    }
    ctx->pc = 0x16C6FCu;
    SET_GPR_U32(ctx, 31, 0x16C704u);
    ctx->pc = 0x2348C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C0u, 0x16C6FCu, 0x16C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C704u;
label_16c704:
    // 0x16c704: 0x1000001b  b           . + 4 + (0x1B << 2)
label_16c708:
    if (ctx->pc == 0x16C708u) {
        ctx->pc = 0x16C70Cu;
        goto label_16c70c;
    }
    ctx->pc = 0x16C704u;
    {
        const bool branch_taken_0x16c704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c704) {
            ctx->pc = 0x16C774u;
            goto label_16c774;
        }
    }
    ctx->pc = 0x16C70Cu;
label_16c70c:
    // 0x16c70c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16c710:
    // 0x16c710: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16c710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16c714:
    // 0x16c714: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16c714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16c718:
    // 0x16c718: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16c718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16c71c:
    // 0x16c71c: 0x24a543d0  addiu       $a1, $a1, 0x43D0
    ctx->pc = 0x16c71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17360));
label_16c720:
    // 0x16c720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c724:
    // 0x16c724: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16c724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16c728:
    // 0x16c728: 0xc08f558  jal         func_23D560
label_16c72c:
    if (ctx->pc == 0x16C72Cu) {
        ctx->pc = 0x16C730u;
        goto label_16c730;
    }
    ctx->pc = 0x16C728u;
    SET_GPR_U32(ctx, 31, 0x16C730u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16C728u, 0x16C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C730u;
label_16c730:
    // 0x16c730: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16c730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c734:
    // 0x16c734: 0xc05b69c  jal         func_16DA70
label_16c738:
    if (ctx->pc == 0x16C738u) {
        ctx->pc = 0x16C73Cu;
        goto label_16c73c;
    }
    ctx->pc = 0x16C734u;
    SET_GPR_U32(ctx, 31, 0x16C73Cu);
    ctx->pc = 0x16DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA70u, 0x16C734u, 0x16C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C73Cu;
label_16c73c:
    // 0x16c73c: 0x1000000d  b           . + 4 + (0xD << 2)
label_16c740:
    if (ctx->pc == 0x16C740u) {
        ctx->pc = 0x16C744u;
        goto label_16c744;
    }
    ctx->pc = 0x16C73Cu;
    {
        const bool branch_taken_0x16c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c73c) {
            ctx->pc = 0x16C774u;
            goto label_16c774;
        }
    }
    ctx->pc = 0x16C744u;
label_16c744:
    // 0x16c744: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16c748:
    // 0x16c748: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16c748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16c74c:
    // 0x16c74c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x16c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_16c750:
    // 0x16c750: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16c750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16c754:
    // 0x16c754: 0x24a543d0  addiu       $a1, $a1, 0x43D0
    ctx->pc = 0x16c754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17360));
label_16c758:
    // 0x16c758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c75c:
    // 0x16c75c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16c75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16c760:
    // 0x16c760: 0xc08f558  jal         func_23D560
label_16c764:
    if (ctx->pc == 0x16C764u) {
        ctx->pc = 0x16C768u;
        goto label_16c768;
    }
    ctx->pc = 0x16C760u;
    SET_GPR_U32(ctx, 31, 0x16C768u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x16C760u, 0x16C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C768u;
label_16c768:
    // 0x16c768: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16c768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c76c:
    // 0x16c76c: 0xc05b6b4  jal         func_16DAD0
label_16c770:
    if (ctx->pc == 0x16C770u) {
        ctx->pc = 0x16C774u;
        goto label_16c774;
    }
    ctx->pc = 0x16C76Cu;
    SET_GPR_U32(ctx, 31, 0x16C774u);
    ctx->pc = 0x16DAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DAD0u, 0x16C76Cu, 0x16C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C774u;
label_16c774:
    // 0x16c774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c778:
    // 0x16c778: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x16c778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16c77c:
    // 0x16c77c: 0x3e00008  jr          $ra
label_16c780:
    if (ctx->pc == 0x16C780u) {
        ctx->pc = 0x16C784u;
        goto label_16c784;
    }
    ctx->pc = 0x16C77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C784u;
label_16c784:
    // 0x16c784: 0x0  nop
    ctx->pc = 0x16c784u;
    // NOP
label_16c788:
    // 0x16c788: 0x0  nop
    ctx->pc = 0x16c788u;
    // NOP
label_16c78c:
    // 0x16c78c: 0x0  nop
    ctx->pc = 0x16c78cu;
    // NOP
label_16c790:
    // 0x16c790: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x16c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_16c794:
    // 0x16c794: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x16c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_16c798:
    // 0x16c798: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_16c79c:
    // 0x16c79c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_16c7a0:
    // 0x16c7a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16c7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_16c7a4:
    // 0x16c7a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16c7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16c7a8:
    // 0x16c7a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16c7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16c7ac:
    // 0x16c7ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16c7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16c7b0:
    // 0x16c7b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16c7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16c7b4:
    // 0x16c7b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16c7b8:
    // 0x16c7b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c7bc:
    // 0x16c7bc: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x16c7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_16c7c0:
    // 0x16c7c0: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x16c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_16c7c4:
    // 0x16c7c4: 0xafa60160  sw          $a2, 0x160($sp)
    ctx->pc = 0x16c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
label_16c7c8:
    // 0x16c7c8: 0xafa70170  sw          $a3, 0x170($sp)
    ctx->pc = 0x16c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 7));
label_16c7cc:
    // 0x16c7cc: 0xafa80180  sw          $t0, 0x180($sp)
    ctx->pc = 0x16c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 8));
label_16c7d0:
    // 0x16c7d0: 0xafa90190  sw          $t1, 0x190($sp)
    ctx->pc = 0x16c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 9));
label_16c7d4:
    // 0x16c7d4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c7d8:
    // 0x16c7d8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x16c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_16c7dc:
    // 0x16c7dc: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x16c7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_16c7e0:
    // 0x16c7e0: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x16c7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_16c7e4:
    // 0x16c7e4: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x16c7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_16c7e8:
    // 0x16c7e8: 0x8fa80180  lw          $t0, 0x180($sp)
    ctx->pc = 0x16c7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_16c7ec:
    // 0x16c7ec: 0x8fa90190  lw          $t1, 0x190($sp)
    ctx->pc = 0x16c7ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_16c7f0:
    // 0x16c7f0: 0xc08d2b8  jal         func_234AE0
label_16c7f4:
    if (ctx->pc == 0x16C7F4u) {
        ctx->pc = 0x16C7F8u;
        goto label_16c7f8;
    }
    ctx->pc = 0x16C7F0u;
    SET_GPR_U32(ctx, 31, 0x16C7F8u);
    ctx->pc = 0x234AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234AE0u, 0x16C7F0u, 0x16C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C7F8u;
label_16c7f8:
    // 0x16c7f8: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x16c7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_16c7fc:
    // 0x16c7fc: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x16c7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_16c800:
    // 0x16c800: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x16c800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_16c804:
    // 0x16c804: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_16c808:
    if (ctx->pc == 0x16C808u) {
        ctx->pc = 0x16C80Cu;
        goto label_16c80c;
    }
    ctx->pc = 0x16C804u;
    {
        const bool branch_taken_0x16c804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c804) {
            ctx->pc = 0x16C81Cu;
            goto label_16c81c;
        }
    }
    ctx->pc = 0x16C80Cu;
label_16c80c:
    // 0x16c80c: 0xc08d32c  jal         func_234CB0
label_16c810:
    if (ctx->pc == 0x16C810u) {
        ctx->pc = 0x16C814u;
        goto label_16c814;
    }
    ctx->pc = 0x16C80Cu;
    SET_GPR_U32(ctx, 31, 0x16C814u);
    ctx->pc = 0x234CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234CB0u, 0x16C80Cu, 0x16C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C814u;
label_16c814:
    // 0x16c814: 0x1440043f  bnez        $v0, . + 4 + (0x43F << 2)
label_16c818:
    if (ctx->pc == 0x16C818u) {
        ctx->pc = 0x16C81Cu;
        goto label_16c81c;
    }
    ctx->pc = 0x16C814u;
    {
        const bool branch_taken_0x16c814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c814) {
            ctx->pc = 0x16D914u;
            goto label_16d914;
        }
    }
    ctx->pc = 0x16C81Cu;
label_16c81c:
    // 0x16c81c: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x16c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_16c820:
    // 0x16c820: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x16c820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
label_16c824:
    // 0x16c824: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x16c824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_16c828:
    // 0x16c828: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_16c82c:
    if (ctx->pc == 0x16C82Cu) {
        ctx->pc = 0x16C830u;
        goto label_16c830;
    }
    ctx->pc = 0x16C828u;
    {
        const bool branch_taken_0x16c828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c828) {
            ctx->pc = 0x16C880u;
            goto label_16c880;
        }
    }
    ctx->pc = 0x16C830u;
label_16c830:
    // 0x16c830: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x16c830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_16c834:
    // 0x16c834: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16c834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c838:
    // 0x16c838: 0x27858f70  addiu       $a1, $gp, -0x7090
    ctx->pc = 0x16c838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938480));
label_16c83c:
    // 0x16c83c: 0xc0bc3e2  jal         func_2F0F88
label_16c840:
    if (ctx->pc == 0x16C840u) {
        ctx->pc = 0x16C844u;
        goto label_16c844;
    }
    ctx->pc = 0x16C83Cu;
    SET_GPR_U32(ctx, 31, 0x16C844u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16C83Cu, 0x16C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C844u;
label_16c844:
    // 0x16c844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16c844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c848:
    // 0x16c848: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16c848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c84c:
    // 0x16c84c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x16c84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_16c850:
    // 0x16c850: 0xc0552e4  jal         func_154B90
label_16c854:
    if (ctx->pc == 0x16C854u) {
        ctx->pc = 0x16C858u;
        goto label_16c858;
    }
    ctx->pc = 0x16C850u;
    SET_GPR_U32(ctx, 31, 0x16C858u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16C850u, 0x16C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C858u;
label_16c858:
    // 0x16c858: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16c858u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c85c:
    // 0x16c85c: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x16c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
label_16c860:
    // 0x16c860: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c864:
    // 0x16c864: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x16c864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_16c868:
    // 0x16c868: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x16c868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16c86c:
    // 0x16c86c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16c86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16c870:
    // 0x16c870: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16c870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c874:
    // 0x16c874: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x16c874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16c878:
    // 0x16c878: 0xc08c8dc  jal         func_232370
label_16c87c:
    if (ctx->pc == 0x16C87Cu) {
        ctx->pc = 0x16C880u;
        goto label_16c880;
    }
    ctx->pc = 0x16C878u;
    SET_GPR_U32(ctx, 31, 0x16C880u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16C878u, 0x16C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C880u;
label_16c880:
    // 0x16c880: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16c880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c884:
    // 0x16c884: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x16c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_16c888:
    // 0x16c888: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_16c88c:
    if (ctx->pc == 0x16C88Cu) {
        ctx->pc = 0x16C890u;
        goto label_16c890;
    }
    ctx->pc = 0x16C888u;
    {
        const bool branch_taken_0x16c888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c888) {
            ctx->pc = 0x16C8D0u;
            goto label_16c8d0;
        }
    }
    ctx->pc = 0x16C890u;
label_16c890:
    // 0x16c890: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16c890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c894:
    // 0x16c894: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c898:
    // 0x16c898: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x16c898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_16c89c:
    // 0x16c89c: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x16c89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_16c8a0:
    // 0x16c8a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16c8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16c8a4:
    // 0x16c8a4: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x16c8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_16c8a8:
    // 0x16c8a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16c8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c8ac:
    // 0x16c8ac: 0xc08c378  jal         func_230DE0
label_16c8b0:
    if (ctx->pc == 0x16C8B0u) {
        ctx->pc = 0x16C8B4u;
        goto label_16c8b4;
    }
    ctx->pc = 0x16C8ACu;
    SET_GPR_U32(ctx, 31, 0x16C8B4u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16C8ACu, 0x16C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C8B4u;
label_16c8b4:
    // 0x16c8b4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16c8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c8b8:
    // 0x16c8b8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c8bc:
    // 0x16c8bc: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x16c8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_16c8c0:
    // 0x16c8c0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16c8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_16c8c4:
    // 0x16c8c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16c8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c8c8:
    // 0x16c8c8: 0xc08c8dc  jal         func_232370
label_16c8cc:
    if (ctx->pc == 0x16C8CCu) {
        ctx->pc = 0x16C8D0u;
        goto label_16c8d0;
    }
    ctx->pc = 0x16C8C8u;
    SET_GPR_U32(ctx, 31, 0x16C8D0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16C8C8u, 0x16C8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C8D0u;
label_16c8d0:
    // 0x16c8d0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x16c8d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c8d4:
    // 0x16c8d4: 0x1000000c  b           . + 4 + (0xC << 2)
label_16c8d8:
    if (ctx->pc == 0x16C8D8u) {
        ctx->pc = 0x16C8DCu;
        goto label_16c8dc;
    }
    ctx->pc = 0x16C8D4u;
    {
        const bool branch_taken_0x16c8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c8d4) {
            ctx->pc = 0x16C908u;
            goto label_16c908;
        }
    }
    ctx->pc = 0x16C8DCu;
label_16c8dc:
    // 0x16c8dc: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16c8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c8e0:
    // 0x16c8e0: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x16c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_16c8e4:
    // 0x16c8e4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c8e8:
    // 0x16c8e8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x16c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16c8ec:
    // 0x16c8ec: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x16c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_16c8f0:
    // 0x16c8f0: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x16c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_16c8f4:
    // 0x16c8f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16c8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c8f8:
    // 0x16c8f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c8f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c8fc:
    // 0x16c8fc: 0xc08c8dc  jal         func_232370
label_16c900:
    if (ctx->pc == 0x16C900u) {
        ctx->pc = 0x16C904u;
        goto label_16c904;
    }
    ctx->pc = 0x16C8FCu;
    SET_GPR_U32(ctx, 31, 0x16C904u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16C8FCu, 0x16C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C904u;
label_16c904:
    // 0x16c904: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x16c904u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_16c908:
    // 0x16c908: 0x2ae50003  slti        $a1, $s7, 0x3
    ctx->pc = 0x16c908u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
label_16c90c:
    // 0x16c90c: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
label_16c910:
    if (ctx->pc == 0x16C910u) {
        ctx->pc = 0x16C914u;
        goto label_16c914;
    }
    ctx->pc = 0x16C90Cu;
    {
        const bool branch_taken_0x16c90c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c90c) {
            ctx->pc = 0x16C8DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c8dc;
        }
    }
    ctx->pc = 0x16C914u;
label_16c914:
    // 0x16c914: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x16c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_16c918:
    // 0x16c918: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x16c918u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_16c91c:
    // 0x16c91c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x16c91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16c920:
    // 0x16c920: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x16c920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
label_16c924:
    // 0x16c924: 0x8fa50134  lw          $a1, 0x134($sp)
    ctx->pc = 0x16c924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_16c928:
    // 0x16c928: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_16c92c:
    if (ctx->pc == 0x16C92Cu) {
        ctx->pc = 0x16C930u;
        goto label_16c930;
    }
    ctx->pc = 0x16C928u;
    {
        const bool branch_taken_0x16c928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c928) {
            ctx->pc = 0x16C95Cu;
            goto label_16c95c;
        }
    }
    ctx->pc = 0x16C930u;
label_16c930:
    // 0x16c930: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16c930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c934:
    // 0x16c934: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x16c934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_16c938:
    // 0x16c938: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x16c938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16c93c:
    // 0x16c93c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x16c93cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16c940:
    // 0x16c940: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16c940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c944:
    // 0x16c944: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x16c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_16c948:
    // 0x16c948: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x16c948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_16c94c:
    // 0x16c94c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16c950:
    // 0x16c950: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16c950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c954:
    // 0x16c954: 0xc08c8dc  jal         func_232370
label_16c958:
    if (ctx->pc == 0x16C958u) {
        ctx->pc = 0x16C95Cu;
        goto label_16c95c;
    }
    ctx->pc = 0x16C954u;
    SET_GPR_U32(ctx, 31, 0x16C95Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16C954u, 0x16C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C95Cu;
label_16c95c:
    // 0x16c95c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x16c95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_16c960:
    // 0x16c960: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16c960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16c964:
    // 0x16c964: 0xc0495d4  jal         func_125750
label_16c968:
    if (ctx->pc == 0x16C968u) {
        ctx->pc = 0x16C96Cu;
        goto label_16c96c;
    }
    ctx->pc = 0x16C964u;
    SET_GPR_U32(ctx, 31, 0x16C96Cu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x16C964u, 0x16C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C96Cu;
label_16c96c:
    // 0x16c96c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16c96cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c970:
    // 0x16c970: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x16c970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_16c974:
    // 0x16c974: 0xc0495d4  jal         func_125750
label_16c978:
    if (ctx->pc == 0x16C978u) {
        ctx->pc = 0x16C97Cu;
        goto label_16c97c;
    }
    ctx->pc = 0x16C974u;
    SET_GPR_U32(ctx, 31, 0x16C97Cu);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x16C974u, 0x16C97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C97Cu;
label_16c97c:
    // 0x16c97c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16c97cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c980:
    // 0x16c980: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x16c980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_16c984:
    // 0x16c984: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x16c984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_16c988:
    // 0x16c988: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16c988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c98c:
    // 0x16c98c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16c98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c990:
    // 0x16c990: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16c990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c994:
    // 0x16c994: 0x24a40070  addiu       $a0, $a1, 0x70
    ctx->pc = 0x16c994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_16c998:
    // 0x16c998: 0xc056144  jal         func_158510
label_16c99c:
    if (ctx->pc == 0x16C99Cu) {
        ctx->pc = 0x16C9A0u;
        goto label_16c9a0;
    }
    ctx->pc = 0x16C998u;
    SET_GPR_U32(ctx, 31, 0x16C9A0u);
    ctx->pc = 0x158510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158510u, 0x16C998u, 0x16C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9A0u;
label_16c9a0:
    // 0x16c9a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16c9a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c9a4:
    // 0x16c9a4: 0x10000009  b           . + 4 + (0x9 << 2)
label_16c9a8:
    if (ctx->pc == 0x16C9A8u) {
        ctx->pc = 0x16C9ACu;
        goto label_16c9ac;
    }
    ctx->pc = 0x16C9A4u;
    {
        const bool branch_taken_0x16c9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c9a4) {
            ctx->pc = 0x16C9CCu;
            goto label_16c9cc;
        }
    }
    ctx->pc = 0x16C9ACu;
label_16c9ac:
    // 0x16c9ac: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16c9acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c9b0:
    // 0x16c9b0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x16c9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16c9b4:
    // 0x16c9b4: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x16c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_16c9b8:
    // 0x16c9b8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x16c9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16c9bc:
    // 0x16c9bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c9c0:
    // 0x16c9c0: 0xc08c8dc  jal         func_232370
label_16c9c4:
    if (ctx->pc == 0x16C9C4u) {
        ctx->pc = 0x16C9C8u;
        goto label_16c9c8;
    }
    ctx->pc = 0x16C9C0u;
    SET_GPR_U32(ctx, 31, 0x16C9C8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16C9C0u, 0x16C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9C8u;
label_16c9c8:
    // 0x16c9c8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x16c9c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_16c9cc:
    // 0x16c9cc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16c9d0:
    // 0x16c9d0: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x16c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_16c9d4:
    // 0x16c9d4: 0xc05613c  jal         func_1584F0
label_16c9d8:
    if (ctx->pc == 0x16C9D8u) {
        ctx->pc = 0x16C9DCu;
        goto label_16c9dc;
    }
    ctx->pc = 0x16C9D4u;
    SET_GPR_U32(ctx, 31, 0x16C9DCu);
    ctx->pc = 0x1584F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584F0u, 0x16C9D4u, 0x16C9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9DCu;
label_16c9dc:
    // 0x16c9dc: 0x1642fff3  bne         $s2, $v0, . + 4 + (-0xD << 2)
label_16c9e0:
    if (ctx->pc == 0x16C9E0u) {
        ctx->pc = 0x16C9E4u;
        goto label_16c9e4;
    }
    ctx->pc = 0x16C9DCu;
    {
        const bool branch_taken_0x16c9dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c9dc) {
            ctx->pc = 0x16C9ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c9ac;
        }
    }
    ctx->pc = 0x16C9E4u;
label_16c9e4:
    // 0x16c9e4: 0x10000084  b           . + 4 + (0x84 << 2)
label_16c9e8:
    if (ctx->pc == 0x16C9E8u) {
        ctx->pc = 0x16C9ECu;
        goto label_16c9ec;
    }
    ctx->pc = 0x16C9E4u;
    {
        const bool branch_taken_0x16c9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c9e4) {
            ctx->pc = 0x16CBF8u;
            goto label_16cbf8;
        }
    }
    ctx->pc = 0x16C9ECu;
label_16c9ec:
    // 0x16c9ec: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x16c9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_16c9f0:
    // 0x16c9f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16c9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c9f4:
    // 0x16c9f4: 0xc04ddfc  jal         func_1377F0
label_16c9f8:
    if (ctx->pc == 0x16C9F8u) {
        ctx->pc = 0x16C9FCu;
        goto label_16c9fc;
    }
    ctx->pc = 0x16C9F4u;
    SET_GPR_U32(ctx, 31, 0x16C9FCu);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x16C9F4u, 0x16C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9FCu;
label_16c9fc:
    // 0x16c9fc: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x16c9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_16ca00:
    // 0x16ca00: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x16ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_16ca04:
    // 0x16ca04: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16ca04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ca08:
    // 0x16ca08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16ca08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ca0c:
    // 0x16ca0c: 0x1000005f  b           . + 4 + (0x5F << 2)
label_16ca10:
    if (ctx->pc == 0x16CA10u) {
        ctx->pc = 0x16CA14u;
        goto label_16ca14;
    }
    ctx->pc = 0x16CA0Cu;
    {
        const bool branch_taken_0x16ca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ca0c) {
            ctx->pc = 0x16CB8Cu;
            goto label_16cb8c;
        }
    }
    ctx->pc = 0x16CA14u;
label_16ca14:
    // 0x16ca14: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x16ca14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_16ca18:
    // 0x16ca18: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16ca18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16ca1c:
    // 0x16ca1c: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x16ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_16ca20:
    // 0x16ca20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ca20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ca24:
    // 0x16ca24: 0xc056368  jal         func_158DA0
label_16ca28:
    if (ctx->pc == 0x16CA28u) {
        ctx->pc = 0x16CA2Cu;
        goto label_16ca2c;
    }
    ctx->pc = 0x16CA24u;
    SET_GPR_U32(ctx, 31, 0x16CA2Cu);
    ctx->pc = 0x158DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158DA0u, 0x16CA24u, 0x16CA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CA2Cu;
label_16ca2c:
    // 0x16ca2c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ca30:
    // 0x16ca30: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x16ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16ca34:
    // 0x16ca34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ca34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ca38:
    // 0x16ca38: 0xc05612c  jal         func_1584B0
label_16ca3c:
    if (ctx->pc == 0x16CA3Cu) {
        ctx->pc = 0x16CA40u;
        goto label_16ca40;
    }
    ctx->pc = 0x16CA38u;
    SET_GPR_U32(ctx, 31, 0x16CA40u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x16CA38u, 0x16CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CA40u;
label_16ca40:
    // 0x16ca40: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16ca40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16ca44:
    // 0x16ca44: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x16ca44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_16ca48:
    // 0x16ca48: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16ca48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16ca4c:
    // 0x16ca4c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x16ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_16ca50:
    // 0x16ca50: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x16ca50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16ca54:
    // 0x16ca54: 0x8fa70130  lw          $a3, 0x130($sp)
    ctx->pc = 0x16ca54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_16ca58:
    // 0x16ca58: 0xc056334  jal         func_158CD0
label_16ca5c:
    if (ctx->pc == 0x16CA5Cu) {
        ctx->pc = 0x16CA60u;
        goto label_16ca60;
    }
    ctx->pc = 0x16CA58u;
    SET_GPR_U32(ctx, 31, 0x16CA60u);
    ctx->pc = 0x158CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158CD0u, 0x16CA58u, 0x16CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CA60u;
label_16ca60:
    // 0x16ca60: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16ca60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ca64:
    // 0x16ca64: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x16ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_16ca68:
    // 0x16ca68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16ca68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ca6c:
    // 0x16ca6c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x16ca6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_16ca70:
    // 0x16ca70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16ca70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ca74:
    // 0x16ca74: 0xc08c378  jal         func_230DE0
label_16ca78:
    if (ctx->pc == 0x16CA78u) {
        ctx->pc = 0x16CA7Cu;
        goto label_16ca7c;
    }
    ctx->pc = 0x16CA74u;
    SET_GPR_U32(ctx, 31, 0x16CA7Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16CA74u, 0x16CA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CA7Cu;
label_16ca7c:
    // 0x16ca7c: 0x8fa80140  lw          $t0, 0x140($sp)
    ctx->pc = 0x16ca7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ca80:
    // 0x16ca80: 0x8d050034  lw          $a1, 0x34($t0)
    ctx->pc = 0x16ca80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
label_16ca84:
    // 0x16ca84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16ca84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16ca88:
    // 0x16ca88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16ca88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ca8c:
    // 0x16ca8c: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x16ca8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_16ca90:
    // 0x16ca90: 0xc08c6c8  jal         func_231B20
label_16ca94:
    if (ctx->pc == 0x16CA94u) {
        ctx->pc = 0x16CA98u;
        goto label_16ca98;
    }
    ctx->pc = 0x16CA90u;
    SET_GPR_U32(ctx, 31, 0x16CA98u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x16CA90u, 0x16CA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CA98u;
label_16ca98:
    // 0x16ca98: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x16ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_16ca9c:
    // 0x16ca9c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x16ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_16caa0:
    // 0x16caa0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_16caa4:
    if (ctx->pc == 0x16CAA4u) {
        ctx->pc = 0x16CAA8u;
        goto label_16caa8;
    }
    ctx->pc = 0x16CAA0u;
    {
        const bool branch_taken_0x16caa0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16caa0) {
            ctx->pc = 0x16CABCu;
            goto label_16cabc;
        }
    }
    ctx->pc = 0x16CAA8u;
label_16caa8:
    // 0x16caa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16caa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16caac:
    // 0x16caac: 0x0  nop
    ctx->pc = 0x16caacu;
    // NOP
label_16cab0:
    // 0x16cab0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16cab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16cab4:
    // 0x16cab4: 0x10000008  b           . + 4 + (0x8 << 2)
label_16cab8:
    if (ctx->pc == 0x16CAB8u) {
        ctx->pc = 0x16CABCu;
        goto label_16cabc;
    }
    ctx->pc = 0x16CAB4u;
    {
        const bool branch_taken_0x16cab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cab4) {
            ctx->pc = 0x16CAD8u;
            goto label_16cad8;
        }
    }
    ctx->pc = 0x16CABCu;
label_16cabc:
    // 0x16cabc: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x16cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_16cac0:
    // 0x16cac0: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x16cac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_16cac4:
    // 0x16cac4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16cac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_16cac8:
    // 0x16cac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16cac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cacc:
    // 0x16cacc: 0x0  nop
    ctx->pc = 0x16caccu;
    // NOP
label_16cad0:
    // 0x16cad0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16cad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16cad4:
    // 0x16cad4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x16cad4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_16cad8:
    // 0x16cad8: 0x3c044420  lui         $a0, 0x4420
    ctx->pc = 0x16cad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17440 << 16));
label_16cadc:
    // 0x16cadc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16cadcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cae0:
    // 0x16cae0: 0x0  nop
    ctx->pc = 0x16cae0u;
    // NOP
label_16cae4:
    // 0x16cae4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x16cae4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_16cae8:
    // 0x16cae8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x16cae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16caec:
    // 0x16caec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16caecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16caf0:
    // 0x16caf0: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x16caf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_16caf4:
    // 0x16caf4: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16caf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16caf8:
    // 0x16caf8: 0x8cc70054  lw          $a3, 0x54($a2)
    ctx->pc = 0x16caf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_16cafc:
    // 0x16cafc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x16cafcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16cb00:
    // 0x16cb00: 0x0  nop
    ctx->pc = 0x16cb00u;
    // NOP
label_16cb04:
    // 0x16cb04: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16cb04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16cb08:
    // 0x16cb08: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x16cb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cb0c:
    // 0x16cb0c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16cb0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cb10:
    // 0x16cb10: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_16cb14:
    if (ctx->pc == 0x16CB14u) {
        ctx->pc = 0x16CB18u;
        goto label_16cb18;
    }
    ctx->pc = 0x16CB10u;
    {
        const bool branch_taken_0x16cb10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cb10) {
            ctx->pc = 0x16CB80u;
            goto label_16cb80;
        }
    }
    ctx->pc = 0x16CB18u;
label_16cb18:
    // 0x16cb18: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x16cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_16cb1c:
    // 0x16cb1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16cb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cb20:
    // 0x16cb20: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x16cb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_16cb24:
    // 0x16cb24: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x16cb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16cb28:
    // 0x16cb28: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16cb28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16cb2c:
    // 0x16cb2c: 0xc056334  jal         func_158CD0
label_16cb30:
    if (ctx->pc == 0x16CB30u) {
        ctx->pc = 0x16CB34u;
        goto label_16cb34;
    }
    ctx->pc = 0x16CB2Cu;
    SET_GPR_U32(ctx, 31, 0x16CB34u);
    ctx->pc = 0x158CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158CD0u, 0x16CB2Cu, 0x16CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB34u;
label_16cb34:
    // 0x16cb34: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cb38:
    // 0x16cb38: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16cb3c:
    // 0x16cb3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16cb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cb40:
    // 0x16cb40: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x16cb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_16cb44:
    // 0x16cb44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16cb44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cb48:
    // 0x16cb48: 0xc08c378  jal         func_230DE0
label_16cb4c:
    if (ctx->pc == 0x16CB4Cu) {
        ctx->pc = 0x16CB50u;
        goto label_16cb50;
    }
    ctx->pc = 0x16CB48u;
    SET_GPR_U32(ctx, 31, 0x16CB50u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16CB48u, 0x16CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB50u;
label_16cb50:
    // 0x16cb50: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16cb50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cb54:
    // 0x16cb54: 0x8ce50034  lw          $a1, 0x34($a3)
    ctx->pc = 0x16cb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_16cb58:
    // 0x16cb58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16cb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16cb5c:
    // 0x16cb5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16cb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cb60:
    // 0x16cb60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16cb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cb64:
    // 0x16cb64: 0xc08c8dc  jal         func_232370
label_16cb68:
    if (ctx->pc == 0x16CB68u) {
        ctx->pc = 0x16CB6Cu;
        goto label_16cb6c;
    }
    ctx->pc = 0x16CB64u;
    SET_GPR_U32(ctx, 31, 0x16CB6Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16CB64u, 0x16CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB6Cu;
label_16cb6c:
    // 0x16cb6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16cb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16cb70:
    // 0x16cb70: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x16cb70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16cb74:
    // 0x16cb74: 0xafb40130  sw          $s4, 0x130($sp)
    ctx->pc = 0x16cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 20));
label_16cb78:
    // 0x16cb78: 0x10000004  b           . + 4 + (0x4 << 2)
label_16cb7c:
    if (ctx->pc == 0x16CB7Cu) {
        ctx->pc = 0x16CB80u;
        goto label_16cb80;
    }
    ctx->pc = 0x16CB78u;
    {
        const bool branch_taken_0x16cb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cb78) {
            ctx->pc = 0x16CB8Cu;
            goto label_16cb8c;
        }
    }
    ctx->pc = 0x16CB80u;
label_16cb80:
    // 0x16cb80: 0x8fb30130  lw          $s3, 0x130($sp)
    ctx->pc = 0x16cb80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_16cb84:
    // 0x16cb84: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x16cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16cb88:
    // 0x16cb88: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x16cb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_16cb8c:
    // 0x16cb8c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cb90:
    // 0x16cb90: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x16cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16cb94:
    // 0x16cb94: 0xc05611c  jal         func_158470
label_16cb98:
    if (ctx->pc == 0x16CB98u) {
        ctx->pc = 0x16CB9Cu;
        goto label_16cb9c;
    }
    ctx->pc = 0x16CB94u;
    SET_GPR_U32(ctx, 31, 0x16CB9Cu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x16CB94u, 0x16CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB9Cu;
label_16cb9c:
    // 0x16cb9c: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x16cb9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16cba0:
    // 0x16cba0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_16cba4:
    if (ctx->pc == 0x16CBA4u) {
        ctx->pc = 0x16CBA8u;
        goto label_16cba8;
    }
    ctx->pc = 0x16CBA0u;
    {
        const bool branch_taken_0x16cba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cba0) {
            ctx->pc = 0x16CBBCu;
            goto label_16cbbc;
        }
    }
    ctx->pc = 0x16CBA8u;
label_16cba8:
    // 0x16cba8: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x16cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_16cbac:
    // 0x16cbac: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x16cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_16cbb0:
    // 0x16cbb0: 0x82382b  sltu        $a3, $a0, $v0
    ctx->pc = 0x16cbb0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16cbb4:
    // 0x16cbb4: 0x14e0ff97  bnez        $a3, . + 4 + (-0x69 << 2)
label_16cbb8:
    if (ctx->pc == 0x16CBB8u) {
        ctx->pc = 0x16CBBCu;
        goto label_16cbbc;
    }
    ctx->pc = 0x16CBB4u;
    {
        const bool branch_taken_0x16cbb4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cbb4) {
            ctx->pc = 0x16CA14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ca14;
        }
    }
    ctx->pc = 0x16CBBCu;
label_16cbbc:
    // 0x16cbbc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cbc0:
    // 0x16cbc0: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x16cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_16cbc4:
    // 0x16cbc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16cbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16cbc8:
    // 0x16cbc8: 0xc05611c  jal         func_158470
label_16cbcc:
    if (ctx->pc == 0x16CBCCu) {
        ctx->pc = 0x16CBD0u;
        goto label_16cbd0;
    }
    ctx->pc = 0x16CBC8u;
    SET_GPR_U32(ctx, 31, 0x16CBD0u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x16CBC8u, 0x16CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CBD0u;
label_16cbd0:
    // 0x16cbd0: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x16cbd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16cbd4:
    // 0x16cbd4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_16cbd8:
    if (ctx->pc == 0x16CBD8u) {
        ctx->pc = 0x16CBDCu;
        goto label_16cbdc;
    }
    ctx->pc = 0x16CBD4u;
    {
        const bool branch_taken_0x16cbd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cbd4) {
            ctx->pc = 0x16CBF4u;
            goto label_16cbf4;
        }
    }
    ctx->pc = 0x16CBDCu;
label_16cbdc:
    // 0x16cbdc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cbe0:
    // 0x16cbe0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16cbe4:
    // 0x16cbe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16cbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cbe8:
    // 0x16cbe8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16cbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cbec:
    // 0x16cbec: 0xc08c8dc  jal         func_232370
label_16cbf0:
    if (ctx->pc == 0x16CBF0u) {
        ctx->pc = 0x16CBF4u;
        goto label_16cbf4;
    }
    ctx->pc = 0x16CBECu;
    SET_GPR_U32(ctx, 31, 0x16CBF4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16CBECu, 0x16CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CBF4u;
label_16cbf4:
    // 0x16cbf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16cbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16cbf8:
    // 0x16cbf8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cbfc:
    // 0x16cbfc: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x16cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16cc00:
    // 0x16cc00: 0xc05611c  jal         func_158470
label_16cc04:
    if (ctx->pc == 0x16CC04u) {
        ctx->pc = 0x16CC08u;
        goto label_16cc08;
    }
    ctx->pc = 0x16CC00u;
    SET_GPR_U32(ctx, 31, 0x16CC08u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x16CC00u, 0x16CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC08u;
label_16cc08:
    // 0x16cc08: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x16cc08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16cc0c:
    // 0x16cc0c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_16cc10:
    if (ctx->pc == 0x16CC10u) {
        ctx->pc = 0x16CC14u;
        goto label_16cc14;
    }
    ctx->pc = 0x16CC0Cu;
    {
        const bool branch_taken_0x16cc0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc0c) {
            ctx->pc = 0x16CC38u;
            goto label_16cc38;
        }
    }
    ctx->pc = 0x16CC14u;
label_16cc14:
    // 0x16cc14: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x16cc14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_16cc18:
    // 0x16cc18: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x16cc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16cc1c:
    // 0x16cc1c: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x16cc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_16cc20:
    // 0x16cc20: 0x27a6012c  addiu       $a2, $sp, 0x12C
    ctx->pc = 0x16cc20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_16cc24:
    // 0x16cc24: 0xc056358  jal         func_158D60
label_16cc28:
    if (ctx->pc == 0x16CC28u) {
        ctx->pc = 0x16CC2Cu;
        goto label_16cc2c;
    }
    ctx->pc = 0x16CC24u;
    SET_GPR_U32(ctx, 31, 0x16CC2Cu);
    ctx->pc = 0x158D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D60u, 0x16CC24u, 0x16CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC2Cu;
label_16cc2c:
    // 0x16cc2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16cc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cc30:
    // 0x16cc30: 0x1045ff6e  beq         $v0, $a1, . + 4 + (-0x92 << 2)
label_16cc34:
    if (ctx->pc == 0x16CC34u) {
        ctx->pc = 0x16CC38u;
        goto label_16cc38;
    }
    ctx->pc = 0x16CC30u;
    {
        const bool branch_taken_0x16cc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x16cc30) {
            ctx->pc = 0x16C9ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c9ec;
        }
    }
    ctx->pc = 0x16CC38u;
label_16cc38:
    // 0x16cc38: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cc3c:
    // 0x16cc3c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16cc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16cc40:
    // 0x16cc40: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cc44:
    // 0x16cc44: 0xac460098  sw          $a2, 0x98($v0)
    ctx->pc = 0x16cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 6));
label_16cc48:
    // 0x16cc48: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cc4c:
    // 0x16cc4c: 0xac660094  sw          $a2, 0x94($v1)
    ctx->pc = 0x16cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 6));
label_16cc50:
    // 0x16cc50: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cc54:
    // 0x16cc54: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x16cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
label_16cc58:
    // 0x16cc58: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x16cc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_16cc5c:
    // 0x16cc5c: 0xc7818f78  lwc1        $f1, -0x7088($gp)
    ctx->pc = 0x16cc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16cc60:
    // 0x16cc60: 0xc7808f7c  lwc1        $f0, -0x7084($gp)
    ctx->pc = 0x16cc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16cc64:
    // 0x16cc64: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x16cc64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_16cc68:
    // 0x16cc68: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x16cc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_16cc6c:
    // 0x16cc6c: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x16cc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16cc70:
    // 0x16cc70: 0xc0495d4  jal         func_125750
label_16cc74:
    if (ctx->pc == 0x16CC74u) {
        ctx->pc = 0x16CC78u;
        goto label_16cc78;
    }
    ctx->pc = 0x16CC70u;
    SET_GPR_U32(ctx, 31, 0x16CC78u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x16CC70u, 0x16CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC78u;
label_16cc78:
    // 0x16cc78: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x16cc78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cc7c:
    // 0x16cc7c: 0x1000000b  b           . + 4 + (0xB << 2)
label_16cc80:
    if (ctx->pc == 0x16CC80u) {
        ctx->pc = 0x16CC84u;
        goto label_16cc84;
    }
    ctx->pc = 0x16CC7Cu;
    {
        const bool branch_taken_0x16cc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc7c) {
            ctx->pc = 0x16CCACu;
            goto label_16ccac;
        }
    }
    ctx->pc = 0x16CC84u;
label_16cc84:
    // 0x16cc84: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16cc84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cc88:
    // 0x16cc88: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x16cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_16cc8c:
    // 0x16cc8c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16cc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cc90:
    // 0x16cc90: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_16cc94:
    // 0x16cc94: 0x8c45007c  lw          $a1, 0x7C($v0)
    ctx->pc = 0x16cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_16cc98:
    // 0x16cc98: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x16cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_16cc9c:
    // 0x16cc9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16cc9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cca0:
    // 0x16cca0: 0xc08c8dc  jal         func_232370
label_16cca4:
    if (ctx->pc == 0x16CCA4u) {
        ctx->pc = 0x16CCA8u;
        goto label_16cca8;
    }
    ctx->pc = 0x16CCA0u;
    SET_GPR_U32(ctx, 31, 0x16CCA8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16CCA0u, 0x16CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CCA8u;
label_16cca8:
    // 0x16cca8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x16cca8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_16ccac:
    // 0x16ccac: 0x2ac30003  slti        $v1, $s6, 0x3
    ctx->pc = 0x16ccacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
label_16ccb0:
    // 0x16ccb0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_16ccb4:
    if (ctx->pc == 0x16CCB4u) {
        ctx->pc = 0x16CCB8u;
        goto label_16ccb8;
    }
    ctx->pc = 0x16CCB0u;
    {
        const bool branch_taken_0x16ccb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ccb0) {
            ctx->pc = 0x16CC84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cc84;
        }
    }
    ctx->pc = 0x16CCB8u;
label_16ccb8:
    // 0x16ccb8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x16ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_16ccbc:
    // 0x16ccbc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x16ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_16ccc0:
    // 0x16ccc0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x16ccc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_16ccc4:
    // 0x16ccc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_16ccc8:
    if (ctx->pc == 0x16CCC8u) {
        ctx->pc = 0x16CCCCu;
        goto label_16cccc;
    }
    ctx->pc = 0x16CCC4u;
    {
        const bool branch_taken_0x16ccc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ccc4) {
            ctx->pc = 0x16CCD8u;
            goto label_16ccd8;
        }
    }
    ctx->pc = 0x16CCCCu;
label_16cccc:
    // 0x16cccc: 0xa3a0013e  sb          $zero, 0x13E($sp)
    ctx->pc = 0x16ccccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 318), (uint8_t)GPR_U32(ctx, 0));
label_16ccd0:
    // 0x16ccd0: 0x10000003  b           . + 4 + (0x3 << 2)
label_16ccd4:
    if (ctx->pc == 0x16CCD4u) {
        ctx->pc = 0x16CCD8u;
        goto label_16ccd8;
    }
    ctx->pc = 0x16CCD0u;
    {
        const bool branch_taken_0x16ccd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ccd0) {
            ctx->pc = 0x16CCE0u;
            goto label_16cce0;
        }
    }
    ctx->pc = 0x16CCD8u;
label_16ccd8:
    // 0x16ccd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ccdc:
    // 0x16ccdc: 0xa3a2013e  sb          $v0, 0x13E($sp)
    ctx->pc = 0x16ccdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 318), (uint8_t)GPR_U32(ctx, 2));
label_16cce0:
    // 0x16cce0: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cce4:
    // 0x16cce4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16cce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16cce8:
    // 0x16cce8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16cce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16ccec:
    // 0x16ccec: 0x24a54408  addiu       $a1, $a1, 0x4408
    ctx->pc = 0x16ccecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17416));
label_16ccf0:
    // 0x16ccf0: 0xc0552e4  jal         func_154B90
label_16ccf4:
    if (ctx->pc == 0x16CCF4u) {
        ctx->pc = 0x16CCF8u;
        goto label_16ccf8;
    }
    ctx->pc = 0x16CCF0u;
    SET_GPR_U32(ctx, 31, 0x16CCF8u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16CCF0u, 0x16CCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CCF8u;
label_16ccf8:
    // 0x16ccf8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16ccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ccfc:
    // 0x16ccfc: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_16cd00:
    // 0x16cd00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16cd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cd04:
    // 0x16cd04: 0x93a6013e  lbu         $a2, 0x13E($sp)
    ctx->pc = 0x16cd04u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 318)));
label_16cd08:
    // 0x16cd08: 0xc08c8dc  jal         func_232370
label_16cd0c:
    if (ctx->pc == 0x16CD0Cu) {
        ctx->pc = 0x16CD10u;
        goto label_16cd10;
    }
    ctx->pc = 0x16CD08u;
    SET_GPR_U32(ctx, 31, 0x16CD10u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16CD08u, 0x16CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD10u;
label_16cd10:
    // 0x16cd10: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x16cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_16cd14:
    // 0x16cd14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16cd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16cd18:
    // 0x16cd18: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16cd1c:
    // 0x16cd1c: 0x104401fa  beq         $v0, $a0, . + 4 + (0x1FA << 2)
label_16cd20:
    if (ctx->pc == 0x16CD20u) {
        ctx->pc = 0x16CD24u;
        goto label_16cd24;
    }
    ctx->pc = 0x16CD1Cu;
    {
        const bool branch_taken_0x16cd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x16cd1c) {
            ctx->pc = 0x16D508u;
            goto label_16d508;
        }
    }
    ctx->pc = 0x16CD24u;
label_16cd24:
    // 0x16cd24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16cd28:
    // 0x16cd28: 0x10430145  beq         $v0, $v1, . + 4 + (0x145 << 2)
label_16cd2c:
    if (ctx->pc == 0x16CD2Cu) {
        ctx->pc = 0x16CD30u;
        goto label_16cd30;
    }
    ctx->pc = 0x16CD28u;
    {
        const bool branch_taken_0x16cd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cd28) {
            ctx->pc = 0x16D240u;
            goto label_16d240;
        }
    }
    ctx->pc = 0x16CD30u;
label_16cd30:
    // 0x16cd30: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x16cd30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16cd34:
    // 0x16cd34: 0x105500c6  beq         $v0, $s5, . + 4 + (0xC6 << 2)
label_16cd38:
    if (ctx->pc == 0x16CD38u) {
        ctx->pc = 0x16CD3Cu;
        goto label_16cd3c;
    }
    ctx->pc = 0x16CD34u;
    {
        const bool branch_taken_0x16cd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x16cd34) {
            ctx->pc = 0x16D050u;
            goto label_16d050;
        }
    }
    ctx->pc = 0x16CD3Cu;
label_16cd3c:
    // 0x16cd3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16cd40:
    // 0x16cd40: 0x10430048  beq         $v0, $v1, . + 4 + (0x48 << 2)
label_16cd44:
    if (ctx->pc == 0x16CD44u) {
        ctx->pc = 0x16CD48u;
        goto label_16cd48;
    }
    ctx->pc = 0x16CD40u;
    {
        const bool branch_taken_0x16cd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cd40) {
            ctx->pc = 0x16CE64u;
            goto label_16ce64;
        }
    }
    ctx->pc = 0x16CD48u;
label_16cd48:
    // 0x16cd48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cd4c:
    // 0x16cd4c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_16cd50:
    if (ctx->pc == 0x16CD50u) {
        ctx->pc = 0x16CD54u;
        goto label_16cd54;
    }
    ctx->pc = 0x16CD4Cu;
    {
        const bool branch_taken_0x16cd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cd4c) {
            ctx->pc = 0x16CD5Cu;
            goto label_16cd5c;
        }
    }
    ctx->pc = 0x16CD54u;
label_16cd54:
    // 0x16cd54: 0x1000026e  b           . + 4 + (0x26E << 2)
label_16cd58:
    if (ctx->pc == 0x16CD58u) {
        ctx->pc = 0x16CD5Cu;
        goto label_16cd5c;
    }
    ctx->pc = 0x16CD54u;
    {
        const bool branch_taken_0x16cd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd54) {
            ctx->pc = 0x16D710u;
            goto label_16d710;
        }
    }
    ctx->pc = 0x16CD5Cu;
label_16cd5c:
    // 0x16cd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cd60:
    // 0x16cd60: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cd64:
    // 0x16cd64: 0xac82009c  sw          $v0, 0x9C($a0)
    ctx->pc = 0x16cd64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
label_16cd68:
    // 0x16cd68: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x16cd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_16cd6c:
    // 0x16cd6c: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x16cd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
label_16cd70:
    // 0x16cd70: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x16cd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_16cd74:
    // 0x16cd74: 0x22402  srl         $a0, $v0, 16
    ctx->pc = 0x16cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_16cd78:
    // 0x16cd78: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cd7c:
    // 0x16cd7c: 0xac440098  sw          $a0, 0x98($v0)
    ctx->pc = 0x16cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 4));
label_16cd80:
    // 0x16cd80: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cd84:
    // 0x16cd84: 0xac640094  sw          $a0, 0x94($v1)
    ctx->pc = 0x16cd84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 4));
label_16cd88:
    // 0x16cd88: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cd8c:
    // 0x16cd8c: 0x8c45007c  lw          $a1, 0x7C($v0)
    ctx->pc = 0x16cd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_16cd90:
    // 0x16cd90: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cd94:
    // 0x16cd94: 0xac450088  sw          $a1, 0x88($v0)
    ctx->pc = 0x16cd94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 5));
label_16cd98:
    // 0x16cd98: 0x8f86bbdc  lw          $a2, -0x4424($gp)
    ctx->pc = 0x16cd98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16cd9c:
    // 0x16cd9c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16cd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16cda0:
    // 0x16cda0: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x16cda0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_16cda4:
    // 0x16cda4: 0x24e74418  addiu       $a3, $a3, 0x4418
    ctx->pc = 0x16cda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17432));
label_16cda8:
    // 0x16cda8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x16cda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16cdac:
    // 0x16cdac: 0xc08e57c  jal         func_2395F0
label_16cdb0:
    if (ctx->pc == 0x16CDB0u) {
        ctx->pc = 0x16CDB4u;
        goto label_16cdb4;
    }
    ctx->pc = 0x16CDACu;
    SET_GPR_U32(ctx, 31, 0x16CDB4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16CDACu, 0x16CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CDB4u;
label_16cdb4:
    // 0x16cdb4: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x16cdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16cdb8:
    // 0x16cdb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16cdb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cdbc:
    // 0x16cdbc: 0xc0477e8  jal         func_11DFA0
label_16cdc0:
    if (ctx->pc == 0x16CDC0u) {
        ctx->pc = 0x16CDC4u;
        goto label_16cdc4;
    }
    ctx->pc = 0x16CDBCu;
    SET_GPR_U32(ctx, 31, 0x16CDC4u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x16CDBCu, 0x16CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CDC4u;
label_16cdc4:
    // 0x16cdc4: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16cdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cdc8:
    // 0x16cdc8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cdcc:
    // 0x16cdcc: 0x8c860088  lw          $a2, 0x88($a0)
    ctx->pc = 0x16cdccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_16cdd0:
    // 0x16cdd0: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x16cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_16cdd4:
    // 0x16cdd4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16cdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16cdd8:
    // 0x16cdd8: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x16cdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16cddc:
    // 0x16cddc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16cddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cde0:
    // 0x16cde0: 0xc08c378  jal         func_230DE0
label_16cde4:
    if (ctx->pc == 0x16CDE4u) {
        ctx->pc = 0x16CDE8u;
        goto label_16cde8;
    }
    ctx->pc = 0x16CDE0u;
    SET_GPR_U32(ctx, 31, 0x16CDE8u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16CDE0u, 0x16CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CDE8u;
label_16cde8:
    // 0x16cde8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cdec:
    // 0x16cdec: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cdf0:
    // 0x16cdf0: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16cdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_16cdf4:
    // 0x16cdf4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_16cdf8:
    // 0x16cdf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16cdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cdfc:
    // 0x16cdfc: 0xc08c8dc  jal         func_232370
label_16ce00:
    if (ctx->pc == 0x16CE00u) {
        ctx->pc = 0x16CE04u;
        goto label_16ce04;
    }
    ctx->pc = 0x16CDFCu;
    SET_GPR_U32(ctx, 31, 0x16CE04u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16CDFCu, 0x16CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE04u;
label_16ce04:
    // 0x16ce04: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ce08:
    // 0x16ce08: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ce0c:
    // 0x16ce0c: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x16ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_16ce10:
    // 0x16ce10: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16ce10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16ce14:
    // 0x16ce14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ce14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ce18:
    // 0x16ce18: 0xc08c910  jal         func_232440
label_16ce1c:
    if (ctx->pc == 0x16CE1Cu) {
        ctx->pc = 0x16CE20u;
        goto label_16ce20;
    }
    ctx->pc = 0x16CE18u;
    SET_GPR_U32(ctx, 31, 0x16CE20u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16CE18u, 0x16CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE20u;
label_16ce20:
    // 0x16ce20: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ce24:
    // 0x16ce24: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ce28:
    // 0x16ce28: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16ce28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_16ce2c:
    // 0x16ce2c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ce30:
    // 0x16ce30: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x16ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_16ce34:
    // 0x16ce34: 0x401826  xor         $v1, $v0, $zero
    ctx->pc = 0x16ce34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_16ce38:
    // 0x16ce38: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x16ce38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16ce3c:
    // 0x16ce3c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x16ce3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16ce40:
    // 0x16ce40: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x16ce40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16ce44:
    // 0x16ce44: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x16ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_16ce48:
    // 0x16ce48: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x16ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_16ce4c:
    // 0x16ce4c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x16ce4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16ce50:
    // 0x16ce50: 0xc44c00f8  lwc1        $f12, 0xF8($v0)
    ctx->pc = 0x16ce50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16ce54:
    // 0x16ce54: 0xc08c434  jal         func_2310D0
label_16ce58:
    if (ctx->pc == 0x16CE58u) {
        ctx->pc = 0x16CE5Cu;
        goto label_16ce5c;
    }
    ctx->pc = 0x16CE54u;
    SET_GPR_U32(ctx, 31, 0x16CE5Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x16CE54u, 0x16CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE5Cu;
label_16ce5c:
    // 0x16ce5c: 0x1000022c  b           . + 4 + (0x22C << 2)
label_16ce60:
    if (ctx->pc == 0x16CE60u) {
        ctx->pc = 0x16CE64u;
        goto label_16ce64;
    }
    ctx->pc = 0x16CE5Cu;
    {
        const bool branch_taken_0x16ce5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce5c) {
            ctx->pc = 0x16D710u;
            goto label_16d710;
        }
    }
    ctx->pc = 0x16CE64u;
label_16ce64:
    // 0x16ce64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16ce68:
    // 0x16ce68: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16ce68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ce6c:
    // 0x16ce6c: 0xac82009c  sw          $v0, 0x9C($a0)
    ctx->pc = 0x16ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
label_16ce70:
    // 0x16ce70: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x16ce70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_16ce74:
    // 0x16ce74: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x16ce74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
label_16ce78:
    // 0x16ce78: 0xa63824  and         $a3, $a1, $a2
    ctx->pc = 0x16ce78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_16ce7c:
    // 0x16ce7c: 0x74402  srl         $t0, $a3, 16
    ctx->pc = 0x16ce7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_16ce80:
    // 0x16ce80: 0x8fa90140  lw          $t1, 0x140($sp)
    ctx->pc = 0x16ce80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ce84:
    // 0x16ce84: 0xad280098  sw          $t0, 0x98($t1)
    ctx->pc = 0x16ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 152), GPR_U32(ctx, 8));
label_16ce88:
    // 0x16ce88: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ce8c:
    // 0x16ce8c: 0xac480094  sw          $t0, 0x94($v0)
    ctx->pc = 0x16ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 8));
label_16ce90:
    // 0x16ce90: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16ce90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ce94:
    // 0x16ce94: 0x8ca40080  lw          $a0, 0x80($a1)
    ctx->pc = 0x16ce94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_16ce98:
    // 0x16ce98: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ce9c:
    // 0x16ce9c: 0xac440088  sw          $a0, 0x88($v0)
    ctx->pc = 0x16ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 4));
label_16cea0:
    // 0x16cea0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cea4:
    // 0x16cea4: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x16cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_16cea8:
    // 0x16cea8: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16cea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16ceac:
    // 0x16ceac: 0xacc3008c  sw          $v1, 0x8C($a2)
    ctx->pc = 0x16ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 3));
label_16ceb0:
    // 0x16ceb0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x16ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16ceb4:
    // 0x16ceb4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16ceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16ceb8:
    // 0x16ceb8: 0x24a54418  addiu       $a1, $a1, 0x4418
    ctx->pc = 0x16ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17432));
label_16cebc:
    // 0x16cebc: 0xc08e57c  jal         func_2395F0
label_16cec0:
    if (ctx->pc == 0x16CEC0u) {
        ctx->pc = 0x16CEC4u;
        goto label_16cec4;
    }
    ctx->pc = 0x16CEBCu;
    SET_GPR_U32(ctx, 31, 0x16CEC4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16CEBCu, 0x16CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CEC4u;
label_16cec4:
    // 0x16cec4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16cec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cec8:
    // 0x16cec8: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x16cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16cecc:
    // 0x16cecc: 0xc0477e8  jal         func_11DFA0
label_16ced0:
    if (ctx->pc == 0x16CED0u) {
        ctx->pc = 0x16CED4u;
        goto label_16ced4;
    }
    ctx->pc = 0x16CECCu;
    SET_GPR_U32(ctx, 31, 0x16CED4u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x16CECCu, 0x16CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CED4u;
label_16ced4:
    // 0x16ced4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16ced4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ced8:
    // 0x16ced8: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16ced8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cedc:
    // 0x16cedc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cee0:
    // 0x16cee0: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x16cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_16cee4:
    // 0x16cee4: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x16cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_16cee8:
    // 0x16cee8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16ceec:
    // 0x16ceec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ceecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cef0:
    // 0x16cef0: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x16cef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16cef4:
    // 0x16cef4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16cef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cef8:
    // 0x16cef8: 0xc08c378  jal         func_230DE0
label_16cefc:
    if (ctx->pc == 0x16CEFCu) {
        ctx->pc = 0x16CF00u;
        goto label_16cf00;
    }
    ctx->pc = 0x16CEF8u;
    SET_GPR_U32(ctx, 31, 0x16CF00u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16CEF8u, 0x16CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF00u;
label_16cf00:
    // 0x16cf00: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cf04:
    // 0x16cf04: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cf08:
    // 0x16cf08: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16cf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_16cf0c:
    // 0x16cf0c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_16cf10:
    // 0x16cf10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16cf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cf14:
    // 0x16cf14: 0xc08c8dc  jal         func_232370
label_16cf18:
    if (ctx->pc == 0x16CF18u) {
        ctx->pc = 0x16CF1Cu;
        goto label_16cf1c;
    }
    ctx->pc = 0x16CF14u;
    SET_GPR_U32(ctx, 31, 0x16CF1Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16CF14u, 0x16CF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF1Cu;
label_16cf1c:
    // 0x16cf1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cf20:
    // 0x16cf20: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16cf20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cf24:
    // 0x16cf24: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16cf24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cf28:
    // 0x16cf28: 0x8ce20088  lw          $v0, 0x88($a3)
    ctx->pc = 0x16cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
label_16cf2c:
    // 0x16cf2c: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x16cf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_16cf30:
    // 0x16cf30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16cf30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cf34:
    // 0x16cf34: 0xc08c910  jal         func_232440
label_16cf38:
    if (ctx->pc == 0x16CF38u) {
        ctx->pc = 0x16CF3Cu;
        goto label_16cf3c;
    }
    ctx->pc = 0x16CF34u;
    SET_GPR_U32(ctx, 31, 0x16CF3Cu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16CF34u, 0x16CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF3Cu;
label_16cf3c:
    // 0x16cf3c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16cf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cf40:
    // 0x16cf40: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cf44:
    // 0x16cf44: 0x8c860088  lw          $a2, 0x88($a0)
    ctx->pc = 0x16cf44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_16cf48:
    // 0x16cf48: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cf4c:
    // 0x16cf4c: 0x8c470094  lw          $a3, 0x94($v0)
    ctx->pc = 0x16cf4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_16cf50:
    // 0x16cf50: 0xe01826  xor         $v1, $a3, $zero
    ctx->pc = 0x16cf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 0));
label_16cf54:
    // 0x16cf54: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x16cf54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16cf58:
    // 0x16cf58: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x16cf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16cf5c:
    // 0x16cf5c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x16cf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16cf60:
    // 0x16cf60: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x16cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_16cf64:
    // 0x16cf64: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x16cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_16cf68:
    // 0x16cf68: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16cf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16cf6c:
    // 0x16cf6c: 0xc44c00f8  lwc1        $f12, 0xF8($v0)
    ctx->pc = 0x16cf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16cf70:
    // 0x16cf70: 0xc08c434  jal         func_2310D0
label_16cf74:
    if (ctx->pc == 0x16CF74u) {
        ctx->pc = 0x16CF78u;
        goto label_16cf78;
    }
    ctx->pc = 0x16CF70u;
    SET_GPR_U32(ctx, 31, 0x16CF78u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x16CF70u, 0x16CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF78u;
label_16cf78:
    // 0x16cf78: 0x8f97bbdc  lw          $s7, -0x4424($gp)
    ctx->pc = 0x16cf78u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16cf7c:
    // 0x16cf7c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x16cf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16cf80:
    // 0x16cf80: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16cf80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16cf84:
    // 0x16cf84: 0x24a54428  addiu       $a1, $a1, 0x4428
    ctx->pc = 0x16cf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17448));
label_16cf88:
    // 0x16cf88: 0xc08e57c  jal         func_2395F0
label_16cf8c:
    if (ctx->pc == 0x16CF8Cu) {
        ctx->pc = 0x16CF90u;
        goto label_16cf90;
    }
    ctx->pc = 0x16CF88u;
    SET_GPR_U32(ctx, 31, 0x16CF90u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16CF88u, 0x16CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF90u;
label_16cf90:
    // 0x16cf90: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x16cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16cf94:
    // 0x16cf94: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x16cf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16cf98:
    // 0x16cf98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16cf98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cf9c:
    // 0x16cf9c: 0xc0477e8  jal         func_11DFA0
label_16cfa0:
    if (ctx->pc == 0x16CFA0u) {
        ctx->pc = 0x16CFA4u;
        goto label_16cfa4;
    }
    ctx->pc = 0x16CF9Cu;
    SET_GPR_U32(ctx, 31, 0x16CFA4u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x16CF9Cu, 0x16CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CFA4u;
label_16cfa4:
    // 0x16cfa4: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16cfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cfa8:
    // 0x16cfa8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cfac:
    // 0x16cfac: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x16cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_16cfb0:
    // 0x16cfb0: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x16cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_16cfb4:
    // 0x16cfb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16cfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cfb8:
    // 0x16cfb8: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x16cfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16cfbc:
    // 0x16cfbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16cfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cfc0:
    // 0x16cfc0: 0xc08c378  jal         func_230DE0
label_16cfc4:
    if (ctx->pc == 0x16CFC4u) {
        ctx->pc = 0x16CFC8u;
        goto label_16cfc8;
    }
    ctx->pc = 0x16CFC0u;
    SET_GPR_U32(ctx, 31, 0x16CFC8u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16CFC0u, 0x16CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CFC8u;
label_16cfc8:
    // 0x16cfc8: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cfcc:
    // 0x16cfcc: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cfd0:
    // 0x16cfd0: 0x8c86008c  lw          $a2, 0x8C($a0)
    ctx->pc = 0x16cfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
label_16cfd4:
    // 0x16cfd4: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x16cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_16cfd8:
    // 0x16cfd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16cfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cfdc:
    // 0x16cfdc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16cfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16cfe0:
    // 0x16cfe0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16cfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cfe4:
    // 0x16cfe4: 0xc08c8dc  jal         func_232370
label_16cfe8:
    if (ctx->pc == 0x16CFE8u) {
        ctx->pc = 0x16CFECu;
        goto label_16cfec;
    }
    ctx->pc = 0x16CFE4u;
    SET_GPR_U32(ctx, 31, 0x16CFECu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16CFE4u, 0x16CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CFECu;
label_16cfec:
    // 0x16cfec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16cfecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cff0:
    // 0x16cff0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16cff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cff4:
    // 0x16cff4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16cff8:
    // 0x16cff8: 0x8c45008c  lw          $a1, 0x8C($v0)
    ctx->pc = 0x16cff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_16cffc:
    // 0x16cffc: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_16d000:
    // 0x16d000: 0xc08c910  jal         func_232440
label_16d004:
    if (ctx->pc == 0x16D004u) {
        ctx->pc = 0x16D008u;
        goto label_16d008;
    }
    ctx->pc = 0x16D000u;
    SET_GPR_U32(ctx, 31, 0x16D008u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16D000u, 0x16D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D008u;
label_16d008:
    // 0x16d008: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16d008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d00c:
    // 0x16d00c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16d00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d010:
    // 0x16d010: 0x8ca3008c  lw          $v1, 0x8C($a1)
    ctx->pc = 0x16d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_16d014:
    // 0x16d014: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d018:
    // 0x16d018: 0x8c520094  lw          $s2, 0x94($v0)
    ctx->pc = 0x16d018u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_16d01c:
    // 0x16d01c: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x16d01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_16d020:
    // 0x16d020: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x16d020u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16d024:
    // 0x16d024: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x16d024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_16d028:
    // 0x16d028: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x16d028u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16d02c:
    // 0x16d02c: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x16d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_16d030:
    // 0x16d030: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x16d030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_16d034:
    // 0x16d034: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16d034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16d038:
    // 0x16d038: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16d038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d03c:
    // 0x16d03c: 0xc44c00f8  lwc1        $f12, 0xF8($v0)
    ctx->pc = 0x16d03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16d040:
    // 0x16d040: 0xc08c434  jal         func_2310D0
label_16d044:
    if (ctx->pc == 0x16D044u) {
        ctx->pc = 0x16D048u;
        goto label_16d048;
    }
    ctx->pc = 0x16D040u;
    SET_GPR_U32(ctx, 31, 0x16D048u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x16D040u, 0x16D048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D048u;
label_16d048:
    // 0x16d048: 0x100001b1  b           . + 4 + (0x1B1 << 2)
label_16d04c:
    if (ctx->pc == 0x16D04Cu) {
        ctx->pc = 0x16D050u;
        goto label_16d050;
    }
    ctx->pc = 0x16D048u;
    {
        const bool branch_taken_0x16d048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d048) {
            ctx->pc = 0x16D710u;
            goto label_16d710;
        }
    }
    ctx->pc = 0x16D050u;
label_16d050:
    // 0x16d050: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16d050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16d054:
    // 0x16d054: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16d054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d058:
    // 0x16d058: 0xac62009c  sw          $v0, 0x9C($v1)
    ctx->pc = 0x16d058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
label_16d05c:
    // 0x16d05c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x16d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_16d060:
    // 0x16d060: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x16d060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_16d064:
    // 0x16d064: 0x828824  and         $s1, $a0, $v0
    ctx->pc = 0x16d064u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_16d068:
    // 0x16d068: 0x113402  srl         $a2, $s1, 16
    ctx->pc = 0x16d068u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
label_16d06c:
    // 0x16d06c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16d06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d070:
    // 0x16d070: 0xaca60098  sw          $a2, 0x98($a1)
    ctx->pc = 0x16d070u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 6));
label_16d074:
    // 0x16d074: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16d074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d078:
    // 0x16d078: 0xace60094  sw          $a2, 0x94($a3)
    ctx->pc = 0x16d078u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 6));
label_16d07c:
    // 0x16d07c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d080:
    // 0x16d080: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x16d080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_16d084:
    // 0x16d084: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d088:
    // 0x16d088: 0xac850088  sw          $a1, 0x88($a0)
    ctx->pc = 0x16d088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 5));
label_16d08c:
    // 0x16d08c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16d08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d090:
    // 0x16d090: 0x8cc70084  lw          $a3, 0x84($a2)
    ctx->pc = 0x16d090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_16d094:
    // 0x16d094: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d098:
    // 0x16d098: 0xac47008c  sw          $a3, 0x8C($v0)
    ctx->pc = 0x16d098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 7));
label_16d09c:
    // 0x16d09c: 0x8f88bbdc  lw          $t0, -0x4424($gp)
    ctx->pc = 0x16d09cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16d0a0:
    // 0x16d0a0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x16d0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16d0a4:
    // 0x16d0a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16d0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16d0a8:
    // 0x16d0a8: 0x24a54438  addiu       $a1, $a1, 0x4438
    ctx->pc = 0x16d0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17464));
label_16d0ac:
    // 0x16d0ac: 0xc08e57c  jal         func_2395F0
label_16d0b0:
    if (ctx->pc == 0x16D0B0u) {
        ctx->pc = 0x16D0B4u;
        goto label_16d0b4;
    }
    ctx->pc = 0x16D0ACu;
    SET_GPR_U32(ctx, 31, 0x16D0B4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16D0ACu, 0x16D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D0B4u;
label_16d0b4:
    // 0x16d0b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16d0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d0b8:
    // 0x16d0b8: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x16d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d0bc:
    // 0x16d0bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d0c0:
    // 0x16d0c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16d0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16d0c4:
    // 0x16d0c4: 0xc0477e8  jal         func_11DFA0
label_16d0c8:
    if (ctx->pc == 0x16D0C8u) {
        ctx->pc = 0x16D0CCu;
        goto label_16d0cc;
    }
    ctx->pc = 0x16D0C4u;
    SET_GPR_U32(ctx, 31, 0x16D0CCu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x16D0C4u, 0x16D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D0CCu;
label_16d0cc:
    // 0x16d0cc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d0d0:
    // 0x16d0d0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d0d4:
    // 0x16d0d4: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_16d0d8:
    // 0x16d0d8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16d0dc:
    // 0x16d0dc: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x16d0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d0e0:
    // 0x16d0e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16d0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d0e4:
    // 0x16d0e4: 0xc08c378  jal         func_230DE0
label_16d0e8:
    if (ctx->pc == 0x16D0E8u) {
        ctx->pc = 0x16D0ECu;
        goto label_16d0ec;
    }
    ctx->pc = 0x16D0E4u;
    SET_GPR_U32(ctx, 31, 0x16D0ECu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16D0E4u, 0x16D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D0ECu;
label_16d0ec:
    // 0x16d0ec: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16d0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d0f0:
    // 0x16d0f0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d0f4:
    // 0x16d0f4: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x16d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_16d0f8:
    // 0x16d0f8: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x16d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_16d0fc:
    // 0x16d0fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d100:
    // 0x16d100: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16d100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d104:
    // 0x16d104: 0xc08c8dc  jal         func_232370
label_16d108:
    if (ctx->pc == 0x16D108u) {
        ctx->pc = 0x16D10Cu;
        goto label_16d10c;
    }
    ctx->pc = 0x16D104u;
    SET_GPR_U32(ctx, 31, 0x16D10Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16D104u, 0x16D10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D10Cu;
label_16d10c:
    // 0x16d10c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16d10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d110:
    // 0x16d110: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d114:
    // 0x16d114: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16d114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d118:
    // 0x16d118: 0x8ce50088  lw          $a1, 0x88($a3)
    ctx->pc = 0x16d118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
label_16d11c:
    // 0x16d11c: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x16d11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16d120:
    // 0x16d120: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16d120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16d124:
    // 0x16d124: 0xc08c910  jal         func_232440
label_16d128:
    if (ctx->pc == 0x16D128u) {
        ctx->pc = 0x16D12Cu;
        goto label_16d12c;
    }
    ctx->pc = 0x16D124u;
    SET_GPR_U32(ctx, 31, 0x16D12Cu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16D124u, 0x16D12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D12Cu;
label_16d12c:
    // 0x16d12c: 0x8fb00140  lw          $s0, 0x140($sp)
    ctx->pc = 0x16d12cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d130:
    // 0x16d130: 0x8fb40140  lw          $s4, 0x140($sp)
    ctx->pc = 0x16d130u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d134:
    // 0x16d134: 0x8e930088  lw          $s3, 0x88($s4)
    ctx->pc = 0x16d134u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_16d138:
    // 0x16d138: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d13c:
    // 0x16d13c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x16d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_16d140:
    // 0x16d140: 0x602026  xor         $a0, $v1, $zero
    ctx->pc = 0x16d140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_16d144:
    // 0x16d144: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x16d144u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16d148:
    // 0x16d148: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x16d148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_16d14c:
    // 0x16d14c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x16d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16d150:
    // 0x16d150: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x16d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_16d154:
    // 0x16d154: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x16d154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_16d158:
    // 0x16d158: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x16d158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16d15c:
    // 0x16d15c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16d15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16d160:
    // 0x16d160: 0xc44c00f8  lwc1        $f12, 0xF8($v0)
    ctx->pc = 0x16d160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16d164:
    // 0x16d164: 0xc08c434  jal         func_2310D0
label_16d168:
    if (ctx->pc == 0x16D168u) {
        ctx->pc = 0x16D16Cu;
        goto label_16d16c;
    }
    ctx->pc = 0x16D164u;
    SET_GPR_U32(ctx, 31, 0x16D16Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x16D164u, 0x16D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D16Cu;
label_16d16c:
    // 0x16d16c: 0x8f85bbdc  lw          $a1, -0x4424($gp)
    ctx->pc = 0x16d16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16d170:
    // 0x16d170: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16d170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16d174:
    // 0x16d174: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x16d174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_16d178:
    // 0x16d178: 0x24424448  addiu       $v0, $v0, 0x4448
    ctx->pc = 0x16d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17480));
label_16d17c:
    // 0x16d17c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d180:
    // 0x16d180: 0xc08e57c  jal         func_2395F0
label_16d184:
    if (ctx->pc == 0x16D184u) {
        ctx->pc = 0x16D188u;
        goto label_16d188;
    }
    ctx->pc = 0x16D180u;
    SET_GPR_U32(ctx, 31, 0x16D188u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16D180u, 0x16D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D188u;
label_16d188:
    // 0x16d188: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x16d188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d18c:
    // 0x16d18c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d190:
    // 0x16d190: 0xc0477e8  jal         func_11DFA0
label_16d194:
    if (ctx->pc == 0x16D194u) {
        ctx->pc = 0x16D198u;
        goto label_16d198;
    }
    ctx->pc = 0x16D190u;
    SET_GPR_U32(ctx, 31, 0x16D198u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x16D190u, 0x16D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D198u;
label_16d198:
    // 0x16d198: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16d198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d19c:
    // 0x16d19c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d1a0:
    // 0x16d1a0: 0x8fb00140  lw          $s0, 0x140($sp)
    ctx->pc = 0x16d1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d1a4:
    // 0x16d1a4: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x16d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_16d1a8:
    // 0x16d1a8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16d1ac:
    // 0x16d1ac: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16d1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d1b0:
    // 0x16d1b0: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x16d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d1b4:
    // 0x16d1b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16d1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d1b8:
    // 0x16d1b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16d1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d1bc:
    // 0x16d1bc: 0xc08c378  jal         func_230DE0
label_16d1c0:
    if (ctx->pc == 0x16D1C0u) {
        ctx->pc = 0x16D1C4u;
        goto label_16d1c4;
    }
    ctx->pc = 0x16D1BCu;
    SET_GPR_U32(ctx, 31, 0x16D1C4u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16D1BCu, 0x16D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1C4u;
label_16d1c4:
    // 0x16d1c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d1c8:
    // 0x16d1c8: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16d1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d1cc:
    // 0x16d1cc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d1d0:
    // 0x16d1d0: 0x8c45008c  lw          $a1, 0x8C($v0)
    ctx->pc = 0x16d1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_16d1d4:
    // 0x16d1d4: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x16d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_16d1d8:
    // 0x16d1d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16d1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d1dc:
    // 0x16d1dc: 0xc08c8dc  jal         func_232370
label_16d1e0:
    if (ctx->pc == 0x16D1E0u) {
        ctx->pc = 0x16D1E4u;
        goto label_16d1e4;
    }
    ctx->pc = 0x16D1DCu;
    SET_GPR_U32(ctx, 31, 0x16D1E4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16D1DCu, 0x16D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1E4u;
label_16d1e4:
    // 0x16d1e4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d1e8:
    // 0x16d1e8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d1ec:
    // 0x16d1ec: 0x8c45008c  lw          $a1, 0x8C($v0)
    ctx->pc = 0x16d1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_16d1f0:
    // 0x16d1f0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16d1f4:
    // 0x16d1f4: 0xc08c910  jal         func_232440
label_16d1f8:
    if (ctx->pc == 0x16D1F8u) {
        ctx->pc = 0x16D1FCu;
        goto label_16d1fc;
    }
    ctx->pc = 0x16D1F4u;
    SET_GPR_U32(ctx, 31, 0x16D1FCu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16D1F4u, 0x16D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1FCu;
label_16d1fc:
    // 0x16d1fc: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16d1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d200:
    // 0x16d200: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d204:
    // 0x16d204: 0x8c46008c  lw          $a2, 0x8C($v0)
    ctx->pc = 0x16d204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_16d208:
    // 0x16d208: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d20c:
    // 0x16d20c: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x16d20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_16d210:
    // 0x16d210: 0x38a40001  xori        $a0, $a1, 0x1
    ctx->pc = 0x16d210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_16d214:
    // 0x16d214: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x16d214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16d218:
    // 0x16d218: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x16d218u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16d21c:
    // 0x16d21c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x16d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_16d220:
    // 0x16d220: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x16d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_16d224:
    // 0x16d224: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x16d224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_16d228:
    // 0x16d228: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16d228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16d22c:
    // 0x16d22c: 0xc44c00f8  lwc1        $f12, 0xF8($v0)
    ctx->pc = 0x16d22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16d230:
    // 0x16d230: 0xc08c434  jal         func_2310D0
label_16d234:
    if (ctx->pc == 0x16D234u) {
        ctx->pc = 0x16D238u;
        goto label_16d238;
    }
    ctx->pc = 0x16D230u;
    SET_GPR_U32(ctx, 31, 0x16D238u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x16D230u, 0x16D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D238u;
label_16d238:
    // 0x16d238: 0x10000135  b           . + 4 + (0x135 << 2)
label_16d23c:
    if (ctx->pc == 0x16D23Cu) {
        ctx->pc = 0x16D240u;
        goto label_16d240;
    }
    ctx->pc = 0x16D238u;
    {
        const bool branch_taken_0x16d238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d238) {
            ctx->pc = 0x16D710u;
            goto label_16d710;
        }
    }
    ctx->pc = 0x16D240u;
label_16d240:
    // 0x16d240: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16d244:
    // 0x16d244: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16d244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d248:
    // 0x16d248: 0xaca2009c  sw          $v0, 0x9C($a1)
    ctx->pc = 0x16d248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 2));
label_16d24c:
    // 0x16d24c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x16d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_16d250:
    // 0x16d250: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x16d250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_16d254:
    // 0x16d254: 0xa22024  and         $a0, $a1, $v0
    ctx->pc = 0x16d254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_16d258:
    // 0x16d258: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x16d258u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_16d25c:
    // 0x16d25c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16d25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d260:
    // 0x16d260: 0xacc40098  sw          $a0, 0x98($a2)
    ctx->pc = 0x16d260u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 4));
label_16d264:
    // 0x16d264: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d268:
    // 0x16d268: 0xac440094  sw          $a0, 0x94($v0)
    ctx->pc = 0x16d268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 4));
label_16d26c:
    // 0x16d26c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d270:
    // 0x16d270: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x16d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_16d274:
    // 0x16d274: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d278:
    // 0x16d278: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x16d278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
label_16d27c:
    // 0x16d27c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d280:
    // 0x16d280: 0x8c75007c  lw          $s5, 0x7C($v1)
    ctx->pc = 0x16d280u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_16d284:
    // 0x16d284: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16d284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d288:
    // 0x16d288: 0xac75008c  sw          $s5, 0x8C($v1)
    ctx->pc = 0x16d288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 21));
label_16d28c:
    // 0x16d28c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d290:
    // 0x16d290: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x16d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_16d294:
    // 0x16d294: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d298:
    // 0x16d298: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x16d298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
label_16d29c:
    // 0x16d29c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x16d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16d2a0:
    // 0x16d2a0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16d2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16d2a4:
    // 0x16d2a4: 0x24a54438  addiu       $a1, $a1, 0x4438
    ctx->pc = 0x16d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17464));
label_16d2a8:
    // 0x16d2a8: 0xc08e57c  jal         func_2395F0
label_16d2ac:
    if (ctx->pc == 0x16D2ACu) {
        ctx->pc = 0x16D2B0u;
        goto label_16d2b0;
    }
    ctx->pc = 0x16D2A8u;
    SET_GPR_U32(ctx, 31, 0x16D2B0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16D2A8u, 0x16D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D2B0u;
label_16d2b0:
    // 0x16d2b0: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x16d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d2b4:
    // 0x16d2b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d2b8:
    // 0x16d2b8: 0xc0477e8  jal         func_11DFA0
label_16d2bc:
    if (ctx->pc == 0x16D2BCu) {
        ctx->pc = 0x16D2C0u;
        goto label_16d2c0;
    }
    ctx->pc = 0x16D2B8u;
    SET_GPR_U32(ctx, 31, 0x16D2C0u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x16D2B8u, 0x16D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D2C0u;
label_16d2c0:
    // 0x16d2c0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d2c4:
    // 0x16d2c4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d2c8:
    // 0x16d2c8: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_16d2cc:
    // 0x16d2cc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16d2d0:
    // 0x16d2d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d2d4:
    // 0x16d2d4: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x16d2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d2d8:
    // 0x16d2d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16d2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d2dc:
    // 0x16d2dc: 0xc08c378  jal         func_230DE0
label_16d2e0:
    if (ctx->pc == 0x16D2E0u) {
        ctx->pc = 0x16D2E4u;
        goto label_16d2e4;
    }
    ctx->pc = 0x16D2DCu;
    SET_GPR_U32(ctx, 31, 0x16D2E4u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16D2DCu, 0x16D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D2E4u;
label_16d2e4:
    // 0x16d2e4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d2e8:
    // 0x16d2e8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d2ec:
    // 0x16d2ec: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16d2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_16d2f0:
    // 0x16d2f0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_16d2f4:
    // 0x16d2f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16d2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d2f8:
    // 0x16d2f8: 0xc08c8dc  jal         func_232370
label_16d2fc:
    if (ctx->pc == 0x16D2FCu) {
        ctx->pc = 0x16D300u;
        goto label_16d300;
    }
    ctx->pc = 0x16D2F8u;
    SET_GPR_U32(ctx, 31, 0x16D300u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16D2F8u, 0x16D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D300u;
label_16d300:
    // 0x16d300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d304:
    // 0x16d304: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16d304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d308:
    // 0x16d308: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16d308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d30c:
    // 0x16d30c: 0x8ce20088  lw          $v0, 0x88($a3)
    ctx->pc = 0x16d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
label_16d310:
    // 0x16d310: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x16d310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_16d314:
    // 0x16d314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d318:
    // 0x16d318: 0xc08c910  jal         func_232440
label_16d31c:
    if (ctx->pc == 0x16D31Cu) {
        ctx->pc = 0x16D320u;
        goto label_16d320;
    }
    ctx->pc = 0x16D318u;
    SET_GPR_U32(ctx, 31, 0x16D320u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16D318u, 0x16D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D320u;
label_16d320:
    // 0x16d320: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16d320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d324:
    // 0x16d324: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d328:
    // 0x16d328: 0x8c860088  lw          $a2, 0x88($a0)
    ctx->pc = 0x16d328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_16d32c:
    // 0x16d32c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d330:
    // 0x16d330: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x16d330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_16d334:
    // 0x16d334: 0x601026  xor         $v0, $v1, $zero
    ctx->pc = 0x16d334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_16d338:
    // 0x16d338: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x16d338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16d33c:
    // 0x16d33c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16d33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16d340:
    // 0x16d340: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x16d340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16d344:
    // 0x16d344: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x16d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_16d348:
    // 0x16d348: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x16d348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_16d34c:
    // 0x16d34c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16d34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16d350:
    // 0x16d350: 0xc44c00f8  lwc1        $f12, 0xF8($v0)
    ctx->pc = 0x16d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16d354:
    // 0x16d354: 0xc08c434  jal         func_2310D0
label_16d358:
    if (ctx->pc == 0x16D358u) {
        ctx->pc = 0x16D35Cu;
        goto label_16d35c;
    }
    ctx->pc = 0x16D354u;
    SET_GPR_U32(ctx, 31, 0x16D35Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x16D354u, 0x16D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D35Cu;
label_16d35c:
    // 0x16d35c: 0x8f85bbdc  lw          $a1, -0x4424($gp)
    ctx->pc = 0x16d35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16d360:
    // 0x16d360: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16d360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16d364:
    // 0x16d364: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x16d364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_16d368:
    // 0x16d368: 0x24424448  addiu       $v0, $v0, 0x4448
    ctx->pc = 0x16d368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17480));
label_16d36c:
    // 0x16d36c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d370:
    // 0x16d370: 0xc08e57c  jal         func_2395F0
label_16d374:
    if (ctx->pc == 0x16D374u) {
        ctx->pc = 0x16D378u;
        goto label_16d378;
    }
    ctx->pc = 0x16D370u;
    SET_GPR_U32(ctx, 31, 0x16D378u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16D370u, 0x16D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D378u;
label_16d378:
    // 0x16d378: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x16d378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d37c:
    // 0x16d37c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x16d37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d380:
    // 0x16d380: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d384:
    // 0x16d384: 0xc0477e8  jal         func_11DFA0
label_16d388:
    if (ctx->pc == 0x16D388u) {
        ctx->pc = 0x16D38Cu;
        goto label_16d38c;
    }
    ctx->pc = 0x16D384u;
    SET_GPR_U32(ctx, 31, 0x16D38Cu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x16D384u, 0x16D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D38Cu;
label_16d38c:
    // 0x16d38c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16d38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d390:
    // 0x16d390: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d394:
    // 0x16d394: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x16d394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_16d398:
    // 0x16d398: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x16d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_16d39c:
    // 0x16d39c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d3a0:
    // 0x16d3a0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16d3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d3a4:
    // 0x16d3a4: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x16d3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d3a8:
    // 0x16d3a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16d3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d3ac:
    // 0x16d3ac: 0xc08c378  jal         func_230DE0
label_16d3b0:
    if (ctx->pc == 0x16D3B0u) {
        ctx->pc = 0x16D3B4u;
        goto label_16d3b4;
    }
    ctx->pc = 0x16D3ACu;
    SET_GPR_U32(ctx, 31, 0x16D3B4u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16D3ACu, 0x16D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3B4u;
label_16d3b4:
    // 0x16d3b4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d3b8:
    // 0x16d3b8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d3bc:
    // 0x16d3bc: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x16d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
label_16d3c0:
    // 0x16d3c0: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x16d3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16d3c4:
    // 0x16d3c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16d3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16d3c8:
    // 0x16d3c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16d3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d3cc:
    // 0x16d3cc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x16d3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16d3d0:
    // 0x16d3d0: 0xc08c8dc  jal         func_232370
label_16d3d4:
    if (ctx->pc == 0x16D3D4u) {
        ctx->pc = 0x16D3D8u;
        goto label_16d3d8;
    }
    ctx->pc = 0x16D3D0u;
    SET_GPR_U32(ctx, 31, 0x16D3D8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16D3D0u, 0x16D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3D8u;
label_16d3d8:
    // 0x16d3d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x16d3d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d3dc:
    // 0x16d3dc: 0x8fa90140  lw          $t1, 0x140($sp)
    ctx->pc = 0x16d3dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d3e0:
    // 0x16d3e0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d3e4:
    // 0x16d3e4: 0x8c45008c  lw          $a1, 0x8C($v0)
    ctx->pc = 0x16d3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_16d3e8:
    // 0x16d3e8: 0x8d240034  lw          $a0, 0x34($t1)
    ctx->pc = 0x16d3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_16d3ec:
    // 0x16d3ec: 0xc08c910  jal         func_232440
label_16d3f0:
    if (ctx->pc == 0x16D3F0u) {
        ctx->pc = 0x16D3F4u;
        goto label_16d3f4;
    }
    ctx->pc = 0x16D3ECu;
    SET_GPR_U32(ctx, 31, 0x16D3F4u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16D3ECu, 0x16D3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3F4u;
label_16d3f4:
    // 0x16d3f4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d3f8:
    // 0x16d3f8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d3fc:
    // 0x16d3fc: 0x8c66008c  lw          $a2, 0x8C($v1)
    ctx->pc = 0x16d3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_16d400:
    // 0x16d400: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d404:
    // 0x16d404: 0x8c850094  lw          $a1, 0x94($a0)
    ctx->pc = 0x16d404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_16d408:
    // 0x16d408: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x16d408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_16d40c:
    // 0x16d40c: 0x2ca40001  sltiu       $a0, $a1, 0x1
    ctx->pc = 0x16d40cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16d410:
    // 0x16d410: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x16d410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_16d414:
    // 0x16d414: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x16d414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16d418:
    // 0x16d418: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x16d418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_16d41c:
    // 0x16d41c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x16d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16d420:
    // 0x16d420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d424:
    // 0x16d424: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16d424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16d428:
    // 0x16d428: 0xc46c00f8  lwc1        $f12, 0xF8($v1)
    ctx->pc = 0x16d428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16d42c:
    // 0x16d42c: 0xc08c434  jal         func_2310D0
label_16d430:
    if (ctx->pc == 0x16D430u) {
        ctx->pc = 0x16D434u;
        goto label_16d434;
    }
    ctx->pc = 0x16D42Cu;
    SET_GPR_U32(ctx, 31, 0x16D434u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x16D42Cu, 0x16D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D434u;
label_16d434:
    // 0x16d434: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d438:
    // 0x16d438: 0x8f86bbdc  lw          $a2, -0x4424($gp)
    ctx->pc = 0x16d438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16d43c:
    // 0x16d43c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16d43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16d440:
    // 0x16d440: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x16d440u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_16d444:
    // 0x16d444: 0x24e74428  addiu       $a3, $a3, 0x4428
    ctx->pc = 0x16d444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17448));
label_16d448:
    // 0x16d448: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x16d448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16d44c:
    // 0x16d44c: 0xc08e57c  jal         func_2395F0
label_16d450:
    if (ctx->pc == 0x16D450u) {
        ctx->pc = 0x16D454u;
        goto label_16d454;
    }
    ctx->pc = 0x16D44Cu;
    SET_GPR_U32(ctx, 31, 0x16D454u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16D44Cu, 0x16D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D454u;
label_16d454:
    // 0x16d454: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x16d454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d458:
    // 0x16d458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d45c:
    // 0x16d45c: 0xc0477e8  jal         func_11DFA0
label_16d460:
    if (ctx->pc == 0x16D460u) {
        ctx->pc = 0x16D464u;
        goto label_16d464;
    }
    ctx->pc = 0x16D45Cu;
    SET_GPR_U32(ctx, 31, 0x16D464u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x16D45Cu, 0x16D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D464u;
label_16d464:
    // 0x16d464: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16d464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d468:
    // 0x16d468: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d46c:
    // 0x16d46c: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x16d46cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_16d470:
    // 0x16d470: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x16d470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_16d474:
    // 0x16d474: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16d474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16d478:
    // 0x16d478: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x16d478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d47c:
    // 0x16d47c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16d47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d480:
    // 0x16d480: 0xc08c378  jal         func_230DE0
label_16d484:
    if (ctx->pc == 0x16D484u) {
        ctx->pc = 0x16D488u;
        goto label_16d488;
    }
    ctx->pc = 0x16D480u;
    SET_GPR_U32(ctx, 31, 0x16D488u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16D480u, 0x16D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D488u;
label_16d488:
    // 0x16d488: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d48c:
    // 0x16d48c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d490:
    // 0x16d490: 0x8c450090  lw          $a1, 0x90($v0)
    ctx->pc = 0x16d490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_16d494:
    // 0x16d494: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16d494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_16d498:
    // 0x16d498: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16d498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d49c:
    // 0x16d49c: 0xc08c8dc  jal         func_232370
label_16d4a0:
    if (ctx->pc == 0x16D4A0u) {
        ctx->pc = 0x16D4A4u;
        goto label_16d4a4;
    }
    ctx->pc = 0x16D49Cu;
    SET_GPR_U32(ctx, 31, 0x16D4A4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16D49Cu, 0x16D4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4A4u;
label_16d4a4:
    // 0x16d4a4: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16d4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d4a8:
    // 0x16d4a8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d4ac:
    // 0x16d4ac: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x16d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_16d4b0:
    // 0x16d4b0: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x16d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_16d4b4:
    // 0x16d4b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d4b8:
    // 0x16d4b8: 0xc08c910  jal         func_232440
label_16d4bc:
    if (ctx->pc == 0x16D4BCu) {
        ctx->pc = 0x16D4C0u;
        goto label_16d4c0;
    }
    ctx->pc = 0x16D4B8u;
    SET_GPR_U32(ctx, 31, 0x16D4C0u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16D4B8u, 0x16D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4C0u;
label_16d4c0:
    // 0x16d4c0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d4c4:
    // 0x16d4c4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d4c8:
    // 0x16d4c8: 0x8c570090  lw          $s7, 0x90($v0)
    ctx->pc = 0x16d4c8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_16d4cc:
    // 0x16d4cc: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16d4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d4d0:
    // 0x16d4d0: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x16d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_16d4d4:
    // 0x16d4d4: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x16d4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_16d4d8:
    // 0x16d4d8: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x16d4d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16d4dc:
    // 0x16d4dc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x16d4dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16d4e0:
    // 0x16d4e0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x16d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16d4e4:
    // 0x16d4e4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x16d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_16d4e8:
    // 0x16d4e8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16d4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_16d4ec:
    // 0x16d4ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16d4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16d4f0:
    // 0x16d4f0: 0xc44c00f8  lwc1        $f12, 0xF8($v0)
    ctx->pc = 0x16d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16d4f4:
    // 0x16d4f4: 0xc08c434  jal         func_2310D0
label_16d4f8:
    if (ctx->pc == 0x16D4F8u) {
        ctx->pc = 0x16D4FCu;
        goto label_16d4fc;
    }
    ctx->pc = 0x16D4F4u;
    SET_GPR_U32(ctx, 31, 0x16D4FCu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x16D4F4u, 0x16D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4FCu;
label_16d4fc:
    // 0x16d4fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16d4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d500:
    // 0x16d500: 0x10000083  b           . + 4 + (0x83 << 2)
label_16d504:
    if (ctx->pc == 0x16D504u) {
        ctx->pc = 0x16D508u;
        goto label_16d508;
    }
    ctx->pc = 0x16D500u;
    {
        const bool branch_taken_0x16d500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d500) {
            ctx->pc = 0x16D710u;
            goto label_16d710;
        }
    }
    ctx->pc = 0x16D508u;
label_16d508:
    // 0x16d508: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16d508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16d50c:
    // 0x16d50c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d510:
    // 0x16d510: 0xac47009c  sw          $a3, 0x9C($v0)
    ctx->pc = 0x16d510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 7));
label_16d514:
    // 0x16d514: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x16d514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_16d518:
    // 0x16d518: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x16d518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
label_16d51c:
    // 0x16d51c: 0xa43024  and         $a2, $a1, $a0
    ctx->pc = 0x16d51cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_16d520:
    // 0x16d520: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x16d520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
label_16d524:
    // 0x16d524: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16d524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d528:
    // 0x16d528: 0xacc20098  sw          $v0, 0x98($a2)
    ctx->pc = 0x16d528u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 2));
label_16d52c:
    // 0x16d52c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d530:
    // 0x16d530: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x16d530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
label_16d534:
    // 0x16d534: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d538:
    // 0x16d538: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x16d538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_16d53c:
    // 0x16d53c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d540:
    // 0x16d540: 0xaca20088  sw          $v0, 0x88($a1)
    ctx->pc = 0x16d540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 2));
label_16d544:
    // 0x16d544: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d548:
    // 0x16d548: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x16d548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_16d54c:
    // 0x16d54c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16d54cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d550:
    // 0x16d550: 0xacc2008c  sw          $v0, 0x8C($a2)
    ctx->pc = 0x16d550u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 2));
label_16d554:
    // 0x16d554: 0x8f85bbdc  lw          $a1, -0x4424($gp)
    ctx->pc = 0x16d554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16d558:
    // 0x16d558: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16d558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16d55c:
    // 0x16d55c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x16d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_16d560:
    // 0x16d560: 0x24634458  addiu       $v1, $v1, 0x4458
    ctx->pc = 0x16d560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17496));
label_16d564:
    // 0x16d564: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16d564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d568:
    // 0x16d568: 0xc08e57c  jal         func_2395F0
label_16d56c:
    if (ctx->pc == 0x16D56Cu) {
        ctx->pc = 0x16D570u;
        goto label_16d570;
    }
    ctx->pc = 0x16D568u;
    SET_GPR_U32(ctx, 31, 0x16D570u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16D568u, 0x16D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D570u;
label_16d570:
    // 0x16d570: 0x27b200e8  addiu       $s2, $sp, 0xE8
    ctx->pc = 0x16d570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d574:
    // 0x16d574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d578:
    // 0x16d578: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d57c:
    // 0x16d57c: 0xc0477e8  jal         func_11DFA0
label_16d580:
    if (ctx->pc == 0x16D580u) {
        ctx->pc = 0x16D584u;
        goto label_16d584;
    }
    ctx->pc = 0x16D57Cu;
    SET_GPR_U32(ctx, 31, 0x16D584u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x16D57Cu, 0x16D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D584u;
label_16d584:
    // 0x16d584: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d588:
    // 0x16d588: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d58c:
    // 0x16d58c: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16d58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_16d590:
    // 0x16d590: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x16d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_16d594:
    // 0x16d594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d598:
    // 0x16d598: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x16d598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d59c:
    // 0x16d59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d5a0:
    // 0x16d5a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16d5a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d5a4:
    // 0x16d5a4: 0xc08c378  jal         func_230DE0
label_16d5a8:
    if (ctx->pc == 0x16D5A8u) {
        ctx->pc = 0x16D5ACu;
        goto label_16d5ac;
    }
    ctx->pc = 0x16D5A4u;
    SET_GPR_U32(ctx, 31, 0x16D5ACu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16D5A4u, 0x16D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5ACu;
label_16d5ac:
    // 0x16d5ac: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d5b0:
    // 0x16d5b0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d5b4:
    // 0x16d5b4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x16d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_16d5b8:
    // 0x16d5b8: 0x8c710034  lw          $s1, 0x34($v1)
    ctx->pc = 0x16d5b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16d5bc:
    // 0x16d5bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d5c0:
    // 0x16d5c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d5c4:
    // 0x16d5c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16d5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d5c8:
    // 0x16d5c8: 0xc08c8dc  jal         func_232370
label_16d5cc:
    if (ctx->pc == 0x16D5CCu) {
        ctx->pc = 0x16D5D0u;
        goto label_16d5d0;
    }
    ctx->pc = 0x16D5C8u;
    SET_GPR_U32(ctx, 31, 0x16D5D0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16D5C8u, 0x16D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5D0u;
label_16d5d0:
    // 0x16d5d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d5d4:
    // 0x16d5d4: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16d5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d5d8:
    // 0x16d5d8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d5dc:
    // 0x16d5dc: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16d5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_16d5e0:
    // 0x16d5e0: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x16d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_16d5e4:
    // 0x16d5e4: 0xc08c910  jal         func_232440
label_16d5e8:
    if (ctx->pc == 0x16D5E8u) {
        ctx->pc = 0x16D5ECu;
        goto label_16d5ec;
    }
    ctx->pc = 0x16D5E4u;
    SET_GPR_U32(ctx, 31, 0x16D5ECu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16D5E4u, 0x16D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D5ECu;
label_16d5ec:
    // 0x16d5ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16d5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d5f0:
    // 0x16d5f0: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16d5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d5f4:
    // 0x16d5f4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d5f8:
    // 0x16d5f8: 0x8c480088  lw          $t0, 0x88($v0)
    ctx->pc = 0x16d5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_16d5fc:
    // 0x16d5fc: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16d5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d600:
    // 0x16d600: 0x8ca60094  lw          $a2, 0x94($a1)
    ctx->pc = 0x16d600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_16d604:
    // 0x16d604: 0xc01026  xor         $v0, $a2, $zero
    ctx->pc = 0x16d604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 0));
label_16d608:
    // 0x16d608: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x16d608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16d60c:
    // 0x16d60c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16d60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16d610:
    // 0x16d610: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16d610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16d614:
    // 0x16d614: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x16d614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_16d618:
    // 0x16d618: 0x8ce50034  lw          $a1, 0x34($a3)
    ctx->pc = 0x16d618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_16d61c:
    // 0x16d61c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16d61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16d620:
    // 0x16d620: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x16d620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16d624:
    // 0x16d624: 0xc44c00f8  lwc1        $f12, 0xF8($v0)
    ctx->pc = 0x16d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16d628:
    // 0x16d628: 0xc08c434  jal         func_2310D0
label_16d62c:
    if (ctx->pc == 0x16D62Cu) {
        ctx->pc = 0x16D630u;
        goto label_16d630;
    }
    ctx->pc = 0x16D628u;
    SET_GPR_U32(ctx, 31, 0x16D630u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x16D628u, 0x16D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D630u;
label_16d630:
    // 0x16d630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d634:
    // 0x16d634: 0x8f86bbdc  lw          $a2, -0x4424($gp)
    ctx->pc = 0x16d634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_16d638:
    // 0x16d638: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16d638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16d63c:
    // 0x16d63c: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x16d63cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_16d640:
    // 0x16d640: 0x24e74428  addiu       $a3, $a3, 0x4428
    ctx->pc = 0x16d640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17448));
label_16d644:
    // 0x16d644: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x16d644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16d648:
    // 0x16d648: 0xc08e57c  jal         func_2395F0
label_16d64c:
    if (ctx->pc == 0x16D64Cu) {
        ctx->pc = 0x16D650u;
        goto label_16d650;
    }
    ctx->pc = 0x16D648u;
    SET_GPR_U32(ctx, 31, 0x16D650u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16D648u, 0x16D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D650u;
label_16d650:
    // 0x16d650: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x16d650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d654:
    // 0x16d654: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16d654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16d658:
    // 0x16d658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d65c:
    // 0x16d65c: 0xc0477e8  jal         func_11DFA0
label_16d660:
    if (ctx->pc == 0x16D660u) {
        ctx->pc = 0x16D664u;
        goto label_16d664;
    }
    ctx->pc = 0x16D65Cu;
    SET_GPR_U32(ctx, 31, 0x16D664u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x16D65Cu, 0x16D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D664u;
label_16d664:
    // 0x16d664: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d668:
    // 0x16d668: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d66c:
    // 0x16d66c: 0x8c86008c  lw          $a2, 0x8C($a0)
    ctx->pc = 0x16d66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
label_16d670:
    // 0x16d670: 0x8c470034  lw          $a3, 0x34($v0)
    ctx->pc = 0x16d670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16d674:
    // 0x16d674: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x16d674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16d678:
    // 0x16d678: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16d678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16d67c:
    // 0x16d67c: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x16d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d680:
    // 0x16d680: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16d680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d684:
    // 0x16d684: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16d684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d688:
    // 0x16d688: 0xc08c378  jal         func_230DE0
label_16d68c:
    if (ctx->pc == 0x16D68Cu) {
        ctx->pc = 0x16D690u;
        goto label_16d690;
    }
    ctx->pc = 0x16D688u;
    SET_GPR_U32(ctx, 31, 0x16D690u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16D688u, 0x16D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D690u;
label_16d690:
    // 0x16d690: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d694:
    // 0x16d694: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16d694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d698:
    // 0x16d698: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d69c:
    // 0x16d69c: 0x8c50008c  lw          $s0, 0x8C($v0)
    ctx->pc = 0x16d69cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_16d6a0:
    // 0x16d6a0: 0x8cd40034  lw          $s4, 0x34($a2)
    ctx->pc = 0x16d6a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_16d6a4:
    // 0x16d6a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16d6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16d6a8:
    // 0x16d6a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d6ac:
    // 0x16d6ac: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x16d6acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d6b0:
    // 0x16d6b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16d6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16d6b4:
    // 0x16d6b4: 0xc08c8dc  jal         func_232370
label_16d6b8:
    if (ctx->pc == 0x16D6B8u) {
        ctx->pc = 0x16D6BCu;
        goto label_16d6bc;
    }
    ctx->pc = 0x16D6B4u;
    SET_GPR_U32(ctx, 31, 0x16D6BCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16D6B4u, 0x16D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6BCu;
label_16d6bc:
    // 0x16d6bc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d6c0:
    // 0x16d6c0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d6c4:
    // 0x16d6c4: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x16d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
label_16d6c8:
    // 0x16d6c8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16d6cc:
    // 0x16d6cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d6d0:
    // 0x16d6d0: 0xc08c910  jal         func_232440
label_16d6d4:
    if (ctx->pc == 0x16D6D4u) {
        ctx->pc = 0x16D6D8u;
        goto label_16d6d8;
    }
    ctx->pc = 0x16D6D0u;
    SET_GPR_U32(ctx, 31, 0x16D6D8u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16D6D0u, 0x16D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D6D8u;
label_16d6d8:
    // 0x16d6d8: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16d6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d6dc:
    // 0x16d6dc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d6e0:
    // 0x16d6e0: 0x8c45008c  lw          $a1, 0x8C($v0)
    ctx->pc = 0x16d6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_16d6e4:
    // 0x16d6e4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d6e8:
    // 0x16d6e8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x16d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_16d6ec:
    // 0x16d6ec: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x16d6ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_16d6f0:
    // 0x16d6f0: 0x2c860001  sltiu       $a2, $a0, 0x1
    ctx->pc = 0x16d6f0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16d6f4:
    // 0x16d6f4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x16d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_16d6f8:
    // 0x16d6f8: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x16d6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16d6fc:
    // 0x16d6fc: 0x21d1821  addu        $v1, $s0, $sp
    ctx->pc = 0x16d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_16d700:
    // 0x16d700: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x16d700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_16d704:
    // 0x16d704: 0xc46c00f8  lwc1        $f12, 0xF8($v1)
    ctx->pc = 0x16d704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16d708:
    // 0x16d708: 0xc08c434  jal         func_2310D0
label_16d70c:
    if (ctx->pc == 0x16D70Cu) {
        ctx->pc = 0x16D710u;
        goto label_16d710;
    }
    ctx->pc = 0x16D708u;
    SET_GPR_U32(ctx, 31, 0x16D710u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x16D708u, 0x16D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D710u;
label_16d710:
    // 0x16d710: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x16d710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d714:
    // 0x16d714: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x16d714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16d718:
    // 0x16d718: 0xc05b6d0  jal         func_16DB40
label_16d71c:
    if (ctx->pc == 0x16D71Cu) {
        ctx->pc = 0x16D720u;
        goto label_16d720;
    }
    ctx->pc = 0x16D718u;
    SET_GPR_U32(ctx, 31, 0x16D720u);
    ctx->pc = 0x16DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DB40u, 0x16D718u, 0x16D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D720u;
label_16d720:
    // 0x16d720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d724:
    // 0x16d724: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x16d724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d728:
    // 0x16d728: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16d728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16d72c:
    // 0x16d72c: 0xc05b778  jal         func_16DDE0
label_16d730:
    if (ctx->pc == 0x16D730u) {
        ctx->pc = 0x16D734u;
        goto label_16d734;
    }
    ctx->pc = 0x16D72Cu;
    SET_GPR_U32(ctx, 31, 0x16D734u);
    ctx->pc = 0x16DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DDE0u, 0x16D72Cu, 0x16D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D734u;
label_16d734:
    // 0x16d734: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16d734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d738:
    // 0x16d738: 0x8ca4005c  lw          $a0, 0x5C($a1)
    ctx->pc = 0x16d738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_16d73c:
    // 0x16d73c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16d73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d740:
    // 0x16d740: 0x14860009  bne         $a0, $a2, . + 4 + (0x9 << 2)
label_16d744:
    if (ctx->pc == 0x16D744u) {
        ctx->pc = 0x16D748u;
        goto label_16d748;
    }
    ctx->pc = 0x16D740u;
    {
        const bool branch_taken_0x16d740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x16d740) {
            ctx->pc = 0x16D768u;
            goto label_16d768;
        }
    }
    ctx->pc = 0x16D748u;
label_16d748:
    // 0x16d748: 0x8f82ba64  lw          $v0, -0x459C($gp)
    ctx->pc = 0x16d748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
label_16d74c:
    // 0x16d74c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d750:
    // 0x16d750: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x16d750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_16d754:
    // 0x16d754: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16d754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d758:
    // 0x16d758: 0xc04c608  jal         func_131820
label_16d75c:
    if (ctx->pc == 0x16D75Cu) {
        ctx->pc = 0x16D760u;
        goto label_16d760;
    }
    ctx->pc = 0x16D758u;
    SET_GPR_U32(ctx, 31, 0x16D760u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x16D758u, 0x16D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D760u;
label_16d760:
    // 0x16d760: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16d760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d764:
    // 0x16d764: 0xaca2005c  sw          $v0, 0x5C($a1)
    ctx->pc = 0x16d764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 2));
label_16d768:
    // 0x16d768: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16d768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16d76c:
    // 0x16d76c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d770:
    // 0x16d770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d774:
    // 0x16d774: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16d774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16d778:
    // 0x16d778: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16d778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16d77c:
    // 0x16d77c: 0x320f809  jalr        $t9
label_16d780:
    if (ctx->pc == 0x16D780u) {
        ctx->pc = 0x16D784u;
        goto label_16d784;
    }
    ctx->pc = 0x16D77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D784u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D77Cu, 0x16D784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D784u;
label_16d784:
    // 0x16d784: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16d784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d788:
    // 0x16d788: 0x8f82bb9c  lw          $v0, -0x4464($gp)
    ctx->pc = 0x16d788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949788)));
label_16d78c:
    // 0x16d78c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x16d78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16d790:
    // 0x16d790: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16d790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_16d794:
    // 0x16d794: 0xc22824  and         $a1, $a2, $v0
    ctx->pc = 0x16d794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_16d798:
    // 0x16d798: 0x10a0004a  beqz        $a1, . + 4 + (0x4A << 2)
label_16d79c:
    if (ctx->pc == 0x16D79Cu) {
        ctx->pc = 0x16D7A0u;
        goto label_16d7a0;
    }
    ctx->pc = 0x16D798u;
    {
        const bool branch_taken_0x16d798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d798) {
            ctx->pc = 0x16D8C4u;
            goto label_16d8c4;
        }
    }
    ctx->pc = 0x16D7A0u;
label_16d7a0:
    // 0x16d7a0: 0xc08e094  jal         func_238250
label_16d7a4:
    if (ctx->pc == 0x16D7A4u) {
        ctx->pc = 0x16D7A8u;
        goto label_16d7a8;
    }
    ctx->pc = 0x16D7A0u;
    SET_GPR_U32(ctx, 31, 0x16D7A8u);
    ctx->pc = 0x238250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238250u, 0x16D7A0u, 0x16D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7A8u;
label_16d7a8:
    // 0x16d7a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d7ac:
    // 0x16d7ac: 0xa3a4013f  sb          $a0, 0x13F($sp)
    ctx->pc = 0x16d7acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 4));
label_16d7b0:
    // 0x16d7b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d7b4:
    // 0x16d7b4: 0xc08e054  jal         func_238150
label_16d7b8:
    if (ctx->pc == 0x16D7B8u) {
        ctx->pc = 0x16D7BCu;
        goto label_16d7bc;
    }
    ctx->pc = 0x16D7B4u;
    SET_GPR_U32(ctx, 31, 0x16D7BCu);
    ctx->pc = 0x238150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238150u, 0x16D7B4u, 0x16D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7BCu;
label_16d7bc:
    // 0x16d7bc: 0x3c16004e  lui         $s6, 0x4E
    ctx->pc = 0x16d7bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)78 << 16));
label_16d7c0:
    // 0x16d7c0: 0x26d643f0  addiu       $s6, $s6, 0x43F0
    ctx->pc = 0x16d7c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 17392));
label_16d7c4:
    // 0x16d7c4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x16d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_16d7c8:
    // 0x16d7c8: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x16d7c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_16d7cc:
    // 0x16d7cc: 0xdec40010  ld          $a0, 0x10($s6)
    ctx->pc = 0x16d7ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 22), 16)));
label_16d7d0:
    // 0x16d7d0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16d7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_16d7d4:
    // 0x16d7d4: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x16d7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
label_16d7d8:
    // 0x16d7d8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x16d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_16d7dc:
    // 0x16d7dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d7e0:
    // 0x16d7e0: 0xc0e65d6  jal         func_399758
label_16d7e4:
    if (ctx->pc == 0x16D7E4u) {
        ctx->pc = 0x16D7E8u;
        goto label_16d7e8;
    }
    ctx->pc = 0x16D7E0u;
    SET_GPR_U32(ctx, 31, 0x16D7E8u);
    ctx->pc = 0x399758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399758u, 0x16D7E0u, 0x16D7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7E8u;
label_16d7e8:
    // 0x16d7e8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x16d7e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d7ec:
    // 0x16d7ec: 0xc11c204  jal         func_470810
label_16d7f0:
    if (ctx->pc == 0x16D7F0u) {
        ctx->pc = 0x16D7F4u;
        goto label_16d7f4;
    }
    ctx->pc = 0x16D7ECu;
    SET_GPR_U32(ctx, 31, 0x16D7F4u);
    ctx->pc = 0x470810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470810u, 0x16D7ECu, 0x16D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7F4u;
label_16d7f4:
    // 0x16d7f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d7f8:
    // 0x16d7f8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x16d7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_16d7fc:
    // 0x16d7fc: 0xc0e6e40  jal         func_39B900
label_16d800:
    if (ctx->pc == 0x16D800u) {
        ctx->pc = 0x16D804u;
        goto label_16d804;
    }
    ctx->pc = 0x16D7FCu;
    SET_GPR_U32(ctx, 31, 0x16D804u);
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x16D7FCu, 0x16D804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D804u;
label_16d804:
    // 0x16d804: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d808:
    // 0x16d808: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16d808u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d80c:
    // 0x16d80c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_16d810:
    if (ctx->pc == 0x16D810u) {
        ctx->pc = 0x16D814u;
        goto label_16d814;
    }
    ctx->pc = 0x16D80Cu;
    {
        const bool branch_taken_0x16d80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d80c) {
            ctx->pc = 0x16D88Cu;
            goto label_16d88c;
        }
    }
    ctx->pc = 0x16D814u;
label_16d814:
    // 0x16d814: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d818:
    // 0x16d818: 0xc11c38c  jal         func_470E30
label_16d81c:
    if (ctx->pc == 0x16D81Cu) {
        ctx->pc = 0x16D820u;
        goto label_16d820;
    }
    ctx->pc = 0x16D818u;
    SET_GPR_U32(ctx, 31, 0x16D820u);
    ctx->pc = 0x470E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470E30u, 0x16D818u, 0x16D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D820u;
label_16d820:
    // 0x16d820: 0xc05548c  jal         func_155230
label_16d824:
    if (ctx->pc == 0x16D824u) {
        ctx->pc = 0x16D828u;
        goto label_16d828;
    }
    ctx->pc = 0x16D820u;
    SET_GPR_U32(ctx, 31, 0x16D828u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x16D820u, 0x16D828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D828u;
label_16d828:
    // 0x16d828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d82c:
    // 0x16d82c: 0xc055440  jal         func_155100
label_16d830:
    if (ctx->pc == 0x16D830u) {
        ctx->pc = 0x16D834u;
        goto label_16d834;
    }
    ctx->pc = 0x16D82Cu;
    SET_GPR_U32(ctx, 31, 0x16D834u);
    ctx->pc = 0x155100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155100u, 0x16D82Cu, 0x16D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D834u;
label_16d834:
    // 0x16d834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d838:
    // 0x16d838: 0xc11c448  jal         func_471120
label_16d83c:
    if (ctx->pc == 0x16D83Cu) {
        ctx->pc = 0x16D840u;
        goto label_16d840;
    }
    ctx->pc = 0x16D838u;
    SET_GPR_U32(ctx, 31, 0x16D840u);
    ctx->pc = 0x471120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471120u, 0x16D838u, 0x16D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D840u;
label_16d840:
    // 0x16d840: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16d840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d844:
    // 0x16d844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d848:
    // 0x16d848: 0x16a20007  bne         $s5, $v0, . + 4 + (0x7 << 2)
label_16d84c:
    if (ctx->pc == 0x16D84Cu) {
        ctx->pc = 0x16D850u;
        goto label_16d850;
    }
    ctx->pc = 0x16D848u;
    {
        const bool branch_taken_0x16d848 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d848) {
            ctx->pc = 0x16D868u;
            goto label_16d868;
        }
    }
    ctx->pc = 0x16D850u;
label_16d850:
    // 0x16d850: 0xc11c204  jal         func_470810
label_16d854:
    if (ctx->pc == 0x16D854u) {
        ctx->pc = 0x16D858u;
        goto label_16d858;
    }
    ctx->pc = 0x16D850u;
    SET_GPR_U32(ctx, 31, 0x16D858u);
    ctx->pc = 0x470810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470810u, 0x16D850u, 0x16D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D858u;
label_16d858:
    // 0x16d858: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x16d858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_16d85c:
    // 0x16d85c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d860:
    // 0x16d860: 0xc0e6e36  jal         func_39B8D8
label_16d864:
    if (ctx->pc == 0x16D864u) {
        ctx->pc = 0x16D868u;
        goto label_16d868;
    }
    ctx->pc = 0x16D860u;
    SET_GPR_U32(ctx, 31, 0x16D868u);
    ctx->pc = 0x39B8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B8D8u, 0x16D860u, 0x16D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D868u;
label_16d868:
    // 0x16d868: 0xc12242c  jal         func_4890B0
label_16d86c:
    if (ctx->pc == 0x16D86Cu) {
        ctx->pc = 0x16D870u;
        goto label_16d870;
    }
    ctx->pc = 0x16D868u;
    SET_GPR_U32(ctx, 31, 0x16D870u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x16D868u, 0x16D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D870u;
label_16d870:
    // 0x16d870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d874:
    // 0x16d874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d878:
    // 0x16d878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d87c:
    // 0x16d87c: 0xc105fb4  jal         func_417ED0
label_16d880:
    if (ctx->pc == 0x16D880u) {
        ctx->pc = 0x16D884u;
        goto label_16d884;
    }
    ctx->pc = 0x16D87Cu;
    SET_GPR_U32(ctx, 31, 0x16D884u);
    ctx->pc = 0x417ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417ED0u, 0x16D87Cu, 0x16D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D884u;
label_16d884:
    // 0x16d884: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16d884u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d888:
    // 0x16d888: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x16d888u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_16d88c:
    // 0x16d88c: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x16d88cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_16d890:
    // 0x16d890: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_16d894:
    if (ctx->pc == 0x16D894u) {
        ctx->pc = 0x16D898u;
        goto label_16d898;
    }
    ctx->pc = 0x16D890u;
    {
        const bool branch_taken_0x16d890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d890) {
            ctx->pc = 0x16D814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d814;
        }
    }
    ctx->pc = 0x16D898u;
label_16d898:
    // 0x16d898: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x16d898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_16d89c:
    // 0x16d89c: 0xc0e653c  jal         func_3994F0
label_16d8a0:
    if (ctx->pc == 0x16D8A0u) {
        ctx->pc = 0x16D8A4u;
        goto label_16d8a4;
    }
    ctx->pc = 0x16D89Cu;
    SET_GPR_U32(ctx, 31, 0x16D8A4u);
    ctx->pc = 0x3994F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3994F0u, 0x16D89Cu, 0x16D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8A4u;
label_16d8a4:
    // 0x16d8a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16d8a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d8a8:
    // 0x16d8a8: 0x93a2013f  lbu         $v0, 0x13F($sp)
    ctx->pc = 0x16d8a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 319)));
label_16d8ac:
    // 0x16d8ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16d8b0:
    if (ctx->pc == 0x16D8B0u) {
        ctx->pc = 0x16D8B4u;
        goto label_16d8b4;
    }
    ctx->pc = 0x16D8ACu;
    {
        const bool branch_taken_0x16d8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d8ac) {
            ctx->pc = 0x16D8C4u;
            goto label_16d8c4;
        }
    }
    ctx->pc = 0x16D8B4u;
label_16d8b4:
    // 0x16d8b4: 0x93a4013f  lbu         $a0, 0x13F($sp)
    ctx->pc = 0x16d8b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 319)));
label_16d8b8:
    // 0x16d8b8: 0xc08e054  jal         func_238150
label_16d8bc:
    if (ctx->pc == 0x16D8BCu) {
        ctx->pc = 0x16D8C0u;
        goto label_16d8c0;
    }
    ctx->pc = 0x16D8B8u;
    SET_GPR_U32(ctx, 31, 0x16D8C0u);
    ctx->pc = 0x238150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238150u, 0x16D8B8u, 0x16D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8C0u;
label_16d8c0:
    // 0x16d8c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d8c4:
    // 0x16d8c4: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x16d8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_16d8c8:
    // 0x16d8c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16d8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16d8cc:
    // 0x16d8cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d8d0:
    // 0x16d8d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d8d4:
    // 0x16d8d4: 0xc0406a0  jal         func_101A80
label_16d8d8:
    if (ctx->pc == 0x16D8D8u) {
        ctx->pc = 0x16D8DCu;
        goto label_16d8dc;
    }
    ctx->pc = 0x16D8D4u;
    SET_GPR_U32(ctx, 31, 0x16D8DCu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16D8D4u, 0x16D8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8DCu;
label_16d8dc:
    // 0x16d8dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d8e0:
    // 0x16d8e0: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x16d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_16d8e4:
    // 0x16d8e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d8e8:
    // 0x16d8e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d8ec:
    // 0x16d8ec: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16d8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d8f0:
    // 0x16d8f0: 0xc0406a0  jal         func_101A80
label_16d8f4:
    if (ctx->pc == 0x16D8F4u) {
        ctx->pc = 0x16D8F8u;
        goto label_16d8f8;
    }
    ctx->pc = 0x16D8F0u;
    SET_GPR_U32(ctx, 31, 0x16D8F8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16D8F0u, 0x16D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8F8u;
label_16d8f8:
    // 0x16d8f8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x16d8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_16d8fc:
    // 0x16d8fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16d8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16d900:
    // 0x16d900: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d904:
    // 0x16d904: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16d904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d908:
    // 0x16d908: 0xc0406a0  jal         func_101A80
label_16d90c:
    if (ctx->pc == 0x16D90Cu) {
        ctx->pc = 0x16D910u;
        goto label_16d910;
    }
    ctx->pc = 0x16D908u;
    SET_GPR_U32(ctx, 31, 0x16D910u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16D908u, 0x16D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D910u;
label_16d910:
    // 0x16d910: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16d910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d914:
    // 0x16d914: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x16d914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_16d918:
    // 0x16d918: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16d918u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16d91c:
    // 0x16d91c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16d91cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16d920:
    // 0x16d920: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16d920u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16d924:
    // 0x16d924: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16d924u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16d928:
    // 0x16d928: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16d928u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16d92c:
    // 0x16d92c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16d92cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16d930:
    // 0x16d930: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16d930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16d934:
    // 0x16d934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d938:
    // 0x16d938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16d93c:
    // 0x16d93c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x16d93cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_16d940:
    // 0x16d940: 0x3e00008  jr          $ra
label_16d944:
    if (ctx->pc == 0x16D944u) {
        ctx->pc = 0x16D948u;
        goto label_16d948;
    }
    ctx->pc = 0x16D940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D948u;
label_16d948:
    // 0x16d948: 0x0  nop
    ctx->pc = 0x16d948u;
    // NOP
label_16d94c:
    // 0x16d94c: 0x0  nop
    ctx->pc = 0x16d94cu;
    // NOP
label_16d950:
    // 0x16d950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16d950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16d954:
    // 0x16d954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16d958:
    // 0x16d958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16d95c:
    // 0x16d95c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x16d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_16d960:
    // 0x16d960: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16d964:
    // 0x16d964: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x16d964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_16d968:
    // 0x16d968: 0xc08d304  jal         func_234C10
label_16d96c:
    if (ctx->pc == 0x16D96Cu) {
        ctx->pc = 0x16D970u;
        goto label_16d970;
    }
    ctx->pc = 0x16D968u;
    SET_GPR_U32(ctx, 31, 0x16D970u);
    ctx->pc = 0x234C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234C10u, 0x16D968u, 0x16D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D970u;
label_16d970:
    // 0x16d970: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16d970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16d974:
    // 0x16d974: 0x27858f70  addiu       $a1, $gp, -0x7090
    ctx->pc = 0x16d974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938480));
label_16d978:
    // 0x16d978: 0xc0bc3e2  jal         func_2F0F88
label_16d97c:
    if (ctx->pc == 0x16D97Cu) {
        ctx->pc = 0x16D980u;
        goto label_16d980;
    }
    ctx->pc = 0x16D978u;
    SET_GPR_U32(ctx, 31, 0x16D980u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16D978u, 0x16D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D980u;
label_16d980:
    // 0x16d980: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x16d980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16d984:
    // 0x16d984: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16d984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16d988:
    // 0x16d988: 0xc0552e4  jal         func_154B90
label_16d98c:
    if (ctx->pc == 0x16D98Cu) {
        ctx->pc = 0x16D990u;
        goto label_16d990;
    }
    ctx->pc = 0x16D988u;
    SET_GPR_U32(ctx, 31, 0x16D990u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16D988u, 0x16D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D990u;
label_16d990:
    // 0x16d990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16d990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d994:
    // 0x16d994: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16d994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16d998:
    // 0x16d998: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16d998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16d99c:
    // 0x16d99c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d9a0:
    // 0x16d9a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d9a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d9a4:
    // 0x16d9a4: 0xc08c8dc  jal         func_232370
label_16d9a8:
    if (ctx->pc == 0x16D9A8u) {
        ctx->pc = 0x16D9ACu;
        goto label_16d9ac;
    }
    ctx->pc = 0x16D9A4u;
    SET_GPR_U32(ctx, 31, 0x16D9ACu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16D9A4u, 0x16D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9ACu;
label_16d9ac:
    // 0x16d9ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16d9b0:
    // 0x16d9b0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x16d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_16d9b4:
    // 0x16d9b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d9b8:
    // 0x16d9b8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_16d9bc:
    if (ctx->pc == 0x16D9BCu) {
        ctx->pc = 0x16D9C0u;
        goto label_16d9c0;
    }
    ctx->pc = 0x16D9B8u;
    {
        const bool branch_taken_0x16d9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16d9b8) {
            ctx->pc = 0x16D9E0u;
            goto label_16d9e0;
        }
    }
    ctx->pc = 0x16D9C0u;
label_16d9c0:
    // 0x16d9c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16d9c4:
    // 0x16d9c4: 0x8f84ba64  lw          $a0, -0x459C($gp)
    ctx->pc = 0x16d9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
label_16d9c8:
    // 0x16d9c8: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x16d9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_16d9cc:
    // 0x16d9cc: 0xc04c608  jal         func_131820
label_16d9d0:
    if (ctx->pc == 0x16D9D0u) {
        ctx->pc = 0x16D9D4u;
        goto label_16d9d4;
    }
    ctx->pc = 0x16D9CCu;
    SET_GPR_U32(ctx, 31, 0x16D9D4u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x16D9CCu, 0x16D9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9D4u;
label_16d9d4:
    // 0x16d9d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d9d8:
    // 0x16d9d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16d9dc:
    // 0x16d9dc: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x16d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_16d9e0:
    // 0x16d9e0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x16d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16d9e4:
    // 0x16d9e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d9e8:
    // 0x16d9e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16d9e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16d9ec:
    // 0x16d9ec: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16d9ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16d9f0:
    // 0x16d9f0: 0x320f809  jalr        $t9
label_16d9f4:
    if (ctx->pc == 0x16D9F4u) {
        ctx->pc = 0x16D9F8u;
        goto label_16d9f8;
    }
    ctx->pc = 0x16D9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D9F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D9F0u, 0x16D9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D9F8u;
label_16d9f8:
    // 0x16d9f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16d9fc:
    // 0x16d9fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16da00:
    // 0x16da00: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16da00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16da04:
    // 0x16da04: 0x3e00008  jr          $ra
label_16da08:
    if (ctx->pc == 0x16DA08u) {
        ctx->pc = 0x16DA0Cu;
        goto label_16da0c;
    }
    ctx->pc = 0x16DA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DA0Cu;
label_16da0c:
    // 0x16da0c: 0x0  nop
    ctx->pc = 0x16da0cu;
    // NOP
label_16da10:
    // 0x16da10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16da10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16da14:
    // 0x16da14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16da14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16da18:
    // 0x16da18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16da18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16da1c:
    // 0x16da1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_16da20:
    // 0x16da20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16da20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16da24:
    // 0x16da24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16da24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16da28:
    // 0x16da28: 0xc0413bc  jal         func_104EF0
label_16da2c:
    if (ctx->pc == 0x16DA2Cu) {
        ctx->pc = 0x16DA30u;
        goto label_16da30;
    }
    ctx->pc = 0x16DA28u;
    SET_GPR_U32(ctx, 31, 0x16DA30u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x16DA28u, 0x16DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA30u;
label_16da30:
    // 0x16da30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16da34:
    if (ctx->pc == 0x16DA34u) {
        ctx->pc = 0x16DA38u;
        goto label_16da38;
    }
    ctx->pc = 0x16DA30u;
    {
        const bool branch_taken_0x16da30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da30) {
            ctx->pc = 0x16DA50u;
            goto label_16da50;
        }
    }
    ctx->pc = 0x16DA38u;
label_16da38:
    // 0x16da38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16da3c:
    // 0x16da3c: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x16da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_16da40:
    // 0x16da40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16da44:
    if (ctx->pc == 0x16DA44u) {
        ctx->pc = 0x16DA48u;
        goto label_16da48;
    }
    ctx->pc = 0x16DA40u;
    {
        const bool branch_taken_0x16da40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16da40) {
            ctx->pc = 0x16DA50u;
            goto label_16da50;
        }
    }
    ctx->pc = 0x16DA48u;
label_16da48:
    // 0x16da48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16da48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16da4c:
    // 0x16da4c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16da4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16da50:
    // 0x16da50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16da50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16da54:
    // 0x16da54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16da54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16da58:
    // 0x16da58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16da58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16da5c:
    // 0x16da5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16da5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16da60:
    // 0x16da60: 0x3e00008  jr          $ra
label_16da64:
    if (ctx->pc == 0x16DA64u) {
        ctx->pc = 0x16DA68u;
        goto label_16da68;
    }
    ctx->pc = 0x16DA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DA68u;
label_16da68:
    // 0x16da68: 0x0  nop
    ctx->pc = 0x16da68u;
    // NOP
label_16da6c:
    // 0x16da6c: 0x0  nop
    ctx->pc = 0x16da6cu;
    // NOP
    ctx->pc = 0x16da70u;
}
